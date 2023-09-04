/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/Simulation/config.txt
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */
#ifndef _regularMezcla_H_
#define _regularMezcla_H_

#include "kcg_types.h"
#include "empatar_aux.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* qO2adicional/ */ qO2adicional;
  kcg_float32 /* qAireAdicional/ */ qAireAdicional;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_empatar_aux /* _L7=(aux::empatar#1)/ */ Context_empatar_1;
  outC_empatar_aux /* _L12=(aux::empatar#2)/ */ Context_empatar_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L2/ */ _L2;
  kcg_float32 /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_float32 /* _L5/ */ _L5;
  kcg_float32 /* _L6/ */ _L6;
  kcg_float32 /* _L7/ */ _L7;
  array_float32_2_8 /* _L8/ */ _L8;
  kcg_float32 /* _L9/ */ _L9;
  kcg_float32 /* _L13/ */ _L13;
  kcg_float32 /* _L12/ */ _L12;
  array_float32_2_8 /* _L11/ */ _L11;
  kcg_float32 /* _L10/ */ _L10;
} outC_regularMezcla;

/* ===========  node initialization and cycle functions  =========== */
/* regularMezcla/ */
extern void regularMezcla(
  /* abrirO2/ */
  kcg_bool abrirO2,
  /* dutyO2/ */
  kcg_float32 dutyO2,
  /* abrirAire/ */
  kcg_bool abrirAire,
  /* dutyAire/ */
  kcg_float32 dutyAire,
  outC_regularMezcla *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void regularMezcla_reset(outC_regularMezcla *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void regularMezcla_init(outC_regularMezcla *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _regularMezcla_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** regularMezcla.h
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

