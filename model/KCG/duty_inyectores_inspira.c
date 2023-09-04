/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/KCG/config.txt
** Generation date: 2020-08-11T18:21:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "duty_inyectores_inspira.h"

/* duty_inyectores_inspira/ */
void duty_inyectores_inspira(
  inC_duty_inyectores_inspira *inC,
  outC_duty_inyectores_inspira *outC)
{
  array_float32_2_8 tmp;
  array_float32_2_8 tmp1;
  /* _L4/ */
  kcg_float32 _L4;
  /* _L6/ */
  kcg_float32 _L6;

  tmp[0][0] = kcg_lit_float32(100.0);
  tmp[0][1] = kcg_lit_float32(500.0);
  tmp[1][0] = kcg_lit_float32(90.0);
  tmp[1][1] = kcg_lit_float32(450.0);
  tmp[2][0] = kcg_lit_float32(80.0);
  tmp[2][1] = kcg_lit_float32(410.0);
  tmp[3][0] = kcg_lit_float32(70.0);
  tmp[3][1] = kcg_lit_float32(380.0);
  tmp[4][0] = kcg_lit_float32(60.0);
  tmp[4][1] = kcg_lit_float32(350.0);
  tmp[5][0] = kcg_lit_float32(50.0);
  tmp[5][1] = kcg_lit_float32(280.0);
  tmp[6][0] = kcg_lit_float32(40.0);
  tmp[6][1] = kcg_lit_float32(220.0);
  tmp[7][0] = kcg_lit_float32(30.0);
  tmp[7][1] = kcg_lit_float32(120.0);
  tmp1[0][0] = kcg_lit_float32(30.0);
  tmp1[0][1] = kcg_lit_float32(120.0);
  tmp1[1][0] = kcg_lit_float32(40.0);
  tmp1[1][1] = kcg_lit_float32(220.0);
  tmp1[2][0] = kcg_lit_float32(50.0);
  tmp1[2][1] = kcg_lit_float32(280.0);
  tmp1[3][0] = kcg_lit_float32(60.0);
  tmp1[3][1] = kcg_lit_float32(350.0);
  tmp1[4][0] = kcg_lit_float32(70.0);
  tmp1[4][1] = kcg_lit_float32(380.0);
  tmp1[5][0] = kcg_lit_float32(80.0);
  tmp1[5][1] = kcg_lit_float32(410.0);
  tmp1[6][0] = kcg_lit_float32(90.0);
  tmp1[6][1] = kcg_lit_float32(450.0);
  tmp1[7][0] = kcg_lit_float32(100.0);
  tmp1[7][1] = kcg_lit_float32(500.0);
  /* _L4=(aux::flujo#1)/ */ flujo_aux(inC->q, inC->FIO2, &_L4, &_L6);
  outC->fio2 = /* _L8=(aux::empatar#2)/ */ empatar_aux(_L6, &tmp);
  outC->a = /* _L5=(aux::empatar#1)/ */ empatar_aux(_L4, &tmp1);
  outC->ti = inC->tiempos_i;
  outC->te = inC->tiempos_e;
}

#ifndef KCG_USER_DEFINED_INIT
void duty_inyectores_inspira_init(outC_duty_inyectores_inspira *outC)
{
  outC->te = kcg_lit_int16(0);
  outC->ti = kcg_lit_int16(0);
  outC->fio2 = kcg_lit_float32(0.0);
  outC->a = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void duty_inyectores_inspira_reset(outC_duty_inyectores_inspira *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** duty_inyectores_inspira.c
** Generation date: 2020-08-11T18:21:02
*************************************************************$ */

