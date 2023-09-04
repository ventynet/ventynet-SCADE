/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/Simulation/config.txt
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "empatar_aux.h"

/* aux::empatar/ */
void empatar_aux(
  /* llave/ */
  kcg_float32 llave,
  /* tabla/ */
  array_float32_2_8 *tabla1,
  outC_empatar_aux *outC)
{
  kcg_size idx;
  kcg_float32 acc;
  kcg_size idx2;

  outC->_L1 = llave;
  /* _L5/ */
  for (idx = 0; idx < 8; idx++) {
    outC->_L5[idx] = outC->_L1;
  }
  outC->_L4 = kcg_lit_float32(0.0);
  kcg_copy_array_float32_2_8(&outC->_L2, tabla1);
  outC->_L3 = outC->_L4;
  /* _L3= */
  for (idx2 = 0; idx2 < 8; idx2++) {
    acc = outC->_L3;
    /* _L3=(aux::comparar#1)/ */
    comparar_aux(
      acc,
      &outC->_L2[idx2],
      outC->_L5[idx2],
      &outC->Context_comparar_1[idx2]);
    outC->_L3 = outC->Context_comparar_1[idx2].resultado;
  }
  outC->resultado = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void empatar_init_aux(outC_empatar_aux *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  for (idx1 = 0; idx1 < 8; idx1++) {
    outC->_L5[idx1] = kcg_lit_float32(0.0);
  }
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L3 = kcg_lit_float32(0.0);
  for (idx3 = 0; idx3 < 8; idx3++) {
    for (idx2 = 0; idx2 < 2; idx2++) {
      outC->_L2[idx3][idx2] = kcg_lit_float32(0.0);
    }
  }
  outC->_L1 = kcg_lit_float32(0.0);
  outC->resultado = kcg_lit_float32(0.0);
  for (idx = 0; idx < 8; idx++) {
    /* _L3=(aux::comparar#1)/ */ comparar_init_aux(&outC->Context_comparar_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void empatar_reset_aux(outC_empatar_aux *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 8; idx++) {
    /* _L3=(aux::comparar#1)/ */ comparar_reset_aux(&outC->Context_comparar_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** empatar_aux.c
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

