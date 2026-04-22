/* Jacobians 12 */
#include "tmp_two_returns_res_model.h"
#include "tmp_two_returns_res_12jac.h"
#include "simulation/jacobian_util.h"
#include "util/omc_file.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 219
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[6] = (-roo.irRadExc.J.SeedLSJac0[6]) * roo.irRadExc.kOpaInv[6] / (roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6])
*/
void tmp_two_returns_res_eqFunction_219(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,219};
  jacobian->tmpVars[0] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[6] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* roo.irRadExc.kOpaInv[6] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* roo.irRadExc.kOpaInv[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* roo.irRadExc.rhoOpa[6] PARAM */)),"roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6]");
  threadData->lastEquationSolved = 219;
}

/*
equation index: 220
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[1] = (-roo.irRadExc.J.SeedLSJac0[1]) * roo.irRadExc.kOpaInv[1] / (roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1])
*/
void tmp_two_returns_res_eqFunction_220(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,220};
  jacobian->tmpVars[1] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* roo.irRadExc.kOpaInv[1] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* roo.irRadExc.kOpaInv[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* roo.irRadExc.rhoOpa[1] PARAM */)),"roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1]");
  threadData->lastEquationSolved = 220;
}

/*
equation index: 221
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[3] = (-roo.irRadExc.J.SeedLSJac0[3]) * roo.irRadExc.kOpaInv[3] / (roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3])
*/
void tmp_two_returns_res_eqFunction_221(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,221};
  jacobian->tmpVars[2] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* roo.irRadExc.kOpaInv[3] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* roo.irRadExc.kOpaInv[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* roo.irRadExc.rhoOpa[3] PARAM */)),"roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3]");
  threadData->lastEquationSolved = 221;
}

/*
equation index: 222
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[4] = (-roo.irRadExc.J.SeedLSJac0[4]) * roo.irRadExc.kOpaInv[4] / (roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4])
*/
void tmp_two_returns_res_eqFunction_222(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,222};
  jacobian->tmpVars[3] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[4] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* roo.irRadExc.kOpaInv[4] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* roo.irRadExc.kOpaInv[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[784]] /* roo.irRadExc.rhoOpa[4] PARAM */)),"roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4]");
  threadData->lastEquationSolved = 222;
}

/*
equation index: 223
type: SIMPLE_ASSIGN
roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] = ((-roo.irRadExc.F[2,1]) * roo.irRadExc.J.SeedLSJac0[2] - roo.irRadExc.F[1,1] * roo.irRadExc.J.SeedLSJac0[1] - roo.irRadExc.F[3,1] * roo.irRadExc.J.SeedLSJac0[3] - roo.irRadExc.F[4,1] * roo.irRadExc.J.SeedLSJac0[4] - roo.irRadExc.F[6,1] * roo.irRadExc.J.SeedLSJac0[6] - roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[1]) / roo.irRadExc.F[5,1]
*/
void tmp_two_returns_res_eqFunction_223(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,223};
  jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */ = DIVISION(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* roo.irRadExc.F[2,1] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* roo.irRadExc.F[1,1] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[553]] /* roo.irRadExc.F[3,1] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* roo.irRadExc.F[4,1] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* roo.irRadExc.F[6,1] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - jacobian->tmpVars[1] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* roo.irRadExc.F[5,1] PARAM */),"roo.irRadExc.F[5,1]");
  threadData->lastEquationSolved = 223;
}

/*
equation index: 224
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[2] = (-roo.irRadExc.F[2,2]) * roo.irRadExc.J.SeedLSJac0[2] - roo.irRadExc.F[1,2] * roo.irRadExc.J.SeedLSJac0[1] - roo.irRadExc.F[3,2] * roo.irRadExc.J.SeedLSJac0[3] - roo.irRadExc.F[4,2] * roo.irRadExc.J.SeedLSJac0[4] - roo.irRadExc.F[6,2] * roo.irRadExc.J.SeedLSJac0[6] - roo.irRadExc.F[5,2] * roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5]
*/
void tmp_two_returns_res_eqFunction_224(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,224};
  jacobian->tmpVars[5] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* roo.irRadExc.F[2,2] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* roo.irRadExc.F[1,2] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[554]] /* roo.irRadExc.F[3,2] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* roo.irRadExc.F[4,2] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* roo.irRadExc.F[6,2] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[566]] /* roo.irRadExc.F[5,2] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 224;
}

/*
equation index: 225
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[5] = (-roo.irRadExc.F[2,5]) * roo.irRadExc.J.SeedLSJac0[2] - roo.irRadExc.F[1,5] * roo.irRadExc.J.SeedLSJac0[1] - roo.irRadExc.F[3,5] * roo.irRadExc.J.SeedLSJac0[3] - roo.irRadExc.F[4,5] * roo.irRadExc.J.SeedLSJac0[4] - roo.irRadExc.F[6,5] * roo.irRadExc.J.SeedLSJac0[6] - roo.irRadExc.F[5,5] * roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5]
*/
void tmp_two_returns_res_eqFunction_225(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,225};
  jacobian->tmpVars[6] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* roo.irRadExc.F[2,5] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[545]] /* roo.irRadExc.F[1,5] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[557]] /* roo.irRadExc.F[3,5] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[563]] /* roo.irRadExc.F[4,5] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* roo.irRadExc.F[6,5] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[569]] /* roo.irRadExc.F[5,5] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 225;
}

/*
equation index: 226
type: SIMPLE_ASSIGN
$res_LSJac0_1.$pDERLSJac0.dummyVarLSJac0 = ((-roo.irRadExc.J.SeedLSJac0[2]) - roo.irRadExc.rhoOpa[2] * roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[2]) * roo.irRadExc.kOpaInv[2]
*/
void tmp_two_returns_res_eqFunction_226(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,226};
  jacobian->resultVars[0] /* $res_LSJac0_1.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* roo.irRadExc.rhoOpa[2] PARAM */)) * (jacobian->tmpVars[5] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* roo.irRadExc.kOpaInv[2] PARAM */));
  threadData->lastEquationSolved = 226;
}

/*
equation index: 227
type: SIMPLE_ASSIGN
$res_LSJac0_2.$pDERLSJac0.dummyVarLSJac0 = ((-roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5]) - roo.irRadExc.rhoOpa[5] * roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[5]) * roo.irRadExc.kOpaInv[5]
*/
void tmp_two_returns_res_eqFunction_227(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,227};
  jacobian->resultVars[1] /* $res_LSJac0_2.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* roo.irRadExc.rhoOpa[5] PARAM */)) * (jacobian->tmpVars[6] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* roo.irRadExc.kOpaInv[5] PARAM */));
  threadData->lastEquationSolved = 227;
}

/*
equation index: 228
type: SIMPLE_ASSIGN
$res_LSJac0_3.$pDERLSJac0.dummyVarLSJac0 = (-roo.irRadExc.F[2,6]) * roo.irRadExc.J.SeedLSJac0[2] - roo.irRadExc.F[1,6] * roo.irRadExc.J.SeedLSJac0[1] - roo.irRadExc.F[3,6] * roo.irRadExc.J.SeedLSJac0[3] - roo.irRadExc.F[4,6] * roo.irRadExc.J.SeedLSJac0[4] - roo.irRadExc.F[6,6] * roo.irRadExc.J.SeedLSJac0[6] - roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[6] - roo.irRadExc.F[5,6] * roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5]
*/
void tmp_two_returns_res_eqFunction_228(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,228};
  jacobian->resultVars[2] /* $res_LSJac0_3.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[552]] /* roo.irRadExc.F[2,6] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[546]] /* roo.irRadExc.F[1,6] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* roo.irRadExc.F[3,6] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[564]] /* roo.irRadExc.F[4,6] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* roo.irRadExc.F[6,6] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - jacobian->tmpVars[0] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[6] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[570]] /* roo.irRadExc.F[5,6] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 228;
}

/*
equation index: 229
type: SIMPLE_ASSIGN
$res_LSJac0_4.$pDERLSJac0.dummyVarLSJac0 = (-roo.irRadExc.F[2,4]) * roo.irRadExc.J.SeedLSJac0[2] - roo.irRadExc.F[1,4] * roo.irRadExc.J.SeedLSJac0[1] - roo.irRadExc.F[3,4] * roo.irRadExc.J.SeedLSJac0[3] - roo.irRadExc.F[4,4] * roo.irRadExc.J.SeedLSJac0[4] - roo.irRadExc.F[6,4] * roo.irRadExc.J.SeedLSJac0[6] - roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[4] - roo.irRadExc.F[5,4] * roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5]
*/
void tmp_two_returns_res_eqFunction_229(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,229};
  jacobian->resultVars[3] /* $res_LSJac0_4.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* roo.irRadExc.F[2,4] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* roo.irRadExc.F[1,4] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[556]] /* roo.irRadExc.F[3,4] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* roo.irRadExc.F[4,4] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* roo.irRadExc.F[6,4] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - jacobian->tmpVars[3] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[4] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* roo.irRadExc.F[5,4] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 229;
}

/*
equation index: 230
type: SIMPLE_ASSIGN
$res_LSJac0_5.$pDERLSJac0.dummyVarLSJac0 = (-roo.irRadExc.F[2,3]) * roo.irRadExc.J.SeedLSJac0[2] - roo.irRadExc.F[1,3] * roo.irRadExc.J.SeedLSJac0[1] - roo.irRadExc.F[3,3] * roo.irRadExc.J.SeedLSJac0[3] - roo.irRadExc.F[4,3] * roo.irRadExc.J.SeedLSJac0[4] - roo.irRadExc.F[6,3] * roo.irRadExc.J.SeedLSJac0[6] - roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[3] - roo.irRadExc.F[5,3] * roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5]
*/
void tmp_two_returns_res_eqFunction_230(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,230};
  jacobian->resultVars[4] /* $res_LSJac0_5.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* roo.irRadExc.F[2,3] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* roo.irRadExc.F[1,3] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* roo.irRadExc.F[3,3] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* roo.irRadExc.F[4,3] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[573]] /* roo.irRadExc.F[6,3] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - jacobian->tmpVars[2] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* roo.irRadExc.F[5,3] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 230;
}

OMC_DISABLE_OPT
int tmp_two_returns_res_functionJacLSJac0_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_two_returns_res_INDEX_JAC_LSJac0;
  
  
  return 0;
}

int tmp_two_returns_res_functionJacLSJac0_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_two_returns_res_INDEX_JAC_LSJac0;
  
  static void (*const eqFunctions[12])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    tmp_two_returns_res_eqFunction_219,
    tmp_two_returns_res_eqFunction_220,
    tmp_two_returns_res_eqFunction_221,
    tmp_two_returns_res_eqFunction_222,
    tmp_two_returns_res_eqFunction_223,
    tmp_two_returns_res_eqFunction_224,
    tmp_two_returns_res_eqFunction_225,
    tmp_two_returns_res_eqFunction_226,
    tmp_two_returns_res_eqFunction_227,
    tmp_two_returns_res_eqFunction_228,
    tmp_two_returns_res_eqFunction_229,
    tmp_two_returns_res_eqFunction_230
  };
  
  for (int id = 0; id < 12; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 454
type: SIMPLE_ASSIGN
$cse1 = exp(-17.2799 - (-4102.99) / (-35.719 + weaDat.weaBus.TWetBul))
*/
void tmp_two_returns_res_eqFunction_454(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,454};
  jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */ = exp(-17.2799 - (DIVISION(-4102.99,-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* weaDat.weaBus.TWetBul variable */),"-35.719 + weaDat.weaBus.TWetBul")));
  threadData->lastEquationSolved = 454;
}

/*
equation index: 455
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac3.dummyVarNLSJac3 = 4.172134052434367 * weaDat.pAtmSel.p * $cse1 * weaDat.weaBus.TWetBul.SeedNLSJac3 / ((-35.719 + weaDat.weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse1)) ^ 2.0
*/
void tmp_two_returns_res_eqFunction_455(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,455};
  modelica_real tmp0;
  tmp0 = (-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* weaDat.weaBus.TWetBul variable */)) * (-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1366]] /* weaDat.pAtmSel.p PARAM */)) * (jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */)));
  jacobian->tmpVars[1] /* weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = (4.172134052434367) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1366]] /* weaDat.pAtmSel.p PARAM */)) * ((jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaDat.weaBus.TWetBul.SeedNLSJac3 SEED_VAR */,(tmp0 * tmp0),"((-35.719 + weaDat.weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse1)) ^ 2.0"))));
  threadData->lastEquationSolved = 455;
}

/*
equation index: 456
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac3.dummyVarNLSJac3 = (1.0 - weaDat.tWetBul_TDryBulXi.XiDryBul) * weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac3.dummyVarNLSJac3 / (1.0 - weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void tmp_two_returns_res_eqFunction_456(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,456};
  modelica_real tmp1;
  tmp1 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[2] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[1] /* weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */,(tmp1 * tmp1),"(1.0 - weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 456;
}

/*
equation index: 457
type: SIMPLE_ASSIGN
$res_NLSJac3_1.$pDERNLSJac3.dummyVarNLSJac3 = (-2324.0) * (273.15 - weaDat.weaBus.TWetBul) * weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac3.dummyVarNLSJac3 + (-2.5010145e6) * weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac3.dummyVarNLSJac3 - weaDat.weaBus.TWetBul.SeedNLSJac3 * (1006.0 * (1.0 - weaDat.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaDat.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaDat.tWetBul_TDryBulXi.XiDryBul - weaDat.tWetBul_TDryBulXi.XiSatRefIn))
*/
void tmp_two_returns_res_eqFunction_457(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,457};
  jacobian->resultVars[0] /* $res_NLSJac3_1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* weaDat.weaBus.TWetBul variable */)) * (jacobian->tmpVars[2] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[2] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaDat.weaBus.TWetBul.SeedNLSJac3 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 457;
}

OMC_DISABLE_OPT
int tmp_two_returns_res_functionJacNLSJac3_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_two_returns_res_INDEX_JAC_NLSJac3;
  
  
  return 0;
}

int tmp_two_returns_res_functionJacNLSJac3_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_two_returns_res_INDEX_JAC_NLSJac3;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    tmp_two_returns_res_eqFunction_454,
    tmp_two_returns_res_eqFunction_455,
    tmp_two_returns_res_eqFunction_456,
    tmp_two_returns_res_eqFunction_457
  };
  
  for (int id = 0; id < 4; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 816
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[6] = (-roo.irRadExc.J.SeedLSJac4[6]) * roo.irRadExc.kOpaInv[6] / (roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6])
*/
void tmp_two_returns_res_eqFunction_816(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,816};
  jacobian->tmpVars[0] /* roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[6] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac4[6] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* roo.irRadExc.kOpaInv[6] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* roo.irRadExc.kOpaInv[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* roo.irRadExc.rhoOpa[6] PARAM */)),"roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6]");
  threadData->lastEquationSolved = 816;
}

/*
equation index: 817
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[1] = (-roo.irRadExc.J.SeedLSJac4[1]) * roo.irRadExc.kOpaInv[1] / (roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1])
*/
void tmp_two_returns_res_eqFunction_817(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,817};
  jacobian->tmpVars[1] /* roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[1] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac4[1] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* roo.irRadExc.kOpaInv[1] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* roo.irRadExc.kOpaInv[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* roo.irRadExc.rhoOpa[1] PARAM */)),"roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1]");
  threadData->lastEquationSolved = 817;
}

/*
equation index: 818
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[3] = (-roo.irRadExc.J.SeedLSJac4[3]) * roo.irRadExc.kOpaInv[3] / (roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3])
*/
void tmp_two_returns_res_eqFunction_818(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,818};
  jacobian->tmpVars[2] /* roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[3] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac4[3] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* roo.irRadExc.kOpaInv[3] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* roo.irRadExc.kOpaInv[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* roo.irRadExc.rhoOpa[3] PARAM */)),"roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3]");
  threadData->lastEquationSolved = 818;
}

/*
equation index: 819
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[4] = (-roo.irRadExc.J.SeedLSJac4[4]) * roo.irRadExc.kOpaInv[4] / (roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4])
*/
void tmp_two_returns_res_eqFunction_819(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,819};
  jacobian->tmpVars[3] /* roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[4] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac4[4] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* roo.irRadExc.kOpaInv[4] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* roo.irRadExc.kOpaInv[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[784]] /* roo.irRadExc.rhoOpa[4] PARAM */)),"roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4]");
  threadData->lastEquationSolved = 819;
}

/*
equation index: 820
type: SIMPLE_ASSIGN
roo.irRadExc.J.$pDERLSJac4.dummyVarLSJac4[5] = ((-roo.irRadExc.F[2,1]) * roo.irRadExc.J.SeedLSJac4[2] - roo.irRadExc.F[1,1] * roo.irRadExc.J.SeedLSJac4[1] - roo.irRadExc.F[3,1] * roo.irRadExc.J.SeedLSJac4[3] - roo.irRadExc.F[4,1] * roo.irRadExc.J.SeedLSJac4[4] - roo.irRadExc.F[6,1] * roo.irRadExc.J.SeedLSJac4[6] - roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[1]) / roo.irRadExc.F[5,1]
*/
void tmp_two_returns_res_eqFunction_820(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,820};
  jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac4.dummyVarLSJac4[5] JACOBIAN_TMP_VAR */ = DIVISION(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* roo.irRadExc.F[2,1] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac4[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* roo.irRadExc.F[1,1] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac4[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[553]] /* roo.irRadExc.F[3,1] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac4[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* roo.irRadExc.F[4,1] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac4[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* roo.irRadExc.F[6,1] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac4[6] SEED_VAR */)) - jacobian->tmpVars[1] /* roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[1] JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* roo.irRadExc.F[5,1] PARAM */),"roo.irRadExc.F[5,1]");
  threadData->lastEquationSolved = 820;
}

/*
equation index: 821
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[2] = (-roo.irRadExc.F[2,2]) * roo.irRadExc.J.SeedLSJac4[2] - roo.irRadExc.F[1,2] * roo.irRadExc.J.SeedLSJac4[1] - roo.irRadExc.F[3,2] * roo.irRadExc.J.SeedLSJac4[3] - roo.irRadExc.F[4,2] * roo.irRadExc.J.SeedLSJac4[4] - roo.irRadExc.F[6,2] * roo.irRadExc.J.SeedLSJac4[6] - roo.irRadExc.F[5,2] * roo.irRadExc.J.$pDERLSJac4.dummyVarLSJac4[5]
*/
void tmp_two_returns_res_eqFunction_821(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,821};
  jacobian->tmpVars[5] /* roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[2] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* roo.irRadExc.F[2,2] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac4[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* roo.irRadExc.F[1,2] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac4[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[554]] /* roo.irRadExc.F[3,2] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac4[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* roo.irRadExc.F[4,2] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac4[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* roo.irRadExc.F[6,2] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac4[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[566]] /* roo.irRadExc.F[5,2] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac4.dummyVarLSJac4[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 821;
}

/*
equation index: 822
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[5] = (-roo.irRadExc.F[2,5]) * roo.irRadExc.J.SeedLSJac4[2] - roo.irRadExc.F[1,5] * roo.irRadExc.J.SeedLSJac4[1] - roo.irRadExc.F[3,5] * roo.irRadExc.J.SeedLSJac4[3] - roo.irRadExc.F[4,5] * roo.irRadExc.J.SeedLSJac4[4] - roo.irRadExc.F[6,5] * roo.irRadExc.J.SeedLSJac4[6] - roo.irRadExc.F[5,5] * roo.irRadExc.J.$pDERLSJac4.dummyVarLSJac4[5]
*/
void tmp_two_returns_res_eqFunction_822(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,822};
  jacobian->tmpVars[6] /* roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[5] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* roo.irRadExc.F[2,5] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac4[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[545]] /* roo.irRadExc.F[1,5] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac4[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[557]] /* roo.irRadExc.F[3,5] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac4[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[563]] /* roo.irRadExc.F[4,5] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac4[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* roo.irRadExc.F[6,5] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac4[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[569]] /* roo.irRadExc.F[5,5] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac4.dummyVarLSJac4[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 822;
}

/*
equation index: 823
type: SIMPLE_ASSIGN
$res_LSJac4_1.$pDERLSJac4.dummyVarLSJac4 = ((-roo.irRadExc.J.SeedLSJac4[2]) - roo.irRadExc.rhoOpa[2] * roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[2]) * roo.irRadExc.kOpaInv[2]
*/
void tmp_two_returns_res_eqFunction_823(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,823};
  jacobian->resultVars[0] /* $res_LSJac4_1.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_VAR */ = ((-jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac4[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* roo.irRadExc.rhoOpa[2] PARAM */)) * (jacobian->tmpVars[5] /* roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[2] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* roo.irRadExc.kOpaInv[2] PARAM */));
  threadData->lastEquationSolved = 823;
}

/*
equation index: 824
type: SIMPLE_ASSIGN
$res_LSJac4_2.$pDERLSJac4.dummyVarLSJac4 = ((-roo.irRadExc.J.$pDERLSJac4.dummyVarLSJac4[5]) - roo.irRadExc.rhoOpa[5] * roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[5]) * roo.irRadExc.kOpaInv[5]
*/
void tmp_two_returns_res_eqFunction_824(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,824};
  jacobian->resultVars[1] /* $res_LSJac4_2.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_VAR */ = ((-jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac4.dummyVarLSJac4[5] JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* roo.irRadExc.rhoOpa[5] PARAM */)) * (jacobian->tmpVars[6] /* roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[5] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* roo.irRadExc.kOpaInv[5] PARAM */));
  threadData->lastEquationSolved = 824;
}

/*
equation index: 825
type: SIMPLE_ASSIGN
$res_LSJac4_3.$pDERLSJac4.dummyVarLSJac4 = (-roo.irRadExc.F[2,6]) * roo.irRadExc.J.SeedLSJac4[2] - roo.irRadExc.F[1,6] * roo.irRadExc.J.SeedLSJac4[1] - roo.irRadExc.F[3,6] * roo.irRadExc.J.SeedLSJac4[3] - roo.irRadExc.F[4,6] * roo.irRadExc.J.SeedLSJac4[4] - roo.irRadExc.F[6,6] * roo.irRadExc.J.SeedLSJac4[6] - roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[6] - roo.irRadExc.F[5,6] * roo.irRadExc.J.$pDERLSJac4.dummyVarLSJac4[5]
*/
void tmp_two_returns_res_eqFunction_825(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,825};
  jacobian->resultVars[2] /* $res_LSJac4_3.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[552]] /* roo.irRadExc.F[2,6] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac4[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[546]] /* roo.irRadExc.F[1,6] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac4[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* roo.irRadExc.F[3,6] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac4[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[564]] /* roo.irRadExc.F[4,6] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac4[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* roo.irRadExc.F[6,6] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac4[6] SEED_VAR */)) - jacobian->tmpVars[0] /* roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[6] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[570]] /* roo.irRadExc.F[5,6] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac4.dummyVarLSJac4[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 825;
}

/*
equation index: 826
type: SIMPLE_ASSIGN
$res_LSJac4_4.$pDERLSJac4.dummyVarLSJac4 = (-roo.irRadExc.F[2,4]) * roo.irRadExc.J.SeedLSJac4[2] - roo.irRadExc.F[1,4] * roo.irRadExc.J.SeedLSJac4[1] - roo.irRadExc.F[3,4] * roo.irRadExc.J.SeedLSJac4[3] - roo.irRadExc.F[4,4] * roo.irRadExc.J.SeedLSJac4[4] - roo.irRadExc.F[6,4] * roo.irRadExc.J.SeedLSJac4[6] - roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[4] - roo.irRadExc.F[5,4] * roo.irRadExc.J.$pDERLSJac4.dummyVarLSJac4[5]
*/
void tmp_two_returns_res_eqFunction_826(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,826};
  jacobian->resultVars[3] /* $res_LSJac4_4.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* roo.irRadExc.F[2,4] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac4[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* roo.irRadExc.F[1,4] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac4[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[556]] /* roo.irRadExc.F[3,4] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac4[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* roo.irRadExc.F[4,4] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac4[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* roo.irRadExc.F[6,4] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac4[6] SEED_VAR */)) - jacobian->tmpVars[3] /* roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[4] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* roo.irRadExc.F[5,4] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac4.dummyVarLSJac4[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 826;
}

/*
equation index: 827
type: SIMPLE_ASSIGN
$res_LSJac4_5.$pDERLSJac4.dummyVarLSJac4 = (-roo.irRadExc.F[2,3]) * roo.irRadExc.J.SeedLSJac4[2] - roo.irRadExc.F[1,3] * roo.irRadExc.J.SeedLSJac4[1] - roo.irRadExc.F[3,3] * roo.irRadExc.J.SeedLSJac4[3] - roo.irRadExc.F[4,3] * roo.irRadExc.J.SeedLSJac4[4] - roo.irRadExc.F[6,3] * roo.irRadExc.J.SeedLSJac4[6] - roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[3] - roo.irRadExc.F[5,3] * roo.irRadExc.J.$pDERLSJac4.dummyVarLSJac4[5]
*/
void tmp_two_returns_res_eqFunction_827(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,827};
  jacobian->resultVars[4] /* $res_LSJac4_5.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* roo.irRadExc.F[2,3] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac4[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* roo.irRadExc.F[1,3] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac4[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* roo.irRadExc.F[3,3] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac4[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* roo.irRadExc.F[4,3] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac4[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[573]] /* roo.irRadExc.F[6,3] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac4[6] SEED_VAR */)) - jacobian->tmpVars[2] /* roo.irRadExc.G.$pDERLSJac4.dummyVarLSJac4[3] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* roo.irRadExc.F[5,3] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac4.dummyVarLSJac4[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 827;
}

OMC_DISABLE_OPT
int tmp_two_returns_res_functionJacLSJac4_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_two_returns_res_INDEX_JAC_LSJac4;
  
  
  return 0;
}

int tmp_two_returns_res_functionJacLSJac4_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_two_returns_res_INDEX_JAC_LSJac4;
  
  static void (*const eqFunctions[12])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    tmp_two_returns_res_eqFunction_816,
    tmp_two_returns_res_eqFunction_817,
    tmp_two_returns_res_eqFunction_818,
    tmp_two_returns_res_eqFunction_819,
    tmp_two_returns_res_eqFunction_820,
    tmp_two_returns_res_eqFunction_821,
    tmp_two_returns_res_eqFunction_822,
    tmp_two_returns_res_eqFunction_823,
    tmp_two_returns_res_eqFunction_824,
    tmp_two_returns_res_eqFunction_825,
    tmp_two_returns_res_eqFunction_826,
    tmp_two_returns_res_eqFunction_827
  };
  
  for (int id = 0; id < 12; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1049
type: SIMPLE_ASSIGN
$cse2 = exp(-17.2799 - (-4102.99) / (-35.719 + weaDat.weaBus.TWetBul))
*/
void tmp_two_returns_res_eqFunction_1049(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1049};
  jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */ = exp(-17.2799 - (DIVISION(-4102.99,-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* weaDat.weaBus.TWetBul variable */),"-35.719 + weaDat.weaBus.TWetBul")));
  threadData->lastEquationSolved = 1049;
}

/*
equation index: 1050
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac5.dummyVarNLSJac5 = 4.172134052434367 * weaDat.pAtmSel.p * $cse2 * weaDat.weaBus.TWetBul.SeedNLSJac5 / ((-35.719 + weaDat.weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse2)) ^ 2.0
*/
void tmp_two_returns_res_eqFunction_1050(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1050};
  modelica_real tmp2;
  tmp2 = (-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* weaDat.weaBus.TWetBul variable */)) * (-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1366]] /* weaDat.pAtmSel.p PARAM */)) * (jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */)));
  jacobian->tmpVars[1] /* weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = (4.172134052434367) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1366]] /* weaDat.pAtmSel.p PARAM */)) * ((jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaDat.weaBus.TWetBul.SeedNLSJac5 SEED_VAR */,(tmp2 * tmp2),"((-35.719 + weaDat.weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse2)) ^ 2.0"))));
  threadData->lastEquationSolved = 1050;
}

/*
equation index: 1051
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac5.dummyVarNLSJac5 = (1.0 - weaDat.tWetBul_TDryBulXi.XiDryBul) * weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac5.dummyVarNLSJac5 / (1.0 - weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void tmp_two_returns_res_eqFunction_1051(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1051};
  modelica_real tmp3;
  tmp3 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[2] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[1] /* weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */,(tmp3 * tmp3),"(1.0 - weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 1051;
}

/*
equation index: 1052
type: SIMPLE_ASSIGN
$res_NLSJac5_1.$pDERNLSJac5.dummyVarNLSJac5 = (-2324.0) * (273.15 - weaDat.weaBus.TWetBul) * weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac5.dummyVarNLSJac5 + (-2.5010145e6) * weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac5.dummyVarNLSJac5 - weaDat.weaBus.TWetBul.SeedNLSJac5 * (1006.0 * (1.0 - weaDat.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaDat.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaDat.tWetBul_TDryBulXi.XiDryBul - weaDat.tWetBul_TDryBulXi.XiSatRefIn))
*/
void tmp_two_returns_res_eqFunction_1052(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1052};
  jacobian->resultVars[0] /* $res_NLSJac5_1.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* weaDat.weaBus.TWetBul variable */)) * (jacobian->tmpVars[2] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[2] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaDat.weaBus.TWetBul.SeedNLSJac5 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 1052;
}

OMC_DISABLE_OPT
int tmp_two_returns_res_functionJacNLSJac5_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_two_returns_res_INDEX_JAC_NLSJac5;
  
  
  return 0;
}

int tmp_two_returns_res_functionJacNLSJac5_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_two_returns_res_INDEX_JAC_NLSJac5;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    tmp_two_returns_res_eqFunction_1049,
    tmp_two_returns_res_eqFunction_1050,
    tmp_two_returns_res_eqFunction_1051,
    tmp_two_returns_res_eqFunction_1052
  };
  
  for (int id = 0; id < 4; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1255
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[6] = (-roo.irRadExc.J.SeedLSJac6[6]) * roo.irRadExc.kOpaInv[6] / (roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6])
*/
void tmp_two_returns_res_eqFunction_1255(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1255};
  jacobian->tmpVars[0] /* roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[6] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac6[6] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* roo.irRadExc.kOpaInv[6] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* roo.irRadExc.kOpaInv[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* roo.irRadExc.rhoOpa[6] PARAM */)),"roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6]");
  threadData->lastEquationSolved = 1255;
}

/*
equation index: 1256
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[4] = (-roo.irRadExc.J.SeedLSJac6[4]) * roo.irRadExc.kOpaInv[4] / (roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4])
*/
void tmp_two_returns_res_eqFunction_1256(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1256};
  jacobian->tmpVars[1] /* roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[4] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac6[4] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* roo.irRadExc.kOpaInv[4] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* roo.irRadExc.kOpaInv[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[784]] /* roo.irRadExc.rhoOpa[4] PARAM */)),"roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4]");
  threadData->lastEquationSolved = 1256;
}

/*
equation index: 1257
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[2] = (-roo.irRadExc.J.SeedLSJac6[2]) * roo.irRadExc.kOpaInv[2] / (roo.irRadExc.kOpaInv[2] * roo.irRadExc.rhoOpa[2])
*/
void tmp_two_returns_res_eqFunction_1257(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1257};
  jacobian->tmpVars[2] /* roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[2] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac6[2] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* roo.irRadExc.kOpaInv[2] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* roo.irRadExc.kOpaInv[2] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* roo.irRadExc.rhoOpa[2] PARAM */)),"roo.irRadExc.kOpaInv[2] * roo.irRadExc.rhoOpa[2]");
  threadData->lastEquationSolved = 1257;
}

/*
equation index: 1258
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[1] = (-roo.irRadExc.J.SeedLSJac6[1]) * roo.irRadExc.kOpaInv[1] / (roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1])
*/
void tmp_two_returns_res_eqFunction_1258(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1258};
  jacobian->tmpVars[3] /* roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[1] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac6[1] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* roo.irRadExc.kOpaInv[1] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* roo.irRadExc.kOpaInv[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* roo.irRadExc.rhoOpa[1] PARAM */)),"roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1]");
  threadData->lastEquationSolved = 1258;
}

/*
equation index: 1259
type: SIMPLE_ASSIGN
roo.irRadExc.J.$pDERLSJac6.dummyVarLSJac6[5] = ((-roo.irRadExc.F[2,6]) * roo.irRadExc.J.SeedLSJac6[2] - roo.irRadExc.F[1,6] * roo.irRadExc.J.SeedLSJac6[1] - roo.irRadExc.F[3,6] * roo.irRadExc.J.SeedLSJac6[3] - roo.irRadExc.F[4,6] * roo.irRadExc.J.SeedLSJac6[4] - roo.irRadExc.F[6,6] * roo.irRadExc.J.SeedLSJac6[6] - roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[6]) / roo.irRadExc.F[5,6]
*/
void tmp_two_returns_res_eqFunction_1259(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,1259};
  jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac6.dummyVarLSJac6[5] JACOBIAN_TMP_VAR */ = DIVISION(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[552]] /* roo.irRadExc.F[2,6] PARAM */))) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac6[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[546]] /* roo.irRadExc.F[1,6] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac6[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* roo.irRadExc.F[3,6] PARAM */)) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac6[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[564]] /* roo.irRadExc.F[4,6] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac6[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* roo.irRadExc.F[6,6] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac6[6] SEED_VAR */)) - jacobian->tmpVars[0] /* roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[6] JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[570]] /* roo.irRadExc.F[5,6] PARAM */),"roo.irRadExc.F[5,6]");
  threadData->lastEquationSolved = 1259;
}

/*
equation index: 1260
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[3] = (-roo.irRadExc.F[2,3]) * roo.irRadExc.J.SeedLSJac6[2] - roo.irRadExc.F[1,3] * roo.irRadExc.J.SeedLSJac6[1] - roo.irRadExc.F[3,3] * roo.irRadExc.J.SeedLSJac6[3] - roo.irRadExc.F[4,3] * roo.irRadExc.J.SeedLSJac6[4] - roo.irRadExc.F[6,3] * roo.irRadExc.J.SeedLSJac6[6] - roo.irRadExc.F[5,3] * roo.irRadExc.J.$pDERLSJac6.dummyVarLSJac6[5]
*/
void tmp_two_returns_res_eqFunction_1260(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,1260};
  jacobian->tmpVars[5] /* roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[3] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* roo.irRadExc.F[2,3] PARAM */))) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac6[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* roo.irRadExc.F[1,3] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac6[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* roo.irRadExc.F[3,3] PARAM */)) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac6[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* roo.irRadExc.F[4,3] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac6[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[573]] /* roo.irRadExc.F[6,3] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac6[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* roo.irRadExc.F[5,3] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac6.dummyVarLSJac6[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1260;
}

/*
equation index: 1261
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[5] = (-roo.irRadExc.F[2,5]) * roo.irRadExc.J.SeedLSJac6[2] - roo.irRadExc.F[1,5] * roo.irRadExc.J.SeedLSJac6[1] - roo.irRadExc.F[3,5] * roo.irRadExc.J.SeedLSJac6[3] - roo.irRadExc.F[4,5] * roo.irRadExc.J.SeedLSJac6[4] - roo.irRadExc.F[6,5] * roo.irRadExc.J.SeedLSJac6[6] - roo.irRadExc.F[5,5] * roo.irRadExc.J.$pDERLSJac6.dummyVarLSJac6[5]
*/
void tmp_two_returns_res_eqFunction_1261(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,1261};
  jacobian->tmpVars[6] /* roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[5] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* roo.irRadExc.F[2,5] PARAM */))) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac6[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[545]] /* roo.irRadExc.F[1,5] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac6[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[557]] /* roo.irRadExc.F[3,5] PARAM */)) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac6[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[563]] /* roo.irRadExc.F[4,5] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac6[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* roo.irRadExc.F[6,5] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac6[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[569]] /* roo.irRadExc.F[5,5] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac6.dummyVarLSJac6[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1261;
}

/*
equation index: 1262
type: SIMPLE_ASSIGN
$res_LSJac6_1.$pDERLSJac6.dummyVarLSJac6 = ((-roo.irRadExc.J.$pDERLSJac6.dummyVarLSJac6[5]) - roo.irRadExc.rhoOpa[5] * roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[5]) * roo.irRadExc.kOpaInv[5]
*/
void tmp_two_returns_res_eqFunction_1262(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,1262};
  jacobian->resultVars[0] /* $res_LSJac6_1.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_VAR */ = ((-jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac6.dummyVarLSJac6[5] JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* roo.irRadExc.rhoOpa[5] PARAM */)) * (jacobian->tmpVars[6] /* roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[5] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* roo.irRadExc.kOpaInv[5] PARAM */));
  threadData->lastEquationSolved = 1262;
}

/*
equation index: 1263
type: SIMPLE_ASSIGN
$res_LSJac6_2.$pDERLSJac6.dummyVarLSJac6 = ((-roo.irRadExc.J.SeedLSJac6[3]) - roo.irRadExc.rhoOpa[3] * roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[3]) * roo.irRadExc.kOpaInv[3]
*/
void tmp_two_returns_res_eqFunction_1263(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,1263};
  jacobian->resultVars[1] /* $res_LSJac6_2.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_VAR */ = ((-jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac6[3] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* roo.irRadExc.rhoOpa[3] PARAM */)) * (jacobian->tmpVars[5] /* roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[3] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* roo.irRadExc.kOpaInv[3] PARAM */));
  threadData->lastEquationSolved = 1263;
}

/*
equation index: 1264
type: SIMPLE_ASSIGN
$res_LSJac6_3.$pDERLSJac6.dummyVarLSJac6 = (-roo.irRadExc.F[2,4]) * roo.irRadExc.J.SeedLSJac6[2] - roo.irRadExc.F[1,4] * roo.irRadExc.J.SeedLSJac6[1] - roo.irRadExc.F[3,4] * roo.irRadExc.J.SeedLSJac6[3] - roo.irRadExc.F[4,4] * roo.irRadExc.J.SeedLSJac6[4] - roo.irRadExc.F[6,4] * roo.irRadExc.J.SeedLSJac6[6] - roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[4] - roo.irRadExc.F[5,4] * roo.irRadExc.J.$pDERLSJac6.dummyVarLSJac6[5]
*/
void tmp_two_returns_res_eqFunction_1264(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,1264};
  jacobian->resultVars[2] /* $res_LSJac6_3.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* roo.irRadExc.F[2,4] PARAM */))) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac6[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* roo.irRadExc.F[1,4] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac6[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[556]] /* roo.irRadExc.F[3,4] PARAM */)) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac6[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* roo.irRadExc.F[4,4] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac6[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* roo.irRadExc.F[6,4] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac6[6] SEED_VAR */)) - jacobian->tmpVars[1] /* roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[4] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* roo.irRadExc.F[5,4] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac6.dummyVarLSJac6[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1264;
}

/*
equation index: 1265
type: SIMPLE_ASSIGN
$res_LSJac6_4.$pDERLSJac6.dummyVarLSJac6 = (-roo.irRadExc.F[2,2]) * roo.irRadExc.J.SeedLSJac6[2] - roo.irRadExc.F[1,2] * roo.irRadExc.J.SeedLSJac6[1] - roo.irRadExc.F[3,2] * roo.irRadExc.J.SeedLSJac6[3] - roo.irRadExc.F[4,2] * roo.irRadExc.J.SeedLSJac6[4] - roo.irRadExc.F[6,2] * roo.irRadExc.J.SeedLSJac6[6] - roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[2] - roo.irRadExc.F[5,2] * roo.irRadExc.J.$pDERLSJac6.dummyVarLSJac6[5]
*/
void tmp_two_returns_res_eqFunction_1265(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,1265};
  jacobian->resultVars[3] /* $res_LSJac6_4.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* roo.irRadExc.F[2,2] PARAM */))) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac6[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* roo.irRadExc.F[1,2] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac6[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[554]] /* roo.irRadExc.F[3,2] PARAM */)) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac6[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* roo.irRadExc.F[4,2] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac6[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* roo.irRadExc.F[6,2] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac6[6] SEED_VAR */)) - jacobian->tmpVars[2] /* roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[2] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[566]] /* roo.irRadExc.F[5,2] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac6.dummyVarLSJac6[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1265;
}

/*
equation index: 1266
type: SIMPLE_ASSIGN
$res_LSJac6_5.$pDERLSJac6.dummyVarLSJac6 = (-roo.irRadExc.F[2,1]) * roo.irRadExc.J.SeedLSJac6[2] - roo.irRadExc.F[1,1] * roo.irRadExc.J.SeedLSJac6[1] - roo.irRadExc.F[3,1] * roo.irRadExc.J.SeedLSJac6[3] - roo.irRadExc.F[4,1] * roo.irRadExc.J.SeedLSJac6[4] - roo.irRadExc.F[6,1] * roo.irRadExc.J.SeedLSJac6[6] - roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[1] - roo.irRadExc.F[5,1] * roo.irRadExc.J.$pDERLSJac6.dummyVarLSJac6[5]
*/
void tmp_two_returns_res_eqFunction_1266(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,1266};
  jacobian->resultVars[4] /* $res_LSJac6_5.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* roo.irRadExc.F[2,1] PARAM */))) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac6[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* roo.irRadExc.F[1,1] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac6[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[553]] /* roo.irRadExc.F[3,1] PARAM */)) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac6[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* roo.irRadExc.F[4,1] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac6[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* roo.irRadExc.F[6,1] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac6[6] SEED_VAR */)) - jacobian->tmpVars[3] /* roo.irRadExc.G.$pDERLSJac6.dummyVarLSJac6[1] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* roo.irRadExc.F[5,1] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac6.dummyVarLSJac6[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1266;
}

OMC_DISABLE_OPT
int tmp_two_returns_res_functionJacLSJac6_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_two_returns_res_INDEX_JAC_LSJac6;
  
  
  return 0;
}

int tmp_two_returns_res_functionJacLSJac6_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_two_returns_res_INDEX_JAC_LSJac6;
  
  static void (*const eqFunctions[12])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    tmp_two_returns_res_eqFunction_1255,
    tmp_two_returns_res_eqFunction_1256,
    tmp_two_returns_res_eqFunction_1257,
    tmp_two_returns_res_eqFunction_1258,
    tmp_two_returns_res_eqFunction_1259,
    tmp_two_returns_res_eqFunction_1260,
    tmp_two_returns_res_eqFunction_1261,
    tmp_two_returns_res_eqFunction_1262,
    tmp_two_returns_res_eqFunction_1263,
    tmp_two_returns_res_eqFunction_1264,
    tmp_two_returns_res_eqFunction_1265,
    tmp_two_returns_res_eqFunction_1266
  };
  
  for (int id = 0; id < 12; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1374
type: SIMPLE_ASSIGN
$cse19 = exp(-17.2799 - (-4102.99) / (-35.719 + weaDat.weaBus.TWetBul))
*/
void tmp_two_returns_res_eqFunction_1374(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1374};
  jacobian->tmpVars[0] /* $cse19 JACOBIAN_TMP_VAR */ = exp(-17.2799 - (DIVISION(-4102.99,-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* weaDat.weaBus.TWetBul variable */),"-35.719 + weaDat.weaBus.TWetBul")));
  threadData->lastEquationSolved = 1374;
}

/*
equation index: 1375
type: SIMPLE_ASSIGN
$cse4.$pDERNLSJac9.dummyVarNLSJac9 = (-4102.99) * $cse19 * weaDat.weaBus.TWetBul.SeedNLSJac9 / (-35.719 + weaDat.weaBus.TWetBul) ^ 2.0
*/
void tmp_two_returns_res_eqFunction_1375(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1375};
  modelica_real tmp4;
  tmp4 = -35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* weaDat.weaBus.TWetBul variable */);
  jacobian->tmpVars[1] /* $cse4.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = (-4102.99) * ((jacobian->tmpVars[0] /* $cse19 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaDat.weaBus.TWetBul.SeedNLSJac9 SEED_VAR */,(tmp4 * tmp4),"(-35.719 + weaDat.weaBus.TWetBul) ^ 2.0")));
  threadData->lastEquationSolved = 1375;
}

/*
equation index: 1376
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac9.dummyVarNLSJac9 = (-0.0010168521133208628) * weaDat.pAtmSel.p * $cse4.$pDERNLSJac9.dummyVarNLSJac9 / (-0.378035286922501 + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse4) ^ 2.0
*/
void tmp_two_returns_res_eqFunction_1376(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1376};
  modelica_real tmp5;
  tmp5 = -0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1366]] /* weaDat.pAtmSel.p PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* $cse4 variable */)));
  jacobian->tmpVars[2] /* weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = (-0.0010168521133208628) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1366]] /* weaDat.pAtmSel.p PARAM */)) * (DIVISION(jacobian->tmpVars[1] /* $cse4.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */,(tmp5 * tmp5),"(-0.378035286922501 + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse4) ^ 2.0")));
  threadData->lastEquationSolved = 1376;
}

/*
equation index: 1377
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac9.dummyVarNLSJac9 = (1.0 - weaDat.tWetBul_TDryBulXi.XiDryBul) * weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac9.dummyVarNLSJac9 / (1.0 - weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void tmp_two_returns_res_eqFunction_1377(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1377};
  modelica_real tmp6;
  tmp6 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[3] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[2] /* weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */,(tmp6 * tmp6),"(1.0 - weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 1377;
}

/*
equation index: 1378
type: SIMPLE_ASSIGN
$res_NLSJac9_1.$pDERNLSJac9.dummyVarNLSJac9 = (-2324.0) * (273.15 - weaDat.weaBus.TWetBul) * weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac9.dummyVarNLSJac9 + (-2.5010145e6) * weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac9.dummyVarNLSJac9 - weaDat.weaBus.TWetBul.SeedNLSJac9 * (1006.0 * (1.0 - weaDat.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaDat.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaDat.tWetBul_TDryBulXi.XiDryBul - weaDat.tWetBul_TDryBulXi.XiSatRefIn))
*/
void tmp_two_returns_res_eqFunction_1378(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,1378};
  jacobian->resultVars[0] /* $res_NLSJac9_1.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* weaDat.weaBus.TWetBul variable */)) * (jacobian->tmpVars[3] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[3] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaDat.weaBus.TWetBul.SeedNLSJac9 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 1378;
}

OMC_DISABLE_OPT
int tmp_two_returns_res_functionJacNLSJac9_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_two_returns_res_INDEX_JAC_NLSJac9;
  
  
  return 0;
}

int tmp_two_returns_res_functionJacNLSJac9_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_two_returns_res_INDEX_JAC_NLSJac9;
  
  static void (*const eqFunctions[5])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    tmp_two_returns_res_eqFunction_1374,
    tmp_two_returns_res_eqFunction_1375,
    tmp_two_returns_res_eqFunction_1376,
    tmp_two_returns_res_eqFunction_1377,
    tmp_two_returns_res_eqFunction_1378
  };
  
  for (int id = 0; id < 5; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
int tmp_two_returns_res_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int tmp_two_returns_res_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int tmp_two_returns_res_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int tmp_two_returns_res_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int tmp_two_returns_res_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int tmp_two_returns_res_functionJacA_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_two_returns_res_INDEX_JAC_A;
  
  
  return 0;
}

int tmp_two_returns_res_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_two_returns_res_INDEX_JAC_A;
  
  
  return 0;
}

OMC_DISABLE_OPT
int tmp_two_returns_res_initialAnalyticJacobianLSJac0(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "tmp_two_returns_res_JacLSJac0.bin");
  
  initJacobian(jacobian, 5, 5, 12, tmp_two_returns_res_functionJacLSJac0_column, NULL, NULL);
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
int tmp_two_returns_res_initialAnalyticJacobianNLSJac3(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "tmp_two_returns_res_JacNLSJac3.bin");
  
  initJacobian(jacobian, 1, 1, 4, tmp_two_returns_res_functionJacNLSJac3_column, NULL, NULL);
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
int tmp_two_returns_res_initialAnalyticJacobianLSJac4(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "tmp_two_returns_res_JacLSJac4.bin");
  
  initJacobian(jacobian, 5, 5, 12, tmp_two_returns_res_functionJacLSJac4_column, NULL, NULL);
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
int tmp_two_returns_res_initialAnalyticJacobianNLSJac5(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "tmp_two_returns_res_JacNLSJac5.bin");
  
  initJacobian(jacobian, 1, 1, 4, tmp_two_returns_res_functionJacNLSJac5_column, NULL, NULL);
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
int tmp_two_returns_res_initialAnalyticJacobianLSJac6(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "tmp_two_returns_res_JacLSJac6.bin");
  
  initJacobian(jacobian, 5, 5, 12, tmp_two_returns_res_functionJacLSJac6_column, NULL, NULL);
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
int tmp_two_returns_res_initialAnalyticJacobianNLSJac9(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "tmp_two_returns_res_JacNLSJac9.bin");
  
  initJacobian(jacobian, 1, 1, 5, tmp_two_returns_res_functionJacNLSJac9_column, NULL, NULL);
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
int tmp_two_returns_res_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int tmp_two_returns_res_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int tmp_two_returns_res_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int tmp_two_returns_res_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int tmp_two_returns_res_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
OMC_DISABLE_OPT
int tmp_two_returns_res_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "tmp_two_returns_res_JacA.bin");
  
  initJacobian(jacobian, 22, 22, 0, tmp_two_returns_res_functionJacA_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(22, 214, 21);
  jacobian->availability = JACOBIAN_ONLY_SPARSITY;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 22+1, pFile, FALSE);
  if (count != 22+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 22+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 214, pFile, FALSE);
  if (count != 214) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 214, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 22);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 22);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 22);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 22);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1, 22);
  /* color 6 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 6, 1, 22);
  /* color 7 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 7, 1, 22);
  /* color 8 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 8, 1, 22);
  /* color 9 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 9, 1, 22);
  /* color 10 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 10, 1, 22);
  /* color 11 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 11, 1, 22);
  /* color 12 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 12, 1, 22);
  /* color 13 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 13, 1, 22);
  /* color 14 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 14, 1, 22);
  /* color 15 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 15, 1, 22);
  /* color 16 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 16, 1, 22);
  /* color 17 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 17, 1, 22);
  /* color 18 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 18, 1, 22);
  /* color 19 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 19, 1, 22);
  /* color 20 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 20, 1, 22);
  /* color 21 with 2 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 21, 2, 22);
  
  omc_fclose(pFile);
  
  return 0;
}


