#include "tmp_two_returns_res_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 2293
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.absIR_b = roo.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2293};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[918]] /* roo.irRadGai.datConExtWin[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[425]] /* roo.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2293;
}

/*
equation index: 2294
type: SIMPLE_ASSIGN
roo.irRadGai.epsConExtWinOpa[1] = roo.irRadGai.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2294};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1009]] /* roo.irRadGai.epsConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[918]] /* roo.irRadGai.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2294;
}

/*
equation index: 2295
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConExtWinOpa[1] = roo.irRadGai.AConExtWinOpa[1] * roo.irRadGai.epsConExtWinOpa[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2295};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[821]] /* roo.irRadGai.AEpsConExtWinOpa[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[816]] /* roo.irRadGai.AConExtWinOpa[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1009]] /* roo.irRadGai.epsConExtWinOpa[1] PARAM */));
  threadData->lastEquationSolved = 2295;
}

/*
equation index: 2296
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].A = roo.datConExt[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2296};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[857]] /* roo.irRadGai.datConExt[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[364]] /* roo.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 2296;
}

/*
equation index: 2297
type: SIMPLE_ASSIGN
roo.irRadGai.AConExt[1] = roo.irRadGai.datConExt[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2297};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[813]] /* roo.irRadGai.AConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[857]] /* roo.irRadGai.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 2297;
}

/*
equation index: 2298
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.absIR_b = roo.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2298};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[863]] /* roo.irRadGai.datConExt[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* roo.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2298;
}

/*
equation index: 2299
type: SIMPLE_ASSIGN
roo.irRadGai.epsConExt[1] = roo.irRadGai.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2299};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1007]] /* roo.irRadGai.epsConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[863]] /* roo.irRadGai.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2299;
}

/*
equation index: 2300
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConExt[1] = roo.irRadGai.AConExt[1] * roo.irRadGai.epsConExt[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2300};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[819]] /* roo.irRadGai.AEpsConExt[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[813]] /* roo.irRadGai.AConExt[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1007]] /* roo.irRadGai.epsConExt[1] PARAM */));
  threadData->lastEquationSolved = 2300;
}

/*
equation index: 2302
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a = roo.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2302};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[907]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* roo.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 2302;
}

/*
equation index: 2303
type: SIMPLE_ASSIGN
roo.irRadGai.epsConExtWinSha[1] = roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2303};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1010]] /* roo.irRadGai.epsConExtWinSha[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[907]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 2303;
}

/*
equation index: 2304
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b = roo.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2304};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[900]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 2304;
}

/*
equation index: 2305
type: SIMPLE_ASSIGN
roo.irRadGai.epsConExtWinUns[1] = roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2305};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* roo.irRadGai.epsConExtWinUns[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[900]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 2305;
}

/*
equation index: 2306
type: SIMPLE_ASSIGN
roo.irRadGai.AConExtWinGla[1] = (1.0 - roo.irRadGai.datConExtWin[1].fFra) * roo.irRadGai.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2306};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[815]] /* roo.irRadGai.AConExtWinGla[1] PARAM */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[886]] /* roo.irRadGai.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* roo.irRadGai.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 2306;
}

/*
equation index: 2307
type: SIMPLE_ASSIGN
roo.irRadGai.instanceName = "TmpTwoReturnsRes.roo.irRadGai"
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2307};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[55]] /* roo.irRadGai.instanceName PARAM */) = _OMC_LIT87;
  threadData->lastEquationSolved = 2307;
}

/*
equation index: 2313
type: SIMPLE_ASSIGN
roo.irRadGai.dummyCon.R = roo.irRadGai.dummyCon.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2313};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[962]] /* roo.irRadGai.dummyCon.R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[968]] /* roo.irRadGai.dummyCon.material[1].R PARAM */);
  threadData->lastEquationSolved = 2313;
}

/*
equation index: 2319
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[6].boundaryCondition = roo.surBou[6].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2319};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[258]] /* roo.irRadGai.surBou[6].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[320]] /* roo.surBou[6].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2319;
}

/*
equation index: 2320
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[6].name = roo.surBou[6].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2320};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[61]] /* roo.irRadGai.surBou[6].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[83]] /* roo.surBou[6].name PARAM */);
  threadData->lastEquationSolved = 2320;
}

/*
equation index: 2322
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[6].absSol = roo.surBou[6].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2322};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1038]] /* roo.irRadGai.surBou[6].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1304]] /* roo.surBou[6].absSol PARAM */);
  threadData->lastEquationSolved = 2322;
}

/*
equation index: 2324
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[5].boundaryCondition = roo.surBou[5].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2324};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[257]] /* roo.irRadGai.surBou[5].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[319]] /* roo.surBou[5].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2324;
}

/*
equation index: 2325
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[5].name = roo.surBou[5].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2325};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[60]] /* roo.irRadGai.surBou[5].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[82]] /* roo.surBou[5].name PARAM */);
  threadData->lastEquationSolved = 2325;
}

/*
equation index: 2327
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[5].absSol = roo.surBou[5].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2327};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1037]] /* roo.irRadGai.surBou[5].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1303]] /* roo.surBou[5].absSol PARAM */);
  threadData->lastEquationSolved = 2327;
}

/*
equation index: 2329
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[4].boundaryCondition = roo.surBou[4].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2329};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[256]] /* roo.irRadGai.surBou[4].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[318]] /* roo.surBou[4].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2329;
}

/*
equation index: 2330
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[4].name = roo.surBou[4].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2330};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[59]] /* roo.irRadGai.surBou[4].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[81]] /* roo.surBou[4].name PARAM */);
  threadData->lastEquationSolved = 2330;
}

/*
equation index: 2332
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[4].absSol = roo.surBou[4].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2332};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1036]] /* roo.irRadGai.surBou[4].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1302]] /* roo.surBou[4].absSol PARAM */);
  threadData->lastEquationSolved = 2332;
}

/*
equation index: 2334
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[3].boundaryCondition = roo.surBou[3].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2334};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[255]] /* roo.irRadGai.surBou[3].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[317]] /* roo.surBou[3].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2334;
}

/*
equation index: 2335
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[3].name = roo.surBou[3].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2335};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[58]] /* roo.irRadGai.surBou[3].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[80]] /* roo.surBou[3].name PARAM */);
  threadData->lastEquationSolved = 2335;
}

/*
equation index: 2337
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[3].absSol = roo.surBou[3].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2337};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1035]] /* roo.irRadGai.surBou[3].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* roo.surBou[3].absSol PARAM */);
  threadData->lastEquationSolved = 2337;
}

/*
equation index: 2339
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[2].boundaryCondition = roo.surBou[2].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2339};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[254]] /* roo.irRadGai.surBou[2].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[316]] /* roo.surBou[2].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2339;
}

/*
equation index: 2340
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[2].name = roo.surBou[2].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2340};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[57]] /* roo.irRadGai.surBou[2].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[79]] /* roo.surBou[2].name PARAM */);
  threadData->lastEquationSolved = 2340;
}

/*
equation index: 2342
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[2].absSol = roo.surBou[2].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2342};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1034]] /* roo.irRadGai.surBou[2].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* roo.surBou[2].absSol PARAM */);
  threadData->lastEquationSolved = 2342;
}

/*
equation index: 2344
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[1].boundaryCondition = roo.surBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2344};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[253]] /* roo.irRadGai.surBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[315]] /* roo.surBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2344;
}

/*
equation index: 2345
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[1].name = roo.surBou[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2345};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[56]] /* roo.irRadGai.surBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[78]] /* roo.surBou[1].name PARAM */);
  threadData->lastEquationSolved = 2345;
}

/*
equation index: 2347
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[1].absSol = roo.surBou[1].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2347};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1033]] /* roo.irRadGai.surBou[1].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1299]] /* roo.surBou[1].absSol PARAM */);
  threadData->lastEquationSolved = 2347;
}

/*
equation index: 2349
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].boundaryCondition = roo.datConBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2349};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[219]] /* roo.irRadGai.datConBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[132]] /* roo.datConBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2349;
}

/*
equation index: 2352
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].T_b_start = roo.datConBou[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2352};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[838]] /* roo.irRadGai.datConBou[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* roo.datConBou[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2352;
}

/*
equation index: 2353
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].T_a_start = roo.datConBou[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2353};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[837]] /* roo.irRadGai.datConBou[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* roo.datConBou[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2353;
}

/*
equation index: 2357
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].azi = roo.datConBou[1].azi
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2357};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[839]] /* roo.irRadGai.datConBou[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* roo.datConBou[1].azi PARAM */);
  threadData->lastEquationSolved = 2357;
}

/*
equation index: 2359
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.roughness_a = roo.datConBou[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2359};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[224]] /* roo.irRadGai.datConBou[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[137]] /* roo.datConBou[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2359;
}

/*
equation index: 2360
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.absSol_b = roo.datConBou[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2360};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[844]] /* roo.irRadGai.datConBou[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* roo.datConBou[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2360;
}

/*
equation index: 2361
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.absSol_a = roo.datConBou[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2361};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[843]] /* roo.irRadGai.datConBou[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[350]] /* roo.datConBou[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2361;
}

/*
equation index: 2362
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.absIR_a = roo.datConBou[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2362};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[841]] /* roo.irRadGai.datConBou[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* roo.datConBou[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2362;
}

/*
equation index: 2365
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].LHea = roo.datConBou[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2365};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[845]] /* roo.irRadGai.datConBou[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* roo.datConBou[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2365;
}

/*
equation index: 2368
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].nStaReal = roo.datConBou[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2368};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[852]] /* roo.irRadGai.datConBou[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* roo.datConBou[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2368;
}

/*
equation index: 2369
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].piMat = roo.datConBou[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2369};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[853]] /* roo.irRadGai.datConBou[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* roo.datConBou[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2369;
}

/*
equation index: 2370
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].piRef = roo.datConBou[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2370};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[854]] /* roo.irRadGai.datConBou[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[361]] /* roo.datConBou[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2370;
}

/*
equation index: 2373
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].nStaRef = roo.datConBou[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2373};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[221]] /* roo.irRadGai.datConBou[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[134]] /* roo.datConBou[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2373;
}

/*
equation index: 2374
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].R = roo.datConBou[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2374};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[846]] /* roo.irRadGai.datConBou[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* roo.datConBou[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2374;
}

/*
equation index: 2375
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].d = roo.datConBou[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2375};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[850]] /* roo.irRadGai.datConBou[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* roo.datConBou[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2375;
}

/*
equation index: 2376
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].c = roo.datConBou[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2376};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[849]] /* roo.irRadGai.datConBou[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* roo.datConBou[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2376;
}

/*
equation index: 2377
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].k = roo.datConBou[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2377};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[851]] /* roo.irRadGai.datConBou[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[358]] /* roo.datConBou[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2377;
}

/*
equation index: 2378
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].x = roo.datConBou[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2378};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[855]] /* roo.irRadGai.datConBou[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* roo.datConBou[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2378;
}

/*
equation index: 2380
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].name = roo.datConBou[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2380};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[51]] /* roo.irRadGai.datConBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[36]] /* roo.datConBou[1].name PARAM */);
  threadData->lastEquationSolved = 2380;
}

/*
equation index: 2381
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].boundaryCondition = roo.datConPar[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2381};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[237]] /* roo.irRadGai.datConPar[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[150]] /* roo.datConPar[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2381;
}

/*
equation index: 2384
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].T_b_start = roo.datConPar[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2384};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[943]] /* roo.irRadGai.datConPar[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[450]] /* roo.datConPar[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2384;
}

/*
equation index: 2385
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].T_a_start = roo.datConPar[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2385};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* roo.irRadGai.datConPar[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[449]] /* roo.datConPar[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2385;
}

/*
equation index: 2389
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].azi = roo.datConPar[1].azi
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2389};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[944]] /* roo.irRadGai.datConPar[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[451]] /* roo.datConPar[1].azi PARAM */);
  threadData->lastEquationSolved = 2389;
}

/*
equation index: 2391
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.roughness_a = roo.datConPar[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2391};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[242]] /* roo.irRadGai.datConPar[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[155]] /* roo.datConPar[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2391;
}

/*
equation index: 2392
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.absSol_b = roo.datConPar[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2392};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[949]] /* roo.irRadGai.datConPar[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[456]] /* roo.datConPar[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2392;
}

/*
equation index: 2393
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.absSol_a = roo.datConPar[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2393};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[948]] /* roo.irRadGai.datConPar[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[455]] /* roo.datConPar[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2393;
}

/*
equation index: 2396
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].LHea = roo.datConPar[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2396};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[950]] /* roo.irRadGai.datConPar[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[457]] /* roo.datConPar[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2396;
}

/*
equation index: 2399
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].nStaReal = roo.datConPar[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2399};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[957]] /* roo.irRadGai.datConPar[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[464]] /* roo.datConPar[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2399;
}

/*
equation index: 2400
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].piMat = roo.datConPar[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2400};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[958]] /* roo.irRadGai.datConPar[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[465]] /* roo.datConPar[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2400;
}

/*
equation index: 2401
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].piRef = roo.datConPar[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2401};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[959]] /* roo.irRadGai.datConPar[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[466]] /* roo.datConPar[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2401;
}

/*
equation index: 2404
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].nStaRef = roo.datConPar[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2404};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[239]] /* roo.irRadGai.datConPar[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[152]] /* roo.datConPar[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2404;
}

/*
equation index: 2405
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].R = roo.datConPar[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2405};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[951]] /* roo.irRadGai.datConPar[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[458]] /* roo.datConPar[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2405;
}

/*
equation index: 2406
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].d = roo.datConPar[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2406};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[955]] /* roo.irRadGai.datConPar[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[462]] /* roo.datConPar[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2406;
}

/*
equation index: 2407
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].c = roo.datConPar[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2407};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[954]] /* roo.irRadGai.datConPar[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[461]] /* roo.datConPar[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2407;
}

/*
equation index: 2408
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].k = roo.datConPar[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2408};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[956]] /* roo.irRadGai.datConPar[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[463]] /* roo.datConPar[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2408;
}

/*
equation index: 2409
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].x = roo.datConPar[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2409};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[960]] /* roo.irRadGai.datConPar[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[467]] /* roo.datConPar[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2409;
}

/*
equation index: 2411
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].name = roo.datConPar[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2411};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[54]] /* roo.irRadGai.datConPar[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[39]] /* roo.datConPar[1].name PARAM */);
  threadData->lastEquationSolved = 2411;
}

/*
equation index: 2415
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.absSolFra = roo.datConExtWin[1].glaSys.absSolFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2415};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[889]] /* roo.irRadGai.datConExtWin[1].glaSys.absSolFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[396]] /* roo.datConExtWin[1].glaSys.absSolFra PARAM */);
  threadData->lastEquationSolved = 2415;
}

/*
equation index: 2416
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.UFra = roo.datConExtWin[1].glaSys.UFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2416};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[887]] /* roo.irRadGai.datConExtWin[1].glaSys.UFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[394]] /* roo.datConExtWin[1].glaSys.UFra PARAM */);
  threadData->lastEquationSolved = 2416;
}

/*
equation index: 2417
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_b = roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2417};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[912]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 2417;
}

/*
equation index: 2418
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_a = roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2418};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[911]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 2418;
}

/*
equation index: 2419
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_b = roo.datConExtWin[1].glaSys.shade.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2419};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[908]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* roo.datConExtWin[1].glaSys.shade.absIR_b PARAM */);
  threadData->lastEquationSolved = 2419;
}

/*
equation index: 2420
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_b = roo.datConExtWin[1].glaSys.shade.rhoSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2420};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[910]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */);
  threadData->lastEquationSolved = 2420;
}

/*
equation index: 2421
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_a = roo.datConExtWin[1].glaSys.shade.rhoSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2421};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[909]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */);
  threadData->lastEquationSolved = 2421;
}

/*
equation index: 2422
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_b = roo.datConExtWin[1].glaSys.shade.tauSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2422};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[914]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* roo.datConExtWin[1].glaSys.shade.tauSol_b PARAM */);
  threadData->lastEquationSolved = 2422;
}

/*
equation index: 2423
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_a = roo.datConExtWin[1].glaSys.shade.tauSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2423};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[913]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* roo.datConExtWin[1].glaSys.shade.tauSol_a PARAM */);
  threadData->lastEquationSolved = 2423;
}

/*
equation index: 2424
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].P0 = roo.datConExtWin[1].glaSys.gas[1].P0
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2424};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[891]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].P0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* roo.datConExtWin[1].glaSys.gas[1].P0 PARAM */);
  threadData->lastEquationSolved = 2424;
}

/*
equation index: 2425
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].MM = roo.datConExtWin[1].glaSys.gas[1].MM
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2425};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[890]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].MM PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* roo.datConExtWin[1].glaSys.gas[1].MM PARAM */);
  threadData->lastEquationSolved = 2425;
}

/*
equation index: 2426
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_c = roo.datConExtWin[1].glaSys.gas[1].b_c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2426};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[895]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[402]] /* roo.datConExtWin[1].glaSys.gas[1].b_c PARAM */);
  threadData->lastEquationSolved = 2426;
}

/*
equation index: 2427
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_c = roo.datConExtWin[1].glaSys.gas[1].a_c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2427};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[892]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[399]] /* roo.datConExtWin[1].glaSys.gas[1].a_c PARAM */);
  threadData->lastEquationSolved = 2427;
}

/*
equation index: 2428
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_mu = roo.datConExtWin[1].glaSys.gas[1].b_mu
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2428};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[897]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* roo.datConExtWin[1].glaSys.gas[1].b_mu PARAM */);
  threadData->lastEquationSolved = 2428;
}

/*
equation index: 2429
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_mu = roo.datConExtWin[1].glaSys.gas[1].a_mu
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2429};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[894]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* roo.datConExtWin[1].glaSys.gas[1].a_mu PARAM */);
  threadData->lastEquationSolved = 2429;
}

/*
equation index: 2430
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_k = roo.datConExtWin[1].glaSys.gas[1].b_k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2430};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[896]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* roo.datConExtWin[1].glaSys.gas[1].b_k PARAM */);
  threadData->lastEquationSolved = 2430;
}

/*
equation index: 2431
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_k = roo.datConExtWin[1].glaSys.gas[1].a_k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2431};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[893]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[400]] /* roo.datConExtWin[1].glaSys.gas[1].a_k PARAM */);
  threadData->lastEquationSolved = 2431;
}

/*
equation index: 2432
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].x = roo.datConExtWin[1].glaSys.gas[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2432};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[898]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[405]] /* roo.datConExtWin[1].glaSys.gas[1].x PARAM */);
  threadData->lastEquationSolved = 2432;
}

/*
equation index: 2433
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_a = roo.datConExtWin[1].glaSys.glass[1].absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2433};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[899]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */);
  threadData->lastEquationSolved = 2433;
}

/*
equation index: 2434
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauIR = roo.datConExtWin[1].glaSys.glass[1].tauIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2434};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[904]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* roo.datConExtWin[1].glaSys.glass[1].tauIR PARAM */);
  threadData->lastEquationSolved = 2434;
}

/*
equation index: 2435
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2435};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[903]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */);
  threadData->lastEquationSolved = 2435;
}

/*
equation index: 2436
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2436};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[902]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */);
  threadData->lastEquationSolved = 2436;
}

/*
equation index: 2437
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauSol[1] = roo.datConExtWin[1].glaSys.glass[1].tauSol[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2437};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[905]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[412]] /* roo.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */);
  threadData->lastEquationSolved = 2437;
}

/*
equation index: 2438
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].k = roo.datConExtWin[1].glaSys.glass[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2438};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[901]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[408]] /* roo.datConExtWin[1].glaSys.glass[1].k PARAM */);
  threadData->lastEquationSolved = 2438;
}

/*
equation index: 2439
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].x = roo.datConExtWin[1].glaSys.glass[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2439};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[906]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* roo.datConExtWin[1].glaSys.glass[1].x PARAM */);
  threadData->lastEquationSolved = 2439;
}

/*
equation index: 2442
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].AGla = roo.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2442};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[880]] /* roo.irRadGai.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* roo.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 2442;
}

/*
equation index: 2443
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].AFra = roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2443};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[879]] /* roo.irRadGai.datConExtWin[1].AFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[386]] /* roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 2443;
}

/*
equation index: 2445
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].sidFin.gap = roo.datConExtWin[1].sidFin.gap
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2445};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[937]] /* roo.irRadGai.datConExtWin[1].sidFin.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[444]] /* roo.datConExtWin[1].sidFin.gap PARAM */);
  threadData->lastEquationSolved = 2445;
}

/*
equation index: 2447
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].sidFin.h = roo.datConExtWin[1].sidFin.h
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2447};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[938]] /* roo.irRadGai.datConExtWin[1].sidFin.h PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[445]] /* roo.datConExtWin[1].sidFin.h PARAM */);
  threadData->lastEquationSolved = 2447;
}

/*
equation index: 2449
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].ove.gap = roo.datConExtWin[1].ove.gap
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2449};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[933]] /* roo.irRadGai.datConExtWin[1].ove.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[440]] /* roo.datConExtWin[1].ove.gap PARAM */);
  threadData->lastEquationSolved = 2449;
}

/*
equation index: 2451
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].ove.wR = roo.datConExtWin[1].ove.wR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2451};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[935]] /* roo.irRadGai.datConExtWin[1].ove.wR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[442]] /* roo.datConExtWin[1].ove.wR PARAM */);
  threadData->lastEquationSolved = 2451;
}

/*
equation index: 2452
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].ove.wL = roo.datConExtWin[1].ove.wL
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2452};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[934]] /* roo.irRadGai.datConExtWin[1].ove.wL PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[441]] /* roo.datConExtWin[1].ove.wL PARAM */);
  threadData->lastEquationSolved = 2452;
}

/*
equation index: 2453
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].wWin = roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2453};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[940]] /* roo.irRadGai.datConExtWin[1].wWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[447]] /* roo.datConExtWin[1].wWin PARAM */);
  threadData->lastEquationSolved = 2453;
}

/*
equation index: 2454
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].hWin = roo.datConExtWin[1].hWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2454};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[915]] /* roo.irRadGai.datConExtWin[1].hWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* roo.datConExtWin[1].hWin PARAM */);
  threadData->lastEquationSolved = 2454;
}

/*
equation index: 2455
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].A = roo.datConExtWin[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2455};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[878]] /* roo.irRadGai.datConExtWin[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[385]] /* roo.datConExtWin[1].A PARAM */);
  threadData->lastEquationSolved = 2455;
}

/*
equation index: 2456
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].boundaryCondition = roo.datConExtWin[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2456};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[231]] /* roo.irRadGai.datConExtWin[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[144]] /* roo.datConExtWin[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2456;
}

/*
equation index: 2459
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].T_b_start = roo.datConExtWin[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2459};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[884]] /* roo.irRadGai.datConExtWin[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[391]] /* roo.datConExtWin[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2459;
}

/*
equation index: 2460
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].T_a_start = roo.datConExtWin[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2460};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[883]] /* roo.irRadGai.datConExtWin[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* roo.datConExtWin[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2460;
}

/*
equation index: 2464
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].azi = roo.datConExtWin[1].azi
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2464};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[885]] /* roo.irRadGai.datConExtWin[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[392]] /* roo.datConExtWin[1].azi PARAM */);
  threadData->lastEquationSolved = 2464;
}

/*
equation index: 2466
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.roughness_a = roo.datConExtWin[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2466};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[236]] /* roo.irRadGai.datConExtWin[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[149]] /* roo.datConExtWin[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2466;
}

/*
equation index: 2467
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.absSol_b = roo.datConExtWin[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2467};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[920]] /* roo.irRadGai.datConExtWin[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[427]] /* roo.datConExtWin[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2467;
}

/*
equation index: 2468
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.absSol_a = roo.datConExtWin[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2468};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[919]] /* roo.irRadGai.datConExtWin[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* roo.datConExtWin[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2468;
}

/*
equation index: 2469
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.absIR_a = roo.datConExtWin[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2469};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[917]] /* roo.irRadGai.datConExtWin[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[424]] /* roo.datConExtWin[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2469;
}

/*
equation index: 2472
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].LHea = roo.datConExtWin[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2472};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[921]] /* roo.irRadGai.datConExtWin[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[428]] /* roo.datConExtWin[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2472;
}

/*
equation index: 2475
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].nStaReal = roo.datConExtWin[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2475};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[928]] /* roo.irRadGai.datConExtWin[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[435]] /* roo.datConExtWin[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2475;
}

/*
equation index: 2476
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].piMat = roo.datConExtWin[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2476};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[929]] /* roo.irRadGai.datConExtWin[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[436]] /* roo.datConExtWin[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2476;
}

/*
equation index: 2477
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].piRef = roo.datConExtWin[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2477};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[930]] /* roo.irRadGai.datConExtWin[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[437]] /* roo.datConExtWin[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2477;
}

/*
equation index: 2480
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].nStaRef = roo.datConExtWin[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2480};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[233]] /* roo.irRadGai.datConExtWin[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[146]] /* roo.datConExtWin[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2480;
}

/*
equation index: 2481
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].R = roo.datConExtWin[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2481};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[922]] /* roo.irRadGai.datConExtWin[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[429]] /* roo.datConExtWin[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2481;
}

/*
equation index: 2482
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].d = roo.datConExtWin[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2482};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[926]] /* roo.irRadGai.datConExtWin[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[433]] /* roo.datConExtWin[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2482;
}

/*
equation index: 2483
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].c = roo.datConExtWin[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2483};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[925]] /* roo.irRadGai.datConExtWin[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[432]] /* roo.datConExtWin[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2483;
}

/*
equation index: 2484
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].k = roo.datConExtWin[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2484};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[927]] /* roo.irRadGai.datConExtWin[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[434]] /* roo.datConExtWin[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2484;
}

/*
equation index: 2485
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].x = roo.datConExtWin[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2485};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[931]] /* roo.irRadGai.datConExtWin[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[438]] /* roo.datConExtWin[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2485;
}

/*
equation index: 2487
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].name = roo.datConExtWin[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2487};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[53]] /* roo.irRadGai.datConExtWin[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[38]] /* roo.datConExtWin[1].name PARAM */);
  threadData->lastEquationSolved = 2487;
}

/*
equation index: 2488
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].boundaryCondition = roo.datConExt[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2488};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[225]] /* roo.irRadGai.datConExt[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[138]] /* roo.datConExt[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2488;
}

/*
equation index: 2491
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].T_b_start = roo.datConExt[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2491};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[859]] /* roo.irRadGai.datConExt[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[366]] /* roo.datConExt[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2491;
}

/*
equation index: 2492
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].T_a_start = roo.datConExt[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2492};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[858]] /* roo.irRadGai.datConExt[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* roo.datConExt[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2492;
}

/*
equation index: 2496
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].azi = roo.datConExt[1].azi
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2496};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[860]] /* roo.irRadGai.datConExt[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[367]] /* roo.datConExt[1].azi PARAM */);
  threadData->lastEquationSolved = 2496;
}

/*
equation index: 2498
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.roughness_a = roo.datConExt[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2498};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[230]] /* roo.irRadGai.datConExt[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[143]] /* roo.datConExt[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2498;
}

/*
equation index: 2499
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.absSol_b = roo.datConExt[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2499};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[865]] /* roo.irRadGai.datConExt[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* roo.datConExt[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2499;
}

/*
equation index: 2500
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.absSol_a = roo.datConExt[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2500};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[864]] /* roo.irRadGai.datConExt[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* roo.datConExt[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2500;
}

/*
equation index: 2501
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.absIR_a = roo.datConExt[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2501};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[862]] /* roo.irRadGai.datConExt[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* roo.datConExt[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2501;
}

/*
equation index: 2504
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].LHea = roo.datConExt[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2504};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[866]] /* roo.irRadGai.datConExt[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* roo.datConExt[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2504;
}

/*
equation index: 2507
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].nStaReal = roo.datConExt[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2507};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[873]] /* roo.irRadGai.datConExt[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[380]] /* roo.datConExt[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2507;
}

/*
equation index: 2508
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].piMat = roo.datConExt[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2508};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[874]] /* roo.irRadGai.datConExt[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* roo.datConExt[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2508;
}

/*
equation index: 2509
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].piRef = roo.datConExt[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2509};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[875]] /* roo.irRadGai.datConExt[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[382]] /* roo.datConExt[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2509;
}

/*
equation index: 2512
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].nStaRef = roo.datConExt[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2512};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[227]] /* roo.irRadGai.datConExt[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[140]] /* roo.datConExt[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2512;
}

/*
equation index: 2513
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].R = roo.datConExt[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2513};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[867]] /* roo.irRadGai.datConExt[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* roo.datConExt[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2513;
}

/*
equation index: 2514
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].d = roo.datConExt[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2514};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[871]] /* roo.irRadGai.datConExt[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* roo.datConExt[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2514;
}

/*
equation index: 2515
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].c = roo.datConExt[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2515};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[870]] /* roo.irRadGai.datConExt[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* roo.datConExt[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2515;
}

/*
equation index: 2516
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].k = roo.datConExt[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2516};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[872]] /* roo.irRadGai.datConExt[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* roo.datConExt[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2516;
}

/*
equation index: 2517
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].x = roo.datConExt[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2517};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[876]] /* roo.irRadGai.datConExt[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* roo.datConExt[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2517;
}

/*
equation index: 2519
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].name = roo.datConExt[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2519};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[52]] /* roo.irRadGai.datConExt[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[37]] /* roo.datConExt[1].name PARAM */);
  threadData->lastEquationSolved = 2519;
}

/*
equation index: 2560
type: SIMPLE_ASSIGN
roo.air.p_start = roo.p_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2560};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[287]] /* roo.air.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1046]] /* roo.p_start PARAM */);
  threadData->lastEquationSolved = 2560;
}

/*
equation index: 2561
type: SIMPLE_ASSIGN
roo.air.rho_start = 1.1843079200592153e-5 * roo.air.p_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2561};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[288]] /* roo.air.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[287]] /* roo.air.p_start PARAM */));
  threadData->lastEquationSolved = 2561;
}

/*
equation index: 2562
type: SIMPLE_ASSIGN
roo.air.fluInt.rho_start = roo.air.rho_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2562};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[286]] /* roo.air.fluInt.rho_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[288]] /* roo.air.rho_start PARAM */);
  threadData->lastEquationSolved = 2562;
}

/*
equation index: 2563
type: SIMPLE_ASSIGN
roo.V = roo.AFlo * roo.hRoo
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2563};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* roo.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* roo.AFlo PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* roo.hRoo PARAM */));
  threadData->lastEquationSolved = 2563;
}

/*
equation index: 2564
type: SIMPLE_ASSIGN
roo.air.V = roo.V
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2564};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[77]] /* roo.air.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* roo.V PARAM */);
  threadData->lastEquationSolved = 2564;
}

/*
equation index: 2565
type: SIMPLE_ASSIGN
roo.air.fluInt.V = roo.air.V
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2565};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[283]] /* roo.air.fluInt.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[77]] /* roo.air.V PARAM */);
  threadData->lastEquationSolved = 2565;
}

/*
equation index: 2566
type: SIMPLE_ASSIGN
roo.air.fluInt.m_start = roo.air.fluInt.rho_start * roo.air.fluInt.V
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2566};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[284]] /* roo.air.fluInt.m_start PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[286]] /* roo.air.fluInt.rho_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[283]] /* roo.air.fluInt.V PARAM */));
  threadData->lastEquationSolved = 2566;
}

/*
equation index: 2568
type: SIMPLE_ASSIGN
roo.air.fluInt.p_start = roo.air.p_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2568};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[285]] /* roo.air.fluInt.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[287]] /* roo.air.p_start PARAM */);
  threadData->lastEquationSolved = 2568;
}

/*
equation index: 2579
type: SIMPLE_ASSIGN
roo.air.surIde[6].name = "east_wall"
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2579};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[34]] /* roo.air.surIde[6].name PARAM */) = _OMC_LIT88;
  threadData->lastEquationSolved = 2579;
}

/*
equation index: 2583
type: SIMPLE_ASSIGN
roo.air.surIde[5].name = "west_wall"
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2583};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[33]] /* roo.air.surIde[5].name PARAM */) = _OMC_LIT89;
  threadData->lastEquationSolved = 2583;
}

/*
equation index: 2587
type: SIMPLE_ASSIGN
roo.air.surIde[4].name = "north_wall"
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2587};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[32]] /* roo.air.surIde[4].name PARAM */) = _OMC_LIT90;
  threadData->lastEquationSolved = 2587;
}

/*
equation index: 2591
type: SIMPLE_ASSIGN
roo.air.surIde[3].name = "south_wall"
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2591};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[31]] /* roo.air.surIde[3].name PARAM */) = _OMC_LIT91;
  threadData->lastEquationSolved = 2591;
}

/*
equation index: 2595
type: SIMPLE_ASSIGN
roo.air.surIde[2].name = "ceiling"
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2595};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[30]] /* roo.air.surIde[2].name PARAM */) = _OMC_LIT92;
  threadData->lastEquationSolved = 2595;
}

/*
equation index: 2599
type: SIMPLE_ASSIGN
roo.air.surIde[1].name = "floor"
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2599};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[29]] /* roo.air.surIde[1].name PARAM */) = _OMC_LIT93;
  threadData->lastEquationSolved = 2599;
}

/*
equation index: 2614
type: SIMPLE_ASSIGN
roo.air.cfd.rho_start = roo.air.rho_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2614};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[82]] /* roo.air.cfd.rho_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[288]] /* roo.air.rho_start PARAM */);
  threadData->lastEquationSolved = 2614;
}

/*
equation index: 2616
type: SIMPLE_ASSIGN
roo.air.portName[4] = roo.portName[4]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2616};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[21]] /* roo.air.portName[4] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[65]] /* roo.portName[4] PARAM */);
  threadData->lastEquationSolved = 2616;
}

/*
equation index: 2617
type: SIMPLE_ASSIGN
roo.air.cfd.portName[4] = roo.air.portName[4]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2617};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[5]] /* roo.air.cfd.portName[4] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[21]] /* roo.air.portName[4] PARAM */);
  threadData->lastEquationSolved = 2617;
}

/*
equation index: 2618
type: SIMPLE_ASSIGN
roo.air.portName[3] = roo.portName[3]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2618};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[20]] /* roo.air.portName[3] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[64]] /* roo.portName[3] PARAM */);
  threadData->lastEquationSolved = 2618;
}

/*
equation index: 2619
type: SIMPLE_ASSIGN
roo.air.cfd.portName[3] = roo.air.portName[3]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2619};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* roo.air.cfd.portName[3] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[20]] /* roo.air.portName[3] PARAM */);
  threadData->lastEquationSolved = 2619;
}

/*
equation index: 2620
type: SIMPLE_ASSIGN
roo.air.portName[2] = roo.portName[2]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2620};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[19]] /* roo.air.portName[2] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[63]] /* roo.portName[2] PARAM */);
  threadData->lastEquationSolved = 2620;
}

/*
equation index: 2621
type: SIMPLE_ASSIGN
roo.air.cfd.portName[2] = roo.air.portName[2]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2621};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[3]] /* roo.air.cfd.portName[2] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[19]] /* roo.air.portName[2] PARAM */);
  threadData->lastEquationSolved = 2621;
}

/*
equation index: 2622
type: SIMPLE_ASSIGN
roo.air.portName[1] = roo.portName[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2622};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[18]] /* roo.air.portName[1] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[62]] /* roo.portName[1] PARAM */);
  threadData->lastEquationSolved = 2622;
}

/*
equation index: 2623
type: SIMPLE_ASSIGN
roo.air.cfd.portName[1] = roo.air.portName[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2623};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* roo.air.cfd.portName[1] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[18]] /* roo.air.portName[1] PARAM */);
  threadData->lastEquationSolved = 2623;
}

/*
equation index: 2624
type: SIMPLE_ASSIGN
roo.air.cfd.sensorName[1] = ""
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2624};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[6]] /* roo.air.cfd.sensorName[1] PARAM */) = _OMC_LIT34;
  threadData->lastEquationSolved = 2624;
}

/*
equation index: 2630
type: SIMPLE_ASSIGN
roo.air.cfd.surIde[6].name = "east_wall"
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2630};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[12]] /* roo.air.cfd.surIde[6].name PARAM */) = _OMC_LIT88;
  threadData->lastEquationSolved = 2630;
}

/*
equation index: 2634
type: SIMPLE_ASSIGN
roo.air.cfd.surIde[5].name = "west_wall"
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2634};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[11]] /* roo.air.cfd.surIde[5].name PARAM */) = _OMC_LIT89;
  threadData->lastEquationSolved = 2634;
}

/*
equation index: 2638
type: SIMPLE_ASSIGN
roo.air.cfd.surIde[4].name = "north_wall"
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2638};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[10]] /* roo.air.cfd.surIde[4].name PARAM */) = _OMC_LIT90;
  threadData->lastEquationSolved = 2638;
}

/*
equation index: 2642
type: SIMPLE_ASSIGN
roo.air.cfd.surIde[3].name = "south_wall"
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2642};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[9]] /* roo.air.cfd.surIde[3].name PARAM */) = _OMC_LIT91;
  threadData->lastEquationSolved = 2642;
}

/*
equation index: 2646
type: SIMPLE_ASSIGN
roo.air.cfd.surIde[2].name = "ceiling"
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2646};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[8]] /* roo.air.cfd.surIde[2].name PARAM */) = _OMC_LIT92;
  threadData->lastEquationSolved = 2646;
}

/*
equation index: 2650
type: SIMPLE_ASSIGN
roo.air.cfd.surIde[1].name = "floor"
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2650};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[7]] /* roo.air.cfd.surIde[1].name PARAM */) = _OMC_LIT93;
  threadData->lastEquationSolved = 2650;
}

/*
equation index: 2679
type: SIMPLE_ASSIGN
roo.air.cfdFilNam = roo.absCfdFilNam
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2679};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[13]] /* roo.air.cfdFilNam PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* roo.absCfdFilNam PARAM */);
  threadData->lastEquationSolved = 2679;
}

/*
equation index: 2680
type: SIMPLE_ASSIGN
roo.air.cfd.cfdFilNam = roo.air.cfdFilNam
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2680};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[1]] /* roo.air.cfd.cfdFilNam PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[13]] /* roo.air.cfdFilNam PARAM */);
  threadData->lastEquationSolved = 2680;
}

/*
equation index: 2681
type: SIMPLE_ASSIGN
roo.air.samplePeriod = roo.samplePeriod
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2681};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[289]] /* roo.air.samplePeriod PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1286]] /* roo.samplePeriod PARAM */);
  threadData->lastEquationSolved = 2681;
}

/*
equation index: 2682
type: SIMPLE_ASSIGN
roo.air.cfd.samplePeriod = roo.air.samplePeriod
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2682};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[289]] /* roo.air.samplePeriod PARAM */);
  threadData->lastEquationSolved = 2682;
}

/*
equation index: 2683
type: SIMPLE_ASSIGN
roo.air.sensorName[1] = ""
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2683};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[22]] /* roo.air.sensorName[1] PARAM */) = _OMC_LIT34;
  threadData->lastEquationSolved = 2683;
}

/*
equation index: 2688
type: SIMPLE_ASSIGN
roo.air.surBou[6].A = roo.surBou[6].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2688};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[296]] /* roo.air.surBou[6].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1292]] /* roo.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 2688;
}

/*
equation index: 2689
type: SIMPLE_ASSIGN
roo.air.ASurBou[6] = roo.air.surBou[6].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2689};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[62]] /* roo.air.ASurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[296]] /* roo.air.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 2689;
}

/*
equation index: 2690
type: SIMPLE_ASSIGN
roo.air.surBou[5].A = roo.surBou[5].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2690};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[295]] /* roo.air.surBou[5].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1291]] /* roo.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 2690;
}

/*
equation index: 2691
type: SIMPLE_ASSIGN
roo.air.ASurBou[5] = roo.air.surBou[5].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2691};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[61]] /* roo.air.ASurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[295]] /* roo.air.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 2691;
}

/*
equation index: 2692
type: SIMPLE_ASSIGN
roo.air.surBou[4].A = roo.surBou[4].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2692};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[294]] /* roo.air.surBou[4].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* roo.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 2692;
}

/*
equation index: 2693
type: SIMPLE_ASSIGN
roo.air.ASurBou[4] = roo.air.surBou[4].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2693};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[60]] /* roo.air.ASurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[294]] /* roo.air.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 2693;
}

/*
equation index: 2694
type: SIMPLE_ASSIGN
roo.air.surBou[3].A = roo.surBou[3].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2694};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[293]] /* roo.air.surBou[3].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* roo.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 2694;
}

/*
equation index: 2695
type: SIMPLE_ASSIGN
roo.air.ASurBou[3] = roo.air.surBou[3].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2695};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* roo.air.ASurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[293]] /* roo.air.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 2695;
}

/*
equation index: 2696
type: SIMPLE_ASSIGN
roo.air.surBou[2].A = roo.surBou[2].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2696};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[292]] /* roo.air.surBou[2].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* roo.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 2696;
}

/*
equation index: 2697
type: SIMPLE_ASSIGN
roo.air.ASurBou[2] = roo.air.surBou[2].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2697};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[58]] /* roo.air.ASurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[292]] /* roo.air.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 2697;
}

/*
equation index: 2698
type: SIMPLE_ASSIGN
roo.air.surBou[1].A = roo.surBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2698};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[291]] /* roo.air.surBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* roo.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 2698;
}

/*
equation index: 2699
type: SIMPLE_ASSIGN
roo.air.ASurBou[1] = roo.air.surBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2699};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[57]] /* roo.air.ASurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[291]] /* roo.air.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 2699;
}

/*
equation index: 2700
type: SIMPLE_ASSIGN
roo.air.datConBou[1].A = roo.datConBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2700};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* roo.air.datConBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* roo.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 2700;
}

/*
equation index: 2701
type: SIMPLE_ASSIGN
roo.air.AConBou[1] = roo.air.datConBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2701};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.AConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* roo.air.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 2701;
}

/*
equation index: 2702
type: SIMPLE_ASSIGN
roo.air.datConPar[1].A = roo.datConPar[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2702};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[218]] /* roo.air.datConPar[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[448]] /* roo.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 2702;
}

/*
equation index: 2703
type: SIMPLE_ASSIGN
roo.air.AConPar[1] = roo.air.datConPar[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2703};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[56]] /* roo.air.AConPar[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[218]] /* roo.air.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 2703;
}

/*
equation index: 2704
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].AWin = roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2704};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[159]] /* roo.air.datConExtWin[1].AWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 2704;
}

/*
equation index: 2705
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].fFra = roo.datConExtWin[1].fFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2705};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[163]] /* roo.air.datConExtWin[1].fFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[393]] /* roo.datConExtWin[1].fFra PARAM */);
  threadData->lastEquationSolved = 2705;
}

/*
equation index: 2706
type: SIMPLE_ASSIGN
roo.air.AConExtWinFra[1] = roo.air.datConExtWin[1].fFra * roo.air.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2706};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[53]] /* roo.air.AConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[163]] /* roo.air.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[159]] /* roo.air.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 2706;
}

/*
equation index: 2707
type: SIMPLE_ASSIGN
roo.air.AConExtWinGla[1] = (1.0 - roo.air.datConExtWin[1].fFra) * roo.air.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2707};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[54]] /* roo.air.AConExtWinGla[1] PARAM */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[163]] /* roo.air.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[159]] /* roo.air.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 2707;
}

/*
equation index: 2708
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].AOpa = roo.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2708};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* roo.air.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[388]] /* roo.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 2708;
}

/*
equation index: 2709
type: SIMPLE_ASSIGN
roo.air.AConExtWinOpa[1] = roo.air.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2709};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* roo.air.AConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* roo.air.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 2709;
}

/*
equation index: 2710
type: SIMPLE_ASSIGN
roo.air.datConExt[1].A = roo.datConExt[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2710};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* roo.air.datConExt[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[364]] /* roo.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 2710;
}

/*
equation index: 2711
type: SIMPLE_ASSIGN
roo.air.AConExt[1] = roo.air.datConExt[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2711};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* roo.air.AConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* roo.air.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 2711;
}

/*
equation index: 2719
type: SIMPLE_ASSIGN
roo.air.dummyCon.R = roo.air.dummyCon.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2719};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[239]] /* roo.air.dummyCon.R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[245]] /* roo.air.dummyCon.material[1].R PARAM */);
  threadData->lastEquationSolved = 2719;
}

/*
equation index: 2726
type: SIMPLE_ASSIGN
roo.air.surBou[6].name = roo.surBou[6].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2726};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[28]] /* roo.air.surBou[6].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[83]] /* roo.surBou[6].name PARAM */);
  threadData->lastEquationSolved = 2726;
}

/*
equation index: 2728
type: SIMPLE_ASSIGN
roo.air.surBou[6].absSol = roo.surBou[6].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2728};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[308]] /* roo.air.surBou[6].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1304]] /* roo.surBou[6].absSol PARAM */);
  threadData->lastEquationSolved = 2728;
}

/*
equation index: 2729
type: SIMPLE_ASSIGN
roo.air.surBou[6].absIR = roo.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2729};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* roo.air.surBou[6].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* roo.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 2729;
}

/*
equation index: 2732
type: SIMPLE_ASSIGN
roo.air.surBou[5].name = roo.surBou[5].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2732};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[27]] /* roo.air.surBou[5].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[82]] /* roo.surBou[5].name PARAM */);
  threadData->lastEquationSolved = 2732;
}

/*
equation index: 2734
type: SIMPLE_ASSIGN
roo.air.surBou[5].absSol = roo.surBou[5].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2734};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[307]] /* roo.air.surBou[5].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1303]] /* roo.surBou[5].absSol PARAM */);
  threadData->lastEquationSolved = 2734;
}

/*
equation index: 2735
type: SIMPLE_ASSIGN
roo.air.surBou[5].absIR = roo.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2735};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[301]] /* roo.air.surBou[5].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* roo.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 2735;
}

/*
equation index: 2738
type: SIMPLE_ASSIGN
roo.air.surBou[4].name = roo.surBou[4].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2738};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[26]] /* roo.air.surBou[4].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[81]] /* roo.surBou[4].name PARAM */);
  threadData->lastEquationSolved = 2738;
}

/*
equation index: 2740
type: SIMPLE_ASSIGN
roo.air.surBou[4].absSol = roo.surBou[4].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2740};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[306]] /* roo.air.surBou[4].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1302]] /* roo.surBou[4].absSol PARAM */);
  threadData->lastEquationSolved = 2740;
}

/*
equation index: 2741
type: SIMPLE_ASSIGN
roo.air.surBou[4].absIR = roo.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2741};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* roo.air.surBou[4].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1296]] /* roo.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 2741;
}

/*
equation index: 2744
type: SIMPLE_ASSIGN
roo.air.surBou[3].name = roo.surBou[3].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2744};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[25]] /* roo.air.surBou[3].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[80]] /* roo.surBou[3].name PARAM */);
  threadData->lastEquationSolved = 2744;
}

/*
equation index: 2746
type: SIMPLE_ASSIGN
roo.air.surBou[3].absSol = roo.surBou[3].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2746};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[305]] /* roo.air.surBou[3].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* roo.surBou[3].absSol PARAM */);
  threadData->lastEquationSolved = 2746;
}

/*
equation index: 2747
type: SIMPLE_ASSIGN
roo.air.surBou[3].absIR = roo.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2747};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[299]] /* roo.air.surBou[3].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* roo.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 2747;
}

/*
equation index: 2750
type: SIMPLE_ASSIGN
roo.air.surBou[2].name = roo.surBou[2].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2750};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[24]] /* roo.air.surBou[2].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[79]] /* roo.surBou[2].name PARAM */);
  threadData->lastEquationSolved = 2750;
}

/*
equation index: 2752
type: SIMPLE_ASSIGN
roo.air.surBou[2].absSol = roo.surBou[2].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2752};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[304]] /* roo.air.surBou[2].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* roo.surBou[2].absSol PARAM */);
  threadData->lastEquationSolved = 2752;
}

/*
equation index: 2753
type: SIMPLE_ASSIGN
roo.air.surBou[2].absIR = roo.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2753};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[298]] /* roo.air.surBou[2].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* roo.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 2753;
}

/*
equation index: 2756
type: SIMPLE_ASSIGN
roo.air.surBou[1].name = roo.surBou[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2756};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[23]] /* roo.air.surBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[78]] /* roo.surBou[1].name PARAM */);
  threadData->lastEquationSolved = 2756;
}

/*
equation index: 2758
type: SIMPLE_ASSIGN
roo.air.surBou[1].absSol = roo.surBou[1].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2758};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[303]] /* roo.air.surBou[1].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1299]] /* roo.surBou[1].absSol PARAM */);
  threadData->lastEquationSolved = 2758;
}

/*
equation index: 2759
type: SIMPLE_ASSIGN
roo.air.surBou[1].absIR = roo.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2759};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[297]] /* roo.air.surBou[1].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1293]] /* roo.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 2759;
}

/*
equation index: 2764
type: SIMPLE_ASSIGN
roo.air.datConBou[1].T_b_start = roo.datConBou[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2764};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* roo.air.datConBou[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* roo.datConBou[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2764;
}

/*
equation index: 2765
type: SIMPLE_ASSIGN
roo.air.datConBou[1].T_a_start = roo.datConBou[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2765};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* roo.air.datConBou[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* roo.datConBou[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2765;
}

/*
equation index: 2769
type: SIMPLE_ASSIGN
roo.air.datConBou[1].azi = roo.datConBou[1].azi
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2769};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* roo.air.datConBou[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* roo.datConBou[1].azi PARAM */);
  threadData->lastEquationSolved = 2769;
}

/*
equation index: 2771
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.roughness_a = roo.datConBou[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2771};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[61]] /* roo.air.datConBou[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[137]] /* roo.datConBou[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2771;
}

/*
equation index: 2772
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.absSol_b = roo.datConBou[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2772};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[121]] /* roo.air.datConBou[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* roo.datConBou[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2772;
}

/*
equation index: 2773
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.absSol_a = roo.datConBou[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2773};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* roo.air.datConBou[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[350]] /* roo.datConBou[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2773;
}

/*
equation index: 2774
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.absIR_b = roo.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2774};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* roo.air.datConBou[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[349]] /* roo.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2774;
}

/*
equation index: 2775
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.absIR_a = roo.datConBou[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2775};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* roo.air.datConBou[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* roo.datConBou[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2775;
}

/*
equation index: 2778
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].LHea = roo.datConBou[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2778};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[122]] /* roo.air.datConBou[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* roo.datConBou[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2778;
}

/*
equation index: 2781
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].nStaReal = roo.datConBou[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2781};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[129]] /* roo.air.datConBou[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* roo.datConBou[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2781;
}

/*
equation index: 2782
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].piMat = roo.datConBou[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2782};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[130]] /* roo.air.datConBou[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* roo.datConBou[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2782;
}

/*
equation index: 2783
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].piRef = roo.datConBou[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2783};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* roo.air.datConBou[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[361]] /* roo.datConBou[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2783;
}

/*
equation index: 2786
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].nStaRef = roo.datConBou[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2786};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[58]] /* roo.air.datConBou[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[134]] /* roo.datConBou[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2786;
}

/*
equation index: 2787
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].R = roo.datConBou[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2787};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* roo.air.datConBou[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* roo.datConBou[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2787;
}

/*
equation index: 2788
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].d = roo.datConBou[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2788};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[127]] /* roo.air.datConBou[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* roo.datConBou[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2788;
}

/*
equation index: 2789
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].c = roo.datConBou[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2789};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[126]] /* roo.air.datConBou[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* roo.datConBou[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2789;
}

/*
equation index: 2790
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].k = roo.datConBou[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2790};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[128]] /* roo.air.datConBou[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[358]] /* roo.datConBou[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2790;
}

/*
equation index: 2791
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].x = roo.datConBou[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2791};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[132]] /* roo.air.datConBou[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* roo.datConBou[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2791;
}

/*
equation index: 2793
type: SIMPLE_ASSIGN
roo.air.datConBou[1].name = roo.datConBou[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2793};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[14]] /* roo.air.datConBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[36]] /* roo.datConBou[1].name PARAM */);
  threadData->lastEquationSolved = 2793;
}

/*
equation index: 2797
type: SIMPLE_ASSIGN
roo.air.datConPar[1].T_b_start = roo.datConPar[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2797};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[220]] /* roo.air.datConPar[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[450]] /* roo.datConPar[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2797;
}

/*
equation index: 2798
type: SIMPLE_ASSIGN
roo.air.datConPar[1].T_a_start = roo.datConPar[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2798};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[219]] /* roo.air.datConPar[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[449]] /* roo.datConPar[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2798;
}

/*
equation index: 2802
type: SIMPLE_ASSIGN
roo.air.datConPar[1].azi = roo.datConPar[1].azi
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2802};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[221]] /* roo.air.datConPar[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[451]] /* roo.datConPar[1].azi PARAM */);
  threadData->lastEquationSolved = 2802;
}

/*
equation index: 2804
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.roughness_a = roo.datConPar[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2804};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[79]] /* roo.air.datConPar[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[155]] /* roo.datConPar[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2804;
}

/*
equation index: 2805
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.absSol_b = roo.datConPar[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2805};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[226]] /* roo.air.datConPar[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[456]] /* roo.datConPar[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2805;
}

/*
equation index: 2806
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.absSol_a = roo.datConPar[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2806};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[225]] /* roo.air.datConPar[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[455]] /* roo.datConPar[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2806;
}

/*
equation index: 2807
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.absIR_b = roo.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2807};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[224]] /* roo.air.datConPar[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[454]] /* roo.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2807;
}

/*
equation index: 2808
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.absIR_a = roo.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2808};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[223]] /* roo.air.datConPar[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[453]] /* roo.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2808;
}

/*
equation index: 2811
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].LHea = roo.datConPar[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2811};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[227]] /* roo.air.datConPar[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[457]] /* roo.datConPar[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2811;
}

/*
equation index: 2814
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].nStaReal = roo.datConPar[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2814};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[234]] /* roo.air.datConPar[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[464]] /* roo.datConPar[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2814;
}

/*
equation index: 2815
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].piMat = roo.datConPar[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2815};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[235]] /* roo.air.datConPar[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[465]] /* roo.datConPar[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2815;
}

/*
equation index: 2816
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].piRef = roo.datConPar[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2816};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[236]] /* roo.air.datConPar[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[466]] /* roo.datConPar[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2816;
}

/*
equation index: 2819
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].nStaRef = roo.datConPar[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2819};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[76]] /* roo.air.datConPar[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[152]] /* roo.datConPar[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2819;
}

/*
equation index: 2820
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].R = roo.datConPar[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2820};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[228]] /* roo.air.datConPar[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[458]] /* roo.datConPar[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2820;
}

/*
equation index: 2821
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].d = roo.datConPar[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2821};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[232]] /* roo.air.datConPar[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[462]] /* roo.datConPar[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2821;
}

/*
equation index: 2822
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].c = roo.datConPar[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2822};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[231]] /* roo.air.datConPar[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[461]] /* roo.datConPar[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2822;
}

/*
equation index: 2823
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].k = roo.datConPar[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2823};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[233]] /* roo.air.datConPar[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[463]] /* roo.datConPar[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2823;
}

/*
equation index: 2824
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].x = roo.datConPar[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2824};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[237]] /* roo.air.datConPar[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[467]] /* roo.datConPar[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2824;
}

/*
equation index: 2826
type: SIMPLE_ASSIGN
roo.air.datConPar[1].name = roo.datConPar[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2826};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[17]] /* roo.air.datConPar[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[39]] /* roo.datConPar[1].name PARAM */);
  threadData->lastEquationSolved = 2826;
}

/*
equation index: 2830
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.absSolFra = roo.datConExtWin[1].glaSys.absSolFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2830};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[166]] /* roo.air.datConExtWin[1].glaSys.absSolFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[396]] /* roo.datConExtWin[1].glaSys.absSolFra PARAM */);
  threadData->lastEquationSolved = 2830;
}

/*
equation index: 2831
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.absIRFra = roo.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2831};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[165]] /* roo.air.datConExtWin[1].glaSys.absIRFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[395]] /* roo.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 2831;
}

/*
equation index: 2832
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.UFra = roo.datConExtWin[1].glaSys.UFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2832};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[164]] /* roo.air.datConExtWin[1].glaSys.UFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[394]] /* roo.datConExtWin[1].glaSys.UFra PARAM */);
  threadData->lastEquationSolved = 2832;
}

/*
equation index: 2833
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.tauIR_b = roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2833};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[189]] /* roo.air.datConExtWin[1].glaSys.shade.tauIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 2833;
}

/*
equation index: 2834
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.tauIR_a = roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2834};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[188]] /* roo.air.datConExtWin[1].glaSys.shade.tauIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 2834;
}

/*
equation index: 2835
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.absIR_b = roo.datConExtWin[1].glaSys.shade.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2835};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[185]] /* roo.air.datConExtWin[1].glaSys.shade.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* roo.datConExtWin[1].glaSys.shade.absIR_b PARAM */);
  threadData->lastEquationSolved = 2835;
}

/*
equation index: 2836
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.absIR_a = roo.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2836};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[184]] /* roo.air.datConExtWin[1].glaSys.shade.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* roo.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 2836;
}

/*
equation index: 2837
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.rhoSol_b = roo.datConExtWin[1].glaSys.shade.rhoSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2837};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[187]] /* roo.air.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */);
  threadData->lastEquationSolved = 2837;
}

/*
equation index: 2838
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.rhoSol_a = roo.datConExtWin[1].glaSys.shade.rhoSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2838};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[186]] /* roo.air.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */);
  threadData->lastEquationSolved = 2838;
}

/*
equation index: 2839
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.tauSol_b = roo.datConExtWin[1].glaSys.shade.tauSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2839};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[191]] /* roo.air.datConExtWin[1].glaSys.shade.tauSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* roo.datConExtWin[1].glaSys.shade.tauSol_b PARAM */);
  threadData->lastEquationSolved = 2839;
}

/*
equation index: 2840
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.tauSol_a = roo.datConExtWin[1].glaSys.shade.tauSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2840};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[190]] /* roo.air.datConExtWin[1].glaSys.shade.tauSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* roo.datConExtWin[1].glaSys.shade.tauSol_a PARAM */);
  threadData->lastEquationSolved = 2840;
}

/*
equation index: 2841
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].P0 = roo.datConExtWin[1].glaSys.gas[1].P0
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2841};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[168]] /* roo.air.datConExtWin[1].glaSys.gas[1].P0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* roo.datConExtWin[1].glaSys.gas[1].P0 PARAM */);
  threadData->lastEquationSolved = 2841;
}

/*
equation index: 2842
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].MM = roo.datConExtWin[1].glaSys.gas[1].MM
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2842};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[167]] /* roo.air.datConExtWin[1].glaSys.gas[1].MM PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* roo.datConExtWin[1].glaSys.gas[1].MM PARAM */);
  threadData->lastEquationSolved = 2842;
}

/*
equation index: 2843
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].b_c = roo.datConExtWin[1].glaSys.gas[1].b_c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2843};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[172]] /* roo.air.datConExtWin[1].glaSys.gas[1].b_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[402]] /* roo.datConExtWin[1].glaSys.gas[1].b_c PARAM */);
  threadData->lastEquationSolved = 2843;
}

/*
equation index: 2844
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].a_c = roo.datConExtWin[1].glaSys.gas[1].a_c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2844};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[169]] /* roo.air.datConExtWin[1].glaSys.gas[1].a_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[399]] /* roo.datConExtWin[1].glaSys.gas[1].a_c PARAM */);
  threadData->lastEquationSolved = 2844;
}

/*
equation index: 2845
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].b_mu = roo.datConExtWin[1].glaSys.gas[1].b_mu
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2845};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[174]] /* roo.air.datConExtWin[1].glaSys.gas[1].b_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* roo.datConExtWin[1].glaSys.gas[1].b_mu PARAM */);
  threadData->lastEquationSolved = 2845;
}

/*
equation index: 2846
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].a_mu = roo.datConExtWin[1].glaSys.gas[1].a_mu
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2846};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[171]] /* roo.air.datConExtWin[1].glaSys.gas[1].a_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* roo.datConExtWin[1].glaSys.gas[1].a_mu PARAM */);
  threadData->lastEquationSolved = 2846;
}

/*
equation index: 2847
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].b_k = roo.datConExtWin[1].glaSys.gas[1].b_k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2847};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[173]] /* roo.air.datConExtWin[1].glaSys.gas[1].b_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* roo.datConExtWin[1].glaSys.gas[1].b_k PARAM */);
  threadData->lastEquationSolved = 2847;
}

/*
equation index: 2848
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].a_k = roo.datConExtWin[1].glaSys.gas[1].a_k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2848};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[170]] /* roo.air.datConExtWin[1].glaSys.gas[1].a_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[400]] /* roo.datConExtWin[1].glaSys.gas[1].a_k PARAM */);
  threadData->lastEquationSolved = 2848;
}

/*
equation index: 2849
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].x = roo.datConExtWin[1].glaSys.gas[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2849};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[175]] /* roo.air.datConExtWin[1].glaSys.gas[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[405]] /* roo.datConExtWin[1].glaSys.gas[1].x PARAM */);
  threadData->lastEquationSolved = 2849;
}

/*
equation index: 2850
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].absIR_b = roo.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2850};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[177]] /* roo.air.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 2850;
}

/*
equation index: 2851
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].absIR_a = roo.datConExtWin[1].glaSys.glass[1].absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2851};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* roo.air.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */);
  threadData->lastEquationSolved = 2851;
}

/*
equation index: 2852
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].tauIR = roo.datConExtWin[1].glaSys.glass[1].tauIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2852};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[181]] /* roo.air.datConExtWin[1].glaSys.glass[1].tauIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* roo.datConExtWin[1].glaSys.glass[1].tauIR PARAM */);
  threadData->lastEquationSolved = 2852;
}

/*
equation index: 2853
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2853};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* roo.air.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */);
  threadData->lastEquationSolved = 2853;
}

/*
equation index: 2854
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2854};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[179]] /* roo.air.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */);
  threadData->lastEquationSolved = 2854;
}

/*
equation index: 2855
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].tauSol[1] = roo.datConExtWin[1].glaSys.glass[1].tauSol[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2855};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[182]] /* roo.air.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[412]] /* roo.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */);
  threadData->lastEquationSolved = 2855;
}

/*
equation index: 2856
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].k = roo.datConExtWin[1].glaSys.glass[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2856};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* roo.air.datConExtWin[1].glaSys.glass[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[408]] /* roo.datConExtWin[1].glaSys.glass[1].k PARAM */);
  threadData->lastEquationSolved = 2856;
}

/*
equation index: 2857
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].x = roo.datConExtWin[1].glaSys.glass[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2857};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[183]] /* roo.air.datConExtWin[1].glaSys.glass[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* roo.datConExtWin[1].glaSys.glass[1].x PARAM */);
  threadData->lastEquationSolved = 2857;
}

/*
equation index: 2860
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].AGla = roo.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2860};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[157]] /* roo.air.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* roo.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 2860;
}

/*
equation index: 2861
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].AFra = roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2861};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* roo.air.datConExtWin[1].AFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[386]] /* roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 2861;
}

/*
equation index: 2863
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].sidFin.gap = roo.datConExtWin[1].sidFin.gap
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2863};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[214]] /* roo.air.datConExtWin[1].sidFin.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[444]] /* roo.datConExtWin[1].sidFin.gap PARAM */);
  threadData->lastEquationSolved = 2863;
}

/*
equation index: 2865
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].sidFin.h = roo.datConExtWin[1].sidFin.h
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2865};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[215]] /* roo.air.datConExtWin[1].sidFin.h PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[445]] /* roo.datConExtWin[1].sidFin.h PARAM */);
  threadData->lastEquationSolved = 2865;
}

/*
equation index: 2867
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].ove.gap = roo.datConExtWin[1].ove.gap
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2867};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[210]] /* roo.air.datConExtWin[1].ove.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[440]] /* roo.datConExtWin[1].ove.gap PARAM */);
  threadData->lastEquationSolved = 2867;
}

/*
equation index: 2869
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].ove.wR = roo.datConExtWin[1].ove.wR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2869};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[212]] /* roo.air.datConExtWin[1].ove.wR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[442]] /* roo.datConExtWin[1].ove.wR PARAM */);
  threadData->lastEquationSolved = 2869;
}

/*
equation index: 2870
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].ove.wL = roo.datConExtWin[1].ove.wL
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2870};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[211]] /* roo.air.datConExtWin[1].ove.wL PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[441]] /* roo.datConExtWin[1].ove.wL PARAM */);
  threadData->lastEquationSolved = 2870;
}

/*
equation index: 2871
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].wWin = roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2871};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[217]] /* roo.air.datConExtWin[1].wWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[447]] /* roo.datConExtWin[1].wWin PARAM */);
  threadData->lastEquationSolved = 2871;
}

/*
equation index: 2872
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].hWin = roo.datConExtWin[1].hWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2872};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[192]] /* roo.air.datConExtWin[1].hWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* roo.datConExtWin[1].hWin PARAM */);
  threadData->lastEquationSolved = 2872;
}

/*
equation index: 2873
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].A = roo.datConExtWin[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2873};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* roo.air.datConExtWin[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[385]] /* roo.datConExtWin[1].A PARAM */);
  threadData->lastEquationSolved = 2873;
}

/*
equation index: 2877
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].T_b_start = roo.datConExtWin[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2877};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[161]] /* roo.air.datConExtWin[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[391]] /* roo.datConExtWin[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2877;
}

/*
equation index: 2878
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].T_a_start = roo.datConExtWin[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2878};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[160]] /* roo.air.datConExtWin[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* roo.datConExtWin[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2878;
}

/*
equation index: 2882
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].azi = roo.datConExtWin[1].azi
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2882};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[162]] /* roo.air.datConExtWin[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[392]] /* roo.datConExtWin[1].azi PARAM */);
  threadData->lastEquationSolved = 2882;
}

/*
equation index: 2884
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.roughness_a = roo.datConExtWin[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2884};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[73]] /* roo.air.datConExtWin[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[149]] /* roo.datConExtWin[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2884;
}

/*
equation index: 2885
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.absSol_b = roo.datConExtWin[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2885};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[197]] /* roo.air.datConExtWin[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[427]] /* roo.datConExtWin[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2885;
}

/*
equation index: 2886
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.absSol_a = roo.datConExtWin[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2886};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[196]] /* roo.air.datConExtWin[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* roo.datConExtWin[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2886;
}

/*
equation index: 2887
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.absIR_b = roo.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2887};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* roo.air.datConExtWin[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[425]] /* roo.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2887;
}

/*
equation index: 2888
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.absIR_a = roo.datConExtWin[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2888};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* roo.air.datConExtWin[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[424]] /* roo.datConExtWin[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2888;
}

/*
equation index: 2891
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].LHea = roo.datConExtWin[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2891};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[198]] /* roo.air.datConExtWin[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[428]] /* roo.datConExtWin[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2891;
}

/*
equation index: 2894
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].nStaReal = roo.datConExtWin[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2894};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[205]] /* roo.air.datConExtWin[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[435]] /* roo.datConExtWin[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2894;
}

/*
equation index: 2895
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].piMat = roo.datConExtWin[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2895};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[206]] /* roo.air.datConExtWin[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[436]] /* roo.datConExtWin[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2895;
}

/*
equation index: 2896
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].piRef = roo.datConExtWin[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2896};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[207]] /* roo.air.datConExtWin[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[437]] /* roo.datConExtWin[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2896;
}

/*
equation index: 2899
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].nStaRef = roo.datConExtWin[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2899};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[70]] /* roo.air.datConExtWin[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[146]] /* roo.datConExtWin[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2899;
}

/*
equation index: 2900
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].R = roo.datConExtWin[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2900};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[199]] /* roo.air.datConExtWin[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[429]] /* roo.datConExtWin[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2900;
}

/*
equation index: 2901
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].d = roo.datConExtWin[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2901};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[203]] /* roo.air.datConExtWin[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[433]] /* roo.datConExtWin[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2901;
}

/*
equation index: 2902
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].c = roo.datConExtWin[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2902};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[202]] /* roo.air.datConExtWin[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[432]] /* roo.datConExtWin[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2902;
}

/*
equation index: 2903
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].k = roo.datConExtWin[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2903};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[204]] /* roo.air.datConExtWin[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[434]] /* roo.datConExtWin[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2903;
}

/*
equation index: 2904
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].x = roo.datConExtWin[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2904};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[208]] /* roo.air.datConExtWin[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[438]] /* roo.datConExtWin[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2904;
}

/*
equation index: 2906
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].name = roo.datConExtWin[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2906};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[16]] /* roo.air.datConExtWin[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[38]] /* roo.datConExtWin[1].name PARAM */);
  threadData->lastEquationSolved = 2906;
}

/*
equation index: 2910
type: SIMPLE_ASSIGN
roo.air.datConExt[1].T_b_start = roo.datConExt[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2910};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* roo.air.datConExt[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[366]] /* roo.datConExt[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2910;
}

/*
equation index: 2911
type: SIMPLE_ASSIGN
roo.air.datConExt[1].T_a_start = roo.datConExt[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2911};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* roo.air.datConExt[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* roo.datConExt[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2911;
}

/*
equation index: 2915
type: SIMPLE_ASSIGN
roo.air.datConExt[1].azi = roo.datConExt[1].azi
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2915};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* roo.air.datConExt[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[367]] /* roo.datConExt[1].azi PARAM */);
  threadData->lastEquationSolved = 2915;
}

/*
equation index: 2917
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.roughness_a = roo.datConExt[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2917};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[67]] /* roo.air.datConExt[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[143]] /* roo.datConExt[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2917;
}

/*
equation index: 2918
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.absSol_b = roo.datConExt[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2918};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[142]] /* roo.air.datConExt[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* roo.datConExt[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2918;
}

/*
equation index: 2919
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.absSol_a = roo.datConExt[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2919};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* roo.air.datConExt[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* roo.datConExt[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2919;
}

/*
equation index: 2920
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.absIR_b = roo.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2920};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[140]] /* roo.air.datConExt[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* roo.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2920;
}

/*
equation index: 2921
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.absIR_a = roo.datConExt[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2921};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* roo.air.datConExt[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* roo.datConExt[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2921;
}

/*
equation index: 2924
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].LHea = roo.datConExt[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2924};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* roo.air.datConExt[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* roo.datConExt[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2924;
}

/*
equation index: 2927
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].nStaReal = roo.datConExt[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2927};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[150]] /* roo.air.datConExt[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[380]] /* roo.datConExt[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2927;
}

/*
equation index: 2928
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].piMat = roo.datConExt[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2928};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* roo.air.datConExt[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* roo.datConExt[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2928;
}

/*
equation index: 2929
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].piRef = roo.datConExt[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2929};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* roo.air.datConExt[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[382]] /* roo.datConExt[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2929;
}

/*
equation index: 2932
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].nStaRef = roo.datConExt[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2932};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[64]] /* roo.air.datConExt[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[140]] /* roo.datConExt[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2932;
}

/*
equation index: 2933
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].R = roo.datConExt[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2933};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[144]] /* roo.air.datConExt[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* roo.datConExt[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2933;
}

/*
equation index: 2934
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].d = roo.datConExt[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2934};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[148]] /* roo.air.datConExt[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* roo.datConExt[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2934;
}

/*
equation index: 2935
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].c = roo.datConExt[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2935};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[147]] /* roo.air.datConExt[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* roo.datConExt[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2935;
}

/*
equation index: 2936
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].k = roo.datConExt[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2936};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[149]] /* roo.air.datConExt[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* roo.datConExt[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2936;
}

/*
equation index: 2937
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].x = roo.datConExt[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2937};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[153]] /* roo.air.datConExt[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* roo.datConExt[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2937;
}

/*
equation index: 2939
type: SIMPLE_ASSIGN
roo.air.datConExt[1].name = roo.datConExt[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2939};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[15]] /* roo.air.datConExt[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[37]] /* roo.datConExt[1].name PARAM */);
  threadData->lastEquationSolved = 2939;
}

/*
equation index: 2956
type: SIMPLE_ASSIGN
roo.m_flow_nominal = 3.333333333333333e-4 * roo.V
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2956};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1045]] /* roo.m_flow_nominal PARAM */) = (3.333333333333333e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* roo.V PARAM */));
  threadData->lastEquationSolved = 2956;
}
extern void tmp_two_returns_res_eqFunction_289(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_288(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_287(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_286(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_285(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_284(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_283(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_282(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_281(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_280(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_279(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_278(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_277(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_276(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_275(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_274(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_273(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_272(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_271(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_270(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_269(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_268(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_267(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_56(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_266(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_54(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_49(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_262(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_55(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_50(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_48(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_47(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_46(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_45(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_44(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_43(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_42(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_41(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_40(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_39(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_38(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_37(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_36(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_35(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_34(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_33(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_32(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_31(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_30(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_29(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_28(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_27(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_26(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_25(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_24(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_23(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_22(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_21(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_20(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_19(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_18(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_17(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_16(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_15(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_14(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_13(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_12(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_11(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_10(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_9(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_8(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_7(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_6(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_5(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_4(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_3(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_2(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 3138
type: ALGORITHM

  assert(ret.T >= 1.0 and ret.T <= 1e4, "Variable violating min/max constraint: 1.0 <= ret.T <= 1e4, has value: " + String(ret.T, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3138};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  static const MMC_DEFSTRINGLIT(tmp4,71,"Variable violating min/max constraint: 1.0 <= ret.T <= 1e4, has value: ");
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  static int tmp7 = 0;
  if(!tmp7)
  {
    tmp2 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* ret.T PARAM */),1.0);
    tmp3 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* ret.T PARAM */),1e4);
    if(!(tmp2 && tmp3))
    {
      tmp5 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* ret.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta6 = stringAppend(MMC_REFSTRINGLIT(tmp4),tmp5);
      {
        const char* assert_cond = "(ret.T >= 1.0 and ret.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/Boundary_pT.mo",16,3,18,68,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta6));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/Boundary_pT.mo",16,3,18,68,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta6));
        }
      }
      tmp7 = 1;
    }
  }
  threadData->lastEquationSolved = 3138;
}

/*
equation index: 3139
type: ALGORITHM

  assert(ret.p >= 0.0 and ret.p <= 1e8, "Variable violating min/max constraint: 0.0 <= ret.p <= 1e8, has value: " + String(ret.p, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3139};
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  static const MMC_DEFSTRINGLIT(tmp10,71,"Variable violating min/max constraint: 0.0 <= ret.p <= 1e8, has value: ");
  modelica_string tmp11;
  modelica_metatype tmpMeta12;
  static int tmp13 = 0;
  if(!tmp13)
  {
    tmp8 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* ret.p PARAM */),0.0);
    tmp9 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* ret.p PARAM */),1e8);
    if(!(tmp8 && tmp9))
    {
      tmp11 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* ret.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta12 = stringAppend(MMC_REFSTRINGLIT(tmp10),tmp11);
      {
        const char* assert_cond = "(ret.p >= 0.0 and ret.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/Boundary_pT.mo",9,3,11,69,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta12));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/Boundary_pT.mo",9,3,11,69,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta12));
        }
      }
      tmp13 = 1;
    }
  }
  threadData->lastEquationSolved = 3139;
}

/*
equation index: 3140
type: ALGORITHM

  assert(ret.X[2] >= 0.0 and ret.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= ret.X[2] <= 1.0, has value: " + String(ret.X[2], "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3140};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,74,"Variable violating min/max constraint: 0.0 <= ret.X[2] <= 1.0, has value: ");
  modelica_string tmp17;
  modelica_metatype tmpMeta18;
  static int tmp19 = 0;
  if(!tmp19)
  {
    tmp14 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* ret.X[2] PARAM */),0.0);
    tmp15 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* ret.X[2] PARAM */),1.0);
    if(!(tmp14 && tmp15))
    {
      tmp17 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* ret.X[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta18 = stringAppend(MMC_REFSTRINGLIT(tmp16),tmp17);
      {
        const char* assert_cond = "(ret.X[2] >= 0.0 and ret.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta18));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta18));
        }
      }
      tmp19 = 1;
    }
  }
  threadData->lastEquationSolved = 3140;
}

/*
equation index: 3141
type: ALGORITHM

  assert(ret.X[1] >= 0.0 and ret.X[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= ret.X[1] <= 1.0, has value: " + String(ret.X[1], "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3141};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  static const MMC_DEFSTRINGLIT(tmp22,74,"Variable violating min/max constraint: 0.0 <= ret.X[1] <= 1.0, has value: ");
  modelica_string tmp23;
  modelica_metatype tmpMeta24;
  static int tmp25 = 0;
  if(!tmp25)
  {
    tmp20 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* ret.X[1] PARAM */),0.0);
    tmp21 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* ret.X[1] PARAM */),1.0);
    if(!(tmp20 && tmp21))
    {
      tmp23 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* ret.X[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta24 = stringAppend(MMC_REFSTRINGLIT(tmp22),tmp23);
      {
        const char* assert_cond = "(ret.X[1] >= 0.0 and ret.X[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta24));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta24));
        }
      }
      tmp25 = 1;
    }
  }
  threadData->lastEquationSolved = 3141;
}

/*
equation index: 3142
type: ALGORITHM

  assert(ret.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and ret.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= ret.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(ret.flowDirection, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3142};
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,176,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= ret.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp29;
  modelica_metatype tmpMeta30;
  static int tmp31 = 0;
  if(!tmp31)
  {
    tmp26 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[3]] /* ret.flowDirection PARAM */),1);
    tmp27 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[3]] /* ret.flowDirection PARAM */),3);
    if(!(tmp26 && tmp27))
    {
      tmp29 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[3]] /* ret.flowDirection PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta30 = stringAppend(MMC_REFSTRINGLIT(tmp28),tmp29);
      {
        const char* assert_cond = "(ret.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and ret.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource.mo",31,3,32,80,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta30));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource.mo",31,3,32,80,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta30));
        }
      }
      tmp31 = 1;
    }
  }
  threadData->lastEquationSolved = 3142;
}

/*
equation index: 3143
type: ALGORITHM

  assert(retRes2.deltaM >= 1e-6, "Variable violating min constraint: 1e-6 <= retRes2.deltaM, has value: " + String(retRes2.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3143};
  modelica_boolean tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,70,"Variable violating min constraint: 1e-6 <= retRes2.deltaM, has value: ");
  modelica_string tmp34;
  modelica_metatype tmpMeta35;
  static int tmp36 = 0;
  if(!tmp36)
  {
    tmp32 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[34]] /* retRes2.deltaM PARAM */),1e-6);
    if(!tmp32)
    {
      tmp34 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[34]] /* retRes2.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta35 = stringAppend(MMC_REFSTRINGLIT(tmp33),tmp34);
      {
        const char* assert_cond = "(retRes2.deltaM >= 1e-6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta35));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta35));
        }
      }
      tmp36 = 1;
    }
  }
  threadData->lastEquationSolved = 3143;
}

/*
equation index: 3144
type: ALGORITHM

  assert(retRes2.sta_default.T >= 1.0 and retRes2.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= retRes2.sta_default.T <= 1e4, has value: " + String(retRes2.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3144};
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  static const MMC_DEFSTRINGLIT(tmp39,87,"Variable violating min/max constraint: 1.0 <= retRes2.sta_default.T <= 1e4, has value: ");
  modelica_string tmp40;
  modelica_metatype tmpMeta41;
  static int tmp42 = 0;
  if(!tmp42)
  {
    tmp37 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* retRes2.sta_default.T PARAM */),1.0);
    tmp38 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* retRes2.sta_default.T PARAM */),1e4);
    if(!(tmp37 && tmp38))
    {
      tmp40 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* retRes2.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta41 = stringAppend(MMC_REFSTRINGLIT(tmp39),tmp40);
      {
        const char* assert_cond = "(retRes2.sta_default.T >= 1.0 and retRes2.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Media/package.mo",5132,7,5132,44,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta41));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Media/package.mo",5132,7,5132,44,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta41));
        }
      }
      tmp42 = 1;
    }
  }
  threadData->lastEquationSolved = 3144;
}

/*
equation index: 3145
type: ALGORITHM

  assert(retRes2.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= retRes2.eta_default, has value: " + String(retRes2.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3145};
  modelica_boolean tmp43;
  static const MMC_DEFSTRINGLIT(tmp44,74,"Variable violating min constraint: 0.0 <= retRes2.eta_default, has value: ");
  modelica_string tmp45;
  modelica_metatype tmpMeta46;
  static int tmp47 = 0;
  if(!tmp47)
  {
    tmp43 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* retRes2.eta_default PARAM */),0.0);
    if(!tmp43)
    {
      tmp45 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* retRes2.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta46 = stringAppend(MMC_REFSTRINGLIT(tmp44),tmp45);
      {
        const char* assert_cond = "(retRes2.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/BaseClasses/PartialResistance.mo",33,3,35,77,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta46));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/BaseClasses/PartialResistance.mo",33,3,35,77,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta46));
        }
      }
      tmp47 = 1;
    }
  }
  threadData->lastEquationSolved = 3145;
}

/*
equation index: 3146
type: ALGORITHM

  assert(retRes2.sta_default.X[2] >= 0.0 and retRes2.sta_default.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= retRes2.sta_default.X[2] <= 1.0, has value: " + String(retRes2.sta_default.X[2], "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3146};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  static const MMC_DEFSTRINGLIT(tmp50,90,"Variable violating min/max constraint: 0.0 <= retRes2.sta_default.X[2] <= 1.0, has value: ");
  modelica_string tmp51;
  modelica_metatype tmpMeta52;
  static int tmp53 = 0;
  if(!tmp53)
  {
    tmp48 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* retRes2.sta_default.X[2] PARAM */),0.0);
    tmp49 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* retRes2.sta_default.X[2] PARAM */),1.0);
    if(!(tmp48 && tmp49))
    {
      tmp51 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* retRes2.sta_default.X[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta52 = stringAppend(MMC_REFSTRINGLIT(tmp50),tmp51);
      {
        const char* assert_cond = "(retRes2.sta_default.X[2] >= 0.0 and retRes2.sta_default.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Media/package.mo",5133,7,5134,64,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta52));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Media/package.mo",5133,7,5134,64,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta52));
        }
      }
      tmp53 = 1;
    }
  }
  threadData->lastEquationSolved = 3146;
}

/*
equation index: 3147
type: ALGORITHM

  assert(retRes2.sta_default.X[1] >= 0.0 and retRes2.sta_default.X[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= retRes2.sta_default.X[1] <= 1.0, has value: " + String(retRes2.sta_default.X[1], "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3147};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  static const MMC_DEFSTRINGLIT(tmp56,90,"Variable violating min/max constraint: 0.0 <= retRes2.sta_default.X[1] <= 1.0, has value: ");
  modelica_string tmp57;
  modelica_metatype tmpMeta58;
  static int tmp59 = 0;
  if(!tmp59)
  {
    tmp54 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* retRes2.sta_default.X[1] PARAM */),0.0);
    tmp55 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* retRes2.sta_default.X[1] PARAM */),1.0);
    if(!(tmp54 && tmp55))
    {
      tmp57 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* retRes2.sta_default.X[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta58 = stringAppend(MMC_REFSTRINGLIT(tmp56),tmp57);
      {
        const char* assert_cond = "(retRes2.sta_default.X[1] >= 0.0 and retRes2.sta_default.X[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Media/package.mo",5133,7,5134,64,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta58));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Media/package.mo",5133,7,5134,64,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta58));
        }
      }
      tmp59 = 1;
    }
  }
  threadData->lastEquationSolved = 3147;
}

/*
equation index: 3148
type: ALGORITHM

  assert(retRes2.sta_default.p >= 0.0 and retRes2.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= retRes2.sta_default.p <= 1e8, has value: " + String(retRes2.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3148};
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  static const MMC_DEFSTRINGLIT(tmp62,87,"Variable violating min/max constraint: 0.0 <= retRes2.sta_default.p <= 1e8, has value: ");
  modelica_string tmp63;
  modelica_metatype tmpMeta64;
  static int tmp65 = 0;
  if(!tmp65)
  {
    tmp60 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* retRes2.sta_default.p PARAM */),0.0);
    tmp61 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* retRes2.sta_default.p PARAM */),1e8);
    if(!(tmp60 && tmp61))
    {
      tmp63 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* retRes2.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta64 = stringAppend(MMC_REFSTRINGLIT(tmp62),tmp63);
      {
        const char* assert_cond = "(retRes2.sta_default.p >= 0.0 and retRes2.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Media/package.mo",5131,7,5131,55,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta64));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Media/package.mo",5131,7,5131,55,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta64));
        }
      }
      tmp65 = 1;
    }
  }
  threadData->lastEquationSolved = 3148;
}

/*
equation index: 3149
type: ALGORITHM

  assert(retRes2.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= retRes2.m_flow_turbulent, has value: " + String(retRes2.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3149};
  modelica_boolean tmp66;
  static const MMC_DEFSTRINGLIT(tmp67,79,"Variable violating min constraint: 0.0 <= retRes2.m_flow_turbulent, has value: ");
  modelica_string tmp68;
  modelica_metatype tmpMeta69;
  static int tmp70 = 0;
  if(!tmp70)
  {
    tmp66 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* retRes2.m_flow_turbulent PARAM */),0.0);
    if(!tmp66)
    {
      tmp68 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* retRes2.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta69 = stringAppend(MMC_REFSTRINGLIT(tmp67),tmp68);
      {
        const char* assert_cond = "(retRes2.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/BaseClasses/PartialResistance.mo",27,3,28,53,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta69));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/BaseClasses/PartialResistance.mo",27,3,28,53,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta69));
        }
      }
      tmp70 = 1;
    }
  }
  threadData->lastEquationSolved = 3149;
}

/*
equation index: 3150
type: ALGORITHM

  assert(retRes2.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= retRes2.m_flow_small, has value: " + String(retRes2.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3150};
  modelica_boolean tmp71;
  static const MMC_DEFSTRINGLIT(tmp72,75,"Variable violating min constraint: 0.0 <= retRes2.m_flow_small, has value: ");
  modelica_string tmp73;
  modelica_metatype tmpMeta74;
  static int tmp75 = 0;
  if(!tmp75)
  {
    tmp71 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* retRes2.m_flow_small PARAM */),0.0);
    if(!tmp71)
    {
      tmp73 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* retRes2.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta74 = stringAppend(MMC_REFSTRINGLIT(tmp72),tmp73);
      {
        const char* assert_cond = "(retRes2.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta74));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta74));
        }
      }
      tmp75 = 1;
    }
  }
  threadData->lastEquationSolved = 3150;
}

/*
equation index: 3151
type: ALGORITHM

  assert(retRes1.deltaM >= 1e-6, "Variable violating min constraint: 1e-6 <= retRes1.deltaM, has value: " + String(retRes1.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3151};
  modelica_boolean tmp76;
  static const MMC_DEFSTRINGLIT(tmp77,70,"Variable violating min constraint: 1e-6 <= retRes1.deltaM, has value: ");
  modelica_string tmp78;
  modelica_metatype tmpMeta79;
  static int tmp80 = 0;
  if(!tmp80)
  {
    tmp76 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[18]] /* retRes1.deltaM PARAM */),1e-6);
    if(!tmp76)
    {
      tmp78 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[18]] /* retRes1.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta79 = stringAppend(MMC_REFSTRINGLIT(tmp77),tmp78);
      {
        const char* assert_cond = "(retRes1.deltaM >= 1e-6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta79));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta79));
        }
      }
      tmp80 = 1;
    }
  }
  threadData->lastEquationSolved = 3151;
}

/*
equation index: 3152
type: ALGORITHM

  assert(retRes1.sta_default.T >= 1.0 and retRes1.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= retRes1.sta_default.T <= 1e4, has value: " + String(retRes1.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3152};
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  static const MMC_DEFSTRINGLIT(tmp83,87,"Variable violating min/max constraint: 1.0 <= retRes1.sta_default.T <= 1e4, has value: ");
  modelica_string tmp84;
  modelica_metatype tmpMeta85;
  static int tmp86 = 0;
  if(!tmp86)
  {
    tmp81 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* retRes1.sta_default.T PARAM */),1.0);
    tmp82 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* retRes1.sta_default.T PARAM */),1e4);
    if(!(tmp81 && tmp82))
    {
      tmp84 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* retRes1.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta85 = stringAppend(MMC_REFSTRINGLIT(tmp83),tmp84);
      {
        const char* assert_cond = "(retRes1.sta_default.T >= 1.0 and retRes1.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Media/package.mo",5132,7,5132,44,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta85));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Media/package.mo",5132,7,5132,44,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta85));
        }
      }
      tmp86 = 1;
    }
  }
  threadData->lastEquationSolved = 3152;
}

/*
equation index: 3153
type: ALGORITHM

  assert(retRes1.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= retRes1.eta_default, has value: " + String(retRes1.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3153};
  modelica_boolean tmp87;
  static const MMC_DEFSTRINGLIT(tmp88,74,"Variable violating min constraint: 0.0 <= retRes1.eta_default, has value: ");
  modelica_string tmp89;
  modelica_metatype tmpMeta90;
  static int tmp91 = 0;
  if(!tmp91)
  {
    tmp87 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* retRes1.eta_default PARAM */),0.0);
    if(!tmp87)
    {
      tmp89 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* retRes1.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta90 = stringAppend(MMC_REFSTRINGLIT(tmp88),tmp89);
      {
        const char* assert_cond = "(retRes1.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/BaseClasses/PartialResistance.mo",33,3,35,77,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta90));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/BaseClasses/PartialResistance.mo",33,3,35,77,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta90));
        }
      }
      tmp91 = 1;
    }
  }
  threadData->lastEquationSolved = 3153;
}

/*
equation index: 3154
type: ALGORITHM

  assert(retRes1.sta_default.X[2] >= 0.0 and retRes1.sta_default.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= retRes1.sta_default.X[2] <= 1.0, has value: " + String(retRes1.sta_default.X[2], "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3154};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  static const MMC_DEFSTRINGLIT(tmp94,90,"Variable violating min/max constraint: 0.0 <= retRes1.sta_default.X[2] <= 1.0, has value: ");
  modelica_string tmp95;
  modelica_metatype tmpMeta96;
  static int tmp97 = 0;
  if(!tmp97)
  {
    tmp92 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* retRes1.sta_default.X[2] PARAM */),0.0);
    tmp93 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* retRes1.sta_default.X[2] PARAM */),1.0);
    if(!(tmp92 && tmp93))
    {
      tmp95 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* retRes1.sta_default.X[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta96 = stringAppend(MMC_REFSTRINGLIT(tmp94),tmp95);
      {
        const char* assert_cond = "(retRes1.sta_default.X[2] >= 0.0 and retRes1.sta_default.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Media/package.mo",5133,7,5134,64,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta96));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Media/package.mo",5133,7,5134,64,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta96));
        }
      }
      tmp97 = 1;
    }
  }
  threadData->lastEquationSolved = 3154;
}

/*
equation index: 3155
type: ALGORITHM

  assert(retRes1.sta_default.X[1] >= 0.0 and retRes1.sta_default.X[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= retRes1.sta_default.X[1] <= 1.0, has value: " + String(retRes1.sta_default.X[1], "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3155};
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  static const MMC_DEFSTRINGLIT(tmp100,90,"Variable violating min/max constraint: 0.0 <= retRes1.sta_default.X[1] <= 1.0, has value: ");
  modelica_string tmp101;
  modelica_metatype tmpMeta102;
  static int tmp103 = 0;
  if(!tmp103)
  {
    tmp98 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* retRes1.sta_default.X[1] PARAM */),0.0);
    tmp99 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* retRes1.sta_default.X[1] PARAM */),1.0);
    if(!(tmp98 && tmp99))
    {
      tmp101 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* retRes1.sta_default.X[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta102 = stringAppend(MMC_REFSTRINGLIT(tmp100),tmp101);
      {
        const char* assert_cond = "(retRes1.sta_default.X[1] >= 0.0 and retRes1.sta_default.X[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Media/package.mo",5133,7,5134,64,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta102));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Media/package.mo",5133,7,5134,64,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta102));
        }
      }
      tmp103 = 1;
    }
  }
  threadData->lastEquationSolved = 3155;
}

/*
equation index: 3156
type: ALGORITHM

  assert(retRes1.sta_default.p >= 0.0 and retRes1.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= retRes1.sta_default.p <= 1e8, has value: " + String(retRes1.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3156};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  static const MMC_DEFSTRINGLIT(tmp106,87,"Variable violating min/max constraint: 0.0 <= retRes1.sta_default.p <= 1e8, has value: ");
  modelica_string tmp107;
  modelica_metatype tmpMeta108;
  static int tmp109 = 0;
  if(!tmp109)
  {
    tmp104 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[30]] /* retRes1.sta_default.p PARAM */),0.0);
    tmp105 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[30]] /* retRes1.sta_default.p PARAM */),1e8);
    if(!(tmp104 && tmp105))
    {
      tmp107 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[30]] /* retRes1.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta108 = stringAppend(MMC_REFSTRINGLIT(tmp106),tmp107);
      {
        const char* assert_cond = "(retRes1.sta_default.p >= 0.0 and retRes1.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Media/package.mo",5131,7,5131,55,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta108));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Media/package.mo",5131,7,5131,55,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta108));
        }
      }
      tmp109 = 1;
    }
  }
  threadData->lastEquationSolved = 3156;
}

/*
equation index: 3157
type: ALGORITHM

  assert(retRes1.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= retRes1.m_flow_turbulent, has value: " + String(retRes1.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3157};
  modelica_boolean tmp110;
  static const MMC_DEFSTRINGLIT(tmp111,79,"Variable violating min constraint: 0.0 <= retRes1.m_flow_turbulent, has value: ");
  modelica_string tmp112;
  modelica_metatype tmpMeta113;
  static int tmp114 = 0;
  if(!tmp114)
  {
    tmp110 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* retRes1.m_flow_turbulent PARAM */),0.0);
    if(!tmp110)
    {
      tmp112 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* retRes1.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta113 = stringAppend(MMC_REFSTRINGLIT(tmp111),tmp112);
      {
        const char* assert_cond = "(retRes1.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/BaseClasses/PartialResistance.mo",27,3,28,53,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta113));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/BaseClasses/PartialResistance.mo",27,3,28,53,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta113));
        }
      }
      tmp114 = 1;
    }
  }
  threadData->lastEquationSolved = 3157;
}

/*
equation index: 3158
type: ALGORITHM

  assert(retRes1.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= retRes1.m_flow_small, has value: " + String(retRes1.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3158};
  modelica_boolean tmp115;
  static const MMC_DEFSTRINGLIT(tmp116,75,"Variable violating min constraint: 0.0 <= retRes1.m_flow_small, has value: ");
  modelica_string tmp117;
  modelica_metatype tmpMeta118;
  static int tmp119 = 0;
  if(!tmp119)
  {
    tmp115 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* retRes1.m_flow_small PARAM */),0.0);
    if(!tmp115)
    {
      tmp117 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* retRes1.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta118 = stringAppend(MMC_REFSTRINGLIT(tmp116),tmp117);
      {
        const char* assert_cond = "(retRes1.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta118));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta118));
        }
      }
      tmp119 = 1;
    }
  }
  threadData->lastEquationSolved = 3158;
}

/*
equation index: 3159
type: ALGORITHM

  assert(sup2.T >= 1.0 and sup2.T <= 1e4, "Variable violating min/max constraint: 1.0 <= sup2.T <= 1e4, has value: " + String(sup2.T, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3159};
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  static const MMC_DEFSTRINGLIT(tmp122,72,"Variable violating min/max constraint: 1.0 <= sup2.T <= 1e4, has value: ");
  modelica_string tmp123;
  modelica_metatype tmpMeta124;
  static int tmp125 = 0;
  if(!tmp125)
  {
    tmp120 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1318]] /* sup2.T PARAM */),1.0);
    tmp121 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1318]] /* sup2.T PARAM */),1e4);
    if(!(tmp120 && tmp121))
    {
      tmp123 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1318]] /* sup2.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta124 = stringAppend(MMC_REFSTRINGLIT(tmp122),tmp123);
      {
        const char* assert_cond = "(sup2.T >= 1.0 and sup2.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/MassFlowSource_T.mo",15,3,17,68,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta124));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/MassFlowSource_T.mo",15,3,17,68,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta124));
        }
      }
      tmp125 = 1;
    }
  }
  threadData->lastEquationSolved = 3159;
}

/*
equation index: 3160
type: ALGORITHM

  assert(sup2.X[2] >= 0.0 and sup2.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= sup2.X[2] <= 1.0, has value: " + String(sup2.X[2], "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3160};
  modelica_boolean tmp126;
  modelica_boolean tmp127;
  static const MMC_DEFSTRINGLIT(tmp128,75,"Variable violating min/max constraint: 0.0 <= sup2.X[2] <= 1.0, has value: ");
  modelica_string tmp129;
  modelica_metatype tmpMeta130;
  static int tmp131 = 0;
  if(!tmp131)
  {
    tmp126 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1320]] /* sup2.X[2] PARAM */),0.0);
    tmp127 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1320]] /* sup2.X[2] PARAM */),1.0);
    if(!(tmp126 && tmp127))
    {
      tmp129 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1320]] /* sup2.X[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta130 = stringAppend(MMC_REFSTRINGLIT(tmp128),tmp129);
      {
        const char* assert_cond = "(sup2.X[2] >= 0.0 and sup2.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta130));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta130));
        }
      }
      tmp131 = 1;
    }
  }
  threadData->lastEquationSolved = 3160;
}

/*
equation index: 3161
type: ALGORITHM

  assert(sup2.X[1] >= 0.0 and sup2.X[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= sup2.X[1] <= 1.0, has value: " + String(sup2.X[1], "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3161};
  modelica_boolean tmp132;
  modelica_boolean tmp133;
  static const MMC_DEFSTRINGLIT(tmp134,75,"Variable violating min/max constraint: 0.0 <= sup2.X[1] <= 1.0, has value: ");
  modelica_string tmp135;
  modelica_metatype tmpMeta136;
  static int tmp137 = 0;
  if(!tmp137)
  {
    tmp132 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* sup2.X[1] PARAM */),0.0);
    tmp133 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* sup2.X[1] PARAM */),1.0);
    if(!(tmp132 && tmp133))
    {
      tmp135 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* sup2.X[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta136 = stringAppend(MMC_REFSTRINGLIT(tmp134),tmp135);
      {
        const char* assert_cond = "(sup2.X[1] >= 0.0 and sup2.X[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta136));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta136));
        }
      }
      tmp137 = 1;
    }
  }
  threadData->lastEquationSolved = 3161;
}

/*
equation index: 3162
type: ALGORITHM

  assert(sup2.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and sup2.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= sup2.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(sup2.flowDirection, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3162};
  modelica_boolean tmp138;
  modelica_boolean tmp139;
  static const MMC_DEFSTRINGLIT(tmp140,177,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= sup2.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp141;
  modelica_metatype tmpMeta142;
  static int tmp143 = 0;
  if(!tmp143)
  {
    tmp138 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[323]] /* sup2.flowDirection PARAM */),1);
    tmp139 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[323]] /* sup2.flowDirection PARAM */),3);
    if(!(tmp138 && tmp139))
    {
      tmp141 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[323]] /* sup2.flowDirection PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta142 = stringAppend(MMC_REFSTRINGLIT(tmp140),tmp141);
      {
        const char* assert_cond = "(sup2.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and sup2.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource.mo",31,3,32,80,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta142));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource.mo",31,3,32,80,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta142));
        }
      }
      tmp143 = 1;
    }
  }
  threadData->lastEquationSolved = 3162;
}

/*
equation index: 3163
type: ALGORITHM

  assert(sup1.T >= 1.0 and sup1.T <= 1e4, "Variable violating min/max constraint: 1.0 <= sup1.T <= 1e4, has value: " + String(sup1.T, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3163};
  modelica_boolean tmp144;
  modelica_boolean tmp145;
  static const MMC_DEFSTRINGLIT(tmp146,72,"Variable violating min/max constraint: 1.0 <= sup1.T <= 1e4, has value: ");
  modelica_string tmp147;
  modelica_metatype tmpMeta148;
  static int tmp149 = 0;
  if(!tmp149)
  {
    tmp144 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* sup1.T PARAM */),1.0);
    tmp145 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* sup1.T PARAM */),1e4);
    if(!(tmp144 && tmp145))
    {
      tmp147 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* sup1.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta148 = stringAppend(MMC_REFSTRINGLIT(tmp146),tmp147);
      {
        const char* assert_cond = "(sup1.T >= 1.0 and sup1.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/MassFlowSource_T.mo",15,3,17,68,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta148));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/MassFlowSource_T.mo",15,3,17,68,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta148));
        }
      }
      tmp149 = 1;
    }
  }
  threadData->lastEquationSolved = 3163;
}

/*
equation index: 3164
type: ALGORITHM

  assert(sup1.X[2] >= 0.0 and sup1.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= sup1.X[2] <= 1.0, has value: " + String(sup1.X[2], "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3164};
  modelica_boolean tmp150;
  modelica_boolean tmp151;
  static const MMC_DEFSTRINGLIT(tmp152,75,"Variable violating min/max constraint: 0.0 <= sup1.X[2] <= 1.0, has value: ");
  modelica_string tmp153;
  modelica_metatype tmpMeta154;
  static int tmp155 = 0;
  if(!tmp155)
  {
    tmp150 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* sup1.X[2] PARAM */),0.0);
    tmp151 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* sup1.X[2] PARAM */),1.0);
    if(!(tmp150 && tmp151))
    {
      tmp153 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* sup1.X[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta154 = stringAppend(MMC_REFSTRINGLIT(tmp152),tmp153);
      {
        const char* assert_cond = "(sup1.X[2] >= 0.0 and sup1.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta154));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta154));
        }
      }
      tmp155 = 1;
    }
  }
  threadData->lastEquationSolved = 3164;
}

/*
equation index: 3165
type: ALGORITHM

  assert(sup1.X[1] >= 0.0 and sup1.X[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= sup1.X[1] <= 1.0, has value: " + String(sup1.X[1], "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3165};
  modelica_boolean tmp156;
  modelica_boolean tmp157;
  static const MMC_DEFSTRINGLIT(tmp158,75,"Variable violating min/max constraint: 0.0 <= sup1.X[1] <= 1.0, has value: ");
  modelica_string tmp159;
  modelica_metatype tmpMeta160;
  static int tmp161 = 0;
  if(!tmp161)
  {
    tmp156 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* sup1.X[1] PARAM */),0.0);
    tmp157 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* sup1.X[1] PARAM */),1.0);
    if(!(tmp156 && tmp157))
    {
      tmp159 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* sup1.X[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta160 = stringAppend(MMC_REFSTRINGLIT(tmp158),tmp159);
      {
        const char* assert_cond = "(sup1.X[1] >= 0.0 and sup1.X[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta160));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta160));
        }
      }
      tmp161 = 1;
    }
  }
  threadData->lastEquationSolved = 3165;
}

/*
equation index: 3166
type: ALGORITHM

  assert(sup1.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and sup1.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= sup1.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(sup1.flowDirection, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3166};
  modelica_boolean tmp162;
  modelica_boolean tmp163;
  static const MMC_DEFSTRINGLIT(tmp164,177,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= sup1.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp165;
  modelica_metatype tmpMeta166;
  static int tmp167 = 0;
  if(!tmp167)
  {
    tmp162 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[321]] /* sup1.flowDirection PARAM */),1);
    tmp163 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[321]] /* sup1.flowDirection PARAM */),3);
    if(!(tmp162 && tmp163))
    {
      tmp165 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[321]] /* sup1.flowDirection PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta166 = stringAppend(MMC_REFSTRINGLIT(tmp164),tmp165);
      {
        const char* assert_cond = "(sup1.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and sup1.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource.mo",31,3,32,80,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta166));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource.mo",31,3,32,80,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta166));
        }
      }
      tmp167 = 1;
    }
  }
  threadData->lastEquationSolved = 3166;
}

/*
equation index: 3167
type: ALGORITHM

  assert(weaDat.cheTemBlaSky.TMax >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.cheTemBlaSky.TMax, has value: " + String(weaDat.cheTemBlaSky.TMax, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3167};
  modelica_boolean tmp168;
  static const MMC_DEFSTRINGLIT(tmp169,79,"Variable violating min constraint: 0.0 <= weaDat.cheTemBlaSky.TMax, has value: ");
  modelica_string tmp170;
  modelica_metatype tmpMeta171;
  static int tmp172 = 0;
  if(!tmp172)
  {
    tmp168 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1335]] /* weaDat.cheTemBlaSky.TMax PARAM */),0.0);
    if(!tmp168)
    {
      tmp170 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1335]] /* weaDat.cheTemBlaSky.TMax PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta171 = stringAppend(MMC_REFSTRINGLIT(tmp169),tmp170);
      {
        const char* assert_cond = "(weaDat.cheTemBlaSky.TMax >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckBlackBodySkyTemperature.mo",8,3,9,34,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta171));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckBlackBodySkyTemperature.mo",8,3,9,34,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta171));
        }
      }
      tmp172 = 1;
    }
  }
  threadData->lastEquationSolved = 3167;
}

/*
equation index: 3168
type: ALGORITHM

  assert(weaDat.cheTemBlaSky.TMin >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.cheTemBlaSky.TMin, has value: " + String(weaDat.cheTemBlaSky.TMin, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3168};
  modelica_boolean tmp173;
  static const MMC_DEFSTRINGLIT(tmp174,79,"Variable violating min constraint: 0.0 <= weaDat.cheTemBlaSky.TMin, has value: ");
  modelica_string tmp175;
  modelica_metatype tmpMeta176;
  static int tmp177 = 0;
  if(!tmp177)
  {
    tmp173 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1336]] /* weaDat.cheTemBlaSky.TMin PARAM */),0.0);
    if(!tmp173)
    {
      tmp175 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1336]] /* weaDat.cheTemBlaSky.TMin PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta176 = stringAppend(MMC_REFSTRINGLIT(tmp174),tmp175);
      {
        const char* assert_cond = "(weaDat.cheTemBlaSky.TMin >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckBlackBodySkyTemperature.mo",6,3,7,34,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta176));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckBlackBodySkyTemperature.mo",6,3,7,34,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta176));
        }
      }
      tmp177 = 1;
    }
  }
  threadData->lastEquationSolved = 3168;
}

/*
equation index: 3169
type: ALGORITHM

  assert(weaDat.datRea30Min.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and weaDat.datRea30Min.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, "Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= weaDat.datRea30Min.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: " + String(weaDat.datRea30Min.extrapolation, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3169};
  modelica_boolean tmp178;
  modelica_boolean tmp179;
  static const MMC_DEFSTRINGLIT(tmp180,192,"Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= weaDat.datRea30Min.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: ");
  modelica_string tmp181;
  modelica_metatype tmpMeta182;
  static int tmp183 = 0;
  if(!tmp183)
  {
    tmp178 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[370]] /* weaDat.datRea30Min.extrapolation PARAM */),1);
    tmp179 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[370]] /* weaDat.datRea30Min.extrapolation PARAM */),4);
    if(!(tmp178 && tmp179))
    {
      tmp181 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[370]] /* weaDat.datRea30Min.extrapolation PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta182 = stringAppend(MMC_REFSTRINGLIT(tmp180),tmp181);
      {
        const char* assert_cond = "(weaDat.datRea30Min.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and weaDat.datRea30Min.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Tables.mo",39,5,41,61,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta182));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Tables.mo",39,5,41,61,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta182));
        }
      }
      tmp183 = 1;
    }
  }
  threadData->lastEquationSolved = 3169;
}

/*
equation index: 3170
type: ALGORITHM

  assert(weaDat.datRea30Min.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and weaDat.datRea30Min.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, "Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= weaDat.datRea30Min.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: " + String(weaDat.datRea30Min.smoothness, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3170};
  modelica_boolean tmp184;
  modelica_boolean tmp185;
  static const MMC_DEFSTRINGLIT(tmp186,197,"Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= weaDat.datRea30Min.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: ");
  modelica_string tmp187;
  modelica_metatype tmpMeta188;
  static int tmp189 = 0;
  if(!tmp189)
  {
    tmp184 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[373]] /* weaDat.datRea30Min.smoothness PARAM */),1);
    tmp185 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[373]] /* weaDat.datRea30Min.smoothness PARAM */),6);
    if(!(tmp184 && tmp185))
    {
      tmp187 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[373]] /* weaDat.datRea30Min.smoothness PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta188 = stringAppend(MMC_REFSTRINGLIT(tmp186),tmp187);
      {
        const char* assert_cond = "(weaDat.datRea30Min.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and weaDat.datRea30Min.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Tables.mo",36,5,38,61,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta188));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Tables.mo",36,5,38,61,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta188));
        }
      }
      tmp189 = 1;
    }
  }
  threadData->lastEquationSolved = 3170;
}

/*
equation index: 3171
type: ALGORITHM

  assert(weaDat.TBlaSkyCom.calTSky >= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation and weaDat.TBlaSkyCom.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation <= weaDat.TBlaSkyCom.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover, has value: " + String(weaDat.TBlaSkyCom.calTSky, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3171};
  modelica_boolean tmp190;
  modelica_boolean tmp191;
  static const MMC_DEFSTRINGLIT(tmp192,249,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation <= weaDat.TBlaSkyCom.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover, has value: ");
  modelica_string tmp193;
  modelica_metatype tmpMeta194;
  static int tmp195 = 0;
  if(!tmp195)
  {
    tmp190 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[327]] /* weaDat.TBlaSkyCom.calTSky PARAM */),1);
    tmp191 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[327]] /* weaDat.TBlaSkyCom.calTSky PARAM */),2);
    if(!(tmp190 && tmp191))
    {
      tmp193 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[327]] /* weaDat.TBlaSkyCom.calTSky PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta194 = stringAppend(MMC_REFSTRINGLIT(tmp192),tmp193);
      {
        const char* assert_cond = "(weaDat.TBlaSkyCom.calTSky >= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation and weaDat.TBlaSkyCom.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/SkyTemperature/BlackBody.mo",5,3,9,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta194));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/SkyTemperature/BlackBody.mo",5,3,9,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta194));
        }
      }
      tmp195 = 1;
    }
  }
  threadData->lastEquationSolved = 3171;
}

/*
equation index: 3172
type: ALGORITHM

  assert(weaDat.cheTemDewPoi.TMax >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.cheTemDewPoi.TMax, has value: " + String(weaDat.cheTemDewPoi.TMax, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3172};
  modelica_boolean tmp196;
  static const MMC_DEFSTRINGLIT(tmp197,79,"Variable violating min constraint: 0.0 <= weaDat.cheTemDewPoi.TMax, has value: ");
  modelica_string tmp198;
  modelica_metatype tmpMeta199;
  static int tmp200 = 0;
  if(!tmp200)
  {
    tmp196 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1337]] /* weaDat.cheTemDewPoi.TMax PARAM */),0.0);
    if(!tmp196)
    {
      tmp198 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1337]] /* weaDat.cheTemDewPoi.TMax PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta199 = stringAppend(MMC_REFSTRINGLIT(tmp197),tmp198);
      {
        const char* assert_cond = "(weaDat.cheTemDewPoi.TMax >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDewPointTemperature.mo",18,3,19,34,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta199));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDewPointTemperature.mo",18,3,19,34,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta199));
        }
      }
      tmp200 = 1;
    }
  }
  threadData->lastEquationSolved = 3172;
}

/*
equation index: 3173
type: ALGORITHM

  assert(weaDat.cheTemDewPoi.TMin >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.cheTemDewPoi.TMin, has value: " + String(weaDat.cheTemDewPoi.TMin, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3173};
  modelica_boolean tmp201;
  static const MMC_DEFSTRINGLIT(tmp202,79,"Variable violating min constraint: 0.0 <= weaDat.cheTemDewPoi.TMin, has value: ");
  modelica_string tmp203;
  modelica_metatype tmpMeta204;
  static int tmp205 = 0;
  if(!tmp205)
  {
    tmp201 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1338]] /* weaDat.cheTemDewPoi.TMin PARAM */),0.0);
    if(!tmp201)
    {
      tmp203 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1338]] /* weaDat.cheTemDewPoi.TMin PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta204 = stringAppend(MMC_REFSTRINGLIT(tmp202),tmp203);
      {
        const char* assert_cond = "(weaDat.cheTemDewPoi.TMin >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDewPointTemperature.mo",16,3,17,34,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta204));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDewPointTemperature.mo",16,3,17,34,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta204));
        }
      }
      tmp205 = 1;
    }
  }
  threadData->lastEquationSolved = 3173;
}

/*
equation index: 3174
type: ALGORITHM

  assert(weaDat.cheTemDryBul.TMax >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.cheTemDryBul.TMax, has value: " + String(weaDat.cheTemDryBul.TMax, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3174};
  modelica_boolean tmp206;
  static const MMC_DEFSTRINGLIT(tmp207,79,"Variable violating min constraint: 0.0 <= weaDat.cheTemDryBul.TMax, has value: ");
  modelica_string tmp208;
  modelica_metatype tmpMeta209;
  static int tmp210 = 0;
  if(!tmp210)
  {
    tmp206 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1339]] /* weaDat.cheTemDryBul.TMax PARAM */),0.0);
    if(!tmp206)
    {
      tmp208 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1339]] /* weaDat.cheTemDryBul.TMax PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta209 = stringAppend(MMC_REFSTRINGLIT(tmp207),tmp208);
      {
        const char* assert_cond = "(weaDat.cheTemDryBul.TMax >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDryBulbTemperature.mo",18,3,19,34,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta209));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDryBulbTemperature.mo",18,3,19,34,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta209));
        }
      }
      tmp210 = 1;
    }
  }
  threadData->lastEquationSolved = 3174;
}

/*
equation index: 3175
type: ALGORITHM

  assert(weaDat.cheTemDryBul.TMin >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.cheTemDryBul.TMin, has value: " + String(weaDat.cheTemDryBul.TMin, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3175};
  modelica_boolean tmp211;
  static const MMC_DEFSTRINGLIT(tmp212,79,"Variable violating min constraint: 0.0 <= weaDat.cheTemDryBul.TMin, has value: ");
  modelica_string tmp213;
  modelica_metatype tmpMeta214;
  static int tmp215 = 0;
  if(!tmp215)
  {
    tmp211 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1340]] /* weaDat.cheTemDryBul.TMin PARAM */),0.0);
    if(!tmp211)
    {
      tmp213 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1340]] /* weaDat.cheTemDryBul.TMin PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta214 = stringAppend(MMC_REFSTRINGLIT(tmp212),tmp213);
      {
        const char* assert_cond = "(weaDat.cheTemDryBul.TMin >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDryBulbTemperature.mo",16,3,17,34,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta214));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDryBulbTemperature.mo",16,3,17,34,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta214));
        }
      }
      tmp215 = 1;
    }
  }
  threadData->lastEquationSolved = 3175;
}

/*
equation index: 3176
type: ALGORITHM

  assert(weaDat.souSelRad.datSou >= Buildings.BoundaryConditions.Types.RadiationDataSource.File and weaDat.souSelRad.datSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.RadiationDataSource.File <= weaDat.souSelRad.datSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor, has value: " + String(weaDat.souSelRad.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3176};
  modelica_boolean tmp216;
  modelica_boolean tmp217;
  static const MMC_DEFSTRINGLIT(tmp218,218,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.RadiationDataSource.File <= weaDat.souSelRad.datSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor, has value: ");
  modelica_string tmp219;
  modelica_metatype tmpMeta220;
  static int tmp221 = 0;
  if(!tmp221)
  {
    tmp216 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[381]] /* weaDat.souSelRad.datSou PARAM */),1);
    tmp217 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[381]] /* weaDat.souSelRad.datSou PARAM */),4);
    if(!(tmp216 && tmp217))
    {
      tmp219 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[381]] /* weaDat.souSelRad.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta220 = stringAppend(MMC_REFSTRINGLIT(tmp218),tmp219);
      {
        const char* assert_cond = "(weaDat.souSelRad.datSou >= Buildings.BoundaryConditions.Types.RadiationDataSource.File and weaDat.souSelRad.datSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelectorRadiation.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta220));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelectorRadiation.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta220));
        }
      }
      tmp221 = 1;
    }
  }
  threadData->lastEquationSolved = 3176;
}

/*
equation index: 3177
type: ALGORITHM

  assert(weaDat.horInfRadSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.horInfRadSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.horInfRadSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.horInfRadSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3177};
  modelica_boolean tmp222;
  modelica_boolean tmp223;
  static const MMC_DEFSTRINGLIT(tmp224,187,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.horInfRadSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp225;
  modelica_metatype tmpMeta226;
  static int tmp227 = 0;
  if(!tmp227)
  {
    tmp222 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[374]] /* weaDat.horInfRadSel.datSou PARAM */),1);
    tmp223 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[374]] /* weaDat.horInfRadSel.datSou PARAM */),3);
    if(!(tmp222 && tmp223))
    {
      tmp225 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[374]] /* weaDat.horInfRadSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta226 = stringAppend(MMC_REFSTRINGLIT(tmp224),tmp225);
      {
        const char* assert_cond = "(weaDat.horInfRadSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.horInfRadSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta226));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta226));
        }
      }
      tmp227 = 1;
    }
  }
  threadData->lastEquationSolved = 3177;
}

/*
equation index: 3178
type: ALGORITHM

  assert(weaDat.winDirSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winDirSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winDirSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.winDirSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3178};
  modelica_boolean tmp228;
  modelica_boolean tmp229;
  static const MMC_DEFSTRINGLIT(tmp230,184,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winDirSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp231;
  modelica_metatype tmpMeta232;
  static int tmp233 = 0;
  if(!tmp233)
  {
    tmp228 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[384]] /* weaDat.winDirSel.datSou PARAM */),1);
    tmp229 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[384]] /* weaDat.winDirSel.datSou PARAM */),3);
    if(!(tmp228 && tmp229))
    {
      tmp231 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[384]] /* weaDat.winDirSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta232 = stringAppend(MMC_REFSTRINGLIT(tmp230),tmp231);
      {
        const char* assert_cond = "(weaDat.winDirSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winDirSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta232));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta232));
        }
      }
      tmp233 = 1;
    }
  }
  threadData->lastEquationSolved = 3178;
}

/*
equation index: 3179
type: ALGORITHM

  assert(weaDat.winSpe >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.winSpe, has value: " + String(weaDat.winSpe, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3179};
  modelica_boolean tmp234;
  static const MMC_DEFSTRINGLIT(tmp235,68,"Variable violating min constraint: 0.0 <= weaDat.winSpe, has value: ");
  modelica_string tmp236;
  modelica_metatype tmpMeta237;
  static int tmp238 = 0;
  if(!tmp238)
  {
    tmp234 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1376]] /* weaDat.winSpe PARAM */),0.0);
    if(!tmp234)
    {
      tmp236 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1376]] /* weaDat.winSpe PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta237 = stringAppend(MMC_REFSTRINGLIT(tmp235),tmp236);
      {
        const char* assert_cond = "(weaDat.winSpe >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",97,3,99,43,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta237));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",97,3,99,43,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta237));
        }
      }
      tmp238 = 1;
    }
  }
  threadData->lastEquationSolved = 3179;
}

/*
equation index: 3180
type: ALGORITHM

  assert(weaDat.winSpeSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winSpeSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winSpeSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.winSpeSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3180};
  modelica_boolean tmp239;
  modelica_boolean tmp240;
  static const MMC_DEFSTRINGLIT(tmp241,184,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winSpeSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp242;
  modelica_metatype tmpMeta243;
  static int tmp244 = 0;
  if(!tmp244)
  {
    tmp239 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[386]] /* weaDat.winSpeSel.datSou PARAM */),1);
    tmp240 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[386]] /* weaDat.winSpeSel.datSou PARAM */),3);
    if(!(tmp239 && tmp240))
    {
      tmp242 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[386]] /* weaDat.winSpeSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta243 = stringAppend(MMC_REFSTRINGLIT(tmp241),tmp242);
      {
        const char* assert_cond = "(weaDat.winSpeSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winSpeSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta243));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta243));
        }
      }
      tmp244 = 1;
    }
  }
  threadData->lastEquationSolved = 3180;
}

/*
equation index: 3181
type: ALGORITHM

  assert(weaDat.totSkyCov >= 0.0 and weaDat.totSkyCov <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.totSkyCov <= 1.0, has value: " + String(weaDat.totSkyCov, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3181};
  modelica_boolean tmp245;
  modelica_boolean tmp246;
  static const MMC_DEFSTRINGLIT(tmp247,82,"Variable violating min/max constraint: 0.0 <= weaDat.totSkyCov <= 1.0, has value: ");
  modelica_string tmp248;
  modelica_metatype tmpMeta249;
  static int tmp250 = 0;
  if(!tmp250)
  {
    tmp245 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1372]] /* weaDat.totSkyCov PARAM */),0.0);
    tmp246 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1372]] /* weaDat.totSkyCov PARAM */),1.0);
    if(!(tmp245 && tmp246))
    {
      tmp248 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1372]] /* weaDat.totSkyCov PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta249 = stringAppend(MMC_REFSTRINGLIT(tmp247),tmp248);
      {
        const char* assert_cond = "(weaDat.totSkyCov >= 0.0 and weaDat.totSkyCov <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",188,3,193,43,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta249));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",188,3,193,43,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta249));
        }
      }
      tmp250 = 1;
    }
  }
  threadData->lastEquationSolved = 3181;
}

/*
equation index: 3182
type: ALGORITHM

  assert(weaDat.totSkyCovSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.totSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.totSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.totSkyCovSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3182};
  modelica_boolean tmp251;
  modelica_boolean tmp252;
  static const MMC_DEFSTRINGLIT(tmp253,187,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.totSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp254;
  modelica_metatype tmpMeta255;
  static int tmp256 = 0;
  if(!tmp256)
  {
    tmp251 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[382]] /* weaDat.totSkyCovSel.datSou PARAM */),1);
    tmp252 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[382]] /* weaDat.totSkyCovSel.datSou PARAM */),3);
    if(!(tmp251 && tmp252))
    {
      tmp254 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[382]] /* weaDat.totSkyCovSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta255 = stringAppend(MMC_REFSTRINGLIT(tmp253),tmp254);
      {
        const char* assert_cond = "(weaDat.totSkyCovSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.totSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta255));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta255));
        }
      }
      tmp256 = 1;
    }
  }
  threadData->lastEquationSolved = 3182;
}

/*
equation index: 3183
type: ALGORITHM

  assert(weaDat.ceiHeiSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.ceiHeiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.ceiHeiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.ceiHeiSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3183};
  modelica_boolean tmp257;
  modelica_boolean tmp258;
  static const MMC_DEFSTRINGLIT(tmp259,184,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.ceiHeiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp260;
  modelica_metatype tmpMeta261;
  static int tmp262 = 0;
  if(!tmp262)
  {
    tmp257 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[335]] /* weaDat.ceiHeiSel.datSou PARAM */),1);
    tmp258 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[335]] /* weaDat.ceiHeiSel.datSou PARAM */),3);
    if(!(tmp257 && tmp258))
    {
      tmp260 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[335]] /* weaDat.ceiHeiSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta261 = stringAppend(MMC_REFSTRINGLIT(tmp259),tmp260);
      {
        const char* assert_cond = "(weaDat.ceiHeiSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.ceiHeiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta261));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta261));
        }
      }
      tmp262 = 1;
    }
  }
  threadData->lastEquationSolved = 3183;
}

/*
equation index: 3184
type: ALGORITHM

  assert(weaDat.opaSkyCov >= 0.0 and weaDat.opaSkyCov <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.opaSkyCov <= 1.0, has value: " + String(weaDat.opaSkyCov, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3184};
  modelica_boolean tmp263;
  modelica_boolean tmp264;
  static const MMC_DEFSTRINGLIT(tmp265,82,"Variable violating min/max constraint: 0.0 <= weaDat.opaSkyCov <= 1.0, has value: ");
  modelica_string tmp266;
  modelica_metatype tmpMeta267;
  static int tmp268 = 0;
  if(!tmp268)
  {
    tmp263 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1363]] /* weaDat.opaSkyCov PARAM */),0.0);
    tmp264 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1363]] /* weaDat.opaSkyCov PARAM */),1.0);
    if(!(tmp263 && tmp264))
    {
      tmp266 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1363]] /* weaDat.opaSkyCov PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta267 = stringAppend(MMC_REFSTRINGLIT(tmp265),tmp266);
      {
        const char* assert_cond = "(weaDat.opaSkyCov >= 0.0 and weaDat.opaSkyCov <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",204,3,209,43,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta267));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",204,3,209,43,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta267));
        }
      }
      tmp268 = 1;
    }
  }
  threadData->lastEquationSolved = 3184;
}

/*
equation index: 3185
type: ALGORITHM

  assert(weaDat.opaSkyCovSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.opaSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.opaSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.opaSkyCovSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3185};
  modelica_boolean tmp269;
  modelica_boolean tmp270;
  static const MMC_DEFSTRINGLIT(tmp271,187,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.opaSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp272;
  modelica_metatype tmpMeta273;
  static int tmp274 = 0;
  if(!tmp274)
  {
    tmp269 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[375]] /* weaDat.opaSkyCovSel.datSou PARAM */),1);
    tmp270 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[375]] /* weaDat.opaSkyCovSel.datSou PARAM */),3);
    if(!(tmp269 && tmp270))
    {
      tmp272 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[375]] /* weaDat.opaSkyCovSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta273 = stringAppend(MMC_REFSTRINGLIT(tmp271),tmp272);
      {
        const char* assert_cond = "(weaDat.opaSkyCovSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.opaSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta273));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta273));
        }
      }
      tmp274 = 1;
    }
  }
  threadData->lastEquationSolved = 3185;
}

/*
equation index: 3186
type: ALGORITHM

  assert(weaDat.relHum >= 0.0 and weaDat.relHum <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.relHum <= 1.0, has value: " + String(weaDat.relHum, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3186};
  modelica_boolean tmp275;
  modelica_boolean tmp276;
  static const MMC_DEFSTRINGLIT(tmp277,79,"Variable violating min/max constraint: 0.0 <= weaDat.relHum <= 1.0, has value: ");
  modelica_string tmp278;
  modelica_metatype tmpMeta279;
  static int tmp280 = 0;
  if(!tmp280)
  {
    tmp275 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1367]] /* weaDat.relHum PARAM */),0.0);
    tmp276 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1367]] /* weaDat.relHum PARAM */),1.0);
    if(!(tmp275 && tmp276))
    {
      tmp278 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1367]] /* weaDat.relHum PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta279 = stringAppend(MMC_REFSTRINGLIT(tmp277),tmp278);
      {
        const char* assert_cond = "(weaDat.relHum >= 0.0 and weaDat.relHum <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",81,3,85,43,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta279));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",81,3,85,43,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta279));
        }
      }
      tmp280 = 1;
    }
  }
  threadData->lastEquationSolved = 3186;
}

/*
equation index: 3187
type: ALGORITHM

  assert(weaDat.relHumSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.relHumSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.relHumSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.relHumSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3187};
  modelica_boolean tmp281;
  modelica_boolean tmp282;
  static const MMC_DEFSTRINGLIT(tmp283,184,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.relHumSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp284;
  modelica_metatype tmpMeta285;
  static int tmp286 = 0;
  if(!tmp286)
  {
    tmp281 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[379]] /* weaDat.relHumSel.datSou PARAM */),1);
    tmp282 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[379]] /* weaDat.relHumSel.datSou PARAM */),3);
    if(!(tmp281 && tmp282))
    {
      tmp284 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[379]] /* weaDat.relHumSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta285 = stringAppend(MMC_REFSTRINGLIT(tmp283),tmp284);
      {
        const char* assert_cond = "(weaDat.relHumSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.relHumSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta285));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta285));
        }
      }
      tmp286 = 1;
    }
  }
  threadData->lastEquationSolved = 3187;
}

/*
equation index: 3188
type: ALGORITHM

  assert(weaDat.TBlaSky >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.TBlaSky, has value: " + String(weaDat.TBlaSky, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3188};
  modelica_boolean tmp287;
  static const MMC_DEFSTRINGLIT(tmp288,69,"Variable violating min constraint: 0.0 <= weaDat.TBlaSky, has value: ");
  modelica_string tmp289;
  modelica_metatype tmpMeta290;
  static int tmp291 = 0;
  if(!tmp291)
  {
    tmp287 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1323]] /* weaDat.TBlaSky PARAM */),0.0);
    if(!tmp287)
    {
      tmp289 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1323]] /* weaDat.TBlaSky PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta290 = stringAppend(MMC_REFSTRINGLIT(tmp288),tmp289);
      {
        const char* assert_cond = "(weaDat.TBlaSky >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",66,3,68,43,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta290));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",66,3,68,43,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta290));
        }
      }
      tmp291 = 1;
    }
  }
  threadData->lastEquationSolved = 3188;
}

/*
equation index: 3189
type: ALGORITHM

  assert(weaDat.TBlaSkySel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TBlaSkySel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TBlaSkySel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.TBlaSkySel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3189};
  modelica_boolean tmp292;
  modelica_boolean tmp293;
  static const MMC_DEFSTRINGLIT(tmp294,185,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TBlaSkySel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp295;
  modelica_metatype tmpMeta296;
  static int tmp297 = 0;
  if(!tmp297)
  {
    tmp292 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[328]] /* weaDat.TBlaSkySel.datSou PARAM */),1);
    tmp293 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[328]] /* weaDat.TBlaSkySel.datSou PARAM */),3);
    if(!(tmp292 && tmp293))
    {
      tmp295 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[328]] /* weaDat.TBlaSkySel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta296 = stringAppend(MMC_REFSTRINGLIT(tmp294),tmp295);
      {
        const char* assert_cond = "(weaDat.TBlaSkySel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TBlaSkySel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta296));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta296));
        }
      }
      tmp297 = 1;
    }
  }
  threadData->lastEquationSolved = 3189;
}

/*
equation index: 3190
type: ALGORITHM

  assert(T_init >= 0.0, "Variable violating min constraint: 0.0 <= T_init, has value: " + String(T_init, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3190};
  modelica_boolean tmp298;
  static const MMC_DEFSTRINGLIT(tmp299,61,"Variable violating min constraint: 0.0 <= T_init, has value: ");
  modelica_string tmp300;
  modelica_metatype tmpMeta301;
  static int tmp302 = 0;
  if(!tmp302)
  {
    tmp298 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* T_init PARAM */),0.0);
    if(!tmp298)
    {
      tmp300 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* T_init PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta301 = stringAppend(MMC_REFSTRINGLIT(tmp299),tmp300);
      {
        const char* assert_cond = "(T_init >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"c:/Users/ZacharyCooper-Baldoc/Desktop/Repositories/CFD/output/tmp_two_returns_res.mo",5,3,5,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta301));
        } else {
          FILE_INFO info = {"c:/Users/ZacharyCooper-Baldoc/Desktop/Repositories/CFD/output/tmp_two_returns_res.mo",5,3,5,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta301));
        }
      }
      tmp302 = 1;
    }
  }
  threadData->lastEquationSolved = 3190;
}

/*
equation index: 3191
type: ALGORITHM

  assert(weaDat.TDryBul >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.TDryBul, has value: " + String(weaDat.TDryBul, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3191};
  modelica_boolean tmp303;
  static const MMC_DEFSTRINGLIT(tmp304,69,"Variable violating min constraint: 0.0 <= weaDat.TDryBul, has value: ");
  modelica_string tmp305;
  modelica_metatype tmpMeta306;
  static int tmp307 = 0;
  if(!tmp307)
  {
    tmp303 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* weaDat.TDryBul PARAM */),0.0);
    if(!tmp303)
    {
      tmp305 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* weaDat.TDryBul PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta306 = stringAppend(MMC_REFSTRINGLIT(tmp304),tmp305);
      {
        const char* assert_cond = "(weaDat.TDryBul >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",37,3,39,43,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta306));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",37,3,39,43,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta306));
        }
      }
      tmp307 = 1;
    }
  }
  threadData->lastEquationSolved = 3191;
}

/*
equation index: 3192
type: ALGORITHM

  assert(weaDat.TDryBulSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDryBulSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDryBulSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.TDryBulSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3192};
  modelica_boolean tmp308;
  modelica_boolean tmp309;
  static const MMC_DEFSTRINGLIT(tmp310,185,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDryBulSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp311;
  modelica_metatype tmpMeta312;
  static int tmp313 = 0;
  if(!tmp313)
  {
    tmp308 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[332]] /* weaDat.TDryBulSel.datSou PARAM */),1);
    tmp309 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[332]] /* weaDat.TDryBulSel.datSou PARAM */),3);
    if(!(tmp308 && tmp309))
    {
      tmp311 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[332]] /* weaDat.TDryBulSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta312 = stringAppend(MMC_REFSTRINGLIT(tmp310),tmp311);
      {
        const char* assert_cond = "(weaDat.TDryBulSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDryBulSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta312));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta312));
        }
      }
      tmp313 = 1;
    }
  }
  threadData->lastEquationSolved = 3192;
}

/*
equation index: 3193
type: ALGORITHM

  assert(weaDat.TDewPoi >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.TDewPoi, has value: " + String(weaDat.TDewPoi, "g"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3193};
  modelica_boolean tmp314;
  static const MMC_DEFSTRINGLIT(tmp315,69,"Variable violating min constraint: 0.0 <= weaDat.TDewPoi, has value: ");
  modelica_string tmp316;
  modelica_metatype tmpMeta317;
  static int tmp318 = 0;
  if(!tmp318)
  {
    tmp314 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1325]] /* weaDat.TDewPoi PARAM */),0.0);
    if(!tmp314)
    {
      tmp316 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1325]] /* weaDat.TDewPoi PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta317 = stringAppend(MMC_REFSTRINGLIT(tmp315),tmp316);
      {
        const char* assert_cond = "(weaDat.TDewPoi >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",52,3,54,43,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta317));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",52,3,54,43,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta317));
        }
      }
      tmp318 = 1;
    }
  }
  threadData->lastEquationSolved = 3193;
}

/*
equation index: 3194
type: ALGORITHM

  assert(weaDat.TDewPoiSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDewPoiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDewPoiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.TDewPoiSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3194};
  modelica_boolean tmp319;
  modelica_boolean tmp320;
  static const MMC_DEFSTRINGLIT(tmp321,185,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDewPoiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp322;
  modelica_metatype tmpMeta323;
  static int tmp324 = 0;
  if(!tmp324)
  {
    tmp319 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[330]] /* weaDat.TDewPoiSel.datSou PARAM */),1);
    tmp320 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[330]] /* weaDat.TDewPoiSel.datSou PARAM */),3);
    if(!(tmp319 && tmp320))
    {
      tmp322 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[330]] /* weaDat.TDewPoiSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta323 = stringAppend(MMC_REFSTRINGLIT(tmp321),tmp322);
      {
        const char* assert_cond = "(weaDat.TDewPoiSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDewPoiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta323));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta323));
        }
      }
      tmp324 = 1;
    }
  }
  threadData->lastEquationSolved = 3194;
}

/*
equation index: 3195
type: ALGORITHM

  assert(weaDat.pAtmSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.pAtmSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.pAtmSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.pAtmSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3195};
  modelica_boolean tmp325;
  modelica_boolean tmp326;
  static const MMC_DEFSTRINGLIT(tmp327,182,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.pAtmSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp328;
  modelica_metatype tmpMeta329;
  static int tmp330 = 0;
  if(!tmp330)
  {
    tmp325 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[377]] /* weaDat.pAtmSel.datSou PARAM */),1);
    tmp326 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[377]] /* weaDat.pAtmSel.datSou PARAM */),3);
    if(!(tmp325 && tmp326))
    {
      tmp328 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[377]] /* weaDat.pAtmSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta329 = stringAppend(MMC_REFSTRINGLIT(tmp327),tmp328);
      {
        const char* assert_cond = "(weaDat.pAtmSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.pAtmSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta329));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta329));
        }
      }
      tmp330 = 1;
    }
  }
  threadData->lastEquationSolved = 3195;
}

/*
equation index: 3196
type: ALGORITHM

  assert(weaDat.datRea.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and weaDat.datRea.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, "Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= weaDat.datRea.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: " + String(weaDat.datRea.extrapolation, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3196};
  modelica_boolean tmp331;
  modelica_boolean tmp332;
  static const MMC_DEFSTRINGLIT(tmp333,187,"Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= weaDat.datRea.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: ");
  modelica_string tmp334;
  modelica_metatype tmpMeta335;
  static int tmp336 = 0;
  if(!tmp336)
  {
    tmp331 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[363]] /* weaDat.datRea.extrapolation PARAM */),1);
    tmp332 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[363]] /* weaDat.datRea.extrapolation PARAM */),4);
    if(!(tmp331 && tmp332))
    {
      tmp334 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[363]] /* weaDat.datRea.extrapolation PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta335 = stringAppend(MMC_REFSTRINGLIT(tmp333),tmp334);
      {
        const char* assert_cond = "(weaDat.datRea.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and weaDat.datRea.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Tables.mo",39,5,41,61,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta335));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Tables.mo",39,5,41,61,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta335));
        }
      }
      tmp336 = 1;
    }
  }
  threadData->lastEquationSolved = 3196;
}

/*
equation index: 3197
type: ALGORITHM

  assert(weaDat.datRea.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and weaDat.datRea.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, "Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= weaDat.datRea.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: " + String(weaDat.datRea.smoothness, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3197};
  modelica_boolean tmp337;
  modelica_boolean tmp338;
  static const MMC_DEFSTRINGLIT(tmp339,192,"Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= weaDat.datRea.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: ");
  modelica_string tmp340;
  modelica_metatype tmpMeta341;
  static int tmp342 = 0;
  if(!tmp342)
  {
    tmp337 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[366]] /* weaDat.datRea.smoothness PARAM */),1);
    tmp338 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[366]] /* weaDat.datRea.smoothness PARAM */),6);
    if(!(tmp337 && tmp338))
    {
      tmp340 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[366]] /* weaDat.datRea.smoothness PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta341 = stringAppend(MMC_REFSTRINGLIT(tmp339),tmp340);
      {
        const char* assert_cond = "(weaDat.datRea.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and weaDat.datRea.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Tables.mo",36,5,38,61,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta341));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Tables.mo",36,5,38,61,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta341));
        }
      }
      tmp342 = 1;
    }
  }
  threadData->lastEquationSolved = 3197;
}

/*
equation index: 3198
type: ALGORITHM

  assert(weaDat.calTSky >= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation and weaDat.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation <= weaDat.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover, has value: " + String(weaDat.calTSky, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3198};
  modelica_boolean tmp343;
  modelica_boolean tmp344;
  static const MMC_DEFSTRINGLIT(tmp345,238,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation <= weaDat.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover, has value: ");
  modelica_string tmp346;
  modelica_metatype tmpMeta347;
  static int tmp348 = 0;
  if(!tmp348)
  {
    tmp343 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[334]] /* weaDat.calTSky PARAM */),1);
    tmp344 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[334]] /* weaDat.calTSky PARAM */),2);
    if(!(tmp343 && tmp344))
    {
      tmp346 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[334]] /* weaDat.calTSky PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta347 = stringAppend(MMC_REFSTRINGLIT(tmp345),tmp346);
      {
        const char* assert_cond = "(weaDat.calTSky >= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation and weaDat.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",218,3,223,53,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta347));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",218,3,223,53,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta347));
        }
      }
      tmp348 = 1;
    }
  }
  threadData->lastEquationSolved = 3198;
}

/*
equation index: 3199
type: ALGORITHM

  assert(weaDat.opaSkyCovSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.opaSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.opaSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.opaSkyCovSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3199};
  modelica_boolean tmp349;
  modelica_boolean tmp350;
  static const MMC_DEFSTRINGLIT(tmp351,180,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.opaSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp352;
  modelica_metatype tmpMeta353;
  static int tmp354 = 0;
  if(!tmp354)
  {
    tmp349 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[376]] /* weaDat.opaSkyCovSou PARAM */),1);
    tmp350 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[376]] /* weaDat.opaSkyCovSou PARAM */),3);
    if(!(tmp349 && tmp350))
    {
      tmp352 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[376]] /* weaDat.opaSkyCovSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta353 = stringAppend(MMC_REFSTRINGLIT(tmp351),tmp352);
      {
        const char* assert_cond = "(weaDat.opaSkyCovSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.opaSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",202,3,203,94,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta353));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",202,3,203,94,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta353));
        }
      }
      tmp354 = 1;
    }
  }
  threadData->lastEquationSolved = 3199;
}

/*
equation index: 3200
type: ALGORITHM

  assert(weaDat.totSkyCovSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.totSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.totSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.totSkyCovSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3200};
  modelica_boolean tmp355;
  modelica_boolean tmp356;
  static const MMC_DEFSTRINGLIT(tmp357,180,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.totSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp358;
  modelica_metatype tmpMeta359;
  static int tmp360 = 0;
  if(!tmp360)
  {
    tmp355 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[383]] /* weaDat.totSkyCovSou PARAM */),1);
    tmp356 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[383]] /* weaDat.totSkyCovSou PARAM */),3);
    if(!(tmp355 && tmp356))
    {
      tmp358 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[383]] /* weaDat.totSkyCovSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta359 = stringAppend(MMC_REFSTRINGLIT(tmp357),tmp358);
      {
        const char* assert_cond = "(weaDat.totSkyCovSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.totSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",186,3,187,93,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta359));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",186,3,187,93,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta359));
        }
      }
      tmp360 = 1;
    }
  }
  threadData->lastEquationSolved = 3200;
}

/*
equation index: 3201
type: ALGORITHM

  assert(weaDat.ceiHeiSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.ceiHeiSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.ceiHeiSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.ceiHeiSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3201};
  modelica_boolean tmp361;
  modelica_boolean tmp362;
  static const MMC_DEFSTRINGLIT(tmp363,177,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.ceiHeiSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp364;
  modelica_metatype tmpMeta365;
  static int tmp366 = 0;
  if(!tmp366)
  {
    tmp361 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[336]] /* weaDat.ceiHeiSou PARAM */),1);
    tmp362 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[336]] /* weaDat.ceiHeiSou PARAM */),3);
    if(!(tmp361 && tmp362))
    {
      tmp364 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[336]] /* weaDat.ceiHeiSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta365 = stringAppend(MMC_REFSTRINGLIT(tmp363),tmp364);
      {
        const char* assert_cond = "(weaDat.ceiHeiSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.ceiHeiSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",170,3,171,92,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta365));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",170,3,171,92,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta365));
        }
      }
      tmp366 = 1;
    }
  }
  threadData->lastEquationSolved = 3201;
}

/*
equation index: 3202
type: ALGORITHM

  assert(weaDat.HSou >= Buildings.BoundaryConditions.Types.RadiationDataSource.File and weaDat.HSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.RadiationDataSource.File <= weaDat.HSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor, has value: " + String(weaDat.HSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3202};
  modelica_boolean tmp367;
  modelica_boolean tmp368;
  static const MMC_DEFSTRINGLIT(tmp369,206,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.RadiationDataSource.File <= weaDat.HSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor, has value: ");
  modelica_string tmp370;
  modelica_metatype tmpMeta371;
  static int tmp372 = 0;
  if(!tmp372)
  {
    tmp367 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[326]] /* weaDat.HSou PARAM */),1);
    tmp368 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[326]] /* weaDat.HSou PARAM */),4);
    if(!(tmp367 && tmp368))
    {
      tmp370 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[326]] /* weaDat.HSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta371 = stringAppend(MMC_REFSTRINGLIT(tmp369),tmp370);
      {
        const char* assert_cond = "(weaDat.HSou >= Buildings.BoundaryConditions.Types.RadiationDataSource.File and weaDat.HSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",135,4,137,76,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta371));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",135,4,137,76,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta371));
        }
      }
      tmp372 = 1;
    }
  }
  threadData->lastEquationSolved = 3202;
}

/*
equation index: 3203
type: ALGORITHM

  assert(weaDat.HInfHorSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.HInfHorSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.HInfHorSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.HInfHorSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3203};
  modelica_boolean tmp373;
  modelica_boolean tmp374;
  static const MMC_DEFSTRINGLIT(tmp375,178,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.HInfHorSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp376;
  modelica_metatype tmpMeta377;
  static int tmp378 = 0;
  if(!tmp378)
  {
    tmp373 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[325]] /* weaDat.HInfHorSou PARAM */),1);
    tmp374 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[325]] /* weaDat.HInfHorSou PARAM */),3);
    if(!(tmp373 && tmp374))
    {
      tmp376 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[325]] /* weaDat.HInfHorSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta377 = stringAppend(MMC_REFSTRINGLIT(tmp375),tmp376);
      {
        const char* assert_cond = "(weaDat.HInfHorSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.HInfHorSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",123,3,124,107,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta377));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",123,3,124,107,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta377));
        }
      }
      tmp378 = 1;
    }
  }
  threadData->lastEquationSolved = 3203;
}

/*
equation index: 3204
type: ALGORITHM

  assert(weaDat.winDirSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winDirSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winDirSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.winDirSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3204};
  modelica_boolean tmp379;
  modelica_boolean tmp380;
  static const MMC_DEFSTRINGLIT(tmp381,177,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winDirSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp382;
  modelica_metatype tmpMeta383;
  static int tmp384 = 0;
  if(!tmp384)
  {
    tmp379 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[385]] /* weaDat.winDirSou PARAM */),1);
    tmp380 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[385]] /* weaDat.winDirSou PARAM */),3);
    if(!(tmp379 && tmp380))
    {
      tmp382 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[385]] /* weaDat.winDirSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta383 = stringAppend(MMC_REFSTRINGLIT(tmp381),tmp382);
      {
        const char* assert_cond = "(weaDat.winDirSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winDirSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",109,3,110,92,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta383));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",109,3,110,92,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta383));
        }
      }
      tmp384 = 1;
    }
  }
  threadData->lastEquationSolved = 3204;
}

/*
equation index: 3205
type: ALGORITHM

  assert(weaDat.winSpeSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winSpeSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winSpeSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.winSpeSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3205};
  modelica_boolean tmp385;
  modelica_boolean tmp386;
  static const MMC_DEFSTRINGLIT(tmp387,177,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winSpeSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp388;
  modelica_metatype tmpMeta389;
  static int tmp390 = 0;
  if(!tmp390)
  {
    tmp385 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[387]] /* weaDat.winSpeSou PARAM */),1);
    tmp386 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[387]] /* weaDat.winSpeSou PARAM */),3);
    if(!(tmp385 && tmp386))
    {
      tmp388 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[387]] /* weaDat.winSpeSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta389 = stringAppend(MMC_REFSTRINGLIT(tmp387),tmp388);
      {
        const char* assert_cond = "(weaDat.winSpeSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winSpeSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",95,3,96,88,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta389));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",95,3,96,88,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta389));
        }
      }
      tmp390 = 1;
    }
  }
  threadData->lastEquationSolved = 3205;
}

/*
equation index: 3206
type: ALGORITHM

  assert(weaDat.relHumSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.relHumSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.relHumSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.relHumSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_3206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3206};
  modelica_boolean tmp391;
  modelica_boolean tmp392;
  static const MMC_DEFSTRINGLIT(tmp393,177,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.relHumSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp394;
  modelica_metatype tmpMeta395;
  static int tmp396 = 0;
  if(!tmp396)
  {
    tmp391 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[380]] /* weaDat.relHumSou PARAM */),1);
    tmp392 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[380]] /* weaDat.relHumSou PARAM */),3);
    if(!(tmp391 && tmp392))
    {
      tmp394 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[380]] /* weaDat.relHumSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta395 = stringAppend(MMC_REFSTRINGLIT(tmp393),tmp394);
      {
        const char* assert_cond = "(weaDat.relHumSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.relHumSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",79,3,80,95,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta395));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",79,3,80,95,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta395));
        }
      }
      tmp396 = 1;
    }
  }
  threadData->lastEquationSolved = 3206;
}
OMC_DISABLE_OPT
void tmp_two_returns_res_updateBoundParameters_1(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[483])(DATA*, threadData_t*) = {
    tmp_two_returns_res_eqFunction_2293,
    tmp_two_returns_res_eqFunction_2294,
    tmp_two_returns_res_eqFunction_2295,
    tmp_two_returns_res_eqFunction_2296,
    tmp_two_returns_res_eqFunction_2297,
    tmp_two_returns_res_eqFunction_2298,
    tmp_two_returns_res_eqFunction_2299,
    tmp_two_returns_res_eqFunction_2300,
    tmp_two_returns_res_eqFunction_2302,
    tmp_two_returns_res_eqFunction_2303,
    tmp_two_returns_res_eqFunction_2304,
    tmp_two_returns_res_eqFunction_2305,
    tmp_two_returns_res_eqFunction_2306,
    tmp_two_returns_res_eqFunction_2307,
    tmp_two_returns_res_eqFunction_2313,
    tmp_two_returns_res_eqFunction_2319,
    tmp_two_returns_res_eqFunction_2320,
    tmp_two_returns_res_eqFunction_2322,
    tmp_two_returns_res_eqFunction_2324,
    tmp_two_returns_res_eqFunction_2325,
    tmp_two_returns_res_eqFunction_2327,
    tmp_two_returns_res_eqFunction_2329,
    tmp_two_returns_res_eqFunction_2330,
    tmp_two_returns_res_eqFunction_2332,
    tmp_two_returns_res_eqFunction_2334,
    tmp_two_returns_res_eqFunction_2335,
    tmp_two_returns_res_eqFunction_2337,
    tmp_two_returns_res_eqFunction_2339,
    tmp_two_returns_res_eqFunction_2340,
    tmp_two_returns_res_eqFunction_2342,
    tmp_two_returns_res_eqFunction_2344,
    tmp_two_returns_res_eqFunction_2345,
    tmp_two_returns_res_eqFunction_2347,
    tmp_two_returns_res_eqFunction_2349,
    tmp_two_returns_res_eqFunction_2352,
    tmp_two_returns_res_eqFunction_2353,
    tmp_two_returns_res_eqFunction_2357,
    tmp_two_returns_res_eqFunction_2359,
    tmp_two_returns_res_eqFunction_2360,
    tmp_two_returns_res_eqFunction_2361,
    tmp_two_returns_res_eqFunction_2362,
    tmp_two_returns_res_eqFunction_2365,
    tmp_two_returns_res_eqFunction_2368,
    tmp_two_returns_res_eqFunction_2369,
    tmp_two_returns_res_eqFunction_2370,
    tmp_two_returns_res_eqFunction_2373,
    tmp_two_returns_res_eqFunction_2374,
    tmp_two_returns_res_eqFunction_2375,
    tmp_two_returns_res_eqFunction_2376,
    tmp_two_returns_res_eqFunction_2377,
    tmp_two_returns_res_eqFunction_2378,
    tmp_two_returns_res_eqFunction_2380,
    tmp_two_returns_res_eqFunction_2381,
    tmp_two_returns_res_eqFunction_2384,
    tmp_two_returns_res_eqFunction_2385,
    tmp_two_returns_res_eqFunction_2389,
    tmp_two_returns_res_eqFunction_2391,
    tmp_two_returns_res_eqFunction_2392,
    tmp_two_returns_res_eqFunction_2393,
    tmp_two_returns_res_eqFunction_2396,
    tmp_two_returns_res_eqFunction_2399,
    tmp_two_returns_res_eqFunction_2400,
    tmp_two_returns_res_eqFunction_2401,
    tmp_two_returns_res_eqFunction_2404,
    tmp_two_returns_res_eqFunction_2405,
    tmp_two_returns_res_eqFunction_2406,
    tmp_two_returns_res_eqFunction_2407,
    tmp_two_returns_res_eqFunction_2408,
    tmp_two_returns_res_eqFunction_2409,
    tmp_two_returns_res_eqFunction_2411,
    tmp_two_returns_res_eqFunction_2415,
    tmp_two_returns_res_eqFunction_2416,
    tmp_two_returns_res_eqFunction_2417,
    tmp_two_returns_res_eqFunction_2418,
    tmp_two_returns_res_eqFunction_2419,
    tmp_two_returns_res_eqFunction_2420,
    tmp_two_returns_res_eqFunction_2421,
    tmp_two_returns_res_eqFunction_2422,
    tmp_two_returns_res_eqFunction_2423,
    tmp_two_returns_res_eqFunction_2424,
    tmp_two_returns_res_eqFunction_2425,
    tmp_two_returns_res_eqFunction_2426,
    tmp_two_returns_res_eqFunction_2427,
    tmp_two_returns_res_eqFunction_2428,
    tmp_two_returns_res_eqFunction_2429,
    tmp_two_returns_res_eqFunction_2430,
    tmp_two_returns_res_eqFunction_2431,
    tmp_two_returns_res_eqFunction_2432,
    tmp_two_returns_res_eqFunction_2433,
    tmp_two_returns_res_eqFunction_2434,
    tmp_two_returns_res_eqFunction_2435,
    tmp_two_returns_res_eqFunction_2436,
    tmp_two_returns_res_eqFunction_2437,
    tmp_two_returns_res_eqFunction_2438,
    tmp_two_returns_res_eqFunction_2439,
    tmp_two_returns_res_eqFunction_2442,
    tmp_two_returns_res_eqFunction_2443,
    tmp_two_returns_res_eqFunction_2445,
    tmp_two_returns_res_eqFunction_2447,
    tmp_two_returns_res_eqFunction_2449,
    tmp_two_returns_res_eqFunction_2451,
    tmp_two_returns_res_eqFunction_2452,
    tmp_two_returns_res_eqFunction_2453,
    tmp_two_returns_res_eqFunction_2454,
    tmp_two_returns_res_eqFunction_2455,
    tmp_two_returns_res_eqFunction_2456,
    tmp_two_returns_res_eqFunction_2459,
    tmp_two_returns_res_eqFunction_2460,
    tmp_two_returns_res_eqFunction_2464,
    tmp_two_returns_res_eqFunction_2466,
    tmp_two_returns_res_eqFunction_2467,
    tmp_two_returns_res_eqFunction_2468,
    tmp_two_returns_res_eqFunction_2469,
    tmp_two_returns_res_eqFunction_2472,
    tmp_two_returns_res_eqFunction_2475,
    tmp_two_returns_res_eqFunction_2476,
    tmp_two_returns_res_eqFunction_2477,
    tmp_two_returns_res_eqFunction_2480,
    tmp_two_returns_res_eqFunction_2481,
    tmp_two_returns_res_eqFunction_2482,
    tmp_two_returns_res_eqFunction_2483,
    tmp_two_returns_res_eqFunction_2484,
    tmp_two_returns_res_eqFunction_2485,
    tmp_two_returns_res_eqFunction_2487,
    tmp_two_returns_res_eqFunction_2488,
    tmp_two_returns_res_eqFunction_2491,
    tmp_two_returns_res_eqFunction_2492,
    tmp_two_returns_res_eqFunction_2496,
    tmp_two_returns_res_eqFunction_2498,
    tmp_two_returns_res_eqFunction_2499,
    tmp_two_returns_res_eqFunction_2500,
    tmp_two_returns_res_eqFunction_2501,
    tmp_two_returns_res_eqFunction_2504,
    tmp_two_returns_res_eqFunction_2507,
    tmp_two_returns_res_eqFunction_2508,
    tmp_two_returns_res_eqFunction_2509,
    tmp_two_returns_res_eqFunction_2512,
    tmp_two_returns_res_eqFunction_2513,
    tmp_two_returns_res_eqFunction_2514,
    tmp_two_returns_res_eqFunction_2515,
    tmp_two_returns_res_eqFunction_2516,
    tmp_two_returns_res_eqFunction_2517,
    tmp_two_returns_res_eqFunction_2519,
    tmp_two_returns_res_eqFunction_2560,
    tmp_two_returns_res_eqFunction_2561,
    tmp_two_returns_res_eqFunction_2562,
    tmp_two_returns_res_eqFunction_2563,
    tmp_two_returns_res_eqFunction_2564,
    tmp_two_returns_res_eqFunction_2565,
    tmp_two_returns_res_eqFunction_2566,
    tmp_two_returns_res_eqFunction_2568,
    tmp_two_returns_res_eqFunction_2579,
    tmp_two_returns_res_eqFunction_2583,
    tmp_two_returns_res_eqFunction_2587,
    tmp_two_returns_res_eqFunction_2591,
    tmp_two_returns_res_eqFunction_2595,
    tmp_two_returns_res_eqFunction_2599,
    tmp_two_returns_res_eqFunction_2614,
    tmp_two_returns_res_eqFunction_2616,
    tmp_two_returns_res_eqFunction_2617,
    tmp_two_returns_res_eqFunction_2618,
    tmp_two_returns_res_eqFunction_2619,
    tmp_two_returns_res_eqFunction_2620,
    tmp_two_returns_res_eqFunction_2621,
    tmp_two_returns_res_eqFunction_2622,
    tmp_two_returns_res_eqFunction_2623,
    tmp_two_returns_res_eqFunction_2624,
    tmp_two_returns_res_eqFunction_2630,
    tmp_two_returns_res_eqFunction_2634,
    tmp_two_returns_res_eqFunction_2638,
    tmp_two_returns_res_eqFunction_2642,
    tmp_two_returns_res_eqFunction_2646,
    tmp_two_returns_res_eqFunction_2650,
    tmp_two_returns_res_eqFunction_2679,
    tmp_two_returns_res_eqFunction_2680,
    tmp_two_returns_res_eqFunction_2681,
    tmp_two_returns_res_eqFunction_2682,
    tmp_two_returns_res_eqFunction_2683,
    tmp_two_returns_res_eqFunction_2688,
    tmp_two_returns_res_eqFunction_2689,
    tmp_two_returns_res_eqFunction_2690,
    tmp_two_returns_res_eqFunction_2691,
    tmp_two_returns_res_eqFunction_2692,
    tmp_two_returns_res_eqFunction_2693,
    tmp_two_returns_res_eqFunction_2694,
    tmp_two_returns_res_eqFunction_2695,
    tmp_two_returns_res_eqFunction_2696,
    tmp_two_returns_res_eqFunction_2697,
    tmp_two_returns_res_eqFunction_2698,
    tmp_two_returns_res_eqFunction_2699,
    tmp_two_returns_res_eqFunction_2700,
    tmp_two_returns_res_eqFunction_2701,
    tmp_two_returns_res_eqFunction_2702,
    tmp_two_returns_res_eqFunction_2703,
    tmp_two_returns_res_eqFunction_2704,
    tmp_two_returns_res_eqFunction_2705,
    tmp_two_returns_res_eqFunction_2706,
    tmp_two_returns_res_eqFunction_2707,
    tmp_two_returns_res_eqFunction_2708,
    tmp_two_returns_res_eqFunction_2709,
    tmp_two_returns_res_eqFunction_2710,
    tmp_two_returns_res_eqFunction_2711,
    tmp_two_returns_res_eqFunction_2719,
    tmp_two_returns_res_eqFunction_2726,
    tmp_two_returns_res_eqFunction_2728,
    tmp_two_returns_res_eqFunction_2729,
    tmp_two_returns_res_eqFunction_2732,
    tmp_two_returns_res_eqFunction_2734,
    tmp_two_returns_res_eqFunction_2735,
    tmp_two_returns_res_eqFunction_2738,
    tmp_two_returns_res_eqFunction_2740,
    tmp_two_returns_res_eqFunction_2741,
    tmp_two_returns_res_eqFunction_2744,
    tmp_two_returns_res_eqFunction_2746,
    tmp_two_returns_res_eqFunction_2747,
    tmp_two_returns_res_eqFunction_2750,
    tmp_two_returns_res_eqFunction_2752,
    tmp_two_returns_res_eqFunction_2753,
    tmp_two_returns_res_eqFunction_2756,
    tmp_two_returns_res_eqFunction_2758,
    tmp_two_returns_res_eqFunction_2759,
    tmp_two_returns_res_eqFunction_2764,
    tmp_two_returns_res_eqFunction_2765,
    tmp_two_returns_res_eqFunction_2769,
    tmp_two_returns_res_eqFunction_2771,
    tmp_two_returns_res_eqFunction_2772,
    tmp_two_returns_res_eqFunction_2773,
    tmp_two_returns_res_eqFunction_2774,
    tmp_two_returns_res_eqFunction_2775,
    tmp_two_returns_res_eqFunction_2778,
    tmp_two_returns_res_eqFunction_2781,
    tmp_two_returns_res_eqFunction_2782,
    tmp_two_returns_res_eqFunction_2783,
    tmp_two_returns_res_eqFunction_2786,
    tmp_two_returns_res_eqFunction_2787,
    tmp_two_returns_res_eqFunction_2788,
    tmp_two_returns_res_eqFunction_2789,
    tmp_two_returns_res_eqFunction_2790,
    tmp_two_returns_res_eqFunction_2791,
    tmp_two_returns_res_eqFunction_2793,
    tmp_two_returns_res_eqFunction_2797,
    tmp_two_returns_res_eqFunction_2798,
    tmp_two_returns_res_eqFunction_2802,
    tmp_two_returns_res_eqFunction_2804,
    tmp_two_returns_res_eqFunction_2805,
    tmp_two_returns_res_eqFunction_2806,
    tmp_two_returns_res_eqFunction_2807,
    tmp_two_returns_res_eqFunction_2808,
    tmp_two_returns_res_eqFunction_2811,
    tmp_two_returns_res_eqFunction_2814,
    tmp_two_returns_res_eqFunction_2815,
    tmp_two_returns_res_eqFunction_2816,
    tmp_two_returns_res_eqFunction_2819,
    tmp_two_returns_res_eqFunction_2820,
    tmp_two_returns_res_eqFunction_2821,
    tmp_two_returns_res_eqFunction_2822,
    tmp_two_returns_res_eqFunction_2823,
    tmp_two_returns_res_eqFunction_2824,
    tmp_two_returns_res_eqFunction_2826,
    tmp_two_returns_res_eqFunction_2830,
    tmp_two_returns_res_eqFunction_2831,
    tmp_two_returns_res_eqFunction_2832,
    tmp_two_returns_res_eqFunction_2833,
    tmp_two_returns_res_eqFunction_2834,
    tmp_two_returns_res_eqFunction_2835,
    tmp_two_returns_res_eqFunction_2836,
    tmp_two_returns_res_eqFunction_2837,
    tmp_two_returns_res_eqFunction_2838,
    tmp_two_returns_res_eqFunction_2839,
    tmp_two_returns_res_eqFunction_2840,
    tmp_two_returns_res_eqFunction_2841,
    tmp_two_returns_res_eqFunction_2842,
    tmp_two_returns_res_eqFunction_2843,
    tmp_two_returns_res_eqFunction_2844,
    tmp_two_returns_res_eqFunction_2845,
    tmp_two_returns_res_eqFunction_2846,
    tmp_two_returns_res_eqFunction_2847,
    tmp_two_returns_res_eqFunction_2848,
    tmp_two_returns_res_eqFunction_2849,
    tmp_two_returns_res_eqFunction_2850,
    tmp_two_returns_res_eqFunction_2851,
    tmp_two_returns_res_eqFunction_2852,
    tmp_two_returns_res_eqFunction_2853,
    tmp_two_returns_res_eqFunction_2854,
    tmp_two_returns_res_eqFunction_2855,
    tmp_two_returns_res_eqFunction_2856,
    tmp_two_returns_res_eqFunction_2857,
    tmp_two_returns_res_eqFunction_2860,
    tmp_two_returns_res_eqFunction_2861,
    tmp_two_returns_res_eqFunction_2863,
    tmp_two_returns_res_eqFunction_2865,
    tmp_two_returns_res_eqFunction_2867,
    tmp_two_returns_res_eqFunction_2869,
    tmp_two_returns_res_eqFunction_2870,
    tmp_two_returns_res_eqFunction_2871,
    tmp_two_returns_res_eqFunction_2872,
    tmp_two_returns_res_eqFunction_2873,
    tmp_two_returns_res_eqFunction_2877,
    tmp_two_returns_res_eqFunction_2878,
    tmp_two_returns_res_eqFunction_2882,
    tmp_two_returns_res_eqFunction_2884,
    tmp_two_returns_res_eqFunction_2885,
    tmp_two_returns_res_eqFunction_2886,
    tmp_two_returns_res_eqFunction_2887,
    tmp_two_returns_res_eqFunction_2888,
    tmp_two_returns_res_eqFunction_2891,
    tmp_two_returns_res_eqFunction_2894,
    tmp_two_returns_res_eqFunction_2895,
    tmp_two_returns_res_eqFunction_2896,
    tmp_two_returns_res_eqFunction_2899,
    tmp_two_returns_res_eqFunction_2900,
    tmp_two_returns_res_eqFunction_2901,
    tmp_two_returns_res_eqFunction_2902,
    tmp_two_returns_res_eqFunction_2903,
    tmp_two_returns_res_eqFunction_2904,
    tmp_two_returns_res_eqFunction_2906,
    tmp_two_returns_res_eqFunction_2910,
    tmp_two_returns_res_eqFunction_2911,
    tmp_two_returns_res_eqFunction_2915,
    tmp_two_returns_res_eqFunction_2917,
    tmp_two_returns_res_eqFunction_2918,
    tmp_two_returns_res_eqFunction_2919,
    tmp_two_returns_res_eqFunction_2920,
    tmp_two_returns_res_eqFunction_2921,
    tmp_two_returns_res_eqFunction_2924,
    tmp_two_returns_res_eqFunction_2927,
    tmp_two_returns_res_eqFunction_2928,
    tmp_two_returns_res_eqFunction_2929,
    tmp_two_returns_res_eqFunction_2932,
    tmp_two_returns_res_eqFunction_2933,
    tmp_two_returns_res_eqFunction_2934,
    tmp_two_returns_res_eqFunction_2935,
    tmp_two_returns_res_eqFunction_2936,
    tmp_two_returns_res_eqFunction_2937,
    tmp_two_returns_res_eqFunction_2939,
    tmp_two_returns_res_eqFunction_2956,
    tmp_two_returns_res_eqFunction_289,
    tmp_two_returns_res_eqFunction_288,
    tmp_two_returns_res_eqFunction_287,
    tmp_two_returns_res_eqFunction_286,
    tmp_two_returns_res_eqFunction_285,
    tmp_two_returns_res_eqFunction_284,
    tmp_two_returns_res_eqFunction_283,
    tmp_two_returns_res_eqFunction_282,
    tmp_two_returns_res_eqFunction_281,
    tmp_two_returns_res_eqFunction_280,
    tmp_two_returns_res_eqFunction_279,
    tmp_two_returns_res_eqFunction_278,
    tmp_two_returns_res_eqFunction_277,
    tmp_two_returns_res_eqFunction_276,
    tmp_two_returns_res_eqFunction_275,
    tmp_two_returns_res_eqFunction_274,
    tmp_two_returns_res_eqFunction_273,
    tmp_two_returns_res_eqFunction_272,
    tmp_two_returns_res_eqFunction_271,
    tmp_two_returns_res_eqFunction_270,
    tmp_two_returns_res_eqFunction_269,
    tmp_two_returns_res_eqFunction_268,
    tmp_two_returns_res_eqFunction_267,
    tmp_two_returns_res_eqFunction_56,
    tmp_two_returns_res_eqFunction_266,
    tmp_two_returns_res_eqFunction_54,
    tmp_two_returns_res_eqFunction_49,
    tmp_two_returns_res_eqFunction_262,
    tmp_two_returns_res_eqFunction_55,
    tmp_two_returns_res_eqFunction_50,
    tmp_two_returns_res_eqFunction_48,
    tmp_two_returns_res_eqFunction_47,
    tmp_two_returns_res_eqFunction_46,
    tmp_two_returns_res_eqFunction_45,
    tmp_two_returns_res_eqFunction_44,
    tmp_two_returns_res_eqFunction_43,
    tmp_two_returns_res_eqFunction_42,
    tmp_two_returns_res_eqFunction_41,
    tmp_two_returns_res_eqFunction_40,
    tmp_two_returns_res_eqFunction_39,
    tmp_two_returns_res_eqFunction_38,
    tmp_two_returns_res_eqFunction_37,
    tmp_two_returns_res_eqFunction_36,
    tmp_two_returns_res_eqFunction_35,
    tmp_two_returns_res_eqFunction_34,
    tmp_two_returns_res_eqFunction_33,
    tmp_two_returns_res_eqFunction_32,
    tmp_two_returns_res_eqFunction_31,
    tmp_two_returns_res_eqFunction_30,
    tmp_two_returns_res_eqFunction_29,
    tmp_two_returns_res_eqFunction_28,
    tmp_two_returns_res_eqFunction_27,
    tmp_two_returns_res_eqFunction_26,
    tmp_two_returns_res_eqFunction_25,
    tmp_two_returns_res_eqFunction_24,
    tmp_two_returns_res_eqFunction_23,
    tmp_two_returns_res_eqFunction_22,
    tmp_two_returns_res_eqFunction_21,
    tmp_two_returns_res_eqFunction_20,
    tmp_two_returns_res_eqFunction_19,
    tmp_two_returns_res_eqFunction_18,
    tmp_two_returns_res_eqFunction_17,
    tmp_two_returns_res_eqFunction_16,
    tmp_two_returns_res_eqFunction_15,
    tmp_two_returns_res_eqFunction_14,
    tmp_two_returns_res_eqFunction_13,
    tmp_two_returns_res_eqFunction_12,
    tmp_two_returns_res_eqFunction_11,
    tmp_two_returns_res_eqFunction_10,
    tmp_two_returns_res_eqFunction_9,
    tmp_two_returns_res_eqFunction_8,
    tmp_two_returns_res_eqFunction_7,
    tmp_two_returns_res_eqFunction_6,
    tmp_two_returns_res_eqFunction_5,
    tmp_two_returns_res_eqFunction_4,
    tmp_two_returns_res_eqFunction_3,
    tmp_two_returns_res_eqFunction_2,
    tmp_two_returns_res_eqFunction_1,
    tmp_two_returns_res_eqFunction_3138,
    tmp_two_returns_res_eqFunction_3139,
    tmp_two_returns_res_eqFunction_3140,
    tmp_two_returns_res_eqFunction_3141,
    tmp_two_returns_res_eqFunction_3142,
    tmp_two_returns_res_eqFunction_3143,
    tmp_two_returns_res_eqFunction_3144,
    tmp_two_returns_res_eqFunction_3145,
    tmp_two_returns_res_eqFunction_3146,
    tmp_two_returns_res_eqFunction_3147,
    tmp_two_returns_res_eqFunction_3148,
    tmp_two_returns_res_eqFunction_3149,
    tmp_two_returns_res_eqFunction_3150,
    tmp_two_returns_res_eqFunction_3151,
    tmp_two_returns_res_eqFunction_3152,
    tmp_two_returns_res_eqFunction_3153,
    tmp_two_returns_res_eqFunction_3154,
    tmp_two_returns_res_eqFunction_3155,
    tmp_two_returns_res_eqFunction_3156,
    tmp_two_returns_res_eqFunction_3157,
    tmp_two_returns_res_eqFunction_3158,
    tmp_two_returns_res_eqFunction_3159,
    tmp_two_returns_res_eqFunction_3160,
    tmp_two_returns_res_eqFunction_3161,
    tmp_two_returns_res_eqFunction_3162,
    tmp_two_returns_res_eqFunction_3163,
    tmp_two_returns_res_eqFunction_3164,
    tmp_two_returns_res_eqFunction_3165,
    tmp_two_returns_res_eqFunction_3166,
    tmp_two_returns_res_eqFunction_3167,
    tmp_two_returns_res_eqFunction_3168,
    tmp_two_returns_res_eqFunction_3169,
    tmp_two_returns_res_eqFunction_3170,
    tmp_two_returns_res_eqFunction_3171,
    tmp_two_returns_res_eqFunction_3172,
    tmp_two_returns_res_eqFunction_3173,
    tmp_two_returns_res_eqFunction_3174,
    tmp_two_returns_res_eqFunction_3175,
    tmp_two_returns_res_eqFunction_3176,
    tmp_two_returns_res_eqFunction_3177,
    tmp_two_returns_res_eqFunction_3178,
    tmp_two_returns_res_eqFunction_3179,
    tmp_two_returns_res_eqFunction_3180,
    tmp_two_returns_res_eqFunction_3181,
    tmp_two_returns_res_eqFunction_3182,
    tmp_two_returns_res_eqFunction_3183,
    tmp_two_returns_res_eqFunction_3184,
    tmp_two_returns_res_eqFunction_3185,
    tmp_two_returns_res_eqFunction_3186,
    tmp_two_returns_res_eqFunction_3187,
    tmp_two_returns_res_eqFunction_3188,
    tmp_two_returns_res_eqFunction_3189,
    tmp_two_returns_res_eqFunction_3190,
    tmp_two_returns_res_eqFunction_3191,
    tmp_two_returns_res_eqFunction_3192,
    tmp_two_returns_res_eqFunction_3193,
    tmp_two_returns_res_eqFunction_3194,
    tmp_two_returns_res_eqFunction_3195,
    tmp_two_returns_res_eqFunction_3196,
    tmp_two_returns_res_eqFunction_3197,
    tmp_two_returns_res_eqFunction_3198,
    tmp_two_returns_res_eqFunction_3199,
    tmp_two_returns_res_eqFunction_3200,
    tmp_two_returns_res_eqFunction_3201,
    tmp_two_returns_res_eqFunction_3202,
    tmp_two_returns_res_eqFunction_3203,
    tmp_two_returns_res_eqFunction_3204,
    tmp_two_returns_res_eqFunction_3205,
    tmp_two_returns_res_eqFunction_3206
  };
  
  for (int id = 0; id < 483; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif