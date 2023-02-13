//------------------------------------------------------------------------------
// GB_type:  hard-coded functions for each built-in type
//------------------------------------------------------------------------------

// SuiteSparse:GraphBLAS, Timothy A. Davis, (c) 2017-2022, All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

//------------------------------------------------------------------------------

#ifndef GBCUDA_DEV
#include "GB.h"
#include "GB_control.h"
#include "GB_ek_slice.h"
#include "GB_type__include.h"

#define GB_C_TYPE \
    int8_t

// C must have the same type as A or the scalar x
#define GB_A_TYPE GB_C_TYPE

#define GB_CX(p) Cx [p]

// Cx [p] = scalar
#define GB_COPY_SCALAR_TO_C(p,x) Cx [p] = x

// Cx [p] = Ax [pA]
#define GB_COPY_A_TO_C(Cx,p,Ax,pA,A_iso) Cx [p] = GBX (Ax, pA, A_iso)

// test the mask condition with Ax [pA]
#define GB_AX_MASK(Ax,pA,asize) \
    (Ax [pA] != 0)

// disable this operator and use the generic case if these conditions hold
#define GB_DISABLE \
    (GxB_NO_INT8)

#include "GB_kernel_shared_definitions.h"
#include "GB_mask_shared_definitions.h"

//------------------------------------------------------------------------------
// C<M>=x, when C is dense
//------------------------------------------------------------------------------

GrB_Info GB (_Cdense_05d__int8)
(
    GrB_Matrix C,
    const GrB_Matrix M,
    const bool Mask_struct,
    const GB_void *p_cwork,     // scalar of type C->type
    const int64_t *M_ek_slicing, const int M_ntasks, const int M_nthreads
)
{ 
    #if GB_DISABLE
    return (GrB_NO_VALUE) ;
    #else
    int8_t cwork = (*((int8_t *) p_cwork)) ;
    #include "GB_dense_subassign_05d_template.c"
    return (GrB_SUCCESS) ;
    #endif
}

//------------------------------------------------------------------------------
// C<A>=A, when C is dense
//------------------------------------------------------------------------------

GrB_Info GB (_Cdense_06d__int8)
(
    GrB_Matrix C,
    const GrB_Matrix A,
    const bool Mask_struct,
    const int64_t *A_ek_slicing, const int A_ntasks, const int A_nthreads
)
{ 
    #if GB_DISABLE
    return (GrB_NO_VALUE) ;
    #else
    ASSERT (C->type == A->type) ;
    #include "GB_dense_subassign_06d_template.c"
    return (GrB_SUCCESS) ;
    #endif
}

//------------------------------------------------------------------------------
// C<M>=A, when C is empty and A is dense
//------------------------------------------------------------------------------

GrB_Info GB (_Cdense_25__int8)
(
    GrB_Matrix C,
    const GrB_Matrix M,
    const GrB_Matrix A,
    const int64_t *M_ek_slicing, const int M_ntasks, const int M_nthreads
)
{ 
    #if GB_DISABLE
    return (GrB_NO_VALUE) ;
    #else
    ASSERT (C->type == A->type) ;
    #include "GB_dense_subassign_25_template.c"
    return (GrB_SUCCESS) ;
    #endif
}

#endif

