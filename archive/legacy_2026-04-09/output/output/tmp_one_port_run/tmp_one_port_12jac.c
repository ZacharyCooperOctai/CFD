/* Jacobians 10 */
#include "tmp_one_port_model.h"
#include "tmp_one_port_12jac.h"
#include "simulation/jacobian_util.h"
#include "util/omc_file.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 211
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[6] = (-roo.irRadExc.J.SeedLSJac0[6]) * roo.irRadExc.kOpaInv[6] / (roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6])
*/
void tmp_one_port_eqFunction_211(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,211};
  jacobian->tmpVars[0] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[6] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[733]] /* roo.irRadExc.kOpaInv[6] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[733]] /* roo.irRadExc.kOpaInv[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* roo.irRadExc.rhoOpa[6] PARAM */)),"roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6]");
  threadData->lastEquationSolved = 211;
}

/*
equation index: 212
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[1] = (-roo.irRadExc.J.SeedLSJac0[1]) * roo.irRadExc.kOpaInv[1] / (roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1])
*/
void tmp_one_port_eqFunction_212(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,212};
  jacobian->tmpVars[1] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[728]] /* roo.irRadExc.kOpaInv[1] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[728]] /* roo.irRadExc.kOpaInv[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[734]] /* roo.irRadExc.rhoOpa[1] PARAM */)),"roo.irRadExc.kOpaInv[1] * roo.irRadExc.rhoOpa[1]");
  threadData->lastEquationSolved = 212;
}

/*
equation index: 213
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[3] = (-roo.irRadExc.J.SeedLSJac0[3]) * roo.irRadExc.kOpaInv[3] / (roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3])
*/
void tmp_one_port_eqFunction_213(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,213};
  jacobian->tmpVars[2] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* roo.irRadExc.kOpaInv[3] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* roo.irRadExc.kOpaInv[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[736]] /* roo.irRadExc.rhoOpa[3] PARAM */)),"roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3]");
  threadData->lastEquationSolved = 213;
}

/*
equation index: 214
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[4] = (-roo.irRadExc.J.SeedLSJac0[4]) * roo.irRadExc.kOpaInv[4] / (roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4])
*/
void tmp_one_port_eqFunction_214(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,214};
  jacobian->tmpVars[3] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[4] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* roo.irRadExc.kOpaInv[4] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* roo.irRadExc.kOpaInv[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* roo.irRadExc.rhoOpa[4] PARAM */)),"roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4]");
  threadData->lastEquationSolved = 214;
}

/*
equation index: 215
type: SIMPLE_ASSIGN
roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] = ((-roo.irRadExc.F[2,1]) * roo.irRadExc.J.SeedLSJac0[2] - roo.irRadExc.F[1,1] * roo.irRadExc.J.SeedLSJac0[1] - roo.irRadExc.F[3,1] * roo.irRadExc.J.SeedLSJac0[3] - roo.irRadExc.F[4,1] * roo.irRadExc.J.SeedLSJac0[4] - roo.irRadExc.F[6,1] * roo.irRadExc.J.SeedLSJac0[6] - roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[1]) / roo.irRadExc.F[5,1]
*/
void tmp_one_port_eqFunction_215(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,215};
  jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */ = DIVISION(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* roo.irRadExc.F[2,1] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* roo.irRadExc.F[1,1] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* roo.irRadExc.F[3,1] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* roo.irRadExc.F[4,1] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* roo.irRadExc.F[6,1] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - jacobian->tmpVars[1] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[518]] /* roo.irRadExc.F[5,1] PARAM */),"roo.irRadExc.F[5,1]");
  threadData->lastEquationSolved = 215;
}

/*
equation index: 216
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[2] = (-roo.irRadExc.F[2,2]) * roo.irRadExc.J.SeedLSJac0[2] - roo.irRadExc.F[1,2] * roo.irRadExc.J.SeedLSJac0[1] - roo.irRadExc.F[3,2] * roo.irRadExc.J.SeedLSJac0[3] - roo.irRadExc.F[4,2] * roo.irRadExc.J.SeedLSJac0[4] - roo.irRadExc.F[6,2] * roo.irRadExc.J.SeedLSJac0[6] - roo.irRadExc.F[5,2] * roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5]
*/
void tmp_one_port_eqFunction_216(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,216};
  jacobian->tmpVars[5] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* roo.irRadExc.F[2,2] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* roo.irRadExc.F[1,2] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* roo.irRadExc.F[3,2] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* roo.irRadExc.F[4,2] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* roo.irRadExc.F[6,2] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* roo.irRadExc.F[5,2] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 216;
}

/*
equation index: 217
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[5] = (-roo.irRadExc.F[2,5]) * roo.irRadExc.J.SeedLSJac0[2] - roo.irRadExc.F[1,5] * roo.irRadExc.J.SeedLSJac0[1] - roo.irRadExc.F[3,5] * roo.irRadExc.J.SeedLSJac0[3] - roo.irRadExc.F[4,5] * roo.irRadExc.J.SeedLSJac0[4] - roo.irRadExc.F[6,5] * roo.irRadExc.J.SeedLSJac0[6] - roo.irRadExc.F[5,5] * roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5]
*/
void tmp_one_port_eqFunction_217(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,217};
  jacobian->tmpVars[6] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* roo.irRadExc.F[2,5] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[498]] /* roo.irRadExc.F[1,5] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* roo.irRadExc.F[3,5] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* roo.irRadExc.F[4,5] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* roo.irRadExc.F[6,5] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* roo.irRadExc.F[5,5] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 217;
}

/*
equation index: 218
type: SIMPLE_ASSIGN
$res_LSJac0_1.$pDERLSJac0.dummyVarLSJac0 = ((-roo.irRadExc.J.SeedLSJac0[2]) - roo.irRadExc.rhoOpa[2] * roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[2]) * roo.irRadExc.kOpaInv[2]
*/
void tmp_one_port_eqFunction_218(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,218};
  jacobian->resultVars[0] /* $res_LSJac0_1.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[735]] /* roo.irRadExc.rhoOpa[2] PARAM */)) * (jacobian->tmpVars[5] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* roo.irRadExc.kOpaInv[2] PARAM */));
  threadData->lastEquationSolved = 218;
}

/*
equation index: 219
type: SIMPLE_ASSIGN
$res_LSJac0_2.$pDERLSJac0.dummyVarLSJac0 = ((-roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5]) - roo.irRadExc.rhoOpa[5] * roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[5]) * roo.irRadExc.kOpaInv[5]
*/
void tmp_one_port_eqFunction_219(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,219};
  jacobian->resultVars[1] /* $res_LSJac0_2.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* roo.irRadExc.rhoOpa[5] PARAM */)) * (jacobian->tmpVars[6] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* roo.irRadExc.kOpaInv[5] PARAM */));
  threadData->lastEquationSolved = 219;
}

/*
equation index: 220
type: SIMPLE_ASSIGN
$res_LSJac0_3.$pDERLSJac0.dummyVarLSJac0 = (-roo.irRadExc.F[2,6]) * roo.irRadExc.J.SeedLSJac0[2] - roo.irRadExc.F[1,6] * roo.irRadExc.J.SeedLSJac0[1] - roo.irRadExc.F[3,6] * roo.irRadExc.J.SeedLSJac0[3] - roo.irRadExc.F[4,6] * roo.irRadExc.J.SeedLSJac0[4] - roo.irRadExc.F[6,6] * roo.irRadExc.J.SeedLSJac0[6] - roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[6] - roo.irRadExc.F[5,6] * roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5]
*/
void tmp_one_port_eqFunction_220(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,220};
  jacobian->resultVars[2] /* $res_LSJac0_3.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* roo.irRadExc.F[2,6] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* roo.irRadExc.F[1,6] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[511]] /* roo.irRadExc.F[3,6] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* roo.irRadExc.F[4,6] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* roo.irRadExc.F[6,6] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - jacobian->tmpVars[0] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[6] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* roo.irRadExc.F[5,6] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 220;
}

/*
equation index: 221
type: SIMPLE_ASSIGN
$res_LSJac0_4.$pDERLSJac0.dummyVarLSJac0 = (-roo.irRadExc.F[2,4]) * roo.irRadExc.J.SeedLSJac0[2] - roo.irRadExc.F[1,4] * roo.irRadExc.J.SeedLSJac0[1] - roo.irRadExc.F[3,4] * roo.irRadExc.J.SeedLSJac0[3] - roo.irRadExc.F[4,4] * roo.irRadExc.J.SeedLSJac0[4] - roo.irRadExc.F[6,4] * roo.irRadExc.J.SeedLSJac0[6] - roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[4] - roo.irRadExc.F[5,4] * roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5]
*/
void tmp_one_port_eqFunction_221(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,221};
  jacobian->resultVars[3] /* $res_LSJac0_4.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* roo.irRadExc.F[2,4] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[497]] /* roo.irRadExc.F[1,4] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* roo.irRadExc.F[3,4] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* roo.irRadExc.F[4,4] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* roo.irRadExc.F[6,4] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - jacobian->tmpVars[3] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[4] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* roo.irRadExc.F[5,4] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 221;
}

/*
equation index: 222
type: SIMPLE_ASSIGN
$res_LSJac0_5.$pDERLSJac0.dummyVarLSJac0 = (-roo.irRadExc.F[2,3]) * roo.irRadExc.J.SeedLSJac0[2] - roo.irRadExc.F[1,3] * roo.irRadExc.J.SeedLSJac0[1] - roo.irRadExc.F[3,3] * roo.irRadExc.J.SeedLSJac0[3] - roo.irRadExc.F[4,3] * roo.irRadExc.J.SeedLSJac0[4] - roo.irRadExc.F[6,3] * roo.irRadExc.J.SeedLSJac0[6] - roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[3] - roo.irRadExc.F[5,3] * roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5]
*/
void tmp_one_port_eqFunction_222(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,222};
  jacobian->resultVars[4] /* $res_LSJac0_5.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* roo.irRadExc.F[2,3] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac0[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* roo.irRadExc.F[1,3] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac0[1] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* roo.irRadExc.F[3,3] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac0[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* roo.irRadExc.F[4,3] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac0[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* roo.irRadExc.F[6,3] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac0[6] SEED_VAR */)) - jacobian->tmpVars[2] /* roo.irRadExc.G.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* roo.irRadExc.F[5,3] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac0.dummyVarLSJac0[5] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 222;
}

OMC_DISABLE_OPT
int tmp_one_port_functionJacLSJac0_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_one_port_INDEX_JAC_LSJac0;
  
  
  return 0;
}

int tmp_one_port_functionJacLSJac0_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_one_port_INDEX_JAC_LSJac0;
  
  static void (*const eqFunctions[12])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    tmp_one_port_eqFunction_211,
    tmp_one_port_eqFunction_212,
    tmp_one_port_eqFunction_213,
    tmp_one_port_eqFunction_214,
    tmp_one_port_eqFunction_215,
    tmp_one_port_eqFunction_216,
    tmp_one_port_eqFunction_217,
    tmp_one_port_eqFunction_218,
    tmp_one_port_eqFunction_219,
    tmp_one_port_eqFunction_220,
    tmp_one_port_eqFunction_221,
    tmp_one_port_eqFunction_222
  };
  
  for (int id = 0; id < 12; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 395
type: SIMPLE_ASSIGN
$cse1 = exp(-17.2799 - (-4102.99) / (-35.719 + weaDat.weaBus.TWetBul))
*/
void tmp_one_port_eqFunction_395(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,395};
  jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */ = exp(-17.2799 - (DIVISION(-4102.99,-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.TWetBul variable */),"-35.719 + weaDat.weaBus.TWetBul")));
  threadData->lastEquationSolved = 395;
}

/*
equation index: 396
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac1.dummyVarNLSJac1 = 4.172134052434367 * weaDat.pAtmSel.p * $cse1 * weaDat.weaBus.TWetBul.SeedNLSJac1 / ((-35.719 + weaDat.weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse1)) ^ 2.0
*/
void tmp_one_port_eqFunction_396(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,396};
  modelica_real tmp0;
  tmp0 = (-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.TWetBul variable */)) * (-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* weaDat.pAtmSel.p PARAM */)) * (jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */)));
  jacobian->tmpVars[1] /* weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = (4.172134052434367) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* weaDat.pAtmSel.p PARAM */)) * ((jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaDat.weaBus.TWetBul.SeedNLSJac1 SEED_VAR */,(tmp0 * tmp0),"((-35.719 + weaDat.weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse1)) ^ 2.0"))));
  threadData->lastEquationSolved = 396;
}

/*
equation index: 397
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac1.dummyVarNLSJac1 = (1.0 - weaDat.tWetBul_TDryBulXi.XiDryBul) * weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac1.dummyVarNLSJac1 / (1.0 - weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void tmp_one_port_eqFunction_397(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,397};
  modelica_real tmp1;
  tmp1 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[2] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[1] /* weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */,(tmp1 * tmp1),"(1.0 - weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 397;
}

/*
equation index: 398
type: SIMPLE_ASSIGN
$res_NLSJac1_1.$pDERNLSJac1.dummyVarNLSJac1 = (-2324.0) * (273.15 - weaDat.weaBus.TWetBul) * weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac1.dummyVarNLSJac1 + (-2.5010145e6) * weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac1.dummyVarNLSJac1 - weaDat.weaBus.TWetBul.SeedNLSJac1 * (1006.0 * (1.0 - weaDat.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaDat.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaDat.tWetBul_TDryBulXi.XiDryBul - weaDat.tWetBul_TDryBulXi.XiSatRefIn))
*/
void tmp_one_port_eqFunction_398(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,398};
  jacobian->resultVars[0] /* $res_NLSJac1_1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.TWetBul variable */)) * (jacobian->tmpVars[2] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[2] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaDat.weaBus.TWetBul.SeedNLSJac1 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 398;
}

OMC_DISABLE_OPT
int tmp_one_port_functionJacNLSJac1_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_one_port_INDEX_JAC_NLSJac1;
  
  
  return 0;
}

int tmp_one_port_functionJacNLSJac1_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_one_port_INDEX_JAC_NLSJac1;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    tmp_one_port_eqFunction_395,
    tmp_one_port_eqFunction_396,
    tmp_one_port_eqFunction_397,
    tmp_one_port_eqFunction_398
  };
  
  for (int id = 0; id < 4; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 587
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[3] = (-roo.irRadExc.J.SeedLSJac2[3]) * roo.irRadExc.kOpaInv[3] / (roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3])
*/
void tmp_one_port_eqFunction_587(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,587};
  jacobian->tmpVars[0] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[3] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac2[3] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* roo.irRadExc.kOpaInv[3] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* roo.irRadExc.kOpaInv[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[736]] /* roo.irRadExc.rhoOpa[3] PARAM */)),"roo.irRadExc.kOpaInv[3] * roo.irRadExc.rhoOpa[3]");
  threadData->lastEquationSolved = 587;
}

/*
equation index: 588
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[5] = (-roo.irRadExc.J.SeedLSJac2[5]) * roo.irRadExc.kOpaInv[5] / (roo.irRadExc.kOpaInv[5] * roo.irRadExc.rhoOpa[5])
*/
void tmp_one_port_eqFunction_588(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,588};
  jacobian->tmpVars[1] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[5] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac2[5] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* roo.irRadExc.kOpaInv[5] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* roo.irRadExc.kOpaInv[5] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* roo.irRadExc.rhoOpa[5] PARAM */)),"roo.irRadExc.kOpaInv[5] * roo.irRadExc.rhoOpa[5]");
  threadData->lastEquationSolved = 588;
}

/*
equation index: 589
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[4] = (-roo.irRadExc.J.SeedLSJac2[4]) * roo.irRadExc.kOpaInv[4] / (roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4])
*/
void tmp_one_port_eqFunction_589(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,589};
  jacobian->tmpVars[2] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[4] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac2[4] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* roo.irRadExc.kOpaInv[4] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* roo.irRadExc.kOpaInv[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* roo.irRadExc.rhoOpa[4] PARAM */)),"roo.irRadExc.kOpaInv[4] * roo.irRadExc.rhoOpa[4]");
  threadData->lastEquationSolved = 589;
}

/*
equation index: 590
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[6] = (-roo.irRadExc.J.SeedLSJac2[6]) * roo.irRadExc.kOpaInv[6] / (roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6])
*/
void tmp_one_port_eqFunction_590(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,590};
  jacobian->tmpVars[3] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[6] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac2[6] SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[733]] /* roo.irRadExc.kOpaInv[6] PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[733]] /* roo.irRadExc.kOpaInv[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* roo.irRadExc.rhoOpa[6] PARAM */)),"roo.irRadExc.kOpaInv[6] * roo.irRadExc.rhoOpa[6]");
  threadData->lastEquationSolved = 590;
}

/*
equation index: 591
type: SIMPLE_ASSIGN
roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[1] = ((-roo.irRadExc.F[2,6]) * roo.irRadExc.J.SeedLSJac2[2] - roo.irRadExc.F[3,6] * roo.irRadExc.J.SeedLSJac2[3] - roo.irRadExc.F[4,6] * roo.irRadExc.J.SeedLSJac2[4] - roo.irRadExc.F[6,6] * roo.irRadExc.J.SeedLSJac2[6] - roo.irRadExc.F[5,6] * roo.irRadExc.J.SeedLSJac2[5] - roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[6]) / roo.irRadExc.F[1,6]
*/
void tmp_one_port_eqFunction_591(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,591};
  jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[1] JACOBIAN_TMP_VAR */ = DIVISION(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* roo.irRadExc.F[2,6] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac2[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[511]] /* roo.irRadExc.F[3,6] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac2[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* roo.irRadExc.F[4,6] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac2[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* roo.irRadExc.F[6,6] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac2[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* roo.irRadExc.F[5,6] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac2[5] SEED_VAR */)) - jacobian->tmpVars[3] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[6] JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* roo.irRadExc.F[1,6] PARAM */),"roo.irRadExc.F[1,6]");
  threadData->lastEquationSolved = 591;
}

/*
equation index: 592
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[1] = (-roo.irRadExc.F[2,1]) * roo.irRadExc.J.SeedLSJac2[2] - roo.irRadExc.F[1,1] * roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[1] - roo.irRadExc.F[3,1] * roo.irRadExc.J.SeedLSJac2[3] - roo.irRadExc.F[4,1] * roo.irRadExc.J.SeedLSJac2[4] - roo.irRadExc.F[6,1] * roo.irRadExc.J.SeedLSJac2[6] - roo.irRadExc.F[5,1] * roo.irRadExc.J.SeedLSJac2[5]
*/
void tmp_one_port_eqFunction_592(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,592};
  jacobian->tmpVars[5] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[1] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* roo.irRadExc.F[2,1] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac2[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* roo.irRadExc.F[1,1] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[1] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* roo.irRadExc.F[3,1] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac2[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* roo.irRadExc.F[4,1] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac2[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* roo.irRadExc.F[6,1] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac2[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[518]] /* roo.irRadExc.F[5,1] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac2[5] SEED_VAR */));
  threadData->lastEquationSolved = 592;
}

/*
equation index: 593
type: SIMPLE_ASSIGN
roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[2] = (-roo.irRadExc.F[2,2]) * roo.irRadExc.J.SeedLSJac2[2] - roo.irRadExc.F[1,2] * roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[1] - roo.irRadExc.F[3,2] * roo.irRadExc.J.SeedLSJac2[3] - roo.irRadExc.F[4,2] * roo.irRadExc.J.SeedLSJac2[4] - roo.irRadExc.F[6,2] * roo.irRadExc.J.SeedLSJac2[6] - roo.irRadExc.F[5,2] * roo.irRadExc.J.SeedLSJac2[5]
*/
void tmp_one_port_eqFunction_593(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,593};
  jacobian->tmpVars[6] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[2] JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* roo.irRadExc.F[2,2] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac2[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* roo.irRadExc.F[1,2] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[1] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* roo.irRadExc.F[3,2] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac2[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* roo.irRadExc.F[4,2] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac2[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* roo.irRadExc.F[6,2] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac2[6] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* roo.irRadExc.F[5,2] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac2[5] SEED_VAR */));
  threadData->lastEquationSolved = 593;
}

/*
equation index: 594
type: SIMPLE_ASSIGN
$res_LSJac2_1.$pDERLSJac2.dummyVarLSJac2 = ((-roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[1]) - roo.irRadExc.rhoOpa[1] * roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[1]) * roo.irRadExc.kOpaInv[1]
*/
void tmp_one_port_eqFunction_594(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,594};
  jacobian->resultVars[0] /* $res_LSJac2_1.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_VAR */ = ((-jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[1] JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[734]] /* roo.irRadExc.rhoOpa[1] PARAM */)) * (jacobian->tmpVars[5] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[1] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[728]] /* roo.irRadExc.kOpaInv[1] PARAM */));
  threadData->lastEquationSolved = 594;
}

/*
equation index: 595
type: SIMPLE_ASSIGN
$res_LSJac2_2.$pDERLSJac2.dummyVarLSJac2 = (-roo.irRadExc.F[2,4]) * roo.irRadExc.J.SeedLSJac2[2] - roo.irRadExc.F[1,4] * roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[1] - roo.irRadExc.F[3,4] * roo.irRadExc.J.SeedLSJac2[3] - roo.irRadExc.F[4,4] * roo.irRadExc.J.SeedLSJac2[4] - roo.irRadExc.F[6,4] * roo.irRadExc.J.SeedLSJac2[6] - roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[4] - roo.irRadExc.F[5,4] * roo.irRadExc.J.SeedLSJac2[5]
*/
void tmp_one_port_eqFunction_595(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,595};
  jacobian->resultVars[1] /* $res_LSJac2_2.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* roo.irRadExc.F[2,4] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac2[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[497]] /* roo.irRadExc.F[1,4] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[1] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* roo.irRadExc.F[3,4] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac2[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* roo.irRadExc.F[4,4] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac2[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* roo.irRadExc.F[6,4] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac2[6] SEED_VAR */)) - jacobian->tmpVars[2] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[4] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* roo.irRadExc.F[5,4] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac2[5] SEED_VAR */));
  threadData->lastEquationSolved = 595;
}

/*
equation index: 596
type: SIMPLE_ASSIGN
$res_LSJac2_3.$pDERLSJac2.dummyVarLSJac2 = ((-roo.irRadExc.J.SeedLSJac2[2]) - roo.irRadExc.rhoOpa[2] * roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[2]) * roo.irRadExc.kOpaInv[2]
*/
void tmp_one_port_eqFunction_596(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,596};
  jacobian->resultVars[2] /* $res_LSJac2_3.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_VAR */ = ((-jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac2[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[735]] /* roo.irRadExc.rhoOpa[2] PARAM */)) * (jacobian->tmpVars[6] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[2] JACOBIAN_TMP_VAR */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* roo.irRadExc.kOpaInv[2] PARAM */));
  threadData->lastEquationSolved = 596;
}

/*
equation index: 597
type: SIMPLE_ASSIGN
$res_LSJac2_4.$pDERLSJac2.dummyVarLSJac2 = (-roo.irRadExc.F[2,5]) * roo.irRadExc.J.SeedLSJac2[2] - roo.irRadExc.F[1,5] * roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[1] - roo.irRadExc.F[3,5] * roo.irRadExc.J.SeedLSJac2[3] - roo.irRadExc.F[4,5] * roo.irRadExc.J.SeedLSJac2[4] - roo.irRadExc.F[6,5] * roo.irRadExc.J.SeedLSJac2[6] - roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[5] - roo.irRadExc.F[5,5] * roo.irRadExc.J.SeedLSJac2[5]
*/
void tmp_one_port_eqFunction_597(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,597};
  jacobian->resultVars[3] /* $res_LSJac2_4.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* roo.irRadExc.F[2,5] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac2[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[498]] /* roo.irRadExc.F[1,5] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[1] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* roo.irRadExc.F[3,5] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac2[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* roo.irRadExc.F[4,5] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac2[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* roo.irRadExc.F[6,5] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac2[6] SEED_VAR */)) - jacobian->tmpVars[1] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[5] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* roo.irRadExc.F[5,5] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac2[5] SEED_VAR */));
  threadData->lastEquationSolved = 597;
}

/*
equation index: 598
type: SIMPLE_ASSIGN
$res_LSJac2_5.$pDERLSJac2.dummyVarLSJac2 = (-roo.irRadExc.F[2,3]) * roo.irRadExc.J.SeedLSJac2[2] - roo.irRadExc.F[1,3] * roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[1] - roo.irRadExc.F[3,3] * roo.irRadExc.J.SeedLSJac2[3] - roo.irRadExc.F[4,3] * roo.irRadExc.J.SeedLSJac2[4] - roo.irRadExc.F[6,3] * roo.irRadExc.J.SeedLSJac2[6] - roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[3] - roo.irRadExc.F[5,3] * roo.irRadExc.J.SeedLSJac2[5]
*/
void tmp_one_port_eqFunction_598(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,598};
  jacobian->resultVars[4] /* $res_LSJac2_5.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* roo.irRadExc.F[2,3] PARAM */))) * (jacobian->seedVars[0] /* roo.irRadExc.J.SeedLSJac2[2] SEED_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* roo.irRadExc.F[1,3] PARAM */)) * (jacobian->tmpVars[4] /* roo.irRadExc.J.$pDERLSJac2.dummyVarLSJac2[1] JACOBIAN_TMP_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* roo.irRadExc.F[3,3] PARAM */)) * (jacobian->seedVars[4] /* roo.irRadExc.J.SeedLSJac2[3] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* roo.irRadExc.F[4,3] PARAM */)) * (jacobian->seedVars[2] /* roo.irRadExc.J.SeedLSJac2[4] SEED_VAR */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* roo.irRadExc.F[6,3] PARAM */)) * (jacobian->seedVars[1] /* roo.irRadExc.J.SeedLSJac2[6] SEED_VAR */)) - jacobian->tmpVars[0] /* roo.irRadExc.G.$pDERLSJac2.dummyVarLSJac2[3] JACOBIAN_TMP_VAR */ - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* roo.irRadExc.F[5,3] PARAM */)) * (jacobian->seedVars[3] /* roo.irRadExc.J.SeedLSJac2[5] SEED_VAR */));
  threadData->lastEquationSolved = 598;
}

OMC_DISABLE_OPT
int tmp_one_port_functionJacLSJac2_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_one_port_INDEX_JAC_LSJac2;
  
  
  return 0;
}

int tmp_one_port_functionJacLSJac2_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_one_port_INDEX_JAC_LSJac2;
  
  static void (*const eqFunctions[12])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    tmp_one_port_eqFunction_587,
    tmp_one_port_eqFunction_588,
    tmp_one_port_eqFunction_589,
    tmp_one_port_eqFunction_590,
    tmp_one_port_eqFunction_591,
    tmp_one_port_eqFunction_592,
    tmp_one_port_eqFunction_593,
    tmp_one_port_eqFunction_594,
    tmp_one_port_eqFunction_595,
    tmp_one_port_eqFunction_596,
    tmp_one_port_eqFunction_597,
    tmp_one_port_eqFunction_598
  };
  
  for (int id = 0; id < 12; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 687
type: SIMPLE_ASSIGN
$cse18 = exp(-17.2799 - (-4102.99) / (-35.719 + weaDat.weaBus.TWetBul))
*/
void tmp_one_port_eqFunction_687(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,687};
  jacobian->tmpVars[0] /* $cse18 JACOBIAN_TMP_VAR */ = exp(-17.2799 - (DIVISION(-4102.99,-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.TWetBul variable */),"-35.719 + weaDat.weaBus.TWetBul")));
  threadData->lastEquationSolved = 687;
}

/*
equation index: 688
type: SIMPLE_ASSIGN
$cse3.$pDERNLSJac3.dummyVarNLSJac3 = (-4102.99) * $cse18 * weaDat.weaBus.TWetBul.SeedNLSJac3 / (-35.719 + weaDat.weaBus.TWetBul) ^ 2.0
*/
void tmp_one_port_eqFunction_688(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,688};
  modelica_real tmp2;
  tmp2 = -35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.TWetBul variable */);
  jacobian->tmpVars[1] /* $cse3.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = (-4102.99) * ((jacobian->tmpVars[0] /* $cse18 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaDat.weaBus.TWetBul.SeedNLSJac3 SEED_VAR */,(tmp2 * tmp2),"(-35.719 + weaDat.weaBus.TWetBul) ^ 2.0")));
  threadData->lastEquationSolved = 688;
}

/*
equation index: 689
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac3.dummyVarNLSJac3 = (-0.0010168521133208628) * weaDat.pAtmSel.p * $cse3.$pDERNLSJac3.dummyVarNLSJac3 / (-0.378035286922501 + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse3) ^ 2.0
*/
void tmp_one_port_eqFunction_689(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,689};
  modelica_real tmp3;
  tmp3 = -0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* weaDat.pAtmSel.p PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* $cse3 variable */)));
  jacobian->tmpVars[2] /* weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = (-0.0010168521133208628) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* weaDat.pAtmSel.p PARAM */)) * (DIVISION(jacobian->tmpVars[1] /* $cse3.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */,(tmp3 * tmp3),"(-0.378035286922501 + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse3) ^ 2.0")));
  threadData->lastEquationSolved = 689;
}

/*
equation index: 690
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac3.dummyVarNLSJac3 = (1.0 - weaDat.tWetBul_TDryBulXi.XiDryBul) * weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac3.dummyVarNLSJac3 / (1.0 - weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void tmp_one_port_eqFunction_690(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,690};
  modelica_real tmp4;
  tmp4 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[3] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[2] /* weaDat.tWetBul_TDryBulXi.XiSat.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */,(tmp4 * tmp4),"(1.0 - weaDat.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 690;
}

/*
equation index: 691
type: SIMPLE_ASSIGN
$res_NLSJac3_1.$pDERNLSJac3.dummyVarNLSJac3 = (-2324.0) * (273.15 - weaDat.weaBus.TWetBul) * weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac3.dummyVarNLSJac3 + (-2.5010145e6) * weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac3.dummyVarNLSJac3 - weaDat.weaBus.TWetBul.SeedNLSJac3 * (1006.0 * (1.0 - weaDat.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaDat.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaDat.tWetBul_TDryBulXi.XiDryBul - weaDat.tWetBul_TDryBulXi.XiSatRefIn))
*/
void tmp_one_port_eqFunction_691(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,691};
  jacobian->resultVars[0] /* $res_NLSJac3_1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.TWetBul variable */)) * (jacobian->tmpVars[3] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[3] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaDat.weaBus.TWetBul.SeedNLSJac3 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 691;
}

OMC_DISABLE_OPT
int tmp_one_port_functionJacNLSJac3_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_one_port_INDEX_JAC_NLSJac3;
  
  
  return 0;
}

int tmp_one_port_functionJacNLSJac3_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_one_port_INDEX_JAC_NLSJac3;
  
  static void (*const eqFunctions[5])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    tmp_one_port_eqFunction_687,
    tmp_one_port_eqFunction_688,
    tmp_one_port_eqFunction_689,
    tmp_one_port_eqFunction_690,
    tmp_one_port_eqFunction_691
  };
  
  for (int id = 0; id < 5; id++) {
    eqFunctions[id](data, threadData, jacobian, parentJacobian);
  }
  
  return 0;
}
int tmp_one_port_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int tmp_one_port_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int tmp_one_port_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int tmp_one_port_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int tmp_one_port_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int tmp_one_port_functionJacA_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_one_port_INDEX_JAC_A;
  
  
  return 0;
}

int tmp_one_port_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = tmp_one_port_INDEX_JAC_A;
  
  
  return 0;
}

OMC_DISABLE_OPT
int tmp_one_port_initialAnalyticJacobianLSJac0(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "tmp_one_port_JacLSJac0.bin");
  
  initJacobian(jacobian, 5, 5, 12, tmp_one_port_functionJacLSJac0_column, NULL, NULL);
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
int tmp_one_port_initialAnalyticJacobianNLSJac1(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "tmp_one_port_JacNLSJac1.bin");
  
  initJacobian(jacobian, 1, 1, 4, tmp_one_port_functionJacNLSJac1_column, NULL, NULL);
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
int tmp_one_port_initialAnalyticJacobianLSJac2(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "tmp_one_port_JacLSJac2.bin");
  
  initJacobian(jacobian, 5, 5, 12, tmp_one_port_functionJacLSJac2_column, NULL, NULL);
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
int tmp_one_port_initialAnalyticJacobianNLSJac3(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "tmp_one_port_JacNLSJac3.bin");
  
  initJacobian(jacobian, 1, 1, 5, tmp_one_port_functionJacNLSJac3_column, NULL, NULL);
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
int tmp_one_port_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int tmp_one_port_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int tmp_one_port_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int tmp_one_port_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int tmp_one_port_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
OMC_DISABLE_OPT
int tmp_one_port_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "tmp_one_port_JacA.bin");
  
  initJacobian(jacobian, 15, 15, 0, tmp_one_port_functionJacA_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(15, 90, 15);
  jacobian->availability = JACOBIAN_ONLY_SPARSITY;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 15+1, pFile, FALSE);
  if (count != 15+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 15+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 90, pFile, FALSE);
  if (count != 90) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 90, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 15);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 15);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 15);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 15);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1, 15);
  /* color 6 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 6, 1, 15);
  /* color 7 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 7, 1, 15);
  /* color 8 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 8, 1, 15);
  /* color 9 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 9, 1, 15);
  /* color 10 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 10, 1, 15);
  /* color 11 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 11, 1, 15);
  /* color 12 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 12, 1, 15);
  /* color 13 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 13, 1, 15);
  /* color 14 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 14, 1, 15);
  /* color 15 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 15, 1, 15);
  
  omc_fclose(pFile);
  
  return 0;
}


