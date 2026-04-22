/* Non Linear Systems */
#include "s000_baseline_model.h"
#include "s000_baseline_12jac.h"
#include "simulation/jacobian_util.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

void residualFunc410(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,410};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc410: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 410).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc410 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[89]] /* dc.retRes[6].k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* dc.retRes[6].m_flow_turbulent PARAM */)), DIVISION_SIM((-10.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* dc.retRes[6].m_flow_nominal_pos PARAM */),"dc.retRes[6].m_flow_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* dc.retRes[6].dp variable */);
  threadData->lastEquationSolved = 409;
  /* restore known outputs */
  threadData->lastEquationSolved = 410;
}
void initializeSparsePatternNLS410(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS410(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS410(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS410(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for dc.roo.air.cfd.u[21] */
  sysData->nominal[i] = data->modelData->realVarsData[180].attribute /* dc.roo.air.cfd.u[21] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[180].attribute /* dc.roo.air.cfd.u[21] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[180].attribute /* dc.roo.air.cfd.u[21] */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS410(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS410(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS410(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS410(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS410(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */);
}


/* inner equations */

void residualFunc414(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,414};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc414: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 414).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc414 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[88]] /* dc.retRes[5].k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* dc.retRes[5].m_flow_turbulent PARAM */)), DIVISION_SIM((-10.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* dc.retRes[5].m_flow_nominal_pos PARAM */),"dc.retRes[5].m_flow_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[135]] /* dc.retRes[5].dp variable */);
  threadData->lastEquationSolved = 413;
  /* restore known outputs */
  threadData->lastEquationSolved = 414;
}
void initializeSparsePatternNLS414(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS414(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS414(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS414(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for dc.roo.air.cfd.u[20] */
  sysData->nominal[i] = data->modelData->realVarsData[179].attribute /* dc.roo.air.cfd.u[20] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[179].attribute /* dc.roo.air.cfd.u[20] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[179].attribute /* dc.roo.air.cfd.u[20] */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS414(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS414(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS414(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS414(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS414(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */);
}


/* inner equations */

void residualFunc418(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,418};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc418: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 418).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc418 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* dc.retRes[4].k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* dc.retRes[4].m_flow_turbulent PARAM */)), DIVISION_SIM((-10.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* dc.retRes[4].m_flow_nominal_pos PARAM */),"dc.retRes[4].m_flow_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* dc.retRes[4].dp variable */);
  threadData->lastEquationSolved = 417;
  /* restore known outputs */
  threadData->lastEquationSolved = 418;
}
void initializeSparsePatternNLS418(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS418(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS418(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS418(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for dc.roo.air.cfd.u[19] */
  sysData->nominal[i] = data->modelData->realVarsData[178].attribute /* dc.roo.air.cfd.u[19] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[178].attribute /* dc.roo.air.cfd.u[19] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[178].attribute /* dc.roo.air.cfd.u[19] */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS418(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS418(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS418(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS418(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS418(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */);
}


/* inner equations */

void residualFunc422(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,422};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc422: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 422).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc422 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[86]] /* dc.retRes[3].k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* dc.retRes[3].m_flow_turbulent PARAM */)), DIVISION_SIM((-10.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* dc.retRes[3].m_flow_nominal_pos PARAM */),"dc.retRes[3].m_flow_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[133]] /* dc.retRes[3].dp variable */);
  threadData->lastEquationSolved = 421;
  /* restore known outputs */
  threadData->lastEquationSolved = 422;
}
void initializeSparsePatternNLS422(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS422(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS422(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS422(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for dc.roo.air.cfd.u[18] */
  sysData->nominal[i] = data->modelData->realVarsData[177].attribute /* dc.roo.air.cfd.u[18] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[177].attribute /* dc.roo.air.cfd.u[18] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[177].attribute /* dc.roo.air.cfd.u[18] */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS422(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS422(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS422(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS422(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS422(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */);
}


/* inner equations */

void residualFunc426(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,426};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc426: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 426).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc426 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[85]] /* dc.retRes[2].k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* dc.retRes[2].m_flow_turbulent PARAM */)), DIVISION_SIM((-10.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* dc.retRes[2].m_flow_nominal_pos PARAM */),"dc.retRes[2].m_flow_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[132]] /* dc.retRes[2].dp variable */);
  threadData->lastEquationSolved = 425;
  /* restore known outputs */
  threadData->lastEquationSolved = 426;
}
void initializeSparsePatternNLS426(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS426(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS426(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS426(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for dc.roo.air.cfd.u[17] */
  sysData->nominal[i] = data->modelData->realVarsData[176].attribute /* dc.roo.air.cfd.u[17] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[176].attribute /* dc.roo.air.cfd.u[17] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[176].attribute /* dc.roo.air.cfd.u[17] */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS426(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS426(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS426(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS426(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS426(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */);
}


/* inner equations */

void residualFunc430(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,430};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc430: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 430).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc430 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* dc.retRes[1].k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* dc.retRes[1].m_flow_turbulent PARAM */)), DIVISION_SIM((-10.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* dc.retRes[1].m_flow_nominal_pos PARAM */),"dc.retRes[1].m_flow_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[131]] /* dc.retRes[1].dp variable */);
  threadData->lastEquationSolved = 429;
  /* restore known outputs */
  threadData->lastEquationSolved = 430;
}
void initializeSparsePatternNLS430(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS430(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS430(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS430(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for dc.roo.air.cfd.u[16] */
  sysData->nominal[i] = data->modelData->realVarsData[175].attribute /* dc.roo.air.cfd.u[16] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[175].attribute /* dc.roo.air.cfd.u[16] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[175].attribute /* dc.roo.air.cfd.u[16] */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS430(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS430(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS430(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS430(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS430(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */);
}


/* inner equations */

/*
equation index: 662
type: SIMPLE_ASSIGN
dc.weaDat.tWetBul_TDryBulXi.XiSat = 0.621964713077499 / (-0.378035286922501 + 0.0016349032219037793 * dc.weaDat.pAtmSel.p * exp(-17.2799 - (-4102.99) / (-35.719 + dc.weaDat.weaBus.TWetBul)))
*/
void s000_baseline_eqFunction_662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,662};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* dc.weaDat.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1525]] /* dc.weaDat.pAtmSel.p PARAM */)) * (exp(-17.2799 - (DIVISION_SIM(-4102.99,-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */),"-35.719 + dc.weaDat.weaBus.TWetBul",equationIndexes))))),"-0.378035286922501 + 0.0016349032219037793 * dc.weaDat.pAtmSel.p * exp(-17.2799 - (-4102.99) / (-35.719 + dc.weaDat.weaBus.TWetBul))",equationIndexes);
  threadData->lastEquationSolved = 662;
}
/*
equation index: 663
type: SIMPLE_ASSIGN
dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - dc.weaDat.tWetBul_TDryBulXi.XiDryBul) * dc.weaDat.tWetBul_TDryBulXi.XiSat / (1.0 - dc.weaDat.tWetBul_TDryBulXi.XiSat)
*/
void s000_baseline_eqFunction_663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,663};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* dc.weaDat.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* dc.weaDat.tWetBul_TDryBulXi.XiSat variable */),"1.0 - dc.weaDat.tWetBul_TDryBulXi.XiSat",equationIndexes));
  threadData->lastEquationSolved = 663;
}

void residualFunc669(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,669};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc669: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 669).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc669 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  s000_baseline_eqFunction_662(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_663(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* dc.weaDat.weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)));
  threadData->lastEquationSolved = 664;
  /* restore known outputs */
  threadData->lastEquationSolved = 669;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS669(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS669(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS669(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  inSysData->nonlinearPattern = (NONLINEAR_PATTERN*) malloc(sizeof(NONLINEAR_PATTERN));
  inSysData->nonlinearPattern->numberOfVars = 1;
  inSysData->nonlinearPattern->numberOfEqns = 1;
  inSysData->nonlinearPattern->numberOfNonlinear = 1;
  inSysData->nonlinearPattern->indexVar = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->indexEqn = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->columns = (unsigned int*) malloc(1*sizeof(unsigned int));
  inSysData->nonlinearPattern->rows = (unsigned int*) malloc(1*sizeof(unsigned int));
  /* initialize and accumulate index vectors */
  const int index_var[1+1] = {0,1};
  const int index_eqn[1+1] = {0,1};
  memcpy(inSysData->nonlinearPattern->indexVar, index_var, (1+1)*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->indexEqn, index_eqn, (1+1)*sizeof(unsigned int));
  for(i=2;i<1+1;++i)
    inSysData->nonlinearPattern->indexVar[i] += inSysData->nonlinearPattern->indexVar[i-1];
  for(i=2;i<1+1;++i)
    inSysData->nonlinearPattern->indexEqn[i] += inSysData->nonlinearPattern->indexEqn[i-1];
  /* initialize columns and rows */
  const int columns[1] = {0};
  const int rows[1] = {0};
  memcpy(inSysData->nonlinearPattern->columns, columns, 1*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->rows, rows, 1*sizeof(unsigned int));
}

OMC_DISABLE_OPT
void initializeStaticDataNLS669(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for dc.weaDat.weaBus.TWetBul */
  sysData->nominal[i] = data->modelData->realVarsData[428].attribute /* dc.weaDat.weaBus.TWetBul */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[428].attribute /* dc.weaDat.weaBus.TWetBul */.min;
  sysData->max[i++]   = data->modelData->realVarsData[428].attribute /* dc.weaDat.weaBus.TWetBul */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS669(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS669(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS669(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS669(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS669(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */);
}


/* inner equations */

/*
equation index: 1595
type: SIMPLE_ASSIGN
dc.weaDat.tWetBul_TDryBulXi.XiSat = 0.621964713077499 / (-0.378035286922501 + 0.0016349032219037793 * dc.weaDat.pAtmSel.p * exp(-17.2799 - (-4102.99) / (-35.719 + dc.weaDat.weaBus.TWetBul)))
*/
void s000_baseline_eqFunction_1595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1595};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* dc.weaDat.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1525]] /* dc.weaDat.pAtmSel.p PARAM */)) * (exp(-17.2799 - (DIVISION_SIM(-4102.99,-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */),"-35.719 + dc.weaDat.weaBus.TWetBul",equationIndexes))))),"-0.378035286922501 + 0.0016349032219037793 * dc.weaDat.pAtmSel.p * exp(-17.2799 - (-4102.99) / (-35.719 + dc.weaDat.weaBus.TWetBul))",equationIndexes);
  threadData->lastEquationSolved = 1595;
}
/*
equation index: 1596
type: SIMPLE_ASSIGN
dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - dc.weaDat.tWetBul_TDryBulXi.XiDryBul) * dc.weaDat.tWetBul_TDryBulXi.XiSat / (1.0 - dc.weaDat.tWetBul_TDryBulXi.XiSat)
*/
void s000_baseline_eqFunction_1596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1596};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* dc.weaDat.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* dc.weaDat.tWetBul_TDryBulXi.XiSat variable */),"1.0 - dc.weaDat.tWetBul_TDryBulXi.XiSat",equationIndexes));
  threadData->lastEquationSolved = 1596;
}

void residualFunc1602(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1602};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1602: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1602).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1602 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  s000_baseline_eqFunction_1595(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_1596(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* dc.weaDat.weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)));
  threadData->lastEquationSolved = 1597;
  /* restore known outputs */
  threadData->lastEquationSolved = 1602;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS1602(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS1602(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS1602(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  inSysData->nonlinearPattern = (NONLINEAR_PATTERN*) malloc(sizeof(NONLINEAR_PATTERN));
  inSysData->nonlinearPattern->numberOfVars = 1;
  inSysData->nonlinearPattern->numberOfEqns = 1;
  inSysData->nonlinearPattern->numberOfNonlinear = 1;
  inSysData->nonlinearPattern->indexVar = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->indexEqn = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->columns = (unsigned int*) malloc(1*sizeof(unsigned int));
  inSysData->nonlinearPattern->rows = (unsigned int*) malloc(1*sizeof(unsigned int));
  /* initialize and accumulate index vectors */
  const int index_var[1+1] = {0,1};
  const int index_eqn[1+1] = {0,1};
  memcpy(inSysData->nonlinearPattern->indexVar, index_var, (1+1)*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->indexEqn, index_eqn, (1+1)*sizeof(unsigned int));
  for(i=2;i<1+1;++i)
    inSysData->nonlinearPattern->indexVar[i] += inSysData->nonlinearPattern->indexVar[i-1];
  for(i=2;i<1+1;++i)
    inSysData->nonlinearPattern->indexEqn[i] += inSysData->nonlinearPattern->indexEqn[i-1];
  /* initialize columns and rows */
  const int columns[1] = {0};
  const int rows[1] = {0};
  memcpy(inSysData->nonlinearPattern->columns, columns, 1*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->rows, rows, 1*sizeof(unsigned int));
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1602(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for dc.weaDat.weaBus.TWetBul */
  sysData->nominal[i] = data->modelData->realVarsData[428].attribute /* dc.weaDat.weaBus.TWetBul */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[428].attribute /* dc.weaDat.weaBus.TWetBul */.min;
  sysData->max[i++]   = data->modelData->realVarsData[428].attribute /* dc.weaDat.weaBus.TWetBul */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1602(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1602(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1602(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1602(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1602(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */);
}


/* inner equations */

void residualFunc2059(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2059};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2059: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2059).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2059 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* dc.retRes[1].k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* dc.retRes[1].m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[131]] /* dc.retRes[1].dp variable */);
  threadData->lastEquationSolved = 2058;
  /* restore known outputs */
  threadData->lastEquationSolved = 2059;
}
void initializeSparsePatternNLS2059(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS2059(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS2059(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS2059(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for dc.roo.air.cfd.u[16] */
  sysData->nominal[i] = data->modelData->realVarsData[175].attribute /* dc.roo.air.cfd.u[16] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[175].attribute /* dc.roo.air.cfd.u[16] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[175].attribute /* dc.roo.air.cfd.u[16] */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2059(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2059(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2059(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2059(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2059(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */);
}


/* inner equations */

void residualFunc2065(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2065};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2065: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2065).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2065 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[85]] /* dc.retRes[2].k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* dc.retRes[2].m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[132]] /* dc.retRes[2].dp variable */);
  threadData->lastEquationSolved = 2064;
  /* restore known outputs */
  threadData->lastEquationSolved = 2065;
}
void initializeSparsePatternNLS2065(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS2065(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS2065(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS2065(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for dc.roo.air.cfd.u[17] */
  sysData->nominal[i] = data->modelData->realVarsData[176].attribute /* dc.roo.air.cfd.u[17] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[176].attribute /* dc.roo.air.cfd.u[17] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[176].attribute /* dc.roo.air.cfd.u[17] */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2065(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2065(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2065(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2065(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2065(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */);
}


/* inner equations */

void residualFunc2071(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2071};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2071: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2071).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2071 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[86]] /* dc.retRes[3].k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* dc.retRes[3].m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[133]] /* dc.retRes[3].dp variable */);
  threadData->lastEquationSolved = 2070;
  /* restore known outputs */
  threadData->lastEquationSolved = 2071;
}
void initializeSparsePatternNLS2071(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS2071(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS2071(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS2071(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for dc.roo.air.cfd.u[18] */
  sysData->nominal[i] = data->modelData->realVarsData[177].attribute /* dc.roo.air.cfd.u[18] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[177].attribute /* dc.roo.air.cfd.u[18] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[177].attribute /* dc.roo.air.cfd.u[18] */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2071(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2071(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2071(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2071(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2071(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */);
}


/* inner equations */

void residualFunc2077(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2077};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2077: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2077).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2077 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* dc.retRes[4].k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* dc.retRes[4].m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* dc.retRes[4].dp variable */);
  threadData->lastEquationSolved = 2076;
  /* restore known outputs */
  threadData->lastEquationSolved = 2077;
}
void initializeSparsePatternNLS2077(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS2077(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS2077(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS2077(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for dc.roo.air.cfd.u[19] */
  sysData->nominal[i] = data->modelData->realVarsData[178].attribute /* dc.roo.air.cfd.u[19] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[178].attribute /* dc.roo.air.cfd.u[19] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[178].attribute /* dc.roo.air.cfd.u[19] */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2077(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2077(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2077(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2077(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2077(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */);
}


/* inner equations */

void residualFunc2083(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2083};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2083: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2083).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2083 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[88]] /* dc.retRes[5].k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* dc.retRes[5].m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[135]] /* dc.retRes[5].dp variable */);
  threadData->lastEquationSolved = 2082;
  /* restore known outputs */
  threadData->lastEquationSolved = 2083;
}
void initializeSparsePatternNLS2083(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS2083(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS2083(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS2083(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for dc.roo.air.cfd.u[20] */
  sysData->nominal[i] = data->modelData->realVarsData[179].attribute /* dc.roo.air.cfd.u[20] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[179].attribute /* dc.roo.air.cfd.u[20] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[179].attribute /* dc.roo.air.cfd.u[20] */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2083(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2083(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2083(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2083(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2083(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */);
}


/* inner equations */

void residualFunc2089(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2089};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2089: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2089).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2089 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[89]] /* dc.retRes[6].k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* dc.retRes[6].m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* dc.retRes[6].dp variable */);
  threadData->lastEquationSolved = 2088;
  /* restore known outputs */
  threadData->lastEquationSolved = 2089;
}
void initializeSparsePatternNLS2089(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS2089(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS2089(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS2089(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for dc.roo.air.cfd.u[21] */
  sysData->nominal[i] = data->modelData->realVarsData[180].attribute /* dc.roo.air.cfd.u[21] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[180].attribute /* dc.roo.air.cfd.u[21] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[180].attribute /* dc.roo.air.cfd.u[21] */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2089(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2089(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2089(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2089(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2089(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */);
}


/* inner equations */

/*
equation index: 2208
type: SIMPLE_ASSIGN
$cse16 = exp(-17.2799 - (-4102.99) / (-35.719 + dc.weaDat.weaBus.TWetBul))
*/
void s000_baseline_eqFunction_2208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2208};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* $cse16 variable */) = exp(-17.2799 - (DIVISION_SIM(-4102.99,-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */),"-35.719 + dc.weaDat.weaBus.TWetBul",equationIndexes)));
  threadData->lastEquationSolved = 2208;
}
/*
equation index: 2209
type: SIMPLE_ASSIGN
dc.weaDat.tWetBul_TDryBulXi.XiSat = 0.621964713077499 / (-0.378035286922501 + 0.0016349032219037793 * dc.weaDat.pAtmSel.p * $cse16)
*/
void s000_baseline_eqFunction_2209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2209};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* dc.weaDat.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1525]] /* dc.weaDat.pAtmSel.p PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* $cse16 variable */))),"-0.378035286922501 + 0.0016349032219037793 * dc.weaDat.pAtmSel.p * $cse16",equationIndexes);
  threadData->lastEquationSolved = 2209;
}
/*
equation index: 2210
type: SIMPLE_ASSIGN
dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - dc.weaDat.tWetBul_TDryBulXi.XiDryBul) * dc.weaDat.tWetBul_TDryBulXi.XiSat / (1.0 - dc.weaDat.tWetBul_TDryBulXi.XiSat)
*/
void s000_baseline_eqFunction_2210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* dc.weaDat.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* dc.weaDat.tWetBul_TDryBulXi.XiSat variable */),"1.0 - dc.weaDat.tWetBul_TDryBulXi.XiSat",equationIndexes));
  threadData->lastEquationSolved = 2210;
}

void residualFunc2217(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2217};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2217: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2217).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2217 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  s000_baseline_eqFunction_2208(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_2209(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_2210(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* dc.weaDat.weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)));
  threadData->lastEquationSolved = 2211;
  /* restore known outputs */
  threadData->lastEquationSolved = 2217;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS2217(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS2217(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS2217(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  inSysData->nonlinearPattern = (NONLINEAR_PATTERN*) malloc(sizeof(NONLINEAR_PATTERN));
  inSysData->nonlinearPattern->numberOfVars = 1;
  inSysData->nonlinearPattern->numberOfEqns = 1;
  inSysData->nonlinearPattern->numberOfNonlinear = 1;
  inSysData->nonlinearPattern->indexVar = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->indexEqn = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->columns = (unsigned int*) malloc(1*sizeof(unsigned int));
  inSysData->nonlinearPattern->rows = (unsigned int*) malloc(1*sizeof(unsigned int));
  /* initialize and accumulate index vectors */
  const int index_var[1+1] = {0,1};
  const int index_eqn[1+1] = {0,1};
  memcpy(inSysData->nonlinearPattern->indexVar, index_var, (1+1)*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->indexEqn, index_eqn, (1+1)*sizeof(unsigned int));
  for(i=2;i<1+1;++i)
    inSysData->nonlinearPattern->indexVar[i] += inSysData->nonlinearPattern->indexVar[i-1];
  for(i=2;i<1+1;++i)
    inSysData->nonlinearPattern->indexEqn[i] += inSysData->nonlinearPattern->indexEqn[i-1];
  /* initialize columns and rows */
  const int columns[1] = {0};
  const int rows[1] = {0};
  memcpy(inSysData->nonlinearPattern->columns, columns, 1*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->rows, rows, 1*sizeof(unsigned int));
}

OMC_DISABLE_OPT
void initializeStaticDataNLS2217(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for dc.weaDat.weaBus.TWetBul */
  sysData->nominal[i] = data->modelData->realVarsData[428].attribute /* dc.weaDat.weaBus.TWetBul */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[428].attribute /* dc.weaDat.weaBus.TWetBul */.min;
  sysData->max[i++]   = data->modelData->realVarsData[428].attribute /* dc.weaDat.weaBus.TWetBul */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2217(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2217(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2217(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2217(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2217(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */);
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void s000_baseline_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[14].equationIndex = 2217;
  nonLinearSystemData[14].size = 1;
  nonLinearSystemData[14].homotopySupport = 0 /* false */;
  nonLinearSystemData[14].mixedSystem = 0 /* false */;
  nonLinearSystemData[14].residualFunc = residualFunc2217;
  nonLinearSystemData[14].strictTearingFunctionCall = NULL;
  nonLinearSystemData[14].analyticalJacobianColumn = s000_baseline_functionJacNLSJac17_column;
  nonLinearSystemData[14].initialAnalyticalJacobian = s000_baseline_initialAnalyticJacobianNLSJac17;
  nonLinearSystemData[14].jacobianIndex = 5 /*jacInx*/;
  nonLinearSystemData[14].initializeStaticNLSData = initializeStaticDataNLS2217;
  nonLinearSystemData[14].freeStaticNLSData = freeStaticDataNLS2217;
  nonLinearSystemData[14].getIterationVars = getIterationVarsNLS2217;
  nonLinearSystemData[14].checkConstraints = NULL;
  
  const int tmp_eqn_indices_14[4] = {2208, 2209, 2210, 2211};
  nonLinearSystemData[14].eqn_simcode_indices = malloc(4 * sizeof(int));
  memcpy(nonLinearSystemData[14].eqn_simcode_indices, tmp_eqn_indices_14, 4 * sizeof(int));
  nonLinearSystemData[14].torn_plus_residual_size = 4;
  
  
  nonLinearSystemData[13].equationIndex = 2089;
  nonLinearSystemData[13].size = 1;
  nonLinearSystemData[13].homotopySupport = 0 /* false */;
  nonLinearSystemData[13].mixedSystem = 0 /* false */;
  nonLinearSystemData[13].residualFunc = residualFunc2089;
  nonLinearSystemData[13].strictTearingFunctionCall = NULL;
  nonLinearSystemData[13].analyticalJacobianColumn = NULL;
  nonLinearSystemData[13].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[13].jacobianIndex = -1;
  nonLinearSystemData[13].initializeStaticNLSData = initializeStaticDataNLS2089;
  nonLinearSystemData[13].freeStaticNLSData = freeStaticDataNLS2089;
  nonLinearSystemData[13].getIterationVars = getIterationVarsNLS2089;
  nonLinearSystemData[13].checkConstraints = NULL;
  
  const int tmp_eqn_indices_13[1] = {2088};
  nonLinearSystemData[13].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[13].eqn_simcode_indices, tmp_eqn_indices_13, 1 * sizeof(int));
  nonLinearSystemData[13].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[12].equationIndex = 2083;
  nonLinearSystemData[12].size = 1;
  nonLinearSystemData[12].homotopySupport = 0 /* false */;
  nonLinearSystemData[12].mixedSystem = 0 /* false */;
  nonLinearSystemData[12].residualFunc = residualFunc2083;
  nonLinearSystemData[12].strictTearingFunctionCall = NULL;
  nonLinearSystemData[12].analyticalJacobianColumn = NULL;
  nonLinearSystemData[12].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[12].jacobianIndex = -1;
  nonLinearSystemData[12].initializeStaticNLSData = initializeStaticDataNLS2083;
  nonLinearSystemData[12].freeStaticNLSData = freeStaticDataNLS2083;
  nonLinearSystemData[12].getIterationVars = getIterationVarsNLS2083;
  nonLinearSystemData[12].checkConstraints = NULL;
  
  const int tmp_eqn_indices_12[1] = {2082};
  nonLinearSystemData[12].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[12].eqn_simcode_indices, tmp_eqn_indices_12, 1 * sizeof(int));
  nonLinearSystemData[12].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[11].equationIndex = 2077;
  nonLinearSystemData[11].size = 1;
  nonLinearSystemData[11].homotopySupport = 0 /* false */;
  nonLinearSystemData[11].mixedSystem = 0 /* false */;
  nonLinearSystemData[11].residualFunc = residualFunc2077;
  nonLinearSystemData[11].strictTearingFunctionCall = NULL;
  nonLinearSystemData[11].analyticalJacobianColumn = NULL;
  nonLinearSystemData[11].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[11].jacobianIndex = -1;
  nonLinearSystemData[11].initializeStaticNLSData = initializeStaticDataNLS2077;
  nonLinearSystemData[11].freeStaticNLSData = freeStaticDataNLS2077;
  nonLinearSystemData[11].getIterationVars = getIterationVarsNLS2077;
  nonLinearSystemData[11].checkConstraints = NULL;
  
  const int tmp_eqn_indices_11[1] = {2076};
  nonLinearSystemData[11].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[11].eqn_simcode_indices, tmp_eqn_indices_11, 1 * sizeof(int));
  nonLinearSystemData[11].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[10].equationIndex = 2071;
  nonLinearSystemData[10].size = 1;
  nonLinearSystemData[10].homotopySupport = 0 /* false */;
  nonLinearSystemData[10].mixedSystem = 0 /* false */;
  nonLinearSystemData[10].residualFunc = residualFunc2071;
  nonLinearSystemData[10].strictTearingFunctionCall = NULL;
  nonLinearSystemData[10].analyticalJacobianColumn = NULL;
  nonLinearSystemData[10].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[10].jacobianIndex = -1;
  nonLinearSystemData[10].initializeStaticNLSData = initializeStaticDataNLS2071;
  nonLinearSystemData[10].freeStaticNLSData = freeStaticDataNLS2071;
  nonLinearSystemData[10].getIterationVars = getIterationVarsNLS2071;
  nonLinearSystemData[10].checkConstraints = NULL;
  
  const int tmp_eqn_indices_10[1] = {2070};
  nonLinearSystemData[10].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[10].eqn_simcode_indices, tmp_eqn_indices_10, 1 * sizeof(int));
  nonLinearSystemData[10].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[9].equationIndex = 2065;
  nonLinearSystemData[9].size = 1;
  nonLinearSystemData[9].homotopySupport = 0 /* false */;
  nonLinearSystemData[9].mixedSystem = 0 /* false */;
  nonLinearSystemData[9].residualFunc = residualFunc2065;
  nonLinearSystemData[9].strictTearingFunctionCall = NULL;
  nonLinearSystemData[9].analyticalJacobianColumn = NULL;
  nonLinearSystemData[9].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[9].jacobianIndex = -1;
  nonLinearSystemData[9].initializeStaticNLSData = initializeStaticDataNLS2065;
  nonLinearSystemData[9].freeStaticNLSData = freeStaticDataNLS2065;
  nonLinearSystemData[9].getIterationVars = getIterationVarsNLS2065;
  nonLinearSystemData[9].checkConstraints = NULL;
  
  const int tmp_eqn_indices_9[1] = {2064};
  nonLinearSystemData[9].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[9].eqn_simcode_indices, tmp_eqn_indices_9, 1 * sizeof(int));
  nonLinearSystemData[9].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[8].equationIndex = 2059;
  nonLinearSystemData[8].size = 1;
  nonLinearSystemData[8].homotopySupport = 0 /* false */;
  nonLinearSystemData[8].mixedSystem = 0 /* false */;
  nonLinearSystemData[8].residualFunc = residualFunc2059;
  nonLinearSystemData[8].strictTearingFunctionCall = NULL;
  nonLinearSystemData[8].analyticalJacobianColumn = NULL;
  nonLinearSystemData[8].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[8].jacobianIndex = -1;
  nonLinearSystemData[8].initializeStaticNLSData = initializeStaticDataNLS2059;
  nonLinearSystemData[8].freeStaticNLSData = freeStaticDataNLS2059;
  nonLinearSystemData[8].getIterationVars = getIterationVarsNLS2059;
  nonLinearSystemData[8].checkConstraints = NULL;
  
  const int tmp_eqn_indices_8[1] = {2058};
  nonLinearSystemData[8].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[8].eqn_simcode_indices, tmp_eqn_indices_8, 1 * sizeof(int));
  nonLinearSystemData[8].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[7].equationIndex = 1602;
  nonLinearSystemData[7].size = 1;
  nonLinearSystemData[7].homotopySupport = 0 /* false */;
  nonLinearSystemData[7].mixedSystem = 0 /* false */;
  nonLinearSystemData[7].residualFunc = residualFunc1602;
  nonLinearSystemData[7].strictTearingFunctionCall = NULL;
  nonLinearSystemData[7].analyticalJacobianColumn = s000_baseline_functionJacNLSJac9_column;
  nonLinearSystemData[7].initialAnalyticalJacobian = s000_baseline_initialAnalyticJacobianNLSJac9;
  nonLinearSystemData[7].jacobianIndex = 3 /*jacInx*/;
  nonLinearSystemData[7].initializeStaticNLSData = initializeStaticDataNLS1602;
  nonLinearSystemData[7].freeStaticNLSData = freeStaticDataNLS1602;
  nonLinearSystemData[7].getIterationVars = getIterationVarsNLS1602;
  nonLinearSystemData[7].checkConstraints = NULL;
  
  const int tmp_eqn_indices_7[3] = {1595, 1596, 1597};
  nonLinearSystemData[7].eqn_simcode_indices = malloc(3 * sizeof(int));
  memcpy(nonLinearSystemData[7].eqn_simcode_indices, tmp_eqn_indices_7, 3 * sizeof(int));
  nonLinearSystemData[7].torn_plus_residual_size = 3;
  
  
  nonLinearSystemData[6].equationIndex = 669;
  nonLinearSystemData[6].size = 1;
  nonLinearSystemData[6].homotopySupport = 0 /* false */;
  nonLinearSystemData[6].mixedSystem = 0 /* false */;
  nonLinearSystemData[6].residualFunc = residualFunc669;
  nonLinearSystemData[6].strictTearingFunctionCall = NULL;
  nonLinearSystemData[6].analyticalJacobianColumn = s000_baseline_functionJacNLSJac7_column;
  nonLinearSystemData[6].initialAnalyticalJacobian = s000_baseline_initialAnalyticJacobianNLSJac7;
  nonLinearSystemData[6].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[6].initializeStaticNLSData = initializeStaticDataNLS669;
  nonLinearSystemData[6].freeStaticNLSData = freeStaticDataNLS669;
  nonLinearSystemData[6].getIterationVars = getIterationVarsNLS669;
  nonLinearSystemData[6].checkConstraints = NULL;
  
  const int tmp_eqn_indices_6[3] = {662, 663, 664};
  nonLinearSystemData[6].eqn_simcode_indices = malloc(3 * sizeof(int));
  memcpy(nonLinearSystemData[6].eqn_simcode_indices, tmp_eqn_indices_6, 3 * sizeof(int));
  nonLinearSystemData[6].torn_plus_residual_size = 3;
  
  
  nonLinearSystemData[5].equationIndex = 430;
  nonLinearSystemData[5].size = 1;
  nonLinearSystemData[5].homotopySupport = 1 /* true */;
  nonLinearSystemData[5].mixedSystem = 0 /* false */;
  nonLinearSystemData[5].residualFunc = residualFunc430;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = NULL;
  nonLinearSystemData[5].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[5].jacobianIndex = -1;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS430;
  nonLinearSystemData[5].freeStaticNLSData = freeStaticDataNLS430;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS430;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  const int tmp_eqn_indices_5[1] = {429};
  nonLinearSystemData[5].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[5].eqn_simcode_indices, tmp_eqn_indices_5, 1 * sizeof(int));
  nonLinearSystemData[5].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[4].equationIndex = 426;
  nonLinearSystemData[4].size = 1;
  nonLinearSystemData[4].homotopySupport = 1 /* true */;
  nonLinearSystemData[4].mixedSystem = 0 /* false */;
  nonLinearSystemData[4].residualFunc = residualFunc426;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = NULL;
  nonLinearSystemData[4].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[4].jacobianIndex = -1;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS426;
  nonLinearSystemData[4].freeStaticNLSData = freeStaticDataNLS426;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS426;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  const int tmp_eqn_indices_4[1] = {425};
  nonLinearSystemData[4].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[4].eqn_simcode_indices, tmp_eqn_indices_4, 1 * sizeof(int));
  nonLinearSystemData[4].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[3].equationIndex = 422;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 1 /* true */;
  nonLinearSystemData[3].mixedSystem = 0 /* false */;
  nonLinearSystemData[3].residualFunc = residualFunc422;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS422;
  nonLinearSystemData[3].freeStaticNLSData = freeStaticDataNLS422;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS422;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  const int tmp_eqn_indices_3[1] = {421};
  nonLinearSystemData[3].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[3].eqn_simcode_indices, tmp_eqn_indices_3, 1 * sizeof(int));
  nonLinearSystemData[3].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[2].equationIndex = 418;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 1 /* true */;
  nonLinearSystemData[2].mixedSystem = 0 /* false */;
  nonLinearSystemData[2].residualFunc = residualFunc418;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS418;
  nonLinearSystemData[2].freeStaticNLSData = freeStaticDataNLS418;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS418;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  const int tmp_eqn_indices_2[1] = {417};
  nonLinearSystemData[2].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[2].eqn_simcode_indices, tmp_eqn_indices_2, 1 * sizeof(int));
  nonLinearSystemData[2].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[1].equationIndex = 414;
  nonLinearSystemData[1].size = 1;
  nonLinearSystemData[1].homotopySupport = 1 /* true */;
  nonLinearSystemData[1].mixedSystem = 0 /* false */;
  nonLinearSystemData[1].residualFunc = residualFunc414;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS414;
  nonLinearSystemData[1].freeStaticNLSData = freeStaticDataNLS414;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS414;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  const int tmp_eqn_indices_1[1] = {413};
  nonLinearSystemData[1].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[1].eqn_simcode_indices, tmp_eqn_indices_1, 1 * sizeof(int));
  nonLinearSystemData[1].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[0].equationIndex = 410;
  nonLinearSystemData[0].size = 1;
  nonLinearSystemData[0].homotopySupport = 1 /* true */;
  nonLinearSystemData[0].mixedSystem = 0 /* false */;
  nonLinearSystemData[0].residualFunc = residualFunc410;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS410;
  nonLinearSystemData[0].freeStaticNLSData = freeStaticDataNLS410;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS410;
  nonLinearSystemData[0].checkConstraints = NULL;
  
  const int tmp_eqn_indices_0[1] = {409};
  nonLinearSystemData[0].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[0].eqn_simcode_indices, tmp_eqn_indices_0, 1 * sizeof(int));
  nonLinearSystemData[0].torn_plus_residual_size = 1;
}

#if defined(__cplusplus)
}
#endif
