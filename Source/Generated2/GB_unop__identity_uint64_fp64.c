//------------------------------------------------------------------------------
// GB_unop:  hard-coded functions for each built-in unary operator
//------------------------------------------------------------------------------

// SuiteSparse:GraphBLAS, Timothy A. Davis, (c) 2017-2022, All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

//------------------------------------------------------------------------------

#ifndef GBCUDA_DEV
#include "GB.h"
#include "GB_control.h"
#include "GB_unop__include.h"

// C type:   uint64_t
// A type:   double
// cast:     uint64_t cij = GB_cast_to_uint64_t ((double) (aij))
// unaryop:  cij = aij

#define GB_A_TYPE \
    double

#define GB_C_TYPE \
    uint64_t

// declare aij as atype
#define GB_DECLAREA(aij) \
    double aij

// aij = Ax [pA]
#define GB_GETA(aij,Ax,pA,A_iso) \
    aij = Ax [pA]

#define GB_CX(p) Cx [p]

// unary operator
#define GB_OP(z, x) \
    z = x ;

// casting
#define GB_CAST(z, aij) \
    uint64_t z = GB_cast_to_uint64_t ((double) (aij)) ;

// cij = op (aij)
#define GB_CAST_OP(pC,pA)           \
{                                   \
    /* aij = Ax [pA] */             \
    double aij ;              \
    aij = Ax [pA] ;   \
    /* Cx [pC] = op (cast (aij)) */ \
    uint64_t z = GB_cast_to_uint64_t ((double) (aij)) ;               \
    Cx [pC] = z ;        \
}

// disable this operator and use the generic case if these conditions hold
#define GB_DISABLE \
    (GxB_NO_IDENTITY || GxB_NO_UINT64 || GxB_NO_FP64)

//------------------------------------------------------------------------------
// Cx = op (cast (Ax)): apply a unary operator
//------------------------------------------------------------------------------

GrB_Info GB (_unop_apply__identity_uint64_fp64)
(
    uint64_t *Cx,               // Cx and Ax may be aliased
    const double *Ax,         // A is always non-iso for this kernel
    const int8_t *restrict Ab,  // A->b if A is bitmap
    int64_t anz,
    int nthreads
)
{
    #if GB_DISABLE
    return (GrB_NO_VALUE) ;
    #else
    int64_t p ;
    if (Ab == NULL)
    { 
        #pragma omp parallel for num_threads(nthreads) schedule(static)
        for (p = 0 ; p < anz ; p++)
        {
            double aij ;
            aij = Ax [p] ;
            uint64_t z = GB_cast_to_uint64_t ((double) (aij)) ;
            Cx [p] = z ;
        }
    }
    else
    { 
        // bitmap case, no transpose; A->b already memcpy'd into C->b
        #pragma omp parallel for num_threads(nthreads) schedule(static)
        for (p = 0 ; p < anz ; p++)
        {
            if (!Ab [p]) continue ;
            double aij ;
            aij = Ax [p] ;
            uint64_t z = GB_cast_to_uint64_t ((double) (aij)) ;
            Cx [p] = z ;
        }
    }
    return (GrB_SUCCESS) ;
    #endif
}

//------------------------------------------------------------------------------
// C = op (cast (A')): transpose, typecast, and apply a unary operator
//------------------------------------------------------------------------------

GrB_Info GB (_unop_tran__identity_uint64_fp64)
(
    GrB_Matrix C,
    const GrB_Matrix A,
    int64_t *restrict *Workspaces,
    const int64_t *restrict A_slice,
    int nworkspaces,
    int nthreads
)
{ 
    #if GB_DISABLE
    return (GrB_NO_VALUE) ;
    #else
    #include "GB_unop_transpose.c"
    return (GrB_SUCCESS) ;
    #endif
}

#endif

