//------------------------------------------------------------------------------
// GB_jit_kernel_ewise_fulln.c: C = A+B
//------------------------------------------------------------------------------

// SuiteSparse:GraphBLAS, Timothy A. Davis, (c) 2017-2023, All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

//------------------------------------------------------------------------------

GB_JIT_KERNEL_EWISE_FULLN_PROTO (GB_jit_kernel) ;
GB_JIT_KERNEL_EWISE_FULLN_PROTO (GB_jit_kernel)
{ 
    #include "GB_ewise_fulln_template.c"
    return (GrB_SUCCESS) ;
}

