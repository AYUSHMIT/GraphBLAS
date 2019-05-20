//------------------------------------------------------------------------------
// GB_sel__include.h: definitions for GB_sel__*.c
//------------------------------------------------------------------------------

// SuiteSparse:GraphBLAS, Timothy A. Davis, (c) 2017-2019, All Rights Reserved.
// http://suitesparse.com   See GraphBLAS/Doc/License.txargt for license.

// This file has been automatically generated from Generator/GB_sel.h



void GB_sel_phase1__user_any
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__user_any
(
    // output
    int64_t *restrict Ci,
    GB_void *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__tril_any
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__tril_any
(
    // output
    int64_t *restrict Ci,
    GB_void *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__triu_any
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__triu_any
(
    // output
    int64_t *restrict Ci,
    GB_void *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__diag_any
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__diag_any
(
    // output
    int64_t *restrict Ci,
    GB_void *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__offdiag_any
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__offdiag_any
(
    // output
    int64_t *restrict Ci,
    GB_void *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__resize_any
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__resize_any
(
    // output
    int64_t *restrict Ci,
    GB_void *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#if 0

void GB_sel_phase1__nonzombie_bool
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const bool *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#endif

void GB_sel_phase2__nonzombie_bool
(
    // output
    int64_t *restrict Ci,
    bool *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const bool *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#if 0

void GB_sel_phase1__nonzombie_int8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#endif

void GB_sel_phase2__nonzombie_int8
(
    // output
    int64_t *restrict Ci,
    int8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#if 0

void GB_sel_phase1__nonzombie_int16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#endif

void GB_sel_phase2__nonzombie_int16
(
    // output
    int64_t *restrict Ci,
    int16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#if 0

void GB_sel_phase1__nonzombie_int32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#endif

void GB_sel_phase2__nonzombie_int32
(
    // output
    int64_t *restrict Ci,
    int32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#if 0

void GB_sel_phase1__nonzombie_int64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#endif

void GB_sel_phase2__nonzombie_int64
(
    // output
    int64_t *restrict Ci,
    int64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#if 0

void GB_sel_phase1__nonzombie_uint8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#endif

void GB_sel_phase2__nonzombie_uint8
(
    // output
    int64_t *restrict Ci,
    uint8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#if 0

void GB_sel_phase1__nonzombie_uint16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#endif

void GB_sel_phase2__nonzombie_uint16
(
    // output
    int64_t *restrict Ci,
    uint16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#if 0

void GB_sel_phase1__nonzombie_uint32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#endif

void GB_sel_phase2__nonzombie_uint32
(
    // output
    int64_t *restrict Ci,
    uint32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#if 0

void GB_sel_phase1__nonzombie_uint64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#endif

void GB_sel_phase2__nonzombie_uint64
(
    // output
    int64_t *restrict Ci,
    uint64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#if 0

void GB_sel_phase1__nonzombie_fp32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#endif

void GB_sel_phase2__nonzombie_fp32
(
    // output
    int64_t *restrict Ci,
    float *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#if 0

void GB_sel_phase1__nonzombie_fp64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

#endif

void GB_sel_phase2__nonzombie_fp64
(
    // output
    int64_t *restrict Ci,
    double *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__nonzombie_any
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__nonzombie_any
(
    // output
    int64_t *restrict Ci,
    GB_void *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__nonzero_bool
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const bool *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__nonzero_bool
(
    // output
    int64_t *restrict Ci,
    bool *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const bool *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__nonzero_int8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__nonzero_int8
(
    // output
    int64_t *restrict Ci,
    int8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__nonzero_int16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__nonzero_int16
(
    // output
    int64_t *restrict Ci,
    int16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__nonzero_int32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__nonzero_int32
(
    // output
    int64_t *restrict Ci,
    int32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__nonzero_int64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__nonzero_int64
(
    // output
    int64_t *restrict Ci,
    int64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__nonzero_uint8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__nonzero_uint8
(
    // output
    int64_t *restrict Ci,
    uint8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__nonzero_uint16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__nonzero_uint16
(
    // output
    int64_t *restrict Ci,
    uint16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__nonzero_uint32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__nonzero_uint32
(
    // output
    int64_t *restrict Ci,
    uint32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__nonzero_uint64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__nonzero_uint64
(
    // output
    int64_t *restrict Ci,
    uint64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__nonzero_fp32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__nonzero_fp32
(
    // output
    int64_t *restrict Ci,
    float *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__nonzero_fp64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__nonzero_fp64
(
    // output
    int64_t *restrict Ci,
    double *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__nonzero_any
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__nonzero_any
(
    // output
    int64_t *restrict Ci,
    GB_void *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_zero_bool
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const bool *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_zero_bool
(
    // output
    int64_t *restrict Ci,
    bool *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const bool *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_zero_int8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_zero_int8
(
    // output
    int64_t *restrict Ci,
    int8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_zero_int16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_zero_int16
(
    // output
    int64_t *restrict Ci,
    int16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_zero_int32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_zero_int32
(
    // output
    int64_t *restrict Ci,
    int32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_zero_int64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_zero_int64
(
    // output
    int64_t *restrict Ci,
    int64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_zero_uint8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_zero_uint8
(
    // output
    int64_t *restrict Ci,
    uint8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_zero_uint16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_zero_uint16
(
    // output
    int64_t *restrict Ci,
    uint16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_zero_uint32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_zero_uint32
(
    // output
    int64_t *restrict Ci,
    uint32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_zero_uint64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_zero_uint64
(
    // output
    int64_t *restrict Ci,
    uint64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_zero_fp32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_zero_fp32
(
    // output
    int64_t *restrict Ci,
    float *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_zero_fp64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_zero_fp64
(
    // output
    int64_t *restrict Ci,
    double *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_zero_any
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_zero_any
(
    // output
    int64_t *restrict Ci,
    GB_void *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__gt_zero_int8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__gt_zero_int8
(
    // output
    int64_t *restrict Ci,
    int8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__gt_zero_int16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__gt_zero_int16
(
    // output
    int64_t *restrict Ci,
    int16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__gt_zero_int32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__gt_zero_int32
(
    // output
    int64_t *restrict Ci,
    int32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__gt_zero_int64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__gt_zero_int64
(
    // output
    int64_t *restrict Ci,
    int64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__gt_zero_fp32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__gt_zero_fp32
(
    // output
    int64_t *restrict Ci,
    float *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__gt_zero_fp64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__gt_zero_fp64
(
    // output
    int64_t *restrict Ci,
    double *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ge_zero_int8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ge_zero_int8
(
    // output
    int64_t *restrict Ci,
    int8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ge_zero_int16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ge_zero_int16
(
    // output
    int64_t *restrict Ci,
    int16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ge_zero_int32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ge_zero_int32
(
    // output
    int64_t *restrict Ci,
    int32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ge_zero_int64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ge_zero_int64
(
    // output
    int64_t *restrict Ci,
    int64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ge_zero_fp32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ge_zero_fp32
(
    // output
    int64_t *restrict Ci,
    float *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ge_zero_fp64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ge_zero_fp64
(
    // output
    int64_t *restrict Ci,
    double *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__lt_zero_int8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__lt_zero_int8
(
    // output
    int64_t *restrict Ci,
    int8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__lt_zero_int16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__lt_zero_int16
(
    // output
    int64_t *restrict Ci,
    int16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__lt_zero_int32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__lt_zero_int32
(
    // output
    int64_t *restrict Ci,
    int32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__lt_zero_int64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__lt_zero_int64
(
    // output
    int64_t *restrict Ci,
    int64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__lt_zero_fp32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__lt_zero_fp32
(
    // output
    int64_t *restrict Ci,
    float *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__lt_zero_fp64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__lt_zero_fp64
(
    // output
    int64_t *restrict Ci,
    double *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__le_zero_int8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__le_zero_int8
(
    // output
    int64_t *restrict Ci,
    int8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__le_zero_int16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__le_zero_int16
(
    // output
    int64_t *restrict Ci,
    int16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__le_zero_int32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__le_zero_int32
(
    // output
    int64_t *restrict Ci,
    int32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__le_zero_int64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__le_zero_int64
(
    // output
    int64_t *restrict Ci,
    int64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__le_zero_fp32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__le_zero_fp32
(
    // output
    int64_t *restrict Ci,
    float *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__le_zero_fp64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__le_zero_fp64
(
    // output
    int64_t *restrict Ci,
    double *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ne_thunk_int8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ne_thunk_int8
(
    // output
    int64_t *restrict Ci,
    int8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ne_thunk_int16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ne_thunk_int16
(
    // output
    int64_t *restrict Ci,
    int16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ne_thunk_int32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ne_thunk_int32
(
    // output
    int64_t *restrict Ci,
    int32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ne_thunk_int64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ne_thunk_int64
(
    // output
    int64_t *restrict Ci,
    int64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ne_thunk_uint8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ne_thunk_uint8
(
    // output
    int64_t *restrict Ci,
    uint8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ne_thunk_uint16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ne_thunk_uint16
(
    // output
    int64_t *restrict Ci,
    uint16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ne_thunk_uint32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ne_thunk_uint32
(
    // output
    int64_t *restrict Ci,
    uint32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ne_thunk_uint64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ne_thunk_uint64
(
    // output
    int64_t *restrict Ci,
    uint64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ne_thunk_fp32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ne_thunk_fp32
(
    // output
    int64_t *restrict Ci,
    float *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ne_thunk_fp64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ne_thunk_fp64
(
    // output
    int64_t *restrict Ci,
    double *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ne_thunk_any
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ne_thunk_any
(
    // output
    int64_t *restrict Ci,
    GB_void *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_thunk_int8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_thunk_int8
(
    // output
    int64_t *restrict Ci,
    int8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_thunk_int16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_thunk_int16
(
    // output
    int64_t *restrict Ci,
    int16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_thunk_int32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_thunk_int32
(
    // output
    int64_t *restrict Ci,
    int32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_thunk_int64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_thunk_int64
(
    // output
    int64_t *restrict Ci,
    int64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_thunk_uint8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_thunk_uint8
(
    // output
    int64_t *restrict Ci,
    uint8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_thunk_uint16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_thunk_uint16
(
    // output
    int64_t *restrict Ci,
    uint16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_thunk_uint32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_thunk_uint32
(
    // output
    int64_t *restrict Ci,
    uint32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_thunk_uint64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_thunk_uint64
(
    // output
    int64_t *restrict Ci,
    uint64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_thunk_fp32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_thunk_fp32
(
    // output
    int64_t *restrict Ci,
    float *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_thunk_fp64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_thunk_fp64
(
    // output
    int64_t *restrict Ci,
    double *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__eq_thunk_any
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__eq_thunk_any
(
    // output
    int64_t *restrict Ci,
    GB_void *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const GB_void *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__gt_thunk_int8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__gt_thunk_int8
(
    // output
    int64_t *restrict Ci,
    int8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__gt_thunk_int16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__gt_thunk_int16
(
    // output
    int64_t *restrict Ci,
    int16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__gt_thunk_int32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__gt_thunk_int32
(
    // output
    int64_t *restrict Ci,
    int32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__gt_thunk_int64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__gt_thunk_int64
(
    // output
    int64_t *restrict Ci,
    int64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__gt_thunk_uint8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__gt_thunk_uint8
(
    // output
    int64_t *restrict Ci,
    uint8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__gt_thunk_uint16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__gt_thunk_uint16
(
    // output
    int64_t *restrict Ci,
    uint16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__gt_thunk_uint32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__gt_thunk_uint32
(
    // output
    int64_t *restrict Ci,
    uint32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__gt_thunk_uint64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__gt_thunk_uint64
(
    // output
    int64_t *restrict Ci,
    uint64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__gt_thunk_fp32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__gt_thunk_fp32
(
    // output
    int64_t *restrict Ci,
    float *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__gt_thunk_fp64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__gt_thunk_fp64
(
    // output
    int64_t *restrict Ci,
    double *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ge_thunk_int8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ge_thunk_int8
(
    // output
    int64_t *restrict Ci,
    int8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ge_thunk_int16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ge_thunk_int16
(
    // output
    int64_t *restrict Ci,
    int16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ge_thunk_int32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ge_thunk_int32
(
    // output
    int64_t *restrict Ci,
    int32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ge_thunk_int64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ge_thunk_int64
(
    // output
    int64_t *restrict Ci,
    int64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ge_thunk_uint8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ge_thunk_uint8
(
    // output
    int64_t *restrict Ci,
    uint8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ge_thunk_uint16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ge_thunk_uint16
(
    // output
    int64_t *restrict Ci,
    uint16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ge_thunk_uint32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ge_thunk_uint32
(
    // output
    int64_t *restrict Ci,
    uint32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ge_thunk_uint64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ge_thunk_uint64
(
    // output
    int64_t *restrict Ci,
    uint64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ge_thunk_fp32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ge_thunk_fp32
(
    // output
    int64_t *restrict Ci,
    float *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__ge_thunk_fp64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__ge_thunk_fp64
(
    // output
    int64_t *restrict Ci,
    double *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__lt_thunk_int8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__lt_thunk_int8
(
    // output
    int64_t *restrict Ci,
    int8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__lt_thunk_int16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__lt_thunk_int16
(
    // output
    int64_t *restrict Ci,
    int16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__lt_thunk_int32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__lt_thunk_int32
(
    // output
    int64_t *restrict Ci,
    int32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__lt_thunk_int64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__lt_thunk_int64
(
    // output
    int64_t *restrict Ci,
    int64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__lt_thunk_uint8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__lt_thunk_uint8
(
    // output
    int64_t *restrict Ci,
    uint8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__lt_thunk_uint16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__lt_thunk_uint16
(
    // output
    int64_t *restrict Ci,
    uint16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__lt_thunk_uint32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__lt_thunk_uint32
(
    // output
    int64_t *restrict Ci,
    uint32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__lt_thunk_uint64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__lt_thunk_uint64
(
    // output
    int64_t *restrict Ci,
    uint64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__lt_thunk_fp32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__lt_thunk_fp32
(
    // output
    int64_t *restrict Ci,
    float *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__lt_thunk_fp64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__lt_thunk_fp64
(
    // output
    int64_t *restrict Ci,
    double *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__le_thunk_int8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__le_thunk_int8
(
    // output
    int64_t *restrict Ci,
    int8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__le_thunk_int16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__le_thunk_int16
(
    // output
    int64_t *restrict Ci,
    int16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__le_thunk_int32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__le_thunk_int32
(
    // output
    int64_t *restrict Ci,
    int32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__le_thunk_int64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__le_thunk_int64
(
    // output
    int64_t *restrict Ci,
    int64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const int64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__le_thunk_uint8
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__le_thunk_uint8
(
    // output
    int64_t *restrict Ci,
    uint8_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint8_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__le_thunk_uint16
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__le_thunk_uint16
(
    // output
    int64_t *restrict Ci,
    uint16_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint16_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__le_thunk_uint32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__le_thunk_uint32
(
    // output
    int64_t *restrict Ci,
    uint32_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint32_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__le_thunk_uint64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__le_thunk_uint64
(
    // output
    int64_t *restrict Ci,
    uint64_t *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const uint64_t *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__le_thunk_fp32
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__le_thunk_fp32
(
    // output
    int64_t *restrict Ci,
    float *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const float *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase1__le_thunk_fp64
(
    // output
    int64_t *restrict Zp,
    int64_t *restrict Cp,
    int64_t *restrict Wfirst,
    int64_t *restrict Wlast,
    // input
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;



void GB_sel_phase2__le_thunk_fp64
(
    // output
    int64_t *restrict Ci,
    double *restrict Cx,
    // input
    const int64_t *restrict Zp,
    const int64_t *restrict Cp,
    const int64_t *restrict C_pstart_slice,
    const GrB_Matrix A,
    const int64_t *restrict kfirst_slice,
    const int64_t *restrict klast_slice,
    const int64_t *restrict pstart_slice,
    const bool flipij,
    const int64_t ithunk,
    const double *restrict xthunk,
    const GxB_select_function user_select,
    const int ntasks,
    const int nthreads
) ;

