/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/Simulation/config.txt
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */
#ifndef _general_H_
#define _general_H_

#include "kcg_types.h"
#include "contar_aux.h"
#include "regularMezcla.h"
#include "controlInspiracion.h"
#include "paramIniciales.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_float32 /* q/ */ q;
  kcg_float32 /* fio2/ */ fio2;
  kcg_int32 /* ti/ */ ti;
  kcg_int32 /* te/ */ te;
} inC_general;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* abrirO2/ */ abrirO2;
  kcg_float32 /* dutyO2/ */ dutyO2;
  kcg_bool /* abrirAire/ */ abrirAire;
  kcg_float32 /* dutyAire/ */ dutyAire;
  kcg_bool /* abrirExpiracion/ */ abrirExpiracion;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_float32 /* ventilador:inspiracion:qTotal/ */ qTotal_inspiracion_ventilador;
  kcg_bool /* ventilador:inspiracion:regularEIngresar: */ regularEIngresar_reset_nxt_inspiracion_ventilador;
  kcg_bool /* ventilador:inspiracion:regularEIngresar: */ regularEIngresar_reset_act_inspiracion_ventilador;
  SSM_ST_regularEIngresar_inspiracion_ventilador /* ventilador:inspiracion:regularEIngresar: */ regularEIngresar_state_nxt_inspiracion_ventilador;
  SSM_ST_ventilador /* ventilador: */ ventilador_state_nxt;
  kcg_bool /* ventilador: */ ventilador_reset_act;
  kcg_bool /* ventilador: */ ventilador_reset_nxt;
  kcg_bool /* _L3/ */ _L3;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_regularMezcla /* ventilador:inspiracion:regularEIngresar:regular:_L24=(regularMezcla#1)/ */ Context_regularMezcla_1;
  outC_controlInspiracion /* ventilador:inspiracion:regularEIngresar:regular:_L20=(controlInspiracion#5)/ */ Context_controlInspiracion_5;
  outC_paramIniciales /* ventilador:inspiracion:regularEIngresar:regular:_L12=(paramIniciales#4)/ */ Context_paramIniciales_4;
  outC_contar_aux /* _L2=(aux::contar#2)/ */ Context_contar_2;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_regularEIngresar_inspiracion_ventilador /* ventilador:inspiracion:regularEIngresar: */ regularEIngresar_clock_inspiracion_ventilador;
  kcg_bool /* ventilador:inspiracion:<1> */ tr_1_clock_inspiracion_ventilador;
  kcg_bool /* ventilador:espiracion:<1> */ tr_1_clock_espiracion_ventilador;
  kcg_bool /* ventilador:pausaInspiracion:<1> */ tr_1_clock_pausaInspiracion_ventilador;
  kcg_bool /* ventilador:pausaEspiracion:<1> */ tr_1_clock_pausaEspiracion_ventilador;
  SSM_ST_ventilador /* ventilador: */ ventilador_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* ventilador:inspiracion:_L29/ */ _L29_inspiracion_ventilador;
  SSM_TR_regularEIngresar_inspiracion_ventilador /* ventilador:inspiracion:regularEIngresar: */ regularEIngresar_fired_inspiracion_ventilador;
  SSM_TR_regularEIngresar_inspiracion_ventilador /* ventilador:inspiracion:regularEIngresar: */ regularEIngresar_fired_strong_inspiracion_ventilador;
  SSM_ST_regularEIngresar_inspiracion_ventilador /* ventilador:inspiracion:regularEIngresar: */ regularEIngresar_state_act_inspiracion_ventilador;
  SSM_ST_regularEIngresar_inspiracion_ventilador /* ventilador:inspiracion:regularEIngresar: */ regularEIngresar_state_sel_inspiracion_ventilador;
  kcg_float32 /* ventilador:inspiracion:regularEIngresar:ingresar:_L2/ */ _L2_ingresar_regularEIngresar_inspiracion_ventilador;
  kcg_bool /* ventilador:inspiracion:regularEIngresar:regular:_L20/ */ _L20_regular_regularEIngresar_inspiracion_ventilador;
  kcg_bool /* ventilador:inspiracion:regularEIngresar:regular:_L21/ */ _L21_regular_regularEIngresar_inspiracion_ventilador;
  kcg_float32 /* ventilador:inspiracion:regularEIngresar:regular:_L22/ */ _L22_regular_regularEIngresar_inspiracion_ventilador;
  kcg_float32 /* ventilador:inspiracion:regularEIngresar:regular:_L23/ */ _L23_regular_regularEIngresar_inspiracion_ventilador;
  kcg_float32 /* ventilador:inspiracion:regularEIngresar:regular:_L19/ */ _L19_regular_regularEIngresar_inspiracion_ventilador;
  kcg_float32 /* ventilador:inspiracion:regularEIngresar:regular:_L18/ */ _L18_regular_regularEIngresar_inspiracion_ventilador;
  kcg_float32 /* ventilador:inspiracion:regularEIngresar:regular:_L17/ */ _L17_regular_regularEIngresar_inspiracion_ventilador;
  kcg_int32 /* ventilador:inspiracion:regularEIngresar:regular:_L16/ */ _L16_regular_regularEIngresar_inspiracion_ventilador;
  kcg_float32 /* ventilador:inspiracion:regularEIngresar:regular:_L12/ */ _L12_regular_regularEIngresar_inspiracion_ventilador;
  kcg_float32 /* ventilador:inspiracion:regularEIngresar:regular:_L13/ */ _L13_regular_regularEIngresar_inspiracion_ventilador;
  kcg_int32 /* ventilador:inspiracion:regularEIngresar:regular:_L14/ */ _L14_regular_regularEIngresar_inspiracion_ventilador;
  kcg_int32 /* ventilador:inspiracion:regularEIngresar:regular:_L15/ */ _L15_regular_regularEIngresar_inspiracion_ventilador;
  kcg_int32 /* ventilador:inspiracion:regularEIngresar:regular:_L11/ */ _L11_regular_regularEIngresar_inspiracion_ventilador;
  kcg_int32 /* ventilador:inspiracion:regularEIngresar:regular:_L10/ */ _L10_regular_regularEIngresar_inspiracion_ventilador;
  kcg_float32 /* ventilador:inspiracion:regularEIngresar:regular:_L25/ */ _L25_regular_regularEIngresar_inspiracion_ventilador;
  kcg_float32 /* ventilador:inspiracion:regularEIngresar:regular:_L24/ */ _L24_regular_regularEIngresar_inspiracion_ventilador;
  kcg_float32 /* ventilador:inspiracion:regularEIngresar:regular:_L33/ */ _L33_regular_regularEIngresar_inspiracion_ventilador;
  kcg_float32 /* ventilador:inspiracion:regularEIngresar:regular:_L37/ */ _L37_regular_regularEIngresar_inspiracion_ventilador;
  kcg_float32 /* ventilador:espiracion:_L4/ */ _L4_espiracion_ventilador;
  kcg_bool /* ventilador:espiracion:_L3/ */ _L3_espiracion_ventilador;
  kcg_bool /* ventilador:espiracion:_L2/ */ _L2_espiracion_ventilador;
  kcg_bool /* reiniciarReloj/ */ reiniciarReloj;
  SSM_ST_ventilador /* ventilador: */ ventilador_state_sel;
  SSM_TR_ventilador /* ventilador: */ ventilador_fired_strong;
  SSM_TR_ventilador /* ventilador: */ ventilador_fired;
  kcg_int32 /* reloj/ */ reloj;
  kcg_int32 /* _L2/ */ _L2;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L20/ */ _L20;
} outC_general;

/* ===========  node initialization and cycle functions  =========== */
/* general/ */
extern void general(inC_general *inC, outC_general *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void general_reset(outC_general *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void general_init(outC_general *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _general_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** general.h
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

