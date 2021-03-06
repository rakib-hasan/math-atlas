#ifndef ATL_ctGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,456,564,618,672,888,942,996,1104,1320,1752,1806,1860,1968,2184,2616,2670,2724,2832,3048,3264,3318,3372,3426,3480
 * N : 25,456,564,618,672,888,942,996,1104,1320,1752,1806,1860,1968,2184,2616,2670,2724,2832,3048,3264,3318,3372,3426,3480
 * NB : 8,8,8,12,12,12,36,36,36,36,36,44,44,44,44,44,84,84,84,84,84,84,112,116,168
 */
#define ATL_ctGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 591) (nb_) = 8; \
   else if ((n_) < 915) (nb_) = 12; \
   else if ((n_) < 1779) (nb_) = 36; \
   else if ((n_) < 2643) (nb_) = 44; \
   else if ((n_) < 3345) (nb_) = 84; \
   else if ((n_) < 3399) (nb_) = 112; \
   else if ((n_) < 3453) (nb_) = 116; \
   else (nb_) = 168; \
}


#endif    /* end ifndef ATL_ctGetNB_geqrf */
