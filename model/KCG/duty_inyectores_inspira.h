/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/KCG/config.txt
** Generation date: 2020-08-11T18:21:02
*************************************************************$ */
#ifndef _duty_inyectores_inspira_H_
#define _duty_inyectores_inspira_H_

#include "kcg_types.h"
#include "empatar_aux.h"
#include "flujo_aux.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_float32 /* _L1/, q/ */ q;
  kcg_float32 /* FIO2/, _L2/ */ FIO2;
  kcg_int16 /* _L10/, tiempos_i/ */ tiempos_i;
  kcg_int16 /* _L11/, tiempos_e/ */ tiempos_e;
} inC_duty_inyectores_inspira;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* _L5/, a/ */ a;
  kcg_float32 /* _L8/, fio2/ */ fio2;
  kcg_int16 /* ti/ */ ti;
  kcg_int16 /* te/ */ te;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_duty_inyectores_inspira;

/* ===========  node initialization and cycle functions  =========== */
/* duty_inyectores_inspira/ */
extern void duty_inyectores_inspira(
  inC_duty_inyectores_inspira *inC,
  outC_duty_inyectores_inspira *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void duty_inyectores_inspira_reset(outC_duty_inyectores_inspira *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void duty_inyectores_inspira_init(outC_duty_inyectores_inspira *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _duty_inyectores_inspira_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** duty_inyectores_inspira.h
** Generation date: 2020-08-11T18:21:02
*************************************************************$ */

