/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/KCG/config.txt
** Generation date: 2020-08-11T18:21:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "empatar_aux.h"

/* aux::empatar/ */
kcg_float32 empatar_aux(
  /* _L1/, llave/ */
  kcg_float32 llave,
  /* _L2/, tabla/ */
  array_float32_2_8 *tabla)
{
  kcg_size idx;
  /* _L3/, resultado/ */
  kcg_float32 resultado;

  resultado = kcg_lit_float32(0.0);
  /* _L3= */
  for (idx = 0; idx < 8; idx++) {
    resultado = /* _L3=(aux::comparar#1)/ */
      comparar_aux(resultado, &(*tabla)[idx], llave);
  }
  return resultado;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** empatar_aux.c
** Generation date: 2020-08-11T18:21:02
*************************************************************$ */

