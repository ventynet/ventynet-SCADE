/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/Simulation/config.txt
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "comparar_aux.h"

/* aux::comparar/ */
void comparar_aux(
  /* acom/ */
  kcg_float32 acom,
  /* pareja/ */
  array_float32_2 *pareja,
  /* llave/ */
  kcg_float32 llave,
  outC_comparar_aux *outC)
{
  kcg_copy_array_float32_2(&outC->_L2, pareja);
  outC->_L4 = outC->_L2[0];
  outC->_L7 = outC->_L2[1];
  outC->_L1 = acom;
  outC->_L3 = llave;
  outC->_L5 = outC->_L3 == outC->_L4;
  /* _L6= */
  if (outC->_L5) {
    outC->_L6 = outC->_L7;
  }
  else {
    outC->_L6 = outC->_L1;
  }
  outC->resultado = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void comparar_init_aux(outC_comparar_aux *outC)
{
  kcg_size idx;

  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L5 = kcg_true;
  outC->_L3 = kcg_lit_float32(0.0);
  for (idx = 0; idx < 2; idx++) {
    outC->_L2[idx] = kcg_lit_float32(0.0);
  }
  outC->_L1 = kcg_lit_float32(0.0);
  outC->resultado = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void comparar_reset_aux(outC_comparar_aux *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** comparar_aux.c
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

