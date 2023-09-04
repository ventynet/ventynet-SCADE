#include "modelo_interface.h"
#include "modelo_type.h"
#include "modelo_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#define UNUSED(x) (void)(x)
/* context */

inC_general inputs_ctx;
static inC_general inputs_ctx_execute;
outC_general outputs_ctx;
#ifndef nPulmon
kcg_int32 nPulmon;
#endif
kcg_int32 _ctx_nPulmon_buffer;
#ifndef qPulmon
kcg_float32 qPulmon;
#endif
kcg_float32 _ctx_qPulmon_buffer;

static void _SCSIM_RestoreInterface(void) {
    init_kcg_float32(&inputs_ctx.q);
    init_kcg_float32(&inputs_ctx_execute.q);
    init_kcg_float32(&inputs_ctx.fio2);
    init_kcg_float32(&inputs_ctx_execute.fio2);
    init_kcg_int32(&inputs_ctx.ti);
    init_kcg_int32(&inputs_ctx_execute.ti);
    init_kcg_int32(&inputs_ctx.te);
    init_kcg_int32(&inputs_ctx_execute.te);
    memset((void*)&outputs_ctx, 0, sizeof(outputs_ctx));
    init_kcg_int32(&_ctx_nPulmon_buffer);
    init_kcg_int32(&nPulmon);
    init_kcg_float32(&_ctx_qPulmon_buffer);
    init_kcg_float32(&qPulmon);
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    inputs_ctx_execute.q = inputs_ctx.q;
    inputs_ctx_execute.fio2 = inputs_ctx.fio2;
    inputs_ctx_execute.ti = inputs_ctx.ti;
    inputs_ctx_execute.te = inputs_ctx.te;
    nPulmon = _ctx_nPulmon_buffer;
    qPulmon = _ctx_qPulmon_buffer;
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "809308386f979f298ab71d3008f714e5";
const char* _SCSIM_SmuTypesCheckSum = "f59a7f532a7d2323bdffcdce912b7ce3";

/* simulation */

int SimInit(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_USER_DEFINED_INIT
    general_init(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

int SimReset(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
    general_reset(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

#ifdef __cplusplus
    #ifdef pSimoutC_generalCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_generalCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_generalCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_generalCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_generalCIVTable != NULL && 
        pSimoutC_generalCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_generalCIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
    }
    else {
        /* VTable misssing => error */
        nRet = 0;
    }
    return nRet;
}

#ifdef EXTENDED_SIM
    int GraphicalInputsConnected = 1;
#endif

int SimStep(void) {
#ifdef EXTENDED_SIM
    if (GraphicalInputsConnected)
        BeforeSimStep();
#endif
    _SCSIM_ExecuteInterface();
    general(&inputs_ctx_execute, &outputs_ctx);
#ifdef EXTENDED_SIM
    AfterSimStep();
#endif
    return 1;
}

int SimStop(void) {
#ifdef EXTENDED_SIM
    ExtendedSimStop();
#endif
    return 1;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
    UpdateValues();
#endif
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
    GraphicalInputsConnected = bConnect;
#else
    UNUSED(bConnect);
#endif
}

/* dump */

int SsmGetDumpSize(void) {
    int nSize = 0;
    nSize += sizeof(inC_general);
    nSize += sizeof(outC_general);
    nSize += sizeof(kcg_int32);
    nSize += sizeof(kcg_float32);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_general));
    pCurrent += sizeof(inC_general);
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_general));
    pCurrent += sizeof(outC_general);
    memcpy(pCurrent, &nPulmon, sizeof(kcg_int32));
    pCurrent += sizeof(kcg_int32);
    memcpy(pCurrent, &qPulmon, sizeof(kcg_float32));
    pCurrent += sizeof(kcg_float32);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_general));
    pCurrent += sizeof(inC_general);
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_general));
    pCurrent += sizeof(outC_general);
    memcpy(&nPulmon, pCurrent, sizeof(kcg_int32));
    pCurrent += sizeof(kcg_int32);
    memcpy(&qPulmon, pCurrent, sizeof(kcg_float32));
    pCurrent += sizeof(kcg_float32);
#ifdef EXTENDED_SIM
    ExtendedRestoreDumpData(pCurrent);
#endif
}

/* snapshot */

int SsmSaveSnapshot(const char * szFilePath, size_t nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

int SsmLoadSnapshot(const char * szFilePath, size_t *nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

/* checksum */

const char * SsmGetCheckSum() {
    return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
    return _SCSIM_SmuTypesCheckSum;
}

#ifdef __cplusplus
} /* "C" */
#endif

