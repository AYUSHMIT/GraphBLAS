//------------------------------------------------------------------------------
// GB_new: create a new GraphBLAS matrix
//------------------------------------------------------------------------------

// SuiteSparse:GraphBLAS, Timothy A. Davis, (c) 2017-2020, All Rights Reserved.
// http://suitesparse.com   See GraphBLAS/Doc/License.txt for license.

//------------------------------------------------------------------------------

// Creates a new matrix but does not allocate space for A->i and A->x.
// See GB_create instead.

// If the Ap_option is GB_Ap_calloc, the A->p and A->h are allocated and
// initialized, and A->magic is set to GB_MAGIC to denote a valid matrix.
// Otherwise, the matrix has not yet been fully initialized, and A->magic is
// set to GB_MAGIC2 to denote this.  This case only occurs internally in
// GraphBLAS.  The internal function that calls GB_new must then allocate or
// initialize A->p itself, and then set A->magic = GB_MAGIC when it does so.

// Only GrB_SUCCESS and GrB_OUT_OF_MEMORY can be returned by this function.

// The GrB_Matrix object holds both a sparse vector and a sparse matrix.  A
// vector is represented as an vlen-by-1 matrix, but it is sometimes treated
// differently in various methods.  Vectors are never transposed via a
// descriptor, for example.

// The matrix may be created in an existing header, which case *Ahandle is
// non-NULL on input.  If an out-of-memory condition occurs, (*Ahandle) is
// returned as NULL, and the existing header is freed as well, if non-NULL on
// input.

// To see where these options are used in SuiteSparse:GraphBLAS:
// grep "allocate a new header"
// which shows all uses of GB_new and GB_create

#include "GB.h"

GB_PUBLIC   // accessed by the MATLAB tests in GraphBLAS/Test only
GrB_Info GB_new                 // create matrix, except for indices & values
(
    GrB_Matrix *Ahandle,        // handle of matrix to create
    const GrB_Type type,        // matrix type
    const int64_t vlen,         // length of each vector
    const int64_t vdim,         // number of vectors
    const GB_Ap_code Ap_option, // allocate A->p and A->h, or leave NULL
    const bool is_csc,          // true if CSC, false if CSR
    const int hyper_option,     // 1:hyper, 0:nonhyper, -1:auto
    const double hyper_ratio,   // A->hyper_ratio, unless auto
    const int64_t plen,         // size of A->p and A->h, if A hypersparse.
                                // Ignored if A is not hypersparse.
    GB_Context Context
)
{

    //--------------------------------------------------------------------------
    // check inputs
    //--------------------------------------------------------------------------

    ASSERT (Ahandle != NULL) ;
    ASSERT_TYPE_OK (type, "type for GB_new", GB0) ;
    ASSERT (vlen >= 0 && vlen <= GxB_INDEX_MAX)
    ASSERT (vdim >= 0 && vdim <= GxB_INDEX_MAX) ;

    //--------------------------------------------------------------------------
    // allocate the matrix header, if not already allocated on input
    //--------------------------------------------------------------------------

    bool allocated_header = false ;
    if ((*Ahandle) == NULL)
    {
        (*Ahandle) = GB_CALLOC (1, struct GB_Matrix_opaque) ;
        if (*Ahandle == NULL)
        { 
            // out of memory
            return (GrB_OUT_OF_MEMORY) ;
        }
        allocated_header = true ;
    }

    GrB_Matrix A = *Ahandle ;

    //--------------------------------------------------------------------------
    // initialize the matrix header
    //--------------------------------------------------------------------------

    // basic information
    A->magic = GB_MAGIC2 ;                 // object is not yet valid
    A->type = type ;
    A->type_size = type->size ; // save the type->size for safe GrB_free

    // CSR/CSC format
    A->is_csc = is_csc ;

    // hypersparsity
    bool is_hyper ;
    if (hyper_option == GB_FORCE_HYPER)
    { 
        is_hyper = true ;               // force hypersparse
        A->hyper_ratio = hyper_ratio ;
    }
    else if (hyper_option == GB_FORCE_NONHYPER)
    { 
        is_hyper = false ;              // force non-hypersparse
        A->hyper_ratio = hyper_ratio ;
    }
    else // GB_AUTO_HYPER
    { 
        // auto selection:  non-hypersparse if one vector or less, or
        // if the global hyper_ratio is negative.  This is only used by
        // GrB_Matrix_new, and in a special case in GB_mask.
        ASSERT (hyper_option == GB_AUTO_HYPER) ;
        double hyper_ratio = GB_Global_hyper_ratio_get ( ) ;
        A->hyper_ratio = hyper_ratio ;
        is_hyper = !(vdim <= 1 || 0 > hyper_ratio) ;
    }
    A->is_hyper = is_hyper ;

    // matrix dimensions
    A->vlen = vlen ;
    A->vdim = vdim ;

    // content that is freed or reset in GB_ph_free
    if (is_hyper)
    { 
        A->plen = GB_IMIN (plen, vdim) ;
        A->nvec = 0 ;           // no vectors present
    }
    else
    { 
        A->plen = vdim ;
        A->nvec = vdim ;        // all vectors present in the data structure
                                // (but all are currently empty)
    }
    A->p = NULL ;
    A->h = NULL ;
    A->hfirst = 0 ;
    A->is_slice = false ;       // true if A is a slice or hyperslice
    A->p_shallow = false ;
    A->h_shallow = false ;
    A->nvec_nonempty = 0 ;      // all vectors are empty
    A->mkl = NULL ;             // no analysis from MKL yet

    A->logger = NULL ;          // no error logged yet

    // content that is freed or reset in GB_ix_free
    A->i = NULL ;
    A->x = NULL ;
    A->nzmax = 0 ;              // GB_NNZ(A) checks nzmax==0 before Ap[nvec]
    A->i_shallow = false ;
    A->x_shallow = false ;
    A->nzombies = 0 ;
    A->Pending = NULL ;

    //--------------------------------------------------------------------------
    // Allocate A->p and A->h if requested
    //--------------------------------------------------------------------------

    bool ok ;
    if (Ap_option == GB_Ap_calloc)
    {
        // Sets the vector pointers to zero, which defines all vectors as empty
        A->magic = GB_MAGIC ;
        A->p = GB_CALLOC (A->plen+1, int64_t) ;
        ok = (A->p != NULL) ;
        if (is_hyper)
        { 
            // since nvec is zero, there is never any need to initialize A->h
            A->h = GB_MALLOC (A->plen, int64_t) ;
            ok = ok && (A->h != NULL) ;
        }
    }
    else if (Ap_option == GB_Ap_malloc)
    {
        // This is faster but can only be used internally by GraphBLAS since
        // the matrix is allocated but not yet fully initialized.  The caller
        // must set A->p [0..plen] and then set A->magic to GB_MAGIC, before
        // returning the matrix to the user application.  GB_NNZ(A) must check
        // A->nzmax == 0 since A->p [A->nvec] is undefined.
        A->magic = GB_MAGIC2 ;
        A->p = GB_MALLOC (A->plen+1, int64_t) ;
        ok = (A->p != NULL) ;
        if (is_hyper)
        { 
            A->h = GB_MALLOC (A->plen, int64_t) ;
            ok = ok && (A->h != NULL) ;
        }
    }
    else // Ap_option == GB_Ap_null
    { 
        // A is not initialized yet; A->p and A->h are both NULL.
        // GB_NNZ(A) must check A->nzmax == 0 since A->p is not allocated.
        A->magic = GB_MAGIC2 ;
        A->p = NULL ;
        A->h = NULL ;
        ok = true ;
    }

    if (!ok)
    {
        // out of memory
        if (allocated_header)
        { 
            // only free the header if it was allocated here
            GB_Matrix_free (Ahandle) ;
        }
        return (GrB_OUT_OF_MEMORY) ;
    }

    // The vector pointers A->p are initialized only if Ap_calloc is true
    if (Ap_option == GB_Ap_calloc)
    { 
        ASSERT_MATRIX_OK (A, "new matrix from GB_new", GB0) ;
    }
    return (GrB_SUCCESS) ;
}

