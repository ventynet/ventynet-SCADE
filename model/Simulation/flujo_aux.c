/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/Simulation/config.txt
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "flujo_aux.h"

/* aux::flujo/ */
void flujo_aux(
  /* q/ */
  kcg_float32 q,
  /* p/ */
  kcg_float32 p,
  outC_flujo_aux *outC)
{
  outC->_L4 = kcg_lit_float32(100.0);
  outC->_L11 = q;
  outC->_L2 = p;
  outC->_L8 = outC->_L2 * outC->_L11;
  outC->_L3 = outC->_L8 / outC->_L4;
  outC->flujo_p = outC->_L3;
  outC->_L10 = outC->_L11 - outC->_L3;
  outC->flujo_q = outC->_L10;
}

#ifndef KCG_USER_DEFINED_INIT
void flujo_init_aux(outC_flujo_aux *outC)
{
  outC->_L11 = kcg_lit_float32(0.0);
  outC->_L10 = kcg_lit_float32(0.0);
  outC->_L8 = kcg_lit_float32(0.0);
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_float32(0.0);
  outC->flujo_p = kcg_lit_float32(0.0);
  outC->flujo_q = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void flujo_reset_aux(outC_flujo_aux *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** flujo_aux.c
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

