//------------------------------------------------------------------------------
// GB_dense_subassign_25_template: C<M> = A where C is empty and A is dense
//------------------------------------------------------------------------------

// SuiteSparse:GraphBLAS, Timothy A. Davis, (c) 2017-2020, All Rights Reserved.
// http://suitesparse.com   See GraphBLAS/Doc/License.txt for license.

//------------------------------------------------------------------------------

// C<M> = A where C starts as empty, M is structural, and A is dense.  The
// pattern of C is an exact copy of M.

{

    //--------------------------------------------------------------------------
    // get C, M, and A
    //--------------------------------------------------------------------------

    ASSERT (GB_JUMBLED_OK (M)) ;

    GB_CTYPE *GB_RESTRICT Cx = (GB_CTYPE *) C->x ;
    const int64_t *GB_RESTRICT Mp = M->p ;
    const int8_t  *GB_RESTRICT Mb = M->b ;
    const int64_t *GB_RESTRICT Mh = M->h ;
    const int64_t *GB_RESTRICT Mi = M->i ;
    const int64_t mvlen = M->vlen ;
    const bool M_is_bitmap = GB_IS_BITMAP (M) ;
    const GB_ATYPE *GB_RESTRICT Ax = (GB_ATYPE *) A->x ;
    const int64_t avlen = A->vlen ;

    //--------------------------------------------------------------------------
    // C<M> = A
    //--------------------------------------------------------------------------

    int taskid ;
// TODO    #pragma omp parallel for num_threads(nthreads) schedule(dynamic,1)
    for (taskid = 0 ; taskid < ntasks ; taskid++)
    {

        // if kfirst > klast then taskid does no work at all
        int64_t kfirst = kfirst_slice [taskid] ;
        int64_t klast  = klast_slice  [taskid] ;

        //----------------------------------------------------------------------
        // C<M(:,kfirst:klast)> = A(:,kfirst:klast)
        //----------------------------------------------------------------------

        for (int64_t k = kfirst ; k <= klast ; k++)
        {

            //------------------------------------------------------------------
            // find the part of M(:,k) to be operated on by this task
            //------------------------------------------------------------------

            int64_t j = GBH (Mh, k) ;
            int64_t pM_start, pM_end ;
            GB_get_pA (&pM_start, &pM_end, taskid, k,
                kfirst, klast, pstart_slice, Mp, mvlen) ;

            //------------------------------------------------------------------
            // C<M(:,j)> = A(:,j)
            //------------------------------------------------------------------

            if (M_is_bitmap)
            {
                // M is bitmap
                for (int64_t pM = pM_start ; pM < pM_end ; pM++)
                {   GB_cov[1180]++ ;
// NOT COVERED (1180):
GB_GOTCHA ;
                    if (!GBB (Mb, pM)) continue ;
                    GB_COPY_A_TO_C (Cx, pM, Ax, pM) ;    // Cx [pM] = Ax [pM]
                }
            }
            else
            {
                // M is hypersparse, sparse, or full
                // pA points to the start of A(:,j) since A is dense
                int64_t pA = j * avlen ;
                GB_PRAGMA_SIMD_VECTORIZE
                for (int64_t pM = pM_start ; pM < pM_end ; pM++)
                {   GB_cov[1181]++ ;
// covered (1181): 10296
                    int64_t p = pA + GBI (Mi, pM, mvlen) ;
                    GB_COPY_A_TO_C (Cx, pM, Ax, p) ;    // Cx [pM] = Ax [p]
                }
            }
        }
    }
}

