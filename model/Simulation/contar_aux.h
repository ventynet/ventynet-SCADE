/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/Simulation/config.txt
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */
#ifndef _contar_aux_H_
#define _contar_aux_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* conteo/ */ conteo;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int32 /* _L7/ */ _L7;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L1/ */ _L1;
} outC_contar_aux;

/* ===========  node initialization and cycle functions  =========== */
/* aux::contar/ */
extern void contar_aux(
  /* reiniciar/ */
  kcg_bool reiniciar,
  outC_contar_aux *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void contar_reset_aux(outC_contar_aux *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void contar_init_aux(outC_contar_aux *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _contar_aux_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** contar_aux.h
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

