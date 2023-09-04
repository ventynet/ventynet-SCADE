/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/Simulation/config.txt
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "controlInspiracion.h"

/* controlInspiracion/ */
void controlInspiracion(
  /* qPulmon/ */
  kcg_float32 _1_qPulmon,
  /* nPulmon/ */
  kcg_int32 _2_nPulmon,
  /* dutyParam/ */
  kcg_float32 dutyParam,
  /* fio2Param/ */
  kcg_float32 fio2Param,
  outC_controlInspiracion *outC)
{
  outC->_L8 = kcg_false;
  outC->_L9 = kcg_true;
  /* _L10= */
  if (outC->init) {
    outC->_L10 = outC->_L9;
  }
  else {
    outC->_L10 = outC->_L8;
  }
  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_lit_float32(30.0);
  /* _L5= */
  if (outC->init) {
    outC->_L5 = outC->_L6;
  }
  else {
    outC->_L5 = outC->_L7;
  }
  outC->dutyAire = outC->_L5;
  outC->dutyO2 = outC->_L5;
  outC->abrirAire = outC->_L10;
  outC->abrirO2 = outC->_L10;
  outC->_L4 = fio2Param;
  outC->_L3 = dutyParam;
  outC->_L2 = _2_nPulmon;
  outC->_L1 = _1_qPulmon;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void controlInspiracion_init(outC_controlInspiracion *outC)
{
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L5 = kcg_lit_float32(0.0);
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_float32(0.0);
  outC->init = kcg_true;
  outC->dutyAire = kcg_lit_float32(0.0);
  outC->abrirAire = kcg_true;
  outC->dutyO2 = kcg_lit_float32(0.0);
  outC->abrirO2 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void controlInspiracion_reset(outC_controlInspiracion *outC)
{
  outC->init = kcg_true;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** controlInspiracion.c
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

