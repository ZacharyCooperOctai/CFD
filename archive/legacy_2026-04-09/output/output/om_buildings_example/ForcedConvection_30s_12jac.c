/* Jacobians 10 */
#include "ForcedConvection_30s_model.h"
#include "ForcedConvection_30s_12jac.h"
#include "simulation/jacobian_util.h"
#include "util/omc_file.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 151
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[1] = (-roo.irRadExc.J.SeedLSJac0[1]) * roo.irRadExc.kOpaInv[1] / (roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1])
*/
void ForcedConvection_30s_eqFunction_151(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,151};
  jacobian->tmpVars[0] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* roo.irRadExc.kOpaInv[1] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* roo.irRadExc.kOpaInv[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[743]] /* roo.irRadExc.rhoOpa[1] PARAM */)),"roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1]");
  threadData->lastEquationSolved = 151;
}

/*
equation index: 152
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[6] = (-roo.irRadExc.J.SeedLSJac0[6]) * roo.irRadExc.kOpaInv[6] / (roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6])
*/
void ForcedConvection_30s_eqFunction_152(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,152};
  jacobian->tmpVars[1] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[6] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[742]] /* roo.irRadExc.kOpaInv[6] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[742]] /* roo.irRadExc.kOpaInv[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[748]] /* roo.irRadExc.rhoOpa[6] PARAM */)),"roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6]");
  threadData->lastEquationSolved = 152;
}

/*
equation index: 153
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[4] = (-roo.irRadExc.J.SeedLSJac0[4]) * roo.irRadExc.kOpaInv[4] / (roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4])
*/
void ForcedConvection_30s_eqFunction_153(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,153};
  jacobian->tmpVars[2] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[4] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[740]] /* roo.irRadExc.kOpaInv[4] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[740]] /* roo.irRadExc.kOpaInv[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* roo.irRadExc.rhoOpa[4] PARAM */)),"roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4]");
  threadData->lastEquationSolved = 153;
}

/*
equation index: 154
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[2] = (-roo.irRadExc.J.SeedLSJac0[2]) * roo.irRadExc.kOpaInv[2] / (roo.irRadExc.kOpaInv[2] * roo.irRadExc.rhoOpa[2])
*/
void ForcedConvection_30s_eqFunction_154(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,154};
  jacobian->tmpVars[3] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* roo.irRadExc.kOpaInv[2] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* roo.irRadExc.kOpaInv[2] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[744]] /* roo.irRadExc.rhoOpa[2] PARAM */)),"roo.irRadExc.kOpaInv[2] * roo.irRadExc.rhoOpa[2]");
  threadData->lastEquationSolved = 154;
}

/*
equation index: 155
type: SIMPLE_ASSIGN
roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[3] = ((-roo.irRadExc.F[2,1]) * roo.irRadExc.J.SeedLSJac0[2] - roo.irRadExc.F[1,1] * roo.irRadExc.J.SeedLSJac0[1] - roo.irRadExc.F[4,1] * roo.irRadExc.J.SeedLSJac0[4] - roo.irRadExc.F[6,1] * roo.irRadExc.J.SeedLSJac0[6] - roo.irRadExc.F[5,1] * roo.irRadExc.J.SeedLSJac0[5] - roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[1]) / roo.irRadExc.F[3,1]
*/
void ForcedConvection_30s_eqFunction_155(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,155};
  jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */ = DIVISION(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* roo.irRadExc.F[2,1] PARAM */))) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* roo.irRadExc.F[1,1] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* roo.irRadExc.F[4,1] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* roo.irRadExc.F[6,1] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* roo.irRadExc.F[5,1] PARAM */)) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[5] SEED_VAR */)) - jacobian->tmpVars[0] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* roo.irRadExc.F[3,1] PARAM */),"roo.irRadExc.F[3,1]");
  threadData->lastEquationSolved = 155;
}

/*
equation index: 156
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[3] = (-roo.irRadExc.F[2,3]) * roo.irRadExc.J.SeedLSJac0[2] - roo.irRadExc.F[1,3] * roo.irRadExc.J.SeedLSJac0[1] - roo.irRadExc.F[3,3] * roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[3] - roo.irRadExc.F[4,3] * roo.irRadExc.J.SeedLSJac0[4] - roo.irRadExc.F[6,3] * roo.irRadExc.J.SeedLSJac0[6] - roo.irRadExc.F[5,3] * roo.irRadExc.J.SeedLSJac0[5]
*/
void ForcedConvection_30s_eqFunction_156(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,156};
  jacobian->tmpVars[5] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[511]] /* roo.irRadExc.F[2,3] PARAM */))) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* roo.irRadExc.F[1,3] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* roo.irRadExc.F[3,3] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* roo.irRadExc.F[4,3] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[535]] /* roo.irRadExc.F[6,3] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* roo.irRadExc.F[5,3] PARAM */)) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[5] SEED_VAR */));
  threadData->lastEquationSolved = 156;
}

/*
equation index: 157
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[5] = (-roo.irRadExc.F[2,5]) * roo.irRadExc.J.SeedLSJac0[2] - roo.irRadExc.F[1,5] * roo.irRadExc.J.SeedLSJac0[1] - roo.irRadExc.F[3,5] * roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[3] - roo.irRadExc.F[4,5] * roo.irRadExc.J.SeedLSJac0[4] - roo.irRadExc.F[6,5] * roo.irRadExc.J.SeedLSJac0[6] - roo.irRadExc.F[5,5] * roo.irRadExc.J.SeedLSJac0[5]
*/
void ForcedConvection_30s_eqFunction_157(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,157};
  jacobian->tmpVars[6] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* roo.irRadExc.F[2,5] PARAM */))) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* roo.irRadExc.F[1,5] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* roo.irRadExc.F[3,5] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* roo.irRadExc.F[4,5] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[537]] /* roo.irRadExc.F[6,5] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[531]] /* roo.irRadExc.F[5,5] PARAM */)) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[5] SEED_VAR */));
  threadData->lastEquationSolved = 157;
}

/*
equation index: 158
type: SIMPLE_ASSIGN
$res_LSJac0_1.$pDERLSJac0.dummyVarLSJac0 = ((-roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[3]) - roo.irRadExc.rhoOpa[3] * roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[3]) * roo.irRadExc.kOpaInv[3]
*/
void ForcedConvection_30s_eqFunction_158(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,158};
  jacobian->resultVars[0] /* $res_LSJac0_1.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[745]] /* roo.irRadExc.rhoOpa[3] PARAM */)) * (jacobian->tmpVars[5] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* roo.irRadExc.kOpaInv[3] PARAM */));
  threadData->lastEquationSolved = 158;
}

/*
equation index: 159
type: SIMPLE_ASSIGN
$res_LSJac0_2.$pDERLSJac0.dummyVarLSJac0 = (-roo.irRadExc.F[2,6]) * roo.irRadExc.J.SeedLSJac0[2] - roo.irRadExc.F[1,6] * roo.irRadExc.J.SeedLSJac0[1] - roo.irRadExc.F[3,6] * roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[3] - roo.irRadExc.F[4,6] * roo.irRadExc.J.SeedLSJac0[4] - roo.irRadExc.F[6,6] * roo.irRadExc.J.SeedLSJac0[6] - roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[6] - roo.irRadExc.F[5,6] * roo.irRadExc.J.SeedLSJac0[5]
*/
void ForcedConvection_30s_eqFunction_159(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,159};
  jacobian->resultVars[1] /* $res_LSJac0_2.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* roo.irRadExc.F[2,6] PARAM */))) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* roo.irRadExc.F[1,6] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* roo.irRadExc.F[3,6] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* roo.irRadExc.F[4,6] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* roo.irRadExc.F[6,6] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - jacobian->tmpVars[1] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[6] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* roo.irRadExc.F[5,6] PARAM */)) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[5] SEED_VAR */));
  threadData->lastEquationSolved = 159;
}

/*
equation index: 160
type: SIMPLE_ASSIGN
$res_LSJac0_3.$pDERLSJac0.dummyVarLSJac0 = ((-roo.irRadExc.J.SeedLSJac0[5]) - roo.irRadExc.rhoOpa[5] * roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[5]) * roo.irRadExc.kOpaInv[5]
*/
void ForcedConvection_30s_eqFunction_160(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,160};
  jacobian->resultVars[2] /* $res_LSJac0_3.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[5] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[747]] /* roo.irRadExc.rhoOpa[5] PARAM */)) * (jacobian->tmpVars[6] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[741]] /* roo.irRadExc.kOpaInv[5] PARAM */));
  threadData->lastEquationSolved = 160;
}

/*
equation index: 161
type: SIMPLE_ASSIGN
$res_LSJac0_4.$pDERLSJac0.dummyVarLSJac0 = (-roo.irRadExc.F[2,4]) * roo.irRadExc.J.SeedLSJac0[2] - roo.irRadExc.F[1,4] * roo.irRadExc.J.SeedLSJac0[1] - roo.irRadExc.F[3,4] * roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[3] - roo.irRadExc.F[4,4] * roo.irRadExc.J.SeedLSJac0[4] - roo.irRadExc.F[6,4] * roo.irRadExc.J.SeedLSJac0[6] - roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[4] - roo.irRadExc.F[5,4] * roo.irRadExc.J.SeedLSJac0[5]
*/
void ForcedConvection_30s_eqFunction_161(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,161};
  jacobian->resultVars[3] /* $res_LSJac0_4.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* roo.irRadExc.F[2,4] PARAM */))) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* roo.irRadExc.F[1,4] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[518]] /* roo.irRadExc.F[3,4] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* roo.irRadExc.F[4,4] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[536]] /* roo.irRadExc.F[6,4] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - jacobian->tmpVars[2] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[4] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[530]] /* roo.irRadExc.F[5,4] PARAM */)) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[5] SEED_VAR */));
  threadData->lastEquationSolved = 161;
}

/*
equation index: 162
type: SIMPLE_ASSIGN
$res_LSJac0_5.$pDERLSJac0.dummyVarLSJac0 = (-roo.irRadExc.F[2,2]) * roo.irRadExc.J.SeedLSJac0[2] - roo.irRadExc.F[1,2] * roo.irRadExc.J.SeedLSJac0[1] - roo.irRadExc.F[3,2] * roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[3] - roo.irRadExc.F[4,2] * roo.irRadExc.J.SeedLSJac0[4] - roo.irRadExc.F[6,2] * roo.irRadExc.J.SeedLSJac0[6] - roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[2] - roo.irRadExc.F[5,2] * roo.irRadExc.J.SeedLSJac0[5]
*/
void ForcedConvection_30s_eqFunction_162(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,162};
  jacobian->resultVars[4] /* $res_LSJac0_5.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* roo.irRadExc.F[2,2] PARAM */))) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* roo.irRadExc.F[1,2] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* roo.irRadExc.F[3,2] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* roo.irRadExc.F[4,2] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[534]] /* roo.irRadExc.F[6,2] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - jacobian->tmpVars[3] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* roo.irRadExc.F[5,2] PARAM */)) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[5] SEED_VAR */));
  threadData->lastEquationSolved = 162;
}

OMC_DISABLE_OPT
int ForcedConvection_30s_functionJacLSJac0_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = ForcedConvection_30s_INDEX_JAC_LSJac0;
  
  
  return 0;
}

int ForcedConvection_30s_functionJacLSJac0_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = ForcedConvection_30s_INDEX_JAC_LSJac0;
  
  static void (*const eqFunctions[12])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    ForcedConvection_30s_eqFunction_151,
    ForcedConvection_30s_eqFunction_152,
    ForcedConvection_30s_eqFunction_153,
    ForcedConvection_30s_eqFunction_154,
    ForcedConvection_30s_eqFunction_155,
    ForcedConvection_30s_eqFunction_156,
    ForcedConvection_30s_eqFunction_157,
    ForcedConvection_30s_eqFunction_158,
    ForcedConvection_30s_eqFunction_159,
    ForcedConvection_30s_eqFunction_160,
    ForcedConvection_30s_eqFunction_161,
    ForcedConvection_30s_eqFunction_162
  };
  
  for (int id = 0; id < 12; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 360
type: SIMPLE_ASSIGN
$cse1 = exp(4102.99 / (weaDat.weaBus.TWetBul - 35.719) - 17.2799)
*/
void ForcedConvection_30s_eqFunction_360(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,360};
  jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */ = exp(DIVISION(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* weaDat.weaBus.TWetBul variable */) - 35.719,"weaDat.weaBus.TWetBul - 35.719") - 17.2799);
  threadData->lastEquationSolved = 360;
}

/*
equation index: 361
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac1.dummyVarNLSJac1 = 4.172134052434367 * weaDat.pAtmSel.p * $cse1 * weaDat.weaBus.TWetBul.SeedNLSJac1 / ((-35.719 + weaDat.weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse1)) ^ 2.0
*/
void ForcedConvection_30s_eqFunction_361(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,361};
  modelica_real tmp0;
  tmp0 = (-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* weaDat.weaBus.TWetBul variable */)) * (-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* weaDat.pAtmSel.p PARAM */)) * (jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */)));
  jacobian->tmpVars[1] /* weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = (4.172134052434367) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* weaDat.pAtmSel.p PARAM */)) * ((jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaDat.weaBus.TWetBul.SeedNLSJac1 SEED_VAR */,(tmp0 * tmp0),"((-35.719 + weaDat.weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse1)) ^ 2.0"))));
  threadData->lastEquationSolved = 361;
}

/*
equation index: 362
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac1.dummyVarNLSJac1 = (1.0 - weaDat.tWetBul_TDryBulXi.XiDryBul) * weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac1.dummyVarNLSJac1 / (1.0 - weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void ForcedConvection_30s_eqFunction_362(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,362};
  modelica_real tmp1;
  tmp1 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[2] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[1] /* weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */,(tmp1 * tmp1),"(1.0 - weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 362;
}

/*
equation index: 363
type: SIMPLE_ASSIGN
$res_NLSJac1_1.$pDERNLSJac1.dummyVarNLSJac1 = (-2324.0) * (273.15 - weaDat.weaBus.TWetBul) * weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac1.dummyVarNLSJac1 + (-2.5010145e6) * weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac1.dummyVarNLSJac1 - weaDat.weaBus.TWetBul.SeedNLSJac1 * (1006.0 * (1.0 - weaDat.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaDat.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaDat.tWetBul_TDryBulXi.XiDryBul - weaDat.tWetBul_TDryBulXi.XiSatRefIn))
*/
void ForcedConvection_30s_eqFunction_363(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,363};
  jacobian->resultVars[0] /* $res_NLSJac1_1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* weaDat.weaBus.TWetBul variable */)) * (jacobian->tmpVars[2] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[2] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaDat.weaBus.TWetBul.SeedNLSJac1 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 363;
}

OMC_DISABLE_OPT
int ForcedConvection_30s_functionJacNLSJac1_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = ForcedConvection_30s_INDEX_JAC_NLSJac1;
  
  
  return 0;
}

int ForcedConvection_30s_functionJacNLSJac1_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = ForcedConvection_30s_INDEX_JAC_NLSJac1;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    ForcedConvection_30s_eqFunction_360,
    ForcedConvection_30s_eqFunction_361,
    ForcedConvection_30s_eqFunction_362,
    ForcedConvection_30s_eqFunction_363
  };
  
  for (int id = 0; id < 4; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 603
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[1] = (-roo.irRadExc.J.SeedLSJac2[1]) * roo.irRadExc.kOpaInv[1] / (roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1])
*/
void ForcedConvection_30s_eqFunction_603(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,603};
  jacobian->tmpVars[0] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[1] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac2[1] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* roo.irRadExc.kOpaInv[1] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* roo.irRadExc.kOpaInv[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[743]] /* roo.irRadExc.rhoOpa[1] PARAM */)),"roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1]");
  threadData->lastEquationSolved = 603;
}

/*
equation index: 604
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[2] = (-roo.irRadExc.J.SeedLSJac2[2]) * roo.irRadExc.kOpaInv[2] / (roo.irRadExc.kOpaInv[2] * roo.irRadExc.rhoOpa[2])
*/
void ForcedConvection_30s_eqFunction_604(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,604};
  jacobian->tmpVars[1] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[2] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac2[2] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* roo.irRadExc.kOpaInv[2] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* roo.irRadExc.kOpaInv[2] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[744]] /* roo.irRadExc.rhoOpa[2] PARAM */)),"roo.irRadExc.kOpaInv[2] * roo.irRadExc.rhoOpa[2]");
  threadData->lastEquationSolved = 604;
}

/*
equation index: 605
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[3] = (-roo.irRadExc.J.SeedLSJac2[3]) * roo.irRadExc.kOpaInv[3] / (roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3])
*/
void ForcedConvection_30s_eqFunction_605(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,605};
  jacobian->tmpVars[2] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[3] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac2[3] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* roo.irRadExc.kOpaInv[3] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* roo.irRadExc.kOpaInv[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[745]] /* roo.irRadExc.rhoOpa[3] PARAM */)),"roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3]");
  threadData->lastEquationSolved = 605;
}

/*
equation index: 606
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[5] = (-roo.irRadExc.J.SeedLSJac2[5]) * roo.irRadExc.kOpaInv[5] / (roo.irRadExc.kOpaInv[5] * roo.irRadExc.rhoOpa[5])
*/
void ForcedConvection_30s_eqFunction_606(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,606};
  jacobian->tmpVars[3] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[5] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac2[5] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[741]] /* roo.irRadExc.kOpaInv[5] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[741]] /* roo.irRadExc.kOpaInv[5] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[747]] /* roo.irRadExc.rhoOpa[5] PARAM */)),"roo.irRadExc.kOpaInv[5] * roo.irRadExc.rhoOpa[5]");
  threadData->lastEquationSolved = 606;
}

/*
equation index: 607
type: SIMPLE_ASSIGN
roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[4] = ((-roo.irRadExc.F[2,1]) * roo.irRadExc.J.SeedLSJac2[2] - roo.irRadExc.F[1,1] * roo.irRadExc.J.SeedLSJac2[1] - roo.irRadExc.F[3,1] * roo.irRadExc.J.SeedLSJac2[3] - roo.irRadExc.F[6,1] * roo.irRadExc.J.SeedLSJac2[6] - roo.irRadExc.F[5,1] * roo.irRadExc.J.SeedLSJac2[5] - roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[1]) / roo.irRadExc.F[4,1]
*/
void ForcedConvection_30s_eqFunction_607(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,607};
  jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[4] JACOBIAN_TMP_VAR */ = DIVISION(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* roo.irRadExc.F[2,1] PARAM */))) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac2[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* roo.irRadExc.F[1,1] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac2[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* roo.irRadExc.F[3,1] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac2[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* roo.irRadExc.F[6,1] PARAM */)) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac2[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* roo.irRadExc.F[5,1] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac2[5] SEED_VAR */)) - jacobian->tmpVars[0] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[1] JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* roo.irRadExc.F[4,1] PARAM */),"roo.irRadExc.F[4,1]");
  threadData->lastEquationSolved = 607;
}

/*
equation index: 608
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[4] = (-roo.irRadExc.F[2,4]) * roo.irRadExc.J.SeedLSJac2[2] - roo.irRadExc.F[1,4] * roo.irRadExc.J.SeedLSJac2[1] - roo.irRadExc.F[3,4] * roo.irRadExc.J.SeedLSJac2[3] - roo.irRadExc.F[4,4] * roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[4] - roo.irRadExc.F[6,4] * roo.irRadExc.J.SeedLSJac2[6] - roo.irRadExc.F[5,4] * roo.irRadExc.J.SeedLSJac2[5]
*/
void ForcedConvection_30s_eqFunction_608(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,608};
  jacobian->tmpVars[5] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[4] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* roo.irRadExc.F[2,4] PARAM */))) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac2[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* roo.irRadExc.F[1,4] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac2[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[518]] /* roo.irRadExc.F[3,4] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac2[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* roo.irRadExc.F[4,4] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[4] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[536]] /* roo.irRadExc.F[6,4] PARAM */)) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac2[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[530]] /* roo.irRadExc.F[5,4] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac2[5] SEED_VAR */));
  threadData->lastEquationSolved = 608;
}

/*
equation index: 609
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[6] = (-roo.irRadExc.F[2,6]) * roo.irRadExc.J.SeedLSJac2[2] - roo.irRadExc.F[1,6] * roo.irRadExc.J.SeedLSJac2[1] - roo.irRadExc.F[3,6] * roo.irRadExc.J.SeedLSJac2[3] - roo.irRadExc.F[4,6] * roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[4] - roo.irRadExc.F[6,6] * roo.irRadExc.J.SeedLSJac2[6] - roo.irRadExc.F[5,6] * roo.irRadExc.J.SeedLSJac2[5]
*/
void ForcedConvection_30s_eqFunction_609(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,609};
  jacobian->tmpVars[6] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[6] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* roo.irRadExc.F[2,6] PARAM */))) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac2[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* roo.irRadExc.F[1,6] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac2[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* roo.irRadExc.F[3,6] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac2[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* roo.irRadExc.F[4,6] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[4] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* roo.irRadExc.F[6,6] PARAM */)) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac2[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* roo.irRadExc.F[5,6] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac2[5] SEED_VAR */));
  threadData->lastEquationSolved = 609;
}

/*
equation index: 610
type: SIMPLE_ASSIGN
$res_LSJac2_1.$pDERLSJac2.dummyVarLSJac2 = ((-roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[4]) - roo.irRadExc.rhoOpa[4] * roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[4]) * roo.irRadExc.kOpaInv[4]
*/
void ForcedConvection_30s_eqFunction_610(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,610};
  jacobian->resultVars[0] /* $res_LSJac2_1.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_VAR */ = ((-jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[4] JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* roo.irRadExc.rhoOpa[4] PARAM */)) * (jacobian->tmpVars[5] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[4] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[740]] /* roo.irRadExc.kOpaInv[4] PARAM */));
  threadData->lastEquationSolved = 610;
}

/*
equation index: 611
type: SIMPLE_ASSIGN
$res_LSJac2_2.$pDERLSJac2.dummyVarLSJac2 = ((-roo.irRadExc.J.SeedLSJac2[6]) - roo.irRadExc.rhoOpa[6] * roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[6]) * roo.irRadExc.kOpaInv[6]
*/
void ForcedConvection_30s_eqFunction_611(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,611};
  jacobian->resultVars[1] /* $res_LSJac2_2.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_VAR */ = ((-jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac2[6] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[748]] /* roo.irRadExc.rhoOpa[6] PARAM */)) * (jacobian->tmpVars[6] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[6] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[742]] /* roo.irRadExc.kOpaInv[6] PARAM */));
  threadData->lastEquationSolved = 611;
}

/*
equation index: 612
type: SIMPLE_ASSIGN
$res_LSJac2_3.$pDERLSJac2.dummyVarLSJac2 = (-roo.irRadExc.F[2,5]) * roo.irRadExc.J.SeedLSJac2[2] - roo.irRadExc.F[1,5] * roo.irRadExc.J.SeedLSJac2[1] - roo.irRadExc.F[3,5] * roo.irRadExc.J.SeedLSJac2[3] - roo.irRadExc.F[4,5] * roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[4] - roo.irRadExc.F[6,5] * roo.irRadExc.J.SeedLSJac2[6] - roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[5] - roo.irRadExc.F[5,5] * roo.irRadExc.J.SeedLSJac2[5]
*/
void ForcedConvection_30s_eqFunction_612(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,612};
  jacobian->resultVars[2] /* $res_LSJac2_3.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* roo.irRadExc.F[2,5] PARAM */))) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac2[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* roo.irRadExc.F[1,5] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac2[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* roo.irRadExc.F[3,5] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac2[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* roo.irRadExc.F[4,5] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[4] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[537]] /* roo.irRadExc.F[6,5] PARAM */)) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac2[6] SEED_VAR */)) - jacobian->tmpVars[3] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[5] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[531]] /* roo.irRadExc.F[5,5] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac2[5] SEED_VAR */));
  threadData->lastEquationSolved = 612;
}

/*
equation index: 613
type: SIMPLE_ASSIGN
$res_LSJac2_4.$pDERLSJac2.dummyVarLSJac2 = (-roo.irRadExc.F[2,3]) * roo.irRadExc.J.SeedLSJac2[2] - roo.irRadExc.F[1,3] * roo.irRadExc.J.SeedLSJac2[1] - roo.irRadExc.F[3,3] * roo.irRadExc.J.SeedLSJac2[3] - roo.irRadExc.F[4,3] * roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[4] - roo.irRadExc.F[6,3] * roo.irRadExc.J.SeedLSJac2[6] - roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[3] - roo.irRadExc.F[5,3] * roo.irRadExc.J.SeedLSJac2[5]
*/
void ForcedConvection_30s_eqFunction_613(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,613};
  jacobian->resultVars[3] /* $res_LSJac2_4.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[511]] /* roo.irRadExc.F[2,3] PARAM */))) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac2[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* roo.irRadExc.F[1,3] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac2[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* roo.irRadExc.F[3,3] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac2[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* roo.irRadExc.F[4,3] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[4] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[535]] /* roo.irRadExc.F[6,3] PARAM */)) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac2[6] SEED_VAR */)) - jacobian->tmpVars[2] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[3] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* roo.irRadExc.F[5,3] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac2[5] SEED_VAR */));
  threadData->lastEquationSolved = 613;
}

/*
equation index: 614
type: SIMPLE_ASSIGN
$res_LSJac2_5.$pDERLSJac2.dummyVarLSJac2 = (-roo.irRadExc.F[2,2]) * roo.irRadExc.J.SeedLSJac2[2] - roo.irRadExc.F[1,2] * roo.irRadExc.J.SeedLSJac2[1] - roo.irRadExc.F[3,2] * roo.irRadExc.J.SeedLSJac2[3] - roo.irRadExc.F[4,2] * roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[4] - roo.irRadExc.F[6,2] * roo.irRadExc.J.SeedLSJac2[6] - roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[2] - roo.irRadExc.F[5,2] * roo.irRadExc.J.SeedLSJac2[5]
*/
void ForcedConvection_30s_eqFunction_614(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,614};
  jacobian->resultVars[4] /* $res_LSJac2_5.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* roo.irRadExc.F[2,2] PARAM */))) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac2[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* roo.irRadExc.F[1,2] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac2[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* roo.irRadExc.F[3,2] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac2[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* roo.irRadExc.F[4,2] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[4] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[534]] /* roo.irRadExc.F[6,2] PARAM */)) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac2[6] SEED_VAR */)) - jacobian->tmpVars[1] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[2] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* roo.irRadExc.F[5,2] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac2[5] SEED_VAR */));
  threadData->lastEquationSolved = 614;
}

OMC_DISABLE_OPT
int ForcedConvection_30s_functionJacLSJac2_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = ForcedConvection_30s_INDEX_JAC_LSJac2;
  
  
  return 0;
}

int ForcedConvection_30s_functionJacLSJac2_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = ForcedConvection_30s_INDEX_JAC_LSJac2;
  
  static void (*const eqFunctions[12])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    ForcedConvection_30s_eqFunction_603,
    ForcedConvection_30s_eqFunction_604,
    ForcedConvection_30s_eqFunction_605,
    ForcedConvection_30s_eqFunction_606,
    ForcedConvection_30s_eqFunction_607,
    ForcedConvection_30s_eqFunction_608,
    ForcedConvection_30s_eqFunction_609,
    ForcedConvection_30s_eqFunction_610,
    ForcedConvection_30s_eqFunction_611,
    ForcedConvection_30s_eqFunction_612,
    ForcedConvection_30s_eqFunction_613,
    ForcedConvection_30s_eqFunction_614
  };
  
  for (int id = 0; id < 12; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 685
type: SIMPLE_ASSIGN
$cse18 = exp(4102.99 / (weaDat.weaBus.TWetBul - 35.719) - 17.2799)
*/
void ForcedConvection_30s_eqFunction_685(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,685};
  jacobian->tmpVars[0] /* $cse18 JACOBIAN_TMP_VAR */ = exp(DIVISION(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* weaDat.weaBus.TWetBul variable */) - 35.719,"weaDat.weaBus.TWetBul - 35.719") - 17.2799);
  threadData->lastEquationSolved = 685;
}

/*
equation index: 686
type: SIMPLE_ASSIGN
$cse3.$pDERNLSJac3.dummyVarNLSJac3 = (-4102.99) * $cse18 * weaDat.weaBus.TWetBul.SeedNLSJac3 / (-35.719 + weaDat.weaBus.TWetBul) ^ 2.0
*/
void ForcedConvection_30s_eqFunction_686(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,686};
  modelica_real tmp2;
  tmp2 = -35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* weaDat.weaBus.TWetBul variable */);
  jacobian->tmpVars[1] /* $cse3.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = (-4102.99) * ((jacobian->tmpVars[0] /* $cse18 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaDat.weaBus.TWetBul.SeedNLSJac3 SEED_VAR */,(tmp2 * tmp2),"(-35.719 + weaDat.weaBus.TWetBul) ^ 2.0")));
  threadData->lastEquationSolved = 686;
}

/*
equation index: 687
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac3.dummyVarNLSJac3 = (-0.0010168521133208628) * weaDat.pAtmSel.p * $cse3.$pDERNLSJac3.dummyVarNLSJac3 / (-0.378035286922501 + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse3) ^ 2.0
*/
void ForcedConvection_30s_eqFunction_687(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,687};
  modelica_real tmp3;
  tmp3 = -0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* weaDat.pAtmSel.p PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* $cse3 variable */)));
  jacobian->tmpVars[2] /* weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = (-0.0010168521133208628) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* weaDat.pAtmSel.p PARAM */)) * (DIVISION(jacobian->tmpVars[1] /* $cse3.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */,(tmp3 * tmp3),"(-0.378035286922501 + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse3) ^ 2.0")));
  threadData->lastEquationSolved = 687;
}

/*
equation index: 688
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac3.dummyVarNLSJac3 = (1.0 - weaDat.tWetBul_TDryBulXi.XiDryBul) * weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac3.dummyVarNLSJac3 / (1.0 - weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void ForcedConvection_30s_eqFunction_688(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,688};
  modelica_real tmp4;
  tmp4 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[3] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[2] /* weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */,(tmp4 * tmp4),"(1.0 - weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 688;
}

/*
equation index: 689
type: SIMPLE_ASSIGN
$res_NLSJac3_1.$pDERNLSJac3.dummyVarNLSJac3 = (-2324.0) * (273.15 - weaDat.weaBus.TWetBul) * weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac3.dummyVarNLSJac3 + (-2.5010145e6) * weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac3.dummyVarNLSJac3 - weaDat.weaBus.TWetBul.SeedNLSJac3 * (1006.0 * (1.0 - weaDat.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaDat.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaDat.tWetBul_TDryBulXi.XiDryBul - weaDat.tWetBul_TDryBulXi.XiSatRefIn))
*/
void ForcedConvection_30s_eqFunction_689(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,689};
  jacobian->resultVars[0] /* $res_NLSJac3_1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* weaDat.weaBus.TWetBul variable */)) * (jacobian->tmpVars[3] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[3] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaDat.weaBus.TWetBul.SeedNLSJac3 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 689;
}

OMC_DISABLE_OPT
int ForcedConvection_30s_functionJacNLSJac3_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = ForcedConvection_30s_INDEX_JAC_NLSJac3;
  
  
  return 0;
}

int ForcedConvection_30s_functionJacNLSJac3_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = ForcedConvection_30s_INDEX_JAC_NLSJac3;
  
  static void (*const eqFunctions[5])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    ForcedConvection_30s_eqFunction_685,
    ForcedConvection_30s_eqFunction_686,
    ForcedConvection_30s_eqFunction_687,
    ForcedConvection_30s_eqFunction_688,
    ForcedConvection_30s_eqFunction_689
  };
  
  for (int id = 0; id < 5; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
int ForcedConvection_30s_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int ForcedConvection_30s_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int ForcedConvection_30s_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int ForcedConvection_30s_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int ForcedConvection_30s_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int ForcedConvection_30s_functionJacA_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = ForcedConvection_30s_INDEX_JAC_A;
  
  
  return 0;
}

int ForcedConvection_30s_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = ForcedConvection_30s_INDEX_JAC_A;
  
  
  return 0;
}

OMC_DISABLE_OPT
int ForcedConvection_30s_initialAnalyticJacobianLSJac0(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "ForcedConvection_30s_JacLSJac0.bin");
  
  initJacobian(jacobian, 5, 5, 12, ForcedConvection_30s_functionJacLSJac0_column, NULL, NULL);
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
int ForcedConvection_30s_initialAnalyticJacobianNLSJac1(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "ForcedConvection_30s_JacNLSJac1.bin");
  
  initJacobian(jacobian, 1, 1, 4, ForcedConvection_30s_functionJacNLSJac1_column, NULL, NULL);
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
int ForcedConvection_30s_initialAnalyticJacobianLSJac2(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "ForcedConvection_30s_JacLSJac2.bin");
  
  initJacobian(jacobian, 5, 5, 12, ForcedConvection_30s_functionJacLSJac2_column, NULL, NULL);
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
int ForcedConvection_30s_initialAnalyticJacobianNLSJac3(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "ForcedConvection_30s_JacNLSJac3.bin");
  
  initJacobian(jacobian, 1, 1, 5, ForcedConvection_30s_functionJacNLSJac3_column, NULL, NULL);
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
int ForcedConvection_30s_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int ForcedConvection_30s_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int ForcedConvection_30s_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int ForcedConvection_30s_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int ForcedConvection_30s_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
OMC_DISABLE_OPT
int ForcedConvection_30s_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "ForcedConvection_30s_JacA.bin");
  
  initJacobian(jacobian, 15, 15, 0, ForcedConvection_30s_functionJacA_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(15, 0, 1);
  jacobian->availability = JACOBIAN_ONLY_SPARSITY;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 15+1, pFile, FALSE);
  if (count != 15+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 15+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 0, pFile, FALSE);
  if (count != 0) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 0, count);
  }
  
  /* write color array */
  /* color 1 with 15 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 15, 15);
  
  omc_fclose(pFile);
  
  return 0;
}


