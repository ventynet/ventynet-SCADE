/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/Simulation/config.txt
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "regularMezcla.h"

/* regularMezcla/ */
void regularMezcla(
  /* abrirO2/ */
  kcg_bool abrirO2,
  /* dutyO2/ */
  kcg_float32 dutyO2,
  /* abrirAire/ */
  kcg_bool abrirAire,
  /* dutyAire/ */
  kcg_float32 dutyAire,
  outC_regularMezcla *outC)
{
  outC->_L13 = kcg_lit_float32(0.0);
  outC->_L5 = dutyAire;
  kcg_copy_array_float32_2_8(&outC->_L11, (array_float32_2_8 *) &tabla);
  /* _L12=(aux::empatar#2)/ */
  empatar_aux(outC->_L5, &outC->_L11, &outC->Context_empatar_2);
  outC->_L12 = outC->Context_empatar_2.resultado;
  outC->_L4 = abrirAire;
  /* _L10= */
  if (outC->_L4) {
    outC->_L10 = outC->_L12;
  }
  else {
    outC->_L10 = outC->_L13;
  }
  outC->qAireAdicional = outC->_L10;
  outC->_L9 = kcg_lit_float32(0.0);
  outC->_L3 = dutyO2;
  kcg_copy_array_float32_2_8(&outC->_L8, (array_float32_2_8 *) &tabla);
  /* _L7=(aux::empatar#1)/ */
  empatar_aux(outC->_L3, &outC->_L8, &outC->Context_empatar_1);
  outC->_L7 = outC->Context_empatar_1.resultado;
  outC->_L2 = abrirO2;
  /* _L6= */
  if (outC->_L2) {
    outC->_L6 = outC->_L7;
  }
  else {
    outC->_L6 = outC->_L9;
  }
  outC->qO2adicional = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void regularMezcla_init(outC_regularMezcla *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  outC->_L10 = kcg_lit_float32(0.0);
  for (idx1 = 0; idx1 < 8; idx1++) {
    for (idx = 0; idx < 2; idx++) {
      outC->_L11[idx1][idx] = kcg_lit_float32(0.0);
    }
  }
  outC->_L12 = kcg_lit_float32(0.0);
  outC->_L13 = kcg_lit_float32(0.0);
  outC->_L9 = kcg_lit_float32(0.0);
  for (idx3 = 0; idx3 < 8; idx3++) {
    for (idx2 = 0; idx2 < 2; idx2++) {
      outC->_L8[idx3][idx2] = kcg_lit_float32(0.0);
    }
  }
  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L5 = kcg_lit_float32(0.0);
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_true;
  outC->qAireAdicional = kcg_lit_float32(0.0);
  outC->qO2adicional = kcg_lit_float32(0.0);
  /* _L7=(aux::empatar#1)/ */ empatar_init_aux(&outC->Context_empatar_1);
  /* _L12=(aux::empatar#2)/ */ empatar_init_aux(&outC->Context_empatar_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void regularMezcla_reset(outC_regularMezcla *outC)
{
  /* _L7=(aux::empatar#1)/ */ empatar_reset_aux(&outC->Context_empatar_1);
  /* _L12=(aux::empatar#2)/ */ empatar_reset_aux(&outC->Context_empatar_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** regularMezcla.c
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

