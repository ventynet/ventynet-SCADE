/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/sleepo/Desktop/verificacion 2/ventest/modelo/Simulation/config.txt
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_array_float32_8
kcg_bool kcg_comp_array_float32_8(
  array_float32_8 *kcg_c1,
  array_float32_8 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_float32_8 */

#ifdef kcg_use_array_float32_2
kcg_bool kcg_comp_array_float32_2(
  array_float32_2 *kcg_c1,
  array_float32_2 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_float32_2 */

#ifdef kcg_use_array_float32_2_8
kcg_bool kcg_comp_array_float32_2_8(
  array_float32_2_8 *kcg_c1,
  array_float32_2_8 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_float32_2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_float32_2_8 */

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_types.c
** Generation date: 2020-08-23T17:19:10
*************************************************************$ */

