/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/Simulation/config.txt
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */
#ifndef _empatar_aux_H_
#define _empatar_aux_H_

#include "kcg_types.h"
#include "comparar_aux.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* resultado/ */ resultado;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_comparar_aux /* _L3=(aux::comparar#1)/ */ Context_comparar_1[8];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* _L1/ */ _L1;
  array_float32_2_8 /* _L2/ */ _L2;
  kcg_float32 /* _L3/ */ _L3;
  kcg_float32 /* _L4/ */ _L4;
  array_float32_8 /* _L5/ */ _L5;
} outC_empatar_aux;

/* ===========  node initialization and cycle functions  =========== */
/* aux::empatar/ */
extern void empatar_aux(
  /* llave/ */
  kcg_float32 llave,
  /* tabla/ */
  array_float32_2_8 *tabla1,
  outC_empatar_aux *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void empatar_reset_aux(outC_empatar_aux *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void empatar_init_aux(outC_empatar_aux *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _empatar_aux_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** empatar_aux.h
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

