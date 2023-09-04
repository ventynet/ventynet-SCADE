/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/KCG/config.txt
** Generation date: 2020-08-11T18:21:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "comparar_aux.h"

/* aux::comparar/ */
kcg_float32 comparar_aux(
  /* _L1/, acom/ */
  kcg_float32 acom,
  /* _L2/, pareja/ */
  array_float32_2 *pareja,
  /* _L3/, llave/ */
  kcg_float32 llave)
{
  /* _L6/, resultado/ */
  kcg_float32 resultado;

  /* _L6= */
  if (llave == (*pareja)[1]) {
    resultado = (*pareja)[0];
  }
  else {
    resultado = acom;
  }
  return resultado;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** comparar_aux.c
** Generation date: 2020-08-11T18:21:02
*************************************************************$ */

