/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/Simulation/config.txt
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "general.h"

/* general/ */
void general(inC_general *inC, outC_general *outC)
{
  /* abrirO2/ */
  kcg_bool abrirO2_partial;
  /* dutyO2/ */
  kcg_float32 dutyO2_partial;
  /* abrirAire/ */
  kcg_bool abrirAire_partial;
  /* dutyAire/ */
  kcg_float32 dutyAire_partial;
  /* abrirExpiracion/ */
  kcg_bool abrirExpiracion_partial;
  /* ventilador: */
  SSM_ST_ventilador ventilador_state_nxt_partial;
  /* ventilador: */
  kcg_bool ventilador_reset_nxt_partial;
  /* ventilador: */
  SSM_TR_ventilador ventilador_fired_partial;
  /* ventilador:inspiracion:<1> */
  kcg_bool tr_1_guard_inspiracion_ventilador;
  /* ventilador:inspiracion:regularEIngresar: */
  kcg_bool regularEIngresar_reset_prv_inspiracion_ventilador;
  /* ventilador:inspiracion:regularEIngresar: */
  kcg_bool regularEIngresar_reset_sel_inspiracion_ventilador;
  /* ventilador:inspiracion:qTotal/ */
  kcg_float32 last_qTotal_inspiracion_ventilador;
  /* ventilador:inspiracion:regularEIngresar:ingresar:<1> */
  kcg_bool tr_1_guard_ingresar_regularEIngresar_inspiracion_ventilador;
  /* ventilador:inspiracion:regularEIngresar: */
  SSM_TR_regularEIngresar_inspiracion_ventilador regularEIngresar_fired_partial_inspiracion_ventilador;
  /* ventilador:inspiracion:regularEIngresar: */
  kcg_bool regularEIngresar_reset_nxt_partial_inspiracion_ventilador;
  /* ventilador:inspiracion:regularEIngresar: */
  SSM_ST_regularEIngresar_inspiracion_ventilador regularEIngresar_state_nxt_partial_inspiracion_ventilador;
  /* ventilador:inspiracion:qTotal/ */
  kcg_float32 qTotal_partial_inspiracion_ventilador;
  /* dutyAire/ */
  kcg_float32 _1_dutyAire_partial;
  /* abrirAire/ */
  kcg_bool _2_abrirAire_partial;
  /* dutyO2/ */
  kcg_float32 _3_dutyO2_partial;
  /* abrirO2/ */
  kcg_bool _4_abrirO2_partial;
  /* ventilador:inspiracion:regularEIngresar:regular:<1> */
  kcg_bool tr_1_guard_regular_regularEIngresar_inspiracion_ventilador;
  /* ventilador:inspiracion:regularEIngresar: */
  SSM_TR_regularEIngresar_inspiracion_ventilador _5_regularEIngresar_fired_partial_inspiracion_ventilador;
  /* ventilador:inspiracion:regularEIngresar: */
  kcg_bool _6_regularEIngresar_reset_nxt_partial_inspiracion_ventilador;
  /* ventilador:inspiracion:regularEIngresar: */
  SSM_ST_regularEIngresar_inspiracion_ventilador _7_regularEIngresar_state_nxt_partial_inspiracion_ventilador;
  /* ventilador:inspiracion:qTotal/ */
  kcg_float32 _8_qTotal_partial_inspiracion_ventilador;
  /* dutyAire/ */
  kcg_float32 _9_dutyAire_partial;
  /* abrirAire/ */
  kcg_bool _10_abrirAire_partial;
  /* dutyO2/ */
  kcg_float32 _11_dutyO2_partial;
  /* abrirO2/ */
  kcg_bool _12_abrirO2_partial;
  /* abrirO2/ */
  kcg_bool _13_abrirO2_partial;
  /* dutyO2/ */
  kcg_float32 _14_dutyO2_partial;
  /* abrirAire/ */
  kcg_bool _15_abrirAire_partial;
  /* dutyAire/ */
  kcg_float32 _16_dutyAire_partial;
  /* abrirExpiracion/ */
  kcg_bool _17_abrirExpiracion_partial;
  /* ventilador: */
  SSM_ST_ventilador _18_ventilador_state_nxt_partial;
  /* ventilador: */
  kcg_bool _19_ventilador_reset_nxt_partial;
  /* ventilador: */
  SSM_TR_ventilador _20_ventilador_fired_partial;
  /* ventilador:espiracion:<1> */
  kcg_bool tr_1_guard_espiracion_ventilador;
  /* abrirO2/ */
  kcg_bool _21_abrirO2_partial;
  /* dutyO2/ */
  kcg_float32 _22_dutyO2_partial;
  /* abrirAire/ */
  kcg_bool _23_abrirAire_partial;
  /* dutyAire/ */
  kcg_float32 _24_dutyAire_partial;
  /* abrirExpiracion/ */
  kcg_bool _25_abrirExpiracion_partial;
  /* ventilador: */
  SSM_ST_ventilador _26_ventilador_state_nxt_partial;
  /* ventilador: */
  kcg_bool _27_ventilador_reset_nxt_partial;
  /* ventilador: */
  SSM_TR_ventilador _28_ventilador_fired_partial;
  /* ventilador:pausaInspiracion:<1> */
  kcg_bool tr_1_guard_pausaInspiracion_ventilador;
  /* abrirO2/ */
  kcg_bool _29_abrirO2_partial;
  /* dutyO2/ */
  kcg_float32 _30_dutyO2_partial;
  /* abrirAire/ */
  kcg_bool _31_abrirAire_partial;
  /* dutyAire/ */
  kcg_float32 _32_dutyAire_partial;
  /* abrirExpiracion/ */
  kcg_bool _33_abrirExpiracion_partial;
  /* ventilador: */
  SSM_ST_ventilador _34_ventilador_state_nxt_partial;
  /* ventilador: */
  kcg_bool _35_ventilador_reset_nxt_partial;
  /* ventilador: */
  SSM_TR_ventilador _36_ventilador_fired_partial;
  /* ventilador:pausaEspiracion:<1> */
  kcg_bool tr_1_guard_pausaEspiracion_ventilador;
  /* abrirExpiracion/ */
  kcg_bool last_abrirExpiracion;
  /* dutyAire/ */
  kcg_float32 last_dutyAire;
  /* abrirAire/ */
  kcg_bool last_abrirAire;
  /* dutyO2/ */
  kcg_float32 last_dutyO2;
  /* abrirO2/ */
  kcg_bool last_abrirO2;
  /* ventilador: */
  kcg_bool ventilador_reset_sel;
  /* ventilador: */
  kcg_bool ventilador_reset_prv;

  last_abrirExpiracion = outC->abrirExpiracion;
  last_dutyAire = outC->dutyAire;
  last_abrirAire = outC->abrirAire;
  last_dutyO2 = outC->dutyO2;
  last_abrirO2 = outC->abrirO2;
  outC->_L20 = outC->_L3;
  outC->_L18 = kcg_true;
  /* _L17= */
  if (outC->init) {
    outC->_L17 = outC->_L18;
  }
  else {
    outC->_L17 = outC->_L20;
  }
  outC->ventilador_state_sel = outC->ventilador_state_nxt;
  outC->ventilador_state_act = outC->ventilador_state_sel;
  /* _L2=(aux::contar#2)/ */ contar_aux(outC->_L17, &outC->Context_contar_2);
  outC->_L2 = outC->Context_contar_2.conteo;
  outC->reloj = outC->_L2;
  /* ventilador: */
  switch (outC->ventilador_state_act) {
    case SSM_st_pausaEspiracion_ventilador :
      tr_1_guard_pausaEspiracion_ventilador = outC->reloj == tiempoPausaExpiracion;
      outC->tr_1_clock_pausaEspiracion_ventilador =
        tr_1_guard_pausaEspiracion_ventilador;
      /* ventilador:pausaEspiracion:<1> */
      if (outC->tr_1_clock_pausaEspiracion_ventilador) {
        outC->reiniciarReloj = kcg_true;
      }
      else {
        outC->reiniciarReloj = kcg_false;
      }
      break;
    case SSM_st_pausaInspiracion_ventilador :
      tr_1_guard_pausaInspiracion_ventilador = outC->reloj == tiempoPausaInspiracion;
      outC->tr_1_clock_pausaInspiracion_ventilador =
        tr_1_guard_pausaInspiracion_ventilador;
      /* ventilador:pausaInspiracion:<1> */
      if (outC->tr_1_clock_pausaInspiracion_ventilador) {
        outC->reiniciarReloj = kcg_true;
      }
      else {
        outC->reiniciarReloj = kcg_false;
      }
      break;
    case SSM_st_espiracion_ventilador :
      tr_1_guard_espiracion_ventilador = outC->reloj == inC->te;
      outC->tr_1_clock_espiracion_ventilador = tr_1_guard_espiracion_ventilador;
      /* ventilador:espiracion:<1> */
      if (outC->tr_1_clock_espiracion_ventilador) {
        outC->reiniciarReloj = kcg_true;
      }
      else {
        outC->reiniciarReloj = kcg_false;
      }
      break;
    case SSM_st_inspiracion_ventilador :
      tr_1_guard_inspiracion_ventilador = outC->reloj == inC->ti;
      outC->tr_1_clock_inspiracion_ventilador = tr_1_guard_inspiracion_ventilador;
      /* ventilador:inspiracion:<1> */
      if (outC->tr_1_clock_inspiracion_ventilador) {
        outC->reiniciarReloj = kcg_true;
      }
      else {
        outC->reiniciarReloj = kcg_false;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L3 = outC->reiniciarReloj;
  switch (outC->ventilador_state_act) {
    case SSM_st_pausaEspiracion_ventilador :
      _33_abrirExpiracion_partial = last_abrirExpiracion;
      _32_dutyAire_partial = last_dutyAire;
      _31_abrirAire_partial = last_abrirAire;
      _30_dutyO2_partial = last_dutyO2;
      _29_abrirO2_partial = last_abrirO2;
      if (tr_1_guard_pausaEspiracion_ventilador) {
        _36_ventilador_fired_partial =
          SSM_TR_pausaEspiracion_inspiracion_1_pausaEspiracion_ventilador;
      }
      else {
        _36_ventilador_fired_partial = SSM_TR_no_trans_ventilador;
      }
      _35_ventilador_reset_nxt_partial = tr_1_guard_pausaEspiracion_ventilador;
      if (tr_1_guard_pausaEspiracion_ventilador) {
        _34_ventilador_state_nxt_partial = SSM_st_inspiracion_ventilador;
      }
      else {
        _34_ventilador_state_nxt_partial = SSM_st_pausaEspiracion_ventilador;
      }
      break;
    case SSM_st_pausaInspiracion_ventilador :
      _25_abrirExpiracion_partial = last_abrirExpiracion;
      _24_dutyAire_partial = last_dutyAire;
      _23_abrirAire_partial = last_abrirAire;
      _22_dutyO2_partial = last_dutyO2;
      _21_abrirO2_partial = last_abrirO2;
      if (tr_1_guard_pausaInspiracion_ventilador) {
        _28_ventilador_fired_partial =
          SSM_TR_pausaInspiracion_espiracion_1_pausaInspiracion_ventilador;
      }
      else {
        _28_ventilador_fired_partial = SSM_TR_no_trans_ventilador;
      }
      _27_ventilador_reset_nxt_partial = tr_1_guard_pausaInspiracion_ventilador;
      if (tr_1_guard_pausaInspiracion_ventilador) {
        _26_ventilador_state_nxt_partial = SSM_st_espiracion_ventilador;
      }
      else {
        _26_ventilador_state_nxt_partial = SSM_st_pausaInspiracion_ventilador;
      }
      break;
    case SSM_st_espiracion_ventilador :
      if (tr_1_guard_espiracion_ventilador) {
        _20_ventilador_fired_partial =
          SSM_TR_espiracion_pausaEspiracion_1_espiracion_ventilador;
      }
      else {
        _20_ventilador_fired_partial = SSM_TR_no_trans_ventilador;
      }
      _19_ventilador_reset_nxt_partial = tr_1_guard_espiracion_ventilador;
      if (tr_1_guard_espiracion_ventilador) {
        _18_ventilador_state_nxt_partial = SSM_st_pausaEspiracion_ventilador;
      }
      else {
        _18_ventilador_state_nxt_partial = SSM_st_espiracion_ventilador;
      }
      outC->_L4_espiracion_ventilador = kcg_lit_float32(0.0);
      outC->_L3_espiracion_ventilador = kcg_false;
      _15_abrirAire_partial = outC->_L3_espiracion_ventilador;
      _14_dutyO2_partial = outC->_L4_espiracion_ventilador;
      _13_abrirO2_partial = outC->_L3_espiracion_ventilador;
      _16_dutyAire_partial = outC->_L4_espiracion_ventilador;
      outC->_L2_espiracion_ventilador = kcg_true;
      _17_abrirExpiracion_partial = outC->_L2_espiracion_ventilador;
      break;
    default :
      /* this branch is empty */
      break;
  }
  ventilador_reset_sel = outC->ventilador_reset_nxt;
  switch (outC->ventilador_state_sel) {
    case SSM_st_inspiracion_ventilador :
      if (ventilador_reset_sel) {
        outC->init1 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->ventilador_state_act) {
    case SSM_st_inspiracion_ventilador :
      /* ventilador:inspiracion:qTotal/ */
      if (outC->init1) {
        last_qTotal_inspiracion_ventilador = kcg_lit_float32(0.0);
      }
      else {
        last_qTotal_inspiracion_ventilador = outC->qTotal_inspiracion_ventilador;
      }
      if (tr_1_guard_inspiracion_ventilador) {
        ventilador_fired_partial =
          SSM_TR_inspiracion_pausaInspiracion_1_inspiracion_ventilador;
      }
      else {
        ventilador_fired_partial = SSM_TR_no_trans_ventilador;
      }
      ventilador_reset_nxt_partial = tr_1_guard_inspiracion_ventilador;
      if (tr_1_guard_inspiracion_ventilador) {
        ventilador_state_nxt_partial = SSM_st_pausaInspiracion_ventilador;
      }
      else {
        ventilador_state_nxt_partial = SSM_st_inspiracion_ventilador;
      }
      outC->_L29_inspiracion_ventilador = kcg_false;
      abrirExpiracion_partial = outC->_L29_inspiracion_ventilador;
      /* ventilador:inspiracion:regularEIngresar: */
      if (outC->init1) {
        outC->regularEIngresar_state_sel_inspiracion_ventilador =
          SSM_st_regular_regularEIngresar_inspiracion_ventilador;
      }
      else {
        outC->regularEIngresar_state_sel_inspiracion_ventilador =
          outC->regularEIngresar_state_nxt_inspiracion_ventilador;
      }
      outC->regularEIngresar_state_act_inspiracion_ventilador =
        outC->regularEIngresar_state_sel_inspiracion_ventilador;
      outC->regularEIngresar_clock_inspiracion_ventilador =
        outC->regularEIngresar_state_act_inspiracion_ventilador;
      switch (outC->regularEIngresar_clock_inspiracion_ventilador) {
        case SSM_st_ingresar_regularEIngresar_inspiracion_ventilador :
          _1_dutyAire_partial = last_dutyAire;
          _2_abrirAire_partial = last_abrirAire;
          _3_dutyO2_partial = last_dutyO2;
          _4_abrirO2_partial = last_abrirO2;
          outC->_L2_ingresar_regularEIngresar_inspiracion_ventilador =
            kcg_lit_float32(0.0);
          qTotal_partial_inspiracion_ventilador =
            outC->_L2_ingresar_regularEIngresar_inspiracion_ventilador;
          tr_1_guard_ingresar_regularEIngresar_inspiracion_ventilador =
            qTotal_partial_inspiracion_ventilador == kcg_lit_float32(0.);
          if (tr_1_guard_ingresar_regularEIngresar_inspiracion_ventilador) {
            regularEIngresar_fired_partial_inspiracion_ventilador =
              SSM_TR_ingresar_regular_1_ingresar_regularEIngresar_inspiracion_ventilador;
          }
          else {
            regularEIngresar_fired_partial_inspiracion_ventilador =
              SSM_TR_no_trans_regularEIngresar_inspiracion_ventilador;
          }
          regularEIngresar_reset_nxt_partial_inspiracion_ventilador =
            tr_1_guard_ingresar_regularEIngresar_inspiracion_ventilador;
          if (tr_1_guard_ingresar_regularEIngresar_inspiracion_ventilador) {
            regularEIngresar_state_nxt_partial_inspiracion_ventilador =
              SSM_st_regular_regularEIngresar_inspiracion_ventilador;
          }
          else {
            regularEIngresar_state_nxt_partial_inspiracion_ventilador =
              SSM_st_ingresar_regularEIngresar_inspiracion_ventilador;
          }
          break;
        case SSM_st_regular_regularEIngresar_inspiracion_ventilador :
          outC->_L37_regular_regularEIngresar_inspiracion_ventilador =
            last_qTotal_inspiracion_ventilador;
          outC->_L19_regular_regularEIngresar_inspiracion_ventilador = qPulmon;
          outC->_L10_regular_regularEIngresar_inspiracion_ventilador = nPulmon;
          outC->_L17_regular_regularEIngresar_inspiracion_ventilador = inC->q;
          outC->_L18_regular_regularEIngresar_inspiracion_ventilador = inC->fio2;
          outC->_L16_regular_regularEIngresar_inspiracion_ventilador = inC->ti;
          outC->_L11_regular_regularEIngresar_inspiracion_ventilador = inC->te;
          /* ventilador:inspiracion:regularEIngresar:regular:_L12=(paramIniciales#4)/ */
          paramIniciales(
            outC->_L17_regular_regularEIngresar_inspiracion_ventilador,
            outC->_L18_regular_regularEIngresar_inspiracion_ventilador,
            outC->_L16_regular_regularEIngresar_inspiracion_ventilador,
            outC->_L11_regular_regularEIngresar_inspiracion_ventilador,
            &outC->Context_paramIniciales_4);
          outC->_L12_regular_regularEIngresar_inspiracion_ventilador =
            outC->Context_paramIniciales_4.dutyTotal;
          outC->_L13_regular_regularEIngresar_inspiracion_ventilador =
            outC->Context_paramIniciales_4.fio2;
          outC->_L14_regular_regularEIngresar_inspiracion_ventilador =
            outC->Context_paramIniciales_4.ti;
          outC->_L15_regular_regularEIngresar_inspiracion_ventilador =
            outC->Context_paramIniciales_4.te;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* ventilador:inspiracion:regularEIngresar: */
      if (outC->init1) {
        regularEIngresar_reset_sel_inspiracion_ventilador = kcg_false;
      }
      else {
        regularEIngresar_reset_sel_inspiracion_ventilador =
          outC->regularEIngresar_reset_nxt_inspiracion_ventilador;
      }
      switch (outC->regularEIngresar_state_sel_inspiracion_ventilador) {
        case SSM_st_regular_regularEIngresar_inspiracion_ventilador :
          if (regularEIngresar_reset_sel_inspiracion_ventilador) {
            /* ventilador:inspiracion:regularEIngresar:regular:_L20=(controlInspiracion#5)/ */
            controlInspiracion_reset(&outC->Context_controlInspiracion_5);
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->ventilador_state_sel) {
    case SSM_st_inspiracion_ventilador :
      if (ventilador_reset_sel) {
        /* ventilador:inspiracion:regularEIngresar:regular:_L20=(controlInspiracion#5)/ */
        controlInspiracion_reset(&outC->Context_controlInspiracion_5);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* ventilador: */
  switch (outC->ventilador_state_act) {
    case SSM_st_pausaEspiracion_ventilador :
      outC->abrirO2 = _29_abrirO2_partial;
      outC->dutyO2 = _30_dutyO2_partial;
      outC->abrirAire = _31_abrirAire_partial;
      outC->dutyAire = _32_dutyAire_partial;
      outC->abrirExpiracion = _33_abrirExpiracion_partial;
      outC->ventilador_state_nxt = _34_ventilador_state_nxt_partial;
      outC->ventilador_reset_nxt = _35_ventilador_reset_nxt_partial;
      outC->ventilador_fired = _36_ventilador_fired_partial;
      break;
    case SSM_st_pausaInspiracion_ventilador :
      outC->abrirO2 = _21_abrirO2_partial;
      outC->dutyO2 = _22_dutyO2_partial;
      outC->abrirAire = _23_abrirAire_partial;
      outC->dutyAire = _24_dutyAire_partial;
      outC->abrirExpiracion = _25_abrirExpiracion_partial;
      outC->ventilador_state_nxt = _26_ventilador_state_nxt_partial;
      outC->ventilador_reset_nxt = _27_ventilador_reset_nxt_partial;
      outC->ventilador_fired = _28_ventilador_fired_partial;
      break;
    case SSM_st_espiracion_ventilador :
      outC->abrirO2 = _13_abrirO2_partial;
      outC->dutyO2 = _14_dutyO2_partial;
      outC->abrirAire = _15_abrirAire_partial;
      outC->dutyAire = _16_dutyAire_partial;
      outC->abrirExpiracion = _17_abrirExpiracion_partial;
      outC->ventilador_state_nxt = _18_ventilador_state_nxt_partial;
      outC->ventilador_reset_nxt = _19_ventilador_reset_nxt_partial;
      outC->ventilador_fired = _20_ventilador_fired_partial;
      break;
    case SSM_st_inspiracion_ventilador :
      /* ventilador:inspiracion:regularEIngresar: */
      switch (outC->regularEIngresar_clock_inspiracion_ventilador) {
        case SSM_st_ingresar_regularEIngresar_inspiracion_ventilador :
          abrirO2_partial = _4_abrirO2_partial;
          dutyO2_partial = _3_dutyO2_partial;
          abrirAire_partial = _2_abrirAire_partial;
          dutyAire_partial = _1_dutyAire_partial;
          outC->qTotal_inspiracion_ventilador = qTotal_partial_inspiracion_ventilador;
          outC->regularEIngresar_state_nxt_inspiracion_ventilador =
            regularEIngresar_state_nxt_partial_inspiracion_ventilador;
          outC->regularEIngresar_reset_nxt_inspiracion_ventilador =
            regularEIngresar_reset_nxt_partial_inspiracion_ventilador;
          outC->regularEIngresar_fired_inspiracion_ventilador =
            regularEIngresar_fired_partial_inspiracion_ventilador;
          break;
        case SSM_st_regular_regularEIngresar_inspiracion_ventilador :
          /* ventilador:inspiracion:regularEIngresar:regular:_L20=(controlInspiracion#5)/ */
          controlInspiracion(
            outC->_L19_regular_regularEIngresar_inspiracion_ventilador,
            outC->_L10_regular_regularEIngresar_inspiracion_ventilador,
            outC->_L12_regular_regularEIngresar_inspiracion_ventilador,
            outC->_L13_regular_regularEIngresar_inspiracion_ventilador,
            &outC->Context_controlInspiracion_5);
          outC->_L20_regular_regularEIngresar_inspiracion_ventilador =
            outC->Context_controlInspiracion_5.abrirO2;
          outC->_L22_regular_regularEIngresar_inspiracion_ventilador =
            outC->Context_controlInspiracion_5.dutyO2;
          outC->_L21_regular_regularEIngresar_inspiracion_ventilador =
            outC->Context_controlInspiracion_5.abrirAire;
          outC->_L23_regular_regularEIngresar_inspiracion_ventilador =
            outC->Context_controlInspiracion_5.dutyAire;
          /* ventilador:inspiracion:regularEIngresar:regular:_L24=(regularMezcla#1)/ */
          regularMezcla(
            outC->_L20_regular_regularEIngresar_inspiracion_ventilador,
            outC->_L22_regular_regularEIngresar_inspiracion_ventilador,
            outC->_L21_regular_regularEIngresar_inspiracion_ventilador,
            outC->_L23_regular_regularEIngresar_inspiracion_ventilador,
            &outC->Context_regularMezcla_1);
          outC->_L24_regular_regularEIngresar_inspiracion_ventilador =
            outC->Context_regularMezcla_1.qO2adicional;
          outC->_L25_regular_regularEIngresar_inspiracion_ventilador =
            outC->Context_regularMezcla_1.qAireAdicional;
          outC->_L33_regular_regularEIngresar_inspiracion_ventilador =
            outC->_L24_regular_regularEIngresar_inspiracion_ventilador +
            outC->_L25_regular_regularEIngresar_inspiracion_ventilador +
            outC->_L37_regular_regularEIngresar_inspiracion_ventilador;
          _8_qTotal_partial_inspiracion_ventilador =
            outC->_L33_regular_regularEIngresar_inspiracion_ventilador;
          _10_abrirAire_partial =
            outC->_L21_regular_regularEIngresar_inspiracion_ventilador;
          _12_abrirO2_partial =
            outC->_L20_regular_regularEIngresar_inspiracion_ventilador;
          tr_1_guard_regular_regularEIngresar_inspiracion_ventilador =
            (!_12_abrirO2_partial) & (!_10_abrirAire_partial) &
            (_8_qTotal_partial_inspiracion_ventilador > kcg_lit_float32(0.0));
          if (tr_1_guard_regular_regularEIngresar_inspiracion_ventilador) {
            _5_regularEIngresar_fired_partial_inspiracion_ventilador =
              SSM_TR_regular_ingresar_1_regular_regularEIngresar_inspiracion_ventilador;
          }
          else {
            _5_regularEIngresar_fired_partial_inspiracion_ventilador =
              SSM_TR_no_trans_regularEIngresar_inspiracion_ventilador;
          }
          _6_regularEIngresar_reset_nxt_partial_inspiracion_ventilador =
            tr_1_guard_regular_regularEIngresar_inspiracion_ventilador;
          if (tr_1_guard_regular_regularEIngresar_inspiracion_ventilador) {
            _7_regularEIngresar_state_nxt_partial_inspiracion_ventilador =
              SSM_st_ingresar_regularEIngresar_inspiracion_ventilador;
          }
          else {
            _7_regularEIngresar_state_nxt_partial_inspiracion_ventilador =
              SSM_st_regular_regularEIngresar_inspiracion_ventilador;
          }
          _9_dutyAire_partial =
            outC->_L23_regular_regularEIngresar_inspiracion_ventilador;
          _11_dutyO2_partial = outC->_L22_regular_regularEIngresar_inspiracion_ventilador;
          abrirO2_partial = _12_abrirO2_partial;
          dutyO2_partial = _11_dutyO2_partial;
          abrirAire_partial = _10_abrirAire_partial;
          dutyAire_partial = _9_dutyAire_partial;
          outC->qTotal_inspiracion_ventilador = _8_qTotal_partial_inspiracion_ventilador;
          outC->regularEIngresar_state_nxt_inspiracion_ventilador =
            _7_regularEIngresar_state_nxt_partial_inspiracion_ventilador;
          outC->regularEIngresar_reset_nxt_inspiracion_ventilador =
            _6_regularEIngresar_reset_nxt_partial_inspiracion_ventilador;
          outC->regularEIngresar_fired_inspiracion_ventilador =
            _5_regularEIngresar_fired_partial_inspiracion_ventilador;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->regularEIngresar_fired_strong_inspiracion_ventilador =
        SSM_TR_no_trans_regularEIngresar_inspiracion_ventilador;
      /* ventilador:inspiracion:regularEIngresar: */
      if (outC->init1) {
        regularEIngresar_reset_prv_inspiracion_ventilador = kcg_false;
      }
      else {
        regularEIngresar_reset_prv_inspiracion_ventilador =
          outC->regularEIngresar_reset_act_inspiracion_ventilador;
      }
      outC->regularEIngresar_reset_act_inspiracion_ventilador = kcg_false;
      outC->abrirO2 = abrirO2_partial;
      outC->dutyO2 = dutyO2_partial;
      outC->abrirAire = abrirAire_partial;
      outC->dutyAire = dutyAire_partial;
      outC->abrirExpiracion = abrirExpiracion_partial;
      outC->ventilador_state_nxt = ventilador_state_nxt_partial;
      outC->ventilador_reset_nxt = ventilador_reset_nxt_partial;
      outC->ventilador_fired = ventilador_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->ventilador_fired_strong = SSM_TR_no_trans_ventilador;
  ventilador_reset_prv = outC->ventilador_reset_act;
  outC->ventilador_reset_act = kcg_false;
  switch (outC->ventilador_state_act) {
    case SSM_st_inspiracion_ventilador :
      outC->init1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void general_init(outC_general *outC)
{
  outC->_L20 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  outC->reloj = kcg_lit_int32(0);
  outC->ventilador_fired = SSM_TR_no_trans_ventilador;
  outC->ventilador_fired_strong = SSM_TR_no_trans_ventilador;
  outC->ventilador_state_act = SSM_st_inspiracion_ventilador;
  outC->ventilador_state_sel = SSM_st_inspiracion_ventilador;
  outC->reiniciarReloj = kcg_true;
  outC->tr_1_clock_pausaEspiracion_ventilador = kcg_true;
  outC->tr_1_clock_pausaInspiracion_ventilador = kcg_true;
  outC->tr_1_clock_espiracion_ventilador = kcg_true;
  outC->_L2_espiracion_ventilador = kcg_true;
  outC->_L3_espiracion_ventilador = kcg_true;
  outC->_L4_espiracion_ventilador = kcg_lit_float32(0.0);
  outC->_L37_regular_regularEIngresar_inspiracion_ventilador = kcg_lit_float32(
      0.0);
  outC->_L33_regular_regularEIngresar_inspiracion_ventilador = kcg_lit_float32(
      0.0);
  outC->_L24_regular_regularEIngresar_inspiracion_ventilador = kcg_lit_float32(
      0.0);
  outC->_L25_regular_regularEIngresar_inspiracion_ventilador = kcg_lit_float32(
      0.0);
  outC->_L10_regular_regularEIngresar_inspiracion_ventilador = kcg_lit_int32(0);
  outC->_L11_regular_regularEIngresar_inspiracion_ventilador = kcg_lit_int32(0);
  outC->_L15_regular_regularEIngresar_inspiracion_ventilador = kcg_lit_int32(0);
  outC->_L14_regular_regularEIngresar_inspiracion_ventilador = kcg_lit_int32(0);
  outC->_L13_regular_regularEIngresar_inspiracion_ventilador = kcg_lit_float32(
      0.0);
  outC->_L12_regular_regularEIngresar_inspiracion_ventilador = kcg_lit_float32(
      0.0);
  outC->_L16_regular_regularEIngresar_inspiracion_ventilador = kcg_lit_int32(0);
  outC->_L17_regular_regularEIngresar_inspiracion_ventilador = kcg_lit_float32(
      0.0);
  outC->_L18_regular_regularEIngresar_inspiracion_ventilador = kcg_lit_float32(
      0.0);
  outC->_L19_regular_regularEIngresar_inspiracion_ventilador = kcg_lit_float32(
      0.0);
  outC->_L23_regular_regularEIngresar_inspiracion_ventilador = kcg_lit_float32(
      0.0);
  outC->_L22_regular_regularEIngresar_inspiracion_ventilador = kcg_lit_float32(
      0.0);
  outC->_L21_regular_regularEIngresar_inspiracion_ventilador = kcg_true;
  outC->_L20_regular_regularEIngresar_inspiracion_ventilador = kcg_true;
  outC->_L2_ingresar_regularEIngresar_inspiracion_ventilador = kcg_lit_float32(
      0.0);
  outC->tr_1_clock_inspiracion_ventilador = kcg_true;
  outC->regularEIngresar_clock_inspiracion_ventilador =
    SSM_st_regular_regularEIngresar_inspiracion_ventilador;
  outC->regularEIngresar_state_sel_inspiracion_ventilador =
    SSM_st_regular_regularEIngresar_inspiracion_ventilador;
  outC->regularEIngresar_state_act_inspiracion_ventilador =
    SSM_st_regular_regularEIngresar_inspiracion_ventilador;
  outC->regularEIngresar_fired_strong_inspiracion_ventilador =
    SSM_TR_no_trans_regularEIngresar_inspiracion_ventilador;
  outC->regularEIngresar_fired_inspiracion_ventilador =
    SSM_TR_no_trans_regularEIngresar_inspiracion_ventilador;
  outC->_L29_inspiracion_ventilador = kcg_true;
  outC->_L3 = kcg_true;
  outC->regularEIngresar_state_nxt_inspiracion_ventilador =
    SSM_st_regular_regularEIngresar_inspiracion_ventilador;
  outC->regularEIngresar_reset_act_inspiracion_ventilador = kcg_true;
  outC->regularEIngresar_reset_nxt_inspiracion_ventilador = kcg_true;
  outC->qTotal_inspiracion_ventilador = kcg_lit_float32(0.0);
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->abrirExpiracion = kcg_true;
  outC->dutyAire = kcg_lit_float32(0.0);
  outC->abrirAire = kcg_true;
  outC->dutyO2 = kcg_lit_float32(0.0);
  outC->abrirO2 = kcg_true;
  /* ventilador:inspiracion:regularEIngresar:regular:_L24=(regularMezcla#1)/ */
  regularMezcla_init(&outC->Context_regularMezcla_1);
  /* ventilador:inspiracion:regularEIngresar:regular:_L20=(controlInspiracion#5)/ */
  controlInspiracion_init(&outC->Context_controlInspiracion_5);
  /* ventilador:inspiracion:regularEIngresar:regular:_L12=(paramIniciales#4)/ */
  paramIniciales_init(&outC->Context_paramIniciales_4);
  /* _L2=(aux::contar#2)/ */ contar_init_aux(&outC->Context_contar_2);
  outC->ventilador_reset_act = kcg_false;
  outC->ventilador_reset_nxt = kcg_false;
  outC->ventilador_state_nxt = SSM_st_inspiracion_ventilador;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void general_reset(outC_general *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  /* ventilador:inspiracion:regularEIngresar:regular:_L24=(regularMezcla#1)/ */
  regularMezcla_reset(&outC->Context_regularMezcla_1);
  /* ventilador:inspiracion:regularEIngresar:regular:_L20=(controlInspiracion#5)/ */
  controlInspiracion_reset(&outC->Context_controlInspiracion_5);
  /* ventilador:inspiracion:regularEIngresar:regular:_L12=(paramIniciales#4)/ */
  paramIniciales_reset(&outC->Context_paramIniciales_4);
  /* _L2=(aux::contar#2)/ */ contar_reset_aux(&outC->Context_contar_2);
  outC->ventilador_reset_act = kcg_false;
  outC->ventilador_reset_nxt = kcg_false;
  outC->ventilador_state_nxt = SSM_st_inspiracion_ventilador;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** general.c
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

