/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "ForcedConvection_30s_model.h"
#include "simulation/solver/events.h"
#include "util/real_array.h"

/* FIXME these defines are ugly and hard to read, why not use direct function pointers instead? */
#define prefixedName_performSimulation ForcedConvection_30s_performSimulation
#define prefixedName_updateContinuousSystem ForcedConvection_30s_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation ForcedConvection_30s_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>


/* dummy VARINFO and FILEINFO */
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int ForcedConvection_30s_input_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int ForcedConvection_30s_input_function_init(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int ForcedConvection_30s_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int ForcedConvection_30s_inputNames(DATA *data, char ** names){
  
  return 0;
}

int ForcedConvection_30s_data_function(DATA *data, threadData_t *threadData)
{
  return 0;
}

int ForcedConvection_30s_dataReconciliationInputNames(DATA *data, char ** names){
  
  return 0;
}

int ForcedConvection_30s_dataReconciliationUnmeasuredVariables(DATA *data, char ** names)
{
  
  return 0;
}

int ForcedConvection_30s_output_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int ForcedConvection_30s_setc_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int ForcedConvection_30s_setb_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}


/*
equation index: 516
type: SIMPLE_ASSIGN
bounIn.ports[1].h_outflow = 1006.0 * (-273.15 + bounIn.T) * (1.0 - bounIn.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + bounIn.T)) * bounIn.X[1]
*/
void ForcedConvection_30s_eqFunction_516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,516};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* bounIn.ports[1].h_outflow variable */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* bounIn.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* bounIn.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* bounIn.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* bounIn.X[1] PARAM */));
  threadData->lastEquationSolved = 516;
}

/*
equation index: 517
type: SIMPLE_ASSIGN
bouOut.ports[1].h_outflow = 1006.0 * (-273.15 + bouOut.T) * (1.0 - bouOut.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + bouOut.T)) * bouOut.X[1]
*/
void ForcedConvection_30s_eqFunction_517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,517};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* bouOut.ports[1].h_outflow variable */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* bouOut.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* bouOut.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* bouOut.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* bouOut.X[1] PARAM */));
  threadData->lastEquationSolved = 517;
}

/*
equation index: 518
type: SIMPLE_ASSIGN
roo.air.cfd.u[13] = 273.15 + (bouOut.ports[1].h_outflow + (-2.5010145e6) * bouOut.X[1]) / (1006.0 * (1.0 - bouOut.X[1]) + 1860.0 * bouOut.X[1])
*/
void ForcedConvection_30s_eqFunction_518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,518};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* roo.air.cfd.u[13] variable */) = 273.15 + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* bouOut.ports[1].h_outflow variable */) + (-2.5010145e6) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* bouOut.X[1] PARAM */)),(1006.0) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* bouOut.X[1] PARAM */)) + (1860.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* bouOut.X[1] PARAM */)),"1006.0 * (1.0 - bouOut.X[1]) + 1860.0 * bouOut.X[1]",equationIndexes);
  threadData->lastEquationSolved = 518;
}

/*
equation index: 519
type: SIMPLE_ASSIGN
roo.air.cfd.u[12] = 273.15 + (bounIn.ports[1].h_outflow + (-2.5010145e6) * bounIn.X[1]) / (1006.0 * (1.0 - bounIn.X[1]) + 1860.0 * bounIn.X[1])
*/
void ForcedConvection_30s_eqFunction_519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,519};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* roo.air.cfd.u[12] variable */) = 273.15 + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* bounIn.ports[1].h_outflow variable */) + (-2.5010145e6) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* bounIn.X[1] PARAM */)),(1006.0) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* bounIn.X[1] PARAM */)) + (1860.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* bounIn.X[1] PARAM */)),"1006.0 * (1.0 - bounIn.X[1]) + 1860.0 * bounIn.X[1]",equationIndexes);
  threadData->lastEquationSolved = 519;
}

/*
equation index: 520
type: SIMPLE_ASSIGN
bounIn.X_in_internal[2] = bounIn.X[2]
*/
void ForcedConvection_30s_eqFunction_520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,520};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* bounIn.X_in_internal[2] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* bounIn.X[2] PARAM */);
  threadData->lastEquationSolved = 520;
}

/*
equation index: 521
type: SIMPLE_ASSIGN
bounIn.X_in_internal[1] = bounIn.X[1]
*/
void ForcedConvection_30s_eqFunction_521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,521};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* bounIn.X_in_internal[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* bounIn.X[1] PARAM */);
  threadData->lastEquationSolved = 521;
}

/*
equation index: 522
type: SIMPLE_ASSIGN
bouOut.p_in_internal = bouOut.p
*/
void ForcedConvection_30s_eqFunction_522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,522};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* bouOut.p_in_internal variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* bouOut.p PARAM */);
  threadData->lastEquationSolved = 522;
}

/*
equation index: 523
type: SIMPLE_ASSIGN
bouOut.X_in_internal[2] = bouOut.X[2]
*/
void ForcedConvection_30s_eqFunction_523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,523};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* bouOut.X_in_internal[2] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* bouOut.X[2] PARAM */);
  threadData->lastEquationSolved = 523;
}

/*
equation index: 524
type: SIMPLE_ASSIGN
bouOut.X_in_internal[1] = bouOut.X[1]
*/
void ForcedConvection_30s_eqFunction_524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,524};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* bouOut.X_in_internal[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* bouOut.X[1] PARAM */);
  threadData->lastEquationSolved = 524;
}

/*
equation index: 525
type: SIMPLE_ASSIGN
roo.heaPorRad.T = (293.15 * roo.radTem.epsAOpa[1] + 293.15 * roo.radTem.epsAOpa[2] + 293.15 * roo.radTem.epsAOpa[3] + 293.15 * roo.radTem.epsAOpa[4] + roo.radTem.epsAOpa[5] * TWal[1].T + roo.radTem.epsAOpa[6] * TWal[2].T + roo.radTem.epsAOpa[7] * TWal[3].T + roo.radTem.epsAOpa[8] * TWal[4].T + roo.radTem.epsAOpa[9] * TWal[5].T + roo.radTem.epsAOpa[10] * TWal[6].T + 293.15 * (roo.radTem.epsAOpa[11] + roo.radTem.epsAOpa[12] + roo.radTem.epsAGla[1])) / (roo.radTem.epsAOpa[1] + roo.radTem.epsAOpa[2] + roo.radTem.epsAOpa[3] + roo.radTem.epsAOpa[4] + roo.radTem.epsAOpa[5] + roo.radTem.epsAOpa[6] + roo.radTem.epsAOpa[7] + roo.radTem.epsAOpa[8] + roo.radTem.epsAOpa[9] + roo.radTem.epsAOpa[10] + roo.radTem.epsAOpa[11] + roo.radTem.epsAOpa[12] + roo.radTem.epsAGla[1])
*/
void ForcedConvection_30s_eqFunction_525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,525};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.heaPorRad.T variable */) = DIVISION_SIM((293.15) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1193]] /* roo.radTem.epsAOpa[1] PARAM */)) + (293.15) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1194]] /* roo.radTem.epsAOpa[2] PARAM */)) + (293.15) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1195]] /* roo.radTem.epsAOpa[3] PARAM */)) + (293.15) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1196]] /* roo.radTem.epsAOpa[4] PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1197]] /* roo.radTem.epsAOpa[5] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* TWal[1].T PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1198]] /* roo.radTem.epsAOpa[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* TWal[2].T PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1199]] /* roo.radTem.epsAOpa[7] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4]] /* TWal[3].T PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1200]] /* roo.radTem.epsAOpa[8] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* TWal[4].T PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1201]] /* roo.radTem.epsAOpa[9] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* TWal[5].T PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1202]] /* roo.radTem.epsAOpa[10] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* TWal[6].T PARAM */)) + (293.15) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1203]] /* roo.radTem.epsAOpa[11] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* roo.radTem.epsAOpa[12] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1192]] /* roo.radTem.epsAGla[1] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1193]] /* roo.radTem.epsAOpa[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1194]] /* roo.radTem.epsAOpa[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1195]] /* roo.radTem.epsAOpa[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1196]] /* roo.radTem.epsAOpa[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1197]] /* roo.radTem.epsAOpa[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1198]] /* roo.radTem.epsAOpa[6] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1199]] /* roo.radTem.epsAOpa[7] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1200]] /* roo.radTem.epsAOpa[8] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1201]] /* roo.radTem.epsAOpa[9] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1202]] /* roo.radTem.epsAOpa[10] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1203]] /* roo.radTem.epsAOpa[11] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* roo.radTem.epsAOpa[12] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1192]] /* roo.radTem.epsAGla[1] PARAM */),"roo.radTem.epsAOpa[1] + roo.radTem.epsAOpa[2] + roo.radTem.epsAOpa[3] + roo.radTem.epsAOpa[4] + roo.radTem.epsAOpa[5] + roo.radTem.epsAOpa[6] + roo.radTem.epsAOpa[7] + roo.radTem.epsAOpa[8] + roo.radTem.epsAOpa[9] + roo.radTem.epsAOpa[10] + roo.radTem.epsAOpa[11] + roo.radTem.epsAOpa[12] + roo.radTem.epsAGla[1]",equationIndexes);
  threadData->lastEquationSolved = 525;
}

/*
equation index: 526
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[7] = roo.air.cfd.u[7]
*/
void ForcedConvection_30s_eqFunction_526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,526};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(roo.air.cfd.uInt[7]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* roo.air.cfd.u[7] variable */);
  threadData->lastEquationSolved = 526;
}

/*
equation index: 527
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[8] = roo.air.cfd.u[8]
*/
void ForcedConvection_30s_eqFunction_527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,527};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(roo.air.cfd.uInt[8]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* roo.air.cfd.u[8] variable */);
  threadData->lastEquationSolved = 527;
}

/*
equation index: 528
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[11] = roo.air.cfd.u[11]
*/
void ForcedConvection_30s_eqFunction_528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,528};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(roo.air.cfd.uInt[11]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* roo.air.cfd.u[11] variable */);
  threadData->lastEquationSolved = 528;
}

/*
equation index: 529
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[12] = roo.air.cfd.u[12]
*/
void ForcedConvection_30s_eqFunction_529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,529};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(roo.air.cfd.uInt[12]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* roo.air.cfd.u[12] variable */);
  threadData->lastEquationSolved = 529;
}

/*
equation index: 530
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[13] = roo.air.cfd.u[13]
*/
void ForcedConvection_30s_eqFunction_530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,530};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* der(roo.air.cfd.uInt[13]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* roo.air.cfd.u[13] variable */);
  threadData->lastEquationSolved = 530;
}

/*
equation index: 531
type: SIMPLE_ASSIGN
$whenCondition4 = sample(1, roo.air.cfd.startTime, roo.air.cfd.samplePeriod)
*/
void ForcedConvection_30s_eqFunction_531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,531};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) = data->simulationInfo->samples[0];
  threadData->lastEquationSolved = 531;
}

/*
equation index: 532
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.firstTrigger = time <= roo.air.cfd.startTime + 0.5 * roo.air.cfd.samplePeriod;
end when;
*/
void ForcedConvection_30s_eqFunction_532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,532};
  modelica_boolean tmp0;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp0 = LessEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* roo.air.cfd.startTime PARAM */) + (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* roo.air.cfd.firstTrigger DISCRETE */) = tmp0;
  }
  threadData->lastEquationSolved = 532;
}

/*
equation index: 533
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[1] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[1]) else (roo.air.cfd.uInt[1] - pre(roo.air.cfd.uIntPre[1])) / roo.air.cfd.samplePeriod;
end when;
*/
void ForcedConvection_30s_eqFunction_533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,533};
  modelica_boolean tmp1;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp1 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* roo.air.cfd.uWri[1] DISCRETE */) = (tmp1?(data->simulationInfo->realVarsPre[58] /* roo.air.cfd.u[1] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* roo.air.cfd.uInt[1] STATE(1,roo.air.cfd.u[1]) */) - (data->simulationInfo->realVarsPre[252] /* roo.air.cfd.uIntPre[1] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 533;
}

/*
equation index: 534
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[2] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[2]) else (roo.air.cfd.uInt[2] - pre(roo.air.cfd.uIntPre[2])) / roo.air.cfd.samplePeriod;
end when;
*/
void ForcedConvection_30s_eqFunction_534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,534};
  modelica_boolean tmp2;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp2 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* roo.air.cfd.uWri[2] DISCRETE */) = (tmp2?(data->simulationInfo->realVarsPre[59] /* roo.air.cfd.u[2] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* roo.air.cfd.uInt[2] STATE(1,roo.air.cfd.u[2]) */) - (data->simulationInfo->realVarsPre[253] /* roo.air.cfd.uIntPre[2] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 534;
}

/*
equation index: 535
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[3] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[3]) else (roo.air.cfd.uInt[3] - pre(roo.air.cfd.uIntPre[3])) / roo.air.cfd.samplePeriod;
end when;
*/
void ForcedConvection_30s_eqFunction_535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,535};
  modelica_boolean tmp3;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp3 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* roo.air.cfd.uWri[3] DISCRETE */) = (tmp3?(data->simulationInfo->realVarsPre[60] /* roo.air.cfd.u[3] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* roo.air.cfd.uInt[3] STATE(1,roo.air.cfd.u[3]) */) - (data->simulationInfo->realVarsPre[254] /* roo.air.cfd.uIntPre[3] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 535;
}

/*
equation index: 536
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[4] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[4]) else (roo.air.cfd.uInt[4] - pre(roo.air.cfd.uIntPre[4])) / roo.air.cfd.samplePeriod;
end when;
*/
void ForcedConvection_30s_eqFunction_536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,536};
  modelica_boolean tmp4;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp4 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* roo.air.cfd.uWri[4] DISCRETE */) = (tmp4?(data->simulationInfo->realVarsPre[61] /* roo.air.cfd.u[4] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* roo.air.cfd.uInt[4] STATE(1,roo.air.cfd.u[4]) */) - (data->simulationInfo->realVarsPre[255] /* roo.air.cfd.uIntPre[4] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 536;
}

/*
equation index: 537
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[5] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[5]) else (roo.air.cfd.uInt[5] - pre(roo.air.cfd.uIntPre[5])) / roo.air.cfd.samplePeriod;
end when;
*/
void ForcedConvection_30s_eqFunction_537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,537};
  modelica_boolean tmp5;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp5 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* roo.air.cfd.uWri[5] DISCRETE */) = (tmp5?(data->simulationInfo->realVarsPre[62] /* roo.air.cfd.u[5] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* roo.air.cfd.uInt[5] STATE(1,roo.air.cfd.u[5]) */) - (data->simulationInfo->realVarsPre[256] /* roo.air.cfd.uIntPre[5] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 537;
}

/*
equation index: 538
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[6] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[6]) else (roo.air.cfd.uInt[6] - pre(roo.air.cfd.uIntPre[6])) / roo.air.cfd.samplePeriod;
end when;
*/
void ForcedConvection_30s_eqFunction_538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,538};
  modelica_boolean tmp6;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp6 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* roo.air.cfd.uWri[6] DISCRETE */) = (tmp6?(data->simulationInfo->realVarsPre[63] /* roo.air.cfd.u[6] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* roo.air.cfd.uInt[6] STATE(1,roo.air.cfd.u[6]) */) - (data->simulationInfo->realVarsPre[257] /* roo.air.cfd.uIntPre[6] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 538;
}

/*
equation index: 539
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[7] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then roo.air.cfd.u[7] else (roo.air.cfd.uInt[7] - pre(roo.air.cfd.uIntPre[7])) / roo.air.cfd.samplePeriod;
end when;
*/
void ForcedConvection_30s_eqFunction_539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,539};
  modelica_boolean tmp7;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp7 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* roo.air.cfd.uWri[7] DISCRETE */) = (tmp7?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* roo.air.cfd.u[7] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* roo.air.cfd.uInt[7] STATE(1,roo.air.cfd.u[7]) */) - (data->simulationInfo->realVarsPre[258] /* roo.air.cfd.uIntPre[7] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 539;
}

/*
equation index: 540
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[8] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then roo.air.cfd.u[8] else (roo.air.cfd.uInt[8] - pre(roo.air.cfd.uIntPre[8])) / roo.air.cfd.samplePeriod;
end when;
*/
void ForcedConvection_30s_eqFunction_540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,540};
  modelica_boolean tmp8;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp8 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* roo.air.cfd.uWri[8] DISCRETE */) = (tmp8?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* roo.air.cfd.u[8] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* roo.air.cfd.uInt[8] STATE(1,roo.air.cfd.u[8]) */) - (data->simulationInfo->realVarsPre[259] /* roo.air.cfd.uIntPre[8] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 540;
}

/*
equation index: 541
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[9] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[9]) else (roo.air.cfd.uInt[9] - pre(roo.air.cfd.uIntPre[9])) / roo.air.cfd.samplePeriod;
end when;
*/
void ForcedConvection_30s_eqFunction_541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,541};
  modelica_boolean tmp9;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp9 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* roo.air.cfd.uWri[9] DISCRETE */) = (tmp9?(data->simulationInfo->realVarsPre[66] /* roo.air.cfd.u[9] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* roo.air.cfd.uInt[9] STATE(1,roo.air.cfd.u[9]) */) - (data->simulationInfo->realVarsPre[260] /* roo.air.cfd.uIntPre[9] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 541;
}

/*
equation index: 542
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[10] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[10]) else (roo.air.cfd.uInt[10] - pre(roo.air.cfd.uIntPre[10])) / roo.air.cfd.samplePeriod;
end when;
*/
void ForcedConvection_30s_eqFunction_542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,542};
  modelica_boolean tmp10;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp10 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* roo.air.cfd.uWri[10] DISCRETE */) = (tmp10?(data->simulationInfo->realVarsPre[67] /* roo.air.cfd.u[10] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* roo.air.cfd.uInt[10] STATE(1,roo.air.cfd.u[10]) */) - (data->simulationInfo->realVarsPre[261] /* roo.air.cfd.uIntPre[10] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 542;
}

/*
equation index: 543
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[11] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then roo.air.cfd.u[11] else (roo.air.cfd.uInt[11] - pre(roo.air.cfd.uIntPre[11])) / roo.air.cfd.samplePeriod;
end when;
*/
void ForcedConvection_30s_eqFunction_543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,543};
  modelica_boolean tmp11;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp11 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* roo.air.cfd.uWri[11] DISCRETE */) = (tmp11?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* roo.air.cfd.u[11] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* roo.air.cfd.uInt[11] STATE(1,roo.air.cfd.u[11]) */) - (data->simulationInfo->realVarsPre[262] /* roo.air.cfd.uIntPre[11] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 543;
}

/*
equation index: 544
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[12] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[12]) else (roo.air.cfd.uInt[12] - pre(roo.air.cfd.uIntPre[12])) / roo.air.cfd.samplePeriod;
end when;
*/
void ForcedConvection_30s_eqFunction_544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,544};
  modelica_boolean tmp12;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp12 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* roo.air.cfd.uWri[12] DISCRETE */) = (tmp12?(data->simulationInfo->realVarsPre[69] /* roo.air.cfd.u[12] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* roo.air.cfd.uInt[12] STATE(1,roo.air.cfd.u[12]) */) - (data->simulationInfo->realVarsPre[263] /* roo.air.cfd.uIntPre[12] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 544;
}

/*
equation index: 545
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[13] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[13]) else (roo.air.cfd.uInt[13] - pre(roo.air.cfd.uIntPre[13])) / roo.air.cfd.samplePeriod;
end when;
*/
void ForcedConvection_30s_eqFunction_545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,545};
  modelica_boolean tmp13;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp13 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* roo.air.cfd.uWri[13] DISCRETE */) = (tmp13?(data->simulationInfo->realVarsPre[70] /* roo.air.cfd.u[13] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* roo.air.cfd.uInt[13] STATE(1,roo.air.cfd.u[13]) */) - (data->simulationInfo->realVarsPre[264] /* roo.air.cfd.uIntPre[13] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 545;
}

/*
equation index: 546
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[14] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[14]) else (roo.air.cfd.uInt[14] - pre(roo.air.cfd.uIntPre[14])) / roo.air.cfd.samplePeriod;
end when;
*/
void ForcedConvection_30s_eqFunction_546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,546};
  modelica_boolean tmp14;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp14 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* roo.air.cfd.uWri[14] DISCRETE */) = (tmp14?(data->simulationInfo->realVarsPre[71] /* roo.air.cfd.u[14] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* roo.air.cfd.uInt[14] STATE(1,roo.air.cfd.u[14]) */) - (data->simulationInfo->realVarsPre[265] /* roo.air.cfd.uIntPre[14] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 546;
}

/*
equation index: 547
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[15] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[15]) else (roo.air.cfd.uInt[15] - pre(roo.air.cfd.uIntPre[15])) / roo.air.cfd.samplePeriod;
end when;
*/
void ForcedConvection_30s_eqFunction_547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,547};
  modelica_boolean tmp15;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp15 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* roo.air.cfd.uWri[15] DISCRETE */) = (tmp15?(data->simulationInfo->realVarsPre[72] /* roo.air.cfd.u[15] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* roo.air.cfd.uInt[15] STATE(1,roo.air.cfd.u[15]) */) - (data->simulationInfo->realVarsPre[266] /* roo.air.cfd.uIntPre[15] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 547;
}

/*
equation index: 548
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[1] = roo.air.cfd.uInt[1];
end when;
*/
void ForcedConvection_30s_eqFunction_548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,548};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* roo.air.cfd.uIntPre[1] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* roo.air.cfd.uInt[1] STATE(1,roo.air.cfd.u[1]) */);
  }
  threadData->lastEquationSolved = 548;
}

/*
equation index: 549
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[2] = roo.air.cfd.uInt[2];
end when;
*/
void ForcedConvection_30s_eqFunction_549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,549};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* roo.air.cfd.uIntPre[2] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* roo.air.cfd.uInt[2] STATE(1,roo.air.cfd.u[2]) */);
  }
  threadData->lastEquationSolved = 549;
}

/*
equation index: 550
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[3] = roo.air.cfd.uInt[3];
end when;
*/
void ForcedConvection_30s_eqFunction_550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,550};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* roo.air.cfd.uIntPre[3] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* roo.air.cfd.uInt[3] STATE(1,roo.air.cfd.u[3]) */);
  }
  threadData->lastEquationSolved = 550;
}

/*
equation index: 551
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[4] = roo.air.cfd.uInt[4];
end when;
*/
void ForcedConvection_30s_eqFunction_551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,551};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* roo.air.cfd.uIntPre[4] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* roo.air.cfd.uInt[4] STATE(1,roo.air.cfd.u[4]) */);
  }
  threadData->lastEquationSolved = 551;
}

/*
equation index: 552
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[5] = roo.air.cfd.uInt[5];
end when;
*/
void ForcedConvection_30s_eqFunction_552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,552};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* roo.air.cfd.uIntPre[5] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* roo.air.cfd.uInt[5] STATE(1,roo.air.cfd.u[5]) */);
  }
  threadData->lastEquationSolved = 552;
}

/*
equation index: 553
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[6] = roo.air.cfd.uInt[6];
end when;
*/
void ForcedConvection_30s_eqFunction_553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,553};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* roo.air.cfd.uIntPre[6] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* roo.air.cfd.uInt[6] STATE(1,roo.air.cfd.u[6]) */);
  }
  threadData->lastEquationSolved = 553;
}

/*
equation index: 554
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[7] = roo.air.cfd.uInt[7];
end when;
*/
void ForcedConvection_30s_eqFunction_554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,554};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* roo.air.cfd.uIntPre[7] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* roo.air.cfd.uInt[7] STATE(1,roo.air.cfd.u[7]) */);
  }
  threadData->lastEquationSolved = 554;
}

/*
equation index: 555
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[8] = roo.air.cfd.uInt[8];
end when;
*/
void ForcedConvection_30s_eqFunction_555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,555};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* roo.air.cfd.uIntPre[8] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* roo.air.cfd.uInt[8] STATE(1,roo.air.cfd.u[8]) */);
  }
  threadData->lastEquationSolved = 555;
}

/*
equation index: 556
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[9] = roo.air.cfd.uInt[9];
end when;
*/
void ForcedConvection_30s_eqFunction_556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,556};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* roo.air.cfd.uIntPre[9] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* roo.air.cfd.uInt[9] STATE(1,roo.air.cfd.u[9]) */);
  }
  threadData->lastEquationSolved = 556;
}

/*
equation index: 557
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[10] = roo.air.cfd.uInt[10];
end when;
*/
void ForcedConvection_30s_eqFunction_557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,557};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* roo.air.cfd.uIntPre[10] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* roo.air.cfd.uInt[10] STATE(1,roo.air.cfd.u[10]) */);
  }
  threadData->lastEquationSolved = 557;
}

/*
equation index: 558
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[11] = roo.air.cfd.uInt[11];
end when;
*/
void ForcedConvection_30s_eqFunction_558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,558};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* roo.air.cfd.uIntPre[11] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* roo.air.cfd.uInt[11] STATE(1,roo.air.cfd.u[11]) */);
  }
  threadData->lastEquationSolved = 558;
}

/*
equation index: 559
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[12] = roo.air.cfd.uInt[12];
end when;
*/
void ForcedConvection_30s_eqFunction_559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,559};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* roo.air.cfd.uIntPre[12] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* roo.air.cfd.uInt[12] STATE(1,roo.air.cfd.u[12]) */);
  }
  threadData->lastEquationSolved = 559;
}

/*
equation index: 560
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[13] = roo.air.cfd.uInt[13];
end when;
*/
void ForcedConvection_30s_eqFunction_560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,560};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* roo.air.cfd.uIntPre[13] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* roo.air.cfd.uInt[13] STATE(1,roo.air.cfd.u[13]) */);
  }
  threadData->lastEquationSolved = 560;
}

/*
equation index: 561
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[14] = roo.air.cfd.uInt[14];
end when;
*/
void ForcedConvection_30s_eqFunction_561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,561};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* roo.air.cfd.uIntPre[14] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* roo.air.cfd.uInt[14] STATE(1,roo.air.cfd.u[14]) */);
  }
  threadData->lastEquationSolved = 561;
}

/*
equation index: 562
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[15] = roo.air.cfd.uInt[15];
end when;
*/
void ForcedConvection_30s_eqFunction_562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,562};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* roo.air.cfd.uIntPre[15] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* roo.air.cfd.uInt[15] STATE(1,roo.air.cfd.u[15]) */);
  }
  threadData->lastEquationSolved = 562;
}

/*
equation index: 563
type: ALGORITHM

  roo.air.cfd.retVal := pre(roo.air.cfd.retVal);
  roo.air.cfd.y[13] := pre(roo.air.cfd.y[13]);
  roo.air.cfd.y[12] := pre(roo.air.cfd.y[12]);
  roo.air.cfd.y[11] := pre(roo.air.cfd.y[11]);
  roo.air.cfd.y[10] := pre(roo.air.cfd.y[10]);
  roo.air.cfd.y[9] := pre(roo.air.cfd.y[9]);
  roo.air.cfd.y[8] := pre(roo.air.cfd.y[8]);
  roo.air.cfd.y[7] := pre(roo.air.cfd.y[7]);
  roo.air.cfd.y[6] := pre(roo.air.cfd.y[6]);
  roo.air.cfd.y[5] := pre(roo.air.cfd.y[5]);
  roo.air.cfd.y[4] := pre(roo.air.cfd.y[4]);
  roo.air.cfd.y[3] := pre(roo.air.cfd.y[3]);
  roo.air.cfd.y[2] := pre(roo.air.cfd.y[2]);
  roo.air.cfd.y[1] := pre(roo.air.cfd.y[1]);
  roo.air.cfd.modTimRea := pre(roo.air.cfd.modTimRea);
  $whenCondition3 := pre($whenCondition3);
  $whenCondition3 := $whenCondition4;
  when $whenCondition3 then
    (roo.air.cfd.modTimRea, roo.air.cfd.y, roo.air.cfd.retVal) := Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection.roo.air.cfd.exchange(0, time, roo.air.cfd.samplePeriod, roo.air.cfd.uWri, 15, roo.air.cfd.yFixed, 13);
    assert(roo.air.cfd.retVal >= 0, "Obtained negative return value during data transfer with CFD.
   Aborting simulation. Check CFD log file.
   Received: retVal = " + String(roo.air.cfd.retVal, 0, true));
  end when;
*/
void ForcedConvection_30s_eqFunction_563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,563};
  real_array tmp16;
  real_array tmp17;
  real_array tmp18;
  modelica_boolean tmp19;
  static const MMC_DEFSTRINGLIT(tmp20,128,"Obtained negative return value during data transfer with CFD.\n   Aborting simulation. Check CFD log file.\n   Received: retVal = ");
  modelica_string tmp21;
  modelica_metatype tmpMeta22;
  static int tmp23 = 0;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* roo.air.cfd.retVal DISCRETE */) = (data->simulationInfo->integerVarsPre[0] /* roo.air.cfd.retVal DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* roo.air.cfd.y[13] DISCRETE */) = (data->simulationInfo->realVarsPre[294] /* roo.air.cfd.y[13] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* roo.air.cfd.y[12] DISCRETE */) = (data->simulationInfo->realVarsPre[293] /* roo.air.cfd.y[12] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* roo.air.cfd.y[11] DISCRETE */) = (data->simulationInfo->realVarsPre[292] /* roo.air.cfd.y[11] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* roo.air.cfd.y[10] DISCRETE */) = (data->simulationInfo->realVarsPre[291] /* roo.air.cfd.y[10] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* roo.air.cfd.y[9] DISCRETE */) = (data->simulationInfo->realVarsPre[290] /* roo.air.cfd.y[9] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* roo.air.cfd.y[8] DISCRETE */) = (data->simulationInfo->realVarsPre[289] /* roo.air.cfd.y[8] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* roo.air.cfd.y[7] DISCRETE */) = (data->simulationInfo->realVarsPre[288] /* roo.air.cfd.y[7] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* roo.air.cfd.y[6] DISCRETE */) = (data->simulationInfo->realVarsPre[287] /* roo.air.cfd.y[6] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* roo.air.cfd.y[5] DISCRETE */) = (data->simulationInfo->realVarsPre[286] /* roo.air.cfd.y[5] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* roo.air.cfd.y[4] DISCRETE */) = (data->simulationInfo->realVarsPre[285] /* roo.air.cfd.y[4] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* roo.air.cfd.y[3] DISCRETE */) = (data->simulationInfo->realVarsPre[284] /* roo.air.cfd.y[3] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* roo.air.cfd.y[2] DISCRETE */) = (data->simulationInfo->realVarsPre[283] /* roo.air.cfd.y[2] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* roo.air.cfd.y[1] DISCRETE */) = (data->simulationInfo->realVarsPre[282] /* roo.air.cfd.y[1] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* roo.air.cfd.modTimRea DISCRETE */) = (data->simulationInfo->realVarsPre[251] /* roo.air.cfd.modTimRea DISCRETE */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->simulationInfo->booleanVarsPre[2] /* $whenCondition3 DISCRETE */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[2] /* $whenCondition3 DISCRETE */) /* edge */))
    {
      real_array_create(&tmp16, ((modelica_real*)&((&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* roo.air.cfd.y[1] DISCRETE */))[((modelica_integer) 1) - 1])), 1, (_index_t)13);
      real_array_create(&tmp17, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* roo.air.cfd.uWri[1] DISCRETE */)[((modelica_integer) 1) - 1])), 1, (_index_t)15);
      real_array_create(&tmp18, ((modelica_real*)&((&data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* roo.air.cfd.yFixed[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)13);
      (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* roo.air.cfd.modTimRea DISCRETE */) = omc_Buildings_ThermalZones_Detailed_Examples_FFD_ForcedConvection_roo_air_cfd_exchange(threadData, ((modelica_integer) 0), data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */), tmp17, ((modelica_integer) 15), tmp18, ((modelica_integer) 13) ,&tmp16 ,&(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* roo.air.cfd.retVal DISCRETE */));

      {
        tmp19 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* roo.air.cfd.retVal DISCRETE */),((modelica_integer) 0));
        if(!tmp19)
        {
          tmp21 = modelica_integer_to_modelica_string((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* roo.air.cfd.retVal DISCRETE */), ((modelica_integer) 0), 1 /* true */);
          tmpMeta22 = stringAppend(MMC_REFSTRINGLIT(tmp20),tmp21);
          {
            const char* assert_cond = "(roo.air.cfd.retVal >= 0)";
            if (data->simulationInfo->noThrowAsserts) {
              FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",316,5,319,49,0};
              infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta22));
              data->simulationInfo->needToReThrow = 1;
            } else {
              FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",316,5,319,49,0};
              omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta22));
            }
          }
        }
      }
    }
  }
  threadData->lastEquationSolved = 563;
}

/*
equation index: 564
type: SIMPLE_ASSIGN
roo.air.fluInt.ports_mXi_flow[1,1] = bounIn.m_flow * (if bounIn.m_flow > 0.0 then bounIn.X[1] else roo.air.cfd.y[10])
*/
void ForcedConvection_30s_eqFunction_564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,564};
  modelica_boolean tmp24;
  tmp24 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* bounIn.m_flow PARAM */),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* roo.air.fluInt.ports_mXi_flow[1,1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* bounIn.m_flow PARAM */)) * ((tmp24?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* bounIn.X[1] PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* roo.air.cfd.y[10] DISCRETE */)));
  threadData->lastEquationSolved = 564;
}

/*
equation index: 565
type: SIMPLE_ASSIGN
roo.ports[1].h_outflow = 1006.0 * (-273.15 + roo.air.cfd.y[8]) * (1.0 - roo.air.cfd.y[10]) + (2.5010145e6 + 1860.0 * (-273.15 + roo.air.cfd.y[8])) * roo.air.cfd.y[10]
*/
void ForcedConvection_30s_eqFunction_565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,565};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* roo.ports[1].h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* roo.air.cfd.y[8] DISCRETE */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* roo.air.cfd.y[10] DISCRETE */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* roo.air.cfd.y[8] DISCRETE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* roo.air.cfd.y[10] DISCRETE */));
  threadData->lastEquationSolved = 565;
}

/*
equation index: 566
type: SIMPLE_ASSIGN
roo.air.fluInt.ports_mXi_flow[2,1] = roo.air.cfd.u[11] * (if roo.air.cfd.u[11] > 0.0 then bouOut.X[1] else roo.air.cfd.y[11])
*/
void ForcedConvection_30s_eqFunction_566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,566};
  modelica_boolean tmp25;
  tmp25 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* roo.air.cfd.u[11] variable */),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* roo.air.fluInt.ports_mXi_flow[2,1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* roo.air.cfd.u[11] variable */)) * ((tmp25?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* bouOut.X[1] PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* roo.air.cfd.y[11] DISCRETE */)));
  threadData->lastEquationSolved = 566;
}

/*
equation index: 567
type: SIMPLE_ASSIGN
roo.air.fluInt.mbXi_flow[1] = roo.air.fluInt.ports_mXi_flow[1,1] + roo.air.fluInt.ports_mXi_flow[2,1]
*/
void ForcedConvection_30s_eqFunction_567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,567};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* roo.air.fluInt.mbXi_flow[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* roo.air.fluInt.ports_mXi_flow[1,1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* roo.air.fluInt.ports_mXi_flow[2,1] variable */);
  threadData->lastEquationSolved = 567;
}

/*
equation index: 568
type: SIMPLE_ASSIGN
roo.ports[2].h_outflow = 1006.0 * (-273.15 + roo.air.cfd.y[9]) * (1.0 - roo.air.cfd.y[11]) + (2.5010145e6 + 1860.0 * (-273.15 + roo.air.cfd.y[9])) * roo.air.cfd.y[11]
*/
void ForcedConvection_30s_eqFunction_568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,568};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* roo.ports[2].h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* roo.air.cfd.y[9] DISCRETE */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* roo.air.cfd.y[11] DISCRETE */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* roo.air.cfd.y[9] DISCRETE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* roo.air.cfd.y[11] DISCRETE */));
  threadData->lastEquationSolved = 568;
}

/*
equation index: 569
type: SIMPLE_ASSIGN
roo.air.cfd.sampleTrigger = $whenCondition4
*/
void ForcedConvection_30s_eqFunction_569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,569};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* roo.air.cfd.sampleTrigger DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */);
  threadData->lastEquationSolved = 569;
}

/*
equation index: 570
type: SIMPLE_ASSIGN
roo.irRadGai.sumAEpsInv = 1.0 / (roo.irRadGai.sumAEpsNoWin + roo.irRadGai.AEpsConExtWinUns[1])
*/
void ForcedConvection_30s_eqFunction_570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,570};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* roo.irRadGai.sumAEpsInv variable */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[982]] /* roo.irRadGai.sumAEpsNoWin PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadGai.AEpsConExtWinUns[1] variable */),"roo.irRadGai.sumAEpsNoWin + roo.irRadGai.AEpsConExtWinUns[1]",equationIndexes);
  threadData->lastEquationSolved = 570;
}

/*
equation index: 571
type: SIMPLE_ASSIGN
roo.irRadGai.fraSurBou[6] = roo.irRadGai.AEpsSurBou[6] * roo.irRadGai.sumAEpsInv
*/
void ForcedConvection_30s_eqFunction_571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,571};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* roo.irRadGai.fraSurBou[6] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[791]] /* roo.irRadGai.AEpsSurBou[6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 571;
}

/*
equation index: 572
type: SIMPLE_ASSIGN
roo.irRadGai.conSurBou[6].Q_flow = (-roo.irRadGai.fraSurBou[6]) * roo.irRadGai.Q_flow
*/
void ForcedConvection_30s_eqFunction_572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,572};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* roo.irRadGai.conSurBou[6].Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* roo.irRadGai.fraSurBou[6] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 572;
}

/*
equation index: 573
type: SIMPLE_ASSIGN
roo.irRadGai.fraSurBou[5] = roo.irRadGai.AEpsSurBou[5] * roo.irRadGai.sumAEpsInv
*/
void ForcedConvection_30s_eqFunction_573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,573};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* roo.irRadGai.fraSurBou[5] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[790]] /* roo.irRadGai.AEpsSurBou[5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 573;
}

/*
equation index: 574
type: SIMPLE_ASSIGN
roo.irRadGai.conSurBou[5].Q_flow = (-roo.irRadGai.fraSurBou[5]) * roo.irRadGai.Q_flow
*/
void ForcedConvection_30s_eqFunction_574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,574};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* roo.irRadGai.conSurBou[5].Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* roo.irRadGai.fraSurBou[5] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 574;
}

/*
equation index: 575
type: SIMPLE_ASSIGN
roo.irRadGai.fraSurBou[4] = roo.irRadGai.AEpsSurBou[4] * roo.irRadGai.sumAEpsInv
*/
void ForcedConvection_30s_eqFunction_575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,575};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* roo.irRadGai.fraSurBou[4] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[789]] /* roo.irRadGai.AEpsSurBou[4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 575;
}

/*
equation index: 576
type: SIMPLE_ASSIGN
roo.irRadGai.conSurBou[4].Q_flow = (-roo.irRadGai.fraSurBou[4]) * roo.irRadGai.Q_flow
*/
void ForcedConvection_30s_eqFunction_576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,576};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* roo.irRadGai.conSurBou[4].Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* roo.irRadGai.fraSurBou[4] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 576;
}

/*
equation index: 577
type: SIMPLE_ASSIGN
roo.irRadGai.fraSurBou[3] = roo.irRadGai.AEpsSurBou[3] * roo.irRadGai.sumAEpsInv
*/
void ForcedConvection_30s_eqFunction_577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,577};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* roo.irRadGai.fraSurBou[3] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[788]] /* roo.irRadGai.AEpsSurBou[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 577;
}

/*
equation index: 578
type: SIMPLE_ASSIGN
roo.irRadGai.conSurBou[3].Q_flow = (-roo.irRadGai.fraSurBou[3]) * roo.irRadGai.Q_flow
*/
void ForcedConvection_30s_eqFunction_578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,578};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[135]] /* roo.irRadGai.conSurBou[3].Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* roo.irRadGai.fraSurBou[3] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 578;
}

/*
equation index: 579
type: SIMPLE_ASSIGN
roo.irRadGai.fraSurBou[2] = roo.irRadGai.AEpsSurBou[2] * roo.irRadGai.sumAEpsInv
*/
void ForcedConvection_30s_eqFunction_579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,579};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* roo.irRadGai.fraSurBou[2] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[787]] /* roo.irRadGai.AEpsSurBou[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 579;
}

/*
equation index: 580
type: SIMPLE_ASSIGN
roo.irRadGai.conSurBou[2].Q_flow = (-roo.irRadGai.fraSurBou[2]) * roo.irRadGai.Q_flow
*/
void ForcedConvection_30s_eqFunction_580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,580};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* roo.irRadGai.conSurBou[2].Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* roo.irRadGai.fraSurBou[2] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 580;
}

/*
equation index: 581
type: SIMPLE_ASSIGN
roo.irRadGai.fraSurBou[1] = roo.irRadGai.AEpsSurBou[1] * roo.irRadGai.sumAEpsInv
*/
void ForcedConvection_30s_eqFunction_581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,581};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* roo.irRadGai.fraSurBou[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* roo.irRadGai.AEpsSurBou[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 581;
}

/*
equation index: 582
type: SIMPLE_ASSIGN
roo.irRadGai.conSurBou[1].Q_flow = (-roo.irRadGai.fraSurBou[1]) * roo.irRadGai.Q_flow
*/
void ForcedConvection_30s_eqFunction_582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,582};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[133]] /* roo.irRadGai.conSurBou[1].Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* roo.irRadGai.fraSurBou[1] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 582;
}

/*
equation index: 583
type: SIMPLE_ASSIGN
roo.irRadGai.fraConBou[1] = roo.irRadGai.AEpsConBou[1] * roo.irRadGai.sumAEpsInv
*/
void ForcedConvection_30s_eqFunction_583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,583};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[139]] /* roo.irRadGai.fraConBou[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* roo.irRadGai.AEpsConBou[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 583;
}

/*
equation index: 584
type: SIMPLE_ASSIGN
roo.irRadGai.fraConPar_b[1] = roo.irRadGai.AEpsConPar_b[1] * roo.irRadGai.sumAEpsInv
*/
void ForcedConvection_30s_eqFunction_584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,584};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[145]] /* roo.irRadGai.fraConPar_b[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* roo.irRadGai.AEpsConPar_b[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 584;
}

/*
equation index: 585
type: SIMPLE_ASSIGN
roo.irRadGai.fraConPar_a[1] = roo.irRadGai.AEpsConPar_a[1] * roo.irRadGai.sumAEpsInv
*/
void ForcedConvection_30s_eqFunction_585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,585};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[144]] /* roo.irRadGai.fraConPar_a[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[784]] /* roo.irRadGai.AEpsConPar_a[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 585;
}

/*
equation index: 586
type: SIMPLE_ASSIGN
roo.irRadGai.fraConExtWinFra[1] = roo.irRadGai.AEpsConExtWinFra[1] * roo.irRadGai.sumAEpsInv
*/
void ForcedConvection_30s_eqFunction_586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,586};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* roo.irRadGai.fraConExtWinFra[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* roo.irRadGai.AEpsConExtWinFra[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 586;
}

/*
equation index: 587
type: SIMPLE_ASSIGN
roo.irRadGai.fraConExtWinGla[1] = roo.irRadGai.AEpsConExtWinUns[1] * roo.irRadGai.sumAEpsInv
*/
void ForcedConvection_30s_eqFunction_587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,587};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* roo.irRadGai.fraConExtWinGla[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadGai.AEpsConExtWinUns[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 587;
}

/*
equation index: 588
type: SIMPLE_ASSIGN
roo.irRadGai.JOutConExtWin[1] = roo.irRadGai.fraConExtWinGla[1] * roo.irRadGai.Q_flow
*/
void ForcedConvection_30s_eqFunction_588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,588};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadGai.JOutConExtWin[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* roo.irRadGai.fraConExtWinGla[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 588;
}

/*
equation index: 589
type: SIMPLE_ASSIGN
roo.irRadGai.fraConExtWinOpa[1] = roo.irRadGai.AEpsConExtWinOpa[1] * roo.irRadGai.sumAEpsInv
*/
void ForcedConvection_30s_eqFunction_589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,589};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* roo.irRadGai.fraConExtWinOpa[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* roo.irRadGai.AEpsConExtWinOpa[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 589;
}

/*
equation index: 590
type: SIMPLE_ASSIGN
roo.irRadGai.fraConExt[1] = roo.irRadGai.AEpsConExt[1] * roo.irRadGai.sumAEpsInv
*/
void ForcedConvection_30s_eqFunction_590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,590};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[140]] /* roo.irRadGai.fraConExt[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* roo.irRadGai.AEpsConExt[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 590;
}

/*
equation index: 615
type: LINEAR

<var>roo.irRadExc.J[6]</var>
<var>roo.irRadExc.J[5]</var>
<var>roo.irRadExc.J[3]</var>
<var>roo.irRadExc.J[2]</var>
<var>roo.irRadExc.J[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void ForcedConvection_30s_eqFunction_615(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,615};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 615 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,615};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 615 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */) = aux_x[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */) = aux_x[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */) = aux_x[4];

  threadData->lastEquationSolved = 615;
}

/*
equation index: 616
type: SIMPLE_ASSIGN
roo.irRadExc.conSurBou[4].Q_flow = (-roo.irRadExc.J[4]) - roo.irRadExc.G[4]
*/
void ForcedConvection_30s_eqFunction_616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,616};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.conSurBou[4].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.G[4] variable */);
  threadData->lastEquationSolved = 616;
}

/*
equation index: 617
type: SIMPLE_ASSIGN
TWal[4].port.Q_flow = (-roo.irRadExc.conSurBou[4].Q_flow) - roo.irRadGai.conSurBou[4].Q_flow - roo.air.cfd.y[4]
*/
void ForcedConvection_30s_eqFunction_617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,617};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* TWal[4].port.Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.conSurBou[4].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* roo.irRadGai.conSurBou[4].Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* roo.air.cfd.y[4] DISCRETE */);
  threadData->lastEquationSolved = 617;
}

/*
equation index: 618
type: SIMPLE_ASSIGN
roo.irRadExc.conSurBou[6].Q_flow = (-roo.irRadExc.J[6]) - roo.irRadExc.G[6]
*/
void ForcedConvection_30s_eqFunction_618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,618};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.conSurBou[6].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[90]] /* roo.irRadExc.G[6] variable */);
  threadData->lastEquationSolved = 618;
}

/*
equation index: 619
type: SIMPLE_ASSIGN
TWal[6].port.Q_flow = (-roo.irRadExc.conSurBou[6].Q_flow) - roo.irRadGai.conSurBou[6].Q_flow - roo.air.cfd.y[6]
*/
void ForcedConvection_30s_eqFunction_619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,619};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* TWal[6].port.Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.conSurBou[6].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* roo.irRadGai.conSurBou[6].Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* roo.air.cfd.y[6] DISCRETE */);
  threadData->lastEquationSolved = 619;
}

/*
equation index: 620
type: SIMPLE_ASSIGN
roo.irRadExc.conSurBou[5].Q_flow = (-roo.irRadExc.J[5]) - roo.irRadExc.G[5]
*/
void ForcedConvection_30s_eqFunction_620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,620};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.conSurBou[5].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.G[5] variable */);
  threadData->lastEquationSolved = 620;
}

/*
equation index: 621
type: SIMPLE_ASSIGN
TWal[5].port.Q_flow = (-roo.irRadExc.conSurBou[5].Q_flow) - roo.irRadGai.conSurBou[5].Q_flow - roo.air.cfd.y[5]
*/
void ForcedConvection_30s_eqFunction_621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,621};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* TWal[5].port.Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.conSurBou[5].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* roo.irRadGai.conSurBou[5].Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* roo.air.cfd.y[5] DISCRETE */);
  threadData->lastEquationSolved = 621;
}

/*
equation index: 622
type: SIMPLE_ASSIGN
roo.irRadExc.conSurBou[3].Q_flow = (-roo.irRadExc.J[3]) - roo.irRadExc.G[3]
*/
void ForcedConvection_30s_eqFunction_622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,622};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* roo.irRadExc.conSurBou[3].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.G[3] variable */);
  threadData->lastEquationSolved = 622;
}

/*
equation index: 623
type: SIMPLE_ASSIGN
TWal[3].port.Q_flow = (-roo.irRadExc.conSurBou[3].Q_flow) - roo.irRadGai.conSurBou[3].Q_flow - roo.air.cfd.y[3]
*/
void ForcedConvection_30s_eqFunction_623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,623};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* TWal[3].port.Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* roo.irRadExc.conSurBou[3].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[135]] /* roo.irRadGai.conSurBou[3].Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* roo.air.cfd.y[3] DISCRETE */);
  threadData->lastEquationSolved = 623;
}

/*
equation index: 624
type: SIMPLE_ASSIGN
roo.irRadExc.conSurBou[2].Q_flow = (-roo.irRadExc.J[2]) - roo.irRadExc.G[2]
*/
void ForcedConvection_30s_eqFunction_624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,624};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* roo.irRadExc.conSurBou[2].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.G[2] variable */);
  threadData->lastEquationSolved = 624;
}

/*
equation index: 625
type: SIMPLE_ASSIGN
TWal[2].port.Q_flow = (-roo.irRadExc.conSurBou[2].Q_flow) - roo.irRadGai.conSurBou[2].Q_flow - roo.air.cfd.y[2]
*/
void ForcedConvection_30s_eqFunction_625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,625};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* TWal[2].port.Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* roo.irRadExc.conSurBou[2].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* roo.irRadGai.conSurBou[2].Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* roo.air.cfd.y[2] DISCRETE */);
  threadData->lastEquationSolved = 625;
}

/*
equation index: 626
type: SIMPLE_ASSIGN
roo.irRadExc.conSurBou[1].Q_flow = (-roo.irRadExc.J[1]) - roo.irRadExc.G[1]
*/
void ForcedConvection_30s_eqFunction_626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,626};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* roo.irRadExc.conSurBou[1].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.G[1] variable */);
  threadData->lastEquationSolved = 626;
}

/*
equation index: 627
type: SIMPLE_ASSIGN
TWal[1].port.Q_flow = (-roo.irRadExc.conSurBou[1].Q_flow) - roo.irRadGai.conSurBou[1].Q_flow - roo.air.cfd.y[1]
*/
void ForcedConvection_30s_eqFunction_627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,627};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* TWal[1].port.Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* roo.irRadExc.conSurBou[1].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[133]] /* roo.irRadGai.conSurBou[1].Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* roo.air.cfd.y[1] DISCRETE */);
  threadData->lastEquationSolved = 627;
}

/*
equation index: 628
type: SIMPLE_ASSIGN
roo.air.cfd.u[14] = bounIn.X[1]
*/
void ForcedConvection_30s_eqFunction_628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,628};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* roo.air.cfd.u[14] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* bounIn.X[1] PARAM */);
  threadData->lastEquationSolved = 628;
}

/*
equation index: 629
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[14] = roo.air.cfd.u[14]
*/
void ForcedConvection_30s_eqFunction_629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,629};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* der(roo.air.cfd.uInt[14]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* roo.air.cfd.u[14] variable */);
  threadData->lastEquationSolved = 629;
}

/*
equation index: 630
type: SIMPLE_ASSIGN
roo.air.cfd.u[10] = bounIn.m_flow
*/
void ForcedConvection_30s_eqFunction_630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,630};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[67]] /* roo.air.cfd.u[10] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* bounIn.m_flow PARAM */);
  threadData->lastEquationSolved = 630;
}

/*
equation index: 631
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[10] = roo.air.cfd.u[10]
*/
void ForcedConvection_30s_eqFunction_631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,631};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(roo.air.cfd.uInt[10]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[67]] /* roo.air.cfd.u[10] variable */);
  threadData->lastEquationSolved = 631;
}

/*
equation index: 632
type: SIMPLE_ASSIGN
roo.air.cfd.u[9] = bouOut.p
*/
void ForcedConvection_30s_eqFunction_632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,632};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[66]] /* roo.air.cfd.u[9] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* bouOut.p PARAM */);
  threadData->lastEquationSolved = 632;
}

/*
equation index: 633
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[9] = roo.air.cfd.u[9]
*/
void ForcedConvection_30s_eqFunction_633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,633};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(roo.air.cfd.uInt[9]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[66]] /* roo.air.cfd.u[9] variable */);
  threadData->lastEquationSolved = 633;
}

/*
equation index: 634
type: SIMPLE_ASSIGN
roo.air.cfd.u[15] = bouOut.X[1]
*/
void ForcedConvection_30s_eqFunction_634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,634};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[72]] /* roo.air.cfd.u[15] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* bouOut.X[1] PARAM */);
  threadData->lastEquationSolved = 634;
}

/*
equation index: 635
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[15] = roo.air.cfd.u[15]
*/
void ForcedConvection_30s_eqFunction_635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,635};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* der(roo.air.cfd.uInt[15]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[72]] /* roo.air.cfd.u[15] variable */);
  threadData->lastEquationSolved = 635;
}

/*
equation index: 636
type: SIMPLE_ASSIGN
roo.air.cfd.u[6] = TWal[6].T
*/
void ForcedConvection_30s_eqFunction_636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,636};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[63]] /* roo.air.cfd.u[6] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* TWal[6].T PARAM */);
  threadData->lastEquationSolved = 636;
}

/*
equation index: 637
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[6] = roo.air.cfd.u[6]
*/
void ForcedConvection_30s_eqFunction_637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,637};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* der(roo.air.cfd.uInt[6]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[63]] /* roo.air.cfd.u[6] variable */);
  threadData->lastEquationSolved = 637;
}

/*
equation index: 638
type: SIMPLE_ASSIGN
roo.air.cfd.u[5] = TWal[5].T
*/
void ForcedConvection_30s_eqFunction_638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,638};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* roo.air.cfd.u[5] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* TWal[5].T PARAM */);
  threadData->lastEquationSolved = 638;
}

/*
equation index: 639
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[5] = roo.air.cfd.u[5]
*/
void ForcedConvection_30s_eqFunction_639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,639};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(roo.air.cfd.uInt[5]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* roo.air.cfd.u[5] variable */);
  threadData->lastEquationSolved = 639;
}

/*
equation index: 640
type: SIMPLE_ASSIGN
roo.air.cfd.u[4] = TWal[4].T
*/
void ForcedConvection_30s_eqFunction_640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,640};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* roo.air.cfd.u[4] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* TWal[4].T PARAM */);
  threadData->lastEquationSolved = 640;
}

/*
equation index: 641
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[4] = roo.air.cfd.u[4]
*/
void ForcedConvection_30s_eqFunction_641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,641};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(roo.air.cfd.uInt[4]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* roo.air.cfd.u[4] variable */);
  threadData->lastEquationSolved = 641;
}

/*
equation index: 642
type: SIMPLE_ASSIGN
roo.air.cfd.u[3] = TWal[3].T
*/
void ForcedConvection_30s_eqFunction_642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,642};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* roo.air.cfd.u[3] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4]] /* TWal[3].T PARAM */);
  threadData->lastEquationSolved = 642;
}

/*
equation index: 643
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[3] = roo.air.cfd.u[3]
*/
void ForcedConvection_30s_eqFunction_643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,643};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(roo.air.cfd.uInt[3]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* roo.air.cfd.u[3] variable */);
  threadData->lastEquationSolved = 643;
}

/*
equation index: 644
type: SIMPLE_ASSIGN
roo.air.cfd.u[2] = TWal[2].T
*/
void ForcedConvection_30s_eqFunction_644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,644};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* roo.air.cfd.u[2] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* TWal[2].T PARAM */);
  threadData->lastEquationSolved = 644;
}

/*
equation index: 645
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[2] = roo.air.cfd.u[2]
*/
void ForcedConvection_30s_eqFunction_645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,645};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(roo.air.cfd.uInt[2]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* roo.air.cfd.u[2] variable */);
  threadData->lastEquationSolved = 645;
}

/*
equation index: 646
type: SIMPLE_ASSIGN
roo.air.cfd.u[1] = TWal[1].T
*/
void ForcedConvection_30s_eqFunction_646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,646};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* roo.air.cfd.u[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* TWal[1].T PARAM */);
  threadData->lastEquationSolved = 646;
}

/*
equation index: 647
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[1] = roo.air.cfd.u[1]
*/
void ForcedConvection_30s_eqFunction_647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,647};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(roo.air.cfd.uInt[1]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* roo.air.cfd.u[1] variable */);
  threadData->lastEquationSolved = 647;
}

/*
equation index: 648
type: SIMPLE_ASSIGN
weaDat.weaBus.cloTim = time
*/
void ForcedConvection_30s_eqFunction_648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,648};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.cloTim variable */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 648;
}

/*
equation index: 649
type: SIMPLE_ASSIGN
$whenCondition2 = weaDat.conTim.canRepeatWeatherFile and weaDat.weaBus.cloTim > pre(weaDat.conTim.tNext)
*/
void ForcedConvection_30s_eqFunction_649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,649};
  modelica_boolean tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  tmp27 = 1.0;
  tmp28 = 1.0;
  relationhysteresis(data, &tmp26, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.cloTim variable */), (data->simulationInfo->realVarsPre[295] /* weaDat.conTim.tNext DISCRETE */), tmp27, tmp28, 1, Greater, GreaterZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[280]] /* weaDat.conTim.canRepeatWeatherFile PARAM */) && tmp26);
  threadData->lastEquationSolved = 649;
}

/*
equation index: 650
type: SIMPLE_ASSIGN
$cse4 = cos((weaDat.weaBus.cloTim / 86400.0 + 10.0) * 0.017202423838958484)
*/
void ForcedConvection_30s_eqFunction_650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,650};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* $cse4 variable */) = cos((DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.cloTim variable */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484));
  threadData->lastEquationSolved = 650;
}

/*
equation index: 651
type: SIMPLE_ASSIGN
weaDat.weaBus.solDec = asin((-0.3979486313076103) * $cse4)
*/
void ForcedConvection_30s_eqFunction_651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,651};
  modelica_real tmp29;
  tmp29 = (-0.3979486313076103) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* $cse4 variable */));
  if(!(tmp29 >= -1.0 && tmp29 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of asin((-0.3979486313076103) * $cse4) outside the domain -1.0 <= %g <= 1.0", tmp29);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* weaDat.weaBus.solDec variable */) = asin(tmp29);
  threadData->lastEquationSolved = 651;
}

/*
equation index: 652
type: SIMPLE_ASSIGN
$cse9 = sin(weaDat.weaBus.solDec)
*/
void ForcedConvection_30s_eqFunction_652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,652};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* $cse9 variable */) = sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* weaDat.weaBus.solDec variable */));
  threadData->lastEquationSolved = 652;
}

/*
equation index: 653
type: SIMPLE_ASSIGN
$cse6 = cos(weaDat.weaBus.solDec)
*/
void ForcedConvection_30s_eqFunction_653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,653};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* $cse6 variable */) = cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* weaDat.weaBus.solDec variable */));
  threadData->lastEquationSolved = 653;
}

/*
equation index: 654
type: SIMPLE_ASSIGN
weaDat.add30Min.y = 1800.0 * weaDat.add30Min.k1 + weaDat.add30Min.k2 * weaDat.weaBus.cloTim
*/
void ForcedConvection_30s_eqFunction_654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,654};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* weaDat.add30Min.y variable */) = (1800.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1282]] /* weaDat.add30Min.k1 PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1283]] /* weaDat.add30Min.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.cloTim variable */));
  threadData->lastEquationSolved = 654;
}

/*
equation index: 655
type: SIMPLE_ASSIGN
$whenCondition1 = weaDat.conTimMin.canRepeatWeatherFile and weaDat.add30Min.y > pre(weaDat.conTimMin.tNext)
*/
void ForcedConvection_30s_eqFunction_655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,655};
  modelica_boolean tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  tmp31 = 1.0;
  tmp32 = 1.0;
  relationhysteresis(data, &tmp30, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* weaDat.add30Min.y variable */), (data->simulationInfo->realVarsPre[296] /* weaDat.conTimMin.tNext DISCRETE */), tmp31, tmp32, 0, Greater, GreaterZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[281]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) && tmp30);
  threadData->lastEquationSolved = 655;
}

/*
equation index: 656
type: SIMPLE_ASSIGN
weaDat.locTim.locTim = weaDat.weaBus.cloTim + weaDat.locTim.diff
*/
void ForcedConvection_30s_eqFunction_656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,656};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* weaDat.locTim.locTim variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.cloTim variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1311]] /* weaDat.locTim.diff PARAM */);
  threadData->lastEquationSolved = 656;
}

/*
equation index: 657
type: SIMPLE_ASSIGN
weaDat.eqnTim.Bt = 0.017261498096647215 * (-80.0 + 1.1574074074074073e-5 * weaDat.weaBus.cloTim)
*/
void ForcedConvection_30s_eqFunction_657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,657};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* weaDat.eqnTim.Bt variable */) = (0.017261498096647215) * (-80.0 + (1.1574074074074073e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.cloTim variable */)));
  threadData->lastEquationSolved = 657;
}

/*
equation index: 658
type: SIMPLE_ASSIGN
$cse12 = sin(weaDat.eqnTim.Bt)
*/
void ForcedConvection_30s_eqFunction_658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,658};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* $cse12 variable */) = sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* weaDat.eqnTim.Bt variable */));
  threadData->lastEquationSolved = 658;
}

/*
equation index: 659
type: SIMPLE_ASSIGN
$cse11 = cos(weaDat.eqnTim.Bt)
*/
void ForcedConvection_30s_eqFunction_659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,659};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* $cse11 variable */) = cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* weaDat.eqnTim.Bt variable */));
  threadData->lastEquationSolved = 659;
}

/*
equation index: 660
type: SIMPLE_ASSIGN
$cse10 = sin(2.0 * weaDat.eqnTim.Bt)
*/
void ForcedConvection_30s_eqFunction_660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,660};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* $cse10 variable */) = sin((2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* weaDat.eqnTim.Bt variable */)));
  threadData->lastEquationSolved = 660;
}

/*
equation index: 661
type: SIMPLE_ASSIGN
weaDat.eqnTim.eqnTim = 60.0 * (9.87 * $cse10 + (-7.53) * $cse11 + (-1.5) * $cse12)
*/
void ForcedConvection_30s_eqFunction_661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,661};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* weaDat.eqnTim.eqnTim variable */) = (60.0) * ((9.87) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* $cse10 variable */)) + (-7.53) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* $cse11 variable */)) + (-1.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* $cse12 variable */)));
  threadData->lastEquationSolved = 661;
}

/*
equation index: 662
type: SIMPLE_ASSIGN
weaDat.weaBus.solTim = weaDat.locTim.locTim + weaDat.eqnTim.eqnTim
*/
void ForcedConvection_30s_eqFunction_662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,662};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* weaDat.weaBus.solTim variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* weaDat.locTim.locTim variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* weaDat.eqnTim.eqnTim variable */);
  threadData->lastEquationSolved = 662;
}

/*
equation index: 663
type: SIMPLE_ASSIGN
weaDat.weaBus.solHouAng = 0.2617993877991494 * (-12.0 + 2.777777777777778e-4 * weaDat.weaBus.solTim)
*/
void ForcedConvection_30s_eqFunction_663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,663};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* weaDat.weaBus.solHouAng variable */) = (0.2617993877991494) * (-12.0 + (2.777777777777778e-4) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* weaDat.weaBus.solTim variable */)));
  threadData->lastEquationSolved = 663;
}

/*
equation index: 664
type: SIMPLE_ASSIGN
$cse7 = cos(weaDat.weaBus.solHouAng)
*/
void ForcedConvection_30s_eqFunction_664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,664};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* $cse7 variable */) = cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* weaDat.weaBus.solHouAng variable */));
  threadData->lastEquationSolved = 664;
}

/*
equation index: 665
type: SIMPLE_ASSIGN
weaDat.weaBus.solZen = acos($cse5 * $cse6 * $cse7 + $cse8 * $cse9)
*/
void ForcedConvection_30s_eqFunction_665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,665};
  modelica_real tmp33;
  tmp33 = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[0]] /* $cse5 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* $cse6 variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* $cse7 variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* $cse8 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* $cse9 variable */));
  if(!(tmp33 >= -1.0 && tmp33 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos($cse5 * $cse6 * $cse7 + $cse8 * $cse9) outside the domain -1.0 <= %g <= 1.0", tmp33);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* weaDat.weaBus.solZen variable */) = acos(tmp33);
  threadData->lastEquationSolved = 665;
}

/*
equation index: 666
type: SIMPLE_ASSIGN
weaDat.weaBus.solAlt = 1.5707963267948966 - weaDat.weaBus.solZen
*/
void ForcedConvection_30s_eqFunction_666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,666};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[244]] /* weaDat.weaBus.solAlt variable */) = 1.5707963267948966 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* weaDat.weaBus.solZen variable */);
  threadData->lastEquationSolved = 666;
}

/*
equation index: 667
type: WHEN

when {$whenCondition2} then
  weaDat.conTim.tNext = if weaDat.conTim.canRepeatWeatherFile then weaDat.conTim.lenWea * (1.0 + (*Real*)(integer(weaDat.weaBus.cloTim / weaDat.conTim.lenWea))) else time;
end when;
*/
void ForcedConvection_30s_eqFunction_667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,667};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* weaDat.conTim.tNext DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[280]] /* weaDat.conTim.canRepeatWeatherFile PARAM */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* weaDat.conTim.lenWea PARAM */)) * (1.0 + ((modelica_real)((modelica_integer)floor(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.cloTim variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* weaDat.conTim.lenWea PARAM */),"weaDat.conTim.lenWea",equationIndexes))))):data->localData[0]->timeValue);
  }
  threadData->lastEquationSolved = 667;
}

/*
equation index: 668
type: SIMPLE_ASSIGN
weaDat.conTim.calTim = if weaDat.conTim.canRepeatWeatherFile then weaDat.weaBus.cloTim - weaDat.conTim.tNext + weaDat.conTim.lenWea else weaDat.weaBus.cloTim
*/
void ForcedConvection_30s_eqFunction_668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,668};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[280]] /* weaDat.conTim.canRepeatWeatherFile PARAM */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.cloTim variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* weaDat.conTim.tNext DISCRETE */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* weaDat.conTim.lenWea PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.cloTim variable */));
  threadData->lastEquationSolved = 668;
}

/*
equation index: 669
type: SIMPLE_ASSIGN
weaDat.datRea.y[1] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 1, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,669};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* weaDat.datRea.y[1] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 1), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 669;
}

/*
equation index: 670
type: SIMPLE_ASSIGN
weaDat.weaBus.TDryBul = 273.15 + weaDat.datRea.y[1]
*/
void ForcedConvection_30s_eqFunction_670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,670};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* weaDat.weaBus.TDryBul variable */) = 273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* weaDat.datRea.y[1] variable */);
  threadData->lastEquationSolved = 670;
}

/*
equation index: 671
type: SIMPLE_ASSIGN
$cse2 = exp(4102.99 / (weaDat.weaBus.TDryBul - 35.719) - 17.2799)
*/
void ForcedConvection_30s_eqFunction_671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,671};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* $cse2 variable */) = exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* weaDat.weaBus.TDryBul variable */) - 35.719,"weaDat.weaBus.TDryBul - 35.719",equationIndexes) - 17.2799);
  threadData->lastEquationSolved = 671;
}

/*
equation index: 672
type: SIMPLE_ASSIGN
weaDat.datRea.y[2] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 2, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,672};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* weaDat.datRea.y[2] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 2), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 672;
}

/*
equation index: 673
type: SIMPLE_ASSIGN
weaDat.weaBus.TDewPoi = 273.15 + weaDat.datRea.y[2]
*/
void ForcedConvection_30s_eqFunction_673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,673};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* weaDat.weaBus.TDewPoi variable */) = 273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* weaDat.datRea.y[2] variable */);
  threadData->lastEquationSolved = 673;
}

/*
equation index: 674
type: SIMPLE_ASSIGN
weaDat.TBlaSkyCom.TDewPoiK = smooth(1, if noEvent(weaDat.weaBus.TDewPoi - weaDat.weaBus.TDryBul > 0.1) then weaDat.weaBus.TDryBul else if noEvent(weaDat.weaBus.TDewPoi - weaDat.weaBus.TDryBul < -0.1) then weaDat.weaBus.TDewPoi else 0.25 * 10.0 * (weaDat.weaBus.TDewPoi - weaDat.weaBus.TDryBul) * ((10.0 * (weaDat.weaBus.TDewPoi - weaDat.weaBus.TDryBul)) ^ 2.0 - 3.0) * (weaDat.weaBus.TDewPoi - weaDat.weaBus.TDryBul) + 0.5 * (weaDat.weaBus.TDryBul + weaDat.weaBus.TDewPoi))
*/
void ForcedConvection_30s_eqFunction_674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,674};
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_real tmp36;
  modelica_boolean tmp37;
  modelica_real tmp38;
  modelica_boolean tmp39;
  modelica_real tmp40;
  tmp34 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* weaDat.weaBus.TDewPoi variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* weaDat.weaBus.TDryBul variable */),0.1);
  tmp39 = (modelica_boolean)tmp34;
  if(tmp39)
  {
    tmp40 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* weaDat.weaBus.TDryBul variable */);
  }
  else
  {
    tmp35 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* weaDat.weaBus.TDewPoi variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* weaDat.weaBus.TDryBul variable */),-0.1);
    tmp37 = (modelica_boolean)tmp35;
    if(tmp37)
    {
      tmp38 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* weaDat.weaBus.TDewPoi variable */);
    }
    else
    {
      tmp36 = (10.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* weaDat.weaBus.TDewPoi variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* weaDat.weaBus.TDryBul variable */));
      tmp38 = (0.25) * ((((10.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* weaDat.weaBus.TDewPoi variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* weaDat.weaBus.TDryBul variable */))) * ((tmp36 * tmp36) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* weaDat.weaBus.TDewPoi variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* weaDat.weaBus.TDryBul variable */))) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* weaDat.weaBus.TDryBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* weaDat.weaBus.TDewPoi variable */));
    }
    tmp40 = tmp38;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* weaDat.TBlaSkyCom.TDewPoiK variable */) = tmp40;
  threadData->lastEquationSolved = 674;
}

/*
equation index: 675
type: SIMPLE_ASSIGN
$cse13 = log((-weaDat.TBlaSkyCom.TDewPoiK) / (-273.15))
*/
void ForcedConvection_30s_eqFunction_675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,675};
  modelica_real tmp41;
  tmp41 = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* weaDat.TBlaSkyCom.TDewPoiK variable */)),-273.15,"-273.15",equationIndexes);
  if(!(tmp41 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log((-weaDat.TBlaSkyCom.TDewPoiK) / (-273.15)) was %g should be > 0", tmp41);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* $cse13 variable */) = log(tmp41);
  threadData->lastEquationSolved = 675;
}

/*
equation index: 676
type: SIMPLE_ASSIGN
weaDat.datRea.y[3] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 3, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,676};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* weaDat.datRea.y[3] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 3), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 676;
}

/*
equation index: 677
type: SIMPLE_ASSIGN
weaDat.relHumSel.uFil = 0.01 * weaDat.datRea.y[3]
*/
void ForcedConvection_30s_eqFunction_677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,677};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* weaDat.relHumSel.uFil variable */) = (0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* weaDat.datRea.y[3] variable */));
  threadData->lastEquationSolved = 677;
}

/*
equation index: 678
type: SIMPLE_ASSIGN
$cse17 = max(0.0, weaDat.relHumSel.uFil)
*/
void ForcedConvection_30s_eqFunction_678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,678};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* $cse17 variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* weaDat.relHumSel.uFil variable */));
  threadData->lastEquationSolved = 678;
}

/*
equation index: 679
type: SIMPLE_ASSIGN
weaDat.weaBus.relHum = min(1.0, $cse17)
*/
void ForcedConvection_30s_eqFunction_679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,679};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* weaDat.weaBus.relHum variable */) = fmin(1.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* $cse17 variable */));
  threadData->lastEquationSolved = 679;
}

/*
equation index: 680
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiDryBul = 0.621964713077499 * weaDat.weaBus.relHum / ((-0.378035286922501) * weaDat.weaBus.relHum + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse2)
*/
void ForcedConvection_30s_eqFunction_680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,680};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */) = (0.621964713077499) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* weaDat.weaBus.relHum variable */),(-0.378035286922501) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* weaDat.weaBus.relHum variable */)) + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* weaDat.pAtmSel.p PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* $cse2 variable */))),"(-0.378035286922501) * weaDat.weaBus.relHum + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse2",equationIndexes));
  threadData->lastEquationSolved = 680;
}

void ForcedConvection_30s_eqFunction_681(DATA*, threadData_t*);
void ForcedConvection_30s_eqFunction_682(DATA*, threadData_t*);
void ForcedConvection_30s_eqFunction_683(DATA*, threadData_t*);
void ForcedConvection_30s_eqFunction_684(DATA*, threadData_t*);
/*
equation index: 690
indexNonlinear: 1
type: NONLINEAR

vars: {weaDat.weaBus.TWetBul}
eqns: {681, 682, 683, 684}
*/
void ForcedConvection_30s_eqFunction_690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,690};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 690 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* weaDat.weaBus.TWetBul variable */);
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,690};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 690 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* weaDat.weaBus.TWetBul variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  threadData->lastEquationSolved = 690;
}

/*
equation index: 691
type: SIMPLE_ASSIGN
weaDat.datRea.y[4] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 4, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,691};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* weaDat.datRea.y[4] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 4), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 691;
}

/*
equation index: 692
type: SIMPLE_ASSIGN
weaDat.datRea.y[5] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 5, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,692};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[195]] /* weaDat.datRea.y[5] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 5), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 692;
}

/*
equation index: 693
type: SIMPLE_ASSIGN
weaDat.datRea.y[6] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 6, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,693};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[196]] /* weaDat.datRea.y[6] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 6), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 693;
}

/*
equation index: 694
type: SIMPLE_ASSIGN
weaDat.datRea.y[7] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 7, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,694};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[197]] /* weaDat.datRea.y[7] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 7), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 694;
}

/*
equation index: 695
type: SIMPLE_ASSIGN
weaDat.datRea.y[8] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 8, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,695};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* weaDat.datRea.y[8] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 8), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 695;
}

/*
equation index: 696
type: SIMPLE_ASSIGN
weaDat.datRea.y[9] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 9, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,696};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* weaDat.datRea.y[9] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 9), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 696;
}

/*
equation index: 697
type: SIMPLE_ASSIGN
weaDat.datRea.y[10] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 10, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,697};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* weaDat.datRea.y[10] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 10), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 697;
}

/*
equation index: 698
type: SIMPLE_ASSIGN
weaDat.datRea.y[11] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 11, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,698};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* weaDat.datRea.y[11] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 11), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 698;
}

/*
equation index: 699
type: SIMPLE_ASSIGN
weaDat.conWinDir.y = 0.017453292519943295 * weaDat.datRea.y[11]
*/
void ForcedConvection_30s_eqFunction_699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,699};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* weaDat.conWinDir.y variable */) = (0.017453292519943295) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* weaDat.datRea.y[11] variable */));
  threadData->lastEquationSolved = 699;
}

/*
equation index: 700
type: SIMPLE_ASSIGN
$cse14 = max(0.0, weaDat.conWinDir.y)
*/
void ForcedConvection_30s_eqFunction_700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,700};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* $cse14 variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* weaDat.conWinDir.y variable */));
  threadData->lastEquationSolved = 700;
}

/*
equation index: 701
type: SIMPLE_ASSIGN
weaDat.weaBus.winDir = min(6.283185307179586, $cse14)
*/
void ForcedConvection_30s_eqFunction_701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,701};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* weaDat.weaBus.winDir variable */) = fmin(6.283185307179586,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* $cse14 variable */));
  threadData->lastEquationSolved = 701;
}

/*
equation index: 702
type: SIMPLE_ASSIGN
weaDat.datRea.y[12] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 12, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,702};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* weaDat.datRea.y[12] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 12), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 702;
}

/*
equation index: 703
type: SIMPLE_ASSIGN
weaDat.weaBus.winSpe = max(0.0, weaDat.datRea.y[12])
*/
void ForcedConvection_30s_eqFunction_703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,703};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* weaDat.weaBus.winSpe variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* weaDat.datRea.y[12] variable */));
  threadData->lastEquationSolved = 703;
}

/*
equation index: 704
type: SIMPLE_ASSIGN
weaDat.datRea.y[13] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 13, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,704};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* weaDat.datRea.y[13] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 13), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 704;
}

/*
equation index: 705
type: SIMPLE_ASSIGN
weaDat.totSkyCovSel.y = 0.1 * weaDat.datRea.y[13]
*/
void ForcedConvection_30s_eqFunction_705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,705};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.totSkyCovSel.y variable */) = (0.1) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* weaDat.datRea.y[13] variable */));
  threadData->lastEquationSolved = 705;
}

/*
equation index: 706
type: SIMPLE_ASSIGN
$cse16 = max(0.0, weaDat.totSkyCovSel.y)
*/
void ForcedConvection_30s_eqFunction_706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,706};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* $cse16 variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.totSkyCovSel.y variable */));
  threadData->lastEquationSolved = 706;
}

/*
equation index: 707
type: SIMPLE_ASSIGN
weaDat.weaBus.nTot = min(1.0, $cse16)
*/
void ForcedConvection_30s_eqFunction_707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,707};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[242]] /* weaDat.weaBus.nTot variable */) = fmin(1.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* $cse16 variable */));
  threadData->lastEquationSolved = 707;
}

/*
equation index: 708
type: SIMPLE_ASSIGN
weaDat.datRea.y[14] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 14, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,708};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* weaDat.datRea.y[14] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 14), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 708;
}

/*
equation index: 709
type: SIMPLE_ASSIGN
weaDat.opaSkyCovSel.y = 0.1 * weaDat.datRea.y[14]
*/
void ForcedConvection_30s_eqFunction_709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,709};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* weaDat.opaSkyCovSel.y variable */) = (0.1) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* weaDat.datRea.y[14] variable */));
  threadData->lastEquationSolved = 709;
}

/*
equation index: 710
type: SIMPLE_ASSIGN
$cse15 = max(0.0, weaDat.opaSkyCovSel.y)
*/
void ForcedConvection_30s_eqFunction_710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,710};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* $cse15 variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* weaDat.opaSkyCovSel.y variable */));
  threadData->lastEquationSolved = 710;
}

/*
equation index: 711
type: SIMPLE_ASSIGN
weaDat.weaBus.nOpa = min(1.0, $cse15)
*/
void ForcedConvection_30s_eqFunction_711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,711};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* weaDat.weaBus.nOpa variable */) = fmin(1.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* $cse15 variable */));
  threadData->lastEquationSolved = 711;
}

/*
equation index: 712
type: SIMPLE_ASSIGN
weaDat.TBlaSkyCom.nOpa10 = 10.0 * weaDat.weaBus.nOpa
*/
void ForcedConvection_30s_eqFunction_712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,712};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* weaDat.TBlaSkyCom.nOpa10 variable */) = (10.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* weaDat.weaBus.nOpa variable */));
  threadData->lastEquationSolved = 712;
}

/*
equation index: 713
type: SIMPLE_ASSIGN
weaDat.TBlaSkyCom.epsSky = (0.787 + 0.764 * $cse13) * (1.0 + 0.0224 * weaDat.TBlaSkyCom.nOpa10 + (-0.0035) * weaDat.TBlaSkyCom.nOpa10 ^ 2.0 + 2.8e-4 * weaDat.TBlaSkyCom.nOpa10 ^ 3.0)
*/
void ForcedConvection_30s_eqFunction_713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,713};
  modelica_real tmp42;
  modelica_real tmp43;
  tmp42 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* weaDat.TBlaSkyCom.nOpa10 variable */);
  tmp43 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* weaDat.TBlaSkyCom.nOpa10 variable */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* weaDat.TBlaSkyCom.epsSky variable */) = (0.787 + (0.764) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* $cse13 variable */))) * (1.0 + (0.0224) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* weaDat.TBlaSkyCom.nOpa10 variable */)) + (-0.0035) * ((tmp42 * tmp42)) + (2.8e-4) * ((tmp43 * tmp43 * tmp43)));
  threadData->lastEquationSolved = 713;
}

/*
equation index: 714
type: SIMPLE_ASSIGN
weaDat.weaBus.TBlaSky = weaDat.weaBus.TDryBul * weaDat.TBlaSkyCom.epsSky ^ 0.25
*/
void ForcedConvection_30s_eqFunction_714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,714};
  modelica_real tmp44;
  modelica_real tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  tmp44 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* weaDat.TBlaSkyCom.epsSky variable */);
  tmp45 = 0.25;
  if(tmp44 < 0.0 && tmp45 != 0.0)
  {
    tmp47 = modf(tmp45, &tmp48);
    
    if(tmp47 > 0.5)
    {
      tmp47 -= 1.0;
      tmp48 += 1.0;
    }
    else if(tmp47 < -0.5)
    {
      tmp47 += 1.0;
      tmp48 -= 1.0;
    }
    
    if(fabs(tmp47) < 1e-10)
      tmp46 = pow(tmp44, tmp48);
    else
    {
      tmp50 = modf(1.0/tmp45, &tmp49);
      if(tmp50 > 0.5)
      {
        tmp50 -= 1.0;
        tmp49 += 1.0;
      }
      else if(tmp50 < -0.5)
      {
        tmp50 += 1.0;
        tmp49 -= 1.0;
      }
      if(fabs(tmp50) < 1e-10 && ((unsigned long)tmp49 & 1))
      {
        tmp46 = -pow(-tmp44, tmp47)*pow(tmp44, tmp48);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp44, tmp45);
      }
    }
  }
  else
  {
    tmp46 = pow(tmp44, tmp45);
  }
  if(isnan(tmp46) || isinf(tmp46))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp44, tmp45);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* weaDat.weaBus.TBlaSky variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* weaDat.weaBus.TDryBul variable */)) * (tmp46);
  threadData->lastEquationSolved = 714;
}

/*
equation index: 715
type: SIMPLE_ASSIGN
weaDat.datRea.y[15] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 15, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,715};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* weaDat.datRea.y[15] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 15), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 715;
}

/*
equation index: 716
type: SIMPLE_ASSIGN
weaDat.datRea.y[16] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 16, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,716};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[206]] /* weaDat.datRea.y[16] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 16), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 716;
}

/*
equation index: 717
type: SIMPLE_ASSIGN
weaDat.weaBus.ceiHei = max(0.0, weaDat.datRea.y[16])
*/
void ForcedConvection_30s_eqFunction_717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,717};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* weaDat.weaBus.ceiHei variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[206]] /* weaDat.datRea.y[16] variable */));
  threadData->lastEquationSolved = 717;
}

/*
equation index: 718
type: SIMPLE_ASSIGN
weaDat.datRea.y[17] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 17, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,718};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[207]] /* weaDat.datRea.y[17] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 17), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 718;
}

/*
equation index: 719
type: SIMPLE_ASSIGN
weaDat.datRea.y[18] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 18, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,719};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[208]] /* weaDat.datRea.y[18] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 18), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 719;
}

/*
equation index: 720
type: SIMPLE_ASSIGN
weaDat.datRea.y[19] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 19, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,720};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[209]] /* weaDat.datRea.y[19] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 19), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 720;
}

/*
equation index: 721
type: SIMPLE_ASSIGN
weaDat.datRea.y[20] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 20, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,721};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* weaDat.datRea.y[20] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 20), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 721;
}

/*
equation index: 722
type: SIMPLE_ASSIGN
weaDat.datRea.y[21] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 21, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,722};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* weaDat.datRea.y[21] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 21), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 722;
}

/*
equation index: 723
type: SIMPLE_ASSIGN
weaDat.datRea.y[22] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 22, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,723};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[212]] /* weaDat.datRea.y[22] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 22), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 723;
}

/*
equation index: 724
type: SIMPLE_ASSIGN
weaDat.datRea.y[23] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 23, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,724};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* weaDat.datRea.y[23] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 23), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 724;
}

/*
equation index: 725
type: SIMPLE_ASSIGN
weaDat.datRea.y[24] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 24, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,725};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* weaDat.datRea.y[24] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 24), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 725;
}

/*
equation index: 726
type: SIMPLE_ASSIGN
weaDat.datRea.y[25] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 25, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,726};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* weaDat.datRea.y[25] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 25), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 726;
}

/*
equation index: 727
type: SIMPLE_ASSIGN
weaDat.datRea.y[26] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 26, weaDat.conTim.calTim)
*/
void ForcedConvection_30s_eqFunction_727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,727};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* weaDat.datRea.y[26] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 26), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 727;
}

/*
equation index: 728
type: SIMPLE_ASSIGN
weaDat.weaBus.HHorIR = max(0.0, weaDat.datRea.y[26])
*/
void ForcedConvection_30s_eqFunction_728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,728};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* weaDat.weaBus.HHorIR variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* weaDat.datRea.y[26] variable */));
  threadData->lastEquationSolved = 728;
}

/*
equation index: 729
type: WHEN

when {$whenCondition1} then
  weaDat.conTimMin.tNext = if weaDat.conTimMin.canRepeatWeatherFile then weaDat.conTimMin.lenWea * (1.0 + (*Real*)(integer(weaDat.add30Min.y / weaDat.conTimMin.lenWea))) else time;
end when;
*/
void ForcedConvection_30s_eqFunction_729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,729};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* weaDat.conTimMin.tNext DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[281]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* weaDat.conTimMin.lenWea PARAM */)) * (1.0 + ((modelica_real)((modelica_integer)floor(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* weaDat.add30Min.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* weaDat.conTimMin.lenWea PARAM */),"weaDat.conTimMin.lenWea",equationIndexes))))):data->localData[0]->timeValue);
  }
  threadData->lastEquationSolved = 729;
}

/*
equation index: 730
type: SIMPLE_ASSIGN
weaDat.conTimMin.calTim = if weaDat.conTimMin.canRepeatWeatherFile then weaDat.add30Min.y - weaDat.conTimMin.tNext + weaDat.conTimMin.lenWea else weaDat.add30Min.y
*/
void ForcedConvection_30s_eqFunction_730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,730};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* weaDat.conTimMin.calTim variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[281]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* weaDat.add30Min.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* weaDat.conTimMin.tNext DISCRETE */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* weaDat.conTimMin.lenWea PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* weaDat.add30Min.y variable */));
  threadData->lastEquationSolved = 730;
}

/*
equation index: 731
type: SIMPLE_ASSIGN
weaDat.datRea30Min.y[1] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea30Min.tableID, 1, weaDat.conTimMin.calTim)
*/
void ForcedConvection_30s_eqFunction_731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,731};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* weaDat.datRea30Min.y[1] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 1), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* weaDat.conTimMin.calTim variable */));
  threadData->lastEquationSolved = 731;
}

/*
equation index: 732
type: SIMPLE_ASSIGN
weaDat.weaBus.HGloHor = max(0.0, weaDat.datRea30Min.y[1])
*/
void ForcedConvection_30s_eqFunction_732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,732};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[233]] /* weaDat.weaBus.HGloHor variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* weaDat.datRea30Min.y[1] variable */));
  threadData->lastEquationSolved = 732;
}

/*
equation index: 733
type: SIMPLE_ASSIGN
weaDat.datRea30Min.y[2] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea30Min.tableID, 2, weaDat.conTimMin.calTim)
*/
void ForcedConvection_30s_eqFunction_733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,733};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* weaDat.datRea30Min.y[2] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 2), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* weaDat.conTimMin.calTim variable */));
  threadData->lastEquationSolved = 733;
}

/*
equation index: 734
type: SIMPLE_ASSIGN
weaDat.weaBus.HDirNor = max(0.0, weaDat.datRea30Min.y[2])
*/
void ForcedConvection_30s_eqFunction_734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,734};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[232]] /* weaDat.weaBus.HDirNor variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* weaDat.datRea30Min.y[2] variable */));
  threadData->lastEquationSolved = 734;
}

/*
equation index: 735
type: SIMPLE_ASSIGN
weaDat.datRea30Min.y[3] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea30Min.tableID, 3, weaDat.conTimMin.calTim)
*/
void ForcedConvection_30s_eqFunction_735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,735};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* weaDat.datRea30Min.y[3] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 3), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* weaDat.conTimMin.calTim variable */));
  threadData->lastEquationSolved = 735;
}

/*
equation index: 736
type: SIMPLE_ASSIGN
weaDat.weaBus.HDifHor = max(0.0, weaDat.datRea30Min.y[3])
*/
void ForcedConvection_30s_eqFunction_736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,736};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[231]] /* weaDat.weaBus.HDifHor variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* weaDat.datRea30Min.y[3] variable */));
  threadData->lastEquationSolved = 736;
}

/*
equation index: 745
type: ALGORITHM

  assert(weaDat.conTim.canRepeatWeatherFile or noEvent(time >= weaDat.conTim.weaDatStaTim), "In ForcedConvection.weaDat.conTim: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " is less than the start time " + String(weaDat.conTim.weaDatStaTim, 6, 0, true) + " of the weather data file.");
*/
void ForcedConvection_30s_eqFunction_745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,745};
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,130,"In ForcedConvection.weaDat.conTim: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp53;
  modelica_metatype tmpMeta54;
  static const MMC_DEFSTRINGLIT(tmp55,29," is less than the start time ");
  modelica_metatype tmpMeta56;
  modelica_string tmp57;
  modelica_metatype tmpMeta58;
  static const MMC_DEFSTRINGLIT(tmp59,26," of the weather data file.");
  modelica_metatype tmpMeta60;
  static int tmp61 = 0;
  {
    tmp51 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1299]] /* weaDat.conTim.weaDatStaTim PARAM */));
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[280]] /* weaDat.conTim.canRepeatWeatherFile PARAM */) || tmp51))
    {
      tmp53 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta54 = stringAppend(MMC_REFSTRINGLIT(tmp52),tmp53);
      tmpMeta56 = stringAppend(tmpMeta54,MMC_REFSTRINGLIT(tmp55));
      tmp57 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1299]] /* weaDat.conTim.weaDatStaTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta58 = stringAppend(tmpMeta56,tmp57);
      tmpMeta60 = stringAppend(tmpMeta58,MMC_REFSTRINGLIT(tmp59));
      {
        const char* assert_cond = "(weaDat.conTim.canRepeatWeatherFile or noEvent(time >= weaDat.conTim.weaDatStaTim))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta60));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta60));
        }
      }
    }
  }
  threadData->lastEquationSolved = 745;
}

/*
equation index: 744
type: ALGORITHM

  assert(weaDat.conTim.canRepeatWeatherFile or noEvent(time - weaDat.conTim.weaDatEndTim < 1800.0), "In ForcedConvection.weaDat.conTim: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " exceeds the end time " + String(weaDat.conTim.weaDatEndTim, 6, 0, true) + " of the weather data file.");
*/
void ForcedConvection_30s_eqFunction_744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,744};
  modelica_boolean tmp62;
  static const MMC_DEFSTRINGLIT(tmp63,130,"In ForcedConvection.weaDat.conTim: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp64;
  modelica_metatype tmpMeta65;
  static const MMC_DEFSTRINGLIT(tmp66,22," exceeds the end time ");
  modelica_metatype tmpMeta67;
  modelica_string tmp68;
  modelica_metatype tmpMeta69;
  static const MMC_DEFSTRINGLIT(tmp70,26," of the weather data file.");
  modelica_metatype tmpMeta71;
  static int tmp72 = 0;
  {
    tmp62 = Less(data->localData[0]->timeValue - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* weaDat.conTim.weaDatEndTim PARAM */),1800.0);
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[280]] /* weaDat.conTim.canRepeatWeatherFile PARAM */) || tmp62))
    {
      tmp64 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta65 = stringAppend(MMC_REFSTRINGLIT(tmp63),tmp64);
      tmpMeta67 = stringAppend(tmpMeta65,MMC_REFSTRINGLIT(tmp66));
      tmp68 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* weaDat.conTim.weaDatEndTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta69 = stringAppend(tmpMeta67,tmp68);
      tmpMeta71 = stringAppend(tmpMeta69,MMC_REFSTRINGLIT(tmp70));
      {
        const char* assert_cond = "(weaDat.conTim.canRepeatWeatherFile or noEvent(time - weaDat.conTim.weaDatEndTim < 1800.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta71));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta71));
        }
      }
    }
  }
  threadData->lastEquationSolved = 744;
}

/*
equation index: 743
type: ALGORITHM

  assert(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time >= weaDat.conTimMin.weaDatStaTim), "In ForcedConvection.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " is less than the start time " + String(weaDat.conTimMin.weaDatStaTim, 6, 0, true) + " of the weather data file.");
*/
void ForcedConvection_30s_eqFunction_743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,743};
  modelica_boolean tmp73;
  static const MMC_DEFSTRINGLIT(tmp74,133,"In ForcedConvection.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp75;
  modelica_metatype tmpMeta76;
  static const MMC_DEFSTRINGLIT(tmp77,29," is less than the start time ");
  modelica_metatype tmpMeta78;
  modelica_string tmp79;
  modelica_metatype tmpMeta80;
  static const MMC_DEFSTRINGLIT(tmp81,26," of the weather data file.");
  modelica_metatype tmpMeta82;
  static int tmp83 = 0;
  {
    tmp73 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1302]] /* weaDat.conTimMin.weaDatStaTim PARAM */));
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[281]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) || tmp73))
    {
      tmp75 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta76 = stringAppend(MMC_REFSTRINGLIT(tmp74),tmp75);
      tmpMeta78 = stringAppend(tmpMeta76,MMC_REFSTRINGLIT(tmp77));
      tmp79 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1302]] /* weaDat.conTimMin.weaDatStaTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta80 = stringAppend(tmpMeta78,tmp79);
      tmpMeta82 = stringAppend(tmpMeta80,MMC_REFSTRINGLIT(tmp81));
      {
        const char* assert_cond = "(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time >= weaDat.conTimMin.weaDatStaTim))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta82));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta82));
        }
      }
    }
  }
  threadData->lastEquationSolved = 743;
}

/*
equation index: 742
type: ALGORITHM

  assert(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time - weaDat.conTimMin.weaDatEndTim < 1800.0), "In ForcedConvection.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " exceeds the end time " + String(weaDat.conTimMin.weaDatEndTim, 6, 0, true) + " of the weather data file.");
*/
void ForcedConvection_30s_eqFunction_742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,742};
  modelica_boolean tmp84;
  static const MMC_DEFSTRINGLIT(tmp85,133,"In ForcedConvection.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp86;
  modelica_metatype tmpMeta87;
  static const MMC_DEFSTRINGLIT(tmp88,22," exceeds the end time ");
  modelica_metatype tmpMeta89;
  modelica_string tmp90;
  modelica_metatype tmpMeta91;
  static const MMC_DEFSTRINGLIT(tmp92,26," of the weather data file.");
  modelica_metatype tmpMeta93;
  static int tmp94 = 0;
  {
    tmp84 = Less(data->localData[0]->timeValue - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* weaDat.conTimMin.weaDatEndTim PARAM */),1800.0);
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[281]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) || tmp84))
    {
      tmp86 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta87 = stringAppend(MMC_REFSTRINGLIT(tmp85),tmp86);
      tmpMeta89 = stringAppend(tmpMeta87,MMC_REFSTRINGLIT(tmp88));
      tmp90 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* weaDat.conTimMin.weaDatEndTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta91 = stringAppend(tmpMeta89,tmp90);
      tmpMeta93 = stringAppend(tmpMeta91,MMC_REFSTRINGLIT(tmp92));
      {
        const char* assert_cond = "(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time - weaDat.conTimMin.weaDatEndTim < 1800.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta93));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta93));
        }
      }
    }
  }
  threadData->lastEquationSolved = 742;
}

/*
equation index: 741
type: ALGORITHM

  assert(noEvent(weaDat.pAtmSel.p > 3100.0) and noEvent(weaDat.pAtmSel.p < 1.2e5), "In ForcedConvection.weaDat.chePre: Weather data atmospheric pressure out of bounds.
   PIn = " + String(weaDat.pAtmSel.p, 6, 0, true));
*/
void ForcedConvection_30s_eqFunction_741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,741};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  static const MMC_DEFSTRINGLIT(tmp97,93,"In ForcedConvection.weaDat.chePre: Weather data atmospheric pressure out of bounds.\n   PIn = ");
  modelica_string tmp98;
  modelica_metatype tmpMeta99;
  static int tmp100 = 0;
  {
    tmp95 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* weaDat.pAtmSel.p PARAM */),3100.0);
    tmp96 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* weaDat.pAtmSel.p PARAM */),1.2e5);
    if(!(tmp95 && tmp96))
    {
      tmp98 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* weaDat.pAtmSel.p PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta99 = stringAppend(MMC_REFSTRINGLIT(tmp97),tmp98);
      {
        const char* assert_cond = "(noEvent(weaDat.pAtmSel.p > 3100.0) and noEvent(weaDat.pAtmSel.p < 1.2e5))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckPressure.mo",17,3,18,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta99));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckPressure.mo",17,3,18,88,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta99));
        }
      }
    }
  }
  threadData->lastEquationSolved = 741;
}

/*
equation index: 740
type: ALGORITHM

  assert(abs(1.0 - roo.irRadGai.fraConExt[1] - roo.irRadGai.fraConExtWinOpa[1] - roo.irRadGai.fraConExtWinGla[1] - roo.irRadGai.fraConExtWinFra[1] - roo.irRadGai.fraConPar_a[1] - roo.irRadGai.fraConPar_b[1] - roo.irRadGai.fraConBou[1] - (roo.irRadGai.fraSurBou[1] + roo.irRadGai.fraSurBou[2] + roo.irRadGai.fraSurBou[3] + roo.irRadGai.fraSurBou[4] + roo.irRadGai.fraSurBou[5] + roo.irRadGai.fraSurBou[6])) < 1e-5, "Programming error: Radiation balance is wrong. Check equations.");
*/
void ForcedConvection_30s_eqFunction_740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,740};
  modelica_boolean tmp101;
  static const MMC_DEFSTRINGLIT(tmp102,63,"Programming error: Radiation balance is wrong. Check equations.");
  static int tmp103 = 0;
  {
    tmp101 = Less(fabs(1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[140]] /* roo.irRadGai.fraConExt[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* roo.irRadGai.fraConExtWinOpa[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* roo.irRadGai.fraConExtWinGla[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* roo.irRadGai.fraConExtWinFra[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[144]] /* roo.irRadGai.fraConPar_a[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[145]] /* roo.irRadGai.fraConPar_b[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[139]] /* roo.irRadGai.fraConBou[1] variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* roo.irRadGai.fraSurBou[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* roo.irRadGai.fraSurBou[2] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* roo.irRadGai.fraSurBou[3] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* roo.irRadGai.fraSurBou[4] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* roo.irRadGai.fraSurBou[5] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* roo.irRadGai.fraSurBou[6] variable */))),1e-5);
    if(!tmp101)
    {
      {
        const char* assert_cond = "(abs(1.0 - roo.irRadGai.fraConExt[1] - roo.irRadGai.fraConExtWinOpa[1] - roo.irRadGai.fraConExtWinGla[1] - roo.irRadGai.fraConExtWinFra[1] - roo.irRadGai.fraConPar_a[1] - roo.irRadGai.fraConPar_b[1] - roo.irRadGai.fraConBou[1] - (roo.irRadGai.fraSurBou[1] + roo.irRadGai.fraSurBou[2] + roo.irRadGai.fraSurBou[3] + roo.irRadGai.fraSurBou[4] + roo.irRadGai.fraSurBou[5] + roo.irRadGai.fraSurBou[6])) < 1e-5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationGainDistribution.mo",122,3,125,78,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp102)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationGainDistribution.mo",122,3,125,78,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp102)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 740;
}

/*
equation index: 739
type: ALGORITHM

  assert(noEvent(weaDat.weaBus.TBlaSky > weaDat.cheTemBlaSky.TMin) and noEvent(weaDat.weaBus.TBlaSky < weaDat.cheTemBlaSky.TMax), "In ForcedConvection.weaDat.cheTemBlaSky: Weather data black-body sky temperature out of bounds.
   TIn = " + String(weaDat.weaBus.TBlaSky, 6, 0, true));
*/
void ForcedConvection_30s_eqFunction_739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,739};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  static const MMC_DEFSTRINGLIT(tmp106,105,"In ForcedConvection.weaDat.cheTemBlaSky: Weather data black-body sky temperature out of bounds.\n   TIn = ");
  modelica_string tmp107;
  modelica_metatype tmpMeta108;
  static int tmp109 = 0;
  {
    tmp104 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* weaDat.weaBus.TBlaSky variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* weaDat.cheTemBlaSky.TMin PARAM */));
    tmp105 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* weaDat.weaBus.TBlaSky variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* weaDat.cheTemBlaSky.TMax PARAM */));
    if(!(tmp104 && tmp105))
    {
      tmp107 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* weaDat.weaBus.TBlaSky variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta108 = stringAppend(MMC_REFSTRINGLIT(tmp106),tmp107);
      {
        const char* assert_cond = "(noEvent(weaDat.weaBus.TBlaSky > weaDat.cheTemBlaSky.TMin) and noEvent(weaDat.weaBus.TBlaSky < weaDat.cheTemBlaSky.TMax))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckBlackBodySkyTemperature.mo",25,3,27,18,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta108));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckBlackBodySkyTemperature.mo",25,3,27,18,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta108));
        }
      }
    }
  }
  threadData->lastEquationSolved = 739;
}

/*
equation index: 738
type: ALGORITHM

  assert(noEvent(weaDat.weaBus.TDewPoi > weaDat.cheTemDewPoi.TMin) and noEvent(weaDat.weaBus.TDewPoi < weaDat.cheTemDewPoi.TMax), "In ForcedConvection.weaDat.cheTemDewPoi: Weather data dew point temperature out of bounds.
   TIn = " + String(weaDat.weaBus.TDewPoi, 6, 0, true));
*/
void ForcedConvection_30s_eqFunction_738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,738};
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  static const MMC_DEFSTRINGLIT(tmp112,100,"In ForcedConvection.weaDat.cheTemDewPoi: Weather data dew point temperature out of bounds.\n   TIn = ");
  modelica_string tmp113;
  modelica_metatype tmpMeta114;
  static int tmp115 = 0;
  {
    tmp110 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* weaDat.weaBus.TDewPoi variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1291]] /* weaDat.cheTemDewPoi.TMin PARAM */));
    tmp111 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* weaDat.weaBus.TDewPoi variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* weaDat.cheTemDewPoi.TMax PARAM */));
    if(!(tmp110 && tmp111))
    {
      tmp113 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* weaDat.weaBus.TDewPoi variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta114 = stringAppend(MMC_REFSTRINGLIT(tmp112),tmp113);
      {
        const char* assert_cond = "(noEvent(weaDat.weaBus.TDewPoi > weaDat.cheTemDewPoi.TMin) and noEvent(weaDat.weaBus.TDewPoi < weaDat.cheTemDewPoi.TMax))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDewPointTemperature.mo",23,3,25,10,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta114));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDewPointTemperature.mo",23,3,25,10,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta114));
        }
      }
    }
  }
  threadData->lastEquationSolved = 738;
}

/*
equation index: 737
type: ALGORITHM

  assert(noEvent(weaDat.weaBus.TDryBul > weaDat.cheTemDryBul.TMin) and noEvent(weaDat.weaBus.TDryBul < weaDat.cheTemDryBul.TMax), "In ForcedConvection.weaDat.cheTemDryBul: Weather data dry bulb temperature out of bounds.
   TIn = " + String(weaDat.weaBus.TDryBul, 6, 0, true));
*/
void ForcedConvection_30s_eqFunction_737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,737};
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  static const MMC_DEFSTRINGLIT(tmp118,99,"In ForcedConvection.weaDat.cheTemDryBul: Weather data dry bulb temperature out of bounds.\n   TIn = ");
  modelica_string tmp119;
  modelica_metatype tmpMeta120;
  static int tmp121 = 0;
  {
    tmp116 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* weaDat.weaBus.TDryBul variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1293]] /* weaDat.cheTemDryBul.TMin PARAM */));
    tmp117 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* weaDat.weaBus.TDryBul variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1292]] /* weaDat.cheTemDryBul.TMax PARAM */));
    if(!(tmp116 && tmp117))
    {
      tmp119 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* weaDat.weaBus.TDryBul variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta120 = stringAppend(MMC_REFSTRINGLIT(tmp118),tmp119);
      {
        const char* assert_cond = "(noEvent(weaDat.weaBus.TDryBul > weaDat.cheTemDryBul.TMin) and noEvent(weaDat.weaBus.TDryBul < weaDat.cheTemDryBul.TMax))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDryBulbTemperature.mo",23,3,25,10,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta120));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDryBulbTemperature.mo",23,3,25,10,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta120));
        }
      }
    }
  }
  threadData->lastEquationSolved = 737;
}

OMC_DISABLE_OPT
int ForcedConvection_30s_functionDAE(DATA *data, threadData_t *threadData)
{
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  ForcedConvection_30s_functionLocalKnownVars(data, threadData);
  static void (*const eqFunctions[197])(DATA*, threadData_t*) = {
    ForcedConvection_30s_eqFunction_516,
    ForcedConvection_30s_eqFunction_517,
    ForcedConvection_30s_eqFunction_518,
    ForcedConvection_30s_eqFunction_519,
    ForcedConvection_30s_eqFunction_520,
    ForcedConvection_30s_eqFunction_521,
    ForcedConvection_30s_eqFunction_522,
    ForcedConvection_30s_eqFunction_523,
    ForcedConvection_30s_eqFunction_524,
    ForcedConvection_30s_eqFunction_525,
    ForcedConvection_30s_eqFunction_526,
    ForcedConvection_30s_eqFunction_527,
    ForcedConvection_30s_eqFunction_528,
    ForcedConvection_30s_eqFunction_529,
    ForcedConvection_30s_eqFunction_530,
    ForcedConvection_30s_eqFunction_531,
    ForcedConvection_30s_eqFunction_532,
    ForcedConvection_30s_eqFunction_533,
    ForcedConvection_30s_eqFunction_534,
    ForcedConvection_30s_eqFunction_535,
    ForcedConvection_30s_eqFunction_536,
    ForcedConvection_30s_eqFunction_537,
    ForcedConvection_30s_eqFunction_538,
    ForcedConvection_30s_eqFunction_539,
    ForcedConvection_30s_eqFunction_540,
    ForcedConvection_30s_eqFunction_541,
    ForcedConvection_30s_eqFunction_542,
    ForcedConvection_30s_eqFunction_543,
    ForcedConvection_30s_eqFunction_544,
    ForcedConvection_30s_eqFunction_545,
    ForcedConvection_30s_eqFunction_546,
    ForcedConvection_30s_eqFunction_547,
    ForcedConvection_30s_eqFunction_548,
    ForcedConvection_30s_eqFunction_549,
    ForcedConvection_30s_eqFunction_550,
    ForcedConvection_30s_eqFunction_551,
    ForcedConvection_30s_eqFunction_552,
    ForcedConvection_30s_eqFunction_553,
    ForcedConvection_30s_eqFunction_554,
    ForcedConvection_30s_eqFunction_555,
    ForcedConvection_30s_eqFunction_556,
    ForcedConvection_30s_eqFunction_557,
    ForcedConvection_30s_eqFunction_558,
    ForcedConvection_30s_eqFunction_559,
    ForcedConvection_30s_eqFunction_560,
    ForcedConvection_30s_eqFunction_561,
    ForcedConvection_30s_eqFunction_562,
    ForcedConvection_30s_eqFunction_563,
    ForcedConvection_30s_eqFunction_564,
    ForcedConvection_30s_eqFunction_565,
    ForcedConvection_30s_eqFunction_566,
    ForcedConvection_30s_eqFunction_567,
    ForcedConvection_30s_eqFunction_568,
    ForcedConvection_30s_eqFunction_569,
    ForcedConvection_30s_eqFunction_570,
    ForcedConvection_30s_eqFunction_571,
    ForcedConvection_30s_eqFunction_572,
    ForcedConvection_30s_eqFunction_573,
    ForcedConvection_30s_eqFunction_574,
    ForcedConvection_30s_eqFunction_575,
    ForcedConvection_30s_eqFunction_576,
    ForcedConvection_30s_eqFunction_577,
    ForcedConvection_30s_eqFunction_578,
    ForcedConvection_30s_eqFunction_579,
    ForcedConvection_30s_eqFunction_580,
    ForcedConvection_30s_eqFunction_581,
    ForcedConvection_30s_eqFunction_582,
    ForcedConvection_30s_eqFunction_583,
    ForcedConvection_30s_eqFunction_584,
    ForcedConvection_30s_eqFunction_585,
    ForcedConvection_30s_eqFunction_586,
    ForcedConvection_30s_eqFunction_587,
    ForcedConvection_30s_eqFunction_588,
    ForcedConvection_30s_eqFunction_589,
    ForcedConvection_30s_eqFunction_590,
    ForcedConvection_30s_eqFunction_615,
    ForcedConvection_30s_eqFunction_616,
    ForcedConvection_30s_eqFunction_617,
    ForcedConvection_30s_eqFunction_618,
    ForcedConvection_30s_eqFunction_619,
    ForcedConvection_30s_eqFunction_620,
    ForcedConvection_30s_eqFunction_621,
    ForcedConvection_30s_eqFunction_622,
    ForcedConvection_30s_eqFunction_623,
    ForcedConvection_30s_eqFunction_624,
    ForcedConvection_30s_eqFunction_625,
    ForcedConvection_30s_eqFunction_626,
    ForcedConvection_30s_eqFunction_627,
    ForcedConvection_30s_eqFunction_628,
    ForcedConvection_30s_eqFunction_629,
    ForcedConvection_30s_eqFunction_630,
    ForcedConvection_30s_eqFunction_631,
    ForcedConvection_30s_eqFunction_632,
    ForcedConvection_30s_eqFunction_633,
    ForcedConvection_30s_eqFunction_634,
    ForcedConvection_30s_eqFunction_635,
    ForcedConvection_30s_eqFunction_636,
    ForcedConvection_30s_eqFunction_637,
    ForcedConvection_30s_eqFunction_638,
    ForcedConvection_30s_eqFunction_639,
    ForcedConvection_30s_eqFunction_640,
    ForcedConvection_30s_eqFunction_641,
    ForcedConvection_30s_eqFunction_642,
    ForcedConvection_30s_eqFunction_643,
    ForcedConvection_30s_eqFunction_644,
    ForcedConvection_30s_eqFunction_645,
    ForcedConvection_30s_eqFunction_646,
    ForcedConvection_30s_eqFunction_647,
    ForcedConvection_30s_eqFunction_648,
    ForcedConvection_30s_eqFunction_649,
    ForcedConvection_30s_eqFunction_650,
    ForcedConvection_30s_eqFunction_651,
    ForcedConvection_30s_eqFunction_652,
    ForcedConvection_30s_eqFunction_653,
    ForcedConvection_30s_eqFunction_654,
    ForcedConvection_30s_eqFunction_655,
    ForcedConvection_30s_eqFunction_656,
    ForcedConvection_30s_eqFunction_657,
    ForcedConvection_30s_eqFunction_658,
    ForcedConvection_30s_eqFunction_659,
    ForcedConvection_30s_eqFunction_660,
    ForcedConvection_30s_eqFunction_661,
    ForcedConvection_30s_eqFunction_662,
    ForcedConvection_30s_eqFunction_663,
    ForcedConvection_30s_eqFunction_664,
    ForcedConvection_30s_eqFunction_665,
    ForcedConvection_30s_eqFunction_666,
    ForcedConvection_30s_eqFunction_667,
    ForcedConvection_30s_eqFunction_668,
    ForcedConvection_30s_eqFunction_669,
    ForcedConvection_30s_eqFunction_670,
    ForcedConvection_30s_eqFunction_671,
    ForcedConvection_30s_eqFunction_672,
    ForcedConvection_30s_eqFunction_673,
    ForcedConvection_30s_eqFunction_674,
    ForcedConvection_30s_eqFunction_675,
    ForcedConvection_30s_eqFunction_676,
    ForcedConvection_30s_eqFunction_677,
    ForcedConvection_30s_eqFunction_678,
    ForcedConvection_30s_eqFunction_679,
    ForcedConvection_30s_eqFunction_680,
    ForcedConvection_30s_eqFunction_690,
    ForcedConvection_30s_eqFunction_691,
    ForcedConvection_30s_eqFunction_692,
    ForcedConvection_30s_eqFunction_693,
    ForcedConvection_30s_eqFunction_694,
    ForcedConvection_30s_eqFunction_695,
    ForcedConvection_30s_eqFunction_696,
    ForcedConvection_30s_eqFunction_697,
    ForcedConvection_30s_eqFunction_698,
    ForcedConvection_30s_eqFunction_699,
    ForcedConvection_30s_eqFunction_700,
    ForcedConvection_30s_eqFunction_701,
    ForcedConvection_30s_eqFunction_702,
    ForcedConvection_30s_eqFunction_703,
    ForcedConvection_30s_eqFunction_704,
    ForcedConvection_30s_eqFunction_705,
    ForcedConvection_30s_eqFunction_706,
    ForcedConvection_30s_eqFunction_707,
    ForcedConvection_30s_eqFunction_708,
    ForcedConvection_30s_eqFunction_709,
    ForcedConvection_30s_eqFunction_710,
    ForcedConvection_30s_eqFunction_711,
    ForcedConvection_30s_eqFunction_712,
    ForcedConvection_30s_eqFunction_713,
    ForcedConvection_30s_eqFunction_714,
    ForcedConvection_30s_eqFunction_715,
    ForcedConvection_30s_eqFunction_716,
    ForcedConvection_30s_eqFunction_717,
    ForcedConvection_30s_eqFunction_718,
    ForcedConvection_30s_eqFunction_719,
    ForcedConvection_30s_eqFunction_720,
    ForcedConvection_30s_eqFunction_721,
    ForcedConvection_30s_eqFunction_722,
    ForcedConvection_30s_eqFunction_723,
    ForcedConvection_30s_eqFunction_724,
    ForcedConvection_30s_eqFunction_725,
    ForcedConvection_30s_eqFunction_726,
    ForcedConvection_30s_eqFunction_727,
    ForcedConvection_30s_eqFunction_728,
    ForcedConvection_30s_eqFunction_729,
    ForcedConvection_30s_eqFunction_730,
    ForcedConvection_30s_eqFunction_731,
    ForcedConvection_30s_eqFunction_732,
    ForcedConvection_30s_eqFunction_733,
    ForcedConvection_30s_eqFunction_734,
    ForcedConvection_30s_eqFunction_735,
    ForcedConvection_30s_eqFunction_736,
    ForcedConvection_30s_eqFunction_745,
    ForcedConvection_30s_eqFunction_744,
    ForcedConvection_30s_eqFunction_743,
    ForcedConvection_30s_eqFunction_742,
    ForcedConvection_30s_eqFunction_741,
    ForcedConvection_30s_eqFunction_740,
    ForcedConvection_30s_eqFunction_739,
    ForcedConvection_30s_eqFunction_738,
    ForcedConvection_30s_eqFunction_737
  };
  
  for (int id = 0; id < 197; id++) {
    eqFunctions[id](data, threadData);
  }
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  return 0;
}


int ForcedConvection_30s_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

/* forwarded equations */
extern void ForcedConvection_30s_eqFunction_526(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_527(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_528(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_529(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_530(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_628(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_629(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_630(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_631(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_632(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_633(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_634(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_635(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_636(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_637(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_638(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_639(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_640(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_641(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_642(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_643(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_644(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_645(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_646(DATA* data, threadData_t *threadData);
extern void ForcedConvection_30s_eqFunction_647(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[25])(DATA*, threadData_t*) = {
    ForcedConvection_30s_eqFunction_526,
    ForcedConvection_30s_eqFunction_527,
    ForcedConvection_30s_eqFunction_528,
    ForcedConvection_30s_eqFunction_529,
    ForcedConvection_30s_eqFunction_530,
    ForcedConvection_30s_eqFunction_628,
    ForcedConvection_30s_eqFunction_629,
    ForcedConvection_30s_eqFunction_630,
    ForcedConvection_30s_eqFunction_631,
    ForcedConvection_30s_eqFunction_632,
    ForcedConvection_30s_eqFunction_633,
    ForcedConvection_30s_eqFunction_634,
    ForcedConvection_30s_eqFunction_635,
    ForcedConvection_30s_eqFunction_636,
    ForcedConvection_30s_eqFunction_637,
    ForcedConvection_30s_eqFunction_638,
    ForcedConvection_30s_eqFunction_639,
    ForcedConvection_30s_eqFunction_640,
    ForcedConvection_30s_eqFunction_641,
    ForcedConvection_30s_eqFunction_642,
    ForcedConvection_30s_eqFunction_643,
    ForcedConvection_30s_eqFunction_644,
    ForcedConvection_30s_eqFunction_645,
    ForcedConvection_30s_eqFunction_646,
    ForcedConvection_30s_eqFunction_647
  };
  
  for (int id = 0; id < 25; id++) {
    eqFunctions[id](data, threadData);
  }
}

int ForcedConvection_30s_functionODE(DATA *data, threadData_t *threadData)
{
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  ForcedConvection_30s_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char **argv, DATA *data, threadData_t *threadData);
extern int _main_OptimizationRuntime(int argc, char **argv, DATA *data, threadData_t *threadData);

#include "ForcedConvection_30s_12jac.h"
#include "ForcedConvection_30s_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks ForcedConvection_30s_callback = {
  (int (*)(DATA *, threadData_t *, void *)) ForcedConvection_30s_performSimulation,    /* performSimulation */
  (int (*)(DATA *, threadData_t *, void *)) ForcedConvection_30s_performQSSSimulation,    /* performQSSSimulation */
  ForcedConvection_30s_updateContinuousSystem,    /* updateContinuousSystem */
  ForcedConvection_30s_callExternalObjectDestructors,    /* callExternalObjectDestructors */
  ForcedConvection_30s_initialNonLinearSystem,    /* initialNonLinearSystem */
  ForcedConvection_30s_initialLinearSystem,    /* initialLinearSystem */
  NULL,    /* initialMixedSystem */
  #if !defined(OMC_NO_STATESELECTION)
  ForcedConvection_30s_initializeStateSets,
  #else
  NULL,
  #endif    /* initializeStateSets */
  ForcedConvection_30s_initializeDAEmodeData,
  ForcedConvection_30s_functionODE,
  ForcedConvection_30s_functionAlgebraics,
  ForcedConvection_30s_functionDAE,
  ForcedConvection_30s_functionLocalKnownVars,
  ForcedConvection_30s_input_function,
  ForcedConvection_30s_input_function_init,
  ForcedConvection_30s_input_function_updateStartValues,
  ForcedConvection_30s_data_function,
  ForcedConvection_30s_output_function,
  ForcedConvection_30s_setc_function,
  ForcedConvection_30s_setb_function,
  ForcedConvection_30s_function_storeDelayed,
  ForcedConvection_30s_function_storeSpatialDistribution,
  ForcedConvection_30s_function_initSpatialDistribution,
  ForcedConvection_30s_updateBoundVariableAttributes,
  ForcedConvection_30s_functionInitialEquations,
  GLOBAL_EQUIDISTANT_HOMOTOPY,
  NULL,
  ForcedConvection_30s_functionRemovedInitialEquations,
  ForcedConvection_30s_updateBoundParameters,
  ForcedConvection_30s_checkForAsserts,
  ForcedConvection_30s_function_ZeroCrossingsEquations,
  ForcedConvection_30s_function_ZeroCrossings,
  ForcedConvection_30s_function_updateRelations,
  ForcedConvection_30s_zeroCrossingDescription,
  ForcedConvection_30s_relationDescription,
  ForcedConvection_30s_function_initSample,
  ForcedConvection_30s_INDEX_JAC_A,
  ForcedConvection_30s_INDEX_JAC_B,
  ForcedConvection_30s_INDEX_JAC_C,
  ForcedConvection_30s_INDEX_JAC_D,
  ForcedConvection_30s_INDEX_JAC_F,
  ForcedConvection_30s_INDEX_JAC_H,
  ForcedConvection_30s_initialAnalyticJacobianA,
  ForcedConvection_30s_initialAnalyticJacobianB,
  ForcedConvection_30s_initialAnalyticJacobianC,
  ForcedConvection_30s_initialAnalyticJacobianD,
  ForcedConvection_30s_initialAnalyticJacobianF,
  ForcedConvection_30s_initialAnalyticJacobianH,
  ForcedConvection_30s_functionJacA_column,
  ForcedConvection_30s_functionJacB_column,
  ForcedConvection_30s_functionJacC_column,
  ForcedConvection_30s_functionJacD_column,
  ForcedConvection_30s_functionJacF_column,
  ForcedConvection_30s_functionJacH_column,
  ForcedConvection_30s_linear_model_frame,
  ForcedConvection_30s_linear_model_datarecovery_frame,
  ForcedConvection_30s_mayer,
  ForcedConvection_30s_lagrange,
  ForcedConvection_30s_getInputVarIndicesInOptimization,
  ForcedConvection_30s_pickUpBoundsForInputsInOptimization,
  ForcedConvection_30s_setInputData,
  ForcedConvection_30s_getTimeGrid,
  ForcedConvection_30s_symbolicInlineSystem,
  ForcedConvection_30s_function_initSynchronous,
  ForcedConvection_30s_function_updateSynchronous,
  ForcedConvection_30s_function_equationsSynchronous,
  ForcedConvection_30s_inputNames,
  ForcedConvection_30s_dataReconciliationInputNames,
  ForcedConvection_30s_dataReconciliationUnmeasuredVariables,
  NULL,
  NULL,
  NULL,
  NULL,
  -1,
  NULL,
  NULL,
  -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Buildings"
#define _OMC_LIT_RESOURCE_0_dir_data "/workspace/external/modelica-buildings/Buildings"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,9,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,48,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Complex"
#define _OMC_LIT_RESOURCE_1_dir_data "/home/cfd/.openmodelica/libraries/Complex 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,7,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,56,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Modelica"
#define _OMC_LIT_RESOURCE_2_dir_data "/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,8,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,57,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "/home/cfd/.openmodelica/libraries/ModelicaServices 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,65,_OMC_LIT_RESOURCE_3_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,8,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir)}};
void ForcedConvection_30s_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &ForcedConvection_30s_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection";
  data->modelData->modelFilePrefix = "ForcedConvection_30s";
  data->modelData->modelFileName = "ForcedConvection.mo";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/Examples/FFD";
  data->modelData->modelGUID = "{d6a3dafa-63d1-4469-b4b7-051a48b581b6}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "ForcedConvection_30s_init.c"
    ;
  static const char contents_info[] =
    #include "ForcedConvection_30s_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "ForcedConvection_30s_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "ForcedConvection_30s_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->modelDataXml.fileName = "ForcedConvection_30s_info.json";
  data->modelData->resourcesDir = NULL;
  data->modelData->runTestsuite = 0;
  data->modelData->nStatesArray = 15;
  data->modelData->nDiscreteReal = 46;
  data->modelData->nVariablesRealArray = 297;
  data->modelData->nVariablesIntegerArray = 1;
  data->modelData->nVariablesBooleanArray = 6;
  data->modelData->nVariablesStringArray = 0;
  data->modelData->nParametersRealArray = 1331;
  data->modelData->nParametersIntegerArray = 383;
  data->modelData->nParametersBooleanArray = 289;
  data->modelData->nParametersStringArray = 86;
  data->modelData->nParametersReal = 1331;
  data->modelData->nParametersInteger = 383;
  data->modelData->nParametersBoolean = 289;
  data->modelData->nParametersString = 86;
  data->modelData->nAliasRealArray = 336;
  data->modelData->nAliasIntegerArray = 0;
  data->modelData->nAliasBooleanArray = 0;
  data->modelData->nAliasStringArray = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  data->modelData->nZeroCrossings = 2;
  data->modelData->nSamples = 1;
  data->modelData->nRelations = 2;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 3;
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 44;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 2943;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 2;
  data->modelData->nNonLinearSystems = 2;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 10;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  data->modelData->nDelayExpressions = 0;
  data->modelData->nBaseClocks = 0;
  data->modelData->nSpatialDistributions = 0;
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->nSetbVars = 0;
  data->modelData->nRelatedBoundaryConditions = 0;
  data->modelData->linearizationDumpLanguage = OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}


#if defined(__MINGW32__) || defined(_MSC_VER)

#if !defined(_UNICODE)
#define _UNICODE
#endif
#if !defined(UNICODE)
#define UNICODE
#endif

#include <windows.h>
char** omc_fixWindowsArgv(int argc, wchar_t **wargv)
{
  char** newargv;
  /* Support for non-ASCII characters
  * Read the unicode command line arguments and translate it to char*
  */
  newargv = (char**)malloc(argc*sizeof(char*));
  for (int i = 0; i < argc; i++) {
    newargv[i] = omc_wchar_to_multibyte_str(wargv[i]);
  }
  return newargv;
}

#define OMC_MAIN wmain
#define OMC_CHAR wchar_t
#define OMC_EXPORT __declspec(dllexport) extern

#else
#define omc_fixWindowsArgv(N, A) (A)
#define OMC_MAIN main
#define OMC_CHAR char
#define OMC_EXPORT extern
#endif

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
#if defined(OMC_DLL_MAIN_DEFINE)
OMC_EXPORT int omcDllMain(int argc, OMC_CHAR **argv)
#else
int OMC_MAIN(int argc, OMC_CHAR** argv)
#endif
{
  char** newargv = omc_fixWindowsArgv(argc, argv);
  /*
    Set the error functions to be used for simulation.
    The default value for them is 'functions' version. Change it here to 'simulation' versions
  */
  omc_assert = omc_assert_simulation;
  omc_assert_withEquationIndexes = omc_assert_simulation_withEquationIndexes;

  omc_assert_warning_withEquationIndexes = omc_assert_warning_simulation_withEquationIndexes;
  omc_assert_warning = omc_assert_warning_simulation;
  omc_terminate = omc_terminate_simulation;
  omc_throw = omc_throw_simulation;

  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    ForcedConvection_30s_setupDataStruc(&data, threadData);
    res = _main_initRuntimeAndSimulation(argc, newargv, &data, threadData);
    if(res == 0) {
      if (omc_flag[FLAG_MOO_OPTIMIZATION]) {
        res = _main_OptimizationRuntime(argc, newargv, &data, threadData);
      } else {
        res = _main_SimulationRuntime(argc, newargv, &data, threadData);
      }
    }
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  return res;
}

#ifdef __cplusplus
}
#endif


