//------------------------------------------------------------------------------
// GB_qsort_2: sort a 2-by-n list of integers, using A[0:1][ ] as the key
//------------------------------------------------------------------------------

// SuiteSparse:GraphBLAS, Timothy A. Davis, (c) 2017-2019, All Rights Reserved.
// http://suitesparse.com   See GraphBLAS/Doc/License.txt for license.

//------------------------------------------------------------------------------

#include "GB_qsort.h"

// returns true if a < b
#define GB_lt(A,a,B,b)                                                      \
(                                                                           \
    /* a and b are tuples of the form (i,k) where i is a row index and */   \
    /* k is the original position in the input array of that entry. */      \
    /* If a and b have the same index, compare their positions. */          \
    (A ## _0 [a] < B ## _0 [b]) ?                                           \
    (                                                                       \
        true                                                                \
    )                                                                       \
    :                                                                       \
    (                                                                       \
        (A ## _0 [a] == B ## _0 [b]) ?                                      \
        (                                                                   \
            /* indices are same; check 2nd entry, which is unique */        \
            (A ## _1 [a] < B ## _1 [b])                                     \
        )                                                                   \
        :                                                                   \
        (                                                                   \
            /* A ## _0 [a] > B ## _0 [b] */                                 \
            false                                                           \
        )                                                                   \
    )                                                                       \
)

// argument list
#define GB_arg(A) A ## _0, A ## _1

// argument list
#define GB_args(type,A) type A ## _0 [ ], type A ## _1 [ ]

// argument list, with offset
#define GB_arg_offset(A,x) A ## _0 + x, A ## _1 + x

// sort a 2-by-n list
#define GB_K 2

// swap A [a] and A [b]
#define GB_swap(A,a,b)                                                        \
{                                                                             \
    int64_t t0 = A ## _0 [a] ; A ## _0 [a] = A ## _0 [b] ; A ## _0 [b] = t0 ; \
    int64_t t1 = A ## _1 [a] ; A ## _1 [a] = A ## _1 [b] ; A ## _1 [b] = t1 ; \
}

#define GB_partition GB_partition_2
#define GB_quicksort GB_quicksort_2

#include "GB_qsort_template.c"

void GB_qsort_2         // sort array A of size 2-by-n, using 2 keys (A [0:1][])
(
    int64_t A_0 [ ],    // size n array
    int64_t A_1 [ ],    // size n array
    int64_t n
)
{ 
    uint64_t seed = n ;
    GB_quicksort (GB_arg (A), n, &seed) ;
}

