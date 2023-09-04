/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/KCG/config.txt
** Generation date: 2020-08-11T18:21:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "flujo_aux.h"

/* aux::flujo/ */
void flujo_aux(
  /* _L11/, q/ */
  kcg_float32 q,
  /* _L2/, p/ */
  kcg_float32 p,
  /* _L10/, flujo_q/ */
  kcg_float32 *flujo_q,
  /* _L3/, flujo_p/ */
  kcg_float32 *flujo_p)
{
  *flujo_p = p * q / kcg_lit_float32(100.0);
  *flujo_q = q - *flujo_p;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** flujo_aux.c
** Generation date: 2020-08-11T18:21:02
*************************************************************$ */

