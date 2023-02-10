//------------------------------------------------------------------------------
// GB_red:  hard-coded functions for reductions
//------------------------------------------------------------------------------

// SuiteSparse:GraphBLAS, Timothy A. Davis, (c) 2017-2023, All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

//------------------------------------------------------------------------------

// If this file is in the Generated2/ folder, do not edit it
// (it is auto-generated from Generator/*).

#include "GB.h"
#ifndef GBCUDA_DEV
#include "GB_control.h" 
#include "GB_red__include.h"

// Reduce to scalar:  GB (_red__eq_bool)

// reduction operator and type:
#define GB_UPDATE(z,a)  z = (z == a)
#define GB_ADD(z,zin,a) z = (zin == a)
#define GB_GETA_AND_UPDATE(z,Ax,p) z = (z == Ax [p])

// declare a scalar and set it equal to the monoid identity value
#define GB_DECLARE_IDENTITY(z) bool z = true
#define GB_DECLARE_IDENTITY_CONST(z) const bool z = true

// A matrix (no typecasting to Z type here)
#define GB_A_TYPE bool
#define GB_DECLAREA(aij) bool aij
#define GB_GETA(aij,Ax,pA,A_iso) aij = Ax [pA]

// monoid type:
#define GB_Z_TYPE bool

// monoid terminal condition, if any:

// panel size
#define GB_PANEL 8

// disable this operator and use the generic case if these conditions hold
#define GB_DISABLE \
    (GxB_NO_EQ || GxB_NO_BOOL || GxB_NO_EQ_BOOL)

#include "GB_monoid_shared_definitions.h"

//------------------------------------------------------------------------------
// reduce to a non-iso matrix to scalar, for monoids only
//------------------------------------------------------------------------------

GrB_Info GB (_red__eq_bool)
(
    GB_Z_TYPE *result,
    const GrB_Matrix A,
    GB_void *restrict W_space,
    bool *restrict F,
    int ntasks,
    int nthreads
)
{ 
    #if GB_DISABLE
    return (GrB_NO_VALUE) ;
    #else
    GB_Z_TYPE z = (*result) ;
    GB_Z_TYPE *restrict W = (GB_Z_TYPE *) W_space ;
    if (A->nzombies > 0 || GB_IS_BITMAP (A))
    {
        #include "GB_reduce_to_scalar_template.c"
    }
    else
    {
        #include "GB_reduce_panel.c"
    }
    (*result) = z ;
    return (GrB_SUCCESS) ;
    #endif
}

#endif

