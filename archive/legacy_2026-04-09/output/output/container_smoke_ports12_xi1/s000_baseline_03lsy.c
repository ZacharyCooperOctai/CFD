/* Linear Systems */
#include "s000_baseline_model.h"
#include "s000_baseline_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 1972
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G[6] = ((-dc.roo.irRadExc.T4Opa[6]) - dc.roo.irRadExc.J[6] * dc.roo.irRadExc.kOpaInv[6]) / (dc.roo.irRadExc.kOpaInv[6] * dc.roo.irRadExc.rhoOpa[6])
*/
void s000_baseline_eqFunction_1972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1972};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* dc.roo.irRadExc.G[6] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* dc.roo.irRadExc.T4Opa[6] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[921]] /* dc.roo.irRadExc.kOpaInv[6] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[921]] /* dc.roo.irRadExc.kOpaInv[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[927]] /* dc.roo.irRadExc.rhoOpa[6] PARAM */)),"dc.roo.irRadExc.kOpaInv[6] * dc.roo.irRadExc.rhoOpa[6]",equationIndexes);
  threadData->lastEquationSolved = 1972;
}
/*
equation index: 1973
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G[1] = ((-dc.roo.irRadExc.T4Opa[1]) - dc.roo.irRadExc.J[1] * dc.roo.irRadExc.kOpaInv[1]) / (dc.roo.irRadExc.kOpaInv[1] * dc.roo.irRadExc.rhoOpa[1])
*/
void s000_baseline_eqFunction_1973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1973};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* dc.roo.irRadExc.G[1] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* dc.roo.irRadExc.T4Opa[1] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* dc.roo.irRadExc.kOpaInv[1] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* dc.roo.irRadExc.kOpaInv[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[922]] /* dc.roo.irRadExc.rhoOpa[1] PARAM */)),"dc.roo.irRadExc.kOpaInv[1] * dc.roo.irRadExc.rhoOpa[1]",equationIndexes);
  threadData->lastEquationSolved = 1973;
}
/*
equation index: 1974
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G[4] = ((-dc.roo.irRadExc.T4Opa[4]) - dc.roo.irRadExc.J[4] * dc.roo.irRadExc.kOpaInv[4]) / (dc.roo.irRadExc.kOpaInv[4] * dc.roo.irRadExc.rhoOpa[4])
*/
void s000_baseline_eqFunction_1974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1974};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* dc.roo.irRadExc.G[4] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* dc.roo.irRadExc.T4Opa[4] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[919]] /* dc.roo.irRadExc.kOpaInv[4] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[919]] /* dc.roo.irRadExc.kOpaInv[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[925]] /* dc.roo.irRadExc.rhoOpa[4] PARAM */)),"dc.roo.irRadExc.kOpaInv[4] * dc.roo.irRadExc.rhoOpa[4]",equationIndexes);
  threadData->lastEquationSolved = 1974;
}
/*
equation index: 1975
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G[5] = ((-dc.roo.irRadExc.T4Opa[5]) - dc.roo.irRadExc.J[5] * dc.roo.irRadExc.kOpaInv[5]) / (dc.roo.irRadExc.kOpaInv[5] * dc.roo.irRadExc.rhoOpa[5])
*/
void s000_baseline_eqFunction_1975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1975};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* dc.roo.irRadExc.G[5] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* dc.roo.irRadExc.T4Opa[5] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[920]] /* dc.roo.irRadExc.kOpaInv[5] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[920]] /* dc.roo.irRadExc.kOpaInv[5] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[926]] /* dc.roo.irRadExc.rhoOpa[5] PARAM */)),"dc.roo.irRadExc.kOpaInv[5] * dc.roo.irRadExc.rhoOpa[5]",equationIndexes);
  threadData->lastEquationSolved = 1975;
}
/*
equation index: 1976
type: SIMPLE_ASSIGN
dc.roo.irRadExc.J[3] = ((-dc.roo.irRadExc.F[5,1]) * dc.roo.irRadExc.J[5] - dc.roo.irRadExc.F[6,1] * dc.roo.irRadExc.J[6] - dc.roo.irRadExc.F[4,1] * dc.roo.irRadExc.J[4] - dc.roo.irRadExc.F[2,1] * dc.roo.irRadExc.J[2] - dc.roo.irRadExc.F[1,1] * dc.roo.irRadExc.J[1] - dc.roo.irRadExc.G[1]) / dc.roo.irRadExc.F[3,1]
*/
void s000_baseline_eqFunction_1976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1976};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */) = DIVISION_SIM(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[706]] /* dc.roo.irRadExc.F[5,1] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[712]] /* dc.roo.irRadExc.F[6,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[700]] /* dc.roo.irRadExc.F[4,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[688]] /* dc.roo.irRadExc.F[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[682]] /* dc.roo.irRadExc.F[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* dc.roo.irRadExc.G[1] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[694]] /* dc.roo.irRadExc.F[3,1] PARAM */),"dc.roo.irRadExc.F[3,1]",equationIndexes);
  threadData->lastEquationSolved = 1976;
}
/*
equation index: 1977
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G[3] = (-dc.roo.irRadExc.F[5,3]) * dc.roo.irRadExc.J[5] - dc.roo.irRadExc.F[6,3] * dc.roo.irRadExc.J[6] - dc.roo.irRadExc.F[4,3] * dc.roo.irRadExc.J[4] - dc.roo.irRadExc.F[3,3] * dc.roo.irRadExc.J[3] - dc.roo.irRadExc.F[2,3] * dc.roo.irRadExc.J[2] - dc.roo.irRadExc.F[1,3] * dc.roo.irRadExc.J[1]
*/
void s000_baseline_eqFunction_1977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1977};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* dc.roo.irRadExc.G[3] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[708]] /* dc.roo.irRadExc.F[5,3] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[714]] /* dc.roo.irRadExc.F[6,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[702]] /* dc.roo.irRadExc.F[4,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[696]] /* dc.roo.irRadExc.F[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[690]] /* dc.roo.irRadExc.F[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[684]] /* dc.roo.irRadExc.F[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 1977;
}
/*
equation index: 1978
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G[2] = (-dc.roo.irRadExc.F[5,2]) * dc.roo.irRadExc.J[5] - dc.roo.irRadExc.F[6,2] * dc.roo.irRadExc.J[6] - dc.roo.irRadExc.F[4,2] * dc.roo.irRadExc.J[4] - dc.roo.irRadExc.F[3,2] * dc.roo.irRadExc.J[3] - dc.roo.irRadExc.F[2,2] * dc.roo.irRadExc.J[2] - dc.roo.irRadExc.F[1,2] * dc.roo.irRadExc.J[1]
*/
void s000_baseline_eqFunction_1978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1978};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* dc.roo.irRadExc.G[2] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[707]] /* dc.roo.irRadExc.F[5,2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[713]] /* dc.roo.irRadExc.F[6,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[701]] /* dc.roo.irRadExc.F[4,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[695]] /* dc.roo.irRadExc.F[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[689]] /* dc.roo.irRadExc.F[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[683]] /* dc.roo.irRadExc.F[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 1978;
}

void residualFunc1996(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1996};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */) = xloc[4];
  /* local constraints */
  s000_baseline_eqFunction_1972(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_1973(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_1974(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_1975(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_1976(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_1977(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_1978(data, threadData);
  res[0] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[711]] /* dc.roo.irRadExc.F[5,6] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* dc.roo.irRadExc.G[6] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[717]] /* dc.roo.irRadExc.F[6,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[705]] /* dc.roo.irRadExc.F[4,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[699]] /* dc.roo.irRadExc.F[3,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[693]] /* dc.roo.irRadExc.F[2,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[687]] /* dc.roo.irRadExc.F[1,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 1983;
  res[1] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[923]] /* dc.roo.irRadExc.rhoOpa[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* dc.roo.irRadExc.G[2] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[917]] /* dc.roo.irRadExc.kOpaInv[2] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* dc.roo.irRadExc.T4Opa[2] variable */);
  threadData->lastEquationSolved = 1982;
  res[2] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[710]] /* dc.roo.irRadExc.F[5,5] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* dc.roo.irRadExc.G[5] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[716]] /* dc.roo.irRadExc.F[6,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* dc.roo.irRadExc.F[4,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[698]] /* dc.roo.irRadExc.F[3,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[692]] /* dc.roo.irRadExc.F[2,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[686]] /* dc.roo.irRadExc.F[1,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 1981;
  res[3] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[709]] /* dc.roo.irRadExc.F[5,4] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* dc.roo.irRadExc.G[4] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[715]] /* dc.roo.irRadExc.F[6,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[703]] /* dc.roo.irRadExc.F[4,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[697]] /* dc.roo.irRadExc.F[3,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[691]] /* dc.roo.irRadExc.F[2,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[685]] /* dc.roo.irRadExc.F[1,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 1980;
  res[4] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[924]] /* dc.roo.irRadExc.rhoOpa[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* dc.roo.irRadExc.G[3] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[918]] /* dc.roo.irRadExc.kOpaInv[3] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* dc.roo.irRadExc.T4Opa[3] variable */);
  threadData->lastEquationSolved = 1979;
  threadData->lastEquationSolved = 1996;
}
OMC_DISABLE_OPT
void initializeStaticLSData1996(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[5] = {
    254 /* dc.roo.irRadExc.J[2] */,
    257 /* dc.roo.irRadExc.J[5] */,
    256 /* dc.roo.irRadExc.J[4] */,
    253 /* dc.roo.irRadExc.J[1] */,
    258 /* dc.roo.irRadExc.J[6] */
  };
  for (int i = 0; i < 5; ++i) {
    linearSystemData->nominal[i] = data->modelData->realVarsData[indices[i]].attribute.nominal;
    linearSystemData->min[i]     = data->modelData->realVarsData[indices[i]].attribute.min;
    linearSystemData->max[i]     = data->modelData->realVarsData[indices[i]].attribute.max;
  }
}



/*
equation index: 1166
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G[6] = ((-dc.roo.irRadExc.T4Opa[6]) - dc.roo.irRadExc.J[6] * dc.roo.irRadExc.kOpaInv[6]) / (dc.roo.irRadExc.kOpaInv[6] * dc.roo.irRadExc.rhoOpa[6])
*/
void s000_baseline_eqFunction_1166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1166};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* dc.roo.irRadExc.G[6] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* dc.roo.irRadExc.T4Opa[6] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[921]] /* dc.roo.irRadExc.kOpaInv[6] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[921]] /* dc.roo.irRadExc.kOpaInv[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[927]] /* dc.roo.irRadExc.rhoOpa[6] PARAM */)),"dc.roo.irRadExc.kOpaInv[6] * dc.roo.irRadExc.rhoOpa[6]",equationIndexes);
  threadData->lastEquationSolved = 1166;
}
/*
equation index: 1167
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G[1] = ((-dc.roo.irRadExc.T4Opa[1]) - dc.roo.irRadExc.J[1] * dc.roo.irRadExc.kOpaInv[1]) / (dc.roo.irRadExc.kOpaInv[1] * dc.roo.irRadExc.rhoOpa[1])
*/
void s000_baseline_eqFunction_1167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1167};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* dc.roo.irRadExc.G[1] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* dc.roo.irRadExc.T4Opa[1] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* dc.roo.irRadExc.kOpaInv[1] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* dc.roo.irRadExc.kOpaInv[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[922]] /* dc.roo.irRadExc.rhoOpa[1] PARAM */)),"dc.roo.irRadExc.kOpaInv[1] * dc.roo.irRadExc.rhoOpa[1]",equationIndexes);
  threadData->lastEquationSolved = 1167;
}
/*
equation index: 1168
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G[3] = ((-dc.roo.irRadExc.T4Opa[3]) - dc.roo.irRadExc.J[3] * dc.roo.irRadExc.kOpaInv[3]) / (dc.roo.irRadExc.kOpaInv[3] * dc.roo.irRadExc.rhoOpa[3])
*/
void s000_baseline_eqFunction_1168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1168};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* dc.roo.irRadExc.G[3] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* dc.roo.irRadExc.T4Opa[3] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[918]] /* dc.roo.irRadExc.kOpaInv[3] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[918]] /* dc.roo.irRadExc.kOpaInv[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[924]] /* dc.roo.irRadExc.rhoOpa[3] PARAM */)),"dc.roo.irRadExc.kOpaInv[3] * dc.roo.irRadExc.rhoOpa[3]",equationIndexes);
  threadData->lastEquationSolved = 1168;
}
/*
equation index: 1169
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G[4] = ((-dc.roo.irRadExc.T4Opa[4]) - dc.roo.irRadExc.J[4] * dc.roo.irRadExc.kOpaInv[4]) / (dc.roo.irRadExc.kOpaInv[4] * dc.roo.irRadExc.rhoOpa[4])
*/
void s000_baseline_eqFunction_1169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* dc.roo.irRadExc.G[4] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* dc.roo.irRadExc.T4Opa[4] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[919]] /* dc.roo.irRadExc.kOpaInv[4] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[919]] /* dc.roo.irRadExc.kOpaInv[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[925]] /* dc.roo.irRadExc.rhoOpa[4] PARAM */)),"dc.roo.irRadExc.kOpaInv[4] * dc.roo.irRadExc.rhoOpa[4]",equationIndexes);
  threadData->lastEquationSolved = 1169;
}
/*
equation index: 1170
type: SIMPLE_ASSIGN
dc.roo.irRadExc.J[5] = ((-dc.roo.irRadExc.F[6,1]) * dc.roo.irRadExc.J[6] - dc.roo.irRadExc.F[4,1] * dc.roo.irRadExc.J[4] - dc.roo.irRadExc.F[3,1] * dc.roo.irRadExc.J[3] - dc.roo.irRadExc.F[2,1] * dc.roo.irRadExc.J[2] - dc.roo.irRadExc.F[1,1] * dc.roo.irRadExc.J[1] - dc.roo.irRadExc.G[1]) / dc.roo.irRadExc.F[5,1]
*/
void s000_baseline_eqFunction_1170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1170};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */) = DIVISION_SIM(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[712]] /* dc.roo.irRadExc.F[6,1] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[700]] /* dc.roo.irRadExc.F[4,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[694]] /* dc.roo.irRadExc.F[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[688]] /* dc.roo.irRadExc.F[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[682]] /* dc.roo.irRadExc.F[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* dc.roo.irRadExc.G[1] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[706]] /* dc.roo.irRadExc.F[5,1] PARAM */),"dc.roo.irRadExc.F[5,1]",equationIndexes);
  threadData->lastEquationSolved = 1170;
}
/*
equation index: 1171
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G[2] = (-dc.roo.irRadExc.F[5,2]) * dc.roo.irRadExc.J[5] - dc.roo.irRadExc.F[6,2] * dc.roo.irRadExc.J[6] - dc.roo.irRadExc.F[4,2] * dc.roo.irRadExc.J[4] - dc.roo.irRadExc.F[3,2] * dc.roo.irRadExc.J[3] - dc.roo.irRadExc.F[2,2] * dc.roo.irRadExc.J[2] - dc.roo.irRadExc.F[1,2] * dc.roo.irRadExc.J[1]
*/
void s000_baseline_eqFunction_1171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1171};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* dc.roo.irRadExc.G[2] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[707]] /* dc.roo.irRadExc.F[5,2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[713]] /* dc.roo.irRadExc.F[6,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[701]] /* dc.roo.irRadExc.F[4,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[695]] /* dc.roo.irRadExc.F[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[689]] /* dc.roo.irRadExc.F[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[683]] /* dc.roo.irRadExc.F[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 1171;
}
/*
equation index: 1172
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G[5] = (-dc.roo.irRadExc.F[5,5]) * dc.roo.irRadExc.J[5] - dc.roo.irRadExc.F[6,5] * dc.roo.irRadExc.J[6] - dc.roo.irRadExc.F[4,5] * dc.roo.irRadExc.J[4] - dc.roo.irRadExc.F[3,5] * dc.roo.irRadExc.J[3] - dc.roo.irRadExc.F[2,5] * dc.roo.irRadExc.J[2] - dc.roo.irRadExc.F[1,5] * dc.roo.irRadExc.J[1]
*/
void s000_baseline_eqFunction_1172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* dc.roo.irRadExc.G[5] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[710]] /* dc.roo.irRadExc.F[5,5] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[716]] /* dc.roo.irRadExc.F[6,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* dc.roo.irRadExc.F[4,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[698]] /* dc.roo.irRadExc.F[3,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[692]] /* dc.roo.irRadExc.F[2,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[686]] /* dc.roo.irRadExc.F[1,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 1172;
}

void residualFunc1190(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1190};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */) = xloc[4];
  /* local constraints */
  s000_baseline_eqFunction_1166(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_1167(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_1168(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_1169(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_1170(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_1171(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_1172(data, threadData);
  res[0] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[923]] /* dc.roo.irRadExc.rhoOpa[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* dc.roo.irRadExc.G[2] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[917]] /* dc.roo.irRadExc.kOpaInv[2] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* dc.roo.irRadExc.T4Opa[2] variable */);
  threadData->lastEquationSolved = 1177;
  res[1] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[926]] /* dc.roo.irRadExc.rhoOpa[5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* dc.roo.irRadExc.G[5] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[920]] /* dc.roo.irRadExc.kOpaInv[5] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* dc.roo.irRadExc.T4Opa[5] variable */);
  threadData->lastEquationSolved = 1176;
  res[2] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[711]] /* dc.roo.irRadExc.F[5,6] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* dc.roo.irRadExc.G[6] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[717]] /* dc.roo.irRadExc.F[6,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[705]] /* dc.roo.irRadExc.F[4,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[699]] /* dc.roo.irRadExc.F[3,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[693]] /* dc.roo.irRadExc.F[2,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[687]] /* dc.roo.irRadExc.F[1,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 1175;
  res[3] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[709]] /* dc.roo.irRadExc.F[5,4] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* dc.roo.irRadExc.G[4] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[715]] /* dc.roo.irRadExc.F[6,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[703]] /* dc.roo.irRadExc.F[4,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[697]] /* dc.roo.irRadExc.F[3,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[691]] /* dc.roo.irRadExc.F[2,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[685]] /* dc.roo.irRadExc.F[1,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 1174;
  res[4] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[708]] /* dc.roo.irRadExc.F[5,3] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* dc.roo.irRadExc.G[3] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[714]] /* dc.roo.irRadExc.F[6,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[702]] /* dc.roo.irRadExc.F[4,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[696]] /* dc.roo.irRadExc.F[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[690]] /* dc.roo.irRadExc.F[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[684]] /* dc.roo.irRadExc.F[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 1173;
  threadData->lastEquationSolved = 1190;
}
OMC_DISABLE_OPT
void initializeStaticLSData1190(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[5] = {
    254 /* dc.roo.irRadExc.J[2] */,
    256 /* dc.roo.irRadExc.J[4] */,
    255 /* dc.roo.irRadExc.J[3] */,
    253 /* dc.roo.irRadExc.J[1] */,
    258 /* dc.roo.irRadExc.J[6] */
  };
  for (int i = 0; i < 5; ++i) {
    linearSystemData->nominal[i] = data->modelData->realVarsData[indices[i]].attribute.nominal;
    linearSystemData->min[i]     = data->modelData->realVarsData[indices[i]].attribute.min;
    linearSystemData->max[i]     = data->modelData->realVarsData[indices[i]].attribute.max;
  }
}



/*
equation index: 231
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G[6] = ((-dc.roo.irRadExc.T4Opa[6]) - dc.roo.irRadExc.J[6] * dc.roo.irRadExc.kOpaInv[6]) / (dc.roo.irRadExc.kOpaInv[6] * dc.roo.irRadExc.rhoOpa[6])
*/
void s000_baseline_eqFunction_231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,231};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* dc.roo.irRadExc.G[6] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* dc.roo.irRadExc.T4Opa[6] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[921]] /* dc.roo.irRadExc.kOpaInv[6] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[921]] /* dc.roo.irRadExc.kOpaInv[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[927]] /* dc.roo.irRadExc.rhoOpa[6] PARAM */)),"dc.roo.irRadExc.kOpaInv[6] * dc.roo.irRadExc.rhoOpa[6]",equationIndexes);
  threadData->lastEquationSolved = 231;
}
/*
equation index: 232
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G[1] = ((-dc.roo.irRadExc.T4Opa[1]) - dc.roo.irRadExc.J[1] * dc.roo.irRadExc.kOpaInv[1]) / (dc.roo.irRadExc.kOpaInv[1] * dc.roo.irRadExc.rhoOpa[1])
*/
void s000_baseline_eqFunction_232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* dc.roo.irRadExc.G[1] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* dc.roo.irRadExc.T4Opa[1] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* dc.roo.irRadExc.kOpaInv[1] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* dc.roo.irRadExc.kOpaInv[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[922]] /* dc.roo.irRadExc.rhoOpa[1] PARAM */)),"dc.roo.irRadExc.kOpaInv[1] * dc.roo.irRadExc.rhoOpa[1]",equationIndexes);
  threadData->lastEquationSolved = 232;
}
/*
equation index: 233
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G[3] = ((-dc.roo.irRadExc.T4Opa[3]) - dc.roo.irRadExc.J[3] * dc.roo.irRadExc.kOpaInv[3]) / (dc.roo.irRadExc.kOpaInv[3] * dc.roo.irRadExc.rhoOpa[3])
*/
void s000_baseline_eqFunction_233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* dc.roo.irRadExc.G[3] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* dc.roo.irRadExc.T4Opa[3] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[918]] /* dc.roo.irRadExc.kOpaInv[3] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[918]] /* dc.roo.irRadExc.kOpaInv[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[924]] /* dc.roo.irRadExc.rhoOpa[3] PARAM */)),"dc.roo.irRadExc.kOpaInv[3] * dc.roo.irRadExc.rhoOpa[3]",equationIndexes);
  threadData->lastEquationSolved = 233;
}
/*
equation index: 234
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G[4] = ((-dc.roo.irRadExc.T4Opa[4]) - dc.roo.irRadExc.J[4] * dc.roo.irRadExc.kOpaInv[4]) / (dc.roo.irRadExc.kOpaInv[4] * dc.roo.irRadExc.rhoOpa[4])
*/
void s000_baseline_eqFunction_234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* dc.roo.irRadExc.G[4] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* dc.roo.irRadExc.T4Opa[4] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[919]] /* dc.roo.irRadExc.kOpaInv[4] PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[919]] /* dc.roo.irRadExc.kOpaInv[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[925]] /* dc.roo.irRadExc.rhoOpa[4] PARAM */)),"dc.roo.irRadExc.kOpaInv[4] * dc.roo.irRadExc.rhoOpa[4]",equationIndexes);
  threadData->lastEquationSolved = 234;
}
/*
equation index: 235
type: SIMPLE_ASSIGN
dc.roo.irRadExc.J[5] = ((-dc.roo.irRadExc.F[6,1]) * dc.roo.irRadExc.J[6] - dc.roo.irRadExc.F[4,1] * dc.roo.irRadExc.J[4] - dc.roo.irRadExc.F[3,1] * dc.roo.irRadExc.J[3] - dc.roo.irRadExc.F[2,1] * dc.roo.irRadExc.J[2] - dc.roo.irRadExc.F[1,1] * dc.roo.irRadExc.J[1] - dc.roo.irRadExc.G[1]) / dc.roo.irRadExc.F[5,1]
*/
void s000_baseline_eqFunction_235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */) = DIVISION_SIM(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[712]] /* dc.roo.irRadExc.F[6,1] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[700]] /* dc.roo.irRadExc.F[4,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[694]] /* dc.roo.irRadExc.F[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[688]] /* dc.roo.irRadExc.F[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[682]] /* dc.roo.irRadExc.F[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* dc.roo.irRadExc.G[1] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[706]] /* dc.roo.irRadExc.F[5,1] PARAM */),"dc.roo.irRadExc.F[5,1]",equationIndexes);
  threadData->lastEquationSolved = 235;
}
/*
equation index: 236
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G[2] = (-dc.roo.irRadExc.F[5,2]) * dc.roo.irRadExc.J[5] - dc.roo.irRadExc.F[6,2] * dc.roo.irRadExc.J[6] - dc.roo.irRadExc.F[4,2] * dc.roo.irRadExc.J[4] - dc.roo.irRadExc.F[3,2] * dc.roo.irRadExc.J[3] - dc.roo.irRadExc.F[2,2] * dc.roo.irRadExc.J[2] - dc.roo.irRadExc.F[1,2] * dc.roo.irRadExc.J[1]
*/
void s000_baseline_eqFunction_236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* dc.roo.irRadExc.G[2] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[707]] /* dc.roo.irRadExc.F[5,2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[713]] /* dc.roo.irRadExc.F[6,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[701]] /* dc.roo.irRadExc.F[4,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[695]] /* dc.roo.irRadExc.F[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[689]] /* dc.roo.irRadExc.F[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[683]] /* dc.roo.irRadExc.F[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 236;
}
/*
equation index: 237
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G[5] = (-dc.roo.irRadExc.F[5,5]) * dc.roo.irRadExc.J[5] - dc.roo.irRadExc.F[6,5] * dc.roo.irRadExc.J[6] - dc.roo.irRadExc.F[4,5] * dc.roo.irRadExc.J[4] - dc.roo.irRadExc.F[3,5] * dc.roo.irRadExc.J[3] - dc.roo.irRadExc.F[2,5] * dc.roo.irRadExc.J[2] - dc.roo.irRadExc.F[1,5] * dc.roo.irRadExc.J[1]
*/
void s000_baseline_eqFunction_237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* dc.roo.irRadExc.G[5] variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[710]] /* dc.roo.irRadExc.F[5,5] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[716]] /* dc.roo.irRadExc.F[6,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* dc.roo.irRadExc.F[4,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[698]] /* dc.roo.irRadExc.F[3,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[692]] /* dc.roo.irRadExc.F[2,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[686]] /* dc.roo.irRadExc.F[1,5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 237;
}

void residualFunc255(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,255};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */) = xloc[4];
  /* local constraints */
  s000_baseline_eqFunction_231(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_232(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_233(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_234(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_235(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_236(data, threadData);
  /* local constraints */
  s000_baseline_eqFunction_237(data, threadData);
  res[0] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[923]] /* dc.roo.irRadExc.rhoOpa[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* dc.roo.irRadExc.G[2] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[917]] /* dc.roo.irRadExc.kOpaInv[2] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* dc.roo.irRadExc.T4Opa[2] variable */);
  threadData->lastEquationSolved = 242;
  res[1] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[926]] /* dc.roo.irRadExc.rhoOpa[5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* dc.roo.irRadExc.G[5] variable */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[920]] /* dc.roo.irRadExc.kOpaInv[5] PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* dc.roo.irRadExc.T4Opa[5] variable */);
  threadData->lastEquationSolved = 241;
  res[2] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[711]] /* dc.roo.irRadExc.F[5,6] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* dc.roo.irRadExc.G[6] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[717]] /* dc.roo.irRadExc.F[6,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[705]] /* dc.roo.irRadExc.F[4,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[699]] /* dc.roo.irRadExc.F[3,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[693]] /* dc.roo.irRadExc.F[2,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[687]] /* dc.roo.irRadExc.F[1,6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 240;
  res[3] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[709]] /* dc.roo.irRadExc.F[5,4] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* dc.roo.irRadExc.G[4] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[715]] /* dc.roo.irRadExc.F[6,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[703]] /* dc.roo.irRadExc.F[4,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[697]] /* dc.roo.irRadExc.F[3,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[691]] /* dc.roo.irRadExc.F[2,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[685]] /* dc.roo.irRadExc.F[1,4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 239;
  res[4] = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[708]] /* dc.roo.irRadExc.F[5,3] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* dc.roo.irRadExc.G[3] variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[714]] /* dc.roo.irRadExc.F[6,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[702]] /* dc.roo.irRadExc.F[4,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[696]] /* dc.roo.irRadExc.F[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[690]] /* dc.roo.irRadExc.F[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */))) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[684]] /* dc.roo.irRadExc.F[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */)));
  threadData->lastEquationSolved = 238;
  threadData->lastEquationSolved = 255;
}
OMC_DISABLE_OPT
void initializeStaticLSData255(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[5] = {
    254 /* dc.roo.irRadExc.J[2] */,
    256 /* dc.roo.irRadExc.J[4] */,
    255 /* dc.roo.irRadExc.J[3] */,
    253 /* dc.roo.irRadExc.J[1] */,
    258 /* dc.roo.irRadExc.J[6] */
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
void s000_baseline_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[2].equationIndex = 1996;
  linearSystemData[2].size = 5;
  linearSystemData[2].nnz = 0;
  linearSystemData[2].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[2].residualFunc = residualFunc1996;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].analyticalJacobianColumn = s000_baseline_functionJacLSJac10_column;
  linearSystemData[2].initialAnalyticalJacobian = s000_baseline_initialAnalyticJacobianLSJac10;
  linearSystemData[2].jacobianIndex = 4 /*jacInx*/;
  linearSystemData[2].setA = NULL;  //setLinearMatrixA1996;
  linearSystemData[2].setb = NULL;  //setLinearVectorb1996;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData1996;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 1190;
  linearSystemData[1].size = 5;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[1].residualFunc = residualFunc1190;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = s000_baseline_functionJacLSJac8_column;
  linearSystemData[1].initialAnalyticalJacobian = s000_baseline_initialAnalyticJacobianLSJac8;
  linearSystemData[1].jacobianIndex = 2 /*jacInx*/;
  linearSystemData[1].setA = NULL;  //setLinearMatrixA1190;
  linearSystemData[1].setb = NULL;  //setLinearVectorb1190;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData1190;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 255;
  linearSystemData[0].size = 5;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[0].residualFunc = residualFunc255;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = s000_baseline_functionJacLSJac0_column;
  linearSystemData[0].initialAnalyticalJacobian = s000_baseline_initialAnalyticJacobianLSJac0;
  linearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  linearSystemData[0].setA = NULL;  //setLinearMatrixA255;
  linearSystemData[0].setb = NULL;  //setLinearVectorb255;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData255;
}

#if defined(__cplusplus)
}
#endif
