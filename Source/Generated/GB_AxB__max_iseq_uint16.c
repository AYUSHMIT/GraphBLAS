//------------------------------------------------------------------------------
// GB_AxB:  hard-coded functions for semiring: C<M>=A*B or A'*B
//------------------------------------------------------------------------------

// SuiteSparse:GraphBLAS, Timothy A. Davis, (c) 2017-2019, All Rights Reserved.
// http://suitesparse.com   See GraphBLAS/Doc/License.txt for license.

//------------------------------------------------------------------------------

// Unless this file is Generator/GB_AxB.c, do not edit it (auto-generated)

#include "GB.h"
#ifndef GBCOMPACT
#include "GB_AxB__include.h"
#include "GB_control.h"

// The C=A*B semiring is defined by the following types and operators:

// A*B function (Gustavon):  GB_AgusB__max_iseq_uint16
// A'*B function (dot):      GB_AdotB__max_iseq_uint16
// A*B function (heap):      GB_AheapB__max_iseq_uint16

// C type:   uint16_t
// A type:   uint16_t
// B type:   uint16_t

// Multiply: z = (aik == bkj)
// Add:      cij = GB_IMAX (cij, z)
// MultAdd:  cij = GB_IMAX (cij, (aik == bkj))
// Identity: 0
// Terminal: if (cij == UINT16_MAX) break ;

#define GB_ATYPE \
    uint16_t

#define GB_BTYPE \
    uint16_t

#define GB_CTYPE \
    uint16_t

// aik = Ax [pA]
#define GB_GETA(aik,Ax,pA) \
    uint16_t aik = Ax [pA]

// bkj = Bx [pB]
#define GB_GETB(bkj,Bx,pB) \
    uint16_t bkj = Bx [pB]

#define GB_CX(p) Cx [p]

// multiply operator
#define GB_MULT(z, x, y)        \
    z = (x == y) ;

// multiply-add
#define GB_MULTADD(z, x, y)     \
    z = GB_IMAX (z, (x == y)) ;

// copy scalar
#define GB_COPY(z,x) z = x ;

// monoid identity value (Gustavson's method only, with no mask)
#define GB_IDENTITY \
    0

// break if cij reaches the terminal value (dot product only)
#define GB_DOT_TERMINAL(cij) \
    if (cij == UINT16_MAX) break ;

// simd pragma for dot product
#define GB_DOT_SIMD \
    ;

// cij is not a pointer but a scalar; nothing to do
#define GB_CIJ_REACQUIRE(cij,cnz) ;

// declare the cij scalar
#define GB_CIJ_DECLARE(cij) ; \
    uint16_t cij ;

// save the value of C(i,j)
#define GB_CIJ_SAVE(cij,p) Cx [p] = cij ;

#define GB_SAUNA_WORK(i) Sauna_Work [i]

// disable this semiring and use the generic case if these conditions hold
#define GB_DISABLE \
    (GxB_NO_MAX || GxB_NO_ISEQ || GxB_NO_UINT16 || GxB_NO_MAX_UINT16 || GxB_NO_ISEQ_UINT16 || GxB_NO_MAX_ISEQ_UINT16)

//------------------------------------------------------------------------------
// C<M>=A*B and C=A*B: gather/scatter saxpy-based method (Gustavson)
//------------------------------------------------------------------------------

GrB_Info GB_AgusB__max_iseq_uint16
(
    GrB_Matrix C,
    const GrB_Matrix M,
    const GrB_Matrix A, bool A_is_pattern,
    const GrB_Matrix B, bool B_is_pattern,
    GB_Sauna Sauna
)
{ 
    #if GB_DISABLE
    return (GrB_NO_VALUE) ;
    #else
    uint16_t *restrict Sauna_Work = Sauna->Sauna_Work ;
    uint16_t *restrict Cx = C->x ;
    GrB_Info info = GrB_SUCCESS ;
    #include "GB_AxB_Gustavson_meta.c"
    return (info) ;
    #endif
}

//------------------------------------------------------------------------------
// C<M>=A'*B, C<!M>=A'*B or C=A'*B: dot product
//------------------------------------------------------------------------------

GrB_Info GB_AdotB__max_iseq_uint16
(
    GrB_Matrix *Chandle,
    const GrB_Matrix M, const bool Mask_comp,
    const GrB_Matrix A, bool A_is_pattern,
    const GrB_Matrix B, bool B_is_pattern
)
{ 
    #if GB_DISABLE
    return (GrB_NO_VALUE) ;
    #else
    GrB_Matrix C = (*Chandle) ;
    GrB_Info info = GrB_SUCCESS ;
    int nthreads = 1 ;
    #define GB_SINGLE_PHASE
    #include "GB_AxB_dot_meta.c"
    #undef GB_SINGLE_PHASE
    return (info) ;
    #endif
}

//------------------------------------------------------------------------------
// C<M>=A'*B, C<!M>=A'*B or C=A'*B: dot product (phase 2)
//------------------------------------------------------------------------------

GrB_Info GB_Adot2B__max_iseq_uint16
(
    GrB_Matrix C,
    const GrB_Matrix M, const bool Mask_comp,
    const GrB_Matrix *Aslice, bool A_is_pattern,
    const GrB_Matrix B, bool B_is_pattern,
    int64_t **C_counts,
    int nthreads, int naslice, int nbslice
)
{ 
    #if GB_DISABLE
    return (GrB_NO_VALUE) ;
    #else
    #define GB_PHASE_2_OF_2
    #include "GB_AxB_dot2_meta.c"
    #undef GB_PHASE_2_OF_2
    return (GrB_SUCCESS) ;
    #endif
}

//------------------------------------------------------------------------------
// C<M>=A*B and C=A*B: heap saxpy-based method
//------------------------------------------------------------------------------

#include "GB_heap.h"

GrB_Info GB_AheapB__max_iseq_uint16
(
    GrB_Matrix *Chandle,
    const GrB_Matrix M,
    const GrB_Matrix A, bool A_is_pattern,
    const GrB_Matrix B, bool B_is_pattern,
    int64_t *restrict List,
    GB_pointer_pair *restrict pA_pair,
    GB_Element *restrict Heap,
    const int64_t bjnz_max
)
{ 
    #if GB_DISABLE
    return (GrB_NO_VALUE) ;
    #else
    GrB_Matrix C = (*Chandle) ;
    uint16_t *restrict Cx = C->x ;
    uint16_t cij ;
    int64_t cvlen = C->vlen ;
    GrB_Info info = GrB_SUCCESS ;
    #include "GB_AxB_heap_meta.c"
    return (info) ;
    #endif
}

#endif

