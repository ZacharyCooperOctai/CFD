#include "s000_baseline_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 2279
type: SIMPLE_ASSIGN
dc.weaDat.lat = Buildings.BoundaryConditions.WeatherData.BaseClasses.getLatitudeTMY3(dc.weaDat.filNam)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2279};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1515]] /* dc.weaDat.lat PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[117]] /* dc.weaDat.filNam PARAM */));
  threadData->lastEquationSolved = 2279;
}

/*
equation index: 2280
type: SIMPLE_ASSIGN
dc.weaDat.latitude.latitude = dc.weaDat.lat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2280};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* dc.weaDat.latitude.latitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1515]] /* dc.weaDat.lat PARAM */);
  threadData->lastEquationSolved = 2280;
}

/*
equation index: 2281
type: SIMPLE_ASSIGN
$cse18 = cos(dc.weaDat.latitude.latitude)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2281};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[0]] /* $cse18 PARAM */) = cos((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* dc.weaDat.latitude.latitude PARAM */));
  threadData->lastEquationSolved = 2281;
}

/*
equation index: 2282
type: SIMPLE_ASSIGN
$cse21 = sin(dc.weaDat.latitude.latitude)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2282};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* $cse21 PARAM */) = sin((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* dc.weaDat.latitude.latitude PARAM */));
  threadData->lastEquationSolved = 2282;
}

/*
equation index: 2283
type: SIMPLE_ASSIGN
dc.roo.air.cfd.CFDThre = Buildings.ThermalZones.Detailed.BaseClasses.CFDThread.constructor()
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2283};
  (data->simulationInfo->extObjs[1]) = omc_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_constructor(threadData);
  threadData->lastEquationSolved = 2283;
}

/*
equation index: 2284
type: SIMPLE_ASSIGN
dc.weaDat.datRea.fileName = dc.weaDat.filNam
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2284};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[112]] /* dc.weaDat.datRea.fileName PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[117]] /* dc.weaDat.filNam PARAM */);
  threadData->lastEquationSolved = 2284;
}

/*
equation index: 2285
type: SIMPLE_ASSIGN
dc.weaDat.datRea.delimiter = ","
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2285};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[111]] /* dc.weaDat.datRea.delimiter PARAM */) = _OMC_LIT7;
  threadData->lastEquationSolved = 2285;
}

/*
equation index: 2288
type: SIMPLE_ASSIGN
dc.weaDat.datRea.isCsvExt = Modelica.Utilities.Strings.findLast(dc.weaDat.datRea.fileName, ".csv", 0, false) + 3 == Modelica.Utilities.Strings.length(dc.weaDat.datRea.fileName)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2288};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[346]] /* dc.weaDat.datRea.isCsvExt PARAM */) = (omc_Modelica_Utilities_Strings_findLast(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[112]] /* dc.weaDat.datRea.fileName PARAM */), _OMC_LIT78, ((modelica_integer) 0), 0 /* false */) + ((modelica_integer) 3) == omc_Modelica_Utilities_Strings_length(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[112]] /* dc.weaDat.datRea.fileName PARAM */)));
  threadData->lastEquationSolved = 2288;
}

/*
equation index: 2289
type: SIMPLE_ASSIGN
dc.weaDat.datRea.tableID = Modelica.Blocks.Types.ExternalCombiTable1D.constructor(if dc.weaDat.datRea.isCsvExt then "Values" else "tab1", if dc.weaDat.datRea.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(dc.weaDat.datRea.fileName) then dc.weaDat.datRea.fileName else "NoName", {}, {2, 3, 4, 5, 6, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 8}, Modelica.Blocks.Types.Smoothness.ContinuousDerivative, Modelica.Blocks.Types.Extrapolation.LastTwoPoints, dc.weaDat.datRea.verboseRead, dc.weaDat.datRea.delimiter, dc.weaDat.datRea.nHeaderLines)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2289};
  (data->simulationInfo->extObjs[2]) = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[346]] /* dc.weaDat.datRea.isCsvExt PARAM */)?_OMC_LIT79:_OMC_LIT80), (((!stringEqual((data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[112]] /* dc.weaDat.datRea.fileName PARAM */), _OMC_LIT81)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[112]] /* dc.weaDat.datRea.fileName PARAM */))))?(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[112]] /* dc.weaDat.datRea.fileName PARAM */):_OMC_LIT81), _OMC_LIT82, _OMC_LIT83, 2, 2, (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[349]] /* dc.weaDat.datRea.verboseRead PARAM */), (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[111]] /* dc.weaDat.datRea.delimiter PARAM */), (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[408]] /* dc.weaDat.datRea.nHeaderLines PARAM */));
  threadData->lastEquationSolved = 2289;
}

/*
equation index: 2290
type: SIMPLE_ASSIGN
dc.weaDat.datRea30Min.fileName = dc.weaDat.filNam
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2290};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[115]] /* dc.weaDat.datRea30Min.fileName PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[117]] /* dc.weaDat.filNam PARAM */);
  threadData->lastEquationSolved = 2290;
}

/*
equation index: 2291
type: SIMPLE_ASSIGN
dc.weaDat.datRea30Min.delimiter = ","
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2291};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[114]] /* dc.weaDat.datRea30Min.delimiter PARAM */) = _OMC_LIT7;
  threadData->lastEquationSolved = 2291;
}

/*
equation index: 2294
type: SIMPLE_ASSIGN
dc.weaDat.datRea30Min.isCsvExt = Modelica.Utilities.Strings.findLast(dc.weaDat.datRea30Min.fileName, ".csv", 0, false) + 3 == Modelica.Utilities.Strings.length(dc.weaDat.datRea30Min.fileName)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2294};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[350]] /* dc.weaDat.datRea30Min.isCsvExt PARAM */) = (omc_Modelica_Utilities_Strings_findLast(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[115]] /* dc.weaDat.datRea30Min.fileName PARAM */), _OMC_LIT78, ((modelica_integer) 0), 0 /* false */) + ((modelica_integer) 3) == omc_Modelica_Utilities_Strings_length(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[115]] /* dc.weaDat.datRea30Min.fileName PARAM */)));
  threadData->lastEquationSolved = 2294;
}

/*
equation index: 2295
type: SIMPLE_ASSIGN
dc.weaDat.datRea30Min.tableID = Modelica.Blocks.Types.ExternalCombiTable1D.constructor(if dc.weaDat.datRea30Min.isCsvExt then "Values" else "tab1", if dc.weaDat.datRea30Min.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(dc.weaDat.datRea30Min.fileName) then dc.weaDat.datRea30Min.fileName else "NoName", {}, {9, 10, 11}, Modelica.Blocks.Types.Smoothness.ContinuousDerivative, Modelica.Blocks.Types.Extrapolation.LastTwoPoints, dc.weaDat.datRea30Min.verboseRead, dc.weaDat.datRea30Min.delimiter, dc.weaDat.datRea30Min.nHeaderLines)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2295};
  (data->simulationInfo->extObjs[3]) = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[350]] /* dc.weaDat.datRea30Min.isCsvExt PARAM */)?_OMC_LIT79:_OMC_LIT80), (((!stringEqual((data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[115]] /* dc.weaDat.datRea30Min.fileName PARAM */), _OMC_LIT81)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[115]] /* dc.weaDat.datRea30Min.fileName PARAM */))))?(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[115]] /* dc.weaDat.datRea30Min.fileName PARAM */):_OMC_LIT81), _OMC_LIT82, _OMC_LIT84, 2, 2, (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[353]] /* dc.weaDat.datRea30Min.verboseRead PARAM */), (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[114]] /* dc.weaDat.datRea30Min.delimiter PARAM */), (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[415]] /* dc.weaDat.datRea30Min.nHeaderLines PARAM */));
  threadData->lastEquationSolved = 2295;
}

/*
equation index: 2296
type: SIMPLE_ASSIGN
fanTable.shiftTime = fanTable.startTime
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2296};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1544]] /* fanTable.shiftTime PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1545]] /* fanTable.startTime PARAM */);
  threadData->lastEquationSolved = 2296;
}

/*
equation index: 2297
type: SIMPLE_ASSIGN
fanTable.tableID = Modelica.Blocks.Types.ExternalCombiTimeTable.constructor("NoName", "NoName", fanTable.table, fanTable.startTime, fanTable.columns, Modelica.Blocks.Types.Smoothness.ConstantSegments, Modelica.Blocks.Types.Extrapolation.LastTwoPoints, fanTable.shiftTime, Modelica.Blocks.Types.TimeEvents.Always, false, fanTable.delimiter, fanTable.nHeaderLines)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2297};
  real_array tmp0;
  integer_array tmp1;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1550]] /* fanTable.table[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 7 + (((modelica_integer) 1)-1)])), 2, (_index_t)2, (_index_t)7);
  integer_array_create(&tmp1, ((modelica_integer*)&((&data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[432]] /* fanTable.columns[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)6);
  (data->simulationInfo->extObjs[4]) = omc_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor(threadData, _OMC_LIT81, _OMC_LIT81, tmp0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1545]] /* fanTable.startTime PARAM */), tmp1, 3, 2, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1544]] /* fanTable.shiftTime PARAM */), 1, 0 /* false */, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[118]] /* fanTable.delimiter PARAM */), (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[439]] /* fanTable.nHeaderLines PARAM */));
  threadData->lastEquationSolved = 2297;
}

/*
equation index: 2298
type: SIMPLE_ASSIGN
TsupTable.shiftTime = TsupTable.startTime
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2298};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* TsupTable.shiftTime PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* TsupTable.startTime PARAM */);
  threadData->lastEquationSolved = 2298;
}

/*
equation index: 2299
type: SIMPLE_ASSIGN
TsupTable.tableID = Modelica.Blocks.Types.ExternalCombiTimeTable.constructor("NoName", "NoName", TsupTable.table, TsupTable.startTime, TsupTable.columns, Modelica.Blocks.Types.Smoothness.ConstantSegments, Modelica.Blocks.Types.Extrapolation.LastTwoPoints, TsupTable.shiftTime, Modelica.Blocks.Types.TimeEvents.Always, false, TsupTable.delimiter, TsupTable.nHeaderLines)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2299};
  real_array tmp2;
  integer_array tmp3;
  real_array_create(&tmp2, ((modelica_real*)&((&data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* TsupTable.table[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 7 + (((modelica_integer) 1)-1)])), 2, (_index_t)2, (_index_t)7);
  integer_array_create(&tmp3, ((modelica_integer*)&((&data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[0]] /* TsupTable.columns[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)6);
  (data->simulationInfo->extObjs[0]) = omc_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor(threadData, _OMC_LIT81, _OMC_LIT81, tmp2, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* TsupTable.startTime PARAM */), tmp3, 3, 2, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* TsupTable.shiftTime PARAM */), 1, 0 /* false */, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* TsupTable.delimiter PARAM */), (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* TsupTable.nHeaderLines PARAM */));
  threadData->lastEquationSolved = 2299;
}

/*
equation index: 2302
type: SIMPLE_ASSIGN
TsupTable.p_offset[6] = TsupTable.offset[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2302};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* TsupTable.p_offset[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* TsupTable.offset[1] PARAM */);
  threadData->lastEquationSolved = 2302;
}

/*
equation index: 2303
type: SIMPLE_ASSIGN
TsupTable.p_offset[5] = TsupTable.offset[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2303};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* TsupTable.p_offset[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* TsupTable.offset[1] PARAM */);
  threadData->lastEquationSolved = 2303;
}

/*
equation index: 2304
type: SIMPLE_ASSIGN
TsupTable.p_offset[4] = TsupTable.offset[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2304};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* TsupTable.p_offset[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* TsupTable.offset[1] PARAM */);
  threadData->lastEquationSolved = 2304;
}

/*
equation index: 2305
type: SIMPLE_ASSIGN
TsupTable.p_offset[3] = TsupTable.offset[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2305};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* TsupTable.p_offset[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* TsupTable.offset[1] PARAM */);
  threadData->lastEquationSolved = 2305;
}

/*
equation index: 2306
type: SIMPLE_ASSIGN
TsupTable.p_offset[2] = TsupTable.offset[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2306};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4]] /* TsupTable.p_offset[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* TsupTable.offset[1] PARAM */);
  threadData->lastEquationSolved = 2306;
}

/*
equation index: 2307
type: SIMPLE_ASSIGN
TsupTable.p_offset[1] = TsupTable.offset[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2307};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* TsupTable.p_offset[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* TsupTable.offset[1] PARAM */);
  threadData->lastEquationSolved = 2307;
}

/*
equation index: 2308
type: SIMPLE_ASSIGN
TsupTable.t_maxScaled = Modelica.Blocks.Tables.Internal.getTimeTableTmax(TsupTable.tableID)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2308};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* TsupTable.t_maxScaled PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableTmax(threadData, (data->simulationInfo->extObjs[0]));
  threadData->lastEquationSolved = 2308;
}

/*
equation index: 2309
type: SIMPLE_ASSIGN
TsupTable.t_minScaled = Modelica.Blocks.Tables.Internal.getTimeTableTmin(TsupTable.tableID)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2309};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* TsupTable.t_minScaled PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableTmin(threadData, (data->simulationInfo->extObjs[0]));
  threadData->lastEquationSolved = 2309;
}

/*
equation index: 2310
type: SIMPLE_ASSIGN
TsupTable.t_max = TsupTable.t_maxScaled
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2310};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* TsupTable.t_max PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* TsupTable.t_maxScaled PARAM */);
  threadData->lastEquationSolved = 2310;
}

/*
equation index: 2311
type: SIMPLE_ASSIGN
TsupTable.t_min = TsupTable.t_minScaled
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2311};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* TsupTable.t_min PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* TsupTable.t_minScaled PARAM */);
  threadData->lastEquationSolved = 2311;
}

/*
equation index: 2319
type: SIMPLE_ASSIGN
fanTable.p_offset[6] = fanTable.offset[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2319};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1543]] /* fanTable.p_offset[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1537]] /* fanTable.offset[1] PARAM */);
  threadData->lastEquationSolved = 2319;
}

/*
equation index: 2320
type: SIMPLE_ASSIGN
fanTable.p_offset[5] = fanTable.offset[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2320};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1542]] /* fanTable.p_offset[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1537]] /* fanTable.offset[1] PARAM */);
  threadData->lastEquationSolved = 2320;
}

/*
equation index: 2321
type: SIMPLE_ASSIGN
fanTable.p_offset[4] = fanTable.offset[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2321};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1541]] /* fanTable.p_offset[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1537]] /* fanTable.offset[1] PARAM */);
  threadData->lastEquationSolved = 2321;
}

/*
equation index: 2322
type: SIMPLE_ASSIGN
fanTable.p_offset[3] = fanTable.offset[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2322};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1540]] /* fanTable.p_offset[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1537]] /* fanTable.offset[1] PARAM */);
  threadData->lastEquationSolved = 2322;
}

/*
equation index: 2323
type: SIMPLE_ASSIGN
fanTable.p_offset[2] = fanTable.offset[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2323};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1539]] /* fanTable.p_offset[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1537]] /* fanTable.offset[1] PARAM */);
  threadData->lastEquationSolved = 2323;
}

/*
equation index: 2324
type: SIMPLE_ASSIGN
fanTable.p_offset[1] = fanTable.offset[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2324};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1538]] /* fanTable.p_offset[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1537]] /* fanTable.offset[1] PARAM */);
  threadData->lastEquationSolved = 2324;
}

/*
equation index: 2325
type: SIMPLE_ASSIGN
fanTable.t_maxScaled = Modelica.Blocks.Tables.Internal.getTimeTableTmax(fanTable.tableID)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2325};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1547]] /* fanTable.t_maxScaled PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableTmax(threadData, (data->simulationInfo->extObjs[4]));
  threadData->lastEquationSolved = 2325;
}

/*
equation index: 2326
type: SIMPLE_ASSIGN
fanTable.t_minScaled = Modelica.Blocks.Tables.Internal.getTimeTableTmin(fanTable.tableID)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2326};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1549]] /* fanTable.t_minScaled PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableTmin(threadData, (data->simulationInfo->extObjs[4]));
  threadData->lastEquationSolved = 2326;
}

/*
equation index: 2327
type: SIMPLE_ASSIGN
fanTable.t_max = fanTable.t_maxScaled
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2327};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1546]] /* fanTable.t_max PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1547]] /* fanTable.t_maxScaled PARAM */);
  threadData->lastEquationSolved = 2327;
}

/*
equation index: 2328
type: SIMPLE_ASSIGN
fanTable.t_min = fanTable.t_minScaled
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2328};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1548]] /* fanTable.t_min PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1549]] /* fanTable.t_minScaled PARAM */);
  threadData->lastEquationSolved = 2328;
}

/*
equation index: 2338
type: SIMPLE_ASSIGN
dc.mFlowRated[6].k = dc.m_flow_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2338};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* dc.mFlowRated[6].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* dc.m_flow_rated PARAM */);
  threadData->lastEquationSolved = 2338;
}

/*
equation index: 2339
type: SIMPLE_ASSIGN
dc.mFlowRated[5].k = dc.m_flow_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2339};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[36]] /* dc.mFlowRated[5].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* dc.m_flow_rated PARAM */);
  threadData->lastEquationSolved = 2339;
}

/*
equation index: 2340
type: SIMPLE_ASSIGN
dc.mFlowRated[4].k = dc.m_flow_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2340};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[35]] /* dc.mFlowRated[4].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* dc.m_flow_rated PARAM */);
  threadData->lastEquationSolved = 2340;
}

/*
equation index: 2341
type: SIMPLE_ASSIGN
dc.mFlowRated[3].k = dc.m_flow_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2341};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[34]] /* dc.mFlowRated[3].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* dc.m_flow_rated PARAM */);
  threadData->lastEquationSolved = 2341;
}

/*
equation index: 2342
type: SIMPLE_ASSIGN
dc.mFlowRated[2].k = dc.m_flow_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2342};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[33]] /* dc.mFlowRated[2].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* dc.m_flow_rated PARAM */);
  threadData->lastEquationSolved = 2342;
}

/*
equation index: 2343
type: SIMPLE_ASSIGN
dc.mFlowRated[1].k = dc.m_flow_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2343};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* dc.mFlowRated[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* dc.m_flow_rated PARAM */);
  threadData->lastEquationSolved = 2343;
}

/*
equation index: 2354
type: SIMPLE_ASSIGN
dc.retRes[6].m_flow_nominal = dc.m_flow_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2354};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* dc.retRes[6].m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* dc.m_flow_rated PARAM */);
  threadData->lastEquationSolved = 2354;
}

/*
equation index: 2355
type: SIMPLE_ASSIGN
dc.retRes[6].m_flow_nominal_pos = abs(dc.retRes[6].m_flow_nominal)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2355};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* dc.retRes[6].m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* dc.retRes[6].m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 2355;
}

/*
equation index: 2356
type: SIMPLE_ASSIGN
dc.retRes[6].k = 0.31622776601683794 * dc.retRes[6].m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2356};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[89]] /* dc.retRes[6].k PARAM */) = (0.31622776601683794) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* dc.retRes[6].m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 2356;
}

/*
equation index: 2360
type: SIMPLE_ASSIGN
dc.retRes[6].eta_default = 3.88335940547e-6 + 4.89493640395e-8 * dc.retRes[6].sta_default.T
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2360};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* dc.retRes[6].eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* dc.retRes[6].sta_default.T PARAM */));
  threadData->lastEquationSolved = 2360;
}

/*
equation index: 2364
type: SIMPLE_ASSIGN
dc.retRes[6].m_flow_turbulent = 0.3 * dc.retRes[6].m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2364};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* dc.retRes[6].m_flow_turbulent PARAM */) = (0.3) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* dc.retRes[6].m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 2364;
}

/*
equation index: 2371
type: SIMPLE_ASSIGN
dc.retRes[6].m_flow_small = 1e-4 * abs(dc.retRes[6].m_flow_nominal)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2371};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[107]] /* dc.retRes[6].m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* dc.retRes[6].m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 2371;
}

/*
equation index: 2375
type: SIMPLE_ASSIGN
dc.retRes[5].m_flow_nominal = dc.m_flow_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2375};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[94]] /* dc.retRes[5].m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* dc.m_flow_rated PARAM */);
  threadData->lastEquationSolved = 2375;
}

/*
equation index: 2376
type: SIMPLE_ASSIGN
dc.retRes[5].m_flow_nominal_pos = abs(dc.retRes[5].m_flow_nominal)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2376};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* dc.retRes[5].m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[94]] /* dc.retRes[5].m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 2376;
}

/*
equation index: 2377
type: SIMPLE_ASSIGN
dc.retRes[5].k = 0.31622776601683794 * dc.retRes[5].m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2377};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[88]] /* dc.retRes[5].k PARAM */) = (0.31622776601683794) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* dc.retRes[5].m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 2377;
}

/*
equation index: 2381
type: SIMPLE_ASSIGN
dc.retRes[5].eta_default = 3.88335940547e-6 + 4.89493640395e-8 * dc.retRes[5].sta_default.T
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2381};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[82]] /* dc.retRes[5].eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* dc.retRes[5].sta_default.T PARAM */));
  threadData->lastEquationSolved = 2381;
}

/*
equation index: 2385
type: SIMPLE_ASSIGN
dc.retRes[5].m_flow_turbulent = 0.3 * dc.retRes[5].m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2385};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* dc.retRes[5].m_flow_turbulent PARAM */) = (0.3) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* dc.retRes[5].m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 2385;
}

/*
equation index: 2392
type: SIMPLE_ASSIGN
dc.retRes[5].m_flow_small = 1e-4 * abs(dc.retRes[5].m_flow_nominal)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2392};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[106]] /* dc.retRes[5].m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[94]] /* dc.retRes[5].m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 2392;
}

/*
equation index: 2396
type: SIMPLE_ASSIGN
dc.retRes[4].m_flow_nominal = dc.m_flow_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2396};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* dc.retRes[4].m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* dc.m_flow_rated PARAM */);
  threadData->lastEquationSolved = 2396;
}

/*
equation index: 2397
type: SIMPLE_ASSIGN
dc.retRes[4].m_flow_nominal_pos = abs(dc.retRes[4].m_flow_nominal)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2397};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* dc.retRes[4].m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* dc.retRes[4].m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 2397;
}

/*
equation index: 2398
type: SIMPLE_ASSIGN
dc.retRes[4].k = 0.31622776601683794 * dc.retRes[4].m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2398};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* dc.retRes[4].k PARAM */) = (0.31622776601683794) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* dc.retRes[4].m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 2398;
}

/*
equation index: 2402
type: SIMPLE_ASSIGN
dc.retRes[4].eta_default = 3.88335940547e-6 + 4.89493640395e-8 * dc.retRes[4].sta_default.T
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2402};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[81]] /* dc.retRes[4].eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* dc.retRes[4].sta_default.T PARAM */));
  threadData->lastEquationSolved = 2402;
}

/*
equation index: 2406
type: SIMPLE_ASSIGN
dc.retRes[4].m_flow_turbulent = 0.3 * dc.retRes[4].m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2406};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* dc.retRes[4].m_flow_turbulent PARAM */) = (0.3) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* dc.retRes[4].m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 2406;
}

/*
equation index: 2413
type: SIMPLE_ASSIGN
dc.retRes[4].m_flow_small = 1e-4 * abs(dc.retRes[4].m_flow_nominal)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2413};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* dc.retRes[4].m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* dc.retRes[4].m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 2413;
}

/*
equation index: 2417
type: SIMPLE_ASSIGN
dc.retRes[3].m_flow_nominal = dc.m_flow_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2417};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* dc.retRes[3].m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* dc.m_flow_rated PARAM */);
  threadData->lastEquationSolved = 2417;
}

/*
equation index: 2418
type: SIMPLE_ASSIGN
dc.retRes[3].m_flow_nominal_pos = abs(dc.retRes[3].m_flow_nominal)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2418};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* dc.retRes[3].m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* dc.retRes[3].m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 2418;
}

/*
equation index: 2419
type: SIMPLE_ASSIGN
dc.retRes[3].k = 0.31622776601683794 * dc.retRes[3].m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2419};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[86]] /* dc.retRes[3].k PARAM */) = (0.31622776601683794) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* dc.retRes[3].m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 2419;
}

/*
equation index: 2423
type: SIMPLE_ASSIGN
dc.retRes[3].eta_default = 3.88335940547e-6 + 4.89493640395e-8 * dc.retRes[3].sta_default.T
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2423};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[80]] /* dc.retRes[3].eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* dc.retRes[3].sta_default.T PARAM */));
  threadData->lastEquationSolved = 2423;
}

/*
equation index: 2427
type: SIMPLE_ASSIGN
dc.retRes[3].m_flow_turbulent = 0.3 * dc.retRes[3].m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2427};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* dc.retRes[3].m_flow_turbulent PARAM */) = (0.3) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* dc.retRes[3].m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 2427;
}

/*
equation index: 2434
type: SIMPLE_ASSIGN
dc.retRes[3].m_flow_small = 1e-4 * abs(dc.retRes[3].m_flow_nominal)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2434};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[104]] /* dc.retRes[3].m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* dc.retRes[3].m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 2434;
}

/*
equation index: 2438
type: SIMPLE_ASSIGN
dc.retRes[2].m_flow_nominal = dc.m_flow_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2438};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[91]] /* dc.retRes[2].m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* dc.m_flow_rated PARAM */);
  threadData->lastEquationSolved = 2438;
}

/*
equation index: 2439
type: SIMPLE_ASSIGN
dc.retRes[2].m_flow_nominal_pos = abs(dc.retRes[2].m_flow_nominal)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2439};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* dc.retRes[2].m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[91]] /* dc.retRes[2].m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 2439;
}

/*
equation index: 2440
type: SIMPLE_ASSIGN
dc.retRes[2].k = 0.31622776601683794 * dc.retRes[2].m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2440};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[85]] /* dc.retRes[2].k PARAM */) = (0.31622776601683794) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* dc.retRes[2].m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 2440;
}

/*
equation index: 2444
type: SIMPLE_ASSIGN
dc.retRes[2].eta_default = 3.88335940547e-6 + 4.89493640395e-8 * dc.retRes[2].sta_default.T
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2444};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[79]] /* dc.retRes[2].eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* dc.retRes[2].sta_default.T PARAM */));
  threadData->lastEquationSolved = 2444;
}

/*
equation index: 2448
type: SIMPLE_ASSIGN
dc.retRes[2].m_flow_turbulent = 0.3 * dc.retRes[2].m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2448};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* dc.retRes[2].m_flow_turbulent PARAM */) = (0.3) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* dc.retRes[2].m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 2448;
}

/*
equation index: 2455
type: SIMPLE_ASSIGN
dc.retRes[2].m_flow_small = 1e-4 * abs(dc.retRes[2].m_flow_nominal)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2455};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* dc.retRes[2].m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[91]] /* dc.retRes[2].m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 2455;
}

/*
equation index: 2459
type: SIMPLE_ASSIGN
dc.retRes[1].m_flow_nominal = dc.m_flow_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2459};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[90]] /* dc.retRes[1].m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* dc.m_flow_rated PARAM */);
  threadData->lastEquationSolved = 2459;
}

/*
equation index: 2460
type: SIMPLE_ASSIGN
dc.retRes[1].m_flow_nominal_pos = abs(dc.retRes[1].m_flow_nominal)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2460};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* dc.retRes[1].m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[90]] /* dc.retRes[1].m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 2460;
}

/*
equation index: 2461
type: SIMPLE_ASSIGN
dc.retRes[1].k = 0.31622776601683794 * dc.retRes[1].m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2461};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* dc.retRes[1].k PARAM */) = (0.31622776601683794) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* dc.retRes[1].m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 2461;
}

/*
equation index: 2465
type: SIMPLE_ASSIGN
dc.retRes[1].eta_default = 3.88335940547e-6 + 4.89493640395e-8 * dc.retRes[1].sta_default.T
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2465};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* dc.retRes[1].eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* dc.retRes[1].sta_default.T PARAM */));
  threadData->lastEquationSolved = 2465;
}

/*
equation index: 2469
type: SIMPLE_ASSIGN
dc.retRes[1].m_flow_turbulent = 0.3 * dc.retRes[1].m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2469};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* dc.retRes[1].m_flow_turbulent PARAM */) = (0.3) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* dc.retRes[1].m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 2469;
}

/*
equation index: 2476
type: SIMPLE_ASSIGN
dc.retRes[1].m_flow_small = 1e-4 * abs(dc.retRes[1].m_flow_nominal)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2476};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[102]] /* dc.retRes[1].m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[90]] /* dc.retRes[1].m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 2476;
}

/*
equation index: 2478
type: SIMPLE_ASSIGN
dc.sup[6].T = dc.T_sup_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2478};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1462]] /* dc.sup[6].T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[31]] /* dc.T_sup_rated PARAM */);
  threadData->lastEquationSolved = 2478;
}

/*
equation index: 2480
type: SIMPLE_ASSIGN
dc.sup[6].m_flow = dc.m_flow_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2480};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1480]] /* dc.sup[6].m_flow PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* dc.m_flow_rated PARAM */);
  threadData->lastEquationSolved = 2480;
}

/*
equation index: 2488
type: SIMPLE_ASSIGN
dc.sup[5].T = dc.T_sup_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2488};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1461]] /* dc.sup[5].T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[31]] /* dc.T_sup_rated PARAM */);
  threadData->lastEquationSolved = 2488;
}

/*
equation index: 2490
type: SIMPLE_ASSIGN
dc.sup[5].m_flow = dc.m_flow_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2490};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1479]] /* dc.sup[5].m_flow PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* dc.m_flow_rated PARAM */);
  threadData->lastEquationSolved = 2490;
}

/*
equation index: 2498
type: SIMPLE_ASSIGN
dc.sup[4].T = dc.T_sup_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2498};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1460]] /* dc.sup[4].T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[31]] /* dc.T_sup_rated PARAM */);
  threadData->lastEquationSolved = 2498;
}

/*
equation index: 2500
type: SIMPLE_ASSIGN
dc.sup[4].m_flow = dc.m_flow_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2500};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1478]] /* dc.sup[4].m_flow PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* dc.m_flow_rated PARAM */);
  threadData->lastEquationSolved = 2500;
}

/*
equation index: 2508
type: SIMPLE_ASSIGN
dc.sup[3].T = dc.T_sup_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2508};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1459]] /* dc.sup[3].T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[31]] /* dc.T_sup_rated PARAM */);
  threadData->lastEquationSolved = 2508;
}

/*
equation index: 2510
type: SIMPLE_ASSIGN
dc.sup[3].m_flow = dc.m_flow_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2510};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1477]] /* dc.sup[3].m_flow PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* dc.m_flow_rated PARAM */);
  threadData->lastEquationSolved = 2510;
}

/*
equation index: 2518
type: SIMPLE_ASSIGN
dc.sup[2].T = dc.T_sup_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2518};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1458]] /* dc.sup[2].T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[31]] /* dc.T_sup_rated PARAM */);
  threadData->lastEquationSolved = 2518;
}

/*
equation index: 2520
type: SIMPLE_ASSIGN
dc.sup[2].m_flow = dc.m_flow_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2520};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1476]] /* dc.sup[2].m_flow PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* dc.m_flow_rated PARAM */);
  threadData->lastEquationSolved = 2520;
}

/*
equation index: 2528
type: SIMPLE_ASSIGN
dc.sup[1].T = dc.T_sup_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2528};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1457]] /* dc.sup[1].T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[31]] /* dc.T_sup_rated PARAM */);
  threadData->lastEquationSolved = 2528;
}

/*
equation index: 2530
type: SIMPLE_ASSIGN
dc.sup[1].m_flow = dc.m_flow_rated
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2530};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1475]] /* dc.sup[1].m_flow PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* dc.m_flow_rated PARAM */);
  threadData->lastEquationSolved = 2530;
}

/*
equation index: 2543
type: SIMPLE_ASSIGN
dc.weaDat.alt = Buildings.BoundaryConditions.WeatherData.BaseClasses.getAltitudeLocationTMY3(dc.weaDat.filNam)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2543};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1490]] /* dc.weaDat.alt PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAltitudeLocationTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[117]] /* dc.weaDat.filNam PARAM */));
  threadData->lastEquationSolved = 2543;
}

/*
equation index: 2544
type: SIMPLE_ASSIGN
dc.weaDat.altitude.Altitude = dc.weaDat.alt
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2544};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1491]] /* dc.weaDat.altitude.Altitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1490]] /* dc.weaDat.alt PARAM */);
  threadData->lastEquationSolved = 2544;
}

/*
equation index: 2545
type: SIMPLE_ASSIGN
dc.weaDat.lon = Buildings.BoundaryConditions.WeatherData.BaseClasses.getLongitudeTMY3(dc.weaDat.filNam)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2545};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1520]] /* dc.weaDat.lon PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[117]] /* dc.weaDat.filNam PARAM */));
  threadData->lastEquationSolved = 2545;
}

/*
equation index: 2546
type: SIMPLE_ASSIGN
dc.weaDat.longitude.longitude = dc.weaDat.lon
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2546};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1521]] /* dc.weaDat.longitude.longitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1520]] /* dc.weaDat.lon PARAM */);
  threadData->lastEquationSolved = 2546;
}

/*
equation index: 2547
type: SIMPLE_ASSIGN
dc.weaDat.datRea30Min.u_max = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmax(dc.weaDat.datRea30Min.tableID)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2547};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1512]] /* dc.weaDat.datRea30Min.u_max PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData, (data->simulationInfo->extObjs[3]));
  threadData->lastEquationSolved = 2547;
}

/*
equation index: 2548
type: SIMPLE_ASSIGN
dc.weaDat.datRea30Min.u_min = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmin(dc.weaDat.datRea30Min.tableID)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2548};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1513]] /* dc.weaDat.datRea30Min.u_min PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData, (data->simulationInfo->extObjs[3]));
  threadData->lastEquationSolved = 2548;
}

/*
equation index: 2555
type: SIMPLE_ASSIGN
dc.weaDat.datRea30Min.tableName = "tab1"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2555};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[116]] /* dc.weaDat.datRea30Min.tableName PARAM */) = _OMC_LIT80;
  threadData->lastEquationSolved = 2555;
}

/*
equation index: 2558
type: SIMPLE_ASSIGN
dc.weaDat.timZon = Buildings.BoundaryConditions.WeatherData.BaseClasses.getTimeZoneTMY3(dc.weaDat.filNam)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2558};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1528]] /* dc.weaDat.timZon PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[117]] /* dc.weaDat.filNam PARAM */));
  threadData->lastEquationSolved = 2558;
}

/*
equation index: 2559
type: SIMPLE_ASSIGN
dc.weaDat.locTim.timZon = dc.weaDat.timZon
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2559};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1519]] /* dc.weaDat.locTim.timZon PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1528]] /* dc.weaDat.timZon PARAM */);
  threadData->lastEquationSolved = 2559;
}

/*
equation index: 2560
type: SIMPLE_ASSIGN
dc.weaDat.locTim.lon = dc.weaDat.lon
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2560};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1518]] /* dc.weaDat.locTim.lon PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1520]] /* dc.weaDat.lon PARAM */);
  threadData->lastEquationSolved = 2560;
}

/*
equation index: 2561
type: SIMPLE_ASSIGN
dc.weaDat.locTim.diff = 13750.987083139758 * dc.weaDat.locTim.lon - dc.weaDat.locTim.timZon
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2561};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1517]] /* dc.weaDat.locTim.diff PARAM */) = (13750.987083139758) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1518]] /* dc.weaDat.locTim.lon PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1519]] /* dc.weaDat.locTim.timZon PARAM */);
  threadData->lastEquationSolved = 2561;
}

/*
equation index: 2572
type: SIMPLE_ASSIGN
dc.weaDat.horInfRadSel.p = dc.weaDat.HInfHor
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2572};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1514]] /* dc.weaDat.horInfRadSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1481]] /* dc.weaDat.HInfHor PARAM */);
  threadData->lastEquationSolved = 2572;
}

/*
equation index: 2574
type: SIMPLE_ASSIGN
dc.weaDat.winDirSel.p = dc.weaDat.winDir
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2574};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1534]] /* dc.weaDat.winDirSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1533]] /* dc.weaDat.winDir PARAM */);
  threadData->lastEquationSolved = 2574;
}

/*
equation index: 2576
type: SIMPLE_ASSIGN
dc.weaDat.winSpeSel.p = dc.weaDat.winSpe
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2576};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1536]] /* dc.weaDat.winSpeSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1535]] /* dc.weaDat.winSpe PARAM */);
  threadData->lastEquationSolved = 2576;
}

/*
equation index: 2578
type: SIMPLE_ASSIGN
dc.weaDat.totSkyCovSel.p = dc.weaDat.totSkyCov
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2578};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1532]] /* dc.weaDat.totSkyCovSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1531]] /* dc.weaDat.totSkyCov PARAM */);
  threadData->lastEquationSolved = 2578;
}

/*
equation index: 2580
type: SIMPLE_ASSIGN
dc.weaDat.ceiHeiSel.p = dc.weaDat.ceiHei
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2580};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1493]] /* dc.weaDat.ceiHeiSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1492]] /* dc.weaDat.ceiHei PARAM */);
  threadData->lastEquationSolved = 2580;
}

/*
equation index: 2582
type: SIMPLE_ASSIGN
dc.weaDat.opaSkyCovSel.p = dc.weaDat.opaSkyCov
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2582};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1523]] /* dc.weaDat.opaSkyCovSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1522]] /* dc.weaDat.opaSkyCov PARAM */);
  threadData->lastEquationSolved = 2582;
}

/*
equation index: 2584
type: SIMPLE_ASSIGN
dc.weaDat.relHumSel.p = dc.weaDat.relHum
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2584};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1527]] /* dc.weaDat.relHumSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1526]] /* dc.weaDat.relHum PARAM */);
  threadData->lastEquationSolved = 2584;
}

/*
equation index: 2586
type: SIMPLE_ASSIGN
dc.weaDat.TBlaSkySel.p = dc.weaDat.TBlaSky
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2586};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1483]] /* dc.weaDat.TBlaSkySel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1482]] /* dc.weaDat.TBlaSky PARAM */);
  threadData->lastEquationSolved = 2586;
}

/*
equation index: 2588
type: SIMPLE_ASSIGN
dc.weaDat.TDryBul = dc.T_init
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2588};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1486]] /* dc.weaDat.TDryBul PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[30]] /* dc.T_init PARAM */);
  threadData->lastEquationSolved = 2588;
}

/*
equation index: 2589
type: SIMPLE_ASSIGN
dc.weaDat.TDryBulSel.p = dc.weaDat.TDryBul
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2589};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1487]] /* dc.weaDat.TDryBulSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1486]] /* dc.weaDat.TDryBul PARAM */);
  threadData->lastEquationSolved = 2589;
}

/*
equation index: 2591
type: SIMPLE_ASSIGN
dc.weaDat.TDewPoiSel.p = dc.weaDat.TDewPoi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2591};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1485]] /* dc.weaDat.TDewPoiSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1484]] /* dc.weaDat.TDewPoi PARAM */);
  threadData->lastEquationSolved = 2591;
}

/*
equation index: 2593
type: SIMPLE_ASSIGN
dc.weaDat.pAtmSel.p = dc.weaDat.pAtm
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2593};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1525]] /* dc.weaDat.pAtmSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1524]] /* dc.weaDat.pAtm PARAM */);
  threadData->lastEquationSolved = 2593;
}

/*
equation index: 2595
type: SIMPLE_ASSIGN
dc.weaDat.datRea.u_max = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmax(dc.weaDat.datRea.tableID)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2595};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1510]] /* dc.weaDat.datRea.u_max PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData, (data->simulationInfo->extObjs[2]));
  threadData->lastEquationSolved = 2595;
}

/*
equation index: 2596
type: SIMPLE_ASSIGN
dc.weaDat.datRea.u_min = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmin(dc.weaDat.datRea.tableID)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2596};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1511]] /* dc.weaDat.datRea.u_min PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData, (data->simulationInfo->extObjs[2]));
  threadData->lastEquationSolved = 2596;
}

/*
equation index: 2626
type: SIMPLE_ASSIGN
dc.weaDat.datRea.tableName = "tab1"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2626};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[113]] /* dc.weaDat.datRea.tableName PARAM */) = _OMC_LIT80;
  threadData->lastEquationSolved = 2626;
}

/*
equation index: 2629
type: ARRAY_CALL_ASSIGN

dc.weaDat.timeSpan = Buildings.BoundaryConditions.WeatherData.BaseClasses.getTimeSpanTMY3(dc.weaDat.filNam, "tab1")
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2629};
  real_array tmp4;
  real_array_create(&tmp4, ((modelica_real*)&((&(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1529]] /* dc.weaDat.timeSpan[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[117]] /* dc.weaDat.filNam PARAM */), _OMC_LIT80), tmp4);
  threadData->lastEquationSolved = 2629;
}

/*
equation index: 2646
type: SIMPLE_ASSIGN
dc.roo.absCfdFilNam = Buildings.BoundaryConditions.WeatherData.BaseClasses.getAbsolutePath(dc.roo.cfdFilNam)
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2646};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[3]] /* dc.roo.absCfdFilNam PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAbsolutePath(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[54]] /* dc.roo.cfdFilNam PARAM */));
  threadData->lastEquationSolved = 2646;
}

/*
equation index: 2647
type: SIMPLE_ASSIGN
dc.roo.sensorName[1] = ""
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2647};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[104]] /* dc.roo.sensorName[1] PARAM */) = _OMC_LIT34;
  threadData->lastEquationSolved = 2647;
}

/*
equation index: 2648
type: SIMPLE_ASSIGN
dc.roo.samplePeriod = dc.samplePeriod
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2648};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1429]] /* dc.roo.samplePeriod PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1456]] /* dc.samplePeriod PARAM */);
  threadData->lastEquationSolved = 2648;
}

/*
equation index: 2653
type: SIMPLE_ASSIGN
dc.roo.heaGai.AFlo = dc.roo.AFlo
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2653};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[659]] /* dc.roo.heaGai.AFlo PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[142]] /* dc.roo.AFlo PARAM */);
  threadData->lastEquationSolved = 2653;
}

/*
equation index: 2669
type: SIMPLE_ASSIGN
dc.roo.tauIRSha_glass[1] = dc.roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2669};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1455]] /* dc.roo.tauIRSha_glass[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* dc.roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 2669;
}

/*
equation index: 2670
type: SIMPLE_ASSIGN
dc.roo.tauIRSha_air[1] = dc.roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2670};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1454]] /* dc.roo.tauIRSha_air[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* dc.roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 2670;
}

/*
equation index: 2672
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.shade.absIR_a = dc.roo.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2672};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1274]] /* dc.roo.radTem.datConExtWin[1].glaSys.shade.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[557]] /* dc.roo.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 2672;
}

/*
equation index: 2673
type: SIMPLE_ASSIGN
dc.roo.radTem.epsSha[1] = dc.roo.radTem.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2673};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1396]] /* dc.roo.radTem.epsSha[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1274]] /* dc.roo.radTem.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 2673;
}

/*
equation index: 2674
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b = dc.roo.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2674};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1267]] /* dc.roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* dc.roo.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 2674;
}

/*
equation index: 2675
type: SIMPLE_ASSIGN
dc.roo.radTem.epsGla[1] = dc.roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2675};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1395]] /* dc.roo.radTem.epsGla[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1267]] /* dc.roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 2675;
}

/*
equation index: 2676
type: SIMPLE_ASSIGN
dc.roo.datConExtWin[1].AWin = dc.roo.datConExtWin[1].hWin * dc.roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2676};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* dc.roo.datConExtWin[1].AWin PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* dc.roo.datConExtWin[1].hWin PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[590]] /* dc.roo.datConExtWin[1].wWin PARAM */));
  threadData->lastEquationSolved = 2676;
}

/*
equation index: 2677
type: SIMPLE_ASSIGN
dc.roo.datConExtWin[1].AFra = dc.roo.datConExtWin[1].fFra * dc.roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2677};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* dc.roo.datConExtWin[1].AFra PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[536]] /* dc.roo.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* dc.roo.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 2677;
}

/*
equation index: 2678
type: SIMPLE_ASSIGN
dc.roo.datConExtWin[1].AGla = dc.roo.datConExtWin[1].AWin - dc.roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2678};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[530]] /* dc.roo.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* dc.roo.datConExtWin[1].AWin PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* dc.roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 2678;
}

/*
equation index: 2679
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].AGla = dc.roo.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2679};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1247]] /* dc.roo.radTem.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[530]] /* dc.roo.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 2679;
}

/*
equation index: 2680
type: SIMPLE_ASSIGN
dc.roo.radTem.AGla[1] = dc.roo.radTem.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2680};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1196]] /* dc.roo.radTem.AGla[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1247]] /* dc.roo.radTem.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 2680;
}

/*
equation index: 2685
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[6].absIR = dc.roo.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2685};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1415]] /* dc.roo.radTem.surBou[6].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1441]] /* dc.roo.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 2685;
}

/*
equation index: 2686
type: SIMPLE_ASSIGN
dc.roo.radTem.epsSurBou[6] = dc.roo.radTem.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2686};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1402]] /* dc.roo.radTem.epsSurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1415]] /* dc.roo.radTem.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 2686;
}

/*
equation index: 2687
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[5].absIR = dc.roo.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2687};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1414]] /* dc.roo.radTem.surBou[5].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1440]] /* dc.roo.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 2687;
}

/*
equation index: 2688
type: SIMPLE_ASSIGN
dc.roo.radTem.epsSurBou[5] = dc.roo.radTem.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2688};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1401]] /* dc.roo.radTem.epsSurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1414]] /* dc.roo.radTem.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 2688;
}

/*
equation index: 2689
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[4].absIR = dc.roo.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2689};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1413]] /* dc.roo.radTem.surBou[4].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1439]] /* dc.roo.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 2689;
}

/*
equation index: 2690
type: SIMPLE_ASSIGN
dc.roo.radTem.epsSurBou[4] = dc.roo.radTem.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2690};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1400]] /* dc.roo.radTem.epsSurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1413]] /* dc.roo.radTem.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 2690;
}

/*
equation index: 2691
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[3].absIR = dc.roo.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2691};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1412]] /* dc.roo.radTem.surBou[3].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1438]] /* dc.roo.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 2691;
}

/*
equation index: 2692
type: SIMPLE_ASSIGN
dc.roo.radTem.epsSurBou[3] = dc.roo.radTem.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2692};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1399]] /* dc.roo.radTem.epsSurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1412]] /* dc.roo.radTem.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 2692;
}

/*
equation index: 2693
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[2].absIR = dc.roo.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2693};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1411]] /* dc.roo.radTem.surBou[2].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1437]] /* dc.roo.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 2693;
}

/*
equation index: 2694
type: SIMPLE_ASSIGN
dc.roo.radTem.epsSurBou[2] = dc.roo.radTem.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2694};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1398]] /* dc.roo.radTem.epsSurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1411]] /* dc.roo.radTem.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 2694;
}

/*
equation index: 2695
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[1].absIR = dc.roo.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2695};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1410]] /* dc.roo.radTem.surBou[1].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1436]] /* dc.roo.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 2695;
}

/*
equation index: 2696
type: SIMPLE_ASSIGN
dc.roo.radTem.epsSurBou[1] = dc.roo.radTem.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2696};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1397]] /* dc.roo.radTem.epsSurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1410]] /* dc.roo.radTem.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 2696;
}

/*
equation index: 2697
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].layers.absIR_b = dc.roo.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2697};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1209]] /* dc.roo.radTem.datConBou[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[492]] /* dc.roo.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2697;
}

/*
equation index: 2698
type: SIMPLE_ASSIGN
dc.roo.radTem.epsConBou[1] = dc.roo.radTem.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2698};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1387]] /* dc.roo.radTem.epsConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1209]] /* dc.roo.radTem.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2698;
}

/*
equation index: 2699
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].layers.absIR_b = dc.roo.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2699};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* dc.roo.radTem.datConPar[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[597]] /* dc.roo.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2699;
}

/*
equation index: 2700
type: SIMPLE_ASSIGN
dc.roo.radTem.epsConPar_b[1] = dc.roo.radTem.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2700};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1394]] /* dc.roo.radTem.epsConPar_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* dc.roo.radTem.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2700;
}

/*
equation index: 2701
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].layers.absIR_a = dc.roo.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2701};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1313]] /* dc.roo.radTem.datConPar[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[596]] /* dc.roo.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2701;
}

/*
equation index: 2702
type: SIMPLE_ASSIGN
dc.roo.radTem.epsConPar_a[1] = dc.roo.radTem.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2702};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1393]] /* dc.roo.radTem.epsConPar_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1313]] /* dc.roo.radTem.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2702;
}

/*
equation index: 2703
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.absIRFra = dc.roo.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2703};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1255]] /* dc.roo.radTem.datConExtWin[1].glaSys.absIRFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* dc.roo.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 2703;
}

/*
equation index: 2704
type: SIMPLE_ASSIGN
dc.roo.radTem.epsConExtWinFra[1] = dc.roo.radTem.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2704};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* dc.roo.radTem.epsConExtWinFra[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1255]] /* dc.roo.radTem.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 2704;
}

/*
equation index: 2705
type: SIMPLE_ASSIGN
dc.roo.radTem.epsConExtWinSha[1] = dc.roo.radTem.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2705};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1391]] /* dc.roo.radTem.epsConExtWinSha[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1274]] /* dc.roo.radTem.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 2705;
}

/*
equation index: 2706
type: SIMPLE_ASSIGN
dc.roo.radTem.epsConExtWinUns[1] = dc.roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2706};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1392]] /* dc.roo.radTem.epsConExtWinUns[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1267]] /* dc.roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 2706;
}

/*
equation index: 2707
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].layers.absIR_b = dc.roo.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2707};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* dc.roo.radTem.datConExtWin[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* dc.roo.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2707;
}

/*
equation index: 2708
type: SIMPLE_ASSIGN
dc.roo.radTem.epsConExtWinOpa[1] = dc.roo.radTem.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2708};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1390]] /* dc.roo.radTem.epsConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* dc.roo.radTem.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2708;
}

/*
equation index: 2709
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].layers.absIR_b = dc.roo.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2709};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1230]] /* dc.roo.radTem.datConExt[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* dc.roo.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2709;
}

/*
equation index: 2710
type: SIMPLE_ASSIGN
dc.roo.radTem.epsConExt[1] = dc.roo.radTem.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2710};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1388]] /* dc.roo.radTem.epsConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1230]] /* dc.roo.radTem.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2710;
}

/*
equation index: 2711
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[6].A = dc.roo.surBou[6].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2711};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1409]] /* dc.roo.radTem.surBou[6].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1435]] /* dc.roo.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 2711;
}

/*
equation index: 2712
type: SIMPLE_ASSIGN
dc.roo.radTem.ASurBou[6] = dc.roo.radTem.surBou[6].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2712};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1202]] /* dc.roo.radTem.ASurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1409]] /* dc.roo.radTem.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 2712;
}

/*
equation index: 2713
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[5].A = dc.roo.surBou[5].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2713};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1408]] /* dc.roo.radTem.surBou[5].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1434]] /* dc.roo.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 2713;
}

/*
equation index: 2714
type: SIMPLE_ASSIGN
dc.roo.radTem.ASurBou[5] = dc.roo.radTem.surBou[5].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2714};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1201]] /* dc.roo.radTem.ASurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1408]] /* dc.roo.radTem.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 2714;
}

/*
equation index: 2715
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[4].A = dc.roo.surBou[4].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2715};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1407]] /* dc.roo.radTem.surBou[4].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1433]] /* dc.roo.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 2715;
}

/*
equation index: 2716
type: SIMPLE_ASSIGN
dc.roo.radTem.ASurBou[4] = dc.roo.radTem.surBou[4].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2716};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1200]] /* dc.roo.radTem.ASurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1407]] /* dc.roo.radTem.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 2716;
}

/*
equation index: 2717
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[3].A = dc.roo.surBou[3].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2717};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1406]] /* dc.roo.radTem.surBou[3].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1432]] /* dc.roo.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 2717;
}

/*
equation index: 2718
type: SIMPLE_ASSIGN
dc.roo.radTem.ASurBou[3] = dc.roo.radTem.surBou[3].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2718};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1199]] /* dc.roo.radTem.ASurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1406]] /* dc.roo.radTem.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 2718;
}

/*
equation index: 2719
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[2].A = dc.roo.surBou[2].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2719};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1405]] /* dc.roo.radTem.surBou[2].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1431]] /* dc.roo.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 2719;
}

/*
equation index: 2720
type: SIMPLE_ASSIGN
dc.roo.radTem.ASurBou[2] = dc.roo.radTem.surBou[2].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2720};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1198]] /* dc.roo.radTem.ASurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1405]] /* dc.roo.radTem.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 2720;
}

/*
equation index: 2721
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[1].A = dc.roo.surBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2721};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1404]] /* dc.roo.radTem.surBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1430]] /* dc.roo.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 2721;
}

/*
equation index: 2722
type: SIMPLE_ASSIGN
dc.roo.radTem.ASurBou[1] = dc.roo.radTem.surBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2722};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1197]] /* dc.roo.radTem.ASurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1404]] /* dc.roo.radTem.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 2722;
}

/*
equation index: 2723
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].A = dc.roo.datConBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2723};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1203]] /* dc.roo.radTem.datConBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[486]] /* dc.roo.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 2723;
}

/*
equation index: 2724
type: SIMPLE_ASSIGN
dc.roo.radTem.AConBou[1] = dc.roo.radTem.datConBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2724};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1190]] /* dc.roo.radTem.AConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1203]] /* dc.roo.radTem.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 2724;
}

/*
equation index: 2725
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].A = dc.roo.datConPar[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2725};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1308]] /* dc.roo.radTem.datConPar[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[591]] /* dc.roo.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 2725;
}

/*
equation index: 2726
type: SIMPLE_ASSIGN
dc.roo.radTem.AConPar[1] = dc.roo.radTem.datConPar[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2726};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1195]] /* dc.roo.radTem.AConPar[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1308]] /* dc.roo.radTem.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 2726;
}

/*
equation index: 2727
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].AWin = dc.roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2727};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* dc.roo.radTem.datConExtWin[1].AWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* dc.roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 2727;
}

/*
equation index: 2728
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].fFra = dc.roo.datConExtWin[1].fFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2728};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* dc.roo.radTem.datConExtWin[1].fFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[536]] /* dc.roo.datConExtWin[1].fFra PARAM */);
  threadData->lastEquationSolved = 2728;
}

/*
equation index: 2729
type: SIMPLE_ASSIGN
dc.roo.radTem.AConExtWinFra[1] = dc.roo.radTem.datConExtWin[1].fFra * dc.roo.radTem.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2729};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1192]] /* dc.roo.radTem.AConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* dc.roo.radTem.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* dc.roo.radTem.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 2729;
}

/*
equation index: 2730
type: SIMPLE_ASSIGN
dc.roo.radTem.AConExtWinGla[1] = (1.0 - dc.roo.radTem.datConExtWin[1].fFra) * dc.roo.radTem.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2730};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1193]] /* dc.roo.radTem.AConExtWinGla[1] PARAM */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* dc.roo.radTem.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* dc.roo.radTem.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 2730;
}

/*
equation index: 2731
type: SIMPLE_ASSIGN
dc.roo.datConExtWin[1].AOpa = dc.roo.datConExtWin[1].A - dc.roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2731};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[531]] /* dc.roo.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* dc.roo.datConExtWin[1].A PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* dc.roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 2731;
}

/*
equation index: 2732
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].AOpa = dc.roo.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2732};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* dc.roo.radTem.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[531]] /* dc.roo.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 2732;
}

/*
equation index: 2733
type: SIMPLE_ASSIGN
dc.roo.radTem.AConExtWinOpa[1] = dc.roo.radTem.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2733};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1194]] /* dc.roo.radTem.AConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* dc.roo.radTem.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 2733;
}

/*
equation index: 2734
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].A = dc.roo.datConExt[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2734};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1224]] /* dc.roo.radTem.datConExt[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* dc.roo.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 2734;
}

/*
equation index: 2735
type: SIMPLE_ASSIGN
dc.roo.radTem.AConExt[1] = dc.roo.radTem.datConExt[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2735};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1191]] /* dc.roo.radTem.AConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1224]] /* dc.roo.radTem.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 2735;
}

/*
equation index: 2736
type: SIMPLE_ASSIGN
dc.roo.radTem.instanceName = "Scenario_s000_baseline.dc.roo.radTem"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2736};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[97]] /* dc.roo.radTem.instanceName PARAM */) = _OMC_LIT85;
  threadData->lastEquationSolved = 2736;
}

/*
equation index: 2742
type: SIMPLE_ASSIGN
dc.roo.radTem.dummyCon.R = dc.roo.radTem.dummyCon.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2742};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1329]] /* dc.roo.radTem.dummyCon.R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1335]] /* dc.roo.radTem.dummyCon.material[1].R PARAM */);
  threadData->lastEquationSolved = 2742;
}

/*
equation index: 2748
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[6].boundaryCondition = dc.roo.surBou[6].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2748};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[350]] /* dc.roo.radTem.surBou[6].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[356]] /* dc.roo.surBou[6].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2748;
}

/*
equation index: 2749
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[6].name = dc.roo.surBou[6].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2749};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[103]] /* dc.roo.radTem.surBou[6].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[110]] /* dc.roo.surBou[6].name PARAM */);
  threadData->lastEquationSolved = 2749;
}

/*
equation index: 2751
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[6].absSol = dc.roo.surBou[6].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2751};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1421]] /* dc.roo.radTem.surBou[6].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1447]] /* dc.roo.surBou[6].absSol PARAM */);
  threadData->lastEquationSolved = 2751;
}

/*
equation index: 2753
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[5].boundaryCondition = dc.roo.surBou[5].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2753};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[349]] /* dc.roo.radTem.surBou[5].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[355]] /* dc.roo.surBou[5].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2753;
}

/*
equation index: 2754
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[5].name = dc.roo.surBou[5].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2754};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[102]] /* dc.roo.radTem.surBou[5].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[109]] /* dc.roo.surBou[5].name PARAM */);
  threadData->lastEquationSolved = 2754;
}

/*
equation index: 2756
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[5].absSol = dc.roo.surBou[5].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2756};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1420]] /* dc.roo.radTem.surBou[5].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1446]] /* dc.roo.surBou[5].absSol PARAM */);
  threadData->lastEquationSolved = 2756;
}

/*
equation index: 2758
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[4].boundaryCondition = dc.roo.surBou[4].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2758};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[348]] /* dc.roo.radTem.surBou[4].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[354]] /* dc.roo.surBou[4].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2758;
}

/*
equation index: 2759
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[4].name = dc.roo.surBou[4].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2759};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[101]] /* dc.roo.radTem.surBou[4].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[108]] /* dc.roo.surBou[4].name PARAM */);
  threadData->lastEquationSolved = 2759;
}

/*
equation index: 2761
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[4].absSol = dc.roo.surBou[4].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2761};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1419]] /* dc.roo.radTem.surBou[4].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1445]] /* dc.roo.surBou[4].absSol PARAM */);
  threadData->lastEquationSolved = 2761;
}

/*
equation index: 2763
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[3].boundaryCondition = dc.roo.surBou[3].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2763};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[347]] /* dc.roo.radTem.surBou[3].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[353]] /* dc.roo.surBou[3].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2763;
}

/*
equation index: 2764
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[3].name = dc.roo.surBou[3].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2764};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[100]] /* dc.roo.radTem.surBou[3].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[107]] /* dc.roo.surBou[3].name PARAM */);
  threadData->lastEquationSolved = 2764;
}

/*
equation index: 2766
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[3].absSol = dc.roo.surBou[3].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2766};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1418]] /* dc.roo.radTem.surBou[3].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1444]] /* dc.roo.surBou[3].absSol PARAM */);
  threadData->lastEquationSolved = 2766;
}

/*
equation index: 2768
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[2].boundaryCondition = dc.roo.surBou[2].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2768};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[346]] /* dc.roo.radTem.surBou[2].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[352]] /* dc.roo.surBou[2].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2768;
}

/*
equation index: 2769
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[2].name = dc.roo.surBou[2].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2769};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[99]] /* dc.roo.radTem.surBou[2].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[106]] /* dc.roo.surBou[2].name PARAM */);
  threadData->lastEquationSolved = 2769;
}

/*
equation index: 2771
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[2].absSol = dc.roo.surBou[2].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2771};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1417]] /* dc.roo.radTem.surBou[2].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1443]] /* dc.roo.surBou[2].absSol PARAM */);
  threadData->lastEquationSolved = 2771;
}

/*
equation index: 2773
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[1].boundaryCondition = dc.roo.surBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2773};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[345]] /* dc.roo.radTem.surBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[351]] /* dc.roo.surBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2773;
}

/*
equation index: 2774
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[1].name = dc.roo.surBou[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2774};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[98]] /* dc.roo.radTem.surBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[105]] /* dc.roo.surBou[1].name PARAM */);
  threadData->lastEquationSolved = 2774;
}

/*
equation index: 2776
type: SIMPLE_ASSIGN
dc.roo.radTem.surBou[1].absSol = dc.roo.surBou[1].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2776};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1416]] /* dc.roo.radTem.surBou[1].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1442]] /* dc.roo.surBou[1].absSol PARAM */);
  threadData->lastEquationSolved = 2776;
}

/*
equation index: 2778
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].boundaryCondition = dc.roo.datConBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2778};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[311]] /* dc.roo.radTem.datConBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[168]] /* dc.roo.datConBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2778;
}

/*
equation index: 2781
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].T_b_start = dc.roo.datConBou[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2781};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1205]] /* dc.roo.radTem.datConBou[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[488]] /* dc.roo.datConBou[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2781;
}

/*
equation index: 2782
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].T_a_start = dc.roo.datConBou[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2782};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* dc.roo.radTem.datConBou[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[487]] /* dc.roo.datConBou[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2782;
}

/*
equation index: 2786
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].azi = dc.roo.datConBou[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2786};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1206]] /* dc.roo.radTem.datConBou[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[489]] /* dc.roo.datConBou[1].azi PARAM */);
  threadData->lastEquationSolved = 2786;
}

/*
equation index: 2788
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].layers.roughness_a = dc.roo.datConBou[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2788};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[316]] /* dc.roo.radTem.datConBou[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[173]] /* dc.roo.datConBou[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2788;
}

/*
equation index: 2789
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].layers.absSol_b = dc.roo.datConBou[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2789};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1211]] /* dc.roo.radTem.datConBou[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* dc.roo.datConBou[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2789;
}

/*
equation index: 2790
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].layers.absSol_a = dc.roo.datConBou[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2790};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1210]] /* dc.roo.radTem.datConBou[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* dc.roo.datConBou[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2790;
}

/*
equation index: 2791
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].layers.absIR_a = dc.roo.datConBou[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2791};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1208]] /* dc.roo.radTem.datConBou[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* dc.roo.datConBou[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2791;
}

/*
equation index: 2794
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].layers.material[1].LHea = dc.roo.datConBou[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2794};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* dc.roo.radTem.datConBou[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* dc.roo.datConBou[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2794;
}

/*
equation index: 2797
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].layers.material[1].nStaReal = dc.roo.datConBou[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2797};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1219]] /* dc.roo.radTem.datConBou[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* dc.roo.datConBou[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2797;
}

/*
equation index: 2798
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].layers.material[1].piMat = dc.roo.datConBou[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2798};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* dc.roo.radTem.datConBou[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* dc.roo.datConBou[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2798;
}

/*
equation index: 2799
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].layers.material[1].piRef = dc.roo.datConBou[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2799};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1221]] /* dc.roo.radTem.datConBou[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* dc.roo.datConBou[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2799;
}

/*
equation index: 2802
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].layers.material[1].nStaRef = dc.roo.datConBou[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2802};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[313]] /* dc.roo.radTem.datConBou[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[170]] /* dc.roo.datConBou[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2802;
}

/*
equation index: 2803
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].layers.material[1].R = dc.roo.datConBou[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2803};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* dc.roo.radTem.datConBou[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* dc.roo.datConBou[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2803;
}

/*
equation index: 2804
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].layers.material[1].d = dc.roo.datConBou[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2804};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1217]] /* dc.roo.radTem.datConBou[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* dc.roo.datConBou[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2804;
}

/*
equation index: 2805
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].layers.material[1].c = dc.roo.datConBou[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2805};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1216]] /* dc.roo.radTem.datConBou[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* dc.roo.datConBou[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2805;
}

/*
equation index: 2806
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].layers.material[1].k = dc.roo.datConBou[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2806};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1218]] /* dc.roo.radTem.datConBou[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* dc.roo.datConBou[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2806;
}

/*
equation index: 2807
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].layers.material[1].x = dc.roo.datConBou[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2807};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1222]] /* dc.roo.radTem.datConBou[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* dc.roo.datConBou[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2807;
}

/*
equation index: 2809
type: SIMPLE_ASSIGN
dc.roo.radTem.datConBou[1].name = dc.roo.datConBou[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2809};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[93]] /* dc.roo.radTem.datConBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[55]] /* dc.roo.datConBou[1].name PARAM */);
  threadData->lastEquationSolved = 2809;
}

/*
equation index: 2810
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].boundaryCondition = dc.roo.datConPar[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2810};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[329]] /* dc.roo.radTem.datConPar[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[186]] /* dc.roo.datConPar[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2810;
}

/*
equation index: 2813
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].T_b_start = dc.roo.datConPar[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2813};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1310]] /* dc.roo.radTem.datConPar[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[593]] /* dc.roo.datConPar[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2813;
}

/*
equation index: 2814
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].T_a_start = dc.roo.datConPar[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2814};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1309]] /* dc.roo.radTem.datConPar[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[592]] /* dc.roo.datConPar[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2814;
}

/*
equation index: 2818
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].azi = dc.roo.datConPar[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2818};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1311]] /* dc.roo.radTem.datConPar[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* dc.roo.datConPar[1].azi PARAM */);
  threadData->lastEquationSolved = 2818;
}

/*
equation index: 2820
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].layers.roughness_a = dc.roo.datConPar[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2820};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[334]] /* dc.roo.radTem.datConPar[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[191]] /* dc.roo.datConPar[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2820;
}

/*
equation index: 2821
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].layers.absSol_b = dc.roo.datConPar[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2821};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* dc.roo.radTem.datConPar[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[599]] /* dc.roo.datConPar[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2821;
}

/*
equation index: 2822
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].layers.absSol_a = dc.roo.datConPar[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2822};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* dc.roo.radTem.datConPar[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[598]] /* dc.roo.datConPar[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2822;
}

/*
equation index: 2825
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].layers.material[1].LHea = dc.roo.datConPar[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2825};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1317]] /* dc.roo.radTem.datConPar[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[600]] /* dc.roo.datConPar[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2825;
}

/*
equation index: 2828
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].layers.material[1].nStaReal = dc.roo.datConPar[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2828};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* dc.roo.radTem.datConPar[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[607]] /* dc.roo.datConPar[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2828;
}

/*
equation index: 2829
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].layers.material[1].piMat = dc.roo.datConPar[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2829};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1325]] /* dc.roo.radTem.datConPar[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[608]] /* dc.roo.datConPar[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2829;
}

/*
equation index: 2830
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].layers.material[1].piRef = dc.roo.datConPar[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2830};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1326]] /* dc.roo.radTem.datConPar[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[609]] /* dc.roo.datConPar[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2830;
}

/*
equation index: 2833
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].layers.material[1].nStaRef = dc.roo.datConPar[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2833};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[331]] /* dc.roo.radTem.datConPar[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[188]] /* dc.roo.datConPar[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2833;
}

/*
equation index: 2834
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].layers.material[1].R = dc.roo.datConPar[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2834};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1318]] /* dc.roo.radTem.datConPar[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* dc.roo.datConPar[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2834;
}

/*
equation index: 2835
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].layers.material[1].d = dc.roo.datConPar[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2835};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1322]] /* dc.roo.radTem.datConPar[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* dc.roo.datConPar[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2835;
}

/*
equation index: 2836
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].layers.material[1].c = dc.roo.datConPar[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2836};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1321]] /* dc.roo.radTem.datConPar[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[604]] /* dc.roo.datConPar[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2836;
}

/*
equation index: 2837
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].layers.material[1].k = dc.roo.datConPar[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2837};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1323]] /* dc.roo.radTem.datConPar[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[606]] /* dc.roo.datConPar[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2837;
}

/*
equation index: 2838
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].layers.material[1].x = dc.roo.datConPar[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2838};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* dc.roo.radTem.datConPar[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[610]] /* dc.roo.datConPar[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2838;
}

/*
equation index: 2840
type: SIMPLE_ASSIGN
dc.roo.radTem.datConPar[1].name = dc.roo.datConPar[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2840};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[96]] /* dc.roo.radTem.datConPar[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[58]] /* dc.roo.datConPar[1].name PARAM */);
  threadData->lastEquationSolved = 2840;
}

/*
equation index: 2844
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.absSolFra = dc.roo.datConExtWin[1].glaSys.absSolFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2844};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1256]] /* dc.roo.radTem.datConExtWin[1].glaSys.absSolFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[539]] /* dc.roo.datConExtWin[1].glaSys.absSolFra PARAM */);
  threadData->lastEquationSolved = 2844;
}

/*
equation index: 2845
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.UFra = dc.roo.datConExtWin[1].glaSys.UFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2845};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1254]] /* dc.roo.radTem.datConExtWin[1].glaSys.UFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[537]] /* dc.roo.datConExtWin[1].glaSys.UFra PARAM */);
  threadData->lastEquationSolved = 2845;
}

/*
equation index: 2846
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.shade.tauIR_b = dc.roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2846};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1279]] /* dc.roo.radTem.datConExtWin[1].glaSys.shade.tauIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* dc.roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 2846;
}

/*
equation index: 2847
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.shade.tauIR_a = dc.roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2847};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* dc.roo.radTem.datConExtWin[1].glaSys.shade.tauIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* dc.roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 2847;
}

/*
equation index: 2848
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.shade.absIR_b = dc.roo.datConExtWin[1].glaSys.shade.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2848};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1275]] /* dc.roo.radTem.datConExtWin[1].glaSys.shade.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* dc.roo.datConExtWin[1].glaSys.shade.absIR_b PARAM */);
  threadData->lastEquationSolved = 2848;
}

/*
equation index: 2849
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.shade.rhoSol_b = dc.roo.datConExtWin[1].glaSys.shade.rhoSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2849};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1277]] /* dc.roo.radTem.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* dc.roo.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */);
  threadData->lastEquationSolved = 2849;
}

/*
equation index: 2850
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.shade.rhoSol_a = dc.roo.datConExtWin[1].glaSys.shade.rhoSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2850};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1276]] /* dc.roo.radTem.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* dc.roo.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */);
  threadData->lastEquationSolved = 2850;
}

/*
equation index: 2851
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.shade.tauSol_b = dc.roo.datConExtWin[1].glaSys.shade.tauSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2851};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1281]] /* dc.roo.radTem.datConExtWin[1].glaSys.shade.tauSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[564]] /* dc.roo.datConExtWin[1].glaSys.shade.tauSol_b PARAM */);
  threadData->lastEquationSolved = 2851;
}

/*
equation index: 2852
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.shade.tauSol_a = dc.roo.datConExtWin[1].glaSys.shade.tauSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2852};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1280]] /* dc.roo.radTem.datConExtWin[1].glaSys.shade.tauSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[563]] /* dc.roo.datConExtWin[1].glaSys.shade.tauSol_a PARAM */);
  threadData->lastEquationSolved = 2852;
}

/*
equation index: 2853
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.gas[1].P0 = dc.roo.datConExtWin[1].glaSys.gas[1].P0
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2853};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1258]] /* dc.roo.radTem.datConExtWin[1].glaSys.gas[1].P0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* dc.roo.datConExtWin[1].glaSys.gas[1].P0 PARAM */);
  threadData->lastEquationSolved = 2853;
}

/*
equation index: 2854
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.gas[1].MM = dc.roo.datConExtWin[1].glaSys.gas[1].MM
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2854};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1257]] /* dc.roo.radTem.datConExtWin[1].glaSys.gas[1].MM PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[540]] /* dc.roo.datConExtWin[1].glaSys.gas[1].MM PARAM */);
  threadData->lastEquationSolved = 2854;
}

/*
equation index: 2855
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.gas[1].b_c = dc.roo.datConExtWin[1].glaSys.gas[1].b_c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2855};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1262]] /* dc.roo.radTem.datConExtWin[1].glaSys.gas[1].b_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[545]] /* dc.roo.datConExtWin[1].glaSys.gas[1].b_c PARAM */);
  threadData->lastEquationSolved = 2855;
}

/*
equation index: 2856
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.gas[1].a_c = dc.roo.datConExtWin[1].glaSys.gas[1].a_c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2856};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* dc.roo.radTem.datConExtWin[1].glaSys.gas[1].a_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* dc.roo.datConExtWin[1].glaSys.gas[1].a_c PARAM */);
  threadData->lastEquationSolved = 2856;
}

/*
equation index: 2857
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.gas[1].b_mu = dc.roo.datConExtWin[1].glaSys.gas[1].b_mu
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2857};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* dc.roo.radTem.datConExtWin[1].glaSys.gas[1].b_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* dc.roo.datConExtWin[1].glaSys.gas[1].b_mu PARAM */);
  threadData->lastEquationSolved = 2857;
}

/*
equation index: 2858
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.gas[1].a_mu = dc.roo.datConExtWin[1].glaSys.gas[1].a_mu
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2858};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1261]] /* dc.roo.radTem.datConExtWin[1].glaSys.gas[1].a_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* dc.roo.datConExtWin[1].glaSys.gas[1].a_mu PARAM */);
  threadData->lastEquationSolved = 2858;
}

/*
equation index: 2859
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.gas[1].b_k = dc.roo.datConExtWin[1].glaSys.gas[1].b_k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2859};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1263]] /* dc.roo.radTem.datConExtWin[1].glaSys.gas[1].b_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[546]] /* dc.roo.datConExtWin[1].glaSys.gas[1].b_k PARAM */);
  threadData->lastEquationSolved = 2859;
}

/*
equation index: 2860
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.gas[1].a_k = dc.roo.datConExtWin[1].glaSys.gas[1].a_k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2860};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1260]] /* dc.roo.radTem.datConExtWin[1].glaSys.gas[1].a_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* dc.roo.datConExtWin[1].glaSys.gas[1].a_k PARAM */);
  threadData->lastEquationSolved = 2860;
}

/*
equation index: 2861
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.gas[1].x = dc.roo.datConExtWin[1].glaSys.gas[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2861};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1265]] /* dc.roo.radTem.datConExtWin[1].glaSys.gas[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* dc.roo.datConExtWin[1].glaSys.gas[1].x PARAM */);
  threadData->lastEquationSolved = 2861;
}

/*
equation index: 2862
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_a = dc.roo.datConExtWin[1].glaSys.glass[1].absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2862};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* dc.roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* dc.roo.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */);
  threadData->lastEquationSolved = 2862;
}

/*
equation index: 2863
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.glass[1].tauIR = dc.roo.datConExtWin[1].glaSys.glass[1].tauIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2863};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1271]] /* dc.roo.radTem.datConExtWin[1].glaSys.glass[1].tauIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[554]] /* dc.roo.datConExtWin[1].glaSys.glass[1].tauIR PARAM */);
  threadData->lastEquationSolved = 2863;
}

/*
equation index: 2864
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] = dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2864};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1270]] /* dc.roo.radTem.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[553]] /* dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */);
  threadData->lastEquationSolved = 2864;
}

/*
equation index: 2865
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] = dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2865};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1269]] /* dc.roo.radTem.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[552]] /* dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */);
  threadData->lastEquationSolved = 2865;
}

/*
equation index: 2866
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.glass[1].tauSol[1] = dc.roo.datConExtWin[1].glaSys.glass[1].tauSol[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2866};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1272]] /* dc.roo.radTem.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* dc.roo.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */);
  threadData->lastEquationSolved = 2866;
}

/*
equation index: 2867
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.glass[1].k = dc.roo.datConExtWin[1].glaSys.glass[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2867};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1268]] /* dc.roo.radTem.datConExtWin[1].glaSys.glass[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* dc.roo.datConExtWin[1].glaSys.glass[1].k PARAM */);
  threadData->lastEquationSolved = 2867;
}

/*
equation index: 2868
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].glaSys.glass[1].x = dc.roo.datConExtWin[1].glaSys.glass[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2868};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1273]] /* dc.roo.radTem.datConExtWin[1].glaSys.glass[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[556]] /* dc.roo.datConExtWin[1].glaSys.glass[1].x PARAM */);
  threadData->lastEquationSolved = 2868;
}

/*
equation index: 2871
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].AFra = dc.roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2871};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* dc.roo.radTem.datConExtWin[1].AFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* dc.roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 2871;
}

/*
equation index: 2873
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].sidFin.gap = dc.roo.datConExtWin[1].sidFin.gap
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2873};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1304]] /* dc.roo.radTem.datConExtWin[1].sidFin.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[587]] /* dc.roo.datConExtWin[1].sidFin.gap PARAM */);
  threadData->lastEquationSolved = 2873;
}

/*
equation index: 2875
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].sidFin.h = dc.roo.datConExtWin[1].sidFin.h
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2875};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1305]] /* dc.roo.radTem.datConExtWin[1].sidFin.h PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[588]] /* dc.roo.datConExtWin[1].sidFin.h PARAM */);
  threadData->lastEquationSolved = 2875;
}

/*
equation index: 2877
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].ove.gap = dc.roo.datConExtWin[1].ove.gap
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2877};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* dc.roo.radTem.datConExtWin[1].ove.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[583]] /* dc.roo.datConExtWin[1].ove.gap PARAM */);
  threadData->lastEquationSolved = 2877;
}

/*
equation index: 2879
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].ove.wR = dc.roo.datConExtWin[1].ove.wR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2879};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1302]] /* dc.roo.radTem.datConExtWin[1].ove.wR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[585]] /* dc.roo.datConExtWin[1].ove.wR PARAM */);
  threadData->lastEquationSolved = 2879;
}

/*
equation index: 2880
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].ove.wL = dc.roo.datConExtWin[1].ove.wL
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2880};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* dc.roo.radTem.datConExtWin[1].ove.wL PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[584]] /* dc.roo.datConExtWin[1].ove.wL PARAM */);
  threadData->lastEquationSolved = 2880;
}

/*
equation index: 2881
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].wWin = dc.roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2881};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1307]] /* dc.roo.radTem.datConExtWin[1].wWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[590]] /* dc.roo.datConExtWin[1].wWin PARAM */);
  threadData->lastEquationSolved = 2881;
}

/*
equation index: 2882
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].hWin = dc.roo.datConExtWin[1].hWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2882};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1282]] /* dc.roo.radTem.datConExtWin[1].hWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* dc.roo.datConExtWin[1].hWin PARAM */);
  threadData->lastEquationSolved = 2882;
}

/*
equation index: 2883
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].A = dc.roo.datConExtWin[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2883};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* dc.roo.radTem.datConExtWin[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* dc.roo.datConExtWin[1].A PARAM */);
  threadData->lastEquationSolved = 2883;
}

/*
equation index: 2884
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].boundaryCondition = dc.roo.datConExtWin[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2884};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[323]] /* dc.roo.radTem.datConExtWin[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[180]] /* dc.roo.datConExtWin[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2884;
}

/*
equation index: 2887
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].T_b_start = dc.roo.datConExtWin[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2887};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* dc.roo.radTem.datConExtWin[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[534]] /* dc.roo.datConExtWin[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2887;
}

/*
equation index: 2888
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].T_a_start = dc.roo.datConExtWin[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2888};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1250]] /* dc.roo.radTem.datConExtWin[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* dc.roo.datConExtWin[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2888;
}

/*
equation index: 2892
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].azi = dc.roo.datConExtWin[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2892};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* dc.roo.radTem.datConExtWin[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[535]] /* dc.roo.datConExtWin[1].azi PARAM */);
  threadData->lastEquationSolved = 2892;
}

/*
equation index: 2894
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].layers.roughness_a = dc.roo.datConExtWin[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2894};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[328]] /* dc.roo.radTem.datConExtWin[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[185]] /* dc.roo.datConExtWin[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2894;
}

/*
equation index: 2895
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].layers.absSol_b = dc.roo.datConExtWin[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2895};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* dc.roo.radTem.datConExtWin[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[570]] /* dc.roo.datConExtWin[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2895;
}

/*
equation index: 2896
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].layers.absSol_a = dc.roo.datConExtWin[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2896};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1286]] /* dc.roo.radTem.datConExtWin[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[569]] /* dc.roo.datConExtWin[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2896;
}

/*
equation index: 2897
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].layers.absIR_a = dc.roo.datConExtWin[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2897};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1284]] /* dc.roo.radTem.datConExtWin[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* dc.roo.datConExtWin[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2897;
}

/*
equation index: 2900
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].layers.material[1].LHea = dc.roo.datConExtWin[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2900};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* dc.roo.datConExtWin[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2900;
}

/*
equation index: 2903
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].layers.material[1].nStaReal = dc.roo.datConExtWin[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2903};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[578]] /* dc.roo.datConExtWin[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2903;
}

/*
equation index: 2904
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].layers.material[1].piMat = dc.roo.datConExtWin[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2904};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1296]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[579]] /* dc.roo.datConExtWin[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2904;
}

/*
equation index: 2905
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].layers.material[1].piRef = dc.roo.datConExtWin[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2905};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[580]] /* dc.roo.datConExtWin[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2905;
}

/*
equation index: 2908
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].layers.material[1].nStaRef = dc.roo.datConExtWin[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2908};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[325]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[182]] /* dc.roo.datConExtWin[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2908;
}

/*
equation index: 2909
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].layers.material[1].R = dc.roo.datConExtWin[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2909};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* dc.roo.datConExtWin[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2909;
}

/*
equation index: 2910
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].layers.material[1].d = dc.roo.datConExtWin[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2910};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1293]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* dc.roo.datConExtWin[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2910;
}

/*
equation index: 2911
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].layers.material[1].c = dc.roo.datConExtWin[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2911};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1292]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* dc.roo.datConExtWin[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2911;
}

/*
equation index: 2912
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].layers.material[1].k = dc.roo.datConExtWin[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2912};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* dc.roo.datConExtWin[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2912;
}

/*
equation index: 2913
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].layers.material[1].x = dc.roo.datConExtWin[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2913};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[581]] /* dc.roo.datConExtWin[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2913;
}

/*
equation index: 2915
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExtWin[1].name = dc.roo.datConExtWin[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2915};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[95]] /* dc.roo.radTem.datConExtWin[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[57]] /* dc.roo.datConExtWin[1].name PARAM */);
  threadData->lastEquationSolved = 2915;
}

/*
equation index: 2916
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].boundaryCondition = dc.roo.datConExt[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2916};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[317]] /* dc.roo.radTem.datConExt[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[174]] /* dc.roo.datConExt[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2916;
}

/*
equation index: 2919
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].T_b_start = dc.roo.datConExt[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2919};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1226]] /* dc.roo.radTem.datConExt[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* dc.roo.datConExt[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2919;
}

/*
equation index: 2920
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].T_a_start = dc.roo.datConExt[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2920};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1225]] /* dc.roo.radTem.datConExt[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* dc.roo.datConExt[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2920;
}

/*
equation index: 2924
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].azi = dc.roo.datConExt[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2924};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1227]] /* dc.roo.radTem.datConExt[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* dc.roo.datConExt[1].azi PARAM */);
  threadData->lastEquationSolved = 2924;
}

/*
equation index: 2926
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].layers.roughness_a = dc.roo.datConExt[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2926};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[322]] /* dc.roo.radTem.datConExt[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[179]] /* dc.roo.datConExt[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2926;
}

/*
equation index: 2927
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].layers.absSol_b = dc.roo.datConExt[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2927};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1232]] /* dc.roo.radTem.datConExt[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* dc.roo.datConExt[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2927;
}

/*
equation index: 2928
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].layers.absSol_a = dc.roo.datConExt[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2928};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1231]] /* dc.roo.radTem.datConExt[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* dc.roo.datConExt[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2928;
}

/*
equation index: 2929
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].layers.absIR_a = dc.roo.datConExt[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2929};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1229]] /* dc.roo.radTem.datConExt[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* dc.roo.datConExt[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2929;
}

/*
equation index: 2932
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].layers.material[1].LHea = dc.roo.datConExt[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2932};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1233]] /* dc.roo.radTem.datConExt[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* dc.roo.datConExt[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2932;
}

/*
equation index: 2935
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].layers.material[1].nStaReal = dc.roo.datConExt[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2935};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1240]] /* dc.roo.radTem.datConExt[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* dc.roo.datConExt[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2935;
}

/*
equation index: 2936
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].layers.material[1].piMat = dc.roo.datConExt[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2936};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1241]] /* dc.roo.radTem.datConExt[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* dc.roo.datConExt[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2936;
}

/*
equation index: 2937
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].layers.material[1].piRef = dc.roo.datConExt[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2937};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* dc.roo.radTem.datConExt[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* dc.roo.datConExt[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2937;
}

/*
equation index: 2940
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].layers.material[1].nStaRef = dc.roo.datConExt[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2940};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[319]] /* dc.roo.radTem.datConExt[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[176]] /* dc.roo.datConExt[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2940;
}

/*
equation index: 2941
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].layers.material[1].R = dc.roo.datConExt[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2941};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1234]] /* dc.roo.radTem.datConExt[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* dc.roo.datConExt[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2941;
}

/*
equation index: 2942
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].layers.material[1].d = dc.roo.datConExt[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2942};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1238]] /* dc.roo.radTem.datConExt[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* dc.roo.datConExt[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2942;
}

/*
equation index: 2943
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].layers.material[1].c = dc.roo.datConExt[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2943};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* dc.roo.radTem.datConExt[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* dc.roo.datConExt[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2943;
}

/*
equation index: 2944
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].layers.material[1].k = dc.roo.datConExt[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2944};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1239]] /* dc.roo.radTem.datConExt[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* dc.roo.datConExt[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2944;
}

/*
equation index: 2945
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].layers.material[1].x = dc.roo.datConExt[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2945};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1243]] /* dc.roo.radTem.datConExt[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* dc.roo.datConExt[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2945;
}

/*
equation index: 2947
type: SIMPLE_ASSIGN
dc.roo.radTem.datConExt[1].name = dc.roo.datConExt[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2947};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[94]] /* dc.roo.radTem.datConExt[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[56]] /* dc.roo.datConExt[1].name PARAM */);
  threadData->lastEquationSolved = 2947;
}

/*
equation index: 2964
type: SIMPLE_ASSIGN
dc.roo.irRadExc.T03 = dc.roo.irRadExc.T0 ^ 3.0
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2964};
  modelica_real tmp5;
  tmp5 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[720]] /* dc.roo.irRadExc.T0 PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[721]] /* dc.roo.irRadExc.T03 PARAM */) = (tmp5 * tmp5 * tmp5);
  threadData->lastEquationSolved = 2964;
}

/*
equation index: 2973
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[6].absIR = dc.roo.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2973};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[941]] /* dc.roo.irRadExc.surBou[6].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1441]] /* dc.roo.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 2973;
}

/*
equation index: 2974
type: SIMPLE_ASSIGN
dc.roo.irRadExc.epsSurBou[6] = dc.roo.irRadExc.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2974};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[911]] /* dc.roo.irRadExc.epsSurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[941]] /* dc.roo.irRadExc.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 2974;
}

/*
equation index: 2975
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[5].absIR = dc.roo.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2975};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[940]] /* dc.roo.irRadExc.surBou[5].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1440]] /* dc.roo.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 2975;
}

/*
equation index: 2976
type: SIMPLE_ASSIGN
dc.roo.irRadExc.epsSurBou[5] = dc.roo.irRadExc.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2976};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[910]] /* dc.roo.irRadExc.epsSurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[940]] /* dc.roo.irRadExc.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 2976;
}

/*
equation index: 2977
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[4].absIR = dc.roo.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2977};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[939]] /* dc.roo.irRadExc.surBou[4].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1439]] /* dc.roo.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 2977;
}

/*
equation index: 2978
type: SIMPLE_ASSIGN
dc.roo.irRadExc.epsSurBou[4] = dc.roo.irRadExc.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2978};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[909]] /* dc.roo.irRadExc.epsSurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[939]] /* dc.roo.irRadExc.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 2978;
}

/*
equation index: 2979
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[3].absIR = dc.roo.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2979};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[938]] /* dc.roo.irRadExc.surBou[3].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1438]] /* dc.roo.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 2979;
}

/*
equation index: 2980
type: SIMPLE_ASSIGN
dc.roo.irRadExc.epsSurBou[3] = dc.roo.irRadExc.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2980};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[908]] /* dc.roo.irRadExc.epsSurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[938]] /* dc.roo.irRadExc.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 2980;
}

/*
equation index: 2981
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[2].absIR = dc.roo.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2981};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[937]] /* dc.roo.irRadExc.surBou[2].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1437]] /* dc.roo.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 2981;
}

/*
equation index: 2982
type: SIMPLE_ASSIGN
dc.roo.irRadExc.epsSurBou[2] = dc.roo.irRadExc.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2982};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[907]] /* dc.roo.irRadExc.epsSurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[937]] /* dc.roo.irRadExc.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 2982;
}

/*
equation index: 2983
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[1].absIR = dc.roo.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2983};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[936]] /* dc.roo.irRadExc.surBou[1].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1436]] /* dc.roo.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 2983;
}

/*
equation index: 2984
type: SIMPLE_ASSIGN
dc.roo.irRadExc.epsSurBou[1] = dc.roo.irRadExc.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2984};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[906]] /* dc.roo.irRadExc.epsSurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[936]] /* dc.roo.irRadExc.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 2984;
}

/*
equation index: 2985
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].layers.absIR_b = dc.roo.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2985};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[728]] /* dc.roo.irRadExc.datConBou[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[492]] /* dc.roo.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2985;
}

/*
equation index: 2986
type: SIMPLE_ASSIGN
dc.roo.irRadExc.epsConBou[1] = dc.roo.irRadExc.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2986};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[892]] /* dc.roo.irRadExc.epsConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[728]] /* dc.roo.irRadExc.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2986;
}

/*
equation index: 2987
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.absIR_b = dc.roo.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2987};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[833]] /* dc.roo.irRadExc.datConPar[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[597]] /* dc.roo.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2987;
}

/*
equation index: 2988
type: SIMPLE_ASSIGN
dc.roo.irRadExc.epsConPar_b[1] = dc.roo.irRadExc.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2988};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[899]] /* dc.roo.irRadExc.epsConPar_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[833]] /* dc.roo.irRadExc.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2988;
}

/*
equation index: 2989
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.absIR_a = dc.roo.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2989};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[832]] /* dc.roo.irRadExc.datConPar[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[596]] /* dc.roo.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2989;
}

/*
equation index: 2990
type: SIMPLE_ASSIGN
dc.roo.irRadExc.epsConPar_a[1] = dc.roo.irRadExc.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2990};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[898]] /* dc.roo.irRadExc.epsConPar_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[832]] /* dc.roo.irRadExc.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2990;
}

/*
equation index: 2991
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.absIRFra = dc.roo.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2991};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.absIRFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* dc.roo.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 2991;
}

/*
equation index: 2992
type: SIMPLE_ASSIGN
dc.roo.irRadExc.epsConExtWinFra[1] = dc.roo.irRadExc.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2992};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[894]] /* dc.roo.irRadExc.epsConExtWinFra[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 2992;
}

/*
equation index: 2993
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_a = dc.roo.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2993};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[557]] /* dc.roo.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 2993;
}

/*
equation index: 2994
type: SIMPLE_ASSIGN
dc.roo.irRadExc.epsConExtWinSha[1] = dc.roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2994};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[896]] /* dc.roo.irRadExc.epsConExtWinSha[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 2994;
}

/*
equation index: 2995
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_b = dc.roo.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2995};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* dc.roo.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 2995;
}

/*
equation index: 2996
type: SIMPLE_ASSIGN
dc.roo.irRadExc.epsConExtWinUns[1] = dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2996};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[897]] /* dc.roo.irRadExc.epsConExtWinUns[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 2996;
}

/*
equation index: 2997
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.absIR_b = dc.roo.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2997};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[804]] /* dc.roo.irRadExc.datConExtWin[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* dc.roo.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2997;
}

/*
equation index: 2998
type: SIMPLE_ASSIGN
dc.roo.irRadExc.epsConExtWinOpa[1] = dc.roo.irRadExc.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2998};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[895]] /* dc.roo.irRadExc.epsConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[804]] /* dc.roo.irRadExc.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2998;
}

/*
equation index: 2999
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.absIR_b = dc.roo.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_2999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2999};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* dc.roo.irRadExc.datConExt[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* dc.roo.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2999;
}

/*
equation index: 3000
type: SIMPLE_ASSIGN
dc.roo.irRadExc.epsConExt[1] = dc.roo.irRadExc.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3000};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[893]] /* dc.roo.irRadExc.epsConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* dc.roo.irRadExc.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3000;
}

/*
equation index: 3001
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[6].A = dc.roo.surBou[6].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3001};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[935]] /* dc.roo.irRadExc.surBou[6].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1435]] /* dc.roo.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 3001;
}

/*
equation index: 3002
type: SIMPLE_ASSIGN
dc.roo.irRadExc.ASurBou[6] = dc.roo.irRadExc.surBou[6].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3002};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[683]] /* dc.roo.irRadExc.ASurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[935]] /* dc.roo.irRadExc.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 3002;
}

/*
equation index: 3003
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[5].A = dc.roo.surBou[5].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3003};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[934]] /* dc.roo.irRadExc.surBou[5].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1434]] /* dc.roo.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 3003;
}

/*
equation index: 3004
type: SIMPLE_ASSIGN
dc.roo.irRadExc.ASurBou[5] = dc.roo.irRadExc.surBou[5].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3004};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[682]] /* dc.roo.irRadExc.ASurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[934]] /* dc.roo.irRadExc.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 3004;
}

/*
equation index: 3005
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[4].A = dc.roo.surBou[4].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3005};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[933]] /* dc.roo.irRadExc.surBou[4].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1433]] /* dc.roo.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 3005;
}

/*
equation index: 3006
type: SIMPLE_ASSIGN
dc.roo.irRadExc.ASurBou[4] = dc.roo.irRadExc.surBou[4].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3006};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[681]] /* dc.roo.irRadExc.ASurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[933]] /* dc.roo.irRadExc.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 3006;
}

/*
equation index: 3007
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[3].A = dc.roo.surBou[3].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3007};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[932]] /* dc.roo.irRadExc.surBou[3].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1432]] /* dc.roo.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 3007;
}

/*
equation index: 3008
type: SIMPLE_ASSIGN
dc.roo.irRadExc.ASurBou[3] = dc.roo.irRadExc.surBou[3].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3008};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[680]] /* dc.roo.irRadExc.ASurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[932]] /* dc.roo.irRadExc.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 3008;
}

/*
equation index: 3009
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[2].A = dc.roo.surBou[2].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3009};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[931]] /* dc.roo.irRadExc.surBou[2].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1431]] /* dc.roo.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 3009;
}

/*
equation index: 3010
type: SIMPLE_ASSIGN
dc.roo.irRadExc.ASurBou[2] = dc.roo.irRadExc.surBou[2].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3010};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[679]] /* dc.roo.irRadExc.ASurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[931]] /* dc.roo.irRadExc.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 3010;
}

/*
equation index: 3011
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[1].A = dc.roo.surBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3011};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[930]] /* dc.roo.irRadExc.surBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1430]] /* dc.roo.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 3011;
}

/*
equation index: 3012
type: SIMPLE_ASSIGN
dc.roo.irRadExc.ASurBou[1] = dc.roo.irRadExc.surBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3012};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* dc.roo.irRadExc.ASurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[930]] /* dc.roo.irRadExc.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 3012;
}

/*
equation index: 3013
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].A = dc.roo.datConBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3013};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[722]] /* dc.roo.irRadExc.datConBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[486]] /* dc.roo.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 3013;
}

/*
equation index: 3014
type: SIMPLE_ASSIGN
dc.roo.irRadExc.AConBou[1] = dc.roo.irRadExc.datConBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3014};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[666]] /* dc.roo.irRadExc.AConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[722]] /* dc.roo.irRadExc.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 3014;
}

/*
equation index: 3015
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].A = dc.roo.datConPar[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3015};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[827]] /* dc.roo.irRadExc.datConPar[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[591]] /* dc.roo.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 3015;
}

/*
equation index: 3016
type: SIMPLE_ASSIGN
dc.roo.irRadExc.AConPar[1] = dc.roo.irRadExc.datConPar[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3016};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[671]] /* dc.roo.irRadExc.AConPar[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[827]] /* dc.roo.irRadExc.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 3016;
}

/*
equation index: 3017
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].AWin = dc.roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3017};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[768]] /* dc.roo.irRadExc.datConExtWin[1].AWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* dc.roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 3017;
}

/*
equation index: 3018
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].fFra = dc.roo.datConExtWin[1].fFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3018};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[772]] /* dc.roo.irRadExc.datConExtWin[1].fFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[536]] /* dc.roo.datConExtWin[1].fFra PARAM */);
  threadData->lastEquationSolved = 3018;
}

/*
equation index: 3019
type: SIMPLE_ASSIGN
dc.roo.irRadExc.AConExtWinFra[1] = dc.roo.irRadExc.datConExtWin[1].fFra * dc.roo.irRadExc.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3019};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[668]] /* dc.roo.irRadExc.AConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[772]] /* dc.roo.irRadExc.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[768]] /* dc.roo.irRadExc.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 3019;
}

/*
equation index: 3020
type: SIMPLE_ASSIGN
dc.roo.irRadExc.AConExtWinGla[1] = (1.0 - dc.roo.irRadExc.datConExtWin[1].fFra) * dc.roo.irRadExc.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3020};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[669]] /* dc.roo.irRadExc.AConExtWinGla[1] PARAM */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[772]] /* dc.roo.irRadExc.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[768]] /* dc.roo.irRadExc.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 3020;
}

/*
equation index: 3021
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].AOpa = dc.roo.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3021};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[767]] /* dc.roo.irRadExc.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[531]] /* dc.roo.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 3021;
}

/*
equation index: 3022
type: SIMPLE_ASSIGN
dc.roo.irRadExc.AConExtWinOpa[1] = dc.roo.irRadExc.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3022};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[670]] /* dc.roo.irRadExc.AConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[767]] /* dc.roo.irRadExc.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 3022;
}

/*
equation index: 3023
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].A = dc.roo.datConExt[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3023};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[743]] /* dc.roo.irRadExc.datConExt[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* dc.roo.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 3023;
}

/*
equation index: 3024
type: SIMPLE_ASSIGN
dc.roo.irRadExc.AConExt[1] = dc.roo.irRadExc.datConExt[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3024};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[667]] /* dc.roo.irRadExc.AConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[743]] /* dc.roo.irRadExc.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 3024;
}

/*
equation index: 3025
type: SIMPLE_ASSIGN
dc.roo.irRadExc.instanceName = "Scenario_s000_baseline.dc.roo.irRadExc"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3025};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[63]] /* dc.roo.irRadExc.instanceName PARAM */) = _OMC_LIT86;
  threadData->lastEquationSolved = 3025;
}

/*
equation index: 3031
type: SIMPLE_ASSIGN
dc.roo.irRadExc.dummyCon.R = dc.roo.irRadExc.dummyCon.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3031};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[848]] /* dc.roo.irRadExc.dummyCon.R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[854]] /* dc.roo.irRadExc.dummyCon.material[1].R PARAM */);
  threadData->lastEquationSolved = 3031;
}

/*
equation index: 3037
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[6].boundaryCondition = dc.roo.surBou[6].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3037};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[249]] /* dc.roo.irRadExc.surBou[6].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[356]] /* dc.roo.surBou[6].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3037;
}

/*
equation index: 3038
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[6].name = dc.roo.surBou[6].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3038};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[69]] /* dc.roo.irRadExc.surBou[6].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[110]] /* dc.roo.surBou[6].name PARAM */);
  threadData->lastEquationSolved = 3038;
}

/*
equation index: 3040
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[6].absSol = dc.roo.surBou[6].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3040};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[947]] /* dc.roo.irRadExc.surBou[6].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1447]] /* dc.roo.surBou[6].absSol PARAM */);
  threadData->lastEquationSolved = 3040;
}

/*
equation index: 3042
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[5].boundaryCondition = dc.roo.surBou[5].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3042};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[248]] /* dc.roo.irRadExc.surBou[5].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[355]] /* dc.roo.surBou[5].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3042;
}

/*
equation index: 3043
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[5].name = dc.roo.surBou[5].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3043};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[68]] /* dc.roo.irRadExc.surBou[5].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[109]] /* dc.roo.surBou[5].name PARAM */);
  threadData->lastEquationSolved = 3043;
}

/*
equation index: 3045
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[5].absSol = dc.roo.surBou[5].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3045};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[946]] /* dc.roo.irRadExc.surBou[5].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1446]] /* dc.roo.surBou[5].absSol PARAM */);
  threadData->lastEquationSolved = 3045;
}

/*
equation index: 3047
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[4].boundaryCondition = dc.roo.surBou[4].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3047};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[247]] /* dc.roo.irRadExc.surBou[4].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[354]] /* dc.roo.surBou[4].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3047;
}

/*
equation index: 3048
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[4].name = dc.roo.surBou[4].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3048};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[67]] /* dc.roo.irRadExc.surBou[4].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[108]] /* dc.roo.surBou[4].name PARAM */);
  threadData->lastEquationSolved = 3048;
}

/*
equation index: 3050
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[4].absSol = dc.roo.surBou[4].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3050};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[945]] /* dc.roo.irRadExc.surBou[4].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1445]] /* dc.roo.surBou[4].absSol PARAM */);
  threadData->lastEquationSolved = 3050;
}

/*
equation index: 3052
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[3].boundaryCondition = dc.roo.surBou[3].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3052};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[246]] /* dc.roo.irRadExc.surBou[3].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[353]] /* dc.roo.surBou[3].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3052;
}

/*
equation index: 3053
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[3].name = dc.roo.surBou[3].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3053};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[66]] /* dc.roo.irRadExc.surBou[3].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[107]] /* dc.roo.surBou[3].name PARAM */);
  threadData->lastEquationSolved = 3053;
}

/*
equation index: 3055
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[3].absSol = dc.roo.surBou[3].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3055};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[944]] /* dc.roo.irRadExc.surBou[3].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1444]] /* dc.roo.surBou[3].absSol PARAM */);
  threadData->lastEquationSolved = 3055;
}

/*
equation index: 3057
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[2].boundaryCondition = dc.roo.surBou[2].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3057};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[245]] /* dc.roo.irRadExc.surBou[2].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[352]] /* dc.roo.surBou[2].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3057;
}

/*
equation index: 3058
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[2].name = dc.roo.surBou[2].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3058};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[65]] /* dc.roo.irRadExc.surBou[2].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[106]] /* dc.roo.surBou[2].name PARAM */);
  threadData->lastEquationSolved = 3058;
}

/*
equation index: 3060
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[2].absSol = dc.roo.surBou[2].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3060};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[943]] /* dc.roo.irRadExc.surBou[2].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1443]] /* dc.roo.surBou[2].absSol PARAM */);
  threadData->lastEquationSolved = 3060;
}

/*
equation index: 3062
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[1].boundaryCondition = dc.roo.surBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3062};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[244]] /* dc.roo.irRadExc.surBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[351]] /* dc.roo.surBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3062;
}

/*
equation index: 3063
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[1].name = dc.roo.surBou[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3063};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[64]] /* dc.roo.irRadExc.surBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[105]] /* dc.roo.surBou[1].name PARAM */);
  threadData->lastEquationSolved = 3063;
}

/*
equation index: 3065
type: SIMPLE_ASSIGN
dc.roo.irRadExc.surBou[1].absSol = dc.roo.surBou[1].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3065};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* dc.roo.irRadExc.surBou[1].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1442]] /* dc.roo.surBou[1].absSol PARAM */);
  threadData->lastEquationSolved = 3065;
}

/*
equation index: 3067
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].boundaryCondition = dc.roo.datConBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3067};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[207]] /* dc.roo.irRadExc.datConBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[168]] /* dc.roo.datConBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3067;
}

/*
equation index: 3070
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].T_b_start = dc.roo.datConBou[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3070};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[724]] /* dc.roo.irRadExc.datConBou[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[488]] /* dc.roo.datConBou[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 3070;
}

/*
equation index: 3071
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].T_a_start = dc.roo.datConBou[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3071};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[723]] /* dc.roo.irRadExc.datConBou[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[487]] /* dc.roo.datConBou[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 3071;
}

/*
equation index: 3075
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].azi = dc.roo.datConBou[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3075};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[725]] /* dc.roo.irRadExc.datConBou[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[489]] /* dc.roo.datConBou[1].azi PARAM */);
  threadData->lastEquationSolved = 3075;
}

/*
equation index: 3077
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].layers.roughness_a = dc.roo.datConBou[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3077};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[212]] /* dc.roo.irRadExc.datConBou[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[173]] /* dc.roo.datConBou[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 3077;
}

/*
equation index: 3078
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].layers.absSol_b = dc.roo.datConBou[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3078};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* dc.roo.irRadExc.datConBou[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* dc.roo.datConBou[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 3078;
}

/*
equation index: 3079
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].layers.absSol_a = dc.roo.datConBou[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3079};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* dc.roo.irRadExc.datConBou[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* dc.roo.datConBou[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 3079;
}

/*
equation index: 3080
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].layers.absIR_a = dc.roo.datConBou[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3080};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[727]] /* dc.roo.irRadExc.datConBou[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* dc.roo.datConBou[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 3080;
}

/*
equation index: 3083
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].layers.material[1].LHea = dc.roo.datConBou[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3083};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* dc.roo.datConBou[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 3083;
}

/*
equation index: 3086
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].layers.material[1].nStaReal = dc.roo.datConBou[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3086};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* dc.roo.datConBou[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 3086;
}

/*
equation index: 3087
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].layers.material[1].piMat = dc.roo.datConBou[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3087};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* dc.roo.datConBou[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 3087;
}

/*
equation index: 3088
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].layers.material[1].piRef = dc.roo.datConBou[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3088};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[740]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* dc.roo.datConBou[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 3088;
}

/*
equation index: 3091
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].layers.material[1].nStaRef = dc.roo.datConBou[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3091};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[209]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[170]] /* dc.roo.datConBou[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 3091;
}

/*
equation index: 3092
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].layers.material[1].R = dc.roo.datConBou[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3092};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* dc.roo.datConBou[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 3092;
}

/*
equation index: 3093
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].layers.material[1].d = dc.roo.datConBou[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3093};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[736]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* dc.roo.datConBou[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 3093;
}

/*
equation index: 3094
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].layers.material[1].c = dc.roo.datConBou[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3094};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[735]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* dc.roo.datConBou[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 3094;
}

/*
equation index: 3095
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].layers.material[1].k = dc.roo.datConBou[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3095};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* dc.roo.datConBou[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 3095;
}

/*
equation index: 3096
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].layers.material[1].x = dc.roo.datConBou[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3096};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[741]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* dc.roo.datConBou[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 3096;
}

/*
equation index: 3098
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConBou[1].name = dc.roo.datConBou[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3098};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[59]] /* dc.roo.irRadExc.datConBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[55]] /* dc.roo.datConBou[1].name PARAM */);
  threadData->lastEquationSolved = 3098;
}
OMC_DISABLE_OPT
void s000_baseline_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[405])(DATA*, threadData_t*) = {
    s000_baseline_eqFunction_2279,
    s000_baseline_eqFunction_2280,
    s000_baseline_eqFunction_2281,
    s000_baseline_eqFunction_2282,
    s000_baseline_eqFunction_2283,
    s000_baseline_eqFunction_2284,
    s000_baseline_eqFunction_2285,
    s000_baseline_eqFunction_2288,
    s000_baseline_eqFunction_2289,
    s000_baseline_eqFunction_2290,
    s000_baseline_eqFunction_2291,
    s000_baseline_eqFunction_2294,
    s000_baseline_eqFunction_2295,
    s000_baseline_eqFunction_2296,
    s000_baseline_eqFunction_2297,
    s000_baseline_eqFunction_2298,
    s000_baseline_eqFunction_2299,
    s000_baseline_eqFunction_2302,
    s000_baseline_eqFunction_2303,
    s000_baseline_eqFunction_2304,
    s000_baseline_eqFunction_2305,
    s000_baseline_eqFunction_2306,
    s000_baseline_eqFunction_2307,
    s000_baseline_eqFunction_2308,
    s000_baseline_eqFunction_2309,
    s000_baseline_eqFunction_2310,
    s000_baseline_eqFunction_2311,
    s000_baseline_eqFunction_2319,
    s000_baseline_eqFunction_2320,
    s000_baseline_eqFunction_2321,
    s000_baseline_eqFunction_2322,
    s000_baseline_eqFunction_2323,
    s000_baseline_eqFunction_2324,
    s000_baseline_eqFunction_2325,
    s000_baseline_eqFunction_2326,
    s000_baseline_eqFunction_2327,
    s000_baseline_eqFunction_2328,
    s000_baseline_eqFunction_2338,
    s000_baseline_eqFunction_2339,
    s000_baseline_eqFunction_2340,
    s000_baseline_eqFunction_2341,
    s000_baseline_eqFunction_2342,
    s000_baseline_eqFunction_2343,
    s000_baseline_eqFunction_2354,
    s000_baseline_eqFunction_2355,
    s000_baseline_eqFunction_2356,
    s000_baseline_eqFunction_2360,
    s000_baseline_eqFunction_2364,
    s000_baseline_eqFunction_2371,
    s000_baseline_eqFunction_2375,
    s000_baseline_eqFunction_2376,
    s000_baseline_eqFunction_2377,
    s000_baseline_eqFunction_2381,
    s000_baseline_eqFunction_2385,
    s000_baseline_eqFunction_2392,
    s000_baseline_eqFunction_2396,
    s000_baseline_eqFunction_2397,
    s000_baseline_eqFunction_2398,
    s000_baseline_eqFunction_2402,
    s000_baseline_eqFunction_2406,
    s000_baseline_eqFunction_2413,
    s000_baseline_eqFunction_2417,
    s000_baseline_eqFunction_2418,
    s000_baseline_eqFunction_2419,
    s000_baseline_eqFunction_2423,
    s000_baseline_eqFunction_2427,
    s000_baseline_eqFunction_2434,
    s000_baseline_eqFunction_2438,
    s000_baseline_eqFunction_2439,
    s000_baseline_eqFunction_2440,
    s000_baseline_eqFunction_2444,
    s000_baseline_eqFunction_2448,
    s000_baseline_eqFunction_2455,
    s000_baseline_eqFunction_2459,
    s000_baseline_eqFunction_2460,
    s000_baseline_eqFunction_2461,
    s000_baseline_eqFunction_2465,
    s000_baseline_eqFunction_2469,
    s000_baseline_eqFunction_2476,
    s000_baseline_eqFunction_2478,
    s000_baseline_eqFunction_2480,
    s000_baseline_eqFunction_2488,
    s000_baseline_eqFunction_2490,
    s000_baseline_eqFunction_2498,
    s000_baseline_eqFunction_2500,
    s000_baseline_eqFunction_2508,
    s000_baseline_eqFunction_2510,
    s000_baseline_eqFunction_2518,
    s000_baseline_eqFunction_2520,
    s000_baseline_eqFunction_2528,
    s000_baseline_eqFunction_2530,
    s000_baseline_eqFunction_2543,
    s000_baseline_eqFunction_2544,
    s000_baseline_eqFunction_2545,
    s000_baseline_eqFunction_2546,
    s000_baseline_eqFunction_2547,
    s000_baseline_eqFunction_2548,
    s000_baseline_eqFunction_2555,
    s000_baseline_eqFunction_2558,
    s000_baseline_eqFunction_2559,
    s000_baseline_eqFunction_2560,
    s000_baseline_eqFunction_2561,
    s000_baseline_eqFunction_2572,
    s000_baseline_eqFunction_2574,
    s000_baseline_eqFunction_2576,
    s000_baseline_eqFunction_2578,
    s000_baseline_eqFunction_2580,
    s000_baseline_eqFunction_2582,
    s000_baseline_eqFunction_2584,
    s000_baseline_eqFunction_2586,
    s000_baseline_eqFunction_2588,
    s000_baseline_eqFunction_2589,
    s000_baseline_eqFunction_2591,
    s000_baseline_eqFunction_2593,
    s000_baseline_eqFunction_2595,
    s000_baseline_eqFunction_2596,
    s000_baseline_eqFunction_2626,
    s000_baseline_eqFunction_2629,
    s000_baseline_eqFunction_2646,
    s000_baseline_eqFunction_2647,
    s000_baseline_eqFunction_2648,
    s000_baseline_eqFunction_2653,
    s000_baseline_eqFunction_2669,
    s000_baseline_eqFunction_2670,
    s000_baseline_eqFunction_2672,
    s000_baseline_eqFunction_2673,
    s000_baseline_eqFunction_2674,
    s000_baseline_eqFunction_2675,
    s000_baseline_eqFunction_2676,
    s000_baseline_eqFunction_2677,
    s000_baseline_eqFunction_2678,
    s000_baseline_eqFunction_2679,
    s000_baseline_eqFunction_2680,
    s000_baseline_eqFunction_2685,
    s000_baseline_eqFunction_2686,
    s000_baseline_eqFunction_2687,
    s000_baseline_eqFunction_2688,
    s000_baseline_eqFunction_2689,
    s000_baseline_eqFunction_2690,
    s000_baseline_eqFunction_2691,
    s000_baseline_eqFunction_2692,
    s000_baseline_eqFunction_2693,
    s000_baseline_eqFunction_2694,
    s000_baseline_eqFunction_2695,
    s000_baseline_eqFunction_2696,
    s000_baseline_eqFunction_2697,
    s000_baseline_eqFunction_2698,
    s000_baseline_eqFunction_2699,
    s000_baseline_eqFunction_2700,
    s000_baseline_eqFunction_2701,
    s000_baseline_eqFunction_2702,
    s000_baseline_eqFunction_2703,
    s000_baseline_eqFunction_2704,
    s000_baseline_eqFunction_2705,
    s000_baseline_eqFunction_2706,
    s000_baseline_eqFunction_2707,
    s000_baseline_eqFunction_2708,
    s000_baseline_eqFunction_2709,
    s000_baseline_eqFunction_2710,
    s000_baseline_eqFunction_2711,
    s000_baseline_eqFunction_2712,
    s000_baseline_eqFunction_2713,
    s000_baseline_eqFunction_2714,
    s000_baseline_eqFunction_2715,
    s000_baseline_eqFunction_2716,
    s000_baseline_eqFunction_2717,
    s000_baseline_eqFunction_2718,
    s000_baseline_eqFunction_2719,
    s000_baseline_eqFunction_2720,
    s000_baseline_eqFunction_2721,
    s000_baseline_eqFunction_2722,
    s000_baseline_eqFunction_2723,
    s000_baseline_eqFunction_2724,
    s000_baseline_eqFunction_2725,
    s000_baseline_eqFunction_2726,
    s000_baseline_eqFunction_2727,
    s000_baseline_eqFunction_2728,
    s000_baseline_eqFunction_2729,
    s000_baseline_eqFunction_2730,
    s000_baseline_eqFunction_2731,
    s000_baseline_eqFunction_2732,
    s000_baseline_eqFunction_2733,
    s000_baseline_eqFunction_2734,
    s000_baseline_eqFunction_2735,
    s000_baseline_eqFunction_2736,
    s000_baseline_eqFunction_2742,
    s000_baseline_eqFunction_2748,
    s000_baseline_eqFunction_2749,
    s000_baseline_eqFunction_2751,
    s000_baseline_eqFunction_2753,
    s000_baseline_eqFunction_2754,
    s000_baseline_eqFunction_2756,
    s000_baseline_eqFunction_2758,
    s000_baseline_eqFunction_2759,
    s000_baseline_eqFunction_2761,
    s000_baseline_eqFunction_2763,
    s000_baseline_eqFunction_2764,
    s000_baseline_eqFunction_2766,
    s000_baseline_eqFunction_2768,
    s000_baseline_eqFunction_2769,
    s000_baseline_eqFunction_2771,
    s000_baseline_eqFunction_2773,
    s000_baseline_eqFunction_2774,
    s000_baseline_eqFunction_2776,
    s000_baseline_eqFunction_2778,
    s000_baseline_eqFunction_2781,
    s000_baseline_eqFunction_2782,
    s000_baseline_eqFunction_2786,
    s000_baseline_eqFunction_2788,
    s000_baseline_eqFunction_2789,
    s000_baseline_eqFunction_2790,
    s000_baseline_eqFunction_2791,
    s000_baseline_eqFunction_2794,
    s000_baseline_eqFunction_2797,
    s000_baseline_eqFunction_2798,
    s000_baseline_eqFunction_2799,
    s000_baseline_eqFunction_2802,
    s000_baseline_eqFunction_2803,
    s000_baseline_eqFunction_2804,
    s000_baseline_eqFunction_2805,
    s000_baseline_eqFunction_2806,
    s000_baseline_eqFunction_2807,
    s000_baseline_eqFunction_2809,
    s000_baseline_eqFunction_2810,
    s000_baseline_eqFunction_2813,
    s000_baseline_eqFunction_2814,
    s000_baseline_eqFunction_2818,
    s000_baseline_eqFunction_2820,
    s000_baseline_eqFunction_2821,
    s000_baseline_eqFunction_2822,
    s000_baseline_eqFunction_2825,
    s000_baseline_eqFunction_2828,
    s000_baseline_eqFunction_2829,
    s000_baseline_eqFunction_2830,
    s000_baseline_eqFunction_2833,
    s000_baseline_eqFunction_2834,
    s000_baseline_eqFunction_2835,
    s000_baseline_eqFunction_2836,
    s000_baseline_eqFunction_2837,
    s000_baseline_eqFunction_2838,
    s000_baseline_eqFunction_2840,
    s000_baseline_eqFunction_2844,
    s000_baseline_eqFunction_2845,
    s000_baseline_eqFunction_2846,
    s000_baseline_eqFunction_2847,
    s000_baseline_eqFunction_2848,
    s000_baseline_eqFunction_2849,
    s000_baseline_eqFunction_2850,
    s000_baseline_eqFunction_2851,
    s000_baseline_eqFunction_2852,
    s000_baseline_eqFunction_2853,
    s000_baseline_eqFunction_2854,
    s000_baseline_eqFunction_2855,
    s000_baseline_eqFunction_2856,
    s000_baseline_eqFunction_2857,
    s000_baseline_eqFunction_2858,
    s000_baseline_eqFunction_2859,
    s000_baseline_eqFunction_2860,
    s000_baseline_eqFunction_2861,
    s000_baseline_eqFunction_2862,
    s000_baseline_eqFunction_2863,
    s000_baseline_eqFunction_2864,
    s000_baseline_eqFunction_2865,
    s000_baseline_eqFunction_2866,
    s000_baseline_eqFunction_2867,
    s000_baseline_eqFunction_2868,
    s000_baseline_eqFunction_2871,
    s000_baseline_eqFunction_2873,
    s000_baseline_eqFunction_2875,
    s000_baseline_eqFunction_2877,
    s000_baseline_eqFunction_2879,
    s000_baseline_eqFunction_2880,
    s000_baseline_eqFunction_2881,
    s000_baseline_eqFunction_2882,
    s000_baseline_eqFunction_2883,
    s000_baseline_eqFunction_2884,
    s000_baseline_eqFunction_2887,
    s000_baseline_eqFunction_2888,
    s000_baseline_eqFunction_2892,
    s000_baseline_eqFunction_2894,
    s000_baseline_eqFunction_2895,
    s000_baseline_eqFunction_2896,
    s000_baseline_eqFunction_2897,
    s000_baseline_eqFunction_2900,
    s000_baseline_eqFunction_2903,
    s000_baseline_eqFunction_2904,
    s000_baseline_eqFunction_2905,
    s000_baseline_eqFunction_2908,
    s000_baseline_eqFunction_2909,
    s000_baseline_eqFunction_2910,
    s000_baseline_eqFunction_2911,
    s000_baseline_eqFunction_2912,
    s000_baseline_eqFunction_2913,
    s000_baseline_eqFunction_2915,
    s000_baseline_eqFunction_2916,
    s000_baseline_eqFunction_2919,
    s000_baseline_eqFunction_2920,
    s000_baseline_eqFunction_2924,
    s000_baseline_eqFunction_2926,
    s000_baseline_eqFunction_2927,
    s000_baseline_eqFunction_2928,
    s000_baseline_eqFunction_2929,
    s000_baseline_eqFunction_2932,
    s000_baseline_eqFunction_2935,
    s000_baseline_eqFunction_2936,
    s000_baseline_eqFunction_2937,
    s000_baseline_eqFunction_2940,
    s000_baseline_eqFunction_2941,
    s000_baseline_eqFunction_2942,
    s000_baseline_eqFunction_2943,
    s000_baseline_eqFunction_2944,
    s000_baseline_eqFunction_2945,
    s000_baseline_eqFunction_2947,
    s000_baseline_eqFunction_2964,
    s000_baseline_eqFunction_2973,
    s000_baseline_eqFunction_2974,
    s000_baseline_eqFunction_2975,
    s000_baseline_eqFunction_2976,
    s000_baseline_eqFunction_2977,
    s000_baseline_eqFunction_2978,
    s000_baseline_eqFunction_2979,
    s000_baseline_eqFunction_2980,
    s000_baseline_eqFunction_2981,
    s000_baseline_eqFunction_2982,
    s000_baseline_eqFunction_2983,
    s000_baseline_eqFunction_2984,
    s000_baseline_eqFunction_2985,
    s000_baseline_eqFunction_2986,
    s000_baseline_eqFunction_2987,
    s000_baseline_eqFunction_2988,
    s000_baseline_eqFunction_2989,
    s000_baseline_eqFunction_2990,
    s000_baseline_eqFunction_2991,
    s000_baseline_eqFunction_2992,
    s000_baseline_eqFunction_2993,
    s000_baseline_eqFunction_2994,
    s000_baseline_eqFunction_2995,
    s000_baseline_eqFunction_2996,
    s000_baseline_eqFunction_2997,
    s000_baseline_eqFunction_2998,
    s000_baseline_eqFunction_2999,
    s000_baseline_eqFunction_3000,
    s000_baseline_eqFunction_3001,
    s000_baseline_eqFunction_3002,
    s000_baseline_eqFunction_3003,
    s000_baseline_eqFunction_3004,
    s000_baseline_eqFunction_3005,
    s000_baseline_eqFunction_3006,
    s000_baseline_eqFunction_3007,
    s000_baseline_eqFunction_3008,
    s000_baseline_eqFunction_3009,
    s000_baseline_eqFunction_3010,
    s000_baseline_eqFunction_3011,
    s000_baseline_eqFunction_3012,
    s000_baseline_eqFunction_3013,
    s000_baseline_eqFunction_3014,
    s000_baseline_eqFunction_3015,
    s000_baseline_eqFunction_3016,
    s000_baseline_eqFunction_3017,
    s000_baseline_eqFunction_3018,
    s000_baseline_eqFunction_3019,
    s000_baseline_eqFunction_3020,
    s000_baseline_eqFunction_3021,
    s000_baseline_eqFunction_3022,
    s000_baseline_eqFunction_3023,
    s000_baseline_eqFunction_3024,
    s000_baseline_eqFunction_3025,
    s000_baseline_eqFunction_3031,
    s000_baseline_eqFunction_3037,
    s000_baseline_eqFunction_3038,
    s000_baseline_eqFunction_3040,
    s000_baseline_eqFunction_3042,
    s000_baseline_eqFunction_3043,
    s000_baseline_eqFunction_3045,
    s000_baseline_eqFunction_3047,
    s000_baseline_eqFunction_3048,
    s000_baseline_eqFunction_3050,
    s000_baseline_eqFunction_3052,
    s000_baseline_eqFunction_3053,
    s000_baseline_eqFunction_3055,
    s000_baseline_eqFunction_3057,
    s000_baseline_eqFunction_3058,
    s000_baseline_eqFunction_3060,
    s000_baseline_eqFunction_3062,
    s000_baseline_eqFunction_3063,
    s000_baseline_eqFunction_3065,
    s000_baseline_eqFunction_3067,
    s000_baseline_eqFunction_3070,
    s000_baseline_eqFunction_3071,
    s000_baseline_eqFunction_3075,
    s000_baseline_eqFunction_3077,
    s000_baseline_eqFunction_3078,
    s000_baseline_eqFunction_3079,
    s000_baseline_eqFunction_3080,
    s000_baseline_eqFunction_3083,
    s000_baseline_eqFunction_3086,
    s000_baseline_eqFunction_3087,
    s000_baseline_eqFunction_3088,
    s000_baseline_eqFunction_3091,
    s000_baseline_eqFunction_3092,
    s000_baseline_eqFunction_3093,
    s000_baseline_eqFunction_3094,
    s000_baseline_eqFunction_3095,
    s000_baseline_eqFunction_3096,
    s000_baseline_eqFunction_3098
  };
  
  for (int id = 0; id < 405; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif