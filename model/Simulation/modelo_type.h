#ifndef MODELO_TYPES_CONVERSION
#define MODELO_TYPES_CONVERSION

#include "SmuTypes.h"

/****************************************************************
 ** array_float32_2 
 ****************************************************************/
extern int array_float32_2_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_array_float32_2_string(const char *str, char **endptr);
extern int string_to_array_float32_2(const char *str, void *pValue, char **endptr);
extern int is_array_float32_2_double_conversion_allowed();
extern int array_float32_2_to_double(const void *pValue, double *nValue);
extern int is_array_float32_2_long_conversion_allowed();
extern int array_float32_2_to_long(const void *pValue, long *nValue);
extern void compare_array_float32_2(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_array_float32_2_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_array_float32_2(void *pValue);
extern int release_array_float32_2(void *pValue);
extern int copy_array_float32_2(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_array_float32_2_Utils;

/****************************************************************
 ** array_float32_2_8 
 ****************************************************************/
extern int array_float32_2_8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_array_float32_2_8_string(const char *str, char **endptr);
extern int string_to_array_float32_2_8(const char *str, void *pValue, char **endptr);
extern int is_array_float32_2_8_double_conversion_allowed();
extern int array_float32_2_8_to_double(const void *pValue, double *nValue);
extern int is_array_float32_2_8_long_conversion_allowed();
extern int array_float32_2_8_to_long(const void *pValue, long *nValue);
extern void compare_array_float32_2_8(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_array_float32_2_8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_array_float32_2_8(void *pValue);
extern int release_array_float32_2_8(void *pValue);
extern int copy_array_float32_2_8(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_array_float32_2_8_Utils;

/****************************************************************
 ** array_float32_8 
 ****************************************************************/
extern int array_float32_8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_array_float32_8_string(const char *str, char **endptr);
extern int string_to_array_float32_8(const char *str, void *pValue, char **endptr);
extern int is_array_float32_8_double_conversion_allowed();
extern int array_float32_8_to_double(const void *pValue, double *nValue);
extern int is_array_float32_8_long_conversion_allowed();
extern int array_float32_8_to_long(const void *pValue, long *nValue);
extern void compare_array_float32_8(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_array_float32_8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_array_float32_8(void *pValue);
extern int release_array_float32_8(void *pValue);
extern int copy_array_float32_8(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_array_float32_8_Utils;

/****************************************************************
 ** kcg_bool 
 ****************************************************************/
extern int kcg_bool_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_bool_string(const char *str, char **endptr);
extern int string_to_kcg_bool(const char *str, void *pValue, char **endptr);
extern int is_kcg_bool_double_conversion_allowed();
extern int kcg_bool_to_double(const void *pValue, double *nValue);
extern int is_kcg_bool_long_conversion_allowed();
extern int kcg_bool_to_long(const void *pValue, long *nValue);
extern void compare_kcg_bool(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_bool_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_bool(void *pValue);
extern int release_kcg_bool(void *pValue);
extern int copy_kcg_bool(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_bool_Utils;

/****************************************************************
 ** kcg_char 
 ****************************************************************/
extern int kcg_char_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_char_string(const char *str, char **endptr);
extern int string_to_kcg_char(const char *str, void *pValue, char **endptr);
extern int is_kcg_char_double_conversion_allowed();
extern int kcg_char_to_double(const void *pValue, double *nValue);
extern int is_kcg_char_long_conversion_allowed();
extern int kcg_char_to_long(const void *pValue, long *nValue);
extern void compare_kcg_char(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_char_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_char(void *pValue);
extern int release_kcg_char(void *pValue);
extern int copy_kcg_char(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_char_Utils;

/****************************************************************
 ** kcg_float32 
 ****************************************************************/
extern int kcg_float32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_float32_string(const char *str, char **endptr);
extern int string_to_kcg_float32(const char *str, void *pValue, char **endptr);
extern int is_kcg_float32_double_conversion_allowed();
extern int kcg_float32_to_double(const void *pValue, double *nValue);
extern int is_kcg_float32_long_conversion_allowed();
extern int kcg_float32_to_long(const void *pValue, long *nValue);
extern void compare_kcg_float32(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_float32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_float32(void *pValue);
extern int release_kcg_float32(void *pValue);
extern int copy_kcg_float32(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_float32_Utils;

/****************************************************************
 ** kcg_float64 
 ****************************************************************/
extern int kcg_float64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_float64_string(const char *str, char **endptr);
extern int string_to_kcg_float64(const char *str, void *pValue, char **endptr);
extern int is_kcg_float64_double_conversion_allowed();
extern int kcg_float64_to_double(const void *pValue, double *nValue);
extern int is_kcg_float64_long_conversion_allowed();
extern int kcg_float64_to_long(const void *pValue, long *nValue);
extern void compare_kcg_float64(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_float64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_float64(void *pValue);
extern int release_kcg_float64(void *pValue);
extern int copy_kcg_float64(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_float64_Utils;

/****************************************************************
 ** kcg_int16 
 ****************************************************************/
extern int kcg_int16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int16_string(const char *str, char **endptr);
extern int string_to_kcg_int16(const char *str, void *pValue, char **endptr);
extern int is_kcg_int16_double_conversion_allowed();
extern int kcg_int16_to_double(const void *pValue, double *nValue);
extern int is_kcg_int16_long_conversion_allowed();
extern int kcg_int16_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int16(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_int16(void *pValue);
extern int release_kcg_int16(void *pValue);
extern int copy_kcg_int16(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int16_Utils;

/****************************************************************
 ** kcg_int32 
 ****************************************************************/
extern int kcg_int32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int32_string(const char *str, char **endptr);
extern int string_to_kcg_int32(const char *str, void *pValue, char **endptr);
extern int is_kcg_int32_double_conversion_allowed();
extern int kcg_int32_to_double(const void *pValue, double *nValue);
extern int is_kcg_int32_long_conversion_allowed();
extern int kcg_int32_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int32(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_int32(void *pValue);
extern int release_kcg_int32(void *pValue);
extern int copy_kcg_int32(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int32_Utils;

/****************************************************************
 ** kcg_int64 
 ****************************************************************/
extern int kcg_int64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int64_string(const char *str, char **endptr);
extern int string_to_kcg_int64(const char *str, void *pValue, char **endptr);
extern int is_kcg_int64_double_conversion_allowed();
extern int kcg_int64_to_double(const void *pValue, double *nValue);
extern int is_kcg_int64_long_conversion_allowed();
extern int kcg_int64_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int64(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_int64(void *pValue);
extern int release_kcg_int64(void *pValue);
extern int copy_kcg_int64(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int64_Utils;

/****************************************************************
 ** kcg_int8 
 ****************************************************************/
extern int kcg_int8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int8_string(const char *str, char **endptr);
extern int string_to_kcg_int8(const char *str, void *pValue, char **endptr);
extern int is_kcg_int8_double_conversion_allowed();
extern int kcg_int8_to_double(const void *pValue, double *nValue);
extern int is_kcg_int8_long_conversion_allowed();
extern int kcg_int8_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int8(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_int8(void *pValue);
extern int release_kcg_int8(void *pValue);
extern int copy_kcg_int8(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int8_Utils;

/****************************************************************
 ** kcg_size 
 ****************************************************************/
extern int kcg_size_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_size_string(const char *str, char **endptr);
extern int string_to_kcg_size(const char *str, void *pValue, char **endptr);
extern int is_kcg_size_double_conversion_allowed();
extern int kcg_size_to_double(const void *pValue, double *nValue);
extern int is_kcg_size_long_conversion_allowed();
extern int kcg_size_to_long(const void *pValue, long *nValue);
extern void compare_kcg_size(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_size_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_size(void *pValue);
extern int release_kcg_size(void *pValue);
extern int copy_kcg_size(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_size_Utils;

/****************************************************************
 ** kcg_uint16 
 ****************************************************************/
extern int kcg_uint16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint16_string(const char *str, char **endptr);
extern int string_to_kcg_uint16(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint16_double_conversion_allowed();
extern int kcg_uint16_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint16_long_conversion_allowed();
extern int kcg_uint16_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint16(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_uint16(void *pValue);
extern int release_kcg_uint16(void *pValue);
extern int copy_kcg_uint16(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint16_Utils;

/****************************************************************
 ** kcg_uint32 
 ****************************************************************/
extern int kcg_uint32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint32_string(const char *str, char **endptr);
extern int string_to_kcg_uint32(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint32_double_conversion_allowed();
extern int kcg_uint32_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint32_long_conversion_allowed();
extern int kcg_uint32_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint32(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_uint32(void *pValue);
extern int release_kcg_uint32(void *pValue);
extern int copy_kcg_uint32(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint32_Utils;

/****************************************************************
 ** kcg_uint64 
 ****************************************************************/
extern int kcg_uint64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint64_string(const char *str, char **endptr);
extern int string_to_kcg_uint64(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint64_double_conversion_allowed();
extern int kcg_uint64_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint64_long_conversion_allowed();
extern int kcg_uint64_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint64(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_uint64(void *pValue);
extern int release_kcg_uint64(void *pValue);
extern int copy_kcg_uint64(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint64_Utils;

/****************************************************************
 ** kcg_uint8 
 ****************************************************************/
extern int kcg_uint8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint8_string(const char *str, char **endptr);
extern int string_to_kcg_uint8(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint8_double_conversion_allowed();
extern int kcg_uint8_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint8_long_conversion_allowed();
extern int kcg_uint8_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint8(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_uint8(void *pValue);
extern int release_kcg_uint8(void *pValue);
extern int copy_kcg_uint8(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint8_Utils;

/****************************************************************
 ** SSM_ST_regularEIngresar_inspiracion_ventilador 
 ****************************************************************/
extern int SSM_ST_regularEIngresar_inspiracion_ventilador_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_SSM_ST_regularEIngresar_inspiracion_ventilador_string(const char *str, char **endptr);
extern int string_to_SSM_ST_regularEIngresar_inspiracion_ventilador(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_regularEIngresar_inspiracion_ventilador_double_conversion_allowed();
extern int SSM_ST_regularEIngresar_inspiracion_ventilador_to_double(const void *pValue, double *nValue);
extern int is_SSM_ST_regularEIngresar_inspiracion_ventilador_long_conversion_allowed();
extern int SSM_ST_regularEIngresar_inspiracion_ventilador_to_long(const void *pValue, long *nValue);
extern void compare_SSM_ST_regularEIngresar_inspiracion_ventilador(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_SSM_ST_regularEIngresar_inspiracion_ventilador_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_SSM_ST_regularEIngresar_inspiracion_ventilador(void *pValue);
extern int release_SSM_ST_regularEIngresar_inspiracion_ventilador(void *pValue);
extern int copy_SSM_ST_regularEIngresar_inspiracion_ventilador(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_SSM_ST_regularEIngresar_inspiracion_ventilador_Utils;

/****************************************************************
 ** SSM_ST_ventilador 
 ****************************************************************/
extern int SSM_ST_ventilador_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_SSM_ST_ventilador_string(const char *str, char **endptr);
extern int string_to_SSM_ST_ventilador(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_ventilador_double_conversion_allowed();
extern int SSM_ST_ventilador_to_double(const void *pValue, double *nValue);
extern int is_SSM_ST_ventilador_long_conversion_allowed();
extern int SSM_ST_ventilador_to_long(const void *pValue, long *nValue);
extern void compare_SSM_ST_ventilador(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_SSM_ST_ventilador_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_SSM_ST_ventilador(void *pValue);
extern int release_SSM_ST_ventilador(void *pValue);
extern int copy_SSM_ST_ventilador(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_SSM_ST_ventilador_Utils;

/****************************************************************
 ** SSM_TR_regularEIngresar_inspiracion_ventilador 
 ****************************************************************/
extern int SSM_TR_regularEIngresar_inspiracion_ventilador_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_SSM_TR_regularEIngresar_inspiracion_ventilador_string(const char *str, char **endptr);
extern int string_to_SSM_TR_regularEIngresar_inspiracion_ventilador(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_regularEIngresar_inspiracion_ventilador_double_conversion_allowed();
extern int SSM_TR_regularEIngresar_inspiracion_ventilador_to_double(const void *pValue, double *nValue);
extern int is_SSM_TR_regularEIngresar_inspiracion_ventilador_long_conversion_allowed();
extern int SSM_TR_regularEIngresar_inspiracion_ventilador_to_long(const void *pValue, long *nValue);
extern void compare_SSM_TR_regularEIngresar_inspiracion_ventilador(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_SSM_TR_regularEIngresar_inspiracion_ventilador_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_SSM_TR_regularEIngresar_inspiracion_ventilador(void *pValue);
extern int release_SSM_TR_regularEIngresar_inspiracion_ventilador(void *pValue);
extern int copy_SSM_TR_regularEIngresar_inspiracion_ventilador(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_SSM_TR_regularEIngresar_inspiracion_ventilador_Utils;

/****************************************************************
 ** SSM_TR_ventilador 
 ****************************************************************/
extern int SSM_TR_ventilador_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_SSM_TR_ventilador_string(const char *str, char **endptr);
extern int string_to_SSM_TR_ventilador(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_ventilador_double_conversion_allowed();
extern int SSM_TR_ventilador_to_double(const void *pValue, double *nValue);
extern int is_SSM_TR_ventilador_long_conversion_allowed();
extern int SSM_TR_ventilador_to_long(const void *pValue, long *nValue);
extern void compare_SSM_TR_ventilador(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_SSM_TR_ventilador_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_SSM_TR_ventilador(void *pValue);
extern int release_SSM_TR_ventilador(void *pValue);
extern int copy_SSM_TR_ventilador(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_SSM_TR_ventilador_Utils;


#endif /*MODELO_TYPES_CONVERSION */
