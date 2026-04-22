/* Linear Systems */
#include "tmp_two_returns_res_model.h"
#include "tmp_two_returns_res_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 1243
type: SIMPLE_ASSIGN
roo.irRadExc.G[6] = ((-roo.irRadExc.T4Opa[6]) - roo.irRadExc.J[6] * roo.irRadExc.kOpaInv[6]) / (roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6])
*/
void tmp_two_returns_res_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* roo.irRadExc.G[6] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* roo.irRadExc.T4Opa[6] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* roo.irRadExc.kOpaInv[6] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* roo.irRadExc.kOpaInv[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* roo.irRadExc.rhoOpa[6] PARAM */)),"roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6]",equationIndexes);
  threadData->lastEquationSolved = 1243;
}
/*
equation index: 1244
type: SIMPLE_ASSIGN
roo.irRadExc.G[4] = ((-roo.irRadExc.T4Opa[4]) - roo.irRadExc.J[4] * roo.irRadExc.kOpaInv[4]) / (roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4])
*/
void tmp_two_returns_res_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* roo.irRadExc.G[4] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* roo.irRadExc.T4Opa[4] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* roo.irRadExc.kOpaInv[4] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* roo.irRadExc.kOpaInv[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[784]] /* roo.irRadExc.rhoOpa[4] PARAM */)),"roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4]",equationIndexes);
  threadData->lastEquationSolved = 1244;
}
/*
equation index: 1245
type: SIMPLE_ASSIGN
roo.irRadExc.G[2] = ((-roo.irRadExc.T4Opa[2]) - roo.irRadExc.J[2] * roo.irRadExc.kOpaInv[2]) / (roo.irRadExc.kOpaInv[2] * roo.irRadExc.rhoOpa[2])
*/
void tmp_two_returns_res_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[109]] /* roo.irRadExc.G[2] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* roo.irRadExc.T4Opa[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* roo.irRadExc.kOpaInv[2] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* roo.irRadExc.kOpaInv[2] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* roo.irRadExc.rhoOpa[2] PARAM */)),"roo.irRadExc.kOpaInv[2] * roo.irRadExc.rhoOpa[2]",equationIndexes);
  threadData->lastEquationSolved = 1245;
}
/*
equation index: 1246
type: SIMPLE_ASSIGN
roo.irRadExc.G[1] = ((-roo.irRadExc.T4Opa[1]) - roo.irRadExc.J[1] * roo.irRadExc.kOpaInv[1]) / (roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1])
*/
void tmp_two_returns_res_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[108]] /* roo.irRadExc.G[1] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* roo.irRadExc.T4Opa[1] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* roo.irRadExc.kOpaInv[1] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* roo.irRadExc.kOpaInv[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* roo.irRadExc.rhoOpa[1] PARAM */)),"roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1]",equationIndexes);
  threadData->lastEquationSolved = 1246;
}
/*
equation index: 1247
type: SIMPLE_ASSIGN
roo.irRadExc.J[5] = ((-roo.irRadExc.F[6,6]) * roo.irRadExc.J[6] - roo.irRadExc.F[4,6] * roo.irRadExc.J[4] - roo.irRadExc.F[3,6] * roo.irRadExc.J[3] - roo.irRadExc.F[2,6] * roo.irRadExc.J[2] - roo.irRadExc.F[1,6] * roo.irRadExc.J[1] - roo.irRadExc.G[6]) / roo.irRadExc.F[5,6]
*/
void tmp_two_returns_res_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */) = DIVISION_SIM(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* roo.irRadExc.F[6,6] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[564]] /* roo.irRadExc.F[4,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* roo.irRadExc.F[3,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[552]] /* roo.irRadExc.F[2,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[546]] /* roo.irRadExc.F[1,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* roo.irRadExc.G[6] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[570]] /* roo.irRadExc.F[5,6] PARAM */),"roo.irRadExc.F[5,6]",equationIndexes);
  threadData->lastEquationSolved = 1247;
}
/*
equation index: 1248
type: SIMPLE_ASSIGN
roo.irRadExc.G[3] = (-roo.irRadExc.F[5,3]) * roo.irRadExc.J[5] - roo.irRadExc.F[6,3] * roo.irRadExc.J[6] - roo.irRadExc.F[4,3] * roo.irRadExc.J[4] - roo.irRadExc.F[3,3] * roo.irRadExc.J[3] - roo.irRadExc.F[2,3] * roo.irRadExc.J[2] - roo.irRadExc.F[1,3] * roo.irRadExc.J[1]
*/
void tmp_two_returns_res_eqFunction_1248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[110]] /* roo.irRadExc.G[3] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* roo.irRadExc.F[5,3] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[573]] /* roo.irRadExc.F[6,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* roo.irRadExc.F[4,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* roo.irRadExc.F[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* roo.irRadExc.F[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* roo.irRadExc.F[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 1248;
}
/*
equation index: 1249
type: SIMPLE_ASSIGN
roo.irRadExc.G[5] = (-roo.irRadExc.F[5,5]) * roo.irRadExc.J[5] - roo.irRadExc.F[6,5] * roo.irRadExc.J[6] - roo.irRadExc.F[4,5] * roo.irRadExc.J[4] - roo.irRadExc.F[3,5] * roo.irRadExc.J[3] - roo.irRadExc.F[2,5] * roo.irRadExc.J[2] - roo.irRadExc.F[1,5] * roo.irRadExc.J[1]
*/
void tmp_two_returns_res_eqFunction_1249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* roo.irRadExc.G[5] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[569]] /* roo.irRadExc.F[5,5] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* roo.irRadExc.F[6,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[563]] /* roo.irRadExc.F[4,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[557]] /* roo.irRadExc.F[3,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* roo.irRadExc.F[2,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[545]] /* roo.irRadExc.F[1,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 1249;
}

void residualFunc1267(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1267};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */) = xloc[4];
  /* local constraints */
  tmp_two_returns_res_eqFunction_1243(data, threadData);
  /* local constraints */
  tmp_two_returns_res_eqFunction_1244(data, threadData);
  /* local constraints */
  tmp_two_returns_res_eqFunction_1245(data, threadData);
  /* local constraints */
  tmp_two_returns_res_eqFunction_1246(data, threadData);
  /* local constraints */
  tmp_two_returns_res_eqFunction_1247(data, threadData);
  /* local constraints */
  tmp_two_returns_res_eqFunction_1248(data, threadData);
  /* local constraints */
  tmp_two_returns_res_eqFunction_1249(data, threadData);
  res[0] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* roo.irRadExc.rhoOpa[5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* roo.irRadExc.G[5] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* roo.irRadExc.kOpaInv[5] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* roo.irRadExc.T4Opa[5] variable */);
  threadData->lastEquationSolved = 1254;
  res[1] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* roo.irRadExc.rhoOpa[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[110]] /* roo.irRadExc.G[3] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* roo.irRadExc.kOpaInv[3] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* roo.irRadExc.T4Opa[3] variable */);
  threadData->lastEquationSolved = 1253;
  res[2] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* roo.irRadExc.F[5,4] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* roo.irRadExc.G[4] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* roo.irRadExc.F[6,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* roo.irRadExc.F[4,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[556]] /* roo.irRadExc.F[3,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* roo.irRadExc.F[2,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* roo.irRadExc.F[1,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 1252;
  res[3] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[566]] /* roo.irRadExc.F[5,2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[109]] /* roo.irRadExc.G[2] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* roo.irRadExc.F[6,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* roo.irRadExc.F[4,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[554]] /* roo.irRadExc.F[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* roo.irRadExc.F[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* roo.irRadExc.F[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 1251;
  res[4] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* roo.irRadExc.F[5,1] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[108]] /* roo.irRadExc.G[1] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* roo.irRadExc.F[6,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* roo.irRadExc.F[4,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[553]] /* roo.irRadExc.F[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* roo.irRadExc.F[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* roo.irRadExc.F[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 1250;
  threadData->lastEquationSolved = 1267;
}
OMC_DISABLE_OPT
void initializeStaticLSData1267(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[5] = {
    116 /* roo.irRadExc.J[3] */,
    114 /* roo.irRadExc.J[1] */,
    115 /* roo.irRadExc.J[2] */,
    117 /* roo.irRadExc.J[4] */,
    119 /* roo.irRadExc.J[6] */
  };
  for (int i = 0; i < 5; ++i) {
    linearSystemData->nominal[i] = data->modelData->realVarsData[indices[i]].attribute.nominal;
    linearSystemData->min[i]     = data->modelData->realVarsData[indices[i]].attribute.min;
    linearSystemData->max[i]     = data->modelData->realVarsData[indices[i]].attribute.max;
  }
}



/*
equation index: 804
type: SIMPLE_ASSIGN
roo.irRadExc.G[6] = ((-roo.irRadExc.T4Opa[6]) - roo.irRadExc.J[6] * roo.irRadExc.kOpaInv[6]) / (roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6])
*/
void tmp_two_returns_res_eqFunction_804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,804};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* roo.irRadExc.G[6] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* roo.irRadExc.T4Opa[6] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* roo.irRadExc.kOpaInv[6] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* roo.irRadExc.kOpaInv[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* roo.irRadExc.rhoOpa[6] PARAM */)),"roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6]",equationIndexes);
  threadData->lastEquationSolved = 804;
}
/*
equation index: 805
type: SIMPLE_ASSIGN
roo.irRadExc.G[1] = ((-roo.irRadExc.T4Opa[1]) - roo.irRadExc.J[1] * roo.irRadExc.kOpaInv[1]) / (roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1])
*/
void tmp_two_returns_res_eqFunction_805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,805};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[108]] /* roo.irRadExc.G[1] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* roo.irRadExc.T4Opa[1] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* roo.irRadExc.kOpaInv[1] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* roo.irRadExc.kOpaInv[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* roo.irRadExc.rhoOpa[1] PARAM */)),"roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1]",equationIndexes);
  threadData->lastEquationSolved = 805;
}
/*
equation index: 806
type: SIMPLE_ASSIGN
roo.irRadExc.G[3] = ((-roo.irRadExc.T4Opa[3]) - roo.irRadExc.J[3] * roo.irRadExc.kOpaInv[3]) / (roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3])
*/
void tmp_two_returns_res_eqFunction_806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,806};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[110]] /* roo.irRadExc.G[3] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* roo.irRadExc.T4Opa[3] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* roo.irRadExc.kOpaInv[3] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* roo.irRadExc.kOpaInv[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* roo.irRadExc.rhoOpa[3] PARAM */)),"roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3]",equationIndexes);
  threadData->lastEquationSolved = 806;
}
/*
equation index: 807
type: SIMPLE_ASSIGN
roo.irRadExc.G[4] = ((-roo.irRadExc.T4Opa[4]) - roo.irRadExc.J[4] * roo.irRadExc.kOpaInv[4]) / (roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4])
*/
void tmp_two_returns_res_eqFunction_807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,807};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* roo.irRadExc.G[4] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* roo.irRadExc.T4Opa[4] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* roo.irRadExc.kOpaInv[4] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* roo.irRadExc.kOpaInv[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[784]] /* roo.irRadExc.rhoOpa[4] PARAM */)),"roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4]",equationIndexes);
  threadData->lastEquationSolved = 807;
}
/*
equation index: 808
type: SIMPLE_ASSIGN
roo.irRadExc.J[5] = ((-roo.irRadExc.F[6,1]) * roo.irRadExc.J[6] - roo.irRadExc.F[4,1] * roo.irRadExc.J[4] - roo.irRadExc.F[3,1] * roo.irRadExc.J[3] - roo.irRadExc.F[2,1] * roo.irRadExc.J[2] - roo.irRadExc.F[1,1] * roo.irRadExc.J[1] - roo.irRadExc.G[1]) / roo.irRadExc.F[5,1]
*/
void tmp_two_returns_res_eqFunction_808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,808};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */) = DIVISION_SIM(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* roo.irRadExc.F[6,1] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* roo.irRadExc.F[4,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[553]] /* roo.irRadExc.F[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* roo.irRadExc.F[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* roo.irRadExc.F[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[108]] /* roo.irRadExc.G[1] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* roo.irRadExc.F[5,1] PARAM */),"roo.irRadExc.F[5,1]",equationIndexes);
  threadData->lastEquationSolved = 808;
}
/*
equation index: 809
type: SIMPLE_ASSIGN
roo.irRadExc.G[2] = (-roo.irRadExc.F[5,2]) * roo.irRadExc.J[5] - roo.irRadExc.F[6,2] * roo.irRadExc.J[6] - roo.irRadExc.F[4,2] * roo.irRadExc.J[4] - roo.irRadExc.F[3,2] * roo.irRadExc.J[3] - roo.irRadExc.F[2,2] * roo.irRadExc.J[2] - roo.irRadExc.F[1,2] * roo.irRadExc.J[1]
*/
void tmp_two_returns_res_eqFunction_809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,809};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[109]] /* roo.irRadExc.G[2] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[566]] /* roo.irRadExc.F[5,2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* roo.irRadExc.F[6,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* roo.irRadExc.F[4,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[554]] /* roo.irRadExc.F[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* roo.irRadExc.F[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* roo.irRadExc.F[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 809;
}
/*
equation index: 810
type: SIMPLE_ASSIGN
roo.irRadExc.G[5] = (-roo.irRadExc.F[5,5]) * roo.irRadExc.J[5] - roo.irRadExc.F[6,5] * roo.irRadExc.J[6] - roo.irRadExc.F[4,5] * roo.irRadExc.J[4] - roo.irRadExc.F[3,5] * roo.irRadExc.J[3] - roo.irRadExc.F[2,5] * roo.irRadExc.J[2] - roo.irRadExc.F[1,5] * roo.irRadExc.J[1]
*/
void tmp_two_returns_res_eqFunction_810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,810};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* roo.irRadExc.G[5] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[569]] /* roo.irRadExc.F[5,5] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* roo.irRadExc.F[6,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[563]] /* roo.irRadExc.F[4,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[557]] /* roo.irRadExc.F[3,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* roo.irRadExc.F[2,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[545]] /* roo.irRadExc.F[1,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 810;
}

void residualFunc828(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,828};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */) = xloc[4];
  /* local constraints */
  tmp_two_returns_res_eqFunction_804(data, threadData);
  /* local constraints */
  tmp_two_returns_res_eqFunction_805(data, threadData);
  /* local constraints */
  tmp_two_returns_res_eqFunction_806(data, threadData);
  /* local constraints */
  tmp_two_returns_res_eqFunction_807(data, threadData);
  /* local constraints */
  tmp_two_returns_res_eqFunction_808(data, threadData);
  /* local constraints */
  tmp_two_returns_res_eqFunction_809(data, threadData);
  /* local constraints */
  tmp_two_returns_res_eqFunction_810(data, threadData);
  res[0] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* roo.irRadExc.rhoOpa[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[109]] /* roo.irRadExc.G[2] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* roo.irRadExc.kOpaInv[2] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* roo.irRadExc.T4Opa[2] variable */);
  threadData->lastEquationSolved = 815;
  res[1] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* roo.irRadExc.rhoOpa[5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* roo.irRadExc.G[5] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* roo.irRadExc.kOpaInv[5] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* roo.irRadExc.T4Opa[5] variable */);
  threadData->lastEquationSolved = 814;
  res[2] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[570]] /* roo.irRadExc.F[5,6] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* roo.irRadExc.G[6] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* roo.irRadExc.F[6,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[564]] /* roo.irRadExc.F[4,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* roo.irRadExc.F[3,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[552]] /* roo.irRadExc.F[2,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[546]] /* roo.irRadExc.F[1,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 813;
  res[3] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* roo.irRadExc.F[5,4] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* roo.irRadExc.G[4] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* roo.irRadExc.F[6,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* roo.irRadExc.F[4,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[556]] /* roo.irRadExc.F[3,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* roo.irRadExc.F[2,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* roo.irRadExc.F[1,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 812;
  res[4] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* roo.irRadExc.F[5,3] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[110]] /* roo.irRadExc.G[3] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[573]] /* roo.irRadExc.F[6,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* roo.irRadExc.F[4,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* roo.irRadExc.F[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* roo.irRadExc.F[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* roo.irRadExc.F[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 811;
  threadData->lastEquationSolved = 828;
}
OMC_DISABLE_OPT
void initializeStaticLSData828(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[5] = {
    115 /* roo.irRadExc.J[2] */,
    117 /* roo.irRadExc.J[4] */,
    116 /* roo.irRadExc.J[3] */,
    114 /* roo.irRadExc.J[1] */,
    119 /* roo.irRadExc.J[6] */
  };
  for (int i = 0; i < 5; ++i) {
    linearSystemData->nominal[i] = data->modelData->realVarsData[indices[i]].attribute.nominal;
    linearSystemData->min[i]     = data->modelData->realVarsData[indices[i]].attribute.min;
    linearSystemData->max[i]     = data->modelData->realVarsData[indices[i]].attribute.max;
  }
}



/*
equation index: 207
type: SIMPLE_ASSIGN
roo.irRadExc.G[6] = ((-roo.irRadExc.T4Opa[6]) - roo.irRadExc.J[6] * roo.irRadExc.kOpaInv[6]) / (roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6])
*/
void tmp_two_returns_res_eqFunction_207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,207};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* roo.irRadExc.G[6] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* roo.irRadExc.T4Opa[6] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* roo.irRadExc.kOpaInv[6] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* roo.irRadExc.kOpaInv[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* roo.irRadExc.rhoOpa[6] PARAM */)),"roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6]",equationIndexes);
  threadData->lastEquationSolved = 207;
}
/*
equation index: 208
type: SIMPLE_ASSIGN
roo.irRadExc.G[1] = ((-roo.irRadExc.T4Opa[1]) - roo.irRadExc.J[1] * roo.irRadExc.kOpaInv[1]) / (roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1])
*/
void tmp_two_returns_res_eqFunction_208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,208};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[108]] /* roo.irRadExc.G[1] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* roo.irRadExc.T4Opa[1] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* roo.irRadExc.kOpaInv[1] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* roo.irRadExc.kOpaInv[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* roo.irRadExc.rhoOpa[1] PARAM */)),"roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1]",equationIndexes);
  threadData->lastEquationSolved = 208;
}
/*
equation index: 209
type: SIMPLE_ASSIGN
roo.irRadExc.G[3] = ((-roo.irRadExc.T4Opa[3]) - roo.irRadExc.J[3] * roo.irRadExc.kOpaInv[3]) / (roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3])
*/
void tmp_two_returns_res_eqFunction_209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,209};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[110]] /* roo.irRadExc.G[3] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* roo.irRadExc.T4Opa[3] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* roo.irRadExc.kOpaInv[3] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* roo.irRadExc.kOpaInv[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* roo.irRadExc.rhoOpa[3] PARAM */)),"roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3]",equationIndexes);
  threadData->lastEquationSolved = 209;
}
/*
equation index: 210
type: SIMPLE_ASSIGN
roo.irRadExc.G[4] = ((-roo.irRadExc.T4Opa[4]) - roo.irRadExc.J[4] * roo.irRadExc.kOpaInv[4]) / (roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4])
*/
void tmp_two_returns_res_eqFunction_210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* roo.irRadExc.G[4] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* roo.irRadExc.T4Opa[4] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* roo.irRadExc.kOpaInv[4] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* roo.irRadExc.kOpaInv[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[784]] /* roo.irRadExc.rhoOpa[4] PARAM */)),"roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4]",equationIndexes);
  threadData->lastEquationSolved = 210;
}
/*
equation index: 211
type: SIMPLE_ASSIGN
roo.irRadExc.J[5] = ((-roo.irRadExc.F[6,1]) * roo.irRadExc.J[6] - roo.irRadExc.F[4,1] * roo.irRadExc.J[4] - roo.irRadExc.F[3,1] * roo.irRadExc.J[3] - roo.irRadExc.F[2,1] * roo.irRadExc.J[2] - roo.irRadExc.F[1,1] * roo.irRadExc.J[1] - roo.irRadExc.G[1]) / roo.irRadExc.F[5,1]
*/
void tmp_two_returns_res_eqFunction_211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */) = DIVISION_SIM(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* roo.irRadExc.F[6,1] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* roo.irRadExc.F[4,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[553]] /* roo.irRadExc.F[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* roo.irRadExc.F[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* roo.irRadExc.F[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[108]] /* roo.irRadExc.G[1] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* roo.irRadExc.F[5,1] PARAM */),"roo.irRadExc.F[5,1]",equationIndexes);
  threadData->lastEquationSolved = 211;
}
/*
equation index: 212
type: SIMPLE_ASSIGN
roo.irRadExc.G[2] = (-roo.irRadExc.F[5,2]) * roo.irRadExc.J[5] - roo.irRadExc.F[6,2] * roo.irRadExc.J[6] - roo.irRadExc.F[4,2] * roo.irRadExc.J[4] - roo.irRadExc.F[3,2] * roo.irRadExc.J[3] - roo.irRadExc.F[2,2] * roo.irRadExc.J[2] - roo.irRadExc.F[1,2] * roo.irRadExc.J[1]
*/
void tmp_two_returns_res_eqFunction_212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,212};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[109]] /* roo.irRadExc.G[2] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[566]] /* roo.irRadExc.F[5,2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* roo.irRadExc.F[6,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* roo.irRadExc.F[4,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[554]] /* roo.irRadExc.F[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* roo.irRadExc.F[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* roo.irRadExc.F[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 212;
}
/*
equation index: 213
type: SIMPLE_ASSIGN
roo.irRadExc.G[5] = (-roo.irRadExc.F[5,5]) * roo.irRadExc.J[5] - roo.irRadExc.F[6,5] * roo.irRadExc.J[6] - roo.irRadExc.F[4,5] * roo.irRadExc.J[4] - roo.irRadExc.F[3,5] * roo.irRadExc.J[3] - roo.irRadExc.F[2,5] * roo.irRadExc.J[2] - roo.irRadExc.F[1,5] * roo.irRadExc.J[1]
*/
void tmp_two_returns_res_eqFunction_213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,213};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* roo.irRadExc.G[5] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[569]] /* roo.irRadExc.F[5,5] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* roo.irRadExc.F[6,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[563]] /* roo.irRadExc.F[4,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[557]] /* roo.irRadExc.F[3,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* roo.irRadExc.F[2,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[545]] /* roo.irRadExc.F[1,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 213;
}

void residualFunc231(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,231};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */) = xloc[4];
  /* local constraints */
  tmp_two_returns_res_eqFunction_207(data, threadData);
  /* local constraints */
  tmp_two_returns_res_eqFunction_208(data, threadData);
  /* local constraints */
  tmp_two_returns_res_eqFunction_209(data, threadData);
  /* local constraints */
  tmp_two_returns_res_eqFunction_210(data, threadData);
  /* local constraints */
  tmp_two_returns_res_eqFunction_211(data, threadData);
  /* local constraints */
  tmp_two_returns_res_eqFunction_212(data, threadData);
  /* local constraints */
  tmp_two_returns_res_eqFunction_213(data, threadData);
  res[0] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* roo.irRadExc.rhoOpa[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[109]] /* roo.irRadExc.G[2] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* roo.irRadExc.kOpaInv[2] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* roo.irRadExc.T4Opa[2] variable */);
  threadData->lastEquationSolved = 218;
  res[1] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* roo.irRadExc.rhoOpa[5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* roo.irRadExc.G[5] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* roo.irRadExc.kOpaInv[5] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* roo.irRadExc.T4Opa[5] variable */);
  threadData->lastEquationSolved = 217;
  res[2] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[570]] /* roo.irRadExc.F[5,6] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* roo.irRadExc.G[6] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* roo.irRadExc.F[6,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[564]] /* roo.irRadExc.F[4,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* roo.irRadExc.F[3,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[552]] /* roo.irRadExc.F[2,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[546]] /* roo.irRadExc.F[1,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 216;
  res[3] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* roo.irRadExc.F[5,4] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* roo.irRadExc.G[4] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* roo.irRadExc.F[6,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* roo.irRadExc.F[4,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[556]] /* roo.irRadExc.F[3,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* roo.irRadExc.F[2,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* roo.irRadExc.F[1,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 215;
  res[4] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* roo.irRadExc.F[5,3] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[110]] /* roo.irRadExc.G[3] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[573]] /* roo.irRadExc.F[6,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* roo.irRadExc.F[4,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* roo.irRadExc.F[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* roo.irRadExc.F[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* roo.irRadExc.F[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 214;
  threadData->lastEquationSolved = 231;
}
OMC_DISABLE_OPT
void initializeStaticLSData231(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[5] = {
    115 /* roo.irRadExc.J[2] */,
    117 /* roo.irRadExc.J[4] */,
    116 /* roo.irRadExc.J[3] */,
    114 /* roo.irRadExc.J[1] */,
    119 /* roo.irRadExc.J[6] */
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
void tmp_two_returns_res_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[2].equationIndex = 1267;
  linearSystemData[2].size = 5;
  linearSystemData[2].nnz = 0;
  linearSystemData[2].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[2].residualFunc = residualFunc1267;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].analyticalJacobianColumn = tmp_two_returns_res_functionJacLSJac6_column;
  linearSystemData[2].initialAnalyticalJacobian = tmp_two_returns_res_initialAnalyticJacobianLSJac6;
  linearSystemData[2].jacobianIndex = 4 /*jacInx*/;
  linearSystemData[2].setA = NULL;  //setLinearMatrixA1267;
  linearSystemData[2].setb = NULL;  //setLinearVectorb1267;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData1267;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 828;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[1].residualFunc = residualFunc828;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = tmp_two_returns_res_functionJacLSJac4_column;
  linearSystemData[1].initialAnalyticalJacobian = tmp_two_returns_res_initialAnalyticJacobianLSJac4;
  linearSystemData[1].jacobianIndex = 2 /*jacInx*/;
  linearSystemData[1].setA = NULL;  //setLinearMatrixA828;
  linearSystemData[1].setb = NULL;  //setLinearVectorb828;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData828;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 231;
  linearSystemData[0].size = 5;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[0].residualFunc = residualFunc231;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = tmp_two_returns_res_functionJacLSJac0_column;
  linearSystemData[0].initialAnalyticalJacobian = tmp_two_returns_res_initialAnalyticJacobianLSJac0;
  linearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  linearSystemData[0].setA = NULL;  //setLinearMatrixA231;
  linearSystemData[0].setb = NULL;  //setLinearVectorb231;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData231;
}

#if defined(__cplusplus)
}
#endif
