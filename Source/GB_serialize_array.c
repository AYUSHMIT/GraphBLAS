//------------------------------------------------------------------------------
// GB_serialize_array: serialize an array, with optional compression
//------------------------------------------------------------------------------

// SuiteSparse:GraphBLAS, Timothy A. Davis, (c) 2017-2021, All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

//------------------------------------------------------------------------------

// Parallel compression method for an array.  The array is compressed into
// a sequence of independently allocated blocks, or returned as-is if not
// compressed.  Currently, only LZ4 is supported.

#include "GB.h"
#include "GB_serialize.h"
#include "GB_lz4.h"

#define GB_FREE_ALL                                                     \
{                                                                       \
    GB_FREE (&Sblocks, Sblocks_size) ;                                  \
    GB_serialize_free_blocks (&Blocks, Blocks_size, nblocks, Context) ; \
}

GrB_Info GB_serialize_array
(
    // output:
    GB_blocks **Blocks_handle,          // Blocks: array of size nblocks+1
    size_t *Blocks_size_handle,         // size of Blocks
    int64_t **Sblocks_handle,           // Sblocks: array of size nblocks+1
    size_t *Sblocks_size_handle,        // size of Sblocks
    int32_t *nblocks_handle,            // # of blocks
    int32_t *method_used,               // method used
    // input:
    GB_void *X,                         // input array of size len
    int64_t len,                        // size of X, in bytes
    int32_t method,                     // compression method requested
    GB_Context Context
)
{

    //--------------------------------------------------------------------------
    // check inputs
    //--------------------------------------------------------------------------

    GrB_Info info ;
    ASSERT (Blocks_handle != NULL) ;
    ASSERT (Blocks_size_handle != NULL) ;
    ASSERT (Sblocks_handle != NULL) ;
    ASSERT (Sblocks_size_handle != NULL) ;
    ASSERT (nblocks_handle != NULL) ;
    ASSERT (method_used != NULL) ;
    GB_blocks *Blocks = NULL ;
    size_t Blocks_size = 0, Sblocks_size = 0 ;
    int32_t nblocks = 0 ;
    int64_t *Sblocks = NULL ;

    //--------------------------------------------------------------------------
    // check for quick return
    //--------------------------------------------------------------------------

    (*Blocks_handle) = NULL ;
    (*Blocks_size_handle) = 0 ;
    (*Sblocks_handle) = NULL ;
    (*Sblocks_size_handle) = 0 ;
    (*nblocks_handle) = 0 ;
    (*method_used) = GxB_COMPRESSION_NONE ;
    if (X == NULL || len == 0)
    {
        // input array is empty
        return (GrB_SUCCESS) ;
    }

    //--------------------------------------------------------------------------
    // check for no compression
    //--------------------------------------------------------------------------

    if (method == GxB_COMPRESSION_NONE || len < 16)
    {
        // no compression, return result as a single block (plus the sentinel)
        Blocks = GB_MALLOC (2, GB_blocks, &Blocks_size) ;
        Sblocks = GB_MALLOC (2, int64_t, &Sblocks_size) ;
        if (Blocks == NULL || Sblocks == NULL)
        { 
            // out of memory
            GB_FREE_ALL ;
            return (GrB_OUT_OF_MEMORY) ;
        }

        Blocks [0].p = X ;          // first block is all of the array X
        Blocks [0].p_size = 0 ;     // denotes that p is a shallow copy of X
        Sblocks [0] = 0 ;           // start of first block

        Blocks [1].p = NULL ;       // 2nd block is the final sentinel
        Blocks [1].p_size = 0 ;
        Sblocks [1] = len ;         // first block ends at len-1

        (*Blocks_handle) = Blocks ;
        (*Blocks_size_handle) = Blocks_size ;
        (*Sblocks_handle) = Sblocks ;
        (*Sblocks_size_handle) = Sblocks_size ;
        (*nblocks_handle) = 1 ;
        return (GrB_SUCCESS) ;
    }

    (*method_used) = method ;

    //--------------------------------------------------------------------------
    // determine # of threads to use
    //--------------------------------------------------------------------------

    GB_GET_NTHREADS_MAX (nthreads_max, chunk, Context) ;
    int nthreads = GB_nthreads (len, chunk, nthreads_max) ;

    //--------------------------------------------------------------------------
    // determine # of blocks and allocate them
    //--------------------------------------------------------------------------

    // divide the array into blocks, 4 per thread, or a single block if 1 thread
    int64_t blocksize = (nthreads == 1) ? len : GB_ICEIL (len, 4*nthreads) ;

    // ensure the blocksize does not exceed the LZ4 maximum
    ASSERT (LZ4_MAX_INPUT_SIZE < INT32_MAX) ;
    blocksize = GB_IMIN (blocksize, LZ4_MAX_INPUT_SIZE/2) ;

    // ensure the blocksize is not too small
    blocksize = GB_IMAX (blocksize, (64*1024)) ;

    // determine the final # of blocks
    nblocks = GB_ICEIL (len, blocksize) ;
    nthreads = GB_IMIN (nthreads, nblocks) ;

    // allocate the output Blocks: one per block plus the sentinel block
    Blocks = GB_CALLOC (nblocks+1, GB_blocks, &Blocks_size) ;
    Sblocks = GB_CALLOC (nblocks+1, int64_t, &Sblocks_size) ;
    if (Blocks == NULL || Sblocks == NULL)
    { 
        // out of memory
        GB_FREE_ALL ;
        return (GrB_OUT_OF_MEMORY) ;
    }

    // allocate the blocks, one at a time
    int32_t blockid ;
    bool ok = true ;
    for (blockid = 0 ; blockid < nblocks && ok ; blockid++)
    { 
        // allocate a single block for the compression of X [kstart:kend-1]
        int64_t kstart, kend ;
        GB_PARTITION (kstart, kend, len, blockid, nblocks) ;
        size_t uncompressed = kend - kstart ;
        ASSERT (uncompressed < INT32_MAX) ;
        ASSERT (uncompressed > 0) ;
        size_t s = (size_t) LZ4_compressBound ((int) uncompressed) ;
        ASSERT (s < INT32_MAX) ;
        size_t p_size = 0 ;
        GB_void *p = GB_MALLOC (s, GB_void, &p_size) ;
        ok = (p != NULL) ;
        Blocks [blockid].p = p ;
        Blocks [blockid].p_size = p_size ;
    }

    if (!ok)
    {
        // out of memory
        GB_FREE_ALL ;
        return (GrB_OUT_OF_MEMORY) ;
    }

    //--------------------------------------------------------------------------
    // compress the blocks in parallel
    //--------------------------------------------------------------------------

    #pragma omp parallel for num_threads(nthreads) schedule(dynamic) \
        reduction(&&:ok)
    for (blockid = 0 ; blockid < nblocks ; blockid++)
    {
        // compress X [kstart:kend-1] into Blocks [blockid].p
        int64_t kstart, kend ;
        GB_PARTITION (kstart, kend, len, blockid, nblocks) ;
        const char *src = (const char *) (X + kstart) ;     // source
        char *dst = (char *) Blocks [blockid].p ;           // destination
        int srcSize = (int) (kend - kstart) ;               // size of source
        size_t dsize = Blocks [blockid].p_size ;            // size of dest
        int dstCapacity = GB_IMIN (dsize, INT32_MAX) ;
        int s = LZ4_compress_default (src, dst, srcSize, dstCapacity) ;
        ok = ok && (s > 0) ;
        // compressed block is now in dst [0:s-1], of size s
        Sblocks [blockid] = (int64_t) s ;
    }

    if (!ok)
    {
        // compression failure
        GB_FREE_ALL ;
        return (GrB_PANIC) ;
    }

    //--------------------------------------------------------------------------
    // compute cumulative sum of the compressed blocks
    //--------------------------------------------------------------------------

    GB_cumsum (Sblocks, nblocks, NULL, 1, Context) ;
    #if 0
    size_t total_compressed = 0 ;
    for (blockid = 0 ; blockid <= nblocks ; blockid++)
    {
        // get the size of the comressed block
        size_t compressed = Sblocks [blockid] ;
        // overwrite both with their cumulative sums
        Sblocks [blockid] = total_compressed ;
        // sum up the total compressed sizes
        total_compressed += compressed ;
    }
    #endif

    //--------------------------------------------------------------------------
    // free workspace return result
    //--------------------------------------------------------------------------

    (*Blocks_handle) = Blocks ;
    (*Blocks_size_handle) = Blocks_size ;
    (*Sblocks_handle) = Sblocks ;
    (*Sblocks_size_handle) = Sblocks_size ;
    (*nblocks_handle) = nblocks ;
    return (GrB_SUCCESS) ;
}

