/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/Simulation/config.txt
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */
#ifndef _paramIniciales_H_
#define _paramIniciales_H_

#include "kcg_types.h"
#include "empatar_aux.h"
#include "flujo_aux.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* dutyTotal/ */ dutyTotal;
  kcg_float32 /* fio2/ */ fio2;
  kcg_int32 /* ti/ */ ti;
  kcg_int32 /* te/ */ te;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_empatar_aux /* _L5=(aux::empatar#1)/ */ Context_empatar_1;
  outC_empatar_aux /* _L8=(aux::empatar#2)/ */ Context_empatar_2;
  outC_flujo_aux /* _L4=(aux::flujo#1)/ */ Context_flujo_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* _L1/ */ _L1;
  kcg_float32 /* _L2/ */ _L2;
  kcg_float32 /* _L4/ */ _L4;
  kcg_float32 /* _L5/ */ _L5;
  kcg_float32 /* _L6/ */ _L6;
  kcg_float32 /* _L8/ */ _L8;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  array_float32_2_8 /* _L13/ */ _L13;
  array_float32_2_8 /* _L16/ */ _L16;
} outC_paramIniciales;

/* ===========  node initialization and cycle functions  =========== */
/* paramIniciales/ */
extern void paramIniciales(
  /* q/ */
  kcg_float32 q,
  /* FIO2/ */
  kcg_float32 FIO2,
  /* tiempos_i/ */
  kcg_int32 tiempos_i,
  /* tiempos_e/ */
  kcg_int32 tiempos_e,
  outC_paramIniciales *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void paramIniciales_reset(outC_paramIniciales *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void paramIniciales_init(outC_paramIniciales *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _paramIniciales_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** paramIniciales.h
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

