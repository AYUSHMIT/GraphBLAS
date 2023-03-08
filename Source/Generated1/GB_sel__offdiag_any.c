//------------------------------------------------------------------------------
// GB_sel:  hard-coded functions for selection operators
//------------------------------------------------------------------------------

// SuiteSparse:GraphBLAS, Timothy A. Davis, (c) 2017-2023, All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

//------------------------------------------------------------------------------

#include "GB_select.h"
#include "GB_ek_slice.h"
#include "GB_sel__include.h"

// A type: GB_void

#define GB_ISO_SELECT \
    0

// kind
#define GB_OFFDIAG_SELECTOR

#define GB_A_TYPE \
    GB_void

// test value of Ax [p]
#define GB_TEST_VALUE_OF_ENTRY(keep,p)                  \
    (no test; offdiag ignores values)

// Cx [pC] = Ax [pA], no typecast
#define GB_SELECT_ENTRY(Cx,pC,Ax,pA)                    \
    memcpy (Cx +((pC)*asize), Ax +((pA)*asize), asize)

#include "GB_kernel_shared_definitions.h"

//------------------------------------------------------------------------------
// GB_sel_phase2
//------------------------------------------------------------------------------

void GB (_sel_phase2__offdiag_any)
(
    int64_t *restrict Ci,
    GB_void *restrict Cx,
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict Cp_kfirst,
    const GrB_Matrix A,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict athunk,
    const GB_void *restrict ythunk,
    const GB_Operator op,
    const int64_t *A_ek_slicing, const int A_ntasks, const int A_nthreads
)
{ 
    
    
    
    #include "GB_select_phase2.c"
}

//------------------------------------------------------------------------------
// GB_sel_bitmap
//------------------------------------------------------------------------------

void GB (_sel_bitmap__offdiag_any)
(
    int8_t *Cb,
    GB_void *restrict Cx,
    int64_t *cnvals_handle,
    GrB_Matrix A,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict athunk,
    const GB_void *restrict ythunk,
    const GB_Operator op,
    const int nthreads
)
{ 
    
    
    
    #include "GB_bitmap_select_template.c"
}

