/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/Simulation/config.txt
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */
#ifndef _flujo_aux_H_
#define _flujo_aux_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* flujo_q/ */ flujo_q;
  kcg_float32 /* flujo_p/ */ flujo_p;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* _L2/ */ _L2;
  kcg_float32 /* _L4/ */ _L4;
  kcg_float32 /* _L3/ */ _L3;
  kcg_float32 /* _L8/ */ _L8;
  kcg_float32 /* _L10/ */ _L10;
  kcg_float32 /* _L11/ */ _L11;
} outC_flujo_aux;

/* ===========  node initialization and cycle functions  =========== */
/* aux::flujo/ */
extern void flujo_aux(
  /* q/ */
  kcg_float32 q,
  /* p/ */
  kcg_float32 p,
  outC_flujo_aux *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void flujo_reset_aux(outC_flujo_aux *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void flujo_init_aux(outC_flujo_aux *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _flujo_aux_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** flujo_aux.h
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

