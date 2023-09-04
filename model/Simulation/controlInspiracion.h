/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/Simulation/config.txt
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */
#ifndef _controlInspiracion_H_
#define _controlInspiracion_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* abrirO2/ */ abrirO2;
  kcg_float32 /* dutyO2/ */ dutyO2;
  kcg_bool /* abrirAire/ */ abrirAire;
  kcg_float32 /* dutyAire/ */ dutyAire;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  kcg_float32 /* _L3/ */ _L3;
  kcg_float32 /* _L4/ */ _L4;
  kcg_float32 /* _L5/ */ _L5;
  kcg_float32 /* _L6/ */ _L6;
  kcg_float32 /* _L7/ */ _L7;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
} outC_controlInspiracion;

/* ===========  node initialization and cycle functions  =========== */
/* controlInspiracion/ */
extern void controlInspiracion(
  /* qPulmon/ */
  kcg_float32 _1_qPulmon,
  /* nPulmon/ */
  kcg_int32 _2_nPulmon,
  /* dutyParam/ */
  kcg_float32 dutyParam,
  /* fio2Param/ */
  kcg_float32 fio2Param,
  outC_controlInspiracion *outC);

extern void controlInspiracion_reset(outC_controlInspiracion *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void controlInspiracion_init(outC_controlInspiracion *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _controlInspiracion_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** controlInspiracion.h
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

