/* Linear Systems */
#include "ForcedConvection_30s_model.h"
#include "ForcedConvection_30s_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 591
type: SIMPLE_ASSIGN
roo.irRadExc.G[1] = ((-roo.irRadExc.T4Opa[1]) - roo.irRadExc.J[1] * roo.irRadExc.kOpaInv[1]) / (roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1])
*/
void ForcedConvection_30s_eqFunction_591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,591};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.G[1] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* roo.irRadExc.T4Opa[1] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* roo.irRadExc.kOpaInv[1] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* roo.irRadExc.kOpaInv[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[743]] /* roo.irRadExc.rhoOpa[1] PARAM */)),"roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1]",equationIndexes);
  threadData->lastEquationSolved = 591;
}
/*
equation index: 592
type: SIMPLE_ASSIGN
roo.irRadExc.G[2] = ((-roo.irRadExc.T4Opa[2]) - roo.irRadExc.J[2] * roo.irRadExc.kOpaInv[2]) / (roo.irRadExc.kOpaInv[2] * roo.irRadExc.rhoOpa[2])
*/
void ForcedConvection_30s_eqFunction_592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,592};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.G[2] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* roo.irRadExc.T4Opa[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* roo.irRadExc.kOpaInv[2] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* roo.irRadExc.kOpaInv[2] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[744]] /* roo.irRadExc.rhoOpa[2] PARAM */)),"roo.irRadExc.kOpaInv[2] * roo.irRadExc.rhoOpa[2]",equationIndexes);
  threadData->lastEquationSolved = 592;
}
/*
equation index: 593
type: SIMPLE_ASSIGN
roo.irRadExc.G[3] = ((-roo.irRadExc.T4Opa[3]) - roo.irRadExc.J[3] * roo.irRadExc.kOpaInv[3]) / (roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3])
*/
void ForcedConvection_30s_eqFunction_593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,593};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.G[3] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* roo.irRadExc.T4Opa[3] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* roo.irRadExc.kOpaInv[3] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* roo.irRadExc.kOpaInv[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[745]] /* roo.irRadExc.rhoOpa[3] PARAM */)),"roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3]",equationIndexes);
  threadData->lastEquationSolved = 593;
}
/*
equation index: 594
type: SIMPLE_ASSIGN
roo.irRadExc.G[5] = ((-roo.irRadExc.T4Opa[5]) - roo.irRadExc.J[5] * roo.irRadExc.kOpaInv[5]) / (roo.irRadExc.kOpaInv[5] * roo.irRadExc.rhoOpa[5])
*/
void ForcedConvection_30s_eqFunction_594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,594};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.G[5] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[103]] /* roo.irRadExc.T4Opa[5] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[741]] /* roo.irRadExc.kOpaInv[5] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[741]] /* roo.irRadExc.kOpaInv[5] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[747]] /* roo.irRadExc.rhoOpa[5] PARAM */)),"roo.irRadExc.kOpaInv[5] * roo.irRadExc.rhoOpa[5]",equationIndexes);
  threadData->lastEquationSolved = 594;
}
/*
equation index: 595
type: SIMPLE_ASSIGN
roo.irRadExc.J[4] = ((-roo.irRadExc.F[5,1]) * roo.irRadExc.J[5] - roo.irRadExc.F[6,1] * roo.irRadExc.J[6] - roo.irRadExc.F[3,1] * roo.irRadExc.J[3] - roo.irRadExc.F[2,1] * roo.irRadExc.J[2] - roo.irRadExc.F[1,1] * roo.irRadExc.J[1] - roo.irRadExc.G[1]) / roo.irRadExc.F[4,1]
*/
void ForcedConvection_30s_eqFunction_595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,595};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */) = DIVISION_SIM(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* roo.irRadExc.F[5,1] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* roo.irRadExc.F[6,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* roo.irRadExc.F[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* roo.irRadExc.F[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* roo.irRadExc.F[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.G[1] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* roo.irRadExc.F[4,1] PARAM */),"roo.irRadExc.F[4,1]",equationIndexes);
  threadData->lastEquationSolved = 595;
}
/*
equation index: 596
type: SIMPLE_ASSIGN
roo.irRadExc.G[4] = (-roo.irRadExc.F[5,4]) * roo.irRadExc.J[5] - roo.irRadExc.F[6,4] * roo.irRadExc.J[6] - roo.irRadExc.F[4,4] * roo.irRadExc.J[4] - roo.irRadExc.F[3,4] * roo.irRadExc.J[3] - roo.irRadExc.F[2,4] * roo.irRadExc.J[2] - roo.irRadExc.F[1,4] * roo.irRadExc.J[1]
*/
void ForcedConvection_30s_eqFunction_596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,596};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.G[4] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[530]] /* roo.irRadExc.F[5,4] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[536]] /* roo.irRadExc.F[6,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* roo.irRadExc.F[4,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[518]] /* roo.irRadExc.F[3,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* roo.irRadExc.F[2,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* roo.irRadExc.F[1,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 596;
}
/*
equation index: 597
type: SIMPLE_ASSIGN
roo.irRadExc.G[6] = (-roo.irRadExc.F[5,6]) * roo.irRadExc.J[5] - roo.irRadExc.F[6,6] * roo.irRadExc.J[6] - roo.irRadExc.F[4,6] * roo.irRadExc.J[4] - roo.irRadExc.F[3,6] * roo.irRadExc.J[3] - roo.irRadExc.F[2,6] * roo.irRadExc.J[2] - roo.irRadExc.F[1,6] * roo.irRadExc.J[1]
*/
void ForcedConvection_30s_eqFunction_597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,597};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[90]] /* roo.irRadExc.G[6] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* roo.irRadExc.F[5,6] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* roo.irRadExc.F[6,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* roo.irRadExc.F[4,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* roo.irRadExc.F[3,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* roo.irRadExc.F[2,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* roo.irRadExc.F[1,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 597;
}

void residualFunc615(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,615};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */) = xloc[4];
  /* local constraints */
  ForcedConvection_30s_eqFunction_591(data, threadData);
  /* local constraints */
  ForcedConvection_30s_eqFunction_592(data, threadData);
  /* local constraints */
  ForcedConvection_30s_eqFunction_593(data, threadData);
  /* local constraints */
  ForcedConvection_30s_eqFunction_594(data, threadData);
  /* local constraints */
  ForcedConvection_30s_eqFunction_595(data, threadData);
  /* local constraints */
  ForcedConvection_30s_eqFunction_596(data, threadData);
  /* local constraints */
  ForcedConvection_30s_eqFunction_597(data, threadData);
  res[0] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* roo.irRadExc.rhoOpa[4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.G[4] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[740]] /* roo.irRadExc.kOpaInv[4] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[102]] /* roo.irRadExc.T4Opa[4] variable */);
  threadData->lastEquationSolved = 602;
  res[1] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[748]] /* roo.irRadExc.rhoOpa[6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[90]] /* roo.irRadExc.G[6] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[742]] /* roo.irRadExc.kOpaInv[6] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[104]] /* roo.irRadExc.T4Opa[6] variable */);
  threadData->lastEquationSolved = 601;
  res[2] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[531]] /* roo.irRadExc.F[5,5] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.G[5] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[537]] /* roo.irRadExc.F[6,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* roo.irRadExc.F[4,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* roo.irRadExc.F[3,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* roo.irRadExc.F[2,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* roo.irRadExc.F[1,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 600;
  res[3] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* roo.irRadExc.F[5,3] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.G[3] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[535]] /* roo.irRadExc.F[6,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* roo.irRadExc.F[4,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* roo.irRadExc.F[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[511]] /* roo.irRadExc.F[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* roo.irRadExc.F[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 599;
  res[4] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* roo.irRadExc.F[5,2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.G[2] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[534]] /* roo.irRadExc.F[6,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* roo.irRadExc.F[4,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* roo.irRadExc.F[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* roo.irRadExc.F[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* roo.irRadExc.F[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 598;
  threadData->lastEquationSolved = 615;
}
OMC_DISABLE_OPT
void initializeStaticLSData615(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[5] = {
    96 /* roo.irRadExc.J[6] */,
    95 /* roo.irRadExc.J[5] */,
    93 /* roo.irRadExc.J[3] */,
    92 /* roo.irRadExc.J[2] */,
    91 /* roo.irRadExc.J[1] */
  };
  for (int i = 0; i < 5; ++i) {
    linearSystemData->nominal[i] = data->modelData->realVarsData[indices[i]].attribute.nominal;
    linearSystemData->min[i]     = data->modelData->realVarsData[indices[i]].attribute.min;
    linearSystemData->max[i]     = data->modelData->realVarsData[indices[i]].attribute.max;
  }
}



/*
equation index: 139
type: SIMPLE_ASSIGN
roo.irRadExc.G[1] = ((-roo.irRadExc.T4Opa[1]) - roo.irRadExc.J[1] * roo.irRadExc.kOpaInv[1]) / (roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1])
*/
void ForcedConvection_30s_eqFunction_139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.G[1] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* roo.irRadExc.T4Opa[1] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* roo.irRadExc.kOpaInv[1] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* roo.irRadExc.kOpaInv[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[743]] /* roo.irRadExc.rhoOpa[1] PARAM */)),"roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1]",equationIndexes);
  threadData->lastEquationSolved = 139;
}
/*
equation index: 140
type: SIMPLE_ASSIGN
roo.irRadExc.G[6] = ((-roo.irRadExc.T4Opa[6]) - roo.irRadExc.J[6] * roo.irRadExc.kOpaInv[6]) / (roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6])
*/
void ForcedConvection_30s_eqFunction_140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,140};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[90]] /* roo.irRadExc.G[6] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[104]] /* roo.irRadExc.T4Opa[6] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[742]] /* roo.irRadExc.kOpaInv[6] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[742]] /* roo.irRadExc.kOpaInv[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[748]] /* roo.irRadExc.rhoOpa[6] PARAM */)),"roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6]",equationIndexes);
  threadData->lastEquationSolved = 140;
}
/*
equation index: 141
type: SIMPLE_ASSIGN
roo.irRadExc.G[4] = ((-roo.irRadExc.T4Opa[4]) - roo.irRadExc.J[4] * roo.irRadExc.kOpaInv[4]) / (roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4])
*/
void ForcedConvection_30s_eqFunction_141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.G[4] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[102]] /* roo.irRadExc.T4Opa[4] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[740]] /* roo.irRadExc.kOpaInv[4] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[740]] /* roo.irRadExc.kOpaInv[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* roo.irRadExc.rhoOpa[4] PARAM */)),"roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4]",equationIndexes);
  threadData->lastEquationSolved = 141;
}
/*
equation index: 142
type: SIMPLE_ASSIGN
roo.irRadExc.G[2] = ((-roo.irRadExc.T4Opa[2]) - roo.irRadExc.J[2] * roo.irRadExc.kOpaInv[2]) / (roo.irRadExc.kOpaInv[2] * roo.irRadExc.rhoOpa[2])
*/
void ForcedConvection_30s_eqFunction_142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,142};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.G[2] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* roo.irRadExc.T4Opa[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* roo.irRadExc.kOpaInv[2] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* roo.irRadExc.kOpaInv[2] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[744]] /* roo.irRadExc.rhoOpa[2] PARAM */)),"roo.irRadExc.kOpaInv[2] * roo.irRadExc.rhoOpa[2]",equationIndexes);
  threadData->lastEquationSolved = 142;
}
/*
equation index: 143
type: SIMPLE_ASSIGN
roo.irRadExc.J[3] = ((-roo.irRadExc.F[5,1]) * roo.irRadExc.J[5] - roo.irRadExc.F[6,1] * roo.irRadExc.J[6] - roo.irRadExc.F[4,1] * roo.irRadExc.J[4] - roo.irRadExc.F[2,1] * roo.irRadExc.J[2] - roo.irRadExc.F[1,1] * roo.irRadExc.J[1] - roo.irRadExc.G[1]) / roo.irRadExc.F[3,1]
*/
void ForcedConvection_30s_eqFunction_143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */) = DIVISION_SIM(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* roo.irRadExc.F[5,1] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* roo.irRadExc.F[6,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* roo.irRadExc.F[4,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* roo.irRadExc.F[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* roo.irRadExc.F[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.G[1] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* roo.irRadExc.F[3,1] PARAM */),"roo.irRadExc.F[3,1]",equationIndexes);
  threadData->lastEquationSolved = 143;
}
/*
equation index: 144
type: SIMPLE_ASSIGN
roo.irRadExc.G[3] = (-roo.irRadExc.F[5,3]) * roo.irRadExc.J[5] - roo.irRadExc.F[6,3] * roo.irRadExc.J[6] - roo.irRadExc.F[4,3] * roo.irRadExc.J[4] - roo.irRadExc.F[3,3] * roo.irRadExc.J[3] - roo.irRadExc.F[2,3] * roo.irRadExc.J[2] - roo.irRadExc.F[1,3] * roo.irRadExc.J[1]
*/
void ForcedConvection_30s_eqFunction_144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.G[3] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* roo.irRadExc.F[5,3] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[535]] /* roo.irRadExc.F[6,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* roo.irRadExc.F[4,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* roo.irRadExc.F[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[511]] /* roo.irRadExc.F[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* roo.irRadExc.F[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 144;
}
/*
equation index: 145
type: SIMPLE_ASSIGN
roo.irRadExc.G[5] = (-roo.irRadExc.F[5,5]) * roo.irRadExc.J[5] - roo.irRadExc.F[6,5] * roo.irRadExc.J[6] - roo.irRadExc.F[4,5] * roo.irRadExc.J[4] - roo.irRadExc.F[3,5] * roo.irRadExc.J[3] - roo.irRadExc.F[2,5] * roo.irRadExc.J[2] - roo.irRadExc.F[1,5] * roo.irRadExc.J[1]
*/
void ForcedConvection_30s_eqFunction_145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.G[5] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[531]] /* roo.irRadExc.F[5,5] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[537]] /* roo.irRadExc.F[6,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* roo.irRadExc.F[4,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* roo.irRadExc.F[3,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* roo.irRadExc.F[2,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* roo.irRadExc.F[1,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 145;
}

void residualFunc163(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,163};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */) = xloc[4];
  /* local constraints */
  ForcedConvection_30s_eqFunction_139(data, threadData);
  /* local constraints */
  ForcedConvection_30s_eqFunction_140(data, threadData);
  /* local constraints */
  ForcedConvection_30s_eqFunction_141(data, threadData);
  /* local constraints */
  ForcedConvection_30s_eqFunction_142(data, threadData);
  /* local constraints */
  ForcedConvection_30s_eqFunction_143(data, threadData);
  /* local constraints */
  ForcedConvection_30s_eqFunction_144(data, threadData);
  /* local constraints */
  ForcedConvection_30s_eqFunction_145(data, threadData);
  res[0] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[745]] /* roo.irRadExc.rhoOpa[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.G[3] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* roo.irRadExc.kOpaInv[3] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* roo.irRadExc.T4Opa[3] variable */);
  threadData->lastEquationSolved = 150;
  res[1] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* roo.irRadExc.F[5,6] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[90]] /* roo.irRadExc.G[6] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* roo.irRadExc.F[6,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* roo.irRadExc.F[4,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* roo.irRadExc.F[3,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* roo.irRadExc.F[2,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* roo.irRadExc.F[1,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 149;
  res[2] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[747]] /* roo.irRadExc.rhoOpa[5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.G[5] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[741]] /* roo.irRadExc.kOpaInv[5] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[103]] /* roo.irRadExc.T4Opa[5] variable */);
  threadData->lastEquationSolved = 148;
  res[3] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[530]] /* roo.irRadExc.F[5,4] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.G[4] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[536]] /* roo.irRadExc.F[6,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* roo.irRadExc.F[4,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[518]] /* roo.irRadExc.F[3,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* roo.irRadExc.F[2,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* roo.irRadExc.F[1,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 147;
  res[4] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* roo.irRadExc.F[5,2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.G[2] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[534]] /* roo.irRadExc.F[6,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* roo.irRadExc.F[4,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* roo.irRadExc.F[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* roo.irRadExc.F[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* roo.irRadExc.F[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 146;
  threadData->lastEquationSolved = 163;
}
OMC_DISABLE_OPT
void initializeStaticLSData163(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[5] = {
    95 /* roo.irRadExc.J[5] */,
    92 /* roo.irRadExc.J[2] */,
    94 /* roo.irRadExc.J[4] */,
    96 /* roo.irRadExc.J[6] */,
    91 /* roo.irRadExc.J[1] */
  };
  for (int i = 0; i < 5; ++i) {
    linearSystemData->nominal[i] = data->modelData->realVarsData[indices[i]].attribute.nominal;
    linearSystemData->min[i]     = data->modelData->realVarsData[indices[i]].attribute.min;
    linearSystemData->max[i]     = data->modelData->realVarsData[indices[i]].attribute.max;
  }
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void ForcedConvection_30s_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 615;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[1].residualFunc = residualFunc615;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = ForcedConvection_30s_functionJacLSJac2_column;
  linearSystemData[1].initialAnalyticalJacobian = ForcedConvection_30s_initialAnalyticJacobianLSJac2;
  linearSystemData[1].jacobianIndex = 2 /*jacInx*/;
  linearSystemData[1].setA = NULL;  //setLinearMatrixA615;
  linearSystemData[1].setb = NULL;  //setLinearVectorb615;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData615;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 163;
  linearSystemData[0].size = 5;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[0].residualFunc = residualFunc163;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = ForcedConvection_30s_functionJacLSJac0_column;
  linearSystemData[0].initialAnalyticalJacobian = ForcedConvection_30s_initialAnalyticJacobianLSJac0;
  linearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  linearSystemData[0].setA = NULL;  //setLinearMatrixA163;
  linearSystemData[0].setb = NULL;  //setLinearVectorb163;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData163;
}

#if defined(__cplusplus)
}
#endif
