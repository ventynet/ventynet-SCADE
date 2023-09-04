/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/Simulation/config.txt
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "contar_aux.h"

/* aux::contar/ */
void contar_aux(/* reiniciar/ */ kcg_bool reiniciar, outC_contar_aux *outC)
{
  outC->_L6 = outC->_L7;
  outC->_L4 = kcg_lit_int32(1);
  outC->_L3 = outC->_L4 + outC->_L6;
  outC->_L5 = kcg_lit_int32(0);
  /* _L1= */
  if (outC->init) {
    outC->_L1 = outC->_L5;
  }
  else {
    outC->_L1 = outC->_L3;
  }
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = reiniciar;
  /* _L7= */
  if (outC->_L10) {
    outC->_L7 = outC->_L11;
  }
  else {
    outC->_L7 = outC->_L1;
  }
  outC->conteo = outC->_L7;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void contar_init_aux(outC_contar_aux *outC)
{
  outC->_L1 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->conteo = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void contar_reset_aux(outC_contar_aux *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** contar_aux.c
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

