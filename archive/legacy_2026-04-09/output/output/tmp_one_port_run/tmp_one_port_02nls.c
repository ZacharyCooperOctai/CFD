/* Non Linear Systems */
#include "tmp_one_port_model.h"
#include "tmp_one_port_12jac.h"
#include "simulation/jacobian_util.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 392
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiSat = 0.621964713077499 / (-0.378035286922501 + 0.0016349032219037793 * weaDat.pAtmSel.p * exp(-17.2799 - (-4102.99) / (-35.719 + weaDat.weaBus.TWetBul)))
*/
void tmp_one_port_eqFunction_392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,392};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* weaDat.pAtmSel.p PARAM */)) * (exp(-17.2799 - (DIVISION_SIM(-4102.99,-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.TWetBul variable */),"-35.719 + weaDat.weaBus.TWetBul",equationIndexes))))),"-0.378035286922501 + 0.0016349032219037793 * weaDat.pAtmSel.p * exp(-17.2799 - (-4102.99) / (-35.719 + weaDat.weaBus.TWetBul))",equationIndexes);
  threadData->lastEquationSolved = 392;
}
/*
equation index: 393
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - weaDat.tWetBul_TDryBulXi.XiDryBul) * weaDat.tWetBul_TDryBulXi.XiSat / (1.0 - weaDat.tWetBul_TDryBulXi.XiSat)
*/
void tmp_one_port_eqFunction_393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,393};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */),"1.0 - weaDat.tWetBul_TDryBulXi.XiSat",equationIndexes));
  threadData->lastEquationSolved = 393;
}

void residualFunc399(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,399};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc399: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 399).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc399 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  tmp_one_port_eqFunction_392(data, threadData);
  /* local constraints */
  tmp_one_port_eqFunction_393(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* weaDat.weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)));
  threadData->lastEquationSolved = 394;
  /* restore known outputs */
  threadData->lastEquationSolved = 399;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS399(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS399(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS399(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS399(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for weaDat.weaBus.TWetBul */
  sysData->nominal[i] = data->modelData->realVarsData[240].attribute /* weaDat.weaBus.TWetBul */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[240].attribute /* weaDat.weaBus.TWetBul */.min;
  sysData->max[i++]   = data->modelData->realVarsData[240].attribute /* weaDat.weaBus.TWetBul */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS399(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS399(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS399(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS399(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS399(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.TWetBul variable */);
}


/* inner equations */

/*
equation index: 683
type: SIMPLE_ASSIGN
$cse3 = exp(-17.2799 - (-4102.99) / (-35.719 + weaDat.weaBus.TWetBul))
*/
void tmp_one_port_eqFunction_683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,683};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* $cse3 variable */) = exp(-17.2799 - (DIVISION_SIM(-4102.99,-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.TWetBul variable */),"-35.719 + weaDat.weaBus.TWetBul",equationIndexes)));
  threadData->lastEquationSolved = 683;
}
/*
equation index: 684
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiSat = 0.621964713077499 / (-0.378035286922501 + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse3)
*/
void tmp_one_port_eqFunction_684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,684};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* weaDat.pAtmSel.p PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* $cse3 variable */))),"-0.378035286922501 + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse3",equationIndexes);
  threadData->lastEquationSolved = 684;
}
/*
equation index: 685
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - weaDat.tWetBul_TDryBulXi.XiDryBul) * weaDat.tWetBul_TDryBulXi.XiSat / (1.0 - weaDat.tWetBul_TDryBulXi.XiSat)
*/
void tmp_one_port_eqFunction_685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,685};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */),"1.0 - weaDat.tWetBul_TDryBulXi.XiSat",equationIndexes));
  threadData->lastEquationSolved = 685;
}

void residualFunc692(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,692};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc692: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 692).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc692 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  tmp_one_port_eqFunction_683(data, threadData);
  /* local constraints */
  tmp_one_port_eqFunction_684(data, threadData);
  /* local constraints */
  tmp_one_port_eqFunction_685(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* weaDat.weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)));
  threadData->lastEquationSolved = 686;
  /* restore known outputs */
  threadData->lastEquationSolved = 692;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS692(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS692(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS692(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS692(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for weaDat.weaBus.TWetBul */
  sysData->nominal[i] = data->modelData->realVarsData[240].attribute /* weaDat.weaBus.TWetBul */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[240].attribute /* weaDat.weaBus.TWetBul */.min;
  sysData->max[i++]   = data->modelData->realVarsData[240].attribute /* weaDat.weaBus.TWetBul */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS692(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS692(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS692(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS692(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS692(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.TWetBul variable */);
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void tmp_one_port_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[1].equationIndex = 692;
  nonLinearSystemData[1].size = 1;
  nonLinearSystemData[1].homotopySupport = 0 /* false */;
  nonLinearSystemData[1].mixedSystem = 0 /* false */;
  nonLinearSystemData[1].residualFunc = residualFunc692;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = tmp_one_port_functionJacNLSJac3_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = tmp_one_port_initialAnalyticJacobianNLSJac3;
  nonLinearSystemData[1].jacobianIndex = 3 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS692;
  nonLinearSystemData[1].freeStaticNLSData = freeStaticDataNLS692;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS692;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  const int tmp_eqn_indices_1[4] = {683, 684, 685, 686};
  nonLinearSystemData[1].eqn_simcode_indices = malloc(4 * sizeof(int));
  memcpy(nonLinearSystemData[1].eqn_simcode_indices, tmp_eqn_indices_1, 4 * sizeof(int));
  nonLinearSystemData[1].torn_plus_residual_size = 4;
  
  
  nonLinearSystemData[0].equationIndex = 399;
  nonLinearSystemData[0].size = 1;
  nonLinearSystemData[0].homotopySupport = 0 /* false */;
  nonLinearSystemData[0].mixedSystem = 0 /* false */;
  nonLinearSystemData[0].residualFunc = residualFunc399;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = tmp_one_port_functionJacNLSJac1_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = tmp_one_port_initialAnalyticJacobianNLSJac1;
  nonLinearSystemData[0].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS399;
  nonLinearSystemData[0].freeStaticNLSData = freeStaticDataNLS399;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS399;
  nonLinearSystemData[0].checkConstraints = NULL;
  
  const int tmp_eqn_indices_0[3] = {392, 393, 394};
  nonLinearSystemData[0].eqn_simcode_indices = malloc(3 * sizeof(int));
  memcpy(nonLinearSystemData[0].eqn_simcode_indices, tmp_eqn_indices_0, 3 * sizeof(int));
  nonLinearSystemData[0].torn_plus_residual_size = 3;
}

#if defined(__cplusplus)
}
#endif
