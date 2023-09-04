/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/Simulation/config.txt
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */
#ifndef _comparar_aux_H_
#define _comparar_aux_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* resultado/ */ resultado;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* _L1/ */ _L1;
  array_float32_2 /* _L2/ */ _L2;
  kcg_float32 /* _L3/ */ _L3;
  kcg_bool /* _L5/ */ _L5;
  kcg_float32 /* _L6/ */ _L6;
  kcg_float32 /* _L7/ */ _L7;
  kcg_float32 /* _L4/ */ _L4;
} outC_comparar_aux;

/* ===========  node initialization and cycle functions  =========== */
/* aux::comparar/ */
extern void comparar_aux(
  /* acom/ */
  kcg_float32 acom,
  /* pareja/ */
  array_float32_2 *pareja,
  /* llave/ */
  kcg_float32 llave,
  outC_comparar_aux *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void comparar_reset_aux(outC_comparar_aux *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void comparar_init_aux(outC_comparar_aux *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _comparar_aux_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** comparar_aux.h
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

