#include "tmp_two_returns_res_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 307
type: SIMPLE_ASSIGN
roo.air.Xi_outflow_fixed[3] = 0.01
*/
void tmp_two_returns_res_eqFunction_307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,307};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[80]] /* roo.air.Xi_outflow_fixed[3] PARAM */) = 0.01;
  threadData->lastEquationSolved = 307;
}

/*
equation index: 308
type: SIMPLE_ASSIGN
roo.air.yFixed[14] = roo.air.Xi_outflow_fixed[3]
*/
void tmp_two_returns_res_eqFunction_308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,308};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[340]] /* roo.air.yFixed[14] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[80]] /* roo.air.Xi_outflow_fixed[3] PARAM */);
  threadData->lastEquationSolved = 308;
}

/*
equation index: 309
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[14] = roo.air.yFixed[14]
*/
void tmp_two_returns_res_eqFunction_309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,309};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* roo.air.cfd.yFixed[14] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[340]] /* roo.air.yFixed[14] PARAM */);
  threadData->lastEquationSolved = 309;
}

/*
equation index: 310
type: SIMPLE_ASSIGN
roo.air.Xi_outflow_fixed[2] = 0.01
*/
void tmp_two_returns_res_eqFunction_310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,310};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[79]] /* roo.air.Xi_outflow_fixed[2] PARAM */) = 0.01;
  threadData->lastEquationSolved = 310;
}

/*
equation index: 311
type: SIMPLE_ASSIGN
roo.air.yFixed[13] = roo.air.Xi_outflow_fixed[2]
*/
void tmp_two_returns_res_eqFunction_311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,311};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[339]] /* roo.air.yFixed[13] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[79]] /* roo.air.Xi_outflow_fixed[2] PARAM */);
  threadData->lastEquationSolved = 311;
}

/*
equation index: 312
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[13] = roo.air.yFixed[13]
*/
void tmp_two_returns_res_eqFunction_312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,312};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* roo.air.cfd.yFixed[13] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[339]] /* roo.air.yFixed[13] PARAM */);
  threadData->lastEquationSolved = 312;
}

/*
equation index: 313
type: SIMPLE_ASSIGN
roo.air.Xi_outflow_fixed[1] = 0.01
*/
void tmp_two_returns_res_eqFunction_313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,313};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* roo.air.Xi_outflow_fixed[1] PARAM */) = 0.01;
  threadData->lastEquationSolved = 313;
}

/*
equation index: 314
type: SIMPLE_ASSIGN
roo.air.yFixed[12] = roo.air.Xi_outflow_fixed[1]
*/
void tmp_two_returns_res_eqFunction_314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,314};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[338]] /* roo.air.yFixed[12] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* roo.air.Xi_outflow_fixed[1] PARAM */);
  threadData->lastEquationSolved = 314;
}

/*
equation index: 315
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[12] = roo.air.yFixed[12]
*/
void tmp_two_returns_res_eqFunction_315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,315};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* roo.air.cfd.yFixed[12] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[338]] /* roo.air.yFixed[12] PARAM */);
  threadData->lastEquationSolved = 315;
}

/*
equation index: 316
type: SIMPLE_ASSIGN
roo.air.fluInt.p = roo.air.fluInt.p_start
*/
void tmp_two_returns_res_eqFunction_316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,316};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* roo.air.fluInt.p STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[285]] /* roo.air.fluInt.p_start PARAM */);
  threadData->lastEquationSolved = 316;
}
extern void tmp_two_returns_res_eqFunction_1333(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1334(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1320(DATA *data, threadData_t *threadData);


void tmp_two_returns_res_eqFunction_320(DATA*, threadData_t*);
/*
equation index: 321
indexNonlinear: 0
type: NONLINEAR

vars: {roo.air.cfd.u[13]}
eqns: {320}
*/
void tmp_two_returns_res_eqFunction_321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,321};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 321 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.air.cfd.u[13] variable */);
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,321};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 321 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.air.cfd.u[13] variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  threadData->lastEquationSolved = 321;
}
extern void tmp_two_returns_res_eqFunction_1324(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1315(DATA *data, threadData_t *threadData);


void tmp_two_returns_res_eqFunction_324(DATA*, threadData_t*);
/*
equation index: 325
indexNonlinear: 1
type: NONLINEAR

vars: {roo.air.cfd.u[12]}
eqns: {324}
*/
void tmp_two_returns_res_eqFunction_325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,325};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 325 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.air.cfd.u[12] variable */);
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,325};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 325 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.air.cfd.u[12] variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  threadData->lastEquationSolved = 325;
}
extern void tmp_two_returns_res_eqFunction_1323(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1318(DATA *data, threadData_t *threadData);


/*
equation index: 328
type: SIMPLE_ASSIGN
roo.air.cfd.y[15] = roo.air.cfd.yFixed[15]
*/
void tmp_two_returns_res_eqFunction_328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,328};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* roo.air.cfd.y[15] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* roo.air.cfd.yFixed[15] PARAM */);
  threadData->lastEquationSolved = 328;
}

/*
equation index: 329
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[15] = roo.air.cfd.y[15]
*/
void tmp_two_returns_res_eqFunction_329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,329};
  (data->simulationInfo->realVarsPre[345] /* roo.air.cfd.y[15] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* roo.air.cfd.y[15] DISCRETE */);
  threadData->lastEquationSolved = 329;
}
extern void tmp_two_returns_res_eqFunction_1237(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1325(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1238(DATA *data, threadData_t *threadData);


/*
equation index: 333
type: SIMPLE_ASSIGN
roo.air.cfd.y[14] = roo.air.cfd.yFixed[14]
*/
void tmp_two_returns_res_eqFunction_333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,333};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* roo.air.cfd.y[14] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* roo.air.cfd.yFixed[14] PARAM */);
  threadData->lastEquationSolved = 333;
}

/*
equation index: 334
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[14] = roo.air.cfd.y[14]
*/
void tmp_two_returns_res_eqFunction_334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,334};
  (data->simulationInfo->realVarsPre[344] /* roo.air.cfd.y[14] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* roo.air.cfd.y[14] DISCRETE */);
  threadData->lastEquationSolved = 334;
}
extern void tmp_two_returns_res_eqFunction_1276(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1319(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1277(DATA *data, threadData_t *threadData);


/*
equation index: 338
type: SIMPLE_ASSIGN
roo.air.cfd.y[13] = roo.air.cfd.yFixed[13]
*/
void tmp_two_returns_res_eqFunction_338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,338};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* roo.air.cfd.y[13] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* roo.air.cfd.yFixed[13] PARAM */);
  threadData->lastEquationSolved = 338;
}

/*
equation index: 339
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[13] = roo.air.cfd.y[13]
*/
void tmp_two_returns_res_eqFunction_339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,339};
  (data->simulationInfo->realVarsPre[343] /* roo.air.cfd.y[13] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* roo.air.cfd.y[13] DISCRETE */);
  threadData->lastEquationSolved = 339;
}
extern void tmp_two_returns_res_eqFunction_1233(DATA *data, threadData_t *threadData);


/*
equation index: 341
type: SIMPLE_ASSIGN
roo.air.cfd.y[12] = roo.air.cfd.yFixed[12]
*/
void tmp_two_returns_res_eqFunction_341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,341};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* roo.air.cfd.y[12] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* roo.air.cfd.yFixed[12] PARAM */);
  threadData->lastEquationSolved = 341;
}

/*
equation index: 342
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[12] = roo.air.cfd.y[12]
*/
void tmp_two_returns_res_eqFunction_342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,342};
  (data->simulationInfo->realVarsPre[342] /* roo.air.cfd.y[12] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* roo.air.cfd.y[12] DISCRETE */);
  threadData->lastEquationSolved = 342;
}
extern void tmp_two_returns_res_eqFunction_1231(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1326(DATA *data, threadData_t *threadData);


/*
equation index: 345
type: SIMPLE_ASSIGN
roo.air.cfd.y[11] = roo.air.cfd.yFixed[11]
*/
void tmp_two_returns_res_eqFunction_345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,345};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* roo.air.cfd.y[11] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[107]] /* roo.air.cfd.yFixed[11] PARAM */);
  threadData->lastEquationSolved = 345;
}

/*
equation index: 346
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[11] = roo.air.cfd.y[11]
*/
void tmp_two_returns_res_eqFunction_346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,346};
  (data->simulationInfo->realVarsPre[341] /* roo.air.cfd.y[11] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* roo.air.cfd.y[11] DISCRETE */);
  threadData->lastEquationSolved = 346;
}
extern void tmp_two_returns_res_eqFunction_1239(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1240(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1241(DATA *data, threadData_t *threadData);


/*
equation index: 350
type: SIMPLE_ASSIGN
roo.air.cfd.y[10] = roo.air.cfd.yFixed[10]
*/
void tmp_two_returns_res_eqFunction_350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,350};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* roo.air.cfd.y[10] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[106]] /* roo.air.cfd.yFixed[10] PARAM */);
  threadData->lastEquationSolved = 350;
}

/*
equation index: 351
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[10] = roo.air.cfd.y[10]
*/
void tmp_two_returns_res_eqFunction_351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,351};
  (data->simulationInfo->realVarsPre[340] /* roo.air.cfd.y[10] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* roo.air.cfd.y[10] DISCRETE */);
  threadData->lastEquationSolved = 351;
}
extern void tmp_two_returns_res_eqFunction_1278(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1279(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1280(DATA *data, threadData_t *threadData);


/*
equation index: 355
type: SIMPLE_ASSIGN
roo.air.cfd.y[9] = roo.air.cfd.yFixed[9]
*/
void tmp_two_returns_res_eqFunction_355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,355};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* roo.air.cfd.y[9] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* roo.air.cfd.yFixed[9] PARAM */);
  threadData->lastEquationSolved = 355;
}

/*
equation index: 356
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[9] = roo.air.cfd.y[9]
*/
void tmp_two_returns_res_eqFunction_356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,356};
  (data->simulationInfo->realVarsPre[339] /* roo.air.cfd.y[9] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* roo.air.cfd.y[9] DISCRETE */);
  threadData->lastEquationSolved = 356;
}
extern void tmp_two_returns_res_eqFunction_1234(DATA *data, threadData_t *threadData);


/*
equation index: 358
type: SIMPLE_ASSIGN
roo.air.cfd.y[8] = roo.air.cfd.yFixed[8]
*/
void tmp_two_returns_res_eqFunction_358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,358};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* roo.air.cfd.y[8] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[104]] /* roo.air.cfd.yFixed[8] PARAM */);
  threadData->lastEquationSolved = 358;
}

/*
equation index: 359
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[8] = roo.air.cfd.y[8]
*/
void tmp_two_returns_res_eqFunction_359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,359};
  (data->simulationInfo->realVarsPre[338] /* roo.air.cfd.y[8] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* roo.air.cfd.y[8] DISCRETE */);
  threadData->lastEquationSolved = 359;
}
extern void tmp_two_returns_res_eqFunction_1275(DATA *data, threadData_t *threadData);


/*
equation index: 361
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[21] = roo.air.cfd.u[21]
*/
void tmp_two_returns_res_eqFunction_361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[330]] /* roo.air.cfd.uWri[21] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.air.cfd.u[21] variable */);
  threadData->lastEquationSolved = 361;
}

/*
equation index: 362
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[21] = roo.air.cfd.uWri[21]
*/
void tmp_two_returns_res_eqFunction_362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,362};
  (data->simulationInfo->realVarsPre[330] /* roo.air.cfd.uWri[21] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[330]] /* roo.air.cfd.uWri[21] DISCRETE */);
  threadData->lastEquationSolved = 362;
}

/*
equation index: 363
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[20] = roo.air.cfd.u[20]
*/
void tmp_two_returns_res_eqFunction_363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,363};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* roo.air.cfd.uWri[20] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.air.cfd.u[20] variable */);
  threadData->lastEquationSolved = 363;
}

/*
equation index: 364
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[20] = roo.air.cfd.uWri[20]
*/
void tmp_two_returns_res_eqFunction_364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,364};
  (data->simulationInfo->realVarsPre[329] /* roo.air.cfd.uWri[20] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* roo.air.cfd.uWri[20] DISCRETE */);
  threadData->lastEquationSolved = 364;
}

/*
equation index: 365
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[17] = roo.air.cfd.u[17]
*/
void tmp_two_returns_res_eqFunction_365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,365};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[326]] /* roo.air.cfd.uWri[17] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.air.cfd.u[17] variable */);
  threadData->lastEquationSolved = 365;
}

/*
equation index: 366
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[17] = roo.air.cfd.uWri[17]
*/
void tmp_two_returns_res_eqFunction_366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,366};
  (data->simulationInfo->realVarsPre[326] /* roo.air.cfd.uWri[17] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[326]] /* roo.air.cfd.uWri[17] DISCRETE */);
  threadData->lastEquationSolved = 366;
}

/*
equation index: 367
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[16] = roo.air.cfd.u[16]
*/
void tmp_two_returns_res_eqFunction_367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* roo.air.cfd.uWri[16] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.air.cfd.u[16] variable */);
  threadData->lastEquationSolved = 367;
}

/*
equation index: 368
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[16] = roo.air.cfd.uWri[16]
*/
void tmp_two_returns_res_eqFunction_368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,368};
  (data->simulationInfo->realVarsPre[325] /* roo.air.cfd.uWri[16] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* roo.air.cfd.uWri[16] DISCRETE */);
  threadData->lastEquationSolved = 368;
}

/*
equation index: 369
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[13] = roo.air.cfd.u[13]
*/
void tmp_two_returns_res_eqFunction_369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,369};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* roo.air.cfd.uWri[13] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.air.cfd.u[13] variable */);
  threadData->lastEquationSolved = 369;
}

/*
equation index: 370
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[13] = roo.air.cfd.uWri[13]
*/
void tmp_two_returns_res_eqFunction_370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,370};
  (data->simulationInfo->realVarsPre[322] /* roo.air.cfd.uWri[13] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* roo.air.cfd.uWri[13] DISCRETE */);
  threadData->lastEquationSolved = 370;
}

/*
equation index: 371
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[12] = roo.air.cfd.u[12]
*/
void tmp_two_returns_res_eqFunction_371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,371};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* roo.air.cfd.uWri[12] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.air.cfd.u[12] variable */);
  threadData->lastEquationSolved = 371;
}

/*
equation index: 372
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[12] = roo.air.cfd.uWri[12]
*/
void tmp_two_returns_res_eqFunction_372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,372};
  (data->simulationInfo->realVarsPre[321] /* roo.air.cfd.uWri[12] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* roo.air.cfd.uWri[12] DISCRETE */);
  threadData->lastEquationSolved = 372;
}

/*
equation index: 373
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[9] = roo.air.cfd.u[9]
*/
void tmp_two_returns_res_eqFunction_373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,373};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* roo.air.cfd.uWri[9] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* roo.air.cfd.u[9] variable */);
  threadData->lastEquationSolved = 373;
}

/*
equation index: 374
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[9] = roo.air.cfd.uWri[9]
*/
void tmp_two_returns_res_eqFunction_374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,374};
  (data->simulationInfo->realVarsPre[318] /* roo.air.cfd.uWri[9] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* roo.air.cfd.uWri[9] DISCRETE */);
  threadData->lastEquationSolved = 374;
}

/*
equation index: 375
type: SIMPLE_ASSIGN
roo.air.yFixed[16] = 0.0
*/
void tmp_two_returns_res_eqFunction_375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,375};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[342]] /* roo.air.yFixed[16] PARAM */) = 0.0;
  threadData->lastEquationSolved = 375;
}

/*
equation index: 376
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[16] = roo.air.yFixed[16]
*/
void tmp_two_returns_res_eqFunction_376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,376};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* roo.air.cfd.yFixed[16] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[342]] /* roo.air.yFixed[16] PARAM */);
  threadData->lastEquationSolved = 376;
}

/*
equation index: 377
type: SIMPLE_ASSIGN
roo.air.cfd.y[16] = roo.air.cfd.yFixed[16]
*/
void tmp_two_returns_res_eqFunction_377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,377};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* roo.air.cfd.y[16] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* roo.air.cfd.yFixed[16] PARAM */);
  threadData->lastEquationSolved = 377;
}

/*
equation index: 378
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[16] = roo.air.cfd.y[16]
*/
void tmp_two_returns_res_eqFunction_378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,378};
  (data->simulationInfo->realVarsPre[346] /* roo.air.cfd.y[16] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* roo.air.cfd.y[16] DISCRETE */);
  threadData->lastEquationSolved = 378;
}

/*
equation index: 379
type: SIMPLE_ASSIGN
weaDat.conTimMin.weaDatEndTim = weaDat.timeSpan[2]
*/
void tmp_two_returns_res_eqFunction_379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,379};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1348]] /* weaDat.conTimMin.weaDatEndTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1371]] /* weaDat.timeSpan[2] PARAM */);
  threadData->lastEquationSolved = 379;
}

/*
equation index: 380
type: SIMPLE_ASSIGN
weaDat.conTimMin.weaDatStaTim = weaDat.timeSpan[1]
*/
void tmp_two_returns_res_eqFunction_380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,380};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1349]] /* weaDat.conTimMin.weaDatStaTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1370]] /* weaDat.timeSpan[1] PARAM */);
  threadData->lastEquationSolved = 380;
}

/*
equation index: 381
type: SIMPLE_ASSIGN
weaDat.conTimMin.lenWea = weaDat.conTimMin.weaDatEndTim - weaDat.conTimMin.weaDatStaTim
*/
void tmp_two_returns_res_eqFunction_381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,381};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1347]] /* weaDat.conTimMin.lenWea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1348]] /* weaDat.conTimMin.weaDatEndTim PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1349]] /* weaDat.conTimMin.weaDatStaTim PARAM */);
  threadData->lastEquationSolved = 381;
}

/*
equation index: 382
type: SIMPLE_ASSIGN
weaDat.conTimMin.canRepeatWeatherFile = abs(mod(weaDat.conTimMin.lenWea, 3.1536e7)) < 0.01
*/
void tmp_two_returns_res_eqFunction_382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,382};
  modelica_real tmp0;
  modelica_boolean tmp1;
  tmp0 = 3.1536e7;
  if (tmp0 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(weaDat.conTimMin.lenWea, 3.1536e7)");}
  tmp1 = Less(fabs(modelica_real_mod((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1347]] /* weaDat.conTimMin.lenWea PARAM */), tmp0)),0.01);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[297]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) = tmp1;
  threadData->lastEquationSolved = 382;
}

/*
equation index: 383
type: SIMPLE_ASSIGN
weaDat.conTim.weaDatEndTim = weaDat.timeSpan[2]
*/
void tmp_two_returns_res_eqFunction_383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,383};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1345]] /* weaDat.conTim.weaDatEndTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1371]] /* weaDat.timeSpan[2] PARAM */);
  threadData->lastEquationSolved = 383;
}

/*
equation index: 384
type: SIMPLE_ASSIGN
weaDat.conTim.weaDatStaTim = weaDat.timeSpan[1]
*/
void tmp_two_returns_res_eqFunction_384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,384};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1346]] /* weaDat.conTim.weaDatStaTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1370]] /* weaDat.timeSpan[1] PARAM */);
  threadData->lastEquationSolved = 384;
}

/*
equation index: 385
type: SIMPLE_ASSIGN
weaDat.conTim.lenWea = weaDat.conTim.weaDatEndTim - weaDat.conTim.weaDatStaTim
*/
void tmp_two_returns_res_eqFunction_385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,385};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1344]] /* weaDat.conTim.lenWea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1345]] /* weaDat.conTim.weaDatEndTim PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1346]] /* weaDat.conTim.weaDatStaTim PARAM */);
  threadData->lastEquationSolved = 385;
}

/*
equation index: 386
type: SIMPLE_ASSIGN
weaDat.conTim.canRepeatWeatherFile = abs(mod(weaDat.conTim.lenWea, 3.1536e7)) < 0.01
*/
void tmp_two_returns_res_eqFunction_386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,386};
  modelica_real tmp2;
  modelica_boolean tmp3;
  tmp2 = 3.1536e7;
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(weaDat.conTim.lenWea, 3.1536e7)");}
  tmp3 = Less(fabs(modelica_real_mod((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1344]] /* weaDat.conTim.lenWea PARAM */), tmp2)),0.01);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[296]] /* weaDat.conTim.canRepeatWeatherFile PARAM */) = tmp3;
  threadData->lastEquationSolved = 386;
}
extern void tmp_two_returns_res_eqFunction_1337(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1343(DATA *data, threadData_t *threadData);


/*
equation index: 389
type: SIMPLE_ASSIGN
weaDat.conTimMin.tNext = if weaDat.conTimMin.canRepeatWeatherFile then weaDat.conTimMin.lenWea * (1.0 + (*Real*)(integer(weaDat.add30Min.y / weaDat.conTimMin.lenWea))) else time
*/
void tmp_two_returns_res_eqFunction_389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,389};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* weaDat.conTimMin.tNext DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[297]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1347]] /* weaDat.conTimMin.lenWea PARAM */)) * (1.0 + ((modelica_real)((modelica_integer)floor(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* weaDat.add30Min.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1347]] /* weaDat.conTimMin.lenWea PARAM */),"weaDat.conTimMin.lenWea",equationIndexes))))):data->localData[0]->timeValue);
  threadData->lastEquationSolved = 389;
}
extern void tmp_two_returns_res_eqFunction_1419(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1420(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1422(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1424(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1345(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1346(DATA *data, threadData_t *threadData);


/*
equation index: 396
type: SIMPLE_ASSIGN
weaDat.eqnTim.eqnTim = 60.0 * (9.87 * sin(2.0 * weaDat.eqnTim.Bt) + (-7.53) * cos(weaDat.eqnTim.Bt) + (-1.5) * sin(weaDat.eqnTim.Bt))
*/
void tmp_two_returns_res_eqFunction_396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,396};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* weaDat.eqnTim.eqnTim variable */) = (60.0) * ((9.87) * (sin((2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* weaDat.eqnTim.Bt variable */)))) + (-7.53) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* weaDat.eqnTim.Bt variable */))) + (-1.5) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* weaDat.eqnTim.Bt variable */))));
  threadData->lastEquationSolved = 396;
}
extern void tmp_two_returns_res_eqFunction_1351(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1352(DATA *data, threadData_t *threadData);


/*
equation index: 399
type: SIMPLE_ASSIGN
weaDat.weaBus.solDec = asin((-0.3979486313076103) * cos(0.017202423838958484 * (10.0 + 1.1574074074074073e-5 * weaDat.weaBus.cloTim)))
*/
void tmp_two_returns_res_eqFunction_399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,399};
  modelica_real tmp4;
  tmp4 = (-0.3979486313076103) * (cos((0.017202423838958484) * (10.0 + (1.1574074074074073e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* weaDat.weaBus.cloTim variable */)))));
  if(!(tmp4 >= -1.0 && tmp4 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of asin((-0.3979486313076103) * cos(0.017202423838958484 * (10.0 + 1.1574074074074073e-5 * weaDat.weaBus.cloTim))) outside the domain -1.0 <= %g <= 1.0", tmp4);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* weaDat.weaBus.solDec variable */) = asin(tmp4);
  threadData->lastEquationSolved = 399;
}

/*
equation index: 400
type: SIMPLE_ASSIGN
weaDat.weaBus.solZen = acos(cos(weaDat.latitude.latitude) * cos(weaDat.weaBus.solDec) * cos(weaDat.weaBus.solHouAng) + sin(weaDat.latitude.latitude) * sin(weaDat.weaBus.solDec))
*/
void tmp_two_returns_res_eqFunction_400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,400};
  modelica_real tmp5;
  tmp5 = (cos((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1357]] /* weaDat.latitude.latitude PARAM */))) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* weaDat.weaBus.solDec variable */))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* weaDat.weaBus.solHouAng variable */)))) + (sin((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1357]] /* weaDat.latitude.latitude PARAM */))) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* weaDat.weaBus.solDec variable */)));
  if(!(tmp5 >= -1.0 && tmp5 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(cos(weaDat.latitude.latitude) * cos(weaDat.weaBus.solDec) * cos(weaDat.weaBus.solHouAng) + sin(weaDat.latitude.latitude) * sin(weaDat.weaBus.solDec)) outside the domain -1.0 <= %g <= 1.0", tmp5);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* weaDat.weaBus.solZen variable */) = acos(tmp5);
  threadData->lastEquationSolved = 400;
}
extern void tmp_two_returns_res_eqFunction_1355(DATA *data, threadData_t *threadData);


/*
equation index: 402
type: SIMPLE_ASSIGN
weaDat.conTim.tNext = if weaDat.conTim.canRepeatWeatherFile then weaDat.conTim.lenWea * (1.0 + (*Real*)(integer(weaDat.weaBus.cloTim / weaDat.conTim.lenWea))) else time
*/
void tmp_two_returns_res_eqFunction_402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,402};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* weaDat.conTim.tNext DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[296]] /* weaDat.conTim.canRepeatWeatherFile PARAM */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1344]] /* weaDat.conTim.lenWea PARAM */)) * (1.0 + ((modelica_real)((modelica_integer)floor(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* weaDat.weaBus.cloTim variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1344]] /* weaDat.conTim.lenWea PARAM */),"weaDat.conTim.lenWea",equationIndexes))))):data->localData[0]->timeValue);
  threadData->lastEquationSolved = 402;
}
extern void tmp_two_returns_res_eqFunction_1357(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1423(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1425(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1421(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1416(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1417(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1415(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1414(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1413(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1412(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1411(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1410(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1409(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1408(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1407(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1405(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1406(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1404(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1397(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1398(DATA *data, threadData_t *threadData);


/*
equation index: 423
type: SIMPLE_ASSIGN
weaDat.weaBus.nOpa = min(1.0, max(0.0, weaDat.opaSkyCovSel.y))
*/
void tmp_two_returns_res_eqFunction_423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,423};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* weaDat.weaBus.nOpa variable */) = fmin(1.0,fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* weaDat.opaSkyCovSel.y variable */)));
  threadData->lastEquationSolved = 423;
}
extern void tmp_two_returns_res_eqFunction_1401(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1393(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1394(DATA *data, threadData_t *threadData);


/*
equation index: 427
type: SIMPLE_ASSIGN
weaDat.weaBus.nTot = min(1.0, max(0.0, weaDat.totSkyCovSel.y))
*/
void tmp_two_returns_res_eqFunction_427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,427};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* weaDat.weaBus.nTot variable */) = fmin(1.0,fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* weaDat.totSkyCovSel.y variable */)));
  threadData->lastEquationSolved = 427;
}
extern void tmp_two_returns_res_eqFunction_1391(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1392(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1387(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1388(DATA *data, threadData_t *threadData);


/*
equation index: 432
type: SIMPLE_ASSIGN
weaDat.weaBus.winDir = min(6.283185307179586, max(0.0, weaDat.conWinDir.y))
*/
void tmp_two_returns_res_eqFunction_432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,432};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* weaDat.weaBus.winDir variable */) = fmin(6.283185307179586,fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* weaDat.conWinDir.y variable */)));
  threadData->lastEquationSolved = 432;
}
extern void tmp_two_returns_res_eqFunction_1386(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1385(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1384(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1383(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1382(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1381(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1380(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1365(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1366(DATA *data, threadData_t *threadData);


/*
equation index: 442
type: SIMPLE_ASSIGN
weaDat.weaBus.relHum = min(1.0, max(0.0, weaDat.relHumSel.uFil))
*/
void tmp_two_returns_res_eqFunction_442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,442};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* weaDat.weaBus.relHum variable */) = fmin(1.0,fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* weaDat.relHumSel.uFil variable */)));
  threadData->lastEquationSolved = 442;
}
extern void tmp_two_returns_res_eqFunction_1361(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1362(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1358(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1359(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1363(DATA *data, threadData_t *threadData);


/*
equation index: 448
type: SIMPLE_ASSIGN
weaDat.TBlaSkyCom.epsSky = (0.787 + 0.764 * log(0.0036609921288669233 * weaDat.TBlaSkyCom.TDewPoiK)) * (1.0 + 0.0224 * weaDat.TBlaSkyCom.nOpa10 + (-0.0035) * weaDat.TBlaSkyCom.nOpa10 ^ 2.0 + 2.8e-4 * weaDat.TBlaSkyCom.nOpa10 ^ 3.0)
*/
void tmp_two_returns_res_eqFunction_448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,448};
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  tmp6 = (0.0036609921288669233) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* weaDat.TBlaSkyCom.TDewPoiK variable */));
  if(!(tmp6 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(0.0036609921288669233 * weaDat.TBlaSkyCom.TDewPoiK) was %g should be > 0", tmp6);
    }
  }tmp7 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* weaDat.TBlaSkyCom.nOpa10 variable */);
  tmp8 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* weaDat.TBlaSkyCom.nOpa10 variable */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* weaDat.TBlaSkyCom.epsSky variable */) = (0.787 + (0.764) * (log(tmp6))) * (1.0 + (0.0224) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* weaDat.TBlaSkyCom.nOpa10 variable */)) + (-0.0035) * ((tmp7 * tmp7)) + (2.8e-4) * ((tmp8 * tmp8 * tmp8)));
  threadData->lastEquationSolved = 448;
}
extern void tmp_two_returns_res_eqFunction_1403(DATA *data, threadData_t *threadData);


/*
equation index: 450
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiDryBul = 0.621964713077499 * weaDat.weaBus.relHum / ((-0.378035286922501) * weaDat.weaBus.relHum + 0.0016349032219037793 * weaDat.pAtmSel.p * exp(-17.2799 - (-4102.99) / (-35.719 + weaDat.weaBus.TDryBul)))
*/
void tmp_two_returns_res_eqFunction_450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,450};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */) = (0.621964713077499) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* weaDat.weaBus.relHum variable */),(-0.378035286922501) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* weaDat.weaBus.relHum variable */)) + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1366]] /* weaDat.pAtmSel.p PARAM */)) * (exp(-17.2799 - (DIVISION_SIM(-4102.99,-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* weaDat.weaBus.TDryBul variable */),"-35.719 + weaDat.weaBus.TDryBul",equationIndexes))))),"(-0.378035286922501) * weaDat.weaBus.relHum + 0.0016349032219037793 * weaDat.pAtmSel.p * exp(-17.2799 - (-4102.99) / (-35.719 + weaDat.weaBus.TDryBul))",equationIndexes));
  threadData->lastEquationSolved = 450;
}

void tmp_two_returns_res_eqFunction_451(DATA*, threadData_t*);
void tmp_two_returns_res_eqFunction_452(DATA*, threadData_t*);
void tmp_two_returns_res_eqFunction_453(DATA*, threadData_t*);
/*
equation index: 458
indexNonlinear: 2
type: NONLINEAR

vars: {weaDat.weaBus.TWetBul}
eqns: {451, 452, 453}
*/
void tmp_two_returns_res_eqFunction_458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,458};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 458 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* weaDat.weaBus.TWetBul variable */);
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,458};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 458 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* weaDat.weaBus.TWetBul variable */) = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  threadData->lastEquationSolved = 458;
}

/*
equation index: 459
type: SIMPLE_ASSIGN
$PRE.weaDat.conTimMin.tNext = 0.0
*/
void tmp_two_returns_res_eqFunction_459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,459};
  (data->simulationInfo->realVarsPre[348] /* weaDat.conTimMin.tNext DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 459;
}

/*
equation index: 460
type: SIMPLE_ASSIGN
$whenCondition1 = weaDat.conTimMin.canRepeatWeatherFile and weaDat.add30Min.y > $PRE.weaDat.conTimMin.tNext
*/
void tmp_two_returns_res_eqFunction_460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,460};
  modelica_boolean tmp9;
  tmp9 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* weaDat.add30Min.y variable */),(data->simulationInfo->realVarsPre[348] /* weaDat.conTimMin.tNext DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[297]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) && tmp9);
  threadData->lastEquationSolved = 460;
}

/*
equation index: 461
type: SIMPLE_ASSIGN
$PRE.weaDat.conTim.tNext = 0.0
*/
void tmp_two_returns_res_eqFunction_461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,461};
  (data->simulationInfo->realVarsPre[347] /* weaDat.conTim.tNext DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 461;
}

/*
equation index: 462
type: SIMPLE_ASSIGN
$whenCondition2 = weaDat.conTim.canRepeatWeatherFile and weaDat.weaBus.cloTim > $PRE.weaDat.conTim.tNext
*/
void tmp_two_returns_res_eqFunction_462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,462};
  modelica_boolean tmp10;
  tmp10 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* weaDat.weaBus.cloTim variable */),(data->simulationInfo->realVarsPre[347] /* weaDat.conTim.tNext DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[296]] /* weaDat.conTim.canRepeatWeatherFile PARAM */) && tmp10);
  threadData->lastEquationSolved = 462;
}

/*
equation index: 463
type: SIMPLE_ASSIGN
roo.air.senHeaFlo.port_b.Q_flow = 0.0
*/
void tmp_two_returns_res_eqFunction_463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,463};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[103]] /* roo.air.senHeaFlo.port_b.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 463;
}

/*
equation index: 464
type: SIMPLE_ASSIGN
roo.air.cfd.sampleTrigger = false
*/
void tmp_two_returns_res_eqFunction_464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,464};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* roo.air.cfd.sampleTrigger DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 464;
}

/*
equation index: 465
type: ALGORITHM

  $whenCondition3 := $START.$whenCondition3;
  $whenCondition3 := roo.air.cfd.sampleTrigger;
*/
void tmp_two_returns_res_eqFunction_465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,465};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->modelData->booleanVarsData[2] /* $whenCondition3 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* roo.air.cfd.sampleTrigger DISCRETE */);
  threadData->lastEquationSolved = 465;
}

/*
equation index: 466
type: SIMPLE_ASSIGN
$whenCondition4 = roo.air.cfd.sampleTrigger
*/
void tmp_two_returns_res_eqFunction_466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,466};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* roo.air.cfd.sampleTrigger DISCRETE */);
  threadData->lastEquationSolved = 466;
}
extern void tmp_two_returns_res_eqFunction_1329(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1330(DATA *data, threadData_t *threadData);


/*
equation index: 469
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[10] = roo.air.cfd.u[10]
*/
void tmp_two_returns_res_eqFunction_469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,469};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* roo.air.cfd.uWri[10] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* roo.air.cfd.u[10] variable */);
  threadData->lastEquationSolved = 469;
}

/*
equation index: 470
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[10] = roo.air.cfd.uWri[10]
*/
void tmp_two_returns_res_eqFunction_470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,470};
  (data->simulationInfo->realVarsPre[319] /* roo.air.cfd.uWri[10] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* roo.air.cfd.uWri[10] DISCRETE */);
  threadData->lastEquationSolved = 470;
}
extern void tmp_two_returns_res_eqFunction_1327(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1328(DATA *data, threadData_t *threadData);


/*
equation index: 473
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[11] = roo.air.cfd.u[11]
*/
void tmp_two_returns_res_eqFunction_473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,473};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* roo.air.cfd.uWri[11] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* roo.air.cfd.u[11] variable */);
  threadData->lastEquationSolved = 473;
}

/*
equation index: 474
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[11] = roo.air.cfd.uWri[11]
*/
void tmp_two_returns_res_eqFunction_474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,474};
  (data->simulationInfo->realVarsPre[320] /* roo.air.cfd.uWri[11] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* roo.air.cfd.uWri[11] DISCRETE */);
  threadData->lastEquationSolved = 474;
}
extern void tmp_two_returns_res_eqFunction_1175(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1176(DATA *data, threadData_t *threadData);


/*
equation index: 477
type: SIMPLE_ASSIGN
sup1.ports[1].h_outflow = 1006.0 * (-273.15 + Tsup1.k) * (1.0 - sup1.X_in_internal[1]) + (2.5010145e6 + 1860.0 * (-273.15 + Tsup1.k)) * sup1.X_in_internal[1]
*/
void tmp_two_returns_res_eqFunction_477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,477};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* sup1.ports[1].h_outflow variable */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* Tsup1.k PARAM */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* sup1.X_in_internal[1] variable */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* Tsup1.k PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* sup1.X_in_internal[1] variable */));
  threadData->lastEquationSolved = 477;
}
extern void tmp_two_returns_res_eqFunction_1172(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1182(DATA *data, threadData_t *threadData);


/*
equation index: 480
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[14] = roo.air.cfd.u[14]
*/
void tmp_two_returns_res_eqFunction_480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,480};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[323]] /* roo.air.cfd.uWri[14] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* roo.air.cfd.u[14] variable */);
  threadData->lastEquationSolved = 480;
}

/*
equation index: 481
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[14] = roo.air.cfd.uWri[14]
*/
void tmp_two_returns_res_eqFunction_481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,481};
  (data->simulationInfo->realVarsPre[323] /* roo.air.cfd.uWri[14] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[323]] /* roo.air.cfd.uWri[14] DISCRETE */);
  threadData->lastEquationSolved = 481;
}
extern void tmp_two_returns_res_eqFunction_1173(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1174(DATA *data, threadData_t *threadData);


/*
equation index: 484
type: SIMPLE_ASSIGN
sup2.ports[1].h_outflow = 1006.0 * (-273.15 + Tsup2.k) * (1.0 - sup2.X_in_internal[1]) + (2.5010145e6 + 1860.0 * (-273.15 + Tsup2.k)) * sup2.X_in_internal[1]
*/
void tmp_two_returns_res_eqFunction_484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,484};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* sup2.ports[1].h_outflow variable */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4]] /* Tsup2.k PARAM */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* sup2.X_in_internal[1] variable */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4]] /* Tsup2.k PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* sup2.X_in_internal[1] variable */));
  threadData->lastEquationSolved = 484;
}
extern void tmp_two_returns_res_eqFunction_1171(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1183(DATA *data, threadData_t *threadData);


/*
equation index: 487
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[15] = roo.air.cfd.u[15]
*/
void tmp_two_returns_res_eqFunction_487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,487};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* roo.air.cfd.uWri[15] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* roo.air.cfd.u[15] variable */);
  threadData->lastEquationSolved = 487;
}

/*
equation index: 488
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[15] = roo.air.cfd.uWri[15]
*/
void tmp_two_returns_res_eqFunction_488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,488};
  (data->simulationInfo->realVarsPre[324] /* roo.air.cfd.uWri[15] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* roo.air.cfd.uWri[15] DISCRETE */);
  threadData->lastEquationSolved = 488;
}
extern void tmp_two_returns_res_eqFunction_1335(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1336(DATA *data, threadData_t *threadData);


/*
equation index: 491
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[18] = roo.air.cfd.u[18]
*/
void tmp_two_returns_res_eqFunction_491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,491};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* roo.air.cfd.uWri[18] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.air.cfd.u[18] variable */);
  threadData->lastEquationSolved = 491;
}

/*
equation index: 492
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[18] = roo.air.cfd.uWri[18]
*/
void tmp_two_returns_res_eqFunction_492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,492};
  (data->simulationInfo->realVarsPre[327] /* roo.air.cfd.uWri[18] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* roo.air.cfd.uWri[18] DISCRETE */);
  threadData->lastEquationSolved = 492;
}
extern void tmp_two_returns_res_eqFunction_1331(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1332(DATA *data, threadData_t *threadData);


/*
equation index: 495
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[19] = roo.air.cfd.u[19]
*/
void tmp_two_returns_res_eqFunction_495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,495};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* roo.air.cfd.uWri[19] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.air.cfd.u[19] variable */);
  threadData->lastEquationSolved = 495;
}

/*
equation index: 496
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[19] = roo.air.cfd.uWri[19]
*/
void tmp_two_returns_res_eqFunction_496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,496};
  (data->simulationInfo->realVarsPre[328] /* roo.air.cfd.uWri[19] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* roo.air.cfd.uWri[19] DISCRETE */);
  threadData->lastEquationSolved = 496;
}

/*
equation index: 497
type: SIMPLE_ASSIGN
roo.air.cfd.modTimRea = time
*/
void tmp_two_returns_res_eqFunction_497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,497};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* roo.air.cfd.modTimRea DISCRETE */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 497;
}

/*
equation index: 498
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.modTimRea = roo.air.cfd.modTimRea
*/
void tmp_two_returns_res_eqFunction_498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,498};
  (data->simulationInfo->realVarsPre[288] /* roo.air.cfd.modTimRea DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* roo.air.cfd.modTimRea DISCRETE */);
  threadData->lastEquationSolved = 498;
}

/*
equation index: 499
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.retVal = 0.0
*/
void tmp_two_returns_res_eqFunction_499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,499};
  (data->simulationInfo->integerVarsPre[0] /* roo.air.cfd.retVal DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 499;
}

/*
equation index: 500
type: SIMPLE_ASSIGN
roo.air.cfd.retVal = $PRE.roo.air.cfd.retVal
*/
void tmp_two_returns_res_eqFunction_500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,500};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* roo.air.cfd.retVal DISCRETE */) = (data->simulationInfo->integerVarsPre[0] /* roo.air.cfd.retVal DISCRETE */);
  threadData->lastEquationSolved = 500;
}

/*
equation index: 501
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.firstTrigger = false
*/
void tmp_two_returns_res_eqFunction_501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,501};
  (data->simulationInfo->booleanVarsPre[4] /* roo.air.cfd.firstTrigger DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 501;
}

/*
equation index: 502
type: SIMPLE_ASSIGN
roo.air.cfd.firstTrigger = $PRE.roo.air.cfd.firstTrigger
*/
void tmp_two_returns_res_eqFunction_502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,502};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* roo.air.cfd.firstTrigger DISCRETE */) = (data->simulationInfo->booleanVarsPre[4] /* roo.air.cfd.firstTrigger DISCRETE */);
  threadData->lastEquationSolved = 502;
}

/*
equation index: 503
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[1] = 0.0
*/
void tmp_two_returns_res_eqFunction_503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,503};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* roo.air.cfd.uIntPre[1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 503;
}

/*
equation index: 504
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[1] = roo.air.cfd.uIntPre[1]
*/
void tmp_two_returns_res_eqFunction_504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,504};
  (data->simulationInfo->realVarsPre[289] /* roo.air.cfd.uIntPre[1] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* roo.air.cfd.uIntPre[1] DISCRETE */);
  threadData->lastEquationSolved = 504;
}

/*
equation index: 505
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[2] = 0.0
*/
void tmp_two_returns_res_eqFunction_505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,505};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* roo.air.cfd.uIntPre[2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 505;
}

/*
equation index: 506
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[2] = roo.air.cfd.uIntPre[2]
*/
void tmp_two_returns_res_eqFunction_506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,506};
  (data->simulationInfo->realVarsPre[290] /* roo.air.cfd.uIntPre[2] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* roo.air.cfd.uIntPre[2] DISCRETE */);
  threadData->lastEquationSolved = 506;
}

/*
equation index: 507
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[3] = 0.0
*/
void tmp_two_returns_res_eqFunction_507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,507};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* roo.air.cfd.uIntPre[3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 507;
}

/*
equation index: 508
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[3] = roo.air.cfd.uIntPre[3]
*/
void tmp_two_returns_res_eqFunction_508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,508};
  (data->simulationInfo->realVarsPre[291] /* roo.air.cfd.uIntPre[3] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* roo.air.cfd.uIntPre[3] DISCRETE */);
  threadData->lastEquationSolved = 508;
}

/*
equation index: 509
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[4] = 0.0
*/
void tmp_two_returns_res_eqFunction_509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,509};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* roo.air.cfd.uIntPre[4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 509;
}

/*
equation index: 510
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[4] = roo.air.cfd.uIntPre[4]
*/
void tmp_two_returns_res_eqFunction_510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,510};
  (data->simulationInfo->realVarsPre[292] /* roo.air.cfd.uIntPre[4] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* roo.air.cfd.uIntPre[4] DISCRETE */);
  threadData->lastEquationSolved = 510;
}

/*
equation index: 511
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[5] = 0.0
*/
void tmp_two_returns_res_eqFunction_511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,511};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* roo.air.cfd.uIntPre[5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 511;
}

/*
equation index: 512
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[5] = roo.air.cfd.uIntPre[5]
*/
void tmp_two_returns_res_eqFunction_512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,512};
  (data->simulationInfo->realVarsPre[293] /* roo.air.cfd.uIntPre[5] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* roo.air.cfd.uIntPre[5] DISCRETE */);
  threadData->lastEquationSolved = 512;
}

/*
equation index: 513
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[6] = 0.0
*/
void tmp_two_returns_res_eqFunction_513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,513};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* roo.air.cfd.uIntPre[6] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 513;
}

/*
equation index: 514
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[6] = roo.air.cfd.uIntPre[6]
*/
void tmp_two_returns_res_eqFunction_514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,514};
  (data->simulationInfo->realVarsPre[294] /* roo.air.cfd.uIntPre[6] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* roo.air.cfd.uIntPre[6] DISCRETE */);
  threadData->lastEquationSolved = 514;
}

/*
equation index: 515
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[7] = 0.0
*/
void tmp_two_returns_res_eqFunction_515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,515};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* roo.air.cfd.uIntPre[7] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 515;
}

/*
equation index: 516
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[7] = roo.air.cfd.uIntPre[7]
*/
void tmp_two_returns_res_eqFunction_516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,516};
  (data->simulationInfo->realVarsPre[295] /* roo.air.cfd.uIntPre[7] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* roo.air.cfd.uIntPre[7] DISCRETE */);
  threadData->lastEquationSolved = 516;
}

/*
equation index: 517
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[8] = 0.0
*/
void tmp_two_returns_res_eqFunction_517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,517};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* roo.air.cfd.uIntPre[8] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 517;
}

/*
equation index: 518
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[8] = roo.air.cfd.uIntPre[8]
*/
void tmp_two_returns_res_eqFunction_518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,518};
  (data->simulationInfo->realVarsPre[296] /* roo.air.cfd.uIntPre[8] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* roo.air.cfd.uIntPre[8] DISCRETE */);
  threadData->lastEquationSolved = 518;
}

/*
equation index: 519
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[9] = 0.0
*/
void tmp_two_returns_res_eqFunction_519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,519};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* roo.air.cfd.uIntPre[9] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 519;
}

/*
equation index: 520
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[9] = roo.air.cfd.uIntPre[9]
*/
void tmp_two_returns_res_eqFunction_520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,520};
  (data->simulationInfo->realVarsPre[297] /* roo.air.cfd.uIntPre[9] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* roo.air.cfd.uIntPre[9] DISCRETE */);
  threadData->lastEquationSolved = 520;
}

/*
equation index: 521
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[10] = 0.0
*/
void tmp_two_returns_res_eqFunction_521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,521};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* roo.air.cfd.uIntPre[10] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 521;
}

/*
equation index: 522
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[10] = roo.air.cfd.uIntPre[10]
*/
void tmp_two_returns_res_eqFunction_522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,522};
  (data->simulationInfo->realVarsPre[298] /* roo.air.cfd.uIntPre[10] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* roo.air.cfd.uIntPre[10] DISCRETE */);
  threadData->lastEquationSolved = 522;
}

/*
equation index: 523
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[11] = 0.0
*/
void tmp_two_returns_res_eqFunction_523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,523};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* roo.air.cfd.uIntPre[11] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 523;
}

/*
equation index: 524
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[11] = roo.air.cfd.uIntPre[11]
*/
void tmp_two_returns_res_eqFunction_524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,524};
  (data->simulationInfo->realVarsPre[299] /* roo.air.cfd.uIntPre[11] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* roo.air.cfd.uIntPre[11] DISCRETE */);
  threadData->lastEquationSolved = 524;
}

/*
equation index: 525
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[12] = 0.0
*/
void tmp_two_returns_res_eqFunction_525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,525};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* roo.air.cfd.uIntPre[12] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 525;
}

/*
equation index: 526
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[12] = roo.air.cfd.uIntPre[12]
*/
void tmp_two_returns_res_eqFunction_526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,526};
  (data->simulationInfo->realVarsPre[300] /* roo.air.cfd.uIntPre[12] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* roo.air.cfd.uIntPre[12] DISCRETE */);
  threadData->lastEquationSolved = 526;
}

/*
equation index: 527
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[13] = 0.0
*/
void tmp_two_returns_res_eqFunction_527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,527};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* roo.air.cfd.uIntPre[13] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 527;
}

/*
equation index: 528
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[13] = roo.air.cfd.uIntPre[13]
*/
void tmp_two_returns_res_eqFunction_528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,528};
  (data->simulationInfo->realVarsPre[301] /* roo.air.cfd.uIntPre[13] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* roo.air.cfd.uIntPre[13] DISCRETE */);
  threadData->lastEquationSolved = 528;
}

/*
equation index: 529
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[14] = 0.0
*/
void tmp_two_returns_res_eqFunction_529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,529};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* roo.air.cfd.uIntPre[14] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 529;
}

/*
equation index: 530
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[14] = roo.air.cfd.uIntPre[14]
*/
void tmp_two_returns_res_eqFunction_530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,530};
  (data->simulationInfo->realVarsPre[302] /* roo.air.cfd.uIntPre[14] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* roo.air.cfd.uIntPre[14] DISCRETE */);
  threadData->lastEquationSolved = 530;
}

/*
equation index: 531
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[15] = 0.0
*/
void tmp_two_returns_res_eqFunction_531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,531};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* roo.air.cfd.uIntPre[15] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 531;
}

/*
equation index: 532
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[15] = roo.air.cfd.uIntPre[15]
*/
void tmp_two_returns_res_eqFunction_532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,532};
  (data->simulationInfo->realVarsPre[303] /* roo.air.cfd.uIntPre[15] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* roo.air.cfd.uIntPre[15] DISCRETE */);
  threadData->lastEquationSolved = 532;
}

/*
equation index: 533
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[16] = 0.0
*/
void tmp_two_returns_res_eqFunction_533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,533};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* roo.air.cfd.uIntPre[16] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 533;
}

/*
equation index: 534
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[16] = roo.air.cfd.uIntPre[16]
*/
void tmp_two_returns_res_eqFunction_534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,534};
  (data->simulationInfo->realVarsPre[304] /* roo.air.cfd.uIntPre[16] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* roo.air.cfd.uIntPre[16] DISCRETE */);
  threadData->lastEquationSolved = 534;
}

/*
equation index: 535
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[17] = 0.0
*/
void tmp_two_returns_res_eqFunction_535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,535};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* roo.air.cfd.uIntPre[17] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 535;
}

/*
equation index: 536
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[17] = roo.air.cfd.uIntPre[17]
*/
void tmp_two_returns_res_eqFunction_536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,536};
  (data->simulationInfo->realVarsPre[305] /* roo.air.cfd.uIntPre[17] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* roo.air.cfd.uIntPre[17] DISCRETE */);
  threadData->lastEquationSolved = 536;
}

/*
equation index: 537
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[18] = 0.0
*/
void tmp_two_returns_res_eqFunction_537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,537};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* roo.air.cfd.uIntPre[18] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 537;
}

/*
equation index: 538
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[18] = roo.air.cfd.uIntPre[18]
*/
void tmp_two_returns_res_eqFunction_538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,538};
  (data->simulationInfo->realVarsPre[306] /* roo.air.cfd.uIntPre[18] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* roo.air.cfd.uIntPre[18] DISCRETE */);
  threadData->lastEquationSolved = 538;
}

/*
equation index: 539
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[19] = 0.0
*/
void tmp_two_returns_res_eqFunction_539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,539};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* roo.air.cfd.uIntPre[19] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 539;
}

/*
equation index: 540
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[19] = roo.air.cfd.uIntPre[19]
*/
void tmp_two_returns_res_eqFunction_540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,540};
  (data->simulationInfo->realVarsPre[307] /* roo.air.cfd.uIntPre[19] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* roo.air.cfd.uIntPre[19] DISCRETE */);
  threadData->lastEquationSolved = 540;
}

/*
equation index: 541
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[20] = 0.0
*/
void tmp_two_returns_res_eqFunction_541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,541};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* roo.air.cfd.uIntPre[20] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 541;
}

/*
equation index: 542
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[20] = roo.air.cfd.uIntPre[20]
*/
void tmp_two_returns_res_eqFunction_542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,542};
  (data->simulationInfo->realVarsPre[308] /* roo.air.cfd.uIntPre[20] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* roo.air.cfd.uIntPre[20] DISCRETE */);
  threadData->lastEquationSolved = 542;
}

/*
equation index: 543
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[21] = 0.0
*/
void tmp_two_returns_res_eqFunction_543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,543};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* roo.air.cfd.uIntPre[21] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 543;
}

/*
equation index: 544
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[21] = roo.air.cfd.uIntPre[21]
*/
void tmp_two_returns_res_eqFunction_544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,544};
  (data->simulationInfo->realVarsPre[309] /* roo.air.cfd.uIntPre[21] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* roo.air.cfd.uIntPre[21] DISCRETE */);
  threadData->lastEquationSolved = 544;
}
extern void tmp_two_returns_res_eqFunction_1177(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1178(DATA *data, threadData_t *threadData);


/*
equation index: 547
type: SIMPLE_ASSIGN
ret.ports[2].h_outflow = 1006.0 * (-273.15 + ret.T) * (1.0 - ret.X_in_internal[1]) + (2.5010145e6 + 1860.0 * (-273.15 + ret.T)) * ret.X_in_internal[1]
*/
void tmp_two_returns_res_eqFunction_547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,547};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* ret.ports[2].h_outflow variable */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* ret.T PARAM */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* ret.X_in_internal[1] variable */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* ret.T PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* ret.X_in_internal[1] variable */));
  threadData->lastEquationSolved = 547;
}
extern void tmp_two_returns_res_eqFunction_1179(DATA *data, threadData_t *threadData);


/*
equation index: 549
type: SIMPLE_ASSIGN
roo.radTem.epsTauASha[1] = roo.radTem.AGla[1] * roo.radTem.epsGla[1]
*/
void tmp_two_returns_res_eqFunction_549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,549};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1260]] /* roo.radTem.epsTauASha[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1053]] /* roo.radTem.AGla[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* roo.radTem.epsGla[1] PARAM */));
  threadData->lastEquationSolved = 549;
}

/*
equation index: 550
type: SIMPLE_ASSIGN
roo.radTem.epsASha[1] = roo.radTem.AGla[1] * roo.radTem.epsSha[1]
*/
void tmp_two_returns_res_eqFunction_550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,550};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1243]] /* roo.radTem.epsASha[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1053]] /* roo.radTem.AGla[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* roo.radTem.epsSha[1] PARAM */));
  threadData->lastEquationSolved = 550;
}

/*
equation index: 551
type: SIMPLE_ASSIGN
roo.irRadExc.t0 = time
*/
void tmp_two_returns_res_eqFunction_551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,551};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[811]] /* roo.irRadExc.t0 PARAM */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 551;
}

/*
equation index: 552
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[21] = 0.0
*/
void tmp_two_returns_res_eqFunction_552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,552};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* roo.air.cfd.uInt[21] STATE(1,roo.air.cfd.u[21]) */) = 0.0;
  threadData->lastEquationSolved = 552;
}

/*
equation index: 553
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[20] = 0.0
*/
void tmp_two_returns_res_eqFunction_553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,553};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* roo.air.cfd.uInt[20] STATE(1,roo.air.cfd.u[20]) */) = 0.0;
  threadData->lastEquationSolved = 553;
}

/*
equation index: 554
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[19] = 0.0
*/
void tmp_two_returns_res_eqFunction_554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,554};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* roo.air.cfd.uInt[19] STATE(1,roo.air.cfd.u[19]) */) = 0.0;
  threadData->lastEquationSolved = 554;
}

/*
equation index: 555
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[18] = 0.0
*/
void tmp_two_returns_res_eqFunction_555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,555};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* roo.air.cfd.uInt[18] STATE(1,roo.air.cfd.u[18]) */) = 0.0;
  threadData->lastEquationSolved = 555;
}

/*
equation index: 556
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[17] = 0.0
*/
void tmp_two_returns_res_eqFunction_556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,556};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* roo.air.cfd.uInt[17] STATE(1,roo.air.cfd.u[17]) */) = 0.0;
  threadData->lastEquationSolved = 556;
}

/*
equation index: 557
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[16] = 0.0
*/
void tmp_two_returns_res_eqFunction_557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,557};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* roo.air.cfd.uInt[16] STATE(1,roo.air.cfd.u[16]) */) = 0.0;
  threadData->lastEquationSolved = 557;
}

/*
equation index: 558
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[15] = 0.0
*/
void tmp_two_returns_res_eqFunction_558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,558};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* roo.air.cfd.uInt[15] STATE(1,roo.air.cfd.u[15]) */) = 0.0;
  threadData->lastEquationSolved = 558;
}

/*
equation index: 559
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[14] = 0.0
*/
void tmp_two_returns_res_eqFunction_559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,559};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* roo.air.cfd.uInt[14] STATE(1,roo.air.cfd.u[14]) */) = 0.0;
  threadData->lastEquationSolved = 559;
}

/*
equation index: 560
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[13] = 0.0
*/
void tmp_two_returns_res_eqFunction_560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,560};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* roo.air.cfd.uInt[13] STATE(1,roo.air.cfd.u[13]) */) = 0.0;
  threadData->lastEquationSolved = 560;
}

/*
equation index: 561
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[12] = 0.0
*/
void tmp_two_returns_res_eqFunction_561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,561};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* roo.air.cfd.uInt[12] STATE(1,roo.air.cfd.u[12]) */) = 0.0;
  threadData->lastEquationSolved = 561;
}

/*
equation index: 562
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[11] = 0.0
*/
void tmp_two_returns_res_eqFunction_562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,562};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* roo.air.cfd.uInt[11] STATE(1,roo.air.cfd.u[11]) */) = 0.0;
  threadData->lastEquationSolved = 562;
}

/*
equation index: 563
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[10] = 0.0
*/
void tmp_two_returns_res_eqFunction_563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,563};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* roo.air.cfd.uInt[10] STATE(1,roo.air.cfd.u[10]) */) = 0.0;
  threadData->lastEquationSolved = 563;
}

/*
equation index: 564
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[9] = 0.0
*/
void tmp_two_returns_res_eqFunction_564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,564};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* roo.air.cfd.uInt[9] STATE(1,roo.air.cfd.u[9]) */) = 0.0;
  threadData->lastEquationSolved = 564;
}

/*
equation index: 565
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[8] = 0.0
*/
void tmp_two_returns_res_eqFunction_565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,565};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* roo.air.cfd.uInt[8] STATE(1,roo.air.cfd.u[8]) */) = 0.0;
  threadData->lastEquationSolved = 565;
}

/*
equation index: 566
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[7] = 0.0
*/
void tmp_two_returns_res_eqFunction_566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,566};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* roo.air.cfd.uInt[7] STATE(1,roo.air.cfd.u[7]) */) = 0.0;
  threadData->lastEquationSolved = 566;
}

/*
equation index: 567
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[6] = 0.0
*/
void tmp_two_returns_res_eqFunction_567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,567};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* roo.air.cfd.uInt[6] STATE(1,roo.air.cfd.u[6]) */) = 0.0;
  threadData->lastEquationSolved = 567;
}

/*
equation index: 568
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[5] = 0.0
*/
void tmp_two_returns_res_eqFunction_568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,568};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* roo.air.cfd.uInt[5] STATE(1,roo.air.cfd.u[5]) */) = 0.0;
  threadData->lastEquationSolved = 568;
}

/*
equation index: 569
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[4] = 0.0
*/
void tmp_two_returns_res_eqFunction_569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,569};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* roo.air.cfd.uInt[4] STATE(1,roo.air.cfd.u[4]) */) = 0.0;
  threadData->lastEquationSolved = 569;
}

/*
equation index: 570
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[3] = 0.0
*/
void tmp_two_returns_res_eqFunction_570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,570};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* roo.air.cfd.uInt[3] STATE(1,roo.air.cfd.u[3]) */) = 0.0;
  threadData->lastEquationSolved = 570;
}

/*
equation index: 571
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[2] = 0.0
*/
void tmp_two_returns_res_eqFunction_571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,571};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* roo.air.cfd.uInt[2] STATE(1,roo.air.cfd.u[2]) */) = 0.0;
  threadData->lastEquationSolved = 571;
}

/*
equation index: 572
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[1] = 0.0
*/
void tmp_two_returns_res_eqFunction_572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,572};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* roo.air.cfd.uInt[1] STATE(1,roo.air.cfd.u[1]) */) = 0.0;
  threadData->lastEquationSolved = 572;
}

/*
equation index: 597
type: ALGORITHM

  TmpTwoReturnsRes.roo.irRadGai.checkSurfaceAreas(0, {roo.irRadGai.datConExt[1].A}, "TmpTwoReturnsRes.roo.irRadGai.datConExt");
  TmpTwoReturnsRes.roo.irRadGai.checkSurfaceAreas(0, {roo.irRadGai.datConExtWin[1].AWin}, "TmpTwoReturnsRes.roo.irRadGai.datConExtWin");
  TmpTwoReturnsRes.roo.irRadGai.checkSurfaceAreas(0, {roo.irRadGai.datConPar[1].A}, "TmpTwoReturnsRes.roo.irRadGai.datConPar");
  TmpTwoReturnsRes.roo.irRadGai.checkSurfaceAreas(0, {roo.irRadGai.datConBou[1].A}, "TmpTwoReturnsRes.roo.irRadGai.datConBou");
  TmpTwoReturnsRes.roo.irRadGai.checkSurfaceAreas(6, {roo.irRadGai.surBou[1].A, roo.irRadGai.surBou[2].A, roo.irRadGai.surBou[3].A, roo.irRadGai.surBou[4].A, roo.irRadGai.surBou[5].A, roo.irRadGai.surBou[6].A}, "TmpTwoReturnsRes.roo.irRadGai.surBou");
*/
void tmp_two_returns_res_eqFunction_597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,597};
  real_array tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,39,"TmpTwoReturnsRes.roo.irRadGai.datConExt");
  real_array tmp13;
  static const MMC_DEFSTRINGLIT(tmp14,42,"TmpTwoReturnsRes.roo.irRadGai.datConExtWin");
  real_array tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,39,"TmpTwoReturnsRes.roo.irRadGai.datConPar");
  real_array tmp17;
  static const MMC_DEFSTRINGLIT(tmp18,39,"TmpTwoReturnsRes.roo.irRadGai.datConBou");
  real_array tmp19;
  static const MMC_DEFSTRINGLIT(tmp20,36,"TmpTwoReturnsRes.roo.irRadGai.surBou");
  array_alloc_scalar_real_array(&tmp11, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[857]] /* roo.irRadGai.datConExt[1].A PARAM */));
  omc_TmpTwoReturnsRes_roo_irRadGai_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp11, MMC_REFSTRINGLIT(tmp12));

  array_alloc_scalar_real_array(&tmp13, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* roo.irRadGai.datConExtWin[1].AWin PARAM */));
  omc_TmpTwoReturnsRes_roo_irRadGai_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp13, MMC_REFSTRINGLIT(tmp14));

  array_alloc_scalar_real_array(&tmp15, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[941]] /* roo.irRadGai.datConPar[1].A PARAM */));
  omc_TmpTwoReturnsRes_roo_irRadGai_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp15, MMC_REFSTRINGLIT(tmp16));

  array_alloc_scalar_real_array(&tmp17, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[836]] /* roo.irRadGai.datConBou[1].A PARAM */));
  omc_TmpTwoReturnsRes_roo_irRadGai_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp17, MMC_REFSTRINGLIT(tmp18));

  array_alloc_scalar_real_array(&tmp19, 6, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1021]] /* roo.irRadGai.surBou[1].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1022]] /* roo.irRadGai.surBou[2].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1023]] /* roo.irRadGai.surBou[3].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* roo.irRadGai.surBou[4].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* roo.irRadGai.surBou[5].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1026]] /* roo.irRadGai.surBou[6].A PARAM */));
  omc_TmpTwoReturnsRes_roo_irRadGai_checkSurfaceAreas(threadData, ((modelica_integer) 6), tmp19, MMC_REFSTRINGLIT(tmp20));
  threadData->lastEquationSolved = 597;
}

/*
equation index: 596
type: ALGORITHM

  TmpTwoReturnsRes.roo.irRadExc.checkSurfaceAreas(0, {roo.irRadExc.datConExt[1].A}, "TmpTwoReturnsRes.roo.irRadExc.datConExt");
  TmpTwoReturnsRes.roo.irRadExc.checkSurfaceAreas(0, {roo.irRadExc.datConExtWin[1].AWin}, "TmpTwoReturnsRes.roo.irRadExc.datConExtWin");
  TmpTwoReturnsRes.roo.irRadExc.checkSurfaceAreas(0, {roo.irRadExc.datConPar[1].A}, "TmpTwoReturnsRes.roo.irRadExc.datConPar");
  TmpTwoReturnsRes.roo.irRadExc.checkSurfaceAreas(0, {roo.irRadExc.datConBou[1].A}, "TmpTwoReturnsRes.roo.irRadExc.datConBou");
  TmpTwoReturnsRes.roo.irRadExc.checkSurfaceAreas(6, {roo.irRadExc.surBou[1].A, roo.irRadExc.surBou[2].A, roo.irRadExc.surBou[3].A, roo.irRadExc.surBou[4].A, roo.irRadExc.surBou[5].A, roo.irRadExc.surBou[6].A}, "TmpTwoReturnsRes.roo.irRadExc.surBou");
*/
void tmp_two_returns_res_eqFunction_596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,596};
  real_array tmp21;
  static const MMC_DEFSTRINGLIT(tmp22,39,"TmpTwoReturnsRes.roo.irRadExc.datConExt");
  real_array tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,42,"TmpTwoReturnsRes.roo.irRadExc.datConExtWin");
  real_array tmp25;
  static const MMC_DEFSTRINGLIT(tmp26,39,"TmpTwoReturnsRes.roo.irRadExc.datConPar");
  real_array tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,39,"TmpTwoReturnsRes.roo.irRadExc.datConBou");
  real_array tmp29;
  static const MMC_DEFSTRINGLIT(tmp30,36,"TmpTwoReturnsRes.roo.irRadExc.surBou");
  array_alloc_scalar_real_array(&tmp21, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[600]] /* roo.irRadExc.datConExt[1].A PARAM */));
  omc_TmpTwoReturnsRes_roo_irRadExc_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp21, MMC_REFSTRINGLIT(tmp22));

  array_alloc_scalar_real_array(&tmp23, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[625]] /* roo.irRadExc.datConExtWin[1].AWin PARAM */));
  omc_TmpTwoReturnsRes_roo_irRadExc_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp23, MMC_REFSTRINGLIT(tmp24));

  array_alloc_scalar_real_array(&tmp25, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[684]] /* roo.irRadExc.datConPar[1].A PARAM */));
  omc_TmpTwoReturnsRes_roo_irRadExc_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp25, MMC_REFSTRINGLIT(tmp26));

  array_alloc_scalar_real_array(&tmp27, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[579]] /* roo.irRadExc.datConBou[1].A PARAM */));
  omc_TmpTwoReturnsRes_roo_irRadExc_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp27, MMC_REFSTRINGLIT(tmp28));

  array_alloc_scalar_real_array(&tmp29, 6, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[787]] /* roo.irRadExc.surBou[1].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[788]] /* roo.irRadExc.surBou[2].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[789]] /* roo.irRadExc.surBou[3].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[790]] /* roo.irRadExc.surBou[4].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[791]] /* roo.irRadExc.surBou[5].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[792]] /* roo.irRadExc.surBou[6].A PARAM */));
  omc_TmpTwoReturnsRes_roo_irRadExc_checkSurfaceAreas(threadData, ((modelica_integer) 6), tmp29, MMC_REFSTRINGLIT(tmp30));
  threadData->lastEquationSolved = 596;
}

/*
equation index: 595
type: ALGORITHM

  TmpTwoReturnsRes.roo.radTem.checkSurfaceAreas(0, {roo.radTem.datConExt[1].A}, "TmpTwoReturnsRes.roo.radTem.datConExt");
  TmpTwoReturnsRes.roo.radTem.checkSurfaceAreas(0, {roo.radTem.datConExtWin[1].AWin}, "TmpTwoReturnsRes.roo.radTem.datConExtWin");
  TmpTwoReturnsRes.roo.radTem.checkSurfaceAreas(0, {roo.radTem.datConPar[1].A}, "TmpTwoReturnsRes.roo.radTem.datConPar");
  TmpTwoReturnsRes.roo.radTem.checkSurfaceAreas(0, {roo.radTem.datConBou[1].A}, "TmpTwoReturnsRes.roo.radTem.datConBou");
  TmpTwoReturnsRes.roo.radTem.checkSurfaceAreas(6, {roo.radTem.surBou[1].A, roo.radTem.surBou[2].A, roo.radTem.surBou[3].A, roo.radTem.surBou[4].A, roo.radTem.surBou[5].A, roo.radTem.surBou[6].A}, "TmpTwoReturnsRes.roo.radTem.surBou");
*/
void tmp_two_returns_res_eqFunction_595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,595};
  real_array tmp31;
  static const MMC_DEFSTRINGLIT(tmp32,37,"TmpTwoReturnsRes.roo.radTem.datConExt");
  real_array tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,40,"TmpTwoReturnsRes.roo.radTem.datConExtWin");
  real_array tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,37,"TmpTwoReturnsRes.roo.radTem.datConPar");
  real_array tmp37;
  static const MMC_DEFSTRINGLIT(tmp38,37,"TmpTwoReturnsRes.roo.radTem.datConBou");
  real_array tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,34,"TmpTwoReturnsRes.roo.radTem.surBou");
  array_alloc_scalar_real_array(&tmp31, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* roo.radTem.datConExt[1].A PARAM */));
  omc_TmpTwoReturnsRes_roo_radTem_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp31, MMC_REFSTRINGLIT(tmp32));

  array_alloc_scalar_real_array(&tmp33, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1106]] /* roo.radTem.datConExtWin[1].AWin PARAM */));
  omc_TmpTwoReturnsRes_roo_radTem_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp33, MMC_REFSTRINGLIT(tmp34));

  array_alloc_scalar_real_array(&tmp35, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1165]] /* roo.radTem.datConPar[1].A PARAM */));
  omc_TmpTwoReturnsRes_roo_radTem_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp35, MMC_REFSTRINGLIT(tmp36));

  array_alloc_scalar_real_array(&tmp37, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1060]] /* roo.radTem.datConBou[1].A PARAM */));
  omc_TmpTwoReturnsRes_roo_radTem_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp37, MMC_REFSTRINGLIT(tmp38));

  array_alloc_scalar_real_array(&tmp39, 6, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1261]] /* roo.radTem.surBou[1].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1262]] /* roo.radTem.surBou[2].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1263]] /* roo.radTem.surBou[3].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* roo.radTem.surBou[4].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1265]] /* roo.radTem.surBou[5].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* roo.radTem.surBou[6].A PARAM */));
  omc_TmpTwoReturnsRes_roo_radTem_checkSurfaceAreas(threadData, ((modelica_integer) 6), tmp39, MMC_REFSTRINGLIT(tmp40));
  threadData->lastEquationSolved = 595;
}

/*
equation index: 594
type: ALGORITHM

  TmpTwoReturnsRes.roo.air.cfd.assertStringsAreUnique("surface", 6, {roo.air.cfd.surIde[1].name, roo.air.cfd.surIde[2].name, roo.air.cfd.surIde[3].name, roo.air.cfd.surIde[4].name, roo.air.cfd.surIde[5].name, roo.air.cfd.surIde[6].name});
*/
void tmp_two_returns_res_eqFunction_594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,594};
  static const MMC_DEFSTRINGLIT(tmp41,7,"surface");
  string_array tmp42;
  array_alloc_scalar_string_array(&tmp42, 6, (modelica_string)(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[7]] /* roo.air.cfd.surIde[1].name PARAM */), (modelica_string)(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[8]] /* roo.air.cfd.surIde[2].name PARAM */), (modelica_string)(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[9]] /* roo.air.cfd.surIde[3].name PARAM */), (modelica_string)(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[10]] /* roo.air.cfd.surIde[4].name PARAM */), (modelica_string)(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[11]] /* roo.air.cfd.surIde[5].name PARAM */), (modelica_string)(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[12]] /* roo.air.cfd.surIde[6].name PARAM */));
  omc_TmpTwoReturnsRes_roo_air_cfd_assertStringsAreUnique(threadData, MMC_REFSTRINGLIT(tmp41), ((modelica_integer) 6), tmp42);
  threadData->lastEquationSolved = 594;
}

/*
equation index: 593
type: ALGORITHM

  TmpTwoReturnsRes.roo.air.cfd.assertStringsAreUnique("ports", 4, roo.air.cfd.portName);
*/
void tmp_two_returns_res_eqFunction_593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,593};
  static const MMC_DEFSTRINGLIT(tmp43,5,"ports");
  string_array tmp44;
  string_array_create(&tmp44, ((modelica_string*)&((&data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* roo.air.cfd.portName[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)4);
  omc_TmpTwoReturnsRes_roo_air_cfd_assertStringsAreUnique(threadData, MMC_REFSTRINGLIT(tmp43), ((modelica_integer) 4), tmp44);
  threadData->lastEquationSolved = 593;
}

/*
equation index: 592
type: ALGORITHM

  TmpTwoReturnsRes.roo.air.cfd.sendParameters(roo.air.cfd.cfdFilNam, {"floor", "ceiling", "south_wall", "north_wall", "west_wall", "east_wall"}, {375.0, 375.0, 67.5, 67.5, 112.5, 112.5}, {3.141592653589793, 0.0, 1.5707963267948966, 1.5707963267948966, 1.5707963267948966, 1.5707963267948966}, {Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate}, 4, roo.air.cfd.portName, false, {""}, false, 6, 1, 1, 1, 0, roo.air.cfd.rho_start);
*/
void tmp_two_returns_res_eqFunction_592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,592};
  string_array tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,5,"floor");
  static const MMC_DEFSTRINGLIT(tmp47,7,"ceiling");
  static const MMC_DEFSTRINGLIT(tmp48,10,"south_wall");
  static const MMC_DEFSTRINGLIT(tmp49,10,"north_wall");
  static const MMC_DEFSTRINGLIT(tmp50,9,"west_wall");
  static const MMC_DEFSTRINGLIT(tmp51,9,"east_wall");
  real_array tmp52;
  real_array tmp53;
  integer_array tmp54;
  string_array tmp55;
  string_array tmp56;
  array_alloc_scalar_string_array(&tmp45, 6, (modelica_string)MMC_REFSTRINGLIT(tmp46), (modelica_string)MMC_REFSTRINGLIT(tmp47), (modelica_string)MMC_REFSTRINGLIT(tmp48), (modelica_string)MMC_REFSTRINGLIT(tmp49), (modelica_string)MMC_REFSTRINGLIT(tmp50), (modelica_string)MMC_REFSTRINGLIT(tmp51));
  array_alloc_scalar_real_array(&tmp52, 6, (modelica_real)375.0, (modelica_real)375.0, (modelica_real)67.5, (modelica_real)67.5, (modelica_real)112.5, (modelica_real)112.5);
  array_alloc_scalar_real_array(&tmp53, 6, (modelica_real)3.141592653589793, (modelica_real)0.0, (modelica_real)1.5707963267948966, (modelica_real)1.5707963267948966, (modelica_real)1.5707963267948966, (modelica_real)1.5707963267948966);
  array_alloc_scalar_integer_array(&tmp54, 6, (modelica_integer)2, (modelica_integer)2, (modelica_integer)2, (modelica_integer)2, (modelica_integer)2, (modelica_integer)2);
  string_array_create(&tmp55, ((modelica_string*)&((&data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* roo.air.cfd.portName[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)4);
  array_alloc_scalar_string_array(&tmp56, 1, (modelica_string)(modelica_string) mmc_emptystring);
  omc_TmpTwoReturnsRes_roo_air_cfd_sendParameters(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[1]] /* roo.air.cfd.cfdFilNam PARAM */), tmp45, tmp52, tmp53, tmp54, ((modelica_integer) 4), tmp55, 0 /* false */, tmp56, 0 /* false */, ((modelica_integer) 6), ((modelica_integer) 1), ((modelica_integer) 1), ((modelica_integer) 1), ((modelica_integer) 0), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[82]] /* roo.air.cfd.rho_start PARAM */));
  threadData->lastEquationSolved = 592;
}

/*
equation index: 591
type: ALGORITHM

  assert(retRes1.m_flow_turbulent > 0.0, "m_flow_turbulent must be bigger than zero.");
*/
void tmp_two_returns_res_eqFunction_591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,591};
  modelica_boolean tmp57;
  static const MMC_DEFSTRINGLIT(tmp58,42,"m_flow_turbulent must be bigger than zero.");
  static int tmp59 = 0;
  {
    tmp57 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* retRes1.m_flow_turbulent PARAM */),0.0);
    if(!tmp57)
    {
      {
        const char* assert_cond = "(retRes1.m_flow_turbulent > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp58)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp58)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 591;
}

/*
equation index: 590
type: ALGORITHM

  assert(retRes1.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void tmp_two_returns_res_eqFunction_590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,590};
  modelica_boolean tmp60;
  static const MMC_DEFSTRINGLIT(tmp61,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp62 = 0;
  {
    tmp60 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* retRes1.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp60)
    {
      {
        const char* assert_cond = "(retRes1.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp61)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp61)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 590;
}

/*
equation index: 589
type: ALGORITHM

  assert(retRes2.m_flow_turbulent > 0.0, "m_flow_turbulent must be bigger than zero.");
*/
void tmp_two_returns_res_eqFunction_589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,589};
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,42,"m_flow_turbulent must be bigger than zero.");
  static int tmp65 = 0;
  {
    tmp63 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* retRes2.m_flow_turbulent PARAM */),0.0);
    if(!tmp63)
    {
      {
        const char* assert_cond = "(retRes2.m_flow_turbulent > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp64)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp64)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 589;
}

/*
equation index: 588
type: ALGORITHM

  assert(retRes2.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void tmp_two_returns_res_eqFunction_588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,588};
  modelica_boolean tmp66;
  static const MMC_DEFSTRINGLIT(tmp67,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp68 = 0;
  {
    tmp66 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* retRes2.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp66)
    {
      {
        const char* assert_cond = "(retRes2.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp67)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp67)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 588;
}

/*
equation index: 587
type: ALGORITHM

  assert(noEvent(weaDat.pAtmSel.p > 3100.0) and noEvent(weaDat.pAtmSel.p < 1.2e5), "In TmpTwoReturnsRes.weaDat.chePre: Weather data atmospheric pressure out of bounds.
   PIn = " + String(weaDat.pAtmSel.p, 6, 0, true));
*/
void tmp_two_returns_res_eqFunction_587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,587};
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  static const MMC_DEFSTRINGLIT(tmp71,93,"In TmpTwoReturnsRes.weaDat.chePre: Weather data atmospheric pressure out of bounds.\n   PIn = ");
  modelica_string tmp72;
  modelica_metatype tmpMeta73;
  static int tmp74 = 0;
  {
    tmp69 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1366]] /* weaDat.pAtmSel.p PARAM */),3100.0);
    tmp70 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1366]] /* weaDat.pAtmSel.p PARAM */),1.2e5);
    if(!(tmp69 && tmp70))
    {
      tmp72 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1366]] /* weaDat.pAtmSel.p PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta73 = stringAppend(MMC_REFSTRINGLIT(tmp71),tmp72);
      {
        const char* assert_cond = "(noEvent(weaDat.pAtmSel.p > 3100.0) and noEvent(weaDat.pAtmSel.p < 1.2e5))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckPressure.mo",17,3,18,88,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta73));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckPressure.mo",17,3,18,88,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta73));
        }
      }
    }
  }
  threadData->lastEquationSolved = 587;
}

/*
equation index: 586
type: ALGORITHM

  assert(abs(1.0 - (roo.irRadExc.F[6,1] + roo.irRadExc.F[6,2] + roo.irRadExc.F[6,3] + roo.irRadExc.F[6,4] + roo.irRadExc.F[6,5] + roo.irRadExc.F[6,6])) < 1e-10, "Program error: Sum 1 of view factors is " + String(roo.irRadExc.F[6,1] + roo.irRadExc.F[6,2] + roo.irRadExc.F[6,3] + roo.irRadExc.F[6,4] + roo.irRadExc.F[6,5] + roo.irRadExc.F[6,6], 6, 0, true));
*/
void tmp_two_returns_res_eqFunction_586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,586};
  modelica_boolean tmp75;
  static const MMC_DEFSTRINGLIT(tmp76,40,"Program error: Sum 1 of view factors is ");
  modelica_string tmp77;
  modelica_metatype tmpMeta78;
  static int tmp79 = 0;
  {
    tmp75 = Less(fabs(1.0 - ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* roo.irRadExc.F[6,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* roo.irRadExc.F[6,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[573]] /* roo.irRadExc.F[6,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* roo.irRadExc.F[6,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* roo.irRadExc.F[6,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* roo.irRadExc.F[6,6] PARAM */))),1e-10);
    if(!tmp75)
    {
      tmp77 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* roo.irRadExc.F[6,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* roo.irRadExc.F[6,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[573]] /* roo.irRadExc.F[6,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* roo.irRadExc.F[6,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* roo.irRadExc.F[6,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* roo.irRadExc.F[6,6] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta78 = stringAppend(MMC_REFSTRINGLIT(tmp76),tmp77);
      {
        const char* assert_cond = "(abs(1.0 - (roo.irRadExc.F[6,1] + roo.irRadExc.F[6,2] + roo.irRadExc.F[6,3] + roo.irRadExc.F[6,4] + roo.irRadExc.F[6,5] + roo.irRadExc.F[6,6])) < 1e-10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta78));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta78));
        }
      }
    }
  }
  threadData->lastEquationSolved = 586;
}

/*
equation index: 585
type: ALGORITHM

  assert(abs(1.0 - (roo.irRadExc.F[5,1] + roo.irRadExc.F[5,2] + roo.irRadExc.F[5,3] + roo.irRadExc.F[5,4] + roo.irRadExc.F[5,5] + roo.irRadExc.F[5,6])) < 1e-10, "Program error: Sum 1 of view factors is " + String(roo.irRadExc.F[5,1] + roo.irRadExc.F[5,2] + roo.irRadExc.F[5,3] + roo.irRadExc.F[5,4] + roo.irRadExc.F[5,5] + roo.irRadExc.F[5,6], 6, 0, true));
*/
void tmp_two_returns_res_eqFunction_585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,585};
  modelica_boolean tmp80;
  static const MMC_DEFSTRINGLIT(tmp81,40,"Program error: Sum 1 of view factors is ");
  modelica_string tmp82;
  modelica_metatype tmpMeta83;
  static int tmp84 = 0;
  {
    tmp80 = Less(fabs(1.0 - ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* roo.irRadExc.F[5,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[566]] /* roo.irRadExc.F[5,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* roo.irRadExc.F[5,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* roo.irRadExc.F[5,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[569]] /* roo.irRadExc.F[5,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[570]] /* roo.irRadExc.F[5,6] PARAM */))),1e-10);
    if(!tmp80)
    {
      tmp82 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* roo.irRadExc.F[5,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[566]] /* roo.irRadExc.F[5,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* roo.irRadExc.F[5,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* roo.irRadExc.F[5,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[569]] /* roo.irRadExc.F[5,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[570]] /* roo.irRadExc.F[5,6] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta83 = stringAppend(MMC_REFSTRINGLIT(tmp81),tmp82);
      {
        const char* assert_cond = "(abs(1.0 - (roo.irRadExc.F[5,1] + roo.irRadExc.F[5,2] + roo.irRadExc.F[5,3] + roo.irRadExc.F[5,4] + roo.irRadExc.F[5,5] + roo.irRadExc.F[5,6])) < 1e-10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta83));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta83));
        }
      }
    }
  }
  threadData->lastEquationSolved = 585;
}

/*
equation index: 584
type: ALGORITHM

  assert(abs(1.0 - (roo.irRadExc.F[4,1] + roo.irRadExc.F[4,2] + roo.irRadExc.F[4,3] + roo.irRadExc.F[4,4] + roo.irRadExc.F[4,5] + roo.irRadExc.F[4,6])) < 1e-10, "Program error: Sum 1 of view factors is " + String(roo.irRadExc.F[4,1] + roo.irRadExc.F[4,2] + roo.irRadExc.F[4,3] + roo.irRadExc.F[4,4] + roo.irRadExc.F[4,5] + roo.irRadExc.F[4,6], 6, 0, true));
*/
void tmp_two_returns_res_eqFunction_584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,584};
  modelica_boolean tmp85;
  static const MMC_DEFSTRINGLIT(tmp86,40,"Program error: Sum 1 of view factors is ");
  modelica_string tmp87;
  modelica_metatype tmpMeta88;
  static int tmp89 = 0;
  {
    tmp85 = Less(fabs(1.0 - ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* roo.irRadExc.F[4,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* roo.irRadExc.F[4,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* roo.irRadExc.F[4,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* roo.irRadExc.F[4,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[563]] /* roo.irRadExc.F[4,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[564]] /* roo.irRadExc.F[4,6] PARAM */))),1e-10);
    if(!tmp85)
    {
      tmp87 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* roo.irRadExc.F[4,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* roo.irRadExc.F[4,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* roo.irRadExc.F[4,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* roo.irRadExc.F[4,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[563]] /* roo.irRadExc.F[4,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[564]] /* roo.irRadExc.F[4,6] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta88 = stringAppend(MMC_REFSTRINGLIT(tmp86),tmp87);
      {
        const char* assert_cond = "(abs(1.0 - (roo.irRadExc.F[4,1] + roo.irRadExc.F[4,2] + roo.irRadExc.F[4,3] + roo.irRadExc.F[4,4] + roo.irRadExc.F[4,5] + roo.irRadExc.F[4,6])) < 1e-10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta88));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta88));
        }
      }
    }
  }
  threadData->lastEquationSolved = 584;
}

/*
equation index: 583
type: ALGORITHM

  assert(abs(1.0 - (roo.irRadExc.F[3,1] + roo.irRadExc.F[3,2] + roo.irRadExc.F[3,3] + roo.irRadExc.F[3,4] + roo.irRadExc.F[3,5] + roo.irRadExc.F[3,6])) < 1e-10, "Program error: Sum 1 of view factors is " + String(roo.irRadExc.F[3,1] + roo.irRadExc.F[3,2] + roo.irRadExc.F[3,3] + roo.irRadExc.F[3,4] + roo.irRadExc.F[3,5] + roo.irRadExc.F[3,6], 6, 0, true));
*/
void tmp_two_returns_res_eqFunction_583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,583};
  modelica_boolean tmp90;
  static const MMC_DEFSTRINGLIT(tmp91,40,"Program error: Sum 1 of view factors is ");
  modelica_string tmp92;
  modelica_metatype tmpMeta93;
  static int tmp94 = 0;
  {
    tmp90 = Less(fabs(1.0 - ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[553]] /* roo.irRadExc.F[3,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[554]] /* roo.irRadExc.F[3,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* roo.irRadExc.F[3,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[556]] /* roo.irRadExc.F[3,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[557]] /* roo.irRadExc.F[3,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* roo.irRadExc.F[3,6] PARAM */))),1e-10);
    if(!tmp90)
    {
      tmp92 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[553]] /* roo.irRadExc.F[3,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[554]] /* roo.irRadExc.F[3,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* roo.irRadExc.F[3,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[556]] /* roo.irRadExc.F[3,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[557]] /* roo.irRadExc.F[3,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* roo.irRadExc.F[3,6] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta93 = stringAppend(MMC_REFSTRINGLIT(tmp91),tmp92);
      {
        const char* assert_cond = "(abs(1.0 - (roo.irRadExc.F[3,1] + roo.irRadExc.F[3,2] + roo.irRadExc.F[3,3] + roo.irRadExc.F[3,4] + roo.irRadExc.F[3,5] + roo.irRadExc.F[3,6])) < 1e-10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta93));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta93));
        }
      }
    }
  }
  threadData->lastEquationSolved = 583;
}

/*
equation index: 582
type: ALGORITHM

  assert(abs(1.0 - (roo.irRadExc.F[2,1] + roo.irRadExc.F[2,2] + roo.irRadExc.F[2,3] + roo.irRadExc.F[2,4] + roo.irRadExc.F[2,5] + roo.irRadExc.F[2,6])) < 1e-10, "Program error: Sum 1 of view factors is " + String(roo.irRadExc.F[2,1] + roo.irRadExc.F[2,2] + roo.irRadExc.F[2,3] + roo.irRadExc.F[2,4] + roo.irRadExc.F[2,5] + roo.irRadExc.F[2,6], 6, 0, true));
*/
void tmp_two_returns_res_eqFunction_582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,582};
  modelica_boolean tmp95;
  static const MMC_DEFSTRINGLIT(tmp96,40,"Program error: Sum 1 of view factors is ");
  modelica_string tmp97;
  modelica_metatype tmpMeta98;
  static int tmp99 = 0;
  {
    tmp95 = Less(fabs(1.0 - ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* roo.irRadExc.F[2,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* roo.irRadExc.F[2,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* roo.irRadExc.F[2,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* roo.irRadExc.F[2,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* roo.irRadExc.F[2,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[552]] /* roo.irRadExc.F[2,6] PARAM */))),1e-10);
    if(!tmp95)
    {
      tmp97 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* roo.irRadExc.F[2,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* roo.irRadExc.F[2,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* roo.irRadExc.F[2,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* roo.irRadExc.F[2,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* roo.irRadExc.F[2,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[552]] /* roo.irRadExc.F[2,6] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta98 = stringAppend(MMC_REFSTRINGLIT(tmp96),tmp97);
      {
        const char* assert_cond = "(abs(1.0 - (roo.irRadExc.F[2,1] + roo.irRadExc.F[2,2] + roo.irRadExc.F[2,3] + roo.irRadExc.F[2,4] + roo.irRadExc.F[2,5] + roo.irRadExc.F[2,6])) < 1e-10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta98));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta98));
        }
      }
    }
  }
  threadData->lastEquationSolved = 582;
}

/*
equation index: 581
type: ALGORITHM

  assert(abs(1.0 - (roo.irRadExc.F[1,1] + roo.irRadExc.F[1,2] + roo.irRadExc.F[1,3] + roo.irRadExc.F[1,4] + roo.irRadExc.F[1,5] + roo.irRadExc.F[1,6])) < 1e-10, "Program error: Sum 1 of view factors is " + String(roo.irRadExc.F[1,1] + roo.irRadExc.F[1,2] + roo.irRadExc.F[1,3] + roo.irRadExc.F[1,4] + roo.irRadExc.F[1,5] + roo.irRadExc.F[1,6], 6, 0, true));
*/
void tmp_two_returns_res_eqFunction_581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,581};
  modelica_boolean tmp100;
  static const MMC_DEFSTRINGLIT(tmp101,40,"Program error: Sum 1 of view factors is ");
  modelica_string tmp102;
  modelica_metatype tmpMeta103;
  static int tmp104 = 0;
  {
    tmp100 = Less(fabs(1.0 - ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* roo.irRadExc.F[1,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* roo.irRadExc.F[1,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* roo.irRadExc.F[1,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* roo.irRadExc.F[1,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[545]] /* roo.irRadExc.F[1,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[546]] /* roo.irRadExc.F[1,6] PARAM */))),1e-10);
    if(!tmp100)
    {
      tmp102 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* roo.irRadExc.F[1,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* roo.irRadExc.F[1,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* roo.irRadExc.F[1,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* roo.irRadExc.F[1,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[545]] /* roo.irRadExc.F[1,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[546]] /* roo.irRadExc.F[1,6] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta103 = stringAppend(MMC_REFSTRINGLIT(tmp101),tmp102);
      {
        const char* assert_cond = "(abs(1.0 - (roo.irRadExc.F[1,1] + roo.irRadExc.F[1,2] + roo.irRadExc.F[1,3] + roo.irRadExc.F[1,4] + roo.irRadExc.F[1,5] + roo.irRadExc.F[1,6])) < 1e-10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta103));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta103));
        }
      }
    }
  }
  threadData->lastEquationSolved = 581;
}

/*
equation index: 580
type: ALGORITHM

  assert(weaDat.conTim.canRepeatWeatherFile or noEvent(time >= weaDat.conTim.weaDatStaTim), "In TmpTwoReturnsRes.weaDat.conTim: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " is less than the start time " + String(weaDat.conTim.weaDatStaTim, 6, 0, true) + " of the weather data file.");
*/
void tmp_two_returns_res_eqFunction_580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,580};
  modelica_boolean tmp105;
  static const MMC_DEFSTRINGLIT(tmp106,130,"In TmpTwoReturnsRes.weaDat.conTim: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp107;
  modelica_metatype tmpMeta108;
  static const MMC_DEFSTRINGLIT(tmp109,29," is less than the start time ");
  modelica_metatype tmpMeta110;
  modelica_string tmp111;
  modelica_metatype tmpMeta112;
  static const MMC_DEFSTRINGLIT(tmp113,26," of the weather data file.");
  modelica_metatype tmpMeta114;
  static int tmp115 = 0;
  {
    tmp105 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1346]] /* weaDat.conTim.weaDatStaTim PARAM */));
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[296]] /* weaDat.conTim.canRepeatWeatherFile PARAM */) || tmp105))
    {
      tmp107 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta108 = stringAppend(MMC_REFSTRINGLIT(tmp106),tmp107);
      tmpMeta110 = stringAppend(tmpMeta108,MMC_REFSTRINGLIT(tmp109));
      tmp111 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1346]] /* weaDat.conTim.weaDatStaTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta112 = stringAppend(tmpMeta110,tmp111);
      tmpMeta114 = stringAppend(tmpMeta112,MMC_REFSTRINGLIT(tmp113));
      {
        const char* assert_cond = "(weaDat.conTim.canRepeatWeatherFile or noEvent(time >= weaDat.conTim.weaDatStaTim))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta114));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta114));
        }
      }
    }
  }
  threadData->lastEquationSolved = 580;
}

/*
equation index: 579
type: ALGORITHM

  assert(weaDat.conTim.canRepeatWeatherFile or noEvent(time - weaDat.conTim.weaDatEndTim < 1800.0), "In TmpTwoReturnsRes.weaDat.conTim: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " exceeds the end time " + String(weaDat.conTim.weaDatEndTim, 6, 0, true) + " of the weather data file.");
*/
void tmp_two_returns_res_eqFunction_579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,579};
  modelica_boolean tmp116;
  static const MMC_DEFSTRINGLIT(tmp117,130,"In TmpTwoReturnsRes.weaDat.conTim: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp118;
  modelica_metatype tmpMeta119;
  static const MMC_DEFSTRINGLIT(tmp120,22," exceeds the end time ");
  modelica_metatype tmpMeta121;
  modelica_string tmp122;
  modelica_metatype tmpMeta123;
  static const MMC_DEFSTRINGLIT(tmp124,26," of the weather data file.");
  modelica_metatype tmpMeta125;
  static int tmp126 = 0;
  {
    tmp116 = Less(data->localData[0]->timeValue - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1345]] /* weaDat.conTim.weaDatEndTim PARAM */),1800.0);
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[296]] /* weaDat.conTim.canRepeatWeatherFile PARAM */) || tmp116))
    {
      tmp118 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta119 = stringAppend(MMC_REFSTRINGLIT(tmp117),tmp118);
      tmpMeta121 = stringAppend(tmpMeta119,MMC_REFSTRINGLIT(tmp120));
      tmp122 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1345]] /* weaDat.conTim.weaDatEndTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta123 = stringAppend(tmpMeta121,tmp122);
      tmpMeta125 = stringAppend(tmpMeta123,MMC_REFSTRINGLIT(tmp124));
      {
        const char* assert_cond = "(weaDat.conTim.canRepeatWeatherFile or noEvent(time - weaDat.conTim.weaDatEndTim < 1800.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta125));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta125));
        }
      }
    }
  }
  threadData->lastEquationSolved = 579;
}

/*
equation index: 578
type: ALGORITHM

  assert(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time >= weaDat.conTimMin.weaDatStaTim), "In TmpTwoReturnsRes.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " is less than the start time " + String(weaDat.conTimMin.weaDatStaTim, 6, 0, true) + " of the weather data file.");
*/
void tmp_two_returns_res_eqFunction_578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,578};
  modelica_boolean tmp127;
  static const MMC_DEFSTRINGLIT(tmp128,133,"In TmpTwoReturnsRes.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp129;
  modelica_metatype tmpMeta130;
  static const MMC_DEFSTRINGLIT(tmp131,29," is less than the start time ");
  modelica_metatype tmpMeta132;
  modelica_string tmp133;
  modelica_metatype tmpMeta134;
  static const MMC_DEFSTRINGLIT(tmp135,26," of the weather data file.");
  modelica_metatype tmpMeta136;
  static int tmp137 = 0;
  {
    tmp127 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1349]] /* weaDat.conTimMin.weaDatStaTim PARAM */));
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[297]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) || tmp127))
    {
      tmp129 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta130 = stringAppend(MMC_REFSTRINGLIT(tmp128),tmp129);
      tmpMeta132 = stringAppend(tmpMeta130,MMC_REFSTRINGLIT(tmp131));
      tmp133 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1349]] /* weaDat.conTimMin.weaDatStaTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta134 = stringAppend(tmpMeta132,tmp133);
      tmpMeta136 = stringAppend(tmpMeta134,MMC_REFSTRINGLIT(tmp135));
      {
        const char* assert_cond = "(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time >= weaDat.conTimMin.weaDatStaTim))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta136));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta136));
        }
      }
    }
  }
  threadData->lastEquationSolved = 578;
}

/*
equation index: 577
type: ALGORITHM

  assert(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time - weaDat.conTimMin.weaDatEndTim < 1800.0), "In TmpTwoReturnsRes.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " exceeds the end time " + String(weaDat.conTimMin.weaDatEndTim, 6, 0, true) + " of the weather data file.");
*/
void tmp_two_returns_res_eqFunction_577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,577};
  modelica_boolean tmp138;
  static const MMC_DEFSTRINGLIT(tmp139,133,"In TmpTwoReturnsRes.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp140;
  modelica_metatype tmpMeta141;
  static const MMC_DEFSTRINGLIT(tmp142,22," exceeds the end time ");
  modelica_metatype tmpMeta143;
  modelica_string tmp144;
  modelica_metatype tmpMeta145;
  static const MMC_DEFSTRINGLIT(tmp146,26," of the weather data file.");
  modelica_metatype tmpMeta147;
  static int tmp148 = 0;
  {
    tmp138 = Less(data->localData[0]->timeValue - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1348]] /* weaDat.conTimMin.weaDatEndTim PARAM */),1800.0);
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[297]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) || tmp138))
    {
      tmp140 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta141 = stringAppend(MMC_REFSTRINGLIT(tmp139),tmp140);
      tmpMeta143 = stringAppend(tmpMeta141,MMC_REFSTRINGLIT(tmp142));
      tmp144 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1348]] /* weaDat.conTimMin.weaDatEndTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta145 = stringAppend(tmpMeta143,tmp144);
      tmpMeta147 = stringAppend(tmpMeta145,MMC_REFSTRINGLIT(tmp146));
      {
        const char* assert_cond = "(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time - weaDat.conTimMin.weaDatEndTim < 1800.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta147));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta147));
        }
      }
    }
  }
  threadData->lastEquationSolved = 577;
}

/*
equation index: 576
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("Air", {"water", "air"}, false, true, sup1.X_in_internal, "Boundary_pT");
*/
void tmp_two_returns_res_eqFunction_576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,576};
  static const MMC_DEFSTRINGLIT(tmp149,3,"Air");
  string_array tmp150;
  static const MMC_DEFSTRINGLIT(tmp151,5,"water");
  static const MMC_DEFSTRINGLIT(tmp152,3,"air");
  real_array tmp153;
  static const MMC_DEFSTRINGLIT(tmp154,11,"Boundary_pT");
  array_alloc_scalar_string_array(&tmp150, 2, (modelica_string)MMC_REFSTRINGLIT(tmp151), (modelica_string)MMC_REFSTRINGLIT(tmp152));
  real_array_create(&tmp153, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* sup1.X_in_internal[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp149), tmp150, 0 /* false */, 1 /* true */, tmp153, MMC_REFSTRINGLIT(tmp154));
  threadData->lastEquationSolved = 576;
}

/*
equation index: 575
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("Air", {"water", "air"}, false, true, sup2.X_in_internal, "Boundary_pT");
*/
void tmp_two_returns_res_eqFunction_575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,575};
  static const MMC_DEFSTRINGLIT(tmp155,3,"Air");
  string_array tmp156;
  static const MMC_DEFSTRINGLIT(tmp157,5,"water");
  static const MMC_DEFSTRINGLIT(tmp158,3,"air");
  real_array tmp159;
  static const MMC_DEFSTRINGLIT(tmp160,11,"Boundary_pT");
  array_alloc_scalar_string_array(&tmp156, 2, (modelica_string)MMC_REFSTRINGLIT(tmp157), (modelica_string)MMC_REFSTRINGLIT(tmp158));
  real_array_create(&tmp159, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* sup2.X_in_internal[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp155), tmp156, 0 /* false */, 1 /* true */, tmp159, MMC_REFSTRINGLIT(tmp160));
  threadData->lastEquationSolved = 575;
}

/*
equation index: 574
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("Air", {"water", "air"}, false, true, ret.X_in_internal, "Boundary_pT");
*/
void tmp_two_returns_res_eqFunction_574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,574};
  static const MMC_DEFSTRINGLIT(tmp161,3,"Air");
  string_array tmp162;
  static const MMC_DEFSTRINGLIT(tmp163,5,"water");
  static const MMC_DEFSTRINGLIT(tmp164,3,"air");
  real_array tmp165;
  static const MMC_DEFSTRINGLIT(tmp166,11,"Boundary_pT");
  array_alloc_scalar_string_array(&tmp162, 2, (modelica_string)MMC_REFSTRINGLIT(tmp163), (modelica_string)MMC_REFSTRINGLIT(tmp164));
  real_array_create(&tmp165, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* ret.X_in_internal[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp161), tmp162, 0 /* false */, 1 /* true */, tmp165, MMC_REFSTRINGLIT(tmp166));
  threadData->lastEquationSolved = 574;
}

/*
equation index: 573
type: ALGORITHM

  assert(ret.p_in_internal > 5e4 and ret.p_in_internal < 1.5e5, "In TmpTwoReturnsRes.ret: The parameter value p=" + String(ret.p_in_internal, 6, 0, true) + " is not within a realistic range for air. This is likely an error.");
*/
void tmp_two_returns_res_eqFunction_573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,573};
  modelica_boolean tmp167;
  modelica_boolean tmp168;
  static const MMC_DEFSTRINGLIT(tmp169,47,"In TmpTwoReturnsRes.ret: The parameter value p=");
  modelica_string tmp170;
  modelica_metatype tmpMeta171;
  static const MMC_DEFSTRINGLIT(tmp172,66," is not within a realistic range for air. This is likely an error.");
  modelica_metatype tmpMeta173;
  static int tmp174 = 0;
  {
    tmp167 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* ret.p_in_internal variable */),5e4);
    tmp168 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* ret.p_in_internal variable */),1.5e5);
    if(!(tmp167 && tmp168))
    {
      tmp170 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* ret.p_in_internal variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta171 = stringAppend(MMC_REFSTRINGLIT(tmp169),tmp170);
      tmpMeta173 = stringAppend(tmpMeta171,MMC_REFSTRINGLIT(tmp172));
      {
        const char* assert_cond = "(ret.p_in_internal > 5e4 and ret.p_in_internal < 1.5e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/Boundary_pT.mo",50,7,51,127,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta173));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/Boundary_pT.mo",50,7,51,127,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta173));
        }
      }
    }
  }
  threadData->lastEquationSolved = 573;
}
OMC_DISABLE_OPT
void tmp_two_returns_res_functionInitialEquations_1(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[282])(DATA*, threadData_t*) = {
    tmp_two_returns_res_eqFunction_307,
    tmp_two_returns_res_eqFunction_308,
    tmp_two_returns_res_eqFunction_309,
    tmp_two_returns_res_eqFunction_310,
    tmp_two_returns_res_eqFunction_311,
    tmp_two_returns_res_eqFunction_312,
    tmp_two_returns_res_eqFunction_313,
    tmp_two_returns_res_eqFunction_314,
    tmp_two_returns_res_eqFunction_315,
    tmp_two_returns_res_eqFunction_316,
    tmp_two_returns_res_eqFunction_1333,
    tmp_two_returns_res_eqFunction_1334,
    tmp_two_returns_res_eqFunction_1320,
    tmp_two_returns_res_eqFunction_321,
    tmp_two_returns_res_eqFunction_1324,
    tmp_two_returns_res_eqFunction_1315,
    tmp_two_returns_res_eqFunction_325,
    tmp_two_returns_res_eqFunction_1323,
    tmp_two_returns_res_eqFunction_1318,
    tmp_two_returns_res_eqFunction_328,
    tmp_two_returns_res_eqFunction_329,
    tmp_two_returns_res_eqFunction_1237,
    tmp_two_returns_res_eqFunction_1325,
    tmp_two_returns_res_eqFunction_1238,
    tmp_two_returns_res_eqFunction_333,
    tmp_two_returns_res_eqFunction_334,
    tmp_two_returns_res_eqFunction_1276,
    tmp_two_returns_res_eqFunction_1319,
    tmp_two_returns_res_eqFunction_1277,
    tmp_two_returns_res_eqFunction_338,
    tmp_two_returns_res_eqFunction_339,
    tmp_two_returns_res_eqFunction_1233,
    tmp_two_returns_res_eqFunction_341,
    tmp_two_returns_res_eqFunction_342,
    tmp_two_returns_res_eqFunction_1231,
    tmp_two_returns_res_eqFunction_1326,
    tmp_two_returns_res_eqFunction_345,
    tmp_two_returns_res_eqFunction_346,
    tmp_two_returns_res_eqFunction_1239,
    tmp_two_returns_res_eqFunction_1240,
    tmp_two_returns_res_eqFunction_1241,
    tmp_two_returns_res_eqFunction_350,
    tmp_two_returns_res_eqFunction_351,
    tmp_two_returns_res_eqFunction_1278,
    tmp_two_returns_res_eqFunction_1279,
    tmp_two_returns_res_eqFunction_1280,
    tmp_two_returns_res_eqFunction_355,
    tmp_two_returns_res_eqFunction_356,
    tmp_two_returns_res_eqFunction_1234,
    tmp_two_returns_res_eqFunction_358,
    tmp_two_returns_res_eqFunction_359,
    tmp_two_returns_res_eqFunction_1275,
    tmp_two_returns_res_eqFunction_361,
    tmp_two_returns_res_eqFunction_362,
    tmp_two_returns_res_eqFunction_363,
    tmp_two_returns_res_eqFunction_364,
    tmp_two_returns_res_eqFunction_365,
    tmp_two_returns_res_eqFunction_366,
    tmp_two_returns_res_eqFunction_367,
    tmp_two_returns_res_eqFunction_368,
    tmp_two_returns_res_eqFunction_369,
    tmp_two_returns_res_eqFunction_370,
    tmp_two_returns_res_eqFunction_371,
    tmp_two_returns_res_eqFunction_372,
    tmp_two_returns_res_eqFunction_373,
    tmp_two_returns_res_eqFunction_374,
    tmp_two_returns_res_eqFunction_375,
    tmp_two_returns_res_eqFunction_376,
    tmp_two_returns_res_eqFunction_377,
    tmp_two_returns_res_eqFunction_378,
    tmp_two_returns_res_eqFunction_379,
    tmp_two_returns_res_eqFunction_380,
    tmp_two_returns_res_eqFunction_381,
    tmp_two_returns_res_eqFunction_382,
    tmp_two_returns_res_eqFunction_383,
    tmp_two_returns_res_eqFunction_384,
    tmp_two_returns_res_eqFunction_385,
    tmp_two_returns_res_eqFunction_386,
    tmp_two_returns_res_eqFunction_1337,
    tmp_two_returns_res_eqFunction_1343,
    tmp_two_returns_res_eqFunction_389,
    tmp_two_returns_res_eqFunction_1419,
    tmp_two_returns_res_eqFunction_1420,
    tmp_two_returns_res_eqFunction_1422,
    tmp_two_returns_res_eqFunction_1424,
    tmp_two_returns_res_eqFunction_1345,
    tmp_two_returns_res_eqFunction_1346,
    tmp_two_returns_res_eqFunction_396,
    tmp_two_returns_res_eqFunction_1351,
    tmp_two_returns_res_eqFunction_1352,
    tmp_two_returns_res_eqFunction_399,
    tmp_two_returns_res_eqFunction_400,
    tmp_two_returns_res_eqFunction_1355,
    tmp_two_returns_res_eqFunction_402,
    tmp_two_returns_res_eqFunction_1357,
    tmp_two_returns_res_eqFunction_1423,
    tmp_two_returns_res_eqFunction_1425,
    tmp_two_returns_res_eqFunction_1421,
    tmp_two_returns_res_eqFunction_1416,
    tmp_two_returns_res_eqFunction_1417,
    tmp_two_returns_res_eqFunction_1415,
    tmp_two_returns_res_eqFunction_1414,
    tmp_two_returns_res_eqFunction_1413,
    tmp_two_returns_res_eqFunction_1412,
    tmp_two_returns_res_eqFunction_1411,
    tmp_two_returns_res_eqFunction_1410,
    tmp_two_returns_res_eqFunction_1409,
    tmp_two_returns_res_eqFunction_1408,
    tmp_two_returns_res_eqFunction_1407,
    tmp_two_returns_res_eqFunction_1405,
    tmp_two_returns_res_eqFunction_1406,
    tmp_two_returns_res_eqFunction_1404,
    tmp_two_returns_res_eqFunction_1397,
    tmp_two_returns_res_eqFunction_1398,
    tmp_two_returns_res_eqFunction_423,
    tmp_two_returns_res_eqFunction_1401,
    tmp_two_returns_res_eqFunction_1393,
    tmp_two_returns_res_eqFunction_1394,
    tmp_two_returns_res_eqFunction_427,
    tmp_two_returns_res_eqFunction_1391,
    tmp_two_returns_res_eqFunction_1392,
    tmp_two_returns_res_eqFunction_1387,
    tmp_two_returns_res_eqFunction_1388,
    tmp_two_returns_res_eqFunction_432,
    tmp_two_returns_res_eqFunction_1386,
    tmp_two_returns_res_eqFunction_1385,
    tmp_two_returns_res_eqFunction_1384,
    tmp_two_returns_res_eqFunction_1383,
    tmp_two_returns_res_eqFunction_1382,
    tmp_two_returns_res_eqFunction_1381,
    tmp_two_returns_res_eqFunction_1380,
    tmp_two_returns_res_eqFunction_1365,
    tmp_two_returns_res_eqFunction_1366,
    tmp_two_returns_res_eqFunction_442,
    tmp_two_returns_res_eqFunction_1361,
    tmp_two_returns_res_eqFunction_1362,
    tmp_two_returns_res_eqFunction_1358,
    tmp_two_returns_res_eqFunction_1359,
    tmp_two_returns_res_eqFunction_1363,
    tmp_two_returns_res_eqFunction_448,
    tmp_two_returns_res_eqFunction_1403,
    tmp_two_returns_res_eqFunction_450,
    tmp_two_returns_res_eqFunction_458,
    tmp_two_returns_res_eqFunction_459,
    tmp_two_returns_res_eqFunction_460,
    tmp_two_returns_res_eqFunction_461,
    tmp_two_returns_res_eqFunction_462,
    tmp_two_returns_res_eqFunction_463,
    tmp_two_returns_res_eqFunction_464,
    tmp_two_returns_res_eqFunction_465,
    tmp_two_returns_res_eqFunction_466,
    tmp_two_returns_res_eqFunction_1329,
    tmp_two_returns_res_eqFunction_1330,
    tmp_two_returns_res_eqFunction_469,
    tmp_two_returns_res_eqFunction_470,
    tmp_two_returns_res_eqFunction_1327,
    tmp_two_returns_res_eqFunction_1328,
    tmp_two_returns_res_eqFunction_473,
    tmp_two_returns_res_eqFunction_474,
    tmp_two_returns_res_eqFunction_1175,
    tmp_two_returns_res_eqFunction_1176,
    tmp_two_returns_res_eqFunction_477,
    tmp_two_returns_res_eqFunction_1172,
    tmp_two_returns_res_eqFunction_1182,
    tmp_two_returns_res_eqFunction_480,
    tmp_two_returns_res_eqFunction_481,
    tmp_two_returns_res_eqFunction_1173,
    tmp_two_returns_res_eqFunction_1174,
    tmp_two_returns_res_eqFunction_484,
    tmp_two_returns_res_eqFunction_1171,
    tmp_two_returns_res_eqFunction_1183,
    tmp_two_returns_res_eqFunction_487,
    tmp_two_returns_res_eqFunction_488,
    tmp_two_returns_res_eqFunction_1335,
    tmp_two_returns_res_eqFunction_1336,
    tmp_two_returns_res_eqFunction_491,
    tmp_two_returns_res_eqFunction_492,
    tmp_two_returns_res_eqFunction_1331,
    tmp_two_returns_res_eqFunction_1332,
    tmp_two_returns_res_eqFunction_495,
    tmp_two_returns_res_eqFunction_496,
    tmp_two_returns_res_eqFunction_497,
    tmp_two_returns_res_eqFunction_498,
    tmp_two_returns_res_eqFunction_499,
    tmp_two_returns_res_eqFunction_500,
    tmp_two_returns_res_eqFunction_501,
    tmp_two_returns_res_eqFunction_502,
    tmp_two_returns_res_eqFunction_503,
    tmp_two_returns_res_eqFunction_504,
    tmp_two_returns_res_eqFunction_505,
    tmp_two_returns_res_eqFunction_506,
    tmp_two_returns_res_eqFunction_507,
    tmp_two_returns_res_eqFunction_508,
    tmp_two_returns_res_eqFunction_509,
    tmp_two_returns_res_eqFunction_510,
    tmp_two_returns_res_eqFunction_511,
    tmp_two_returns_res_eqFunction_512,
    tmp_two_returns_res_eqFunction_513,
    tmp_two_returns_res_eqFunction_514,
    tmp_two_returns_res_eqFunction_515,
    tmp_two_returns_res_eqFunction_516,
    tmp_two_returns_res_eqFunction_517,
    tmp_two_returns_res_eqFunction_518,
    tmp_two_returns_res_eqFunction_519,
    tmp_two_returns_res_eqFunction_520,
    tmp_two_returns_res_eqFunction_521,
    tmp_two_returns_res_eqFunction_522,
    tmp_two_returns_res_eqFunction_523,
    tmp_two_returns_res_eqFunction_524,
    tmp_two_returns_res_eqFunction_525,
    tmp_two_returns_res_eqFunction_526,
    tmp_two_returns_res_eqFunction_527,
    tmp_two_returns_res_eqFunction_528,
    tmp_two_returns_res_eqFunction_529,
    tmp_two_returns_res_eqFunction_530,
    tmp_two_returns_res_eqFunction_531,
    tmp_two_returns_res_eqFunction_532,
    tmp_two_returns_res_eqFunction_533,
    tmp_two_returns_res_eqFunction_534,
    tmp_two_returns_res_eqFunction_535,
    tmp_two_returns_res_eqFunction_536,
    tmp_two_returns_res_eqFunction_537,
    tmp_two_returns_res_eqFunction_538,
    tmp_two_returns_res_eqFunction_539,
    tmp_two_returns_res_eqFunction_540,
    tmp_two_returns_res_eqFunction_541,
    tmp_two_returns_res_eqFunction_542,
    tmp_two_returns_res_eqFunction_543,
    tmp_two_returns_res_eqFunction_544,
    tmp_two_returns_res_eqFunction_1177,
    tmp_two_returns_res_eqFunction_1178,
    tmp_two_returns_res_eqFunction_547,
    tmp_two_returns_res_eqFunction_1179,
    tmp_two_returns_res_eqFunction_549,
    tmp_two_returns_res_eqFunction_550,
    tmp_two_returns_res_eqFunction_551,
    tmp_two_returns_res_eqFunction_552,
    tmp_two_returns_res_eqFunction_553,
    tmp_two_returns_res_eqFunction_554,
    tmp_two_returns_res_eqFunction_555,
    tmp_two_returns_res_eqFunction_556,
    tmp_two_returns_res_eqFunction_557,
    tmp_two_returns_res_eqFunction_558,
    tmp_two_returns_res_eqFunction_559,
    tmp_two_returns_res_eqFunction_560,
    tmp_two_returns_res_eqFunction_561,
    tmp_two_returns_res_eqFunction_562,
    tmp_two_returns_res_eqFunction_563,
    tmp_two_returns_res_eqFunction_564,
    tmp_two_returns_res_eqFunction_565,
    tmp_two_returns_res_eqFunction_566,
    tmp_two_returns_res_eqFunction_567,
    tmp_two_returns_res_eqFunction_568,
    tmp_two_returns_res_eqFunction_569,
    tmp_two_returns_res_eqFunction_570,
    tmp_two_returns_res_eqFunction_571,
    tmp_two_returns_res_eqFunction_572,
    tmp_two_returns_res_eqFunction_597,
    tmp_two_returns_res_eqFunction_596,
    tmp_two_returns_res_eqFunction_595,
    tmp_two_returns_res_eqFunction_594,
    tmp_two_returns_res_eqFunction_593,
    tmp_two_returns_res_eqFunction_592,
    tmp_two_returns_res_eqFunction_591,
    tmp_two_returns_res_eqFunction_590,
    tmp_two_returns_res_eqFunction_589,
    tmp_two_returns_res_eqFunction_588,
    tmp_two_returns_res_eqFunction_587,
    tmp_two_returns_res_eqFunction_586,
    tmp_two_returns_res_eqFunction_585,
    tmp_two_returns_res_eqFunction_584,
    tmp_two_returns_res_eqFunction_583,
    tmp_two_returns_res_eqFunction_582,
    tmp_two_returns_res_eqFunction_581,
    tmp_two_returns_res_eqFunction_580,
    tmp_two_returns_res_eqFunction_579,
    tmp_two_returns_res_eqFunction_578,
    tmp_two_returns_res_eqFunction_577,
    tmp_two_returns_res_eqFunction_576,
    tmp_two_returns_res_eqFunction_575,
    tmp_two_returns_res_eqFunction_574,
    tmp_two_returns_res_eqFunction_573
  };
  
  for (int id = 0; id < 282; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif