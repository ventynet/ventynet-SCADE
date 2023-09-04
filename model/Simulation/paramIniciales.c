/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/Simulation/config.txt
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "paramIniciales.h"

/* paramIniciales/ */
void paramIniciales(
  /* q/ */
  kcg_float32 q,
  /* FIO2/ */
  kcg_float32 FIO2,
  /* tiempos_i/ */
  kcg_int32 tiempos_i,
  /* tiempos_e/ */
  kcg_int32 tiempos_e,
  outC_paramIniciales *outC)
{
  kcg_copy_array_float32_2_8(&outC->_L16, (array_float32_2_8 *) &tablaInversa);
  kcg_copy_array_float32_2_8(&outC->_L13, (array_float32_2_8 *) &tabla);
  outC->_L11 = tiempos_e;
  outC->te = outC->_L11;
  outC->_L10 = tiempos_i;
  outC->ti = outC->_L10;
  outC->_L1 = q;
  outC->_L2 = FIO2;
  /* _L4=(aux::flujo#1)/ */
  flujo_aux(outC->_L1, outC->_L2, &outC->Context_flujo_1);
  outC->_L4 = outC->Context_flujo_1.flujo_q;
  outC->_L6 = outC->Context_flujo_1.flujo_p;
  /* _L8=(aux::empatar#2)/ */
  empatar_aux(outC->_L6, &outC->_L13, &outC->Context_empatar_2);
  outC->_L8 = outC->Context_empatar_2.resultado;
  outC->fio2 = outC->_L8;
  /* _L5=(aux::empatar#1)/ */
  empatar_aux(outC->_L4, &outC->_L16, &outC->Context_empatar_1);
  outC->_L5 = outC->Context_empatar_1.resultado;
  outC->dutyTotal = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void paramIniciales_init(outC_paramIniciales *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  for (idx1 = 0; idx1 < 8; idx1++) {
    for (idx = 0; idx < 2; idx++) {
      outC->_L16[idx1][idx] = kcg_lit_float32(0.0);
    }
  }
  for (idx3 = 0; idx3 < 8; idx3++) {
    for (idx2 = 0; idx2 < 2; idx2++) {
      outC->_L13[idx3][idx2] = kcg_lit_float32(0.0);
    }
  }
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L5 = kcg_lit_float32(0.0);
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_float32(0.0);
  outC->_L1 = kcg_lit_float32(0.0);
  outC->te = kcg_lit_int32(0);
  outC->ti = kcg_lit_int32(0);
  outC->fio2 = kcg_lit_float32(0.0);
  outC->dutyTotal = kcg_lit_float32(0.0);
  /* _L5=(aux::empatar#1)/ */ empatar_init_aux(&outC->Context_empatar_1);
  /* _L8=(aux::empatar#2)/ */ empatar_init_aux(&outC->Context_empatar_2);
  /* _L4=(aux::flujo#1)/ */ flujo_init_aux(&outC->Context_flujo_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void paramIniciales_reset(outC_paramIniciales *outC)
{
  /* _L5=(aux::empatar#1)/ */ empatar_reset_aux(&outC->Context_empatar_1);
  /* _L8=(aux::empatar#2)/ */ empatar_reset_aux(&outC->Context_empatar_2);
  /* _L4=(aux::flujo#1)/ */ flujo_reset_aux(&outC->Context_flujo_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** paramIniciales.c
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

