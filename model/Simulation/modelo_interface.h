#ifndef MODELO_INTERFACE_H_
#define MODELO_INTERFACE_H_

#include "kcg_types.h"
#include "kcg_sensors.h"
#include "SmuProxy.h"
#include "general.h"

/* context */

extern inC_general inputs_ctx;
extern outC_general outputs_ctx;
extern kcg_int32 _ctx_nPulmon_buffer;
extern kcg_float32 _ctx_qPulmon_buffer;

#ifdef __cplusplus
extern "C" {
#endif

extern SimSimulator * pSimulator;

/* simulation */

#ifdef EXTENDED_SIM
    void BeforeSimInit();
    void AfterSimInit();
    void BeforeSimStep();
    void AfterSimStep();
    void ExtendedSimStop();
    void ExtendedGatherDumpData(char * pData);
    void ExtendedRestoreDumpData(const char * pData);
    int ExtendedGetDumpSize();
    void UpdateValues();
    extern void UpdateSimulatorValues();
    extern int GraphicalInputsConnected;
#endif

/* logging */

#define SIM_INFO    1
#define SIM_WARNING 2
#define SIM_ERROR   3
extern void SsmOutputMessage(int level, const char* str);

#ifdef __cplusplus
} /* "C" */
#endif

#endif /* MODELO_INTERFACE_H_ */
