/* Linear Systems */
#include "tmp_one_port_model.h"
#include "tmp_one_port_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 575
type: SIMPLE_ASSIGN
roo.irRadExc.G[3] = ((-roo.irRadExc.T4Opa[3]) - roo.irRadExc.J[3] * roo.irRadExc.kOpaInv[3]) / (roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3])
*/
void tmp_one_port_eqFunction_575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,575};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.irRadExc.G[3] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.T4Opa[3] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* roo.irRadExc.kOpaInv[3] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* roo.irRadExc.kOpaInv[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[736]] /* roo.irRadExc.rhoOpa[3] PARAM */)),"roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3]",equationIndexes);
  threadData->lastEquationSolved = 575;
}
/*
equation index: 576
type: SIMPLE_ASSIGN
roo.irRadExc.G[5] = ((-roo.irRadExc.T4Opa[5]) - roo.irRadExc.J[5] * roo.irRadExc.kOpaInv[5]) / (roo.irRadExc.kOpaInv[5] * roo.irRadExc.rhoOpa[5])
*/
void tmp_one_port_eqFunction_576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,576};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* roo.irRadExc.G[5] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.T4Opa[5] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.J[5] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* roo.irRadExc.kOpaInv[5] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* roo.irRadExc.kOpaInv[5] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* roo.irRadExc.rhoOpa[5] PARAM */)),"roo.irRadExc.kOpaInv[5] * roo.irRadExc.rhoOpa[5]",equationIndexes);
  threadData->lastEquationSolved = 576;
}
/*
equation index: 577
type: SIMPLE_ASSIGN
roo.irRadExc.G[4] = ((-roo.irRadExc.T4Opa[4]) - roo.irRadExc.J[4] * roo.irRadExc.kOpaInv[4]) / (roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4])
*/
void tmp_one_port_eqFunction_577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,577};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.irRadExc.G[4] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.T4Opa[4] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* roo.irRadExc.kOpaInv[4] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* roo.irRadExc.kOpaInv[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* roo.irRadExc.rhoOpa[4] PARAM */)),"roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4]",equationIndexes);
  threadData->lastEquationSolved = 577;
}
/*
equation index: 578
type: SIMPLE_ASSIGN
roo.irRadExc.G[6] = ((-roo.irRadExc.T4Opa[6]) - roo.irRadExc.J[6] * roo.irRadExc.kOpaInv[6]) / (roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6])
*/
void tmp_one_port_eqFunction_578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,578};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* roo.irRadExc.G[6] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* roo.irRadExc.T4Opa[6] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[733]] /* roo.irRadExc.kOpaInv[6] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[733]] /* roo.irRadExc.kOpaInv[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* roo.irRadExc.rhoOpa[6] PARAM */)),"roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6]",equationIndexes);
  threadData->lastEquationSolved = 578;
}
/*
equation index: 579
type: SIMPLE_ASSIGN
roo.irRadExc.J[1] = ((-roo.irRadExc.F[5,6]) * roo.irRadExc.J[5] - roo.irRadExc.F[6,6] * roo.irRadExc.J[6] - roo.irRadExc.F[4,6] * roo.irRadExc.J[4] - roo.irRadExc.F[3,6] * roo.irRadExc.J[3] - roo.irRadExc.F[2,6] * roo.irRadExc.J[2] - roo.irRadExc.G[6]) / roo.irRadExc.F[1,6]
*/
void tmp_one_port_eqFunction_579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,579};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */) = DIVISION_SIM(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* roo.irRadExc.F[5,6] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* roo.irRadExc.F[6,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* roo.irRadExc.F[4,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[511]] /* roo.irRadExc.F[3,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* roo.irRadExc.F[2,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* roo.irRadExc.G[6] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* roo.irRadExc.F[1,6] PARAM */),"roo.irRadExc.F[1,6]",equationIndexes);
  threadData->lastEquationSolved = 579;
}
/*
equation index: 580
type: SIMPLE_ASSIGN
roo.irRadExc.G[1] = (-roo.irRadExc.F[5,1]) * roo.irRadExc.J[5] - roo.irRadExc.F[6,1] * roo.irRadExc.J[6] - roo.irRadExc.F[4,1] * roo.irRadExc.J[4] - roo.irRadExc.F[3,1] * roo.irRadExc.J[3] - roo.irRadExc.F[2,1] * roo.irRadExc.J[2] - roo.irRadExc.F[1,1] * roo.irRadExc.J[1]
*/
void tmp_one_port_eqFunction_580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,580};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* roo.irRadExc.G[1] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[518]] /* roo.irRadExc.F[5,1] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* roo.irRadExc.F[6,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* roo.irRadExc.F[4,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* roo.irRadExc.F[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* roo.irRadExc.F[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* roo.irRadExc.F[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 580;
}
/*
equation index: 581
type: SIMPLE_ASSIGN
roo.irRadExc.G[2] = (-roo.irRadExc.F[5,2]) * roo.irRadExc.J[5] - roo.irRadExc.F[6,2] * roo.irRadExc.J[6] - roo.irRadExc.F[4,2] * roo.irRadExc.J[4] - roo.irRadExc.F[3,2] * roo.irRadExc.J[3] - roo.irRadExc.F[2,2] * roo.irRadExc.J[2] - roo.irRadExc.F[1,2] * roo.irRadExc.J[1]
*/
void tmp_one_port_eqFunction_581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,581};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* roo.irRadExc.G[2] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* roo.irRadExc.F[5,2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* roo.irRadExc.F[6,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* roo.irRadExc.F[4,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* roo.irRadExc.F[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* roo.irRadExc.F[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* roo.irRadExc.F[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 581;
}

void residualFunc599(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,599};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.J[5] variable */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */) = xloc[4];
  /* local constraints */
  tmp_one_port_eqFunction_575(data, threadData);
  /* local constraints */
  tmp_one_port_eqFunction_576(data, threadData);
  /* local constraints */
  tmp_one_port_eqFunction_577(data, threadData);
  /* local constraints */
  tmp_one_port_eqFunction_578(data, threadData);
  /* local constraints */
  tmp_one_port_eqFunction_579(data, threadData);
  /* local constraints */
  tmp_one_port_eqFunction_580(data, threadData);
  /* local constraints */
  tmp_one_port_eqFunction_581(data, threadData);
  res[0] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[734]] /* roo.irRadExc.rhoOpa[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* roo.irRadExc.G[1] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[728]] /* roo.irRadExc.kOpaInv[1] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.T4Opa[1] variable */);
  threadData->lastEquationSolved = 586;
  res[1] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* roo.irRadExc.F[5,4] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.irRadExc.G[4] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* roo.irRadExc.F[6,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* roo.irRadExc.F[4,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* roo.irRadExc.F[3,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* roo.irRadExc.F[2,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[497]] /* roo.irRadExc.F[1,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 585;
  res[2] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[735]] /* roo.irRadExc.rhoOpa[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* roo.irRadExc.G[2] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* roo.irRadExc.kOpaInv[2] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.T4Opa[2] variable */);
  threadData->lastEquationSolved = 584;
  res[3] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* roo.irRadExc.F[5,5] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* roo.irRadExc.G[5] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* roo.irRadExc.F[6,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* roo.irRadExc.F[4,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* roo.irRadExc.F[3,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* roo.irRadExc.F[2,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[498]] /* roo.irRadExc.F[1,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 583;
  res[4] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* roo.irRadExc.F[5,3] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.irRadExc.G[3] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* roo.irRadExc.F[6,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* roo.irRadExc.F[4,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* roo.irRadExc.F[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* roo.irRadExc.F[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* roo.irRadExc.F[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 582;
  threadData->lastEquationSolved = 599;
}
OMC_DISABLE_OPT
void initializeStaticLSData599(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[5] = {
    85 /* roo.irRadExc.J[2] */,
    89 /* roo.irRadExc.J[6] */,
    87 /* roo.irRadExc.J[4] */,
    88 /* roo.irRadExc.J[5] */,
    86 /* roo.irRadExc.J[3] */
  };
  for (int i = 0; i < 5; ++i) {
    linearSystemData->nominal[i] = data->modelData->realVarsData[indices[i]].attribute.nominal;
    linearSystemData->min[i]     = data->modelData->realVarsData[indices[i]].attribute.min;
    linearSystemData->max[i]     = data->modelData->realVarsData[indices[i]].attribute.max;
  }
}



/*
equation index: 199
type: SIMPLE_ASSIGN
roo.irRadExc.G[6] = ((-roo.irRadExc.T4Opa[6]) - roo.irRadExc.J[6] * roo.irRadExc.kOpaInv[6]) / (roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6])
*/
void tmp_one_port_eqFunction_199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* roo.irRadExc.G[6] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* roo.irRadExc.T4Opa[6] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[733]] /* roo.irRadExc.kOpaInv[6] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[733]] /* roo.irRadExc.kOpaInv[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* roo.irRadExc.rhoOpa[6] PARAM */)),"roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6]",equationIndexes);
  threadData->lastEquationSolved = 199;
}
/*
equation index: 200
type: SIMPLE_ASSIGN
roo.irRadExc.G[1] = ((-roo.irRadExc.T4Opa[1]) - roo.irRadExc.J[1] * roo.irRadExc.kOpaInv[1]) / (roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1])
*/
void tmp_one_port_eqFunction_200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,200};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* roo.irRadExc.G[1] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.T4Opa[1] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[728]] /* roo.irRadExc.kOpaInv[1] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[728]] /* roo.irRadExc.kOpaInv[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[734]] /* roo.irRadExc.rhoOpa[1] PARAM */)),"roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1]",equationIndexes);
  threadData->lastEquationSolved = 200;
}
/*
equation index: 201
type: SIMPLE_ASSIGN
roo.irRadExc.G[3] = ((-roo.irRadExc.T4Opa[3]) - roo.irRadExc.J[3] * roo.irRadExc.kOpaInv[3]) / (roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3])
*/
void tmp_one_port_eqFunction_201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,201};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.irRadExc.G[3] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.T4Opa[3] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* roo.irRadExc.kOpaInv[3] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* roo.irRadExc.kOpaInv[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[736]] /* roo.irRadExc.rhoOpa[3] PARAM */)),"roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3]",equationIndexes);
  threadData->lastEquationSolved = 201;
}
/*
equation index: 202
type: SIMPLE_ASSIGN
roo.irRadExc.G[4] = ((-roo.irRadExc.T4Opa[4]) - roo.irRadExc.J[4] * roo.irRadExc.kOpaInv[4]) / (roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4])
*/
void tmp_one_port_eqFunction_202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,202};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.irRadExc.G[4] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.T4Opa[4] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* roo.irRadExc.kOpaInv[4] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* roo.irRadExc.kOpaInv[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* roo.irRadExc.rhoOpa[4] PARAM */)),"roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4]",equationIndexes);
  threadData->lastEquationSolved = 202;
}
/*
equation index: 203
type: SIMPLE_ASSIGN
roo.irRadExc.J[5] = ((-roo.irRadExc.F[6,1]) * roo.irRadExc.J[6] - roo.irRadExc.F[4,1] * roo.irRadExc.J[4] - roo.irRadExc.F[3,1] * roo.irRadExc.J[3] - roo.irRadExc.F[2,1] * roo.irRadExc.J[2] - roo.irRadExc.F[1,1] * roo.irRadExc.J[1] - roo.irRadExc.G[1]) / roo.irRadExc.F[5,1]
*/
void tmp_one_port_eqFunction_203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.J[5] variable */) = DIVISION_SIM(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* roo.irRadExc.F[6,1] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* roo.irRadExc.F[4,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* roo.irRadExc.F[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* roo.irRadExc.F[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* roo.irRadExc.F[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* roo.irRadExc.G[1] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[518]] /* roo.irRadExc.F[5,1] PARAM */),"roo.irRadExc.F[5,1]",equationIndexes);
  threadData->lastEquationSolved = 203;
}
/*
equation index: 204
type: SIMPLE_ASSIGN
roo.irRadExc.G[2] = (-roo.irRadExc.F[5,2]) * roo.irRadExc.J[5] - roo.irRadExc.F[6,2] * roo.irRadExc.J[6] - roo.irRadExc.F[4,2] * roo.irRadExc.J[4] - roo.irRadExc.F[3,2] * roo.irRadExc.J[3] - roo.irRadExc.F[2,2] * roo.irRadExc.J[2] - roo.irRadExc.F[1,2] * roo.irRadExc.J[1]
*/
void tmp_one_port_eqFunction_204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* roo.irRadExc.G[2] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* roo.irRadExc.F[5,2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* roo.irRadExc.F[6,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* roo.irRadExc.F[4,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* roo.irRadExc.F[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* roo.irRadExc.F[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* roo.irRadExc.F[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 204;
}
/*
equation index: 205
type: SIMPLE_ASSIGN
roo.irRadExc.G[5] = (-roo.irRadExc.F[5,5]) * roo.irRadExc.J[5] - roo.irRadExc.F[6,5] * roo.irRadExc.J[6] - roo.irRadExc.F[4,5] * roo.irRadExc.J[4] - roo.irRadExc.F[3,5] * roo.irRadExc.J[3] - roo.irRadExc.F[2,5] * roo.irRadExc.J[2] - roo.irRadExc.F[1,5] * roo.irRadExc.J[1]
*/
void tmp_one_port_eqFunction_205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* roo.irRadExc.G[5] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* roo.irRadExc.F[5,5] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* roo.irRadExc.F[6,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* roo.irRadExc.F[4,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* roo.irRadExc.F[3,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* roo.irRadExc.F[2,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[498]] /* roo.irRadExc.F[1,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 205;
}

void residualFunc223(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,223};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */) = xloc[4];
  /* local constraints */
  tmp_one_port_eqFunction_199(data, threadData);
  /* local constraints */
  tmp_one_port_eqFunction_200(data, threadData);
  /* local constraints */
  tmp_one_port_eqFunction_201(data, threadData);
  /* local constraints */
  tmp_one_port_eqFunction_202(data, threadData);
  /* local constraints */
  tmp_one_port_eqFunction_203(data, threadData);
  /* local constraints */
  tmp_one_port_eqFunction_204(data, threadData);
  /* local constraints */
  tmp_one_port_eqFunction_205(data, threadData);
  res[0] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[735]] /* roo.irRadExc.rhoOpa[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* roo.irRadExc.G[2] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* roo.irRadExc.kOpaInv[2] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.T4Opa[2] variable */);
  threadData->lastEquationSolved = 210;
  res[1] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* roo.irRadExc.rhoOpa[5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* roo.irRadExc.G[5] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* roo.irRadExc.kOpaInv[5] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.T4Opa[5] variable */);
  threadData->lastEquationSolved = 209;
  res[2] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* roo.irRadExc.F[5,6] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* roo.irRadExc.G[6] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* roo.irRadExc.F[6,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* roo.irRadExc.F[4,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[511]] /* roo.irRadExc.F[3,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* roo.irRadExc.F[2,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* roo.irRadExc.F[1,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 208;
  res[3] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* roo.irRadExc.F[5,4] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.irRadExc.G[4] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* roo.irRadExc.F[6,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* roo.irRadExc.F[4,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* roo.irRadExc.F[3,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* roo.irRadExc.F[2,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[497]] /* roo.irRadExc.F[1,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 207;
  res[4] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* roo.irRadExc.F[5,3] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.irRadExc.G[3] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* roo.irRadExc.F[6,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* roo.irRadExc.F[4,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* roo.irRadExc.F[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* roo.irRadExc.F[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* roo.irRadExc.F[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 206;
  threadData->lastEquationSolved = 223;
}
OMC_DISABLE_OPT
void initializeStaticLSData223(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[5] = {
    85 /* roo.irRadExc.J[2] */,
    87 /* roo.irRadExc.J[4] */,
    86 /* roo.irRadExc.J[3] */,
    84 /* roo.irRadExc.J[1] */,
    89 /* roo.irRadExc.J[6] */
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
void tmp_one_port_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 599;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[1].residualFunc = residualFunc599;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = tmp_one_port_functionJacLSJac2_column;
  linearSystemData[1].initialAnalyticalJacobian = tmp_one_port_initialAnalyticJacobianLSJac2;
  linearSystemData[1].jacobianIndex = 2 /*jacInx*/;
  linearSystemData[1].setA = NULL;  //setLinearMatrixA599;
  linearSystemData[1].setb = NULL;  //setLinearVectorb599;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData599;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 223;
  linearSystemData[0].size = 5;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[0].residualFunc = residualFunc223;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = tmp_one_port_functionJacLSJac0_column;
  linearSystemData[0].initialAnalyticalJacobian = tmp_one_port_initialAnalyticJacobianLSJac0;
  linearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  linearSystemData[0].setA = NULL;  //setLinearMatrixA223;
  linearSystemData[0].setb = NULL;  //setLinearVectorb223;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData223;
}

#if defined(__cplusplus)
}
#endif
