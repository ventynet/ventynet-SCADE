/* modelo_mapping.c */

#include "modelo_type.h"
#include "modelo_interface.h"
#include "modelo_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name

DECL_ITER(mapfold_8);
DECL_ITER(array_2);
DECL_ITER(array_8);

#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_25, 9);
DECL_SCOPE(scope_24, 1);
DECL_SCOPE(scope_23, 1);
DECL_SCOPE(scope_22, 1);
DECL_SCOPE(scope_21, 1);
DECL_SCOPE(scope_20, 1);
DECL_SCOPE(scope_19, 4);
DECL_SCOPE(scope_18, 1);
DECL_SCOPE(scope_17, 2);
DECL_SCOPE(scope_16, 16);
DECL_SCOPE(scope_15, 14);
DECL_SCOPE(scope_14, 8);
DECL_SCOPE(scope_13, 1);
DECL_SCOPE(scope_12, 7);
DECL_SCOPE(scope_11, 8);
DECL_SCOPE(scope_10, 1);
DECL_SCOPE(scope_9, 1);
DECL_SCOPE(scope_8, 17);
DECL_SCOPE(scope_7, 1);
DECL_SCOPE(scope_6, 22);
DECL_SCOPE(scope_5, 9);
DECL_SCOPE(scope_4, 1);
DECL_SCOPE(scope_3, 4);
DECL_SCOPE(scope_2, 11);
DECL_SCOPE(scope_1, 20);
DECL_SCOPE(scope_0, 3);

/* clock definition */

static int isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_ingresar_regularEIngresar_inspiracion_ventilador(void* pHandle) { return *(SSM_ST_regularEIngresar_inspiracion_ventilador*)pHandle == SSM_st_ingresar_regularEIngresar_inspiracion_ventilador; }
static int isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador(void* pHandle) { return *(SSM_ST_regularEIngresar_inspiracion_ventilador*)pHandle == SSM_st_regular_regularEIngresar_inspiracion_ventilador; }
static int isActive_SSM_ST_ventilador_SSM_st_espiracion_ventilador(void* pHandle) { return *(SSM_ST_ventilador*)pHandle == SSM_st_espiracion_ventilador; }
static int isActive_SSM_ST_ventilador_SSM_st_inspiracion_ventilador(void* pHandle) { return *(SSM_ST_ventilador*)pHandle == SSM_st_inspiracion_ventilador; }
static int isActive_SSM_ST_ventilador_SSM_st_pausaEspiracion_ventilador(void* pHandle) { return *(SSM_ST_ventilador*)pHandle == SSM_st_pausaEspiracion_ventilador; }
static int isActive_SSM_ST_ventilador_SSM_st_pausaInspiracion_ventilador(void* pHandle) { return *(SSM_ST_ventilador*)pHandle == SSM_st_pausaInspiracion_ventilador; }
static int isActive_SSM_TR_regularEIngresar_inspiracion_ventilador_SSM_TR_ingresar_regular_1_ingresar_regularEIngresar_inspiracion_ventilador(void* pHandle) { return *(SSM_TR_regularEIngresar_inspiracion_ventilador*)pHandle == SSM_TR_ingresar_regular_1_ingresar_regularEIngresar_inspiracion_ventilador; }
static int isActive_SSM_TR_regularEIngresar_inspiracion_ventilador_SSM_TR_regular_ingresar_1_regular_regularEIngresar_inspiracion_ventilador(void* pHandle) { return *(SSM_TR_regularEIngresar_inspiracion_ventilador*)pHandle == SSM_TR_regular_ingresar_1_regular_regularEIngresar_inspiracion_ventilador; }
static int isActive_SSM_TR_ventilador_SSM_TR_espiracion_pausaEspiracion_1_espiracion_ventilador(void* pHandle) { return *(SSM_TR_ventilador*)pHandle == SSM_TR_espiracion_pausaEspiracion_1_espiracion_ventilador; }
static int isActive_SSM_TR_ventilador_SSM_TR_inspiracion_pausaInspiracion_1_inspiracion_ventilador(void* pHandle) { return *(SSM_TR_ventilador*)pHandle == SSM_TR_inspiracion_pausaInspiracion_1_inspiracion_ventilador; }
static int isActive_SSM_TR_ventilador_SSM_TR_pausaEspiracion_inspiracion_1_pausaEspiracion_ventilador(void* pHandle) { return *(SSM_TR_ventilador*)pHandle == SSM_TR_pausaEspiracion_inspiracion_1_pausaEspiracion_ventilador; }
static int isActive_SSM_TR_ventilador_SSM_TR_pausaInspiracion_espiracion_1_pausaInspiracion_ventilador(void* pHandle) { return *(SSM_TR_ventilador*)pHandle == SSM_TR_pausaInspiracion_espiracion_1_pausaInspiracion_ventilador; }

/* mapping definition */

const MappingIterator iter_mapfold_8 = { "mapfold", 8, 8, NULL };
const MappingIterator iter_array_2 = { "array", 2, 2, NULL };
const MappingIterator iter_array_8 = { "array", 8, 8, NULL };

const MappingEntry scope_25_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "conteo", NULL, sizeof(kcg_int32), offsetof(outC_contar_aux, conteo), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_contar_aux, _L3), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_contar_aux, _L4), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), offsetof(outC_contar_aux, _L6), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), offsetof(outC_contar_aux, _L11), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_contar_aux, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int32), offsetof(outC_contar_aux, _L7), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), offsetof(outC_contar_aux, _L5), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_contar_aux, _L1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 }
};
const MappingScope scope_25 = {
    "aux::contar/ contar_aux",
    scope_25_entries, 9
};

const MappingEntry scope_24_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_ventilador_SSM_TR_pausaEspiracion_inspiracion_1_pausaEspiracion_ventilador, NULL, 1, 0 }
};
const MappingScope scope_24 = {
    "general/ generalventilador:pausaEspiracion:<1",
    scope_24_entries, 1
};

const MappingEntry scope_23_entries[1] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_ventilador_SSM_TR_pausaEspiracion_inspiracion_1_pausaEspiracion_ventilador, &scope_24, 1, 0 }
};
const MappingScope scope_23 = {
    "general/ generalventilador:pausaEspiracion:",
    scope_23_entries, 1
};

const MappingEntry scope_22_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_ventilador_SSM_TR_pausaInspiracion_espiracion_1_pausaInspiracion_ventilador, NULL, 1, 0 }
};
const MappingScope scope_22 = {
    "general/ generalventilador:pausaInspiracion:<1",
    scope_22_entries, 1
};

const MappingEntry scope_21_entries[1] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_ventilador_SSM_TR_pausaInspiracion_espiracion_1_pausaInspiracion_ventilador, &scope_22, 1, 0 }
};
const MappingScope scope_21 = {
    "general/ generalventilador:pausaInspiracion:",
    scope_21_entries, 1
};

const MappingEntry scope_20_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_ventilador_SSM_TR_espiracion_pausaEspiracion_1_espiracion_ventilador, NULL, 1, 0 }
};
const MappingScope scope_20 = {
    "general/ generalventilador:espiracion:<1",
    scope_20_entries, 1
};

const MappingEntry scope_19_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_ventilador_SSM_TR_espiracion_pausaEspiracion_1_espiracion_ventilador, &scope_20, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_espiracion_ventilador, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_ventilador_SSM_st_espiracion_ventilador, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_espiracion_ventilador, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_ventilador_SSM_st_espiracion_ventilador, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L4_espiracion_ventilador, &_Type_kcg_float32_Utils, &scope_2_entries[0], isActive_SSM_ST_ventilador_SSM_st_espiracion_ventilador, NULL, 1, 3 }
};
const MappingScope scope_19 = {
    "general/ generalventilador:espiracion:",
    scope_19_entries, 4
};

const MappingEntry scope_18_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_5_entries[6], isActive_SSM_TR_regularEIngresar_inspiracion_ventilador_SSM_TR_ingresar_regular_1_ingresar_regularEIngresar_inspiracion_ventilador, NULL, 1, 0 }
};
const MappingScope scope_18 = {
    "general/ generalventilador:inspiracion:regularEIngresar:ingresar:<1",
    scope_18_entries, 1
};

const MappingEntry scope_17_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_5_entries[6], isActive_SSM_TR_regularEIngresar_inspiracion_ventilador_SSM_TR_ingresar_regular_1_ingresar_regularEIngresar_inspiracion_ventilador, &scope_18, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L2_ingresar_regularEIngresar_inspiracion_ventilador, &_Type_kcg_float32_Utils, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_ingresar_regularEIngresar_inspiracion_ventilador, NULL, 1, 1 }
};
const MappingScope scope_17 = {
    "general/ generalventilador:inspiracion:regularEIngresar:ingresar:",
    scope_17_entries, 2
};

const MappingEntry scope_16_entries[16] = {
    /* 0 */ { MAP_OUTPUT, "qO2adicional", NULL, sizeof(kcg_float32), offsetof(outC_regularMezcla, qO2adicional), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "qAireAdicional", NULL, sizeof(kcg_float32), offsetof(outC_regularMezcla, qAireAdicional), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_regularMezcla, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float32), offsetof(outC_regularMezcla, _L3), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_regularMezcla, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float32), offsetof(outC_regularMezcla, _L5), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float32), offsetof(outC_regularMezcla, _L6), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float32), offsetof(outC_regularMezcla, _L7), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(array_float32_2_8), offsetof(outC_regularMezcla, _L8), &_Type_array_float32_2_8_Utils, NULL, NULL, &scope_9, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float32), offsetof(outC_regularMezcla, _L9), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float32), offsetof(outC_regularMezcla, _L13), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float32), offsetof(outC_regularMezcla, _L12), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L11", NULL, sizeof(array_float32_2_8), offsetof(outC_regularMezcla, _L11), &_Type_array_float32_2_8_Utils, NULL, NULL, &scope_9, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_float32), offsetof(outC_regularMezcla, _L10), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_INSTANCE, "aux::empatar 1", NULL, sizeof(outC_empatar_aux), offsetof(outC_regularMezcla, Context_empatar_1), NULL, NULL, NULL, &scope_12, 1, 14 },
    /* 15 */ { MAP_INSTANCE, "aux::empatar 2", NULL, sizeof(outC_empatar_aux), offsetof(outC_regularMezcla, Context_empatar_2), NULL, NULL, NULL, &scope_12, 1, 15 }
};
const MappingScope scope_16 = {
    "regularMezcla/ regularMezcla",
    scope_16_entries, 16
};

const MappingEntry scope_15_entries[14] = {
    /* 0 */ { MAP_OUTPUT, "abrirO2", NULL, sizeof(kcg_bool), offsetof(outC_controlInspiracion, abrirO2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "dutyO2", NULL, sizeof(kcg_float32), offsetof(outC_controlInspiracion, dutyO2), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "abrirAire", NULL, sizeof(kcg_bool), offsetof(outC_controlInspiracion, abrirAire), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "dutyAire", NULL, sizeof(kcg_float32), offsetof(outC_controlInspiracion, dutyAire), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float32), offsetof(outC_controlInspiracion, _L1), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), offsetof(outC_controlInspiracion, _L2), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float32), offsetof(outC_controlInspiracion, _L3), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float32), offsetof(outC_controlInspiracion, _L4), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float32), offsetof(outC_controlInspiracion, _L5), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float32), offsetof(outC_controlInspiracion, _L6), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float32), offsetof(outC_controlInspiracion, _L7), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_controlInspiracion, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_controlInspiracion, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_controlInspiracion, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 }
};
const MappingScope scope_15 = {
    "controlInspiracion/ controlInspiracion",
    scope_15_entries, 14
};

const MappingEntry scope_14_entries[8] = {
    /* 0 */ { MAP_OUTPUT, "resultado", NULL, sizeof(kcg_float32), offsetof(outC_comparar_aux, resultado), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float32), offsetof(outC_comparar_aux, _L1), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_float32_2), offsetof(outC_comparar_aux, _L2), &_Type_array_float32_2_Utils, NULL, NULL, &scope_10, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float32), offsetof(outC_comparar_aux, _L3), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_comparar_aux, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float32), offsetof(outC_comparar_aux, _L6), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float32), offsetof(outC_comparar_aux, _L7), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float32), offsetof(outC_comparar_aux, _L4), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 7 }
};
const MappingScope scope_14 = {
    "aux::comparar/ comparar_aux",
    scope_14_entries, 8
};

const MappingEntry scope_13_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_8, sizeof(kcg_float32), 0, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_13 = {
    "array_float32_8",
    scope_13_entries, 1
};

const MappingEntry scope_12_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "resultado", NULL, sizeof(kcg_float32), offsetof(outC_empatar_aux, resultado), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float32), offsetof(outC_empatar_aux, _L1), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_float32_2_8), offsetof(outC_empatar_aux, _L2), &_Type_array_float32_2_8_Utils, NULL, NULL, &scope_9, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float32), offsetof(outC_empatar_aux, _L3), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float32), offsetof(outC_empatar_aux, _L4), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_float32_8), offsetof(outC_empatar_aux, _L5), &_Type_array_float32_8_Utils, NULL, NULL, &scope_13, 1, 5 },
    /* 6 */ { MAP_INSTANCE, "aux::comparar 1", &iter_mapfold_8, sizeof(outC_comparar_aux), offsetof(outC_empatar_aux, Context_comparar_1), NULL, NULL, NULL, &scope_14, 1, 6 }
};
const MappingScope scope_12 = {
    "aux::empatar/ empatar_aux",
    scope_12_entries, 7
};

const MappingEntry scope_11_entries[8] = {
    /* 0 */ { MAP_OUTPUT, "flujo_q", NULL, sizeof(kcg_float32), offsetof(outC_flujo_aux, flujo_q), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "flujo_p", NULL, sizeof(kcg_float32), offsetof(outC_flujo_aux, flujo_p), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float32), offsetof(outC_flujo_aux, _L2), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float32), offsetof(outC_flujo_aux, _L4), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float32), offsetof(outC_flujo_aux, _L3), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float32), offsetof(outC_flujo_aux, _L8), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_float32), offsetof(outC_flujo_aux, _L10), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float32), offsetof(outC_flujo_aux, _L11), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 7 }
};
const MappingScope scope_11 = {
    "aux::flujo/ flujo_aux",
    scope_11_entries, 8
};

const MappingEntry scope_10_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(kcg_float32), 0, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_10 = {
    "array_float32_2",
    scope_10_entries, 1
};

const MappingEntry scope_9_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_8, sizeof(array_float32_2), 0, &_Type_array_float32_2_Utils, NULL, NULL, &scope_10, 1, 0 }
};
const MappingScope scope_9 = {
    "array_float32_2_8",
    scope_9_entries, 1
};

const MappingEntry scope_8_entries[17] = {
    /* 0 */ { MAP_OUTPUT, "dutyTotal", NULL, sizeof(kcg_float32), offsetof(outC_paramIniciales, dutyTotal), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "fio2", NULL, sizeof(kcg_float32), offsetof(outC_paramIniciales, fio2), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "ti", NULL, sizeof(kcg_int32), offsetof(outC_paramIniciales, ti), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "te", NULL, sizeof(kcg_int32), offsetof(outC_paramIniciales, te), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float32), offsetof(outC_paramIniciales, _L1), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float32), offsetof(outC_paramIniciales, _L2), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float32), offsetof(outC_paramIniciales, _L4), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float32), offsetof(outC_paramIniciales, _L5), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float32), offsetof(outC_paramIniciales, _L6), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float32), offsetof(outC_paramIniciales, _L8), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), offsetof(outC_paramIniciales, _L10), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), offsetof(outC_paramIniciales, _L11), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L13", NULL, sizeof(array_float32_2_8), offsetof(outC_paramIniciales, _L13), &_Type_array_float32_2_8_Utils, NULL, NULL, &scope_9, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L16", NULL, sizeof(array_float32_2_8), offsetof(outC_paramIniciales, _L16), &_Type_array_float32_2_8_Utils, NULL, NULL, &scope_9, 1, 13 },
    /* 14 */ { MAP_INSTANCE, "aux::flujo 1", NULL, sizeof(outC_flujo_aux), offsetof(outC_paramIniciales, Context_flujo_1), NULL, NULL, NULL, &scope_11, 1, 14 },
    /* 15 */ { MAP_INSTANCE, "aux::empatar 1", NULL, sizeof(outC_empatar_aux), offsetof(outC_paramIniciales, Context_empatar_1), NULL, NULL, NULL, &scope_12, 1, 15 },
    /* 16 */ { MAP_INSTANCE, "aux::empatar 2", NULL, sizeof(outC_empatar_aux), offsetof(outC_paramIniciales, Context_empatar_2), NULL, NULL, NULL, &scope_12, 1, 16 }
};
const MappingScope scope_8 = {
    "paramIniciales/ paramIniciales",
    scope_8_entries, 17
};

const MappingEntry scope_7_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_5_entries[6], isActive_SSM_TR_regularEIngresar_inspiracion_ventilador_SSM_TR_regular_ingresar_1_regular_regularEIngresar_inspiracion_ventilador, NULL, 1, 0 }
};
const MappingScope scope_7 = {
    "general/ generalventilador:inspiracion:regularEIngresar:regular:<1",
    scope_7_entries, 1
};

const MappingEntry scope_6_entries[22] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_5_entries[6], isActive_SSM_TR_regularEIngresar_inspiracion_ventilador_SSM_TR_regular_ingresar_1_regular_regularEIngresar_inspiracion_ventilador, &scope_7, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L20_regular_regularEIngresar_inspiracion_ventilador, &_Type_kcg_bool_Utils, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L21_regular_regularEIngresar_inspiracion_ventilador, &_Type_kcg_bool_Utils, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L22_regular_regularEIngresar_inspiracion_ventilador, &_Type_kcg_float32_Utils, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L23_regular_regularEIngresar_inspiracion_ventilador, &_Type_kcg_float32_Utils, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L19_regular_regularEIngresar_inspiracion_ventilador, &_Type_kcg_float32_Utils, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L18_regular_regularEIngresar_inspiracion_ventilador, &_Type_kcg_float32_Utils, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L17_regular_regularEIngresar_inspiracion_ventilador, &_Type_kcg_float32_Utils, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L16_regular_regularEIngresar_inspiracion_ventilador, &_Type_kcg_int32_Utils, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L12_regular_regularEIngresar_inspiracion_ventilador, &_Type_kcg_float32_Utils, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L13_regular_regularEIngresar_inspiracion_ventilador, &_Type_kcg_float32_Utils, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L14_regular_regularEIngresar_inspiracion_ventilador, &_Type_kcg_int32_Utils, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L15_regular_regularEIngresar_inspiracion_ventilador, &_Type_kcg_int32_Utils, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L11_regular_regularEIngresar_inspiracion_ventilador, &_Type_kcg_int32_Utils, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L10_regular_regularEIngresar_inspiracion_ventilador, &_Type_kcg_int32_Utils, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L25_regular_regularEIngresar_inspiracion_ventilador, &_Type_kcg_float32_Utils, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L24_regular_regularEIngresar_inspiracion_ventilador, &_Type_kcg_float32_Utils, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L33_regular_regularEIngresar_inspiracion_ventilador, &_Type_kcg_float32_Utils, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L37_regular_regularEIngresar_inspiracion_ventilador, &_Type_kcg_float32_Utils, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, NULL, 1, 18 },
    /* 19 */ { MAP_INSTANCE, "paramIniciales 4", NULL, sizeof(outC_paramIniciales), (size_t)&outputs_ctx.Context_paramIniciales_4, NULL, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, &scope_8, 1, 19 },
    /* 20 */ { MAP_INSTANCE, "controlInspiracion 5", NULL, sizeof(outC_controlInspiracion), (size_t)&outputs_ctx.Context_controlInspiracion_5, NULL, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, &scope_15, 1, 20 },
    /* 21 */ { MAP_INSTANCE, "regularMezcla 1", NULL, sizeof(outC_regularMezcla), (size_t)&outputs_ctx.Context_regularMezcla_1, NULL, &scope_1_entries[17], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, &scope_16, 1, 21 }
};
const MappingScope scope_6 = {
    "general/ generalventilador:inspiracion:regularEIngresar:regular:",
    scope_6_entries, 22
};

const MappingEntry scope_5_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_regularEIngresar_inspiracion_ventilador), (size_t)&outputs_ctx.regularEIngresar_state_act_inspiracion_ventilador, &_Type_SSM_ST_regularEIngresar_inspiracion_ventilador_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.regularEIngresar_reset_act_inspiracion_ventilador, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_regularEIngresar_inspiracion_ventilador), (size_t)&outputs_ctx.regularEIngresar_state_nxt_inspiracion_ventilador, &_Type_SSM_ST_regularEIngresar_inspiracion_ventilador_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.regularEIngresar_reset_nxt_inspiracion_ventilador, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_regularEIngresar_inspiracion_ventilador), (size_t)&outputs_ctx.regularEIngresar_state_sel_inspiracion_ventilador, &_Type_SSM_ST_regularEIngresar_inspiracion_ventilador_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_regularEIngresar_inspiracion_ventilador), (size_t)&outputs_ctx.regularEIngresar_fired_strong_inspiracion_ventilador, &_Type_SSM_TR_regularEIngresar_inspiracion_ventilador_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_regularEIngresar_inspiracion_ventilador), (size_t)&outputs_ctx.regularEIngresar_fired_inspiracion_ventilador, &_Type_SSM_TR_regularEIngresar_inspiracion_ventilador_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "regular:", NULL, 0, 0, NULL, &scope_5_entries[0], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_regular_regularEIngresar_inspiracion_ventilador, &scope_6, 1, 7 },
    /* 8 */ { MAP_STATE, "ingresar:", NULL, 0, 0, NULL, &scope_5_entries[0], isActive_SSM_ST_regularEIngresar_inspiracion_ventilador_SSM_st_ingresar_regularEIngresar_inspiracion_ventilador, &scope_17, 1, 8 }
};
const MappingScope scope_5 = {
    "general/ generalventilador:inspiracion:regularEIngresar:",
    scope_5_entries, 9
};

const MappingEntry scope_4_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_ventilador_SSM_TR_inspiracion_pausaInspiracion_1_inspiracion_ventilador, NULL, 1, 0 }
};
const MappingScope scope_4 = {
    "general/ generalventilador:inspiracion:<1",
    scope_4_entries, 1
};

const MappingEntry scope_3_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_ventilador_SSM_TR_inspiracion_pausaInspiracion_1_inspiracion_ventilador, &scope_4, 1, 0 },
    /* 1 */ { MAP_LOCAL, "qTotal", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx.qTotal_inspiracion_ventilador, &_Type_kcg_float32_Utils, &scope_2_entries[0], isActive_SSM_ST_ventilador_SSM_st_inspiracion_ventilador, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L29_inspiracion_ventilador, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_ventilador_SSM_st_inspiracion_ventilador, NULL, 1, 2 },
    /* 3 */ { MAP_AUTOMATON, "regularEIngresar:", NULL, 0, 0, NULL, NULL, NULL, &scope_5, 1, 3 }
};
const MappingScope scope_3 = {
    "general/ generalventilador:inspiracion:",
    scope_3_entries, 4
};

const MappingEntry scope_2_entries[11] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_ventilador), (size_t)&outputs_ctx.ventilador_state_act, &_Type_SSM_ST_ventilador_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.ventilador_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_ventilador), (size_t)&outputs_ctx.ventilador_state_nxt, &_Type_SSM_ST_ventilador_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.ventilador_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_ventilador), (size_t)&outputs_ctx.ventilador_state_sel, &_Type_SSM_ST_ventilador_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_ventilador), (size_t)&outputs_ctx.ventilador_fired_strong, &_Type_SSM_TR_ventilador_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_ventilador), (size_t)&outputs_ctx.ventilador_fired, &_Type_SSM_TR_ventilador_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "inspiracion:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_ventilador_SSM_st_inspiracion_ventilador, &scope_3, 1, 7 },
    /* 8 */ { MAP_STATE, "espiracion:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_ventilador_SSM_st_espiracion_ventilador, &scope_19, 1, 8 },
    /* 9 */ { MAP_STATE, "pausaInspiracion:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_ventilador_SSM_st_pausaInspiracion_ventilador, &scope_21, 1, 9 },
    /* 10 */ { MAP_STATE, "pausaEspiracion:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_ventilador_SSM_st_pausaEspiracion_ventilador, &scope_23, 1, 10 }
};
const MappingScope scope_2 = {
    "general/ generalventilador:",
    scope_2_entries, 11
};

const MappingEntry scope_1_entries[20] = {
    /* 0 */ { MAP_OUTPUT, "abrirO2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.abrirO2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "dutyO2", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx.dutyO2, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "abrirAire", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.abrirAire, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "dutyAire", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx.dutyAire, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "abrirExpiracion", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.abrirExpiracion, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_INPUT, "q", NULL, sizeof(kcg_float32), (size_t)&inputs_ctx.q, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_INPUT, "fio2", NULL, sizeof(kcg_float32), (size_t)&inputs_ctx.fio2, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_INPUT, "ti", NULL, sizeof(kcg_int32), (size_t)&inputs_ctx.ti, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_INPUT, "te", NULL, sizeof(kcg_int32), (size_t)&inputs_ctx.te, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_SIGNAL, "reiniciarReloj", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.reiniciarReloj, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "reloj", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.reloj, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L2, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L17, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L18, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L20, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_AUTOMATON, "ventilador:", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 16 },
    /* 17 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(SSM_ST_regularEIngresar_inspiracion_ventilador), (size_t)&outputs_ctx.regularEIngresar_clock_inspiracion_ventilador, &_Type_SSM_ST_regularEIngresar_inspiracion_ventilador_Utils, &scope_1_entries[18], isActive_SSM_ST_ventilador_SSM_st_inspiracion_ventilador, NULL, 0, 17 },
    /* 18 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(SSM_ST_ventilador), (size_t)&outputs_ctx.ventilador_state_act, &_Type_SSM_ST_ventilador_Utils, NULL, NULL, NULL, 0, 18 },
    /* 19 */ { MAP_INSTANCE, "aux::contar 2", NULL, sizeof(outC_contar_aux), (size_t)&outputs_ctx.Context_contar_2, NULL, NULL, NULL, &scope_25, 1, 19 }
};
const MappingScope scope_1 = {
    "general/ general",
    scope_1_entries, 20
};

const MappingEntry scope_0_entries[3] = {
    /* 0 */ { MAP_SENSOR, "nPulmon", NULL, sizeof(kcg_int32), (size_t)&_ctx_nPulmon_buffer, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_SENSOR, "qPulmon", NULL, sizeof(kcg_float32), (size_t)&_ctx_qPulmon_buffer, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_ROOT, "general", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 2 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 3
};

/* entry point */
const MappingScope* pTop = &scope_0;
