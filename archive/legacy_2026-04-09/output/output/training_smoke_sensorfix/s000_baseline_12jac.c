/* Jacobians 12 */
#include "s000_baseline_model.h"
#include "s000_baseline_12jac.h"
#include "simulation/jacobian_util.h"
#include "util/omc_file.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 243
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[6] = (-dc.roo.irRadExc.J.SeedLSJac0[6]) * dc.roo.irRadExc.kOpaInv[6] / (dc.roo.irRadExc.kOpaInv[6] * dc.roo.irRadExc.rhoOpa[6])
*/
void s000_baseline_eqFunction_243(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,243};
  jacobian->tmpVars[0] /* dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[6] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[921]] /* dc.roo.irRadExc.kOpaInv[6] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[921]] /* dc.roo.irRadExc.kOpaInv[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[927]] /* dc.roo.irRadExc.rhoOpa[6] PARAM */)),"dc.roo.irRadExc.kOpaInv[6] * dc.roo.irRadExc.rhoOpa[6]");
  threadData->lastEquationSolved = 243;
}

/*
equation index: 244
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[1] = (-dc.roo.irRadExc.J.SeedLSJac0[1]) * dc.roo.irRadExc.kOpaInv[1] / (dc.roo.irRadExc.kOpaInv[1] * dc.roo.irRadExc.rhoOpa[1])
*/
void s000_baseline_eqFunction_244(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,244};
  jacobian->tmpVars[1] /* dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* dc.roo.irRadExc.kOpaInv[1] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* dc.roo.irRadExc.kOpaInv[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[922]] /* dc.roo.irRadExc.rhoOpa[1] PARAM */)),"dc.roo.irRadExc.kOpaInv[1] * dc.roo.irRadExc.rhoOpa[1]");
  threadData->lastEquationSolved = 244;
}

/*
equation index: 245
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[3] = (-dc.roo.irRadExc.J.SeedLSJac0[3]) * dc.roo.irRadExc.kOpaInv[3] / (dc.roo.irRadExc.kOpaInv[3] * dc.roo.irRadExc.rhoOpa[3])
*/
void s000_baseline_eqFunction_245(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,245};
  jacobian->tmpVars[2] /* dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[918]] /* dc.roo.irRadExc.kOpaInv[3] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[918]] /* dc.roo.irRadExc.kOpaInv[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[924]] /* dc.roo.irRadExc.rhoOpa[3] PARAM */)),"dc.roo.irRadExc.kOpaInv[3] * dc.roo.irRadExc.rhoOpa[3]");
  threadData->lastEquationSolved = 245;
}

/*
equation index: 246
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[4] = (-dc.roo.irRadExc.J.SeedLSJac0[4]) * dc.roo.irRadExc.kOpaInv[4] / (dc.roo.irRadExc.kOpaInv[4] * dc.roo.irRadExc.rhoOpa[4])
*/
void s000_baseline_eqFunction_246(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,246};
  jacobian->tmpVars[3] /* dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[4] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[919]] /* dc.roo.irRadExc.kOpaInv[4] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[919]] /* dc.roo.irRadExc.kOpaInv[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[925]] /* dc.roo.irRadExc.rhoOpa[4] PARAM */)),"dc.roo.irRadExc.kOpaInv[4] * dc.roo.irRadExc.rhoOpa[4]");
  threadData->lastEquationSolved = 246;
}

/*
equation index: 247
type: SIMPLE_ASSIGN
dc.roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] = ((-dc.roo.irRadExc.F[2,1]) * dc.roo.irRadExc.J.SeedLSJac0[2] - dc.roo.irRadExc.F[1,1] * dc.roo.irRadExc.J.SeedLSJac0[1] - dc.roo.irRadExc.F[3,1] * dc.roo.irRadExc.J.SeedLSJac0[3] - dc.roo.irRadExc.F[4,1] * dc.roo.irRadExc.J.SeedLSJac0[4] - dc.roo.irRadExc.F[6,1] * dc.roo.irRadExc.J.SeedLSJac0[6] - dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[1]) / dc.roo.irRadExc.F[5,1]
*/
void s000_baseline_eqFunction_247(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,247};
  jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */ = DIVISION(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[688]] /* dc.roo.irRadExc.F[2,1] PARAM */))) * (jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[682]] /* dc.roo.irRadExc.F[1,1] PARAM */)) * (jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[694]] /* dc.roo.irRadExc.F[3,1] PARAM */)) * (jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[700]] /* dc.roo.irRadExc.F[4,1] PARAM */)) * (jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[712]] /* dc.roo.irRadExc.F[6,1] PARAM */)) * (jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - jacobian->tmpVars[1] /* dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[706]] /* dc.roo.irRadExc.F[5,1] PARAM */),"dc.roo.irRadExc.F[5,1]");
  threadData->lastEquationSolved = 247;
}

/*
equation index: 248
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[2] = (-dc.roo.irRadExc.F[2,2]) * dc.roo.irRadExc.J.SeedLSJac0[2] - dc.roo.irRadExc.F[1,2] * dc.roo.irRadExc.J.SeedLSJac0[1] - dc.roo.irRadExc.F[3,2] * dc.roo.irRadExc.J.SeedLSJac0[3] - dc.roo.irRadExc.F[4,2] * dc.roo.irRadExc.J.SeedLSJac0[4] - dc.roo.irRadExc.F[6,2] * dc.roo.irRadExc.J.SeedLSJac0[6] - dc.roo.irRadExc.F[5,2] * dc.roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5]
*/
void s000_baseline_eqFunction_248(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,248};
  jacobian->tmpVars[5] /* dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[689]] /* dc.roo.irRadExc.F[2,2] PARAM */))) * (jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[683]] /* dc.roo.irRadExc.F[1,2] PARAM */)) * (jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[695]] /* dc.roo.irRadExc.F[3,2] PARAM */)) * (jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[701]] /* dc.roo.irRadExc.F[4,2] PARAM */)) * (jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[713]] /* dc.roo.irRadExc.F[6,2] PARAM */)) * (jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[707]] /* dc.roo.irRadExc.F[5,2] PARAM */)) * (jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 248;
}

/*
equation index: 249
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[5] = (-dc.roo.irRadExc.F[2,5]) * dc.roo.irRadExc.J.SeedLSJac0[2] - dc.roo.irRadExc.F[1,5] * dc.roo.irRadExc.J.SeedLSJac0[1] - dc.roo.irRadExc.F[3,5] * dc.roo.irRadExc.J.SeedLSJac0[3] - dc.roo.irRadExc.F[4,5] * dc.roo.irRadExc.J.SeedLSJac0[4] - dc.roo.irRadExc.F[6,5] * dc.roo.irRadExc.J.SeedLSJac0[6] - dc.roo.irRadExc.F[5,5] * dc.roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5]
*/
void s000_baseline_eqFunction_249(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,249};
  jacobian->tmpVars[6] /* dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[692]] /* dc.roo.irRadExc.F[2,5] PARAM */))) * (jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[686]] /* dc.roo.irRadExc.F[1,5] PARAM */)) * (jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[698]] /* dc.roo.irRadExc.F[3,5] PARAM */)) * (jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* dc.roo.irRadExc.F[4,5] PARAM */)) * (jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[716]] /* dc.roo.irRadExc.F[6,5] PARAM */)) * (jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[710]] /* dc.roo.irRadExc.F[5,5] PARAM */)) * (jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 249;
}

/*
equation index: 250
type: SIMPLE_ASSIGN
$res_LSJac0_1.$pDERLSJac0.dummyVarLSJac0 = ((-dc.roo.irRadExc.J.SeedLSJac0[2]) - dc.roo.irRadExc.rhoOpa[2] * dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[2]) * dc.roo.irRadExc.kOpaInv[2]
*/
void s000_baseline_eqFunction_250(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,250};
  jacobian->resultVars[0] /* $res_LSJac0_1.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[923]] /* dc.roo.irRadExc.rhoOpa[2] PARAM */)) * (jacobian->tmpVars[5] /* dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[917]] /* dc.roo.irRadExc.kOpaInv[2] PARAM */));
  threadData->lastEquationSolved = 250;
}

/*
equation index: 251
type: SIMPLE_ASSIGN
$res_LSJac0_2.$pDERLSJac0.dummyVarLSJac0 = ((-dc.roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5]) - dc.roo.irRadExc.rhoOpa[5] * dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[5]) * dc.roo.irRadExc.kOpaInv[5]
*/
void s000_baseline_eqFunction_251(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,251};
  jacobian->resultVars[1] /* $res_LSJac0_2.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[926]] /* dc.roo.irRadExc.rhoOpa[5] PARAM */)) * (jacobian->tmpVars[6] /* dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[920]] /* dc.roo.irRadExc.kOpaInv[5] PARAM */));
  threadData->lastEquationSolved = 251;
}

/*
equation index: 252
type: SIMPLE_ASSIGN
$res_LSJac0_3.$pDERLSJac0.dummyVarLSJac0 = (-dc.roo.irRadExc.F[2,6]) * dc.roo.irRadExc.J.SeedLSJac0[2] - dc.roo.irRadExc.F[1,6] * dc.roo.irRadExc.J.SeedLSJac0[1] - dc.roo.irRadExc.F[3,6] * dc.roo.irRadExc.J.SeedLSJac0[3] - dc.roo.irRadExc.F[4,6] * dc.roo.irRadExc.J.SeedLSJac0[4] - dc.roo.irRadExc.F[6,6] * dc.roo.irRadExc.J.SeedLSJac0[6] - dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[6] - dc.roo.irRadExc.F[5,6] * dc.roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5]
*/
void s000_baseline_eqFunction_252(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,252};
  jacobian->resultVars[2] /* $res_LSJac0_3.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[693]] /* dc.roo.irRadExc.F[2,6] PARAM */))) * (jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[687]] /* dc.roo.irRadExc.F[1,6] PARAM */)) * (jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[699]] /* dc.roo.irRadExc.F[3,6] PARAM */)) * (jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[705]] /* dc.roo.irRadExc.F[4,6] PARAM */)) * (jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[717]] /* dc.roo.irRadExc.F[6,6] PARAM */)) * (jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - jacobian->tmpVars[0] /* dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[6] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[711]] /* dc.roo.irRadExc.F[5,6] PARAM */)) * (jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 252;
}

/*
equation index: 253
type: SIMPLE_ASSIGN
$res_LSJac0_4.$pDERLSJac0.dummyVarLSJac0 = (-dc.roo.irRadExc.F[2,4]) * dc.roo.irRadExc.J.SeedLSJac0[2] - dc.roo.irRadExc.F[1,4] * dc.roo.irRadExc.J.SeedLSJac0[1] - dc.roo.irRadExc.F[3,4] * dc.roo.irRadExc.J.SeedLSJac0[3] - dc.roo.irRadExc.F[4,4] * dc.roo.irRadExc.J.SeedLSJac0[4] - dc.roo.irRadExc.F[6,4] * dc.roo.irRadExc.J.SeedLSJac0[6] - dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[4] - dc.roo.irRadExc.F[5,4] * dc.roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5]
*/
void s000_baseline_eqFunction_253(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,253};
  jacobian->resultVars[3] /* $res_LSJac0_4.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[691]] /* dc.roo.irRadExc.F[2,4] PARAM */))) * (jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[685]] /* dc.roo.irRadExc.F[1,4] PARAM */)) * (jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[697]] /* dc.roo.irRadExc.F[3,4] PARAM */)) * (jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[703]] /* dc.roo.irRadExc.F[4,4] PARAM */)) * (jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[715]] /* dc.roo.irRadExc.F[6,4] PARAM */)) * (jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - jacobian->tmpVars[3] /* dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[4] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[709]] /* dc.roo.irRadExc.F[5,4] PARAM */)) * (jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 253;
}

/*
equation index: 254
type: SIMPLE_ASSIGN
$res_LSJac0_5.$pDERLSJac0.dummyVarLSJac0 = (-dc.roo.irRadExc.F[2,3]) * dc.roo.irRadExc.J.SeedLSJac0[2] - dc.roo.irRadExc.F[1,3] * dc.roo.irRadExc.J.SeedLSJac0[1] - dc.roo.irRadExc.F[3,3] * dc.roo.irRadExc.J.SeedLSJac0[3] - dc.roo.irRadExc.F[4,3] * dc.roo.irRadExc.J.SeedLSJac0[4] - dc.roo.irRadExc.F[6,3] * dc.roo.irRadExc.J.SeedLSJac0[6] - dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[3] - dc.roo.irRadExc.F[5,3] * dc.roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5]
*/
void s000_baseline_eqFunction_254(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,254};
  jacobian->resultVars[4] /* $res_LSJac0_5.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[690]] /* dc.roo.irRadExc.F[2,3] PARAM */))) * (jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[684]] /* dc.roo.irRadExc.F[1,3] PARAM */)) * (jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[696]] /* dc.roo.irRadExc.F[3,3] PARAM */)) * (jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[702]] /* dc.roo.irRadExc.F[4,3] PARAM */)) * (jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[714]] /* dc.roo.irRadExc.F[6,3] PARAM */)) * (jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - jacobian->tmpVars[2] /* dc.roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[708]] /* dc.roo.irRadExc.F[5,3] PARAM */)) * (jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 254;
}

OMC_DISABLE_OPT
int s000_baseline_functionJacLSJac0_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = s000_baseline_INDEX_JAC_LSJac0;
  
  
  return 0;
}

int s000_baseline_functionJacLSJac0_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = s000_baseline_INDEX_JAC_LSJac0;
  
  static void (*const eqFunctions[12])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    s000_baseline_eqFunction_243,
    s000_baseline_eqFunction_244,
    s000_baseline_eqFunction_245,
    s000_baseline_eqFunction_246,
    s000_baseline_eqFunction_247,
    s000_baseline_eqFunction_248,
    s000_baseline_eqFunction_249,
    s000_baseline_eqFunction_250,
    s000_baseline_eqFunction_251,
    s000_baseline_eqFunction_252,
    s000_baseline_eqFunction_253,
    s000_baseline_eqFunction_254
  };
  
  for (int id = 0; id < 12; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 661
type: SIMPLE_ASSIGN
$cse1 = exp(-17.2799 - (-4102.99) / (-35.719 + dc.weaDat.weaBus.TWetBul))
*/
void s000_baseline_eqFunction_661(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,661};
  jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */ = exp(-17.2799 - (DIVISION(-4102.99,-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */),"-35.719 + dc.weaDat.weaBus.TWetBul")));
  threadData->lastEquationSolved = 661;
}

/*
equation index: 662
type: SIMPLE_ASSIGN
dc.weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac7.dummyVarNLSJac7 = 4.172134052434367 * dc.weaDat.pAtmSel.p * $cse1 * dc.weaDat.weaBus.TWetBul.SeedNLSJac7 / ((-35.719 + dc.weaDat.weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * dc.weaDat.pAtmSel.p * $cse1)) ^ 2.0
*/
void s000_baseline_eqFunction_662(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,662};
  modelica_real tmp0;
  tmp0 = (-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */)) * (-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1523]] /* dc.weaDat.pAtmSel.p PARAM */)) * (jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */)));
  jacobian->tmpVars[1] /* dc.weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = (4.172134052434367) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1523]] /* dc.weaDat.pAtmSel.p PARAM */)) * ((jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* dc.weaDat.weaBus.TWetBul.SeedNLSJac7 SEED_VAR */,(tmp0 * tmp0),"((-35.719 + dc.weaDat.weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * dc.weaDat.pAtmSel.p * $cse1)) ^ 2.0"))));
  threadData->lastEquationSolved = 662;
}

/*
equation index: 663
type: SIMPLE_ASSIGN
dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac7.dummyVarNLSJac7 = (1.0 - dc.weaDat.tWetBul_TDryBulXi.XiDryBul) * dc.weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac7.dummyVarNLSJac7 / (1.0 - dc.weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void s000_baseline_eqFunction_663(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,663};
  modelica_real tmp1;
  tmp1 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* dc.weaDat.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[2] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[1] /* dc.weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */,(tmp1 * tmp1),"(1.0 - dc.weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 663;
}

/*
equation index: 664
type: SIMPLE_ASSIGN
$res_NLSJac7_1.$pDERNLSJac7.dummyVarNLSJac7 = (-2324.0) * (273.15 - dc.weaDat.weaBus.TWetBul) * dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac7.dummyVarNLSJac7 + (-2.5010145e6) * dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac7.dummyVarNLSJac7 - dc.weaDat.weaBus.TWetBul.SeedNLSJac7 * (1006.0 * (1.0 - dc.weaDat.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (dc.weaDat.tWetBul_TDryBulXi.XiDryBul - dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn))
*/
void s000_baseline_eqFunction_664(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,664};
  jacobian->resultVars[0] /* $res_NLSJac7_1.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */)) * (jacobian->tmpVars[2] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[2] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* dc.weaDat.weaBus.TWetBul.SeedNLSJac7 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 664;
}

OMC_DISABLE_OPT
int s000_baseline_functionJacNLSJac7_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = s000_baseline_INDEX_JAC_NLSJac7;
  
  
  return 0;
}

int s000_baseline_functionJacNLSJac7_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = s000_baseline_INDEX_JAC_NLSJac7;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    s000_baseline_eqFunction_661,
    s000_baseline_eqFunction_662,
    s000_baseline_eqFunction_663,
    s000_baseline_eqFunction_664
  };
  
  for (int id = 0; id < 4; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1178
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[6] = (-dc.roo.irRadExc.J.SeedLSJac8[6]) * dc.roo.irRadExc.kOpaInv[6] / (dc.roo.irRadExc.kOpaInv[6] * dc.roo.irRadExc.rhoOpa[6])
*/
void s000_baseline_eqFunction_1178(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1178};
  jacobian->tmpVars[0] /* dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[6] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac8[6] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[921]] /* dc.roo.irRadExc.kOpaInv[6] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[921]] /* dc.roo.irRadExc.kOpaInv[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[927]] /* dc.roo.irRadExc.rhoOpa[6] PARAM */)),"dc.roo.irRadExc.kOpaInv[6] * dc.roo.irRadExc.rhoOpa[6]");
  threadData->lastEquationSolved = 1178;
}

/*
equation index: 1179
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[1] = (-dc.roo.irRadExc.J.SeedLSJac8[1]) * dc.roo.irRadExc.kOpaInv[1] / (dc.roo.irRadExc.kOpaInv[1] * dc.roo.irRadExc.rhoOpa[1])
*/
void s000_baseline_eqFunction_1179(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1179};
  jacobian->tmpVars[1] /* dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[1] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac8[1] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* dc.roo.irRadExc.kOpaInv[1] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* dc.roo.irRadExc.kOpaInv[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[922]] /* dc.roo.irRadExc.rhoOpa[1] PARAM */)),"dc.roo.irRadExc.kOpaInv[1] * dc.roo.irRadExc.rhoOpa[1]");
  threadData->lastEquationSolved = 1179;
}

/*
equation index: 1180
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[3] = (-dc.roo.irRadExc.J.SeedLSJac8[3]) * dc.roo.irRadExc.kOpaInv[3] / (dc.roo.irRadExc.kOpaInv[3] * dc.roo.irRadExc.rhoOpa[3])
*/
void s000_baseline_eqFunction_1180(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1180};
  jacobian->tmpVars[2] /* dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[3] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac8[3] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[918]] /* dc.roo.irRadExc.kOpaInv[3] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[918]] /* dc.roo.irRadExc.kOpaInv[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[924]] /* dc.roo.irRadExc.rhoOpa[3] PARAM */)),"dc.roo.irRadExc.kOpaInv[3] * dc.roo.irRadExc.rhoOpa[3]");
  threadData->lastEquationSolved = 1180;
}

/*
equation index: 1181
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[4] = (-dc.roo.irRadExc.J.SeedLSJac8[4]) * dc.roo.irRadExc.kOpaInv[4] / (dc.roo.irRadExc.kOpaInv[4] * dc.roo.irRadExc.rhoOpa[4])
*/
void s000_baseline_eqFunction_1181(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1181};
  jacobian->tmpVars[3] /* dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[4] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac8[4] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[919]] /* dc.roo.irRadExc.kOpaInv[4] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[919]] /* dc.roo.irRadExc.kOpaInv[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[925]] /* dc.roo.irRadExc.rhoOpa[4] PARAM */)),"dc.roo.irRadExc.kOpaInv[4] * dc.roo.irRadExc.rhoOpa[4]");
  threadData->lastEquationSolved = 1181;
}

/*
equation index: 1182
type: SIMPLE_ASSIGN
dc.roo.irRadExc.J.$pDERLSJac8.dummyVarLSJac8[5] = ((-dc.roo.irRadExc.F[2,1]) * dc.roo.irRadExc.J.SeedLSJac8[2] - dc.roo.irRadExc.F[1,1] * dc.roo.irRadExc.J.SeedLSJac8[1] - dc.roo.irRadExc.F[3,1] * dc.roo.irRadExc.J.SeedLSJac8[3] - dc.roo.irRadExc.F[4,1] * dc.roo.irRadExc.J.SeedLSJac8[4] - dc.roo.irRadExc.F[6,1] * dc.roo.irRadExc.J.SeedLSJac8[6] - dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[1]) / dc.roo.irRadExc.F[5,1]
*/
void s000_baseline_eqFunction_1182(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,1182};
  jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac8.dummyVarLSJac8[5] JACOBIAN_TMP_VAR */ = DIVISION(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[688]] /* dc.roo.irRadExc.F[2,1] PARAM */))) * (jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac8[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[682]] /* dc.roo.irRadExc.F[1,1] PARAM */)) * (jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac8[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[694]] /* dc.roo.irRadExc.F[3,1] PARAM */)) * (jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac8[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[700]] /* dc.roo.irRadExc.F[4,1] PARAM */)) * (jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac8[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[712]] /* dc.roo.irRadExc.F[6,1] PARAM */)) * (jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac8[6] SEED_VAR */)) - jacobian->tmpVars[1] /* dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[1] JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[706]] /* dc.roo.irRadExc.F[5,1] PARAM */),"dc.roo.irRadExc.F[5,1]");
  threadData->lastEquationSolved = 1182;
}

/*
equation index: 1183
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[2] = (-dc.roo.irRadExc.F[2,2]) * dc.roo.irRadExc.J.SeedLSJac8[2] - dc.roo.irRadExc.F[1,2] * dc.roo.irRadExc.J.SeedLSJac8[1] - dc.roo.irRadExc.F[3,2] * dc.roo.irRadExc.J.SeedLSJac8[3] - dc.roo.irRadExc.F[4,2] * dc.roo.irRadExc.J.SeedLSJac8[4] - dc.roo.irRadExc.F[6,2] * dc.roo.irRadExc.J.SeedLSJac8[6] - dc.roo.irRadExc.F[5,2] * dc.roo.irRadExc.J.$pDERLSJac8.dummyVarLSJac8[5]
*/
void s000_baseline_eqFunction_1183(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,1183};
  jacobian->tmpVars[5] /* dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[2] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[689]] /* dc.roo.irRadExc.F[2,2] PARAM */))) * (jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac8[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[683]] /* dc.roo.irRadExc.F[1,2] PARAM */)) * (jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac8[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[695]] /* dc.roo.irRadExc.F[3,2] PARAM */)) * (jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac8[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[701]] /* dc.roo.irRadExc.F[4,2] PARAM */)) * (jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac8[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[713]] /* dc.roo.irRadExc.F[6,2] PARAM */)) * (jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac8[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[707]] /* dc.roo.irRadExc.F[5,2] PARAM */)) * (jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac8.dummyVarLSJac8[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1183;
}

/*
equation index: 1184
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[5] = (-dc.roo.irRadExc.F[2,5]) * dc.roo.irRadExc.J.SeedLSJac8[2] - dc.roo.irRadExc.F[1,5] * dc.roo.irRadExc.J.SeedLSJac8[1] - dc.roo.irRadExc.F[3,5] * dc.roo.irRadExc.J.SeedLSJac8[3] - dc.roo.irRadExc.F[4,5] * dc.roo.irRadExc.J.SeedLSJac8[4] - dc.roo.irRadExc.F[6,5] * dc.roo.irRadExc.J.SeedLSJac8[6] - dc.roo.irRadExc.F[5,5] * dc.roo.irRadExc.J.$pDERLSJac8.dummyVarLSJac8[5]
*/
void s000_baseline_eqFunction_1184(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,1184};
  jacobian->tmpVars[6] /* dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[5] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[692]] /* dc.roo.irRadExc.F[2,5] PARAM */))) * (jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac8[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[686]] /* dc.roo.irRadExc.F[1,5] PARAM */)) * (jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac8[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[698]] /* dc.roo.irRadExc.F[3,5] PARAM */)) * (jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac8[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* dc.roo.irRadExc.F[4,5] PARAM */)) * (jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac8[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[716]] /* dc.roo.irRadExc.F[6,5] PARAM */)) * (jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac8[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[710]] /* dc.roo.irRadExc.F[5,5] PARAM */)) * (jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac8.dummyVarLSJac8[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1184;
}

/*
equation index: 1185
type: SIMPLE_ASSIGN
$res_LSJac8_1.$pDERLSJac8.dummyVarLSJac8 = ((-dc.roo.irRadExc.J.SeedLSJac8[2]) - dc.roo.irRadExc.rhoOpa[2] * dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[2]) * dc.roo.irRadExc.kOpaInv[2]
*/
void s000_baseline_eqFunction_1185(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,1185};
  jacobian->resultVars[0] /* $res_LSJac8_1.$pDERLSJac8.dummyVarLSJac8 JACOBIAN_VAR */ = ((-jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac8[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[923]] /* dc.roo.irRadExc.rhoOpa[2] PARAM */)) * (jacobian->tmpVars[5] /* dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[2] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[917]] /* dc.roo.irRadExc.kOpaInv[2] PARAM */));
  threadData->lastEquationSolved = 1185;
}

/*
equation index: 1186
type: SIMPLE_ASSIGN
$res_LSJac8_2.$pDERLSJac8.dummyVarLSJac8 = ((-dc.roo.irRadExc.J.$pDERLSJac8.dummyVarLSJac8[5]) - dc.roo.irRadExc.rhoOpa[5] * dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[5]) * dc.roo.irRadExc.kOpaInv[5]
*/
void s000_baseline_eqFunction_1186(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,1186};
  jacobian->resultVars[1] /* $res_LSJac8_2.$pDERLSJac8.dummyVarLSJac8 JACOBIAN_VAR */ = ((-jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac8.dummyVarLSJac8[5] JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[926]] /* dc.roo.irRadExc.rhoOpa[5] PARAM */)) * (jacobian->tmpVars[6] /* dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[5] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[920]] /* dc.roo.irRadExc.kOpaInv[5] PARAM */));
  threadData->lastEquationSolved = 1186;
}

/*
equation index: 1187
type: SIMPLE_ASSIGN
$res_LSJac8_3.$pDERLSJac8.dummyVarLSJac8 = (-dc.roo.irRadExc.F[2,6]) * dc.roo.irRadExc.J.SeedLSJac8[2] - dc.roo.irRadExc.F[1,6] * dc.roo.irRadExc.J.SeedLSJac8[1] - dc.roo.irRadExc.F[3,6] * dc.roo.irRadExc.J.SeedLSJac8[3] - dc.roo.irRadExc.F[4,6] * dc.roo.irRadExc.J.SeedLSJac8[4] - dc.roo.irRadExc.F[6,6] * dc.roo.irRadExc.J.SeedLSJac8[6] - dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[6] - dc.roo.irRadExc.F[5,6] * dc.roo.irRadExc.J.$pDERLSJac8.dummyVarLSJac8[5]
*/
void s000_baseline_eqFunction_1187(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,1187};
  jacobian->resultVars[2] /* $res_LSJac8_3.$pDERLSJac8.dummyVarLSJac8 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[693]] /* dc.roo.irRadExc.F[2,6] PARAM */))) * (jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac8[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[687]] /* dc.roo.irRadExc.F[1,6] PARAM */)) * (jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac8[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[699]] /* dc.roo.irRadExc.F[3,6] PARAM */)) * (jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac8[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[705]] /* dc.roo.irRadExc.F[4,6] PARAM */)) * (jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac8[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[717]] /* dc.roo.irRadExc.F[6,6] PARAM */)) * (jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac8[6] SEED_VAR */)) - jacobian->tmpVars[0] /* dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[6] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[711]] /* dc.roo.irRadExc.F[5,6] PARAM */)) * (jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac8.dummyVarLSJac8[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1187;
}

/*
equation index: 1188
type: SIMPLE_ASSIGN
$res_LSJac8_4.$pDERLSJac8.dummyVarLSJac8 = (-dc.roo.irRadExc.F[2,4]) * dc.roo.irRadExc.J.SeedLSJac8[2] - dc.roo.irRadExc.F[1,4] * dc.roo.irRadExc.J.SeedLSJac8[1] - dc.roo.irRadExc.F[3,4] * dc.roo.irRadExc.J.SeedLSJac8[3] - dc.roo.irRadExc.F[4,4] * dc.roo.irRadExc.J.SeedLSJac8[4] - dc.roo.irRadExc.F[6,4] * dc.roo.irRadExc.J.SeedLSJac8[6] - dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[4] - dc.roo.irRadExc.F[5,4] * dc.roo.irRadExc.J.$pDERLSJac8.dummyVarLSJac8[5]
*/
void s000_baseline_eqFunction_1188(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,1188};
  jacobian->resultVars[3] /* $res_LSJac8_4.$pDERLSJac8.dummyVarLSJac8 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[691]] /* dc.roo.irRadExc.F[2,4] PARAM */))) * (jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac8[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[685]] /* dc.roo.irRadExc.F[1,4] PARAM */)) * (jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac8[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[697]] /* dc.roo.irRadExc.F[3,4] PARAM */)) * (jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac8[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[703]] /* dc.roo.irRadExc.F[4,4] PARAM */)) * (jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac8[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[715]] /* dc.roo.irRadExc.F[6,4] PARAM */)) * (jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac8[6] SEED_VAR */)) - jacobian->tmpVars[3] /* dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[4] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[709]] /* dc.roo.irRadExc.F[5,4] PARAM */)) * (jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac8.dummyVarLSJac8[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1188;
}

/*
equation index: 1189
type: SIMPLE_ASSIGN
$res_LSJac8_5.$pDERLSJac8.dummyVarLSJac8 = (-dc.roo.irRadExc.F[2,3]) * dc.roo.irRadExc.J.SeedLSJac8[2] - dc.roo.irRadExc.F[1,3] * dc.roo.irRadExc.J.SeedLSJac8[1] - dc.roo.irRadExc.F[3,3] * dc.roo.irRadExc.J.SeedLSJac8[3] - dc.roo.irRadExc.F[4,3] * dc.roo.irRadExc.J.SeedLSJac8[4] - dc.roo.irRadExc.F[6,3] * dc.roo.irRadExc.J.SeedLSJac8[6] - dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[3] - dc.roo.irRadExc.F[5,3] * dc.roo.irRadExc.J.$pDERLSJac8.dummyVarLSJac8[5]
*/
void s000_baseline_eqFunction_1189(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,1189};
  jacobian->resultVars[4] /* $res_LSJac8_5.$pDERLSJac8.dummyVarLSJac8 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[690]] /* dc.roo.irRadExc.F[2,3] PARAM */))) * (jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac8[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[684]] /* dc.roo.irRadExc.F[1,3] PARAM */)) * (jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac8[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[696]] /* dc.roo.irRadExc.F[3,3] PARAM */)) * (jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac8[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[702]] /* dc.roo.irRadExc.F[4,3] PARAM */)) * (jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac8[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[714]] /* dc.roo.irRadExc.F[6,3] PARAM */)) * (jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac8[6] SEED_VAR */)) - jacobian->tmpVars[2] /* dc.roo.irRadExc.G.$pDERLSJac8.dummyVarLSJac8[3] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[708]] /* dc.roo.irRadExc.F[5,3] PARAM */)) * (jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac8.dummyVarLSJac8[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1189;
}

OMC_DISABLE_OPT
int s000_baseline_functionJacLSJac8_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = s000_baseline_INDEX_JAC_LSJac8;
  
  
  return 0;
}

int s000_baseline_functionJacLSJac8_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = s000_baseline_INDEX_JAC_LSJac8;
  
  static void (*const eqFunctions[12])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    s000_baseline_eqFunction_1178,
    s000_baseline_eqFunction_1179,
    s000_baseline_eqFunction_1180,
    s000_baseline_eqFunction_1181,
    s000_baseline_eqFunction_1182,
    s000_baseline_eqFunction_1183,
    s000_baseline_eqFunction_1184,
    s000_baseline_eqFunction_1185,
    s000_baseline_eqFunction_1186,
    s000_baseline_eqFunction_1187,
    s000_baseline_eqFunction_1188,
    s000_baseline_eqFunction_1189
  };
  
  for (int id = 0; id < 12; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1590
type: SIMPLE_ASSIGN
$cse2 = exp(-17.2799 - (-4102.99) / (-35.719 + dc.weaDat.weaBus.TWetBul))
*/
void s000_baseline_eqFunction_1590(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1590};
  jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */ = exp(-17.2799 - (DIVISION(-4102.99,-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */),"-35.719 + dc.weaDat.weaBus.TWetBul")));
  threadData->lastEquationSolved = 1590;
}

/*
equation index: 1591
type: SIMPLE_ASSIGN
dc.weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac9.dummyVarNLSJac9 = 4.172134052434367 * dc.weaDat.pAtmSel.p * $cse2 * dc.weaDat.weaBus.TWetBul.SeedNLSJac9 / ((-35.719 + dc.weaDat.weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * dc.weaDat.pAtmSel.p * $cse2)) ^ 2.0
*/
void s000_baseline_eqFunction_1591(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1591};
  modelica_real tmp2;
  tmp2 = (-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */)) * (-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1523]] /* dc.weaDat.pAtmSel.p PARAM */)) * (jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */)));
  jacobian->tmpVars[1] /* dc.weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = (4.172134052434367) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1523]] /* dc.weaDat.pAtmSel.p PARAM */)) * ((jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* dc.weaDat.weaBus.TWetBul.SeedNLSJac9 SEED_VAR */,(tmp2 * tmp2),"((-35.719 + dc.weaDat.weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * dc.weaDat.pAtmSel.p * $cse2)) ^ 2.0"))));
  threadData->lastEquationSolved = 1591;
}

/*
equation index: 1592
type: SIMPLE_ASSIGN
dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac9.dummyVarNLSJac9 = (1.0 - dc.weaDat.tWetBul_TDryBulXi.XiDryBul) * dc.weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac9.dummyVarNLSJac9 / (1.0 - dc.weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void s000_baseline_eqFunction_1592(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1592};
  modelica_real tmp3;
  tmp3 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* dc.weaDat.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[2] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[1] /* dc.weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */,(tmp3 * tmp3),"(1.0 - dc.weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 1592;
}

/*
equation index: 1593
type: SIMPLE_ASSIGN
$res_NLSJac9_1.$pDERNLSJac9.dummyVarNLSJac9 = (-2324.0) * (273.15 - dc.weaDat.weaBus.TWetBul) * dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac9.dummyVarNLSJac9 + (-2.5010145e6) * dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac9.dummyVarNLSJac9 - dc.weaDat.weaBus.TWetBul.SeedNLSJac9 * (1006.0 * (1.0 - dc.weaDat.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (dc.weaDat.tWetBul_TDryBulXi.XiDryBul - dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn))
*/
void s000_baseline_eqFunction_1593(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1593};
  jacobian->resultVars[0] /* $res_NLSJac9_1.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */)) * (jacobian->tmpVars[2] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[2] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* dc.weaDat.weaBus.TWetBul.SeedNLSJac9 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 1593;
}

OMC_DISABLE_OPT
int s000_baseline_functionJacNLSJac9_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = s000_baseline_INDEX_JAC_NLSJac9;
  
  
  return 0;
}

int s000_baseline_functionJacNLSJac9_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = s000_baseline_INDEX_JAC_NLSJac9;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    s000_baseline_eqFunction_1590,
    s000_baseline_eqFunction_1591,
    s000_baseline_eqFunction_1592,
    s000_baseline_eqFunction_1593
  };
  
  for (int id = 0; id < 4; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1984
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[6] = (-dc.roo.irRadExc.J.SeedLSJac10[6]) * dc.roo.irRadExc.kOpaInv[6] / (dc.roo.irRadExc.kOpaInv[6] * dc.roo.irRadExc.rhoOpa[6])
*/
void s000_baseline_eqFunction_1984(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1984};
  jacobian->tmpVars[0] /* dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[6] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac10[6] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[921]] /* dc.roo.irRadExc.kOpaInv[6] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[921]] /* dc.roo.irRadExc.kOpaInv[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[927]] /* dc.roo.irRadExc.rhoOpa[6] PARAM */)),"dc.roo.irRadExc.kOpaInv[6] * dc.roo.irRadExc.rhoOpa[6]");
  threadData->lastEquationSolved = 1984;
}

/*
equation index: 1985
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[1] = (-dc.roo.irRadExc.J.SeedLSJac10[1]) * dc.roo.irRadExc.kOpaInv[1] / (dc.roo.irRadExc.kOpaInv[1] * dc.roo.irRadExc.rhoOpa[1])
*/
void s000_baseline_eqFunction_1985(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1985};
  jacobian->tmpVars[1] /* dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[1] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac10[1] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* dc.roo.irRadExc.kOpaInv[1] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* dc.roo.irRadExc.kOpaInv[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[922]] /* dc.roo.irRadExc.rhoOpa[1] PARAM */)),"dc.roo.irRadExc.kOpaInv[1] * dc.roo.irRadExc.rhoOpa[1]");
  threadData->lastEquationSolved = 1985;
}

/*
equation index: 1986
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[4] = (-dc.roo.irRadExc.J.SeedLSJac10[4]) * dc.roo.irRadExc.kOpaInv[4] / (dc.roo.irRadExc.kOpaInv[4] * dc.roo.irRadExc.rhoOpa[4])
*/
void s000_baseline_eqFunction_1986(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1986};
  jacobian->tmpVars[2] /* dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[4] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac10[4] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[919]] /* dc.roo.irRadExc.kOpaInv[4] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[919]] /* dc.roo.irRadExc.kOpaInv[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[925]] /* dc.roo.irRadExc.rhoOpa[4] PARAM */)),"dc.roo.irRadExc.kOpaInv[4] * dc.roo.irRadExc.rhoOpa[4]");
  threadData->lastEquationSolved = 1986;
}

/*
equation index: 1987
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[5] = (-dc.roo.irRadExc.J.SeedLSJac10[5]) * dc.roo.irRadExc.kOpaInv[5] / (dc.roo.irRadExc.kOpaInv[5] * dc.roo.irRadExc.rhoOpa[5])
*/
void s000_baseline_eqFunction_1987(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1987};
  jacobian->tmpVars[3] /* dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[5] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac10[5] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[920]] /* dc.roo.irRadExc.kOpaInv[5] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[920]] /* dc.roo.irRadExc.kOpaInv[5] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[926]] /* dc.roo.irRadExc.rhoOpa[5] PARAM */)),"dc.roo.irRadExc.kOpaInv[5] * dc.roo.irRadExc.rhoOpa[5]");
  threadData->lastEquationSolved = 1987;
}

/*
equation index: 1988
type: SIMPLE_ASSIGN
dc.roo.irRadExc.J.$pDERLSJac10.dummyVarLSJac10[3] = ((-dc.roo.irRadExc.F[2,1]) * dc.roo.irRadExc.J.SeedLSJac10[2] - dc.roo.irRadExc.F[1,1] * dc.roo.irRadExc.J.SeedLSJac10[1] - dc.roo.irRadExc.F[4,1] * dc.roo.irRadExc.J.SeedLSJac10[4] - dc.roo.irRadExc.F[6,1] * dc.roo.irRadExc.J.SeedLSJac10[6] - dc.roo.irRadExc.F[5,1] * dc.roo.irRadExc.J.SeedLSJac10[5] - dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[1]) / dc.roo.irRadExc.F[3,1]
*/
void s000_baseline_eqFunction_1988(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,1988};
  jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac10.dummyVarLSJac10[3] JACOBIAN_TMP_VAR */ = DIVISION(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[688]] /* dc.roo.irRadExc.F[2,1] PARAM */))) * (jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac10[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[682]] /* dc.roo.irRadExc.F[1,1] PARAM */)) * (jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac10[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[700]] /* dc.roo.irRadExc.F[4,1] PARAM */)) * (jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac10[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[712]] /* dc.roo.irRadExc.F[6,1] PARAM */)) * (jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac10[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[706]] /* dc.roo.irRadExc.F[5,1] PARAM */)) * (jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac10[5] SEED_VAR */)) - jacobian->tmpVars[1] /* dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[1] JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[694]] /* dc.roo.irRadExc.F[3,1] PARAM */),"dc.roo.irRadExc.F[3,1]");
  threadData->lastEquationSolved = 1988;
}

/*
equation index: 1989
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[3] = (-dc.roo.irRadExc.F[2,3]) * dc.roo.irRadExc.J.SeedLSJac10[2] - dc.roo.irRadExc.F[1,3] * dc.roo.irRadExc.J.SeedLSJac10[1] - dc.roo.irRadExc.F[3,3] * dc.roo.irRadExc.J.$pDERLSJac10.dummyVarLSJac10[3] - dc.roo.irRadExc.F[4,3] * dc.roo.irRadExc.J.SeedLSJac10[4] - dc.roo.irRadExc.F[6,3] * dc.roo.irRadExc.J.SeedLSJac10[6] - dc.roo.irRadExc.F[5,3] * dc.roo.irRadExc.J.SeedLSJac10[5]
*/
void s000_baseline_eqFunction_1989(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,1989};
  jacobian->tmpVars[5] /* dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[3] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[690]] /* dc.roo.irRadExc.F[2,3] PARAM */))) * (jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac10[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[684]] /* dc.roo.irRadExc.F[1,3] PARAM */)) * (jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac10[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[696]] /* dc.roo.irRadExc.F[3,3] PARAM */)) * (jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac10.dummyVarLSJac10[3] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[702]] /* dc.roo.irRadExc.F[4,3] PARAM */)) * (jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac10[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[714]] /* dc.roo.irRadExc.F[6,3] PARAM */)) * (jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac10[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[708]] /* dc.roo.irRadExc.F[5,3] PARAM */)) * (jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac10[5] SEED_VAR */));
  threadData->lastEquationSolved = 1989;
}

/*
equation index: 1990
type: SIMPLE_ASSIGN
dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[2] = (-dc.roo.irRadExc.F[2,2]) * dc.roo.irRadExc.J.SeedLSJac10[2] - dc.roo.irRadExc.F[1,2] * dc.roo.irRadExc.J.SeedLSJac10[1] - dc.roo.irRadExc.F[3,2] * dc.roo.irRadExc.J.$pDERLSJac10.dummyVarLSJac10[3] - dc.roo.irRadExc.F[4,2] * dc.roo.irRadExc.J.SeedLSJac10[4] - dc.roo.irRadExc.F[6,2] * dc.roo.irRadExc.J.SeedLSJac10[6] - dc.roo.irRadExc.F[5,2] * dc.roo.irRadExc.J.SeedLSJac10[5]
*/
void s000_baseline_eqFunction_1990(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,1990};
  jacobian->tmpVars[6] /* dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[2] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[689]] /* dc.roo.irRadExc.F[2,2] PARAM */))) * (jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac10[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[683]] /* dc.roo.irRadExc.F[1,2] PARAM */)) * (jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac10[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[695]] /* dc.roo.irRadExc.F[3,2] PARAM */)) * (jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac10.dummyVarLSJac10[3] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[701]] /* dc.roo.irRadExc.F[4,2] PARAM */)) * (jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac10[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[713]] /* dc.roo.irRadExc.F[6,2] PARAM */)) * (jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac10[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[707]] /* dc.roo.irRadExc.F[5,2] PARAM */)) * (jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac10[5] SEED_VAR */));
  threadData->lastEquationSolved = 1990;
}

/*
equation index: 1991
type: SIMPLE_ASSIGN
$res_LSJac10_1.$pDERLSJac10.dummyVarLSJac10 = (-dc.roo.irRadExc.F[2,6]) * dc.roo.irRadExc.J.SeedLSJac10[2] - dc.roo.irRadExc.F[1,6] * dc.roo.irRadExc.J.SeedLSJac10[1] - dc.roo.irRadExc.F[3,6] * dc.roo.irRadExc.J.$pDERLSJac10.dummyVarLSJac10[3] - dc.roo.irRadExc.F[4,6] * dc.roo.irRadExc.J.SeedLSJac10[4] - dc.roo.irRadExc.F[6,6] * dc.roo.irRadExc.J.SeedLSJac10[6] - dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[6] - dc.roo.irRadExc.F[5,6] * dc.roo.irRadExc.J.SeedLSJac10[5]
*/
void s000_baseline_eqFunction_1991(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,1991};
  jacobian->resultVars[0] /* $res_LSJac10_1.$pDERLSJac10.dummyVarLSJac10 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[693]] /* dc.roo.irRadExc.F[2,6] PARAM */))) * (jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac10[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[687]] /* dc.roo.irRadExc.F[1,6] PARAM */)) * (jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac10[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[699]] /* dc.roo.irRadExc.F[3,6] PARAM */)) * (jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac10.dummyVarLSJac10[3] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[705]] /* dc.roo.irRadExc.F[4,6] PARAM */)) * (jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac10[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[717]] /* dc.roo.irRadExc.F[6,6] PARAM */)) * (jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac10[6] SEED_VAR */)) - jacobian->tmpVars[0] /* dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[6] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[711]] /* dc.roo.irRadExc.F[5,6] PARAM */)) * (jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac10[5] SEED_VAR */));
  threadData->lastEquationSolved = 1991;
}

/*
equation index: 1992
type: SIMPLE_ASSIGN
$res_LSJac10_2.$pDERLSJac10.dummyVarLSJac10 = ((-dc.roo.irRadExc.J.SeedLSJac10[2]) - dc.roo.irRadExc.rhoOpa[2] * dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[2]) * dc.roo.irRadExc.kOpaInv[2]
*/
void s000_baseline_eqFunction_1992(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,1992};
  jacobian->resultVars[1] /* $res_LSJac10_2.$pDERLSJac10.dummyVarLSJac10 JACOBIAN_VAR */ = ((-jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac10[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[923]] /* dc.roo.irRadExc.rhoOpa[2] PARAM */)) * (jacobian->tmpVars[6] /* dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[2] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[917]] /* dc.roo.irRadExc.kOpaInv[2] PARAM */));
  threadData->lastEquationSolved = 1992;
}

/*
equation index: 1993
type: SIMPLE_ASSIGN
$res_LSJac10_3.$pDERLSJac10.dummyVarLSJac10 = (-dc.roo.irRadExc.F[2,5]) * dc.roo.irRadExc.J.SeedLSJac10[2] - dc.roo.irRadExc.F[1,5] * dc.roo.irRadExc.J.SeedLSJac10[1] - dc.roo.irRadExc.F[3,5] * dc.roo.irRadExc.J.$pDERLSJac10.dummyVarLSJac10[3] - dc.roo.irRadExc.F[4,5] * dc.roo.irRadExc.J.SeedLSJac10[4] - dc.roo.irRadExc.F[6,5] * dc.roo.irRadExc.J.SeedLSJac10[6] - dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[5] - dc.roo.irRadExc.F[5,5] * dc.roo.irRadExc.J.SeedLSJac10[5]
*/
void s000_baseline_eqFunction_1993(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,1993};
  jacobian->resultVars[2] /* $res_LSJac10_3.$pDERLSJac10.dummyVarLSJac10 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[692]] /* dc.roo.irRadExc.F[2,5] PARAM */))) * (jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac10[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[686]] /* dc.roo.irRadExc.F[1,5] PARAM */)) * (jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac10[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[698]] /* dc.roo.irRadExc.F[3,5] PARAM */)) * (jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac10.dummyVarLSJac10[3] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* dc.roo.irRadExc.F[4,5] PARAM */)) * (jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac10[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[716]] /* dc.roo.irRadExc.F[6,5] PARAM */)) * (jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac10[6] SEED_VAR */)) - jacobian->tmpVars[3] /* dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[5] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[710]] /* dc.roo.irRadExc.F[5,5] PARAM */)) * (jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac10[5] SEED_VAR */));
  threadData->lastEquationSolved = 1993;
}

/*
equation index: 1994
type: SIMPLE_ASSIGN
$res_LSJac10_4.$pDERLSJac10.dummyVarLSJac10 = (-dc.roo.irRadExc.F[2,4]) * dc.roo.irRadExc.J.SeedLSJac10[2] - dc.roo.irRadExc.F[1,4] * dc.roo.irRadExc.J.SeedLSJac10[1] - dc.roo.irRadExc.F[3,4] * dc.roo.irRadExc.J.$pDERLSJac10.dummyVarLSJac10[3] - dc.roo.irRadExc.F[4,4] * dc.roo.irRadExc.J.SeedLSJac10[4] - dc.roo.irRadExc.F[6,4] * dc.roo.irRadExc.J.SeedLSJac10[6] - dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[4] - dc.roo.irRadExc.F[5,4] * dc.roo.irRadExc.J.SeedLSJac10[5]
*/
void s000_baseline_eqFunction_1994(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,1994};
  jacobian->resultVars[3] /* $res_LSJac10_4.$pDERLSJac10.dummyVarLSJac10 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[691]] /* dc.roo.irRadExc.F[2,4] PARAM */))) * (jacobian->seedVars[0] /* dc.roo.irRadExc.J.SeedLSJac10[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[685]] /* dc.roo.irRadExc.F[1,4] PARAM */)) * (jacobian->seedVars[3] /* dc.roo.irRadExc.J.SeedLSJac10[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[697]] /* dc.roo.irRadExc.F[3,4] PARAM */)) * (jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac10.dummyVarLSJac10[3] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[703]] /* dc.roo.irRadExc.F[4,4] PARAM */)) * (jacobian->seedVars[2] /* dc.roo.irRadExc.J.SeedLSJac10[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[715]] /* dc.roo.irRadExc.F[6,4] PARAM */)) * (jacobian->seedVars[4] /* dc.roo.irRadExc.J.SeedLSJac10[6] SEED_VAR */)) - jacobian->tmpVars[2] /* dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[4] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[709]] /* dc.roo.irRadExc.F[5,4] PARAM */)) * (jacobian->seedVars[1] /* dc.roo.irRadExc.J.SeedLSJac10[5] SEED_VAR */));
  threadData->lastEquationSolved = 1994;
}

/*
equation index: 1995
type: SIMPLE_ASSIGN
$res_LSJac10_5.$pDERLSJac10.dummyVarLSJac10 = ((-dc.roo.irRadExc.J.$pDERLSJac10.dummyVarLSJac10[3]) - dc.roo.irRadExc.rhoOpa[3] * dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[3]) * dc.roo.irRadExc.kOpaInv[3]
*/
void s000_baseline_eqFunction_1995(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,1995};
  jacobian->resultVars[4] /* $res_LSJac10_5.$pDERLSJac10.dummyVarLSJac10 JACOBIAN_VAR */ = ((-jacobian->tmpVars[4] /* dc.roo.irRadExc.J.$pDERLSJac10.dummyVarLSJac10[3] JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[924]] /* dc.roo.irRadExc.rhoOpa[3] PARAM */)) * (jacobian->tmpVars[5] /* dc.roo.irRadExc.G.$pDERLSJac10.dummyVarLSJac10[3] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[918]] /* dc.roo.irRadExc.kOpaInv[3] PARAM */));
  threadData->lastEquationSolved = 1995;
}

OMC_DISABLE_OPT
int s000_baseline_functionJacLSJac10_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = s000_baseline_INDEX_JAC_LSJac10;
  
  
  return 0;
}

int s000_baseline_functionJacLSJac10_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = s000_baseline_INDEX_JAC_LSJac10;
  
  static void (*const eqFunctions[12])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    s000_baseline_eqFunction_1984,
    s000_baseline_eqFunction_1985,
    s000_baseline_eqFunction_1986,
    s000_baseline_eqFunction_1987,
    s000_baseline_eqFunction_1988,
    s000_baseline_eqFunction_1989,
    s000_baseline_eqFunction_1990,
    s000_baseline_eqFunction_1991,
    s000_baseline_eqFunction_1992,
    s000_baseline_eqFunction_1993,
    s000_baseline_eqFunction_1994,
    s000_baseline_eqFunction_1995
  };
  
  for (int id = 0; id < 12; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 2204
type: SIMPLE_ASSIGN
$cse31 = exp(-17.2799 - (-4102.99) / (-35.719 + dc.weaDat.weaBus.TWetBul))
*/
void s000_baseline_eqFunction_2204(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,2204};
  jacobian->tmpVars[0] /* $cse31 JACOBIAN_TMP_VAR */ = exp(-17.2799 - (DIVISION(-4102.99,-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */),"-35.719 + dc.weaDat.weaBus.TWetBul")));
  threadData->lastEquationSolved = 2204;
}

/*
equation index: 2205
type: SIMPLE_ASSIGN
$cse16.$pDERNLSJac17.dummyVarNLSJac17 = (-4102.99) * $cse31 * dc.weaDat.weaBus.TWetBul.SeedNLSJac17 / (-35.719 + dc.weaDat.weaBus.TWetBul) ^ 2.0
*/
void s000_baseline_eqFunction_2205(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,2205};
  modelica_real tmp4;
  tmp4 = -35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */);
  jacobian->tmpVars[1] /* $cse16.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_TMP_VAR */ = (-4102.99) * ((jacobian->tmpVars[0] /* $cse31 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* dc.weaDat.weaBus.TWetBul.SeedNLSJac17 SEED_VAR */,(tmp4 * tmp4),"(-35.719 + dc.weaDat.weaBus.TWetBul) ^ 2.0")));
  threadData->lastEquationSolved = 2205;
}

/*
equation index: 2206
type: SIMPLE_ASSIGN
dc.weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac17.dummyVarNLSJac17 = (-0.0010168521133208628) * dc.weaDat.pAtmSel.p * $cse16.$pDERNLSJac17.dummyVarNLSJac17 / (-0.378035286922501 + 0.0016349032219037793 * dc.weaDat.pAtmSel.p * $cse16) ^ 2.0
*/
void s000_baseline_eqFunction_2206(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,2206};
  modelica_real tmp5;
  tmp5 = -0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1523]] /* dc.weaDat.pAtmSel.p PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* $cse16 variable */)));
  jacobian->tmpVars[2] /* dc.weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_TMP_VAR */ = (-0.0010168521133208628) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1523]] /* dc.weaDat.pAtmSel.p PARAM */)) * (DIVISION(jacobian->tmpVars[1] /* $cse16.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_TMP_VAR */,(tmp5 * tmp5),"(-0.378035286922501 + 0.0016349032219037793 * dc.weaDat.pAtmSel.p * $cse16) ^ 2.0")));
  threadData->lastEquationSolved = 2206;
}

/*
equation index: 2207
type: SIMPLE_ASSIGN
dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac17.dummyVarNLSJac17 = (1.0 - dc.weaDat.tWetBul_TDryBulXi.XiDryBul) * dc.weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac17.dummyVarNLSJac17 / (1.0 - dc.weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void s000_baseline_eqFunction_2207(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,2207};
  modelica_real tmp6;
  tmp6 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* dc.weaDat.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[3] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[2] /* dc.weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_TMP_VAR */,(tmp6 * tmp6),"(1.0 - dc.weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 2207;
}

/*
equation index: 2208
type: SIMPLE_ASSIGN
$res_NLSJac17_1.$pDERNLSJac17.dummyVarNLSJac17 = (-2324.0) * (273.15 - dc.weaDat.weaBus.TWetBul) * dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac17.dummyVarNLSJac17 + (-2.5010145e6) * dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac17.dummyVarNLSJac17 - dc.weaDat.weaBus.TWetBul.SeedNLSJac17 * (1006.0 * (1.0 - dc.weaDat.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (dc.weaDat.tWetBul_TDryBulXi.XiDryBul - dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn))
*/
void s000_baseline_eqFunction_2208(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,2208};
  jacobian->resultVars[0] /* $res_NLSJac17_1.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */)) * (jacobian->tmpVars[3] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[3] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* dc.weaDat.weaBus.TWetBul.SeedNLSJac17 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 2208;
}

OMC_DISABLE_OPT
int s000_baseline_functionJacNLSJac17_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = s000_baseline_INDEX_JAC_NLSJac17;
  
  
  return 0;
}

int s000_baseline_functionJacNLSJac17_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = s000_baseline_INDEX_JAC_NLSJac17;
  
  static void (*const eqFunctions[5])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    s000_baseline_eqFunction_2204,
    s000_baseline_eqFunction_2205,
    s000_baseline_eqFunction_2206,
    s000_baseline_eqFunction_2207,
    s000_baseline_eqFunction_2208
  };
  
  for (int id = 0; id < 5; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
int s000_baseline_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int s000_baseline_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int s000_baseline_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int s000_baseline_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int s000_baseline_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int s000_baseline_functionJacA_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = s000_baseline_INDEX_JAC_A;
  
  
  return 0;
}

int s000_baseline_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = s000_baseline_INDEX_JAC_A;
  
  
  return 0;
}

OMC_DISABLE_OPT
int s000_baseline_initialAnalyticJacobianLSJac0(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "s000_baseline_JacLSJac0.bin");
  
  initJacobian(jacobian, 5, 5, 12, s000_baseline_functionJacLSJac0_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(5, 25, 5);
  jacobian->availability = JACOBIAN_AVAILABLE;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 5+1, pFile, FALSE);
  if (count != 5+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 5+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 25, pFile, FALSE);
  if (count != 25) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 25, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 5);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 5);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 5);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 5);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1, 5);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int s000_baseline_initialAnalyticJacobianNLSJac7(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "s000_baseline_JacNLSJac7.bin");
  
  initJacobian(jacobian, 1, 1, 4, s000_baseline_functionJacNLSJac7_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 1);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int s000_baseline_initialAnalyticJacobianLSJac8(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "s000_baseline_JacLSJac8.bin");
  
  initJacobian(jacobian, 5, 5, 12, s000_baseline_functionJacLSJac8_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(5, 25, 5);
  jacobian->availability = JACOBIAN_AVAILABLE;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 5+1, pFile, FALSE);
  if (count != 5+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 5+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 25, pFile, FALSE);
  if (count != 25) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 25, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 5);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 5);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 5);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 5);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1, 5);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int s000_baseline_initialAnalyticJacobianNLSJac9(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "s000_baseline_JacNLSJac9.bin");
  
  initJacobian(jacobian, 1, 1, 4, s000_baseline_functionJacNLSJac9_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 1);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int s000_baseline_initialAnalyticJacobianLSJac10(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "s000_baseline_JacLSJac10.bin");
  
  initJacobian(jacobian, 5, 5, 12, s000_baseline_functionJacLSJac10_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(5, 25, 5);
  jacobian->availability = JACOBIAN_AVAILABLE;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 5+1, pFile, FALSE);
  if (count != 5+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 5+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 25, pFile, FALSE);
  if (count != 25) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 25, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 5);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 5);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 5);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 5);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1, 5);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int s000_baseline_initialAnalyticJacobianNLSJac17(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "s000_baseline_JacNLSJac17.bin");
  
  initJacobian(jacobian, 1, 1, 5, s000_baseline_functionJacNLSJac17_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 1);
  
  omc_fclose(pFile);
  
  return 0;
}
int s000_baseline_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int s000_baseline_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int s000_baseline_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int s000_baseline_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int s000_baseline_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
OMC_DISABLE_OPT
int s000_baseline_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "s000_baseline_JacA.bin");
  
  initJacobian(jacobian, 46, 46, 0, s000_baseline_functionJacA_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(46, 818, 45);
  jacobian->availability = JACOBIAN_ONLY_SPARSITY;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 46+1, pFile, FALSE);
  if (count != 46+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 46+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 818, pFile, FALSE);
  if (count != 818) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 818, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 46);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 46);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 46);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 46);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1, 46);
  /* color 6 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 6, 1, 46);
  /* color 7 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 7, 1, 46);
  /* color 8 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 8, 1, 46);
  /* color 9 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 9, 1, 46);
  /* color 10 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 10, 1, 46);
  /* color 11 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 11, 1, 46);
  /* color 12 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 12, 1, 46);
  /* color 13 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 13, 1, 46);
  /* color 14 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 14, 1, 46);
  /* color 15 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 15, 1, 46);
  /* color 16 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 16, 1, 46);
  /* color 17 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 17, 1, 46);
  /* color 18 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 18, 1, 46);
  /* color 19 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 19, 1, 46);
  /* color 20 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 20, 1, 46);
  /* color 21 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 21, 1, 46);
  /* color 22 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 22, 1, 46);
  /* color 23 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 23, 1, 46);
  /* color 24 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 24, 1, 46);
  /* color 25 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 25, 1, 46);
  /* color 26 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 26, 1, 46);
  /* color 27 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 27, 1, 46);
  /* color 28 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 28, 1, 46);
  /* color 29 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 29, 1, 46);
  /* color 30 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 30, 1, 46);
  /* color 31 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 31, 1, 46);
  /* color 32 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 32, 1, 46);
  /* color 33 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 33, 1, 46);
  /* color 34 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 34, 1, 46);
  /* color 35 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 35, 1, 46);
  /* color 36 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 36, 1, 46);
  /* color 37 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 37, 1, 46);
  /* color 38 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 38, 1, 46);
  /* color 39 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 39, 1, 46);
  /* color 40 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 40, 1, 46);
  /* color 41 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 41, 1, 46);
  /* color 42 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 42, 1, 46);
  /* color 43 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 43, 1, 46);
  /* color 44 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 44, 1, 46);
  /* color 45 with 2 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 45, 2, 46);
  
  omc_fclose(pFile);
  
  return 0;
}


