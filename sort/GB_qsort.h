//------------------------------------------------------------------------------
// GB_qsort.h: definitions for sorting functions
//------------------------------------------------------------------------------

// SuiteSparse:GraphBLAS, Timothy A. Davis, (c) 2017-2019, All Rights Reserved.
// http://suitesparse.com   See GraphBLAS/Doc/License.txt for license.

//------------------------------------------------------------------------------

// All of the GB_qsort_* functions are single-threaded, by design.  None of
// them are stable, but they are always used in GraphBLAS with unique keys.

#ifndef GB_QSORT_H
#define GB_QSORT_H
// #include "GB.h"
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <inttypes.h>
#include <stddef.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
typedef uint64_t GrB_Index ;
typedef unsigned char GB_void ;

void GB_qsort_1a        // sort array A of size 1-by-n
(
    int64_t A_0 [ ],    // size-n array
    const int64_t n
) ;

void GB_qsort_1b        // sort array A of size 2-by-n, using 1 key (A [0][])
(
    int64_t A_0 [ ],    // size n array
    GB_void A_1 [ ],    // size n array
    const size_t xsize, // size of entries in A_1
    const int64_t n
) ;

void GB_qsort_2         // sort array A of size 2-by-n, using 2 keys (A [0:1][])
(
    int64_t A_0 [ ],    // size n array
    int64_t A_1 [ ],    // size n array
    const int64_t n
) ;

void GB_qsort_3         // sort array A of size 3-by-n, using 3 keys (A [0:2][])
(
    int64_t A_0 [ ],    // size n array
    int64_t A_1 [ ],    // size n array
    int64_t A_2 [ ],    // size n array
    const int64_t n
) ;

//------------------------------------------------------------------------------
// random number generator
//------------------------------------------------------------------------------

// return a random GrB_Index, in range 0 to 2^60
#define GB_RAND_MAX 32767

// return a random number between 0 and GB_RAND_MAX
static inline GrB_Index GB_rand15 (uint64_t *seed)
{ 
   (*seed) = (*seed) * 1103515245 + 12345 ;
   return (((*seed) / 65536) % (GB_RAND_MAX + 1)) ;
}

// return a random GrB_Index, in range 0 to 2^60
static inline GrB_Index GB_rand (uint64_t *seed)
{ 
    GrB_Index i = GB_rand15 (seed) ;
    i = GB_RAND_MAX * i + GB_rand15 (seed) ;
    i = GB_RAND_MAX * i + GB_rand15 (seed) ;
    i = GB_RAND_MAX * i + GB_rand15 (seed) ;
    return (i) ;
}

#endif

