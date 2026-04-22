#include "tmp_two_returns_res_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 1437
type: SIMPLE_ASSIGN
weaDat.lat = Buildings.BoundaryConditions.WeatherData.BaseClasses.getLatitudeTMY3(weaDat.filNam)
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1437};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1356]] /* weaDat.lat PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[90]] /* weaDat.filNam PARAM */));
  threadData->lastEquationSolved = 1437;
}

/*
equation index: 1438
type: SIMPLE_ASSIGN
weaDat.latitude.latitude = weaDat.lat
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1438};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1357]] /* weaDat.latitude.latitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1356]] /* weaDat.lat PARAM */);
  threadData->lastEquationSolved = 1438;
}

/*
equation index: 1439
type: SIMPLE_ASSIGN
$cse6 = cos(weaDat.latitude.latitude)
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1439};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[0]] /* $cse6 PARAM */) = cos((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1357]] /* weaDat.latitude.latitude PARAM */));
  threadData->lastEquationSolved = 1439;
}

/*
equation index: 1440
type: SIMPLE_ASSIGN
$cse9 = sin(weaDat.latitude.latitude)
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1440};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* $cse9 PARAM */) = sin((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1357]] /* weaDat.latitude.latitude PARAM */));
  threadData->lastEquationSolved = 1440;
}

/*
equation index: 1441
type: SIMPLE_ASSIGN
roo.air.cfd.CFDThre = Buildings.ThermalZones.Detailed.BaseClasses.CFDThread.constructor()
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1441};
  (data->simulationInfo->extObjs[0]) = omc_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_constructor(threadData);
  threadData->lastEquationSolved = 1441;
}

/*
equation index: 1442
type: SIMPLE_ASSIGN
weaDat.datRea.fileName = weaDat.filNam
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1442};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[85]] /* weaDat.datRea.fileName PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[90]] /* weaDat.filNam PARAM */);
  threadData->lastEquationSolved = 1442;
}

/*
equation index: 1443
type: SIMPLE_ASSIGN
weaDat.datRea.delimiter = ","
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1443};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[84]] /* weaDat.datRea.delimiter PARAM */) = _OMC_LIT7;
  threadData->lastEquationSolved = 1443;
}

/*
equation index: 1446
type: SIMPLE_ASSIGN
weaDat.datRea.isCsvExt = Modelica.Utilities.Strings.findLast(weaDat.datRea.fileName, ".csv", 0, false) + 3 == Modelica.Utilities.Strings.length(weaDat.datRea.fileName)
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1446};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[298]] /* weaDat.datRea.isCsvExt PARAM */) = (omc_Modelica_Utilities_Strings_findLast(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[85]] /* weaDat.datRea.fileName PARAM */), _OMC_LIT78, ((modelica_integer) 0), 0 /* false */) + ((modelica_integer) 3) == omc_Modelica_Utilities_Strings_length(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[85]] /* weaDat.datRea.fileName PARAM */)));
  threadData->lastEquationSolved = 1446;
}

/*
equation index: 1447
type: SIMPLE_ASSIGN
weaDat.datRea.tableID = Modelica.Blocks.Types.ExternalCombiTable1D.constructor(if weaDat.datRea.isCsvExt then "Values" else "tab1", if weaDat.datRea.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(weaDat.datRea.fileName) then weaDat.datRea.fileName else "NoName", {}, {2, 3, 4, 5, 6, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 8}, Modelica.Blocks.Types.Smoothness.ContinuousDerivative, Modelica.Blocks.Types.Extrapolation.LastTwoPoints, weaDat.datRea.verboseRead, weaDat.datRea.delimiter, weaDat.datRea.nHeaderLines)
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1447};
  (data->simulationInfo->extObjs[1]) = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[298]] /* weaDat.datRea.isCsvExt PARAM */)?_OMC_LIT79:_OMC_LIT80), (((!stringEqual((data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[85]] /* weaDat.datRea.fileName PARAM */), _OMC_LIT81)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[85]] /* weaDat.datRea.fileName PARAM */))))?(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[85]] /* weaDat.datRea.fileName PARAM */):_OMC_LIT81), _OMC_LIT82, _OMC_LIT83, 2, 2, (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[301]] /* weaDat.datRea.verboseRead PARAM */), (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[84]] /* weaDat.datRea.delimiter PARAM */), (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[364]] /* weaDat.datRea.nHeaderLines PARAM */));
  threadData->lastEquationSolved = 1447;
}

/*
equation index: 1448
type: SIMPLE_ASSIGN
weaDat.datRea30Min.fileName = weaDat.filNam
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1448};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[88]] /* weaDat.datRea30Min.fileName PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[90]] /* weaDat.filNam PARAM */);
  threadData->lastEquationSolved = 1448;
}

/*
equation index: 1449
type: SIMPLE_ASSIGN
weaDat.datRea30Min.delimiter = ","
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1449};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[87]] /* weaDat.datRea30Min.delimiter PARAM */) = _OMC_LIT7;
  threadData->lastEquationSolved = 1449;
}

/*
equation index: 1452
type: SIMPLE_ASSIGN
weaDat.datRea30Min.isCsvExt = Modelica.Utilities.Strings.findLast(weaDat.datRea30Min.fileName, ".csv", 0, false) + 3 == Modelica.Utilities.Strings.length(weaDat.datRea30Min.fileName)
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1452};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[302]] /* weaDat.datRea30Min.isCsvExt PARAM */) = (omc_Modelica_Utilities_Strings_findLast(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[88]] /* weaDat.datRea30Min.fileName PARAM */), _OMC_LIT78, ((modelica_integer) 0), 0 /* false */) + ((modelica_integer) 3) == omc_Modelica_Utilities_Strings_length(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[88]] /* weaDat.datRea30Min.fileName PARAM */)));
  threadData->lastEquationSolved = 1452;
}

/*
equation index: 1453
type: SIMPLE_ASSIGN
weaDat.datRea30Min.tableID = Modelica.Blocks.Types.ExternalCombiTable1D.constructor(if weaDat.datRea30Min.isCsvExt then "Values" else "tab1", if weaDat.datRea30Min.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(weaDat.datRea30Min.fileName) then weaDat.datRea30Min.fileName else "NoName", {}, {9, 10, 11}, Modelica.Blocks.Types.Smoothness.ContinuousDerivative, Modelica.Blocks.Types.Extrapolation.LastTwoPoints, weaDat.datRea30Min.verboseRead, weaDat.datRea30Min.delimiter, weaDat.datRea30Min.nHeaderLines)
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1453};
  (data->simulationInfo->extObjs[2]) = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[302]] /* weaDat.datRea30Min.isCsvExt PARAM */)?_OMC_LIT79:_OMC_LIT80), (((!stringEqual((data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[88]] /* weaDat.datRea30Min.fileName PARAM */), _OMC_LIT81)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[88]] /* weaDat.datRea30Min.fileName PARAM */))))?(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[88]] /* weaDat.datRea30Min.fileName PARAM */):_OMC_LIT81), _OMC_LIT82, _OMC_LIT84, 2, 2, (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[305]] /* weaDat.datRea30Min.verboseRead PARAM */), (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[87]] /* weaDat.datRea30Min.delimiter PARAM */), (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[371]] /* weaDat.datRea30Min.nHeaderLines PARAM */));
  threadData->lastEquationSolved = 1453;
}

/*
equation index: 1465
type: SIMPLE_ASSIGN
retRes2.m_flow_nominal = m_flow_rated
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1465};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* retRes2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* m_flow_rated PARAM */);
  threadData->lastEquationSolved = 1465;
}

/*
equation index: 1466
type: SIMPLE_ASSIGN
retRes2.m_flow_nominal_pos = abs(retRes2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1466};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* retRes2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* retRes2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 1466;
}

/*
equation index: 1467
type: SIMPLE_ASSIGN
retRes2.k = 0.31622776601683794 * retRes2.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1467};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* retRes2.k PARAM */) = (0.31622776601683794) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* retRes2.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 1467;
}

/*
equation index: 1471
type: SIMPLE_ASSIGN
retRes2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * retRes2.sta_default.T
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1471};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* retRes2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* retRes2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 1471;
}

/*
equation index: 1475
type: SIMPLE_ASSIGN
retRes2.m_flow_turbulent = 0.3 * retRes2.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1475};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* retRes2.m_flow_turbulent PARAM */) = (0.3) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* retRes2.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 1475;
}

/*
equation index: 1482
type: SIMPLE_ASSIGN
retRes2.m_flow_small = 1e-4 * abs(retRes2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1482};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* retRes2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* retRes2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 1482;
}

/*
equation index: 1486
type: SIMPLE_ASSIGN
retRes1.m_flow_nominal = m_flow_rated
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1486};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* retRes1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* m_flow_rated PARAM */);
  threadData->lastEquationSolved = 1486;
}

/*
equation index: 1487
type: SIMPLE_ASSIGN
retRes1.m_flow_nominal_pos = abs(retRes1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1487};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* retRes1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* retRes1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 1487;
}

/*
equation index: 1488
type: SIMPLE_ASSIGN
retRes1.k = 0.31622776601683794 * retRes1.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1488};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[22]] /* retRes1.k PARAM */) = (0.31622776601683794) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* retRes1.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 1488;
}

/*
equation index: 1492
type: SIMPLE_ASSIGN
retRes1.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * retRes1.sta_default.T
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1492};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* retRes1.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* retRes1.sta_default.T PARAM */));
  threadData->lastEquationSolved = 1492;
}

/*
equation index: 1496
type: SIMPLE_ASSIGN
retRes1.m_flow_turbulent = 0.3 * retRes1.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1496};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* retRes1.m_flow_turbulent PARAM */) = (0.3) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* retRes1.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 1496;
}

/*
equation index: 1503
type: SIMPLE_ASSIGN
retRes1.m_flow_small = 1e-4 * abs(retRes1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1503};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* retRes1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* retRes1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 1503;
}

/*
equation index: 1506
type: SIMPLE_ASSIGN
sup2.m_flow = m_flow_rated
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1506};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1321]] /* sup2.m_flow PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* m_flow_rated PARAM */);
  threadData->lastEquationSolved = 1506;
}

/*
equation index: 1515
type: SIMPLE_ASSIGN
sup1.m_flow = m_flow_rated
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1515};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1317]] /* sup1.m_flow PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* m_flow_rated PARAM */);
  threadData->lastEquationSolved = 1515;
}

/*
equation index: 1531
type: SIMPLE_ASSIGN
weaDat.alt = Buildings.BoundaryConditions.WeatherData.BaseClasses.getAltitudeLocationTMY3(weaDat.filNam)
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1531};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1331]] /* weaDat.alt PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAltitudeLocationTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[90]] /* weaDat.filNam PARAM */));
  threadData->lastEquationSolved = 1531;
}

/*
equation index: 1532
type: SIMPLE_ASSIGN
weaDat.altitude.Altitude = weaDat.alt
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1532};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1332]] /* weaDat.altitude.Altitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1331]] /* weaDat.alt PARAM */);
  threadData->lastEquationSolved = 1532;
}

/*
equation index: 1533
type: SIMPLE_ASSIGN
weaDat.lon = Buildings.BoundaryConditions.WeatherData.BaseClasses.getLongitudeTMY3(weaDat.filNam)
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1533};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1361]] /* weaDat.lon PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[90]] /* weaDat.filNam PARAM */));
  threadData->lastEquationSolved = 1533;
}

/*
equation index: 1534
type: SIMPLE_ASSIGN
weaDat.longitude.longitude = weaDat.lon
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1534};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1362]] /* weaDat.longitude.longitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1361]] /* weaDat.lon PARAM */);
  threadData->lastEquationSolved = 1534;
}

/*
equation index: 1535
type: SIMPLE_ASSIGN
weaDat.datRea30Min.u_max = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmax(weaDat.datRea30Min.tableID)
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1535};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1353]] /* weaDat.datRea30Min.u_max PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData, (data->simulationInfo->extObjs[2]));
  threadData->lastEquationSolved = 1535;
}

/*
equation index: 1536
type: SIMPLE_ASSIGN
weaDat.datRea30Min.u_min = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmin(weaDat.datRea30Min.tableID)
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1536};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1354]] /* weaDat.datRea30Min.u_min PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData, (data->simulationInfo->extObjs[2]));
  threadData->lastEquationSolved = 1536;
}

/*
equation index: 1543
type: SIMPLE_ASSIGN
weaDat.datRea30Min.tableName = "tab1"
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1543};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[89]] /* weaDat.datRea30Min.tableName PARAM */) = _OMC_LIT80;
  threadData->lastEquationSolved = 1543;
}

/*
equation index: 1546
type: SIMPLE_ASSIGN
weaDat.timZon = Buildings.BoundaryConditions.WeatherData.BaseClasses.getTimeZoneTMY3(weaDat.filNam)
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1546};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1369]] /* weaDat.timZon PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[90]] /* weaDat.filNam PARAM */));
  threadData->lastEquationSolved = 1546;
}

/*
equation index: 1547
type: SIMPLE_ASSIGN
weaDat.locTim.timZon = weaDat.timZon
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1547};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1360]] /* weaDat.locTim.timZon PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1369]] /* weaDat.timZon PARAM */);
  threadData->lastEquationSolved = 1547;
}

/*
equation index: 1548
type: SIMPLE_ASSIGN
weaDat.locTim.lon = weaDat.lon
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1548};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1359]] /* weaDat.locTim.lon PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1361]] /* weaDat.lon PARAM */);
  threadData->lastEquationSolved = 1548;
}

/*
equation index: 1549
type: SIMPLE_ASSIGN
weaDat.locTim.diff = 13750.987083139758 * weaDat.locTim.lon - weaDat.locTim.timZon
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1549};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1358]] /* weaDat.locTim.diff PARAM */) = (13750.987083139758) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1359]] /* weaDat.locTim.lon PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1360]] /* weaDat.locTim.timZon PARAM */);
  threadData->lastEquationSolved = 1549;
}

/*
equation index: 1560
type: SIMPLE_ASSIGN
weaDat.horInfRadSel.p = weaDat.HInfHor
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1560};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1355]] /* weaDat.horInfRadSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1322]] /* weaDat.HInfHor PARAM */);
  threadData->lastEquationSolved = 1560;
}

/*
equation index: 1562
type: SIMPLE_ASSIGN
weaDat.winDirSel.p = weaDat.winDir
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1562};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1375]] /* weaDat.winDirSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* weaDat.winDir PARAM */);
  threadData->lastEquationSolved = 1562;
}

/*
equation index: 1564
type: SIMPLE_ASSIGN
weaDat.winSpeSel.p = weaDat.winSpe
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1564};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1377]] /* weaDat.winSpeSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1376]] /* weaDat.winSpe PARAM */);
  threadData->lastEquationSolved = 1564;
}

/*
equation index: 1566
type: SIMPLE_ASSIGN
weaDat.totSkyCovSel.p = weaDat.totSkyCov
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1566};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1373]] /* weaDat.totSkyCovSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1372]] /* weaDat.totSkyCov PARAM */);
  threadData->lastEquationSolved = 1566;
}

/*
equation index: 1568
type: SIMPLE_ASSIGN
weaDat.ceiHeiSel.p = weaDat.ceiHei
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1568};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1334]] /* weaDat.ceiHeiSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1333]] /* weaDat.ceiHei PARAM */);
  threadData->lastEquationSolved = 1568;
}

/*
equation index: 1570
type: SIMPLE_ASSIGN
weaDat.opaSkyCovSel.p = weaDat.opaSkyCov
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1570};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1364]] /* weaDat.opaSkyCovSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1363]] /* weaDat.opaSkyCov PARAM */);
  threadData->lastEquationSolved = 1570;
}

/*
equation index: 1572
type: SIMPLE_ASSIGN
weaDat.relHumSel.p = weaDat.relHum
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1572};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1368]] /* weaDat.relHumSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1367]] /* weaDat.relHum PARAM */);
  threadData->lastEquationSolved = 1572;
}

/*
equation index: 1574
type: SIMPLE_ASSIGN
weaDat.TBlaSkySel.p = weaDat.TBlaSky
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1574};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* weaDat.TBlaSkySel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1323]] /* weaDat.TBlaSky PARAM */);
  threadData->lastEquationSolved = 1574;
}

/*
equation index: 1576
type: SIMPLE_ASSIGN
weaDat.TDryBul = T_init
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1576};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* weaDat.TDryBul PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* T_init PARAM */);
  threadData->lastEquationSolved = 1576;
}

/*
equation index: 1577
type: SIMPLE_ASSIGN
weaDat.TDryBulSel.p = weaDat.TDryBul
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1577};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1328]] /* weaDat.TDryBulSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* weaDat.TDryBul PARAM */);
  threadData->lastEquationSolved = 1577;
}

/*
equation index: 1579
type: SIMPLE_ASSIGN
weaDat.TDewPoiSel.p = weaDat.TDewPoi
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1579};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1326]] /* weaDat.TDewPoiSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1325]] /* weaDat.TDewPoi PARAM */);
  threadData->lastEquationSolved = 1579;
}

/*
equation index: 1581
type: SIMPLE_ASSIGN
weaDat.pAtmSel.p = weaDat.pAtm
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1581};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1366]] /* weaDat.pAtmSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1365]] /* weaDat.pAtm PARAM */);
  threadData->lastEquationSolved = 1581;
}

/*
equation index: 1583
type: SIMPLE_ASSIGN
weaDat.datRea.u_max = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmax(weaDat.datRea.tableID)
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1583};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1351]] /* weaDat.datRea.u_max PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData, (data->simulationInfo->extObjs[1]));
  threadData->lastEquationSolved = 1583;
}

/*
equation index: 1584
type: SIMPLE_ASSIGN
weaDat.datRea.u_min = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmin(weaDat.datRea.tableID)
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1584};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1352]] /* weaDat.datRea.u_min PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData, (data->simulationInfo->extObjs[1]));
  threadData->lastEquationSolved = 1584;
}

/*
equation index: 1614
type: SIMPLE_ASSIGN
weaDat.datRea.tableName = "tab1"
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1614};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[86]] /* weaDat.datRea.tableName PARAM */) = _OMC_LIT80;
  threadData->lastEquationSolved = 1614;
}

/*
equation index: 1617
type: ARRAY_CALL_ASSIGN

weaDat.timeSpan = Buildings.BoundaryConditions.WeatherData.BaseClasses.getTimeSpanTMY3(weaDat.filNam, "tab1")
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1617};
  real_array tmp0;
  real_array_create(&tmp0, ((modelica_real*)&((&(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1370]] /* weaDat.timeSpan[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[90]] /* weaDat.filNam PARAM */), _OMC_LIT80), tmp0);
  threadData->lastEquationSolved = 1617;
}

/*
equation index: 1634
type: SIMPLE_ASSIGN
roo.absCfdFilNam = Buildings.BoundaryConditions.WeatherData.BaseClasses.getAbsolutePath(roo.cfdFilNam)
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1634};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* roo.absCfdFilNam PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAbsolutePath(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[35]] /* roo.cfdFilNam PARAM */));
  threadData->lastEquationSolved = 1634;
}

/*
equation index: 1635
type: SIMPLE_ASSIGN
roo.sensorName[1] = ""
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1635};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[77]] /* roo.sensorName[1] PARAM */) = _OMC_LIT34;
  threadData->lastEquationSolved = 1635;
}

/*
equation index: 1636
type: SIMPLE_ASSIGN
roo.samplePeriod = samplePeriod
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1636};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1286]] /* roo.samplePeriod PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1313]] /* samplePeriod PARAM */);
  threadData->lastEquationSolved = 1636;
}

/*
equation index: 1641
type: SIMPLE_ASSIGN
roo.heaGai.AFlo = roo.AFlo
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1641};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* roo.heaGai.AFlo PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* roo.AFlo PARAM */);
  threadData->lastEquationSolved = 1641;
}

/*
equation index: 1657
type: SIMPLE_ASSIGN
roo.tauIRSha_glass[1] = roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1657};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1312]] /* roo.tauIRSha_glass[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 1657;
}

/*
equation index: 1658
type: SIMPLE_ASSIGN
roo.tauIRSha_air[1] = roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1658};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1311]] /* roo.tauIRSha_air[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 1658;
}

/*
equation index: 1660
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.absIR_a = roo.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1660};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1131]] /* roo.radTem.datConExtWin[1].glaSys.shade.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* roo.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 1660;
}

/*
equation index: 1661
type: SIMPLE_ASSIGN
roo.radTem.epsSha[1] = roo.radTem.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1661};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* roo.radTem.epsSha[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1131]] /* roo.radTem.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 1661;
}

/*
equation index: 1662
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b = roo.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1662};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 1662;
}

/*
equation index: 1663
type: SIMPLE_ASSIGN
roo.radTem.epsGla[1] = roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1663};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* roo.radTem.epsGla[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 1663;
}

/*
equation index: 1664
type: SIMPLE_ASSIGN
roo.datConExtWin[1].AWin = roo.datConExtWin[1].hWin * roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1664};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* roo.datConExtWin[1].AWin PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* roo.datConExtWin[1].hWin PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[447]] /* roo.datConExtWin[1].wWin PARAM */));
  threadData->lastEquationSolved = 1664;
}

/*
equation index: 1665
type: SIMPLE_ASSIGN
roo.datConExtWin[1].AFra = roo.datConExtWin[1].fFra * roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1665};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[386]] /* roo.datConExtWin[1].AFra PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[393]] /* roo.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* roo.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 1665;
}

/*
equation index: 1666
type: SIMPLE_ASSIGN
roo.datConExtWin[1].AGla = roo.datConExtWin[1].AWin - roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1666};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* roo.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* roo.datConExtWin[1].AWin PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[386]] /* roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 1666;
}

/*
equation index: 1667
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].AGla = roo.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1667};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1104]] /* roo.radTem.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* roo.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 1667;
}

/*
equation index: 1668
type: SIMPLE_ASSIGN
roo.radTem.AGla[1] = roo.radTem.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1668};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1053]] /* roo.radTem.AGla[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1104]] /* roo.radTem.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 1668;
}

/*
equation index: 1673
type: SIMPLE_ASSIGN
roo.radTem.surBou[6].absIR = roo.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1673};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1272]] /* roo.radTem.surBou[6].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* roo.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 1673;
}

/*
equation index: 1674
type: SIMPLE_ASSIGN
roo.radTem.epsSurBou[6] = roo.radTem.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1674};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* roo.radTem.epsSurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1272]] /* roo.radTem.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 1674;
}

/*
equation index: 1675
type: SIMPLE_ASSIGN
roo.radTem.surBou[5].absIR = roo.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1675};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1271]] /* roo.radTem.surBou[5].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* roo.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 1675;
}

/*
equation index: 1676
type: SIMPLE_ASSIGN
roo.radTem.epsSurBou[5] = roo.radTem.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1676};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1258]] /* roo.radTem.epsSurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1271]] /* roo.radTem.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 1676;
}

/*
equation index: 1677
type: SIMPLE_ASSIGN
roo.radTem.surBou[4].absIR = roo.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1677};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1270]] /* roo.radTem.surBou[4].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1296]] /* roo.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 1677;
}

/*
equation index: 1678
type: SIMPLE_ASSIGN
roo.radTem.epsSurBou[4] = roo.radTem.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1678};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1257]] /* roo.radTem.epsSurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1270]] /* roo.radTem.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 1678;
}

/*
equation index: 1679
type: SIMPLE_ASSIGN
roo.radTem.surBou[3].absIR = roo.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1679};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1269]] /* roo.radTem.surBou[3].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* roo.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 1679;
}

/*
equation index: 1680
type: SIMPLE_ASSIGN
roo.radTem.epsSurBou[3] = roo.radTem.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1680};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1256]] /* roo.radTem.epsSurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1269]] /* roo.radTem.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 1680;
}

/*
equation index: 1681
type: SIMPLE_ASSIGN
roo.radTem.surBou[2].absIR = roo.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1681};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1268]] /* roo.radTem.surBou[2].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* roo.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 1681;
}

/*
equation index: 1682
type: SIMPLE_ASSIGN
roo.radTem.epsSurBou[2] = roo.radTem.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1682};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1255]] /* roo.radTem.epsSurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1268]] /* roo.radTem.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 1682;
}

/*
equation index: 1683
type: SIMPLE_ASSIGN
roo.radTem.surBou[1].absIR = roo.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1683};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1267]] /* roo.radTem.surBou[1].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1293]] /* roo.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 1683;
}

/*
equation index: 1684
type: SIMPLE_ASSIGN
roo.radTem.epsSurBou[1] = roo.radTem.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1684};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1254]] /* roo.radTem.epsSurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1267]] /* roo.radTem.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 1684;
}

/*
equation index: 1685
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.absIR_b = roo.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1685};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1066]] /* roo.radTem.datConBou[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[349]] /* roo.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1685;
}

/*
equation index: 1686
type: SIMPLE_ASSIGN
roo.radTem.epsConBou[1] = roo.radTem.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1686};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* roo.radTem.epsConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1066]] /* roo.radTem.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1686;
}

/*
equation index: 1687
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.absIR_b = roo.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1687};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1171]] /* roo.radTem.datConPar[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[454]] /* roo.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1687;
}

/*
equation index: 1688
type: SIMPLE_ASSIGN
roo.radTem.epsConPar_b[1] = roo.radTem.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1688};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* roo.radTem.epsConPar_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1171]] /* roo.radTem.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1688;
}

/*
equation index: 1689
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.absIR_a = roo.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1689};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1170]] /* roo.radTem.datConPar[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[453]] /* roo.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1689;
}

/*
equation index: 1690
type: SIMPLE_ASSIGN
roo.radTem.epsConPar_a[1] = roo.radTem.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1690};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1250]] /* roo.radTem.epsConPar_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1170]] /* roo.radTem.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1690;
}

/*
equation index: 1691
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.absIRFra = roo.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1691};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1112]] /* roo.radTem.datConExtWin[1].glaSys.absIRFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[395]] /* roo.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 1691;
}

/*
equation index: 1692
type: SIMPLE_ASSIGN
roo.radTem.epsConExtWinFra[1] = roo.radTem.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1692};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* roo.radTem.epsConExtWinFra[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1112]] /* roo.radTem.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 1692;
}

/*
equation index: 1693
type: SIMPLE_ASSIGN
roo.radTem.epsConExtWinSha[1] = roo.radTem.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1693};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* roo.radTem.epsConExtWinSha[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1131]] /* roo.radTem.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 1693;
}

/*
equation index: 1694
type: SIMPLE_ASSIGN
roo.radTem.epsConExtWinUns[1] = roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1694};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* roo.radTem.epsConExtWinUns[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 1694;
}

/*
equation index: 1695
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.absIR_b = roo.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1695};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1142]] /* roo.radTem.datConExtWin[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[425]] /* roo.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1695;
}

/*
equation index: 1696
type: SIMPLE_ASSIGN
roo.radTem.epsConExtWinOpa[1] = roo.radTem.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1696};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1247]] /* roo.radTem.epsConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1142]] /* roo.radTem.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1696;
}

/*
equation index: 1697
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.absIR_b = roo.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1697};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1087]] /* roo.radTem.datConExt[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* roo.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1697;
}

/*
equation index: 1698
type: SIMPLE_ASSIGN
roo.radTem.epsConExt[1] = roo.radTem.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1698};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* roo.radTem.epsConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1087]] /* roo.radTem.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1698;
}

/*
equation index: 1699
type: SIMPLE_ASSIGN
roo.radTem.surBou[6].A = roo.surBou[6].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1699};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* roo.radTem.surBou[6].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1292]] /* roo.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 1699;
}

/*
equation index: 1700
type: SIMPLE_ASSIGN
roo.radTem.ASurBou[6] = roo.radTem.surBou[6].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1700};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1059]] /* roo.radTem.ASurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* roo.radTem.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 1700;
}

/*
equation index: 1701
type: SIMPLE_ASSIGN
roo.radTem.surBou[5].A = roo.surBou[5].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1701};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1265]] /* roo.radTem.surBou[5].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1291]] /* roo.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 1701;
}

/*
equation index: 1702
type: SIMPLE_ASSIGN
roo.radTem.ASurBou[5] = roo.radTem.surBou[5].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1702};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1058]] /* roo.radTem.ASurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1265]] /* roo.radTem.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 1702;
}

/*
equation index: 1703
type: SIMPLE_ASSIGN
roo.radTem.surBou[4].A = roo.surBou[4].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1703};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* roo.radTem.surBou[4].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* roo.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 1703;
}

/*
equation index: 1704
type: SIMPLE_ASSIGN
roo.radTem.ASurBou[4] = roo.radTem.surBou[4].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1704};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1057]] /* roo.radTem.ASurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* roo.radTem.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 1704;
}

/*
equation index: 1705
type: SIMPLE_ASSIGN
roo.radTem.surBou[3].A = roo.surBou[3].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1705};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1263]] /* roo.radTem.surBou[3].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* roo.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 1705;
}

/*
equation index: 1706
type: SIMPLE_ASSIGN
roo.radTem.ASurBou[3] = roo.radTem.surBou[3].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1706};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1056]] /* roo.radTem.ASurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1263]] /* roo.radTem.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 1706;
}

/*
equation index: 1707
type: SIMPLE_ASSIGN
roo.radTem.surBou[2].A = roo.surBou[2].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1707};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1262]] /* roo.radTem.surBou[2].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* roo.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 1707;
}

/*
equation index: 1708
type: SIMPLE_ASSIGN
roo.radTem.ASurBou[2] = roo.radTem.surBou[2].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1708};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1055]] /* roo.radTem.ASurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1262]] /* roo.radTem.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 1708;
}

/*
equation index: 1709
type: SIMPLE_ASSIGN
roo.radTem.surBou[1].A = roo.surBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1709};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1261]] /* roo.radTem.surBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* roo.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 1709;
}

/*
equation index: 1710
type: SIMPLE_ASSIGN
roo.radTem.ASurBou[1] = roo.radTem.surBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1710};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1054]] /* roo.radTem.ASurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1261]] /* roo.radTem.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 1710;
}

/*
equation index: 1711
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].A = roo.datConBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1711};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1060]] /* roo.radTem.datConBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* roo.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 1711;
}

/*
equation index: 1712
type: SIMPLE_ASSIGN
roo.radTem.AConBou[1] = roo.radTem.datConBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1712};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1047]] /* roo.radTem.AConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1060]] /* roo.radTem.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 1712;
}

/*
equation index: 1713
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].A = roo.datConPar[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1713};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1165]] /* roo.radTem.datConPar[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[448]] /* roo.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 1713;
}

/*
equation index: 1714
type: SIMPLE_ASSIGN
roo.radTem.AConPar[1] = roo.radTem.datConPar[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1714};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1052]] /* roo.radTem.AConPar[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1165]] /* roo.radTem.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 1714;
}

/*
equation index: 1715
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].AWin = roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1715};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1106]] /* roo.radTem.datConExtWin[1].AWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 1715;
}

/*
equation index: 1716
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].fFra = roo.datConExtWin[1].fFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1716};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* roo.radTem.datConExtWin[1].fFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[393]] /* roo.datConExtWin[1].fFra PARAM */);
  threadData->lastEquationSolved = 1716;
}

/*
equation index: 1717
type: SIMPLE_ASSIGN
roo.radTem.AConExtWinFra[1] = roo.radTem.datConExtWin[1].fFra * roo.radTem.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1717};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1049]] /* roo.radTem.AConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* roo.radTem.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1106]] /* roo.radTem.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 1717;
}

/*
equation index: 1718
type: SIMPLE_ASSIGN
roo.radTem.AConExtWinGla[1] = (1.0 - roo.radTem.datConExtWin[1].fFra) * roo.radTem.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1718};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1050]] /* roo.radTem.AConExtWinGla[1] PARAM */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* roo.radTem.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1106]] /* roo.radTem.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 1718;
}

/*
equation index: 1719
type: SIMPLE_ASSIGN
roo.datConExtWin[1].AOpa = roo.datConExtWin[1].A - roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1719};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[388]] /* roo.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[385]] /* roo.datConExtWin[1].A PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 1719;
}

/*
equation index: 1720
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].AOpa = roo.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1720};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1105]] /* roo.radTem.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[388]] /* roo.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 1720;
}

/*
equation index: 1721
type: SIMPLE_ASSIGN
roo.radTem.AConExtWinOpa[1] = roo.radTem.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1721};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1051]] /* roo.radTem.AConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1105]] /* roo.radTem.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 1721;
}

/*
equation index: 1722
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].A = roo.datConExt[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1722};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* roo.radTem.datConExt[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[364]] /* roo.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 1722;
}

/*
equation index: 1723
type: SIMPLE_ASSIGN
roo.radTem.AConExt[1] = roo.radTem.datConExt[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1723};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1048]] /* roo.radTem.AConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* roo.radTem.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 1723;
}

/*
equation index: 1724
type: SIMPLE_ASSIGN
roo.radTem.instanceName = "TmpTwoReturnsRes.roo.radTem"
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1724};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[70]] /* roo.radTem.instanceName PARAM */) = _OMC_LIT85;
  threadData->lastEquationSolved = 1724;
}

/*
equation index: 1730
type: SIMPLE_ASSIGN
roo.radTem.dummyCon.R = roo.radTem.dummyCon.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1730};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* roo.radTem.dummyCon.R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1192]] /* roo.radTem.dummyCon.material[1].R PARAM */);
  threadData->lastEquationSolved = 1730;
}

/*
equation index: 1736
type: SIMPLE_ASSIGN
roo.radTem.surBou[6].boundaryCondition = roo.surBou[6].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1736};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[314]] /* roo.radTem.surBou[6].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[320]] /* roo.surBou[6].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1736;
}

/*
equation index: 1737
type: SIMPLE_ASSIGN
roo.radTem.surBou[6].name = roo.surBou[6].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1737};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[76]] /* roo.radTem.surBou[6].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[83]] /* roo.surBou[6].name PARAM */);
  threadData->lastEquationSolved = 1737;
}

/*
equation index: 1739
type: SIMPLE_ASSIGN
roo.radTem.surBou[6].absSol = roo.surBou[6].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1739};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* roo.radTem.surBou[6].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1304]] /* roo.surBou[6].absSol PARAM */);
  threadData->lastEquationSolved = 1739;
}

/*
equation index: 1741
type: SIMPLE_ASSIGN
roo.radTem.surBou[5].boundaryCondition = roo.surBou[5].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1741};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[313]] /* roo.radTem.surBou[5].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[319]] /* roo.surBou[5].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1741;
}

/*
equation index: 1742
type: SIMPLE_ASSIGN
roo.radTem.surBou[5].name = roo.surBou[5].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1742};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[75]] /* roo.radTem.surBou[5].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[82]] /* roo.surBou[5].name PARAM */);
  threadData->lastEquationSolved = 1742;
}

/*
equation index: 1744
type: SIMPLE_ASSIGN
roo.radTem.surBou[5].absSol = roo.surBou[5].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1744};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1277]] /* roo.radTem.surBou[5].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1303]] /* roo.surBou[5].absSol PARAM */);
  threadData->lastEquationSolved = 1744;
}

/*
equation index: 1746
type: SIMPLE_ASSIGN
roo.radTem.surBou[4].boundaryCondition = roo.surBou[4].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1746};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[312]] /* roo.radTem.surBou[4].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[318]] /* roo.surBou[4].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1746;
}

/*
equation index: 1747
type: SIMPLE_ASSIGN
roo.radTem.surBou[4].name = roo.surBou[4].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1747};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[74]] /* roo.radTem.surBou[4].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[81]] /* roo.surBou[4].name PARAM */);
  threadData->lastEquationSolved = 1747;
}

/*
equation index: 1749
type: SIMPLE_ASSIGN
roo.radTem.surBou[4].absSol = roo.surBou[4].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1749};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1276]] /* roo.radTem.surBou[4].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1302]] /* roo.surBou[4].absSol PARAM */);
  threadData->lastEquationSolved = 1749;
}

/*
equation index: 1751
type: SIMPLE_ASSIGN
roo.radTem.surBou[3].boundaryCondition = roo.surBou[3].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1751};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[311]] /* roo.radTem.surBou[3].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[317]] /* roo.surBou[3].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1751;
}

/*
equation index: 1752
type: SIMPLE_ASSIGN
roo.radTem.surBou[3].name = roo.surBou[3].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1752};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[73]] /* roo.radTem.surBou[3].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[80]] /* roo.surBou[3].name PARAM */);
  threadData->lastEquationSolved = 1752;
}

/*
equation index: 1754
type: SIMPLE_ASSIGN
roo.radTem.surBou[3].absSol = roo.surBou[3].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1754};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1275]] /* roo.radTem.surBou[3].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* roo.surBou[3].absSol PARAM */);
  threadData->lastEquationSolved = 1754;
}

/*
equation index: 1756
type: SIMPLE_ASSIGN
roo.radTem.surBou[2].boundaryCondition = roo.surBou[2].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1756};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[310]] /* roo.radTem.surBou[2].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[316]] /* roo.surBou[2].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1756;
}

/*
equation index: 1757
type: SIMPLE_ASSIGN
roo.radTem.surBou[2].name = roo.surBou[2].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1757};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[72]] /* roo.radTem.surBou[2].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[79]] /* roo.surBou[2].name PARAM */);
  threadData->lastEquationSolved = 1757;
}

/*
equation index: 1759
type: SIMPLE_ASSIGN
roo.radTem.surBou[2].absSol = roo.surBou[2].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1759};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1274]] /* roo.radTem.surBou[2].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* roo.surBou[2].absSol PARAM */);
  threadData->lastEquationSolved = 1759;
}

/*
equation index: 1761
type: SIMPLE_ASSIGN
roo.radTem.surBou[1].boundaryCondition = roo.surBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1761};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[309]] /* roo.radTem.surBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[315]] /* roo.surBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1761;
}

/*
equation index: 1762
type: SIMPLE_ASSIGN
roo.radTem.surBou[1].name = roo.surBou[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1762};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[71]] /* roo.radTem.surBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[78]] /* roo.surBou[1].name PARAM */);
  threadData->lastEquationSolved = 1762;
}

/*
equation index: 1764
type: SIMPLE_ASSIGN
roo.radTem.surBou[1].absSol = roo.surBou[1].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1764};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1273]] /* roo.radTem.surBou[1].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1299]] /* roo.surBou[1].absSol PARAM */);
  threadData->lastEquationSolved = 1764;
}

/*
equation index: 1766
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].boundaryCondition = roo.datConBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1766};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[275]] /* roo.radTem.datConBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[132]] /* roo.datConBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1766;
}

/*
equation index: 1769
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].T_b_start = roo.datConBou[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1769};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1062]] /* roo.radTem.datConBou[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* roo.datConBou[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1769;
}

/*
equation index: 1770
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].T_a_start = roo.datConBou[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1770};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1061]] /* roo.radTem.datConBou[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* roo.datConBou[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1770;
}

/*
equation index: 1774
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].azi = roo.datConBou[1].azi
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1774};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1063]] /* roo.radTem.datConBou[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* roo.datConBou[1].azi PARAM */);
  threadData->lastEquationSolved = 1774;
}

/*
equation index: 1776
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.roughness_a = roo.datConBou[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1776};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[280]] /* roo.radTem.datConBou[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[137]] /* roo.datConBou[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1776;
}

/*
equation index: 1777
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.absSol_b = roo.datConBou[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1777};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1068]] /* roo.radTem.datConBou[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* roo.datConBou[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1777;
}

/*
equation index: 1778
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.absSol_a = roo.datConBou[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1778};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1067]] /* roo.radTem.datConBou[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[350]] /* roo.datConBou[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1778;
}

/*
equation index: 1779
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.absIR_a = roo.datConBou[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1779};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1065]] /* roo.radTem.datConBou[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* roo.datConBou[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1779;
}

/*
equation index: 1782
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].LHea = roo.datConBou[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1782};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1069]] /* roo.radTem.datConBou[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* roo.datConBou[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1782;
}

/*
equation index: 1785
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].nStaReal = roo.datConBou[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1785};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1076]] /* roo.radTem.datConBou[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* roo.datConBou[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1785;
}

/*
equation index: 1786
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].piMat = roo.datConBou[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1786};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1077]] /* roo.radTem.datConBou[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* roo.datConBou[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1786;
}

/*
equation index: 1787
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].piRef = roo.datConBou[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1787};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1078]] /* roo.radTem.datConBou[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[361]] /* roo.datConBou[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1787;
}

/*
equation index: 1790
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].nStaRef = roo.datConBou[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1790};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[277]] /* roo.radTem.datConBou[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[134]] /* roo.datConBou[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1790;
}

/*
equation index: 1791
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].R = roo.datConBou[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1791};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1070]] /* roo.radTem.datConBou[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* roo.datConBou[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1791;
}

/*
equation index: 1792
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].d = roo.datConBou[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1792};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1074]] /* roo.radTem.datConBou[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* roo.datConBou[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1792;
}

/*
equation index: 1793
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].c = roo.datConBou[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1793};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1073]] /* roo.radTem.datConBou[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* roo.datConBou[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1793;
}

/*
equation index: 1794
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].k = roo.datConBou[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1794};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1075]] /* roo.radTem.datConBou[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[358]] /* roo.datConBou[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1794;
}

/*
equation index: 1795
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].x = roo.datConBou[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1795};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1079]] /* roo.radTem.datConBou[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* roo.datConBou[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1795;
}

/*
equation index: 1797
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].name = roo.datConBou[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1797};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[66]] /* roo.radTem.datConBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[36]] /* roo.datConBou[1].name PARAM */);
  threadData->lastEquationSolved = 1797;
}

/*
equation index: 1798
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].boundaryCondition = roo.datConPar[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1798};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[293]] /* roo.radTem.datConPar[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[150]] /* roo.datConPar[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1798;
}

/*
equation index: 1801
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].T_b_start = roo.datConPar[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1801};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1167]] /* roo.radTem.datConPar[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[450]] /* roo.datConPar[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1801;
}

/*
equation index: 1802
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].T_a_start = roo.datConPar[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1802};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1166]] /* roo.radTem.datConPar[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[449]] /* roo.datConPar[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1802;
}

/*
equation index: 1806
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].azi = roo.datConPar[1].azi
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1806};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1168]] /* roo.radTem.datConPar[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[451]] /* roo.datConPar[1].azi PARAM */);
  threadData->lastEquationSolved = 1806;
}

/*
equation index: 1808
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.roughness_a = roo.datConPar[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1808};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[298]] /* roo.radTem.datConPar[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[155]] /* roo.datConPar[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1808;
}

/*
equation index: 1809
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.absSol_b = roo.datConPar[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1809};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1173]] /* roo.radTem.datConPar[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[456]] /* roo.datConPar[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1809;
}

/*
equation index: 1810
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.absSol_a = roo.datConPar[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1810};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1172]] /* roo.radTem.datConPar[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[455]] /* roo.datConPar[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1810;
}

/*
equation index: 1813
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].LHea = roo.datConPar[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1813};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1174]] /* roo.radTem.datConPar[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[457]] /* roo.datConPar[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1813;
}

/*
equation index: 1816
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].nStaReal = roo.datConPar[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1816};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1181]] /* roo.radTem.datConPar[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[464]] /* roo.datConPar[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1816;
}

/*
equation index: 1817
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].piMat = roo.datConPar[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1817};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1182]] /* roo.radTem.datConPar[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[465]] /* roo.datConPar[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1817;
}

/*
equation index: 1818
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].piRef = roo.datConPar[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1818};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1183]] /* roo.radTem.datConPar[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[466]] /* roo.datConPar[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1818;
}

/*
equation index: 1821
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].nStaRef = roo.datConPar[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1821};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[295]] /* roo.radTem.datConPar[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[152]] /* roo.datConPar[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1821;
}

/*
equation index: 1822
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].R = roo.datConPar[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1822};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1175]] /* roo.radTem.datConPar[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[458]] /* roo.datConPar[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1822;
}

/*
equation index: 1823
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].d = roo.datConPar[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1823};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1179]] /* roo.radTem.datConPar[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[462]] /* roo.datConPar[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1823;
}

/*
equation index: 1824
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].c = roo.datConPar[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1824};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1178]] /* roo.radTem.datConPar[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[461]] /* roo.datConPar[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1824;
}

/*
equation index: 1825
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].k = roo.datConPar[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1825};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1180]] /* roo.radTem.datConPar[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[463]] /* roo.datConPar[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1825;
}

/*
equation index: 1826
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].x = roo.datConPar[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1826};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* roo.radTem.datConPar[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[467]] /* roo.datConPar[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1826;
}

/*
equation index: 1828
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].name = roo.datConPar[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1828};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[69]] /* roo.radTem.datConPar[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[39]] /* roo.datConPar[1].name PARAM */);
  threadData->lastEquationSolved = 1828;
}

/*
equation index: 1832
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.absSolFra = roo.datConExtWin[1].glaSys.absSolFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1832};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1113]] /* roo.radTem.datConExtWin[1].glaSys.absSolFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[396]] /* roo.datConExtWin[1].glaSys.absSolFra PARAM */);
  threadData->lastEquationSolved = 1832;
}

/*
equation index: 1833
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.UFra = roo.datConExtWin[1].glaSys.UFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1833};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1111]] /* roo.radTem.datConExtWin[1].glaSys.UFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[394]] /* roo.datConExtWin[1].glaSys.UFra PARAM */);
  threadData->lastEquationSolved = 1833;
}

/*
equation index: 1834
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.tauIR_b = roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1834};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1136]] /* roo.radTem.datConExtWin[1].glaSys.shade.tauIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 1834;
}

/*
equation index: 1835
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.tauIR_a = roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1835};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1135]] /* roo.radTem.datConExtWin[1].glaSys.shade.tauIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 1835;
}

/*
equation index: 1836
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.absIR_b = roo.datConExtWin[1].glaSys.shade.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1836};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1132]] /* roo.radTem.datConExtWin[1].glaSys.shade.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* roo.datConExtWin[1].glaSys.shade.absIR_b PARAM */);
  threadData->lastEquationSolved = 1836;
}

/*
equation index: 1837
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.rhoSol_b = roo.datConExtWin[1].glaSys.shade.rhoSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1837};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1134]] /* roo.radTem.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */);
  threadData->lastEquationSolved = 1837;
}

/*
equation index: 1838
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.rhoSol_a = roo.datConExtWin[1].glaSys.shade.rhoSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1838};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1133]] /* roo.radTem.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */);
  threadData->lastEquationSolved = 1838;
}

/*
equation index: 1839
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.tauSol_b = roo.datConExtWin[1].glaSys.shade.tauSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1839};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1138]] /* roo.radTem.datConExtWin[1].glaSys.shade.tauSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* roo.datConExtWin[1].glaSys.shade.tauSol_b PARAM */);
  threadData->lastEquationSolved = 1839;
}

/*
equation index: 1840
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.tauSol_a = roo.datConExtWin[1].glaSys.shade.tauSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1840};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1137]] /* roo.radTem.datConExtWin[1].glaSys.shade.tauSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* roo.datConExtWin[1].glaSys.shade.tauSol_a PARAM */);
  threadData->lastEquationSolved = 1840;
}

/*
equation index: 1841
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].P0 = roo.datConExtWin[1].glaSys.gas[1].P0
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1841};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1115]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].P0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* roo.datConExtWin[1].glaSys.gas[1].P0 PARAM */);
  threadData->lastEquationSolved = 1841;
}

/*
equation index: 1842
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].MM = roo.datConExtWin[1].glaSys.gas[1].MM
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1842};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1114]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].MM PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* roo.datConExtWin[1].glaSys.gas[1].MM PARAM */);
  threadData->lastEquationSolved = 1842;
}

/*
equation index: 1843
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].b_c = roo.datConExtWin[1].glaSys.gas[1].b_c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1843};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1119]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].b_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[402]] /* roo.datConExtWin[1].glaSys.gas[1].b_c PARAM */);
  threadData->lastEquationSolved = 1843;
}

/*
equation index: 1844
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].a_c = roo.datConExtWin[1].glaSys.gas[1].a_c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1844};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1116]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].a_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[399]] /* roo.datConExtWin[1].glaSys.gas[1].a_c PARAM */);
  threadData->lastEquationSolved = 1844;
}

/*
equation index: 1845
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].b_mu = roo.datConExtWin[1].glaSys.gas[1].b_mu
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1845};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1121]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].b_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* roo.datConExtWin[1].glaSys.gas[1].b_mu PARAM */);
  threadData->lastEquationSolved = 1845;
}

/*
equation index: 1846
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].a_mu = roo.datConExtWin[1].glaSys.gas[1].a_mu
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1846};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1118]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].a_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* roo.datConExtWin[1].glaSys.gas[1].a_mu PARAM */);
  threadData->lastEquationSolved = 1846;
}

/*
equation index: 1847
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].b_k = roo.datConExtWin[1].glaSys.gas[1].b_k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1847};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1120]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].b_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* roo.datConExtWin[1].glaSys.gas[1].b_k PARAM */);
  threadData->lastEquationSolved = 1847;
}

/*
equation index: 1848
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].a_k = roo.datConExtWin[1].glaSys.gas[1].a_k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1848};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1117]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].a_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[400]] /* roo.datConExtWin[1].glaSys.gas[1].a_k PARAM */);
  threadData->lastEquationSolved = 1848;
}

/*
equation index: 1849
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].x = roo.datConExtWin[1].glaSys.gas[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1849};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1122]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[405]] /* roo.datConExtWin[1].glaSys.gas[1].x PARAM */);
  threadData->lastEquationSolved = 1849;
}

/*
equation index: 1850
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_a = roo.datConExtWin[1].glaSys.glass[1].absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1850};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1123]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */);
  threadData->lastEquationSolved = 1850;
}

/*
equation index: 1851
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].tauIR = roo.datConExtWin[1].glaSys.glass[1].tauIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1851};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1128]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].tauIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* roo.datConExtWin[1].glaSys.glass[1].tauIR PARAM */);
  threadData->lastEquationSolved = 1851;
}

/*
equation index: 1852
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1852};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1127]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */);
  threadData->lastEquationSolved = 1852;
}

/*
equation index: 1853
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1853};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1126]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */);
  threadData->lastEquationSolved = 1853;
}

/*
equation index: 1854
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].tauSol[1] = roo.datConExtWin[1].glaSys.glass[1].tauSol[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1854};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1129]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[412]] /* roo.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */);
  threadData->lastEquationSolved = 1854;
}

/*
equation index: 1855
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].k = roo.datConExtWin[1].glaSys.glass[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1855};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1125]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[408]] /* roo.datConExtWin[1].glaSys.glass[1].k PARAM */);
  threadData->lastEquationSolved = 1855;
}

/*
equation index: 1856
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].x = roo.datConExtWin[1].glaSys.glass[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1856};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1130]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* roo.datConExtWin[1].glaSys.glass[1].x PARAM */);
  threadData->lastEquationSolved = 1856;
}

/*
equation index: 1859
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].AFra = roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1859};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* roo.radTem.datConExtWin[1].AFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[386]] /* roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 1859;
}

/*
equation index: 1861
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].sidFin.gap = roo.datConExtWin[1].sidFin.gap
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1861};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1161]] /* roo.radTem.datConExtWin[1].sidFin.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[444]] /* roo.datConExtWin[1].sidFin.gap PARAM */);
  threadData->lastEquationSolved = 1861;
}

/*
equation index: 1863
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].sidFin.h = roo.datConExtWin[1].sidFin.h
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1863};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1162]] /* roo.radTem.datConExtWin[1].sidFin.h PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[445]] /* roo.datConExtWin[1].sidFin.h PARAM */);
  threadData->lastEquationSolved = 1863;
}

/*
equation index: 1865
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].ove.gap = roo.datConExtWin[1].ove.gap
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1865};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1157]] /* roo.radTem.datConExtWin[1].ove.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[440]] /* roo.datConExtWin[1].ove.gap PARAM */);
  threadData->lastEquationSolved = 1865;
}

/*
equation index: 1867
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].ove.wR = roo.datConExtWin[1].ove.wR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1867};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1159]] /* roo.radTem.datConExtWin[1].ove.wR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[442]] /* roo.datConExtWin[1].ove.wR PARAM */);
  threadData->lastEquationSolved = 1867;
}

/*
equation index: 1868
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].ove.wL = roo.datConExtWin[1].ove.wL
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1868};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1158]] /* roo.radTem.datConExtWin[1].ove.wL PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[441]] /* roo.datConExtWin[1].ove.wL PARAM */);
  threadData->lastEquationSolved = 1868;
}

/*
equation index: 1869
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].wWin = roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1869};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1164]] /* roo.radTem.datConExtWin[1].wWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[447]] /* roo.datConExtWin[1].wWin PARAM */);
  threadData->lastEquationSolved = 1869;
}

/*
equation index: 1870
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].hWin = roo.datConExtWin[1].hWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1870};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1139]] /* roo.radTem.datConExtWin[1].hWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* roo.datConExtWin[1].hWin PARAM */);
  threadData->lastEquationSolved = 1870;
}

/*
equation index: 1871
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].A = roo.datConExtWin[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1871};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1102]] /* roo.radTem.datConExtWin[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[385]] /* roo.datConExtWin[1].A PARAM */);
  threadData->lastEquationSolved = 1871;
}

/*
equation index: 1872
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].boundaryCondition = roo.datConExtWin[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1872};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[287]] /* roo.radTem.datConExtWin[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[144]] /* roo.datConExtWin[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1872;
}

/*
equation index: 1875
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].T_b_start = roo.datConExtWin[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1875};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* roo.radTem.datConExtWin[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[391]] /* roo.datConExtWin[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1875;
}

/*
equation index: 1876
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].T_a_start = roo.datConExtWin[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1876};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1107]] /* roo.radTem.datConExtWin[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* roo.datConExtWin[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1876;
}

/*
equation index: 1880
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].azi = roo.datConExtWin[1].azi
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1880};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* roo.radTem.datConExtWin[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[392]] /* roo.datConExtWin[1].azi PARAM */);
  threadData->lastEquationSolved = 1880;
}

/*
equation index: 1882
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.roughness_a = roo.datConExtWin[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1882};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[292]] /* roo.radTem.datConExtWin[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[149]] /* roo.datConExtWin[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1882;
}

/*
equation index: 1883
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.absSol_b = roo.datConExtWin[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1883};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1144]] /* roo.radTem.datConExtWin[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[427]] /* roo.datConExtWin[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1883;
}

/*
equation index: 1884
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.absSol_a = roo.datConExtWin[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1884};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1143]] /* roo.radTem.datConExtWin[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* roo.datConExtWin[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1884;
}

/*
equation index: 1885
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.absIR_a = roo.datConExtWin[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1885};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1141]] /* roo.radTem.datConExtWin[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[424]] /* roo.datConExtWin[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1885;
}

/*
equation index: 1888
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].LHea = roo.datConExtWin[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1888};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1145]] /* roo.radTem.datConExtWin[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[428]] /* roo.datConExtWin[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1888;
}

/*
equation index: 1891
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].nStaReal = roo.datConExtWin[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1891};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1152]] /* roo.radTem.datConExtWin[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[435]] /* roo.datConExtWin[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1891;
}

/*
equation index: 1892
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].piMat = roo.datConExtWin[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1892};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1153]] /* roo.radTem.datConExtWin[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[436]] /* roo.datConExtWin[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1892;
}

/*
equation index: 1893
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].piRef = roo.datConExtWin[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1893};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* roo.radTem.datConExtWin[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[437]] /* roo.datConExtWin[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1893;
}

/*
equation index: 1896
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].nStaRef = roo.datConExtWin[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1896};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[289]] /* roo.radTem.datConExtWin[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[146]] /* roo.datConExtWin[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1896;
}

/*
equation index: 1897
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].R = roo.datConExtWin[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1897};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1146]] /* roo.radTem.datConExtWin[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[429]] /* roo.datConExtWin[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1897;
}

/*
equation index: 1898
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].d = roo.datConExtWin[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1898};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1150]] /* roo.radTem.datConExtWin[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[433]] /* roo.datConExtWin[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1898;
}

/*
equation index: 1899
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].c = roo.datConExtWin[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1899};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1149]] /* roo.radTem.datConExtWin[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[432]] /* roo.datConExtWin[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1899;
}

/*
equation index: 1900
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].k = roo.datConExtWin[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1900};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1151]] /* roo.radTem.datConExtWin[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[434]] /* roo.datConExtWin[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1900;
}

/*
equation index: 1901
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].x = roo.datConExtWin[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1901};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1155]] /* roo.radTem.datConExtWin[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[438]] /* roo.datConExtWin[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1901;
}

/*
equation index: 1903
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].name = roo.datConExtWin[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1903};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[68]] /* roo.radTem.datConExtWin[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[38]] /* roo.datConExtWin[1].name PARAM */);
  threadData->lastEquationSolved = 1903;
}

/*
equation index: 1904
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].boundaryCondition = roo.datConExt[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1904};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[281]] /* roo.radTem.datConExt[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[138]] /* roo.datConExt[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1904;
}

/*
equation index: 1907
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].T_b_start = roo.datConExt[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1907};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* roo.radTem.datConExt[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[366]] /* roo.datConExt[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1907;
}

/*
equation index: 1908
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].T_a_start = roo.datConExt[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1908};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1082]] /* roo.radTem.datConExt[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* roo.datConExt[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1908;
}

/*
equation index: 1912
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].azi = roo.datConExt[1].azi
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1912};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1084]] /* roo.radTem.datConExt[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[367]] /* roo.datConExt[1].azi PARAM */);
  threadData->lastEquationSolved = 1912;
}

/*
equation index: 1914
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.roughness_a = roo.datConExt[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1914};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[286]] /* roo.radTem.datConExt[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[143]] /* roo.datConExt[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1914;
}

/*
equation index: 1915
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.absSol_b = roo.datConExt[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1915};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1089]] /* roo.radTem.datConExt[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* roo.datConExt[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1915;
}

/*
equation index: 1916
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.absSol_a = roo.datConExt[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1916};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1088]] /* roo.radTem.datConExt[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* roo.datConExt[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1916;
}

/*
equation index: 1917
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.absIR_a = roo.datConExt[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1917};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* roo.radTem.datConExt[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* roo.datConExt[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1917;
}

/*
equation index: 1920
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].LHea = roo.datConExt[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1920};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1090]] /* roo.radTem.datConExt[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* roo.datConExt[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1920;
}

/*
equation index: 1923
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].nStaReal = roo.datConExt[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1923};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1097]] /* roo.radTem.datConExt[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[380]] /* roo.datConExt[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1923;
}

/*
equation index: 1924
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].piMat = roo.datConExt[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1924};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1098]] /* roo.radTem.datConExt[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* roo.datConExt[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1924;
}

/*
equation index: 1925
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].piRef = roo.datConExt[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1925};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1099]] /* roo.radTem.datConExt[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[382]] /* roo.datConExt[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1925;
}

/*
equation index: 1928
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].nStaRef = roo.datConExt[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1928};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[283]] /* roo.radTem.datConExt[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[140]] /* roo.datConExt[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1928;
}

/*
equation index: 1929
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].R = roo.datConExt[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1929};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1091]] /* roo.radTem.datConExt[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* roo.datConExt[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1929;
}

/*
equation index: 1930
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].d = roo.datConExt[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1930};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1095]] /* roo.radTem.datConExt[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* roo.datConExt[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1930;
}

/*
equation index: 1931
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].c = roo.datConExt[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1931};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1094]] /* roo.radTem.datConExt[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* roo.datConExt[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1931;
}

/*
equation index: 1932
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].k = roo.datConExt[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1932};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1096]] /* roo.radTem.datConExt[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* roo.datConExt[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1932;
}

/*
equation index: 1933
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].x = roo.datConExt[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1933};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1100]] /* roo.radTem.datConExt[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* roo.datConExt[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1933;
}

/*
equation index: 1935
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].name = roo.datConExt[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1935};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[67]] /* roo.radTem.datConExt[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[37]] /* roo.datConExt[1].name PARAM */);
  threadData->lastEquationSolved = 1935;
}

/*
equation index: 1952
type: SIMPLE_ASSIGN
roo.irRadExc.T03 = roo.irRadExc.T0 ^ 3.0
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1952};
  modelica_real tmp1;
  tmp1 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* roo.irRadExc.T0 PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[578]] /* roo.irRadExc.T03 PARAM */) = (tmp1 * tmp1 * tmp1);
  threadData->lastEquationSolved = 1952;
}

/*
equation index: 1961
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[6].absIR = roo.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1961};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[798]] /* roo.irRadExc.surBou[6].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* roo.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 1961;
}

/*
equation index: 1962
type: SIMPLE_ASSIGN
roo.irRadExc.epsSurBou[6] = roo.irRadExc.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1962};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[768]] /* roo.irRadExc.epsSurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[798]] /* roo.irRadExc.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 1962;
}

/*
equation index: 1963
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[5].absIR = roo.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1963};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[797]] /* roo.irRadExc.surBou[5].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* roo.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 1963;
}

/*
equation index: 1964
type: SIMPLE_ASSIGN
roo.irRadExc.epsSurBou[5] = roo.irRadExc.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1964};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[767]] /* roo.irRadExc.epsSurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[797]] /* roo.irRadExc.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 1964;
}

/*
equation index: 1965
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[4].absIR = roo.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1965};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* roo.irRadExc.surBou[4].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1296]] /* roo.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 1965;
}

/*
equation index: 1966
type: SIMPLE_ASSIGN
roo.irRadExc.epsSurBou[4] = roo.irRadExc.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1966};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[766]] /* roo.irRadExc.epsSurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* roo.irRadExc.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 1966;
}

/*
equation index: 1967
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[3].absIR = roo.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1967};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* roo.irRadExc.surBou[3].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* roo.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 1967;
}

/*
equation index: 1968
type: SIMPLE_ASSIGN
roo.irRadExc.epsSurBou[3] = roo.irRadExc.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1968};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[765]] /* roo.irRadExc.epsSurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* roo.irRadExc.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 1968;
}

/*
equation index: 1969
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[2].absIR = roo.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1969};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* roo.irRadExc.surBou[2].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* roo.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 1969;
}

/*
equation index: 1970
type: SIMPLE_ASSIGN
roo.irRadExc.epsSurBou[2] = roo.irRadExc.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1970};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[764]] /* roo.irRadExc.epsSurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* roo.irRadExc.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 1970;
}

/*
equation index: 1971
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[1].absIR = roo.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1971};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* roo.irRadExc.surBou[1].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1293]] /* roo.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 1971;
}

/*
equation index: 1972
type: SIMPLE_ASSIGN
roo.irRadExc.epsSurBou[1] = roo.irRadExc.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1972};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[763]] /* roo.irRadExc.epsSurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* roo.irRadExc.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 1972;
}

/*
equation index: 1973
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.absIR_b = roo.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1973};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[585]] /* roo.irRadExc.datConBou[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[349]] /* roo.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1973;
}

/*
equation index: 1974
type: SIMPLE_ASSIGN
roo.irRadExc.epsConBou[1] = roo.irRadExc.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1974};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* roo.irRadExc.epsConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[585]] /* roo.irRadExc.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1974;
}

/*
equation index: 1975
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.absIR_b = roo.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1975};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[690]] /* roo.irRadExc.datConPar[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[454]] /* roo.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1975;
}

/*
equation index: 1976
type: SIMPLE_ASSIGN
roo.irRadExc.epsConPar_b[1] = roo.irRadExc.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1976};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[756]] /* roo.irRadExc.epsConPar_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[690]] /* roo.irRadExc.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1976;
}

/*
equation index: 1977
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.absIR_a = roo.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1977};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[689]] /* roo.irRadExc.datConPar[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[453]] /* roo.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1977;
}

/*
equation index: 1978
type: SIMPLE_ASSIGN
roo.irRadExc.epsConPar_a[1] = roo.irRadExc.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1978};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[755]] /* roo.irRadExc.epsConPar_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[689]] /* roo.irRadExc.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1978;
}

/*
equation index: 1979
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.absIRFra = roo.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1979};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[631]] /* roo.irRadExc.datConExtWin[1].glaSys.absIRFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[395]] /* roo.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 1979;
}

/*
equation index: 1980
type: SIMPLE_ASSIGN
roo.irRadExc.epsConExtWinFra[1] = roo.irRadExc.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1980};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* roo.irRadExc.epsConExtWinFra[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[631]] /* roo.irRadExc.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 1980;
}

/*
equation index: 1981
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_a = roo.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1981};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[650]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* roo.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 1981;
}

/*
equation index: 1982
type: SIMPLE_ASSIGN
roo.irRadExc.epsConExtWinSha[1] = roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1982};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[753]] /* roo.irRadExc.epsConExtWinSha[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[650]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 1982;
}

/*
equation index: 1983
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_b = roo.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1983};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[643]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 1983;
}

/*
equation index: 1984
type: SIMPLE_ASSIGN
roo.irRadExc.epsConExtWinUns[1] = roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1984};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[754]] /* roo.irRadExc.epsConExtWinUns[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[643]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 1984;
}

/*
equation index: 1985
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.absIR_b = roo.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1985};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[661]] /* roo.irRadExc.datConExtWin[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[425]] /* roo.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1985;
}

/*
equation index: 1986
type: SIMPLE_ASSIGN
roo.irRadExc.epsConExtWinOpa[1] = roo.irRadExc.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1986};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* roo.irRadExc.epsConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[661]] /* roo.irRadExc.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1986;
}

/*
equation index: 1987
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.absIR_b = roo.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1987};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[606]] /* roo.irRadExc.datConExt[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* roo.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1987;
}

/*
equation index: 1988
type: SIMPLE_ASSIGN
roo.irRadExc.epsConExt[1] = roo.irRadExc.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1988};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* roo.irRadExc.epsConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[606]] /* roo.irRadExc.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1988;
}

/*
equation index: 1989
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[6].A = roo.surBou[6].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1989};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[792]] /* roo.irRadExc.surBou[6].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1292]] /* roo.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 1989;
}

/*
equation index: 1990
type: SIMPLE_ASSIGN
roo.irRadExc.ASurBou[6] = roo.irRadExc.surBou[6].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1990};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[540]] /* roo.irRadExc.ASurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[792]] /* roo.irRadExc.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 1990;
}

/*
equation index: 1991
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[5].A = roo.surBou[5].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1991};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[791]] /* roo.irRadExc.surBou[5].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1291]] /* roo.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 1991;
}

/*
equation index: 1992
type: SIMPLE_ASSIGN
roo.irRadExc.ASurBou[5] = roo.irRadExc.surBou[5].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1992};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[539]] /* roo.irRadExc.ASurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[791]] /* roo.irRadExc.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 1992;
}

/*
equation index: 1993
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[4].A = roo.surBou[4].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1993};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[790]] /* roo.irRadExc.surBou[4].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* roo.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 1993;
}

/*
equation index: 1994
type: SIMPLE_ASSIGN
roo.irRadExc.ASurBou[4] = roo.irRadExc.surBou[4].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1994};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* roo.irRadExc.ASurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[790]] /* roo.irRadExc.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 1994;
}

/*
equation index: 1995
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[3].A = roo.surBou[3].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1995};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[789]] /* roo.irRadExc.surBou[3].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* roo.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 1995;
}

/*
equation index: 1996
type: SIMPLE_ASSIGN
roo.irRadExc.ASurBou[3] = roo.irRadExc.surBou[3].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1996};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[537]] /* roo.irRadExc.ASurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[789]] /* roo.irRadExc.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 1996;
}

/*
equation index: 1997
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[2].A = roo.surBou[2].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1997};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[788]] /* roo.irRadExc.surBou[2].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* roo.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 1997;
}

/*
equation index: 1998
type: SIMPLE_ASSIGN
roo.irRadExc.ASurBou[2] = roo.irRadExc.surBou[2].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1998};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[536]] /* roo.irRadExc.ASurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[788]] /* roo.irRadExc.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 1998;
}

/*
equation index: 1999
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[1].A = roo.surBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_1999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1999};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[787]] /* roo.irRadExc.surBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* roo.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 1999;
}

/*
equation index: 2000
type: SIMPLE_ASSIGN
roo.irRadExc.ASurBou[1] = roo.irRadExc.surBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2000};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[535]] /* roo.irRadExc.ASurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[787]] /* roo.irRadExc.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 2000;
}

/*
equation index: 2001
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].A = roo.datConBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2001};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[579]] /* roo.irRadExc.datConBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* roo.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 2001;
}

/*
equation index: 2002
type: SIMPLE_ASSIGN
roo.irRadExc.AConBou[1] = roo.irRadExc.datConBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2002};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* roo.irRadExc.AConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[579]] /* roo.irRadExc.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 2002;
}

/*
equation index: 2003
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].A = roo.datConPar[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2003};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[684]] /* roo.irRadExc.datConPar[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[448]] /* roo.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 2003;
}

/*
equation index: 2004
type: SIMPLE_ASSIGN
roo.irRadExc.AConPar[1] = roo.irRadExc.datConPar[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2004};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* roo.irRadExc.AConPar[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[684]] /* roo.irRadExc.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 2004;
}

/*
equation index: 2005
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].AWin = roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2005};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[625]] /* roo.irRadExc.datConExtWin[1].AWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 2005;
}

/*
equation index: 2006
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].fFra = roo.datConExtWin[1].fFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2006};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[629]] /* roo.irRadExc.datConExtWin[1].fFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[393]] /* roo.datConExtWin[1].fFra PARAM */);
  threadData->lastEquationSolved = 2006;
}

/*
equation index: 2007
type: SIMPLE_ASSIGN
roo.irRadExc.AConExtWinFra[1] = roo.irRadExc.datConExtWin[1].fFra * roo.irRadExc.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2007};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* roo.irRadExc.AConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[629]] /* roo.irRadExc.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[625]] /* roo.irRadExc.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 2007;
}

/*
equation index: 2008
type: SIMPLE_ASSIGN
roo.irRadExc.AConExtWinGla[1] = (1.0 - roo.irRadExc.datConExtWin[1].fFra) * roo.irRadExc.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2008};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* roo.irRadExc.AConExtWinGla[1] PARAM */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[629]] /* roo.irRadExc.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[625]] /* roo.irRadExc.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 2008;
}

/*
equation index: 2009
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].AOpa = roo.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2009};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[624]] /* roo.irRadExc.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[388]] /* roo.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 2009;
}

/*
equation index: 2010
type: SIMPLE_ASSIGN
roo.irRadExc.AConExtWinOpa[1] = roo.irRadExc.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2010};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* roo.irRadExc.AConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[624]] /* roo.irRadExc.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 2010;
}

/*
equation index: 2011
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].A = roo.datConExt[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2011};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[600]] /* roo.irRadExc.datConExt[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[364]] /* roo.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 2011;
}

/*
equation index: 2012
type: SIMPLE_ASSIGN
roo.irRadExc.AConExt[1] = roo.irRadExc.datConExt[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2012};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* roo.irRadExc.AConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[600]] /* roo.irRadExc.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 2012;
}

/*
equation index: 2013
type: SIMPLE_ASSIGN
roo.irRadExc.instanceName = "TmpTwoReturnsRes.roo.irRadExc"
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2013};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[44]] /* roo.irRadExc.instanceName PARAM */) = _OMC_LIT86;
  threadData->lastEquationSolved = 2013;
}

/*
equation index: 2019
type: SIMPLE_ASSIGN
roo.irRadExc.dummyCon.R = roo.irRadExc.dummyCon.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2019};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[705]] /* roo.irRadExc.dummyCon.R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[711]] /* roo.irRadExc.dummyCon.material[1].R PARAM */);
  threadData->lastEquationSolved = 2019;
}

/*
equation index: 2025
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[6].boundaryCondition = roo.surBou[6].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2025};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[213]] /* roo.irRadExc.surBou[6].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[320]] /* roo.surBou[6].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2025;
}

/*
equation index: 2026
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[6].name = roo.surBou[6].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2026};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[50]] /* roo.irRadExc.surBou[6].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[83]] /* roo.surBou[6].name PARAM */);
  threadData->lastEquationSolved = 2026;
}

/*
equation index: 2028
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[6].absSol = roo.surBou[6].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2028};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[804]] /* roo.irRadExc.surBou[6].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1304]] /* roo.surBou[6].absSol PARAM */);
  threadData->lastEquationSolved = 2028;
}

/*
equation index: 2030
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[5].boundaryCondition = roo.surBou[5].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2030};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[212]] /* roo.irRadExc.surBou[5].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[319]] /* roo.surBou[5].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2030;
}

/*
equation index: 2031
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[5].name = roo.surBou[5].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2031};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[49]] /* roo.irRadExc.surBou[5].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[82]] /* roo.surBou[5].name PARAM */);
  threadData->lastEquationSolved = 2031;
}

/*
equation index: 2033
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[5].absSol = roo.surBou[5].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2033};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[803]] /* roo.irRadExc.surBou[5].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1303]] /* roo.surBou[5].absSol PARAM */);
  threadData->lastEquationSolved = 2033;
}

/*
equation index: 2035
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[4].boundaryCondition = roo.surBou[4].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2035};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[211]] /* roo.irRadExc.surBou[4].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[318]] /* roo.surBou[4].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2035;
}

/*
equation index: 2036
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[4].name = roo.surBou[4].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2036};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[48]] /* roo.irRadExc.surBou[4].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[81]] /* roo.surBou[4].name PARAM */);
  threadData->lastEquationSolved = 2036;
}

/*
equation index: 2038
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[4].absSol = roo.surBou[4].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2038};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[802]] /* roo.irRadExc.surBou[4].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1302]] /* roo.surBou[4].absSol PARAM */);
  threadData->lastEquationSolved = 2038;
}

/*
equation index: 2040
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[3].boundaryCondition = roo.surBou[3].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2040};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[210]] /* roo.irRadExc.surBou[3].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[317]] /* roo.surBou[3].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2040;
}

/*
equation index: 2041
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[3].name = roo.surBou[3].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2041};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[47]] /* roo.irRadExc.surBou[3].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[80]] /* roo.surBou[3].name PARAM */);
  threadData->lastEquationSolved = 2041;
}

/*
equation index: 2043
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[3].absSol = roo.surBou[3].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2043};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[801]] /* roo.irRadExc.surBou[3].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* roo.surBou[3].absSol PARAM */);
  threadData->lastEquationSolved = 2043;
}

/*
equation index: 2045
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[2].boundaryCondition = roo.surBou[2].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2045};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[209]] /* roo.irRadExc.surBou[2].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[316]] /* roo.surBou[2].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2045;
}

/*
equation index: 2046
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[2].name = roo.surBou[2].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2046};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[46]] /* roo.irRadExc.surBou[2].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[79]] /* roo.surBou[2].name PARAM */);
  threadData->lastEquationSolved = 2046;
}

/*
equation index: 2048
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[2].absSol = roo.surBou[2].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2048};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[800]] /* roo.irRadExc.surBou[2].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* roo.surBou[2].absSol PARAM */);
  threadData->lastEquationSolved = 2048;
}

/*
equation index: 2050
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[1].boundaryCondition = roo.surBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2050};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[208]] /* roo.irRadExc.surBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[315]] /* roo.surBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2050;
}

/*
equation index: 2051
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[1].name = roo.surBou[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2051};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[45]] /* roo.irRadExc.surBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[78]] /* roo.surBou[1].name PARAM */);
  threadData->lastEquationSolved = 2051;
}

/*
equation index: 2053
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[1].absSol = roo.surBou[1].absSol
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2053};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[799]] /* roo.irRadExc.surBou[1].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1299]] /* roo.surBou[1].absSol PARAM */);
  threadData->lastEquationSolved = 2053;
}

/*
equation index: 2055
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].boundaryCondition = roo.datConBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2055};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[171]] /* roo.irRadExc.datConBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[132]] /* roo.datConBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2055;
}

/*
equation index: 2058
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].T_b_start = roo.datConBou[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2058};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[581]] /* roo.irRadExc.datConBou[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* roo.datConBou[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2058;
}

/*
equation index: 2059
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].T_a_start = roo.datConBou[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2059};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[580]] /* roo.irRadExc.datConBou[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* roo.datConBou[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2059;
}

/*
equation index: 2063
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].azi = roo.datConBou[1].azi
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2063};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[582]] /* roo.irRadExc.datConBou[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* roo.datConBou[1].azi PARAM */);
  threadData->lastEquationSolved = 2063;
}

/*
equation index: 2065
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.roughness_a = roo.datConBou[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2065};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[176]] /* roo.irRadExc.datConBou[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[137]] /* roo.datConBou[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2065;
}

/*
equation index: 2066
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.absSol_b = roo.datConBou[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2066};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[587]] /* roo.irRadExc.datConBou[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* roo.datConBou[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2066;
}

/*
equation index: 2067
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.absSol_a = roo.datConBou[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2067};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[586]] /* roo.irRadExc.datConBou[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[350]] /* roo.datConBou[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2067;
}

/*
equation index: 2068
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.absIR_a = roo.datConBou[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2068};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[584]] /* roo.irRadExc.datConBou[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* roo.datConBou[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2068;
}

/*
equation index: 2071
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].LHea = roo.datConBou[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2071};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[588]] /* roo.irRadExc.datConBou[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* roo.datConBou[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2071;
}

/*
equation index: 2074
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].nStaReal = roo.datConBou[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2074};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[595]] /* roo.irRadExc.datConBou[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* roo.datConBou[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2074;
}

/*
equation index: 2075
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].piMat = roo.datConBou[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2075};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[596]] /* roo.irRadExc.datConBou[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* roo.datConBou[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2075;
}

/*
equation index: 2076
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].piRef = roo.datConBou[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2076};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[597]] /* roo.irRadExc.datConBou[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[361]] /* roo.datConBou[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2076;
}

/*
equation index: 2079
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].nStaRef = roo.datConBou[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2079};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[173]] /* roo.irRadExc.datConBou[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[134]] /* roo.datConBou[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2079;
}

/*
equation index: 2080
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].R = roo.datConBou[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2080};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[589]] /* roo.irRadExc.datConBou[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* roo.datConBou[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2080;
}

/*
equation index: 2081
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].d = roo.datConBou[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2081};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[593]] /* roo.irRadExc.datConBou[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* roo.datConBou[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2081;
}

/*
equation index: 2082
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].c = roo.datConBou[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2082};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[592]] /* roo.irRadExc.datConBou[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* roo.datConBou[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2082;
}

/*
equation index: 2083
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].k = roo.datConBou[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2083};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* roo.irRadExc.datConBou[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[358]] /* roo.datConBou[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2083;
}

/*
equation index: 2084
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].x = roo.datConBou[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2084};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[598]] /* roo.irRadExc.datConBou[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* roo.datConBou[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2084;
}

/*
equation index: 2086
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].name = roo.datConBou[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2086};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[40]] /* roo.irRadExc.datConBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[36]] /* roo.datConBou[1].name PARAM */);
  threadData->lastEquationSolved = 2086;
}

/*
equation index: 2087
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].boundaryCondition = roo.datConPar[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2087};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[189]] /* roo.irRadExc.datConPar[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[150]] /* roo.datConPar[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2087;
}

/*
equation index: 2090
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].T_b_start = roo.datConPar[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2090};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[686]] /* roo.irRadExc.datConPar[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[450]] /* roo.datConPar[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2090;
}

/*
equation index: 2091
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].T_a_start = roo.datConPar[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2091};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[685]] /* roo.irRadExc.datConPar[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[449]] /* roo.datConPar[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2091;
}

/*
equation index: 2095
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].azi = roo.datConPar[1].azi
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2095};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[687]] /* roo.irRadExc.datConPar[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[451]] /* roo.datConPar[1].azi PARAM */);
  threadData->lastEquationSolved = 2095;
}

/*
equation index: 2097
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.roughness_a = roo.datConPar[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2097};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[194]] /* roo.irRadExc.datConPar[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[155]] /* roo.datConPar[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2097;
}

/*
equation index: 2098
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.absSol_b = roo.datConPar[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2098};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[692]] /* roo.irRadExc.datConPar[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[456]] /* roo.datConPar[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2098;
}

/*
equation index: 2099
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.absSol_a = roo.datConPar[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2099};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[691]] /* roo.irRadExc.datConPar[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[455]] /* roo.datConPar[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2099;
}

/*
equation index: 2102
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].LHea = roo.datConPar[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2102};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[693]] /* roo.irRadExc.datConPar[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[457]] /* roo.datConPar[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2102;
}

/*
equation index: 2105
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].nStaReal = roo.datConPar[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2105};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[700]] /* roo.irRadExc.datConPar[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[464]] /* roo.datConPar[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2105;
}

/*
equation index: 2106
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].piMat = roo.datConPar[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2106};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[701]] /* roo.irRadExc.datConPar[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[465]] /* roo.datConPar[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2106;
}

/*
equation index: 2107
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].piRef = roo.datConPar[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2107};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[702]] /* roo.irRadExc.datConPar[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[466]] /* roo.datConPar[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2107;
}

/*
equation index: 2110
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].nStaRef = roo.datConPar[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2110};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[191]] /* roo.irRadExc.datConPar[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[152]] /* roo.datConPar[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2110;
}

/*
equation index: 2111
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].R = roo.datConPar[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2111};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[694]] /* roo.irRadExc.datConPar[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[458]] /* roo.datConPar[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2111;
}

/*
equation index: 2112
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].d = roo.datConPar[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2112};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[698]] /* roo.irRadExc.datConPar[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[462]] /* roo.datConPar[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2112;
}

/*
equation index: 2113
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].c = roo.datConPar[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2113};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[697]] /* roo.irRadExc.datConPar[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[461]] /* roo.datConPar[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2113;
}

/*
equation index: 2114
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].k = roo.datConPar[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2114};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[699]] /* roo.irRadExc.datConPar[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[463]] /* roo.datConPar[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2114;
}

/*
equation index: 2115
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].x = roo.datConPar[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2115};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[703]] /* roo.irRadExc.datConPar[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[467]] /* roo.datConPar[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2115;
}

/*
equation index: 2117
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].name = roo.datConPar[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2117};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[43]] /* roo.irRadExc.datConPar[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[39]] /* roo.datConPar[1].name PARAM */);
  threadData->lastEquationSolved = 2117;
}

/*
equation index: 2121
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.absSolFra = roo.datConExtWin[1].glaSys.absSolFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2121};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[632]] /* roo.irRadExc.datConExtWin[1].glaSys.absSolFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[396]] /* roo.datConExtWin[1].glaSys.absSolFra PARAM */);
  threadData->lastEquationSolved = 2121;
}

/*
equation index: 2122
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.UFra = roo.datConExtWin[1].glaSys.UFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2122};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[630]] /* roo.irRadExc.datConExtWin[1].glaSys.UFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[394]] /* roo.datConExtWin[1].glaSys.UFra PARAM */);
  threadData->lastEquationSolved = 2122;
}

/*
equation index: 2123
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_b = roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2123};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[655]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 2123;
}

/*
equation index: 2124
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_a = roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2124};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[654]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 2124;
}

/*
equation index: 2125
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_b = roo.datConExtWin[1].glaSys.shade.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2125};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[651]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* roo.datConExtWin[1].glaSys.shade.absIR_b PARAM */);
  threadData->lastEquationSolved = 2125;
}

/*
equation index: 2126
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_b = roo.datConExtWin[1].glaSys.shade.rhoSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2126};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[653]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */);
  threadData->lastEquationSolved = 2126;
}

/*
equation index: 2127
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_a = roo.datConExtWin[1].glaSys.shade.rhoSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2127};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[652]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */);
  threadData->lastEquationSolved = 2127;
}

/*
equation index: 2128
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_b = roo.datConExtWin[1].glaSys.shade.tauSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2128};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[657]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* roo.datConExtWin[1].glaSys.shade.tauSol_b PARAM */);
  threadData->lastEquationSolved = 2128;
}

/*
equation index: 2129
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_a = roo.datConExtWin[1].glaSys.shade.tauSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2129};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[656]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* roo.datConExtWin[1].glaSys.shade.tauSol_a PARAM */);
  threadData->lastEquationSolved = 2129;
}

/*
equation index: 2130
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].P0 = roo.datConExtWin[1].glaSys.gas[1].P0
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2130};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[634]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].P0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* roo.datConExtWin[1].glaSys.gas[1].P0 PARAM */);
  threadData->lastEquationSolved = 2130;
}

/*
equation index: 2131
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].MM = roo.datConExtWin[1].glaSys.gas[1].MM
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2131};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[633]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].MM PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* roo.datConExtWin[1].glaSys.gas[1].MM PARAM */);
  threadData->lastEquationSolved = 2131;
}

/*
equation index: 2132
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_c = roo.datConExtWin[1].glaSys.gas[1].b_c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2132};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[638]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[402]] /* roo.datConExtWin[1].glaSys.gas[1].b_c PARAM */);
  threadData->lastEquationSolved = 2132;
}

/*
equation index: 2133
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_c = roo.datConExtWin[1].glaSys.gas[1].a_c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2133};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[635]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[399]] /* roo.datConExtWin[1].glaSys.gas[1].a_c PARAM */);
  threadData->lastEquationSolved = 2133;
}

/*
equation index: 2134
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_mu = roo.datConExtWin[1].glaSys.gas[1].b_mu
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2134};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[640]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* roo.datConExtWin[1].glaSys.gas[1].b_mu PARAM */);
  threadData->lastEquationSolved = 2134;
}

/*
equation index: 2135
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_mu = roo.datConExtWin[1].glaSys.gas[1].a_mu
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2135};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[637]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* roo.datConExtWin[1].glaSys.gas[1].a_mu PARAM */);
  threadData->lastEquationSolved = 2135;
}

/*
equation index: 2136
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_k = roo.datConExtWin[1].glaSys.gas[1].b_k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2136};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[639]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* roo.datConExtWin[1].glaSys.gas[1].b_k PARAM */);
  threadData->lastEquationSolved = 2136;
}

/*
equation index: 2137
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_k = roo.datConExtWin[1].glaSys.gas[1].a_k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2137};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[636]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[400]] /* roo.datConExtWin[1].glaSys.gas[1].a_k PARAM */);
  threadData->lastEquationSolved = 2137;
}

/*
equation index: 2138
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].x = roo.datConExtWin[1].glaSys.gas[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2138};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[641]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[405]] /* roo.datConExtWin[1].glaSys.gas[1].x PARAM */);
  threadData->lastEquationSolved = 2138;
}

/*
equation index: 2139
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_a = roo.datConExtWin[1].glaSys.glass[1].absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2139};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[642]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */);
  threadData->lastEquationSolved = 2139;
}

/*
equation index: 2140
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauIR = roo.datConExtWin[1].glaSys.glass[1].tauIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2140};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[647]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* roo.datConExtWin[1].glaSys.glass[1].tauIR PARAM */);
  threadData->lastEquationSolved = 2140;
}

/*
equation index: 2141
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2141};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[646]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */);
  threadData->lastEquationSolved = 2141;
}

/*
equation index: 2142
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2142};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[645]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */);
  threadData->lastEquationSolved = 2142;
}

/*
equation index: 2143
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauSol[1] = roo.datConExtWin[1].glaSys.glass[1].tauSol[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2143};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[648]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[412]] /* roo.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */);
  threadData->lastEquationSolved = 2143;
}

/*
equation index: 2144
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].k = roo.datConExtWin[1].glaSys.glass[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2144};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[644]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[408]] /* roo.datConExtWin[1].glaSys.glass[1].k PARAM */);
  threadData->lastEquationSolved = 2144;
}

/*
equation index: 2145
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].x = roo.datConExtWin[1].glaSys.glass[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2145};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[649]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* roo.datConExtWin[1].glaSys.glass[1].x PARAM */);
  threadData->lastEquationSolved = 2145;
}

/*
equation index: 2148
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].AGla = roo.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2148};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[623]] /* roo.irRadExc.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* roo.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 2148;
}

/*
equation index: 2149
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].AFra = roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2149};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[622]] /* roo.irRadExc.datConExtWin[1].AFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[386]] /* roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 2149;
}

/*
equation index: 2151
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].sidFin.gap = roo.datConExtWin[1].sidFin.gap
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2151};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[680]] /* roo.irRadExc.datConExtWin[1].sidFin.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[444]] /* roo.datConExtWin[1].sidFin.gap PARAM */);
  threadData->lastEquationSolved = 2151;
}

/*
equation index: 2153
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].sidFin.h = roo.datConExtWin[1].sidFin.h
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2153};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[681]] /* roo.irRadExc.datConExtWin[1].sidFin.h PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[445]] /* roo.datConExtWin[1].sidFin.h PARAM */);
  threadData->lastEquationSolved = 2153;
}

/*
equation index: 2155
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].ove.gap = roo.datConExtWin[1].ove.gap
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2155};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[676]] /* roo.irRadExc.datConExtWin[1].ove.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[440]] /* roo.datConExtWin[1].ove.gap PARAM */);
  threadData->lastEquationSolved = 2155;
}

/*
equation index: 2157
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].ove.wR = roo.datConExtWin[1].ove.wR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2157};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* roo.irRadExc.datConExtWin[1].ove.wR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[442]] /* roo.datConExtWin[1].ove.wR PARAM */);
  threadData->lastEquationSolved = 2157;
}

/*
equation index: 2158
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].ove.wL = roo.datConExtWin[1].ove.wL
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2158};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[677]] /* roo.irRadExc.datConExtWin[1].ove.wL PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[441]] /* roo.datConExtWin[1].ove.wL PARAM */);
  threadData->lastEquationSolved = 2158;
}

/*
equation index: 2159
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].wWin = roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2159};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[683]] /* roo.irRadExc.datConExtWin[1].wWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[447]] /* roo.datConExtWin[1].wWin PARAM */);
  threadData->lastEquationSolved = 2159;
}

/*
equation index: 2160
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].hWin = roo.datConExtWin[1].hWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2160};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[658]] /* roo.irRadExc.datConExtWin[1].hWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* roo.datConExtWin[1].hWin PARAM */);
  threadData->lastEquationSolved = 2160;
}

/*
equation index: 2161
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].A = roo.datConExtWin[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2161};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[621]] /* roo.irRadExc.datConExtWin[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[385]] /* roo.datConExtWin[1].A PARAM */);
  threadData->lastEquationSolved = 2161;
}

/*
equation index: 2162
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].boundaryCondition = roo.datConExtWin[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2162};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[183]] /* roo.irRadExc.datConExtWin[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[144]] /* roo.datConExtWin[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2162;
}

/*
equation index: 2165
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].T_b_start = roo.datConExtWin[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2165};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[627]] /* roo.irRadExc.datConExtWin[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[391]] /* roo.datConExtWin[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2165;
}

/*
equation index: 2166
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].T_a_start = roo.datConExtWin[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2166};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[626]] /* roo.irRadExc.datConExtWin[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* roo.datConExtWin[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2166;
}

/*
equation index: 2170
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].azi = roo.datConExtWin[1].azi
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2170};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[628]] /* roo.irRadExc.datConExtWin[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[392]] /* roo.datConExtWin[1].azi PARAM */);
  threadData->lastEquationSolved = 2170;
}

/*
equation index: 2172
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.roughness_a = roo.datConExtWin[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2172};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[188]] /* roo.irRadExc.datConExtWin[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[149]] /* roo.datConExtWin[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2172;
}

/*
equation index: 2173
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.absSol_b = roo.datConExtWin[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2173};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[663]] /* roo.irRadExc.datConExtWin[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[427]] /* roo.datConExtWin[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2173;
}

/*
equation index: 2174
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.absSol_a = roo.datConExtWin[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2174};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[662]] /* roo.irRadExc.datConExtWin[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* roo.datConExtWin[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2174;
}

/*
equation index: 2175
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.absIR_a = roo.datConExtWin[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2175};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[660]] /* roo.irRadExc.datConExtWin[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[424]] /* roo.datConExtWin[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2175;
}

/*
equation index: 2178
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].LHea = roo.datConExtWin[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2178};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[664]] /* roo.irRadExc.datConExtWin[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[428]] /* roo.datConExtWin[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2178;
}

/*
equation index: 2181
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].nStaReal = roo.datConExtWin[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2181};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[671]] /* roo.irRadExc.datConExtWin[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[435]] /* roo.datConExtWin[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2181;
}

/*
equation index: 2182
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].piMat = roo.datConExtWin[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2182};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[672]] /* roo.irRadExc.datConExtWin[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[436]] /* roo.datConExtWin[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2182;
}

/*
equation index: 2183
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].piRef = roo.datConExtWin[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2183};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[673]] /* roo.irRadExc.datConExtWin[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[437]] /* roo.datConExtWin[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2183;
}

/*
equation index: 2186
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].nStaRef = roo.datConExtWin[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2186};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[185]] /* roo.irRadExc.datConExtWin[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[146]] /* roo.datConExtWin[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2186;
}

/*
equation index: 2187
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].R = roo.datConExtWin[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2187};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[665]] /* roo.irRadExc.datConExtWin[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[429]] /* roo.datConExtWin[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2187;
}

/*
equation index: 2188
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].d = roo.datConExtWin[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2188};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[669]] /* roo.irRadExc.datConExtWin[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[433]] /* roo.datConExtWin[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2188;
}

/*
equation index: 2189
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].c = roo.datConExtWin[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2189};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[668]] /* roo.irRadExc.datConExtWin[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[432]] /* roo.datConExtWin[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2189;
}

/*
equation index: 2190
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].k = roo.datConExtWin[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2190};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[670]] /* roo.irRadExc.datConExtWin[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[434]] /* roo.datConExtWin[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2190;
}

/*
equation index: 2191
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].x = roo.datConExtWin[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2191};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[674]] /* roo.irRadExc.datConExtWin[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[438]] /* roo.datConExtWin[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2191;
}

/*
equation index: 2193
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].name = roo.datConExtWin[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2193};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[42]] /* roo.irRadExc.datConExtWin[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[38]] /* roo.datConExtWin[1].name PARAM */);
  threadData->lastEquationSolved = 2193;
}

/*
equation index: 2194
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].boundaryCondition = roo.datConExt[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2194};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[177]] /* roo.irRadExc.datConExt[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[138]] /* roo.datConExt[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 2194;
}

/*
equation index: 2197
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].T_b_start = roo.datConExt[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2197};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[602]] /* roo.irRadExc.datConExt[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[366]] /* roo.datConExt[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2197;
}

/*
equation index: 2198
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].T_a_start = roo.datConExt[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2198};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* roo.irRadExc.datConExt[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* roo.datConExt[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2198;
}

/*
equation index: 2202
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].azi = roo.datConExt[1].azi
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2202};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* roo.irRadExc.datConExt[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[367]] /* roo.datConExt[1].azi PARAM */);
  threadData->lastEquationSolved = 2202;
}

/*
equation index: 2204
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.roughness_a = roo.datConExt[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2204};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[182]] /* roo.irRadExc.datConExt[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[143]] /* roo.datConExt[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2204;
}

/*
equation index: 2205
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.absSol_b = roo.datConExt[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2205};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[608]] /* roo.irRadExc.datConExt[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* roo.datConExt[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2205;
}

/*
equation index: 2206
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.absSol_a = roo.datConExt[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2206};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[607]] /* roo.irRadExc.datConExt[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* roo.datConExt[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2206;
}

/*
equation index: 2207
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.absIR_a = roo.datConExt[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2207};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* roo.irRadExc.datConExt[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* roo.datConExt[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2207;
}

/*
equation index: 2210
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].LHea = roo.datConExt[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2210};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[609]] /* roo.irRadExc.datConExt[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* roo.datConExt[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2210;
}

/*
equation index: 2213
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].nStaReal = roo.datConExt[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2213};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[616]] /* roo.irRadExc.datConExt[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[380]] /* roo.datConExt[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2213;
}

/*
equation index: 2214
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].piMat = roo.datConExt[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2214};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[617]] /* roo.irRadExc.datConExt[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* roo.datConExt[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2214;
}

/*
equation index: 2215
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].piRef = roo.datConExt[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2215};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[618]] /* roo.irRadExc.datConExt[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[382]] /* roo.datConExt[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2215;
}

/*
equation index: 2218
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].nStaRef = roo.datConExt[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2218};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[179]] /* roo.irRadExc.datConExt[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[140]] /* roo.datConExt[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2218;
}

/*
equation index: 2219
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].R = roo.datConExt[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2219};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[610]] /* roo.irRadExc.datConExt[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* roo.datConExt[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2219;
}

/*
equation index: 2220
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].d = roo.datConExt[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2220};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[614]] /* roo.irRadExc.datConExt[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* roo.datConExt[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2220;
}

/*
equation index: 2221
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].c = roo.datConExt[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2221};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[613]] /* roo.irRadExc.datConExt[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* roo.datConExt[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2221;
}

/*
equation index: 2222
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].k = roo.datConExt[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2222};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[615]] /* roo.irRadExc.datConExt[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* roo.datConExt[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2222;
}

/*
equation index: 2223
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].x = roo.datConExt[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2223};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[619]] /* roo.irRadExc.datConExt[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* roo.datConExt[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2223;
}

/*
equation index: 2225
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].name = roo.datConExt[1].name
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2225};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[41]] /* roo.irRadExc.datConExt[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[37]] /* roo.datConExt[1].name PARAM */);
  threadData->lastEquationSolved = 2225;
}

/*
equation index: 2242
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[6].A = roo.surBou[6].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2242};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1026]] /* roo.irRadGai.surBou[6].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1292]] /* roo.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 2242;
}

/*
equation index: 2243
type: SIMPLE_ASSIGN
roo.irRadGai.ASurBou[6] = roo.irRadGai.surBou[6].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2243};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[835]] /* roo.irRadGai.ASurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1026]] /* roo.irRadGai.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 2243;
}

/*
equation index: 2244
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[6].absIR = roo.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2244};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1032]] /* roo.irRadGai.surBou[6].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* roo.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 2244;
}

/*
equation index: 2245
type: SIMPLE_ASSIGN
roo.irRadGai.epsSurBou[6] = roo.irRadGai.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2245};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1019]] /* roo.irRadGai.epsSurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1032]] /* roo.irRadGai.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 2245;
}

/*
equation index: 2246
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsSurBou[6] = roo.irRadGai.ASurBou[6] * roo.irRadGai.epsSurBou[6]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2246};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[829]] /* roo.irRadGai.AEpsSurBou[6] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[835]] /* roo.irRadGai.ASurBou[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1019]] /* roo.irRadGai.epsSurBou[6] PARAM */));
  threadData->lastEquationSolved = 2246;
}

/*
equation index: 2247
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[5].A = roo.surBou[5].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2247};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* roo.irRadGai.surBou[5].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1291]] /* roo.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 2247;
}

/*
equation index: 2248
type: SIMPLE_ASSIGN
roo.irRadGai.ASurBou[5] = roo.irRadGai.surBou[5].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2248};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[834]] /* roo.irRadGai.ASurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* roo.irRadGai.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 2248;
}

/*
equation index: 2249
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[5].absIR = roo.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2249};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1031]] /* roo.irRadGai.surBou[5].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* roo.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 2249;
}

/*
equation index: 2250
type: SIMPLE_ASSIGN
roo.irRadGai.epsSurBou[5] = roo.irRadGai.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2250};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1018]] /* roo.irRadGai.epsSurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1031]] /* roo.irRadGai.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 2250;
}

/*
equation index: 2251
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsSurBou[5] = roo.irRadGai.ASurBou[5] * roo.irRadGai.epsSurBou[5]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2251};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[828]] /* roo.irRadGai.AEpsSurBou[5] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[834]] /* roo.irRadGai.ASurBou[5] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1018]] /* roo.irRadGai.epsSurBou[5] PARAM */));
  threadData->lastEquationSolved = 2251;
}

/*
equation index: 2252
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[4].A = roo.surBou[4].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2252};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* roo.irRadGai.surBou[4].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* roo.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 2252;
}

/*
equation index: 2253
type: SIMPLE_ASSIGN
roo.irRadGai.ASurBou[4] = roo.irRadGai.surBou[4].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2253};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[833]] /* roo.irRadGai.ASurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* roo.irRadGai.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 2253;
}

/*
equation index: 2254
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[4].absIR = roo.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2254};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1030]] /* roo.irRadGai.surBou[4].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1296]] /* roo.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 2254;
}

/*
equation index: 2255
type: SIMPLE_ASSIGN
roo.irRadGai.epsSurBou[4] = roo.irRadGai.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2255};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1017]] /* roo.irRadGai.epsSurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1030]] /* roo.irRadGai.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 2255;
}

/*
equation index: 2256
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsSurBou[4] = roo.irRadGai.ASurBou[4] * roo.irRadGai.epsSurBou[4]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2256};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[827]] /* roo.irRadGai.AEpsSurBou[4] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[833]] /* roo.irRadGai.ASurBou[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1017]] /* roo.irRadGai.epsSurBou[4] PARAM */));
  threadData->lastEquationSolved = 2256;
}

/*
equation index: 2257
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[3].A = roo.surBou[3].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2257};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1023]] /* roo.irRadGai.surBou[3].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* roo.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 2257;
}

/*
equation index: 2258
type: SIMPLE_ASSIGN
roo.irRadGai.ASurBou[3] = roo.irRadGai.surBou[3].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2258};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[832]] /* roo.irRadGai.ASurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1023]] /* roo.irRadGai.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 2258;
}

/*
equation index: 2259
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[3].absIR = roo.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2259};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1029]] /* roo.irRadGai.surBou[3].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* roo.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 2259;
}

/*
equation index: 2260
type: SIMPLE_ASSIGN
roo.irRadGai.epsSurBou[3] = roo.irRadGai.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2260};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1016]] /* roo.irRadGai.epsSurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1029]] /* roo.irRadGai.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 2260;
}

/*
equation index: 2261
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsSurBou[3] = roo.irRadGai.ASurBou[3] * roo.irRadGai.epsSurBou[3]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2261};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[826]] /* roo.irRadGai.AEpsSurBou[3] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[832]] /* roo.irRadGai.ASurBou[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1016]] /* roo.irRadGai.epsSurBou[3] PARAM */));
  threadData->lastEquationSolved = 2261;
}

/*
equation index: 2262
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[2].A = roo.surBou[2].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2262};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1022]] /* roo.irRadGai.surBou[2].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* roo.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 2262;
}

/*
equation index: 2263
type: SIMPLE_ASSIGN
roo.irRadGai.ASurBou[2] = roo.irRadGai.surBou[2].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2263};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[831]] /* roo.irRadGai.ASurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1022]] /* roo.irRadGai.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 2263;
}

/*
equation index: 2264
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[2].absIR = roo.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2264};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1028]] /* roo.irRadGai.surBou[2].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* roo.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 2264;
}

/*
equation index: 2265
type: SIMPLE_ASSIGN
roo.irRadGai.epsSurBou[2] = roo.irRadGai.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2265};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1015]] /* roo.irRadGai.epsSurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1028]] /* roo.irRadGai.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 2265;
}

/*
equation index: 2266
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsSurBou[2] = roo.irRadGai.ASurBou[2] * roo.irRadGai.epsSurBou[2]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2266};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[825]] /* roo.irRadGai.AEpsSurBou[2] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[831]] /* roo.irRadGai.ASurBou[2] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1015]] /* roo.irRadGai.epsSurBou[2] PARAM */));
  threadData->lastEquationSolved = 2266;
}

/*
equation index: 2267
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[1].A = roo.surBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2267};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1021]] /* roo.irRadGai.surBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* roo.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 2267;
}

/*
equation index: 2268
type: SIMPLE_ASSIGN
roo.irRadGai.ASurBou[1] = roo.irRadGai.surBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2268};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[830]] /* roo.irRadGai.ASurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1021]] /* roo.irRadGai.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 2268;
}

/*
equation index: 2269
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[1].absIR = roo.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2269};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1027]] /* roo.irRadGai.surBou[1].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1293]] /* roo.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 2269;
}

/*
equation index: 2270
type: SIMPLE_ASSIGN
roo.irRadGai.epsSurBou[1] = roo.irRadGai.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2270};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1014]] /* roo.irRadGai.epsSurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1027]] /* roo.irRadGai.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 2270;
}

/*
equation index: 2271
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsSurBou[1] = roo.irRadGai.ASurBou[1] * roo.irRadGai.epsSurBou[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2271};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[824]] /* roo.irRadGai.AEpsSurBou[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[830]] /* roo.irRadGai.ASurBou[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1014]] /* roo.irRadGai.epsSurBou[1] PARAM */));
  threadData->lastEquationSolved = 2271;
}

/*
equation index: 2272
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].A = roo.datConBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2272};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[836]] /* roo.irRadGai.datConBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* roo.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 2272;
}

/*
equation index: 2273
type: SIMPLE_ASSIGN
roo.irRadGai.AConBou[1] = roo.irRadGai.datConBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2273};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[812]] /* roo.irRadGai.AConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[836]] /* roo.irRadGai.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 2273;
}

/*
equation index: 2274
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.absIR_b = roo.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2274};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[842]] /* roo.irRadGai.datConBou[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[349]] /* roo.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2274;
}

/*
equation index: 2275
type: SIMPLE_ASSIGN
roo.irRadGai.epsConBou[1] = roo.irRadGai.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2275};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* roo.irRadGai.epsConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[842]] /* roo.irRadGai.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2275;
}

/*
equation index: 2276
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConBou[1] = roo.irRadGai.AConBou[1] * roo.irRadGai.epsConBou[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2276};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[818]] /* roo.irRadGai.AEpsConBou[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[812]] /* roo.irRadGai.AConBou[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* roo.irRadGai.epsConBou[1] PARAM */));
  threadData->lastEquationSolved = 2276;
}

/*
equation index: 2277
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].A = roo.datConPar[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2277};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[941]] /* roo.irRadGai.datConPar[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[448]] /* roo.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 2277;
}

/*
equation index: 2278
type: SIMPLE_ASSIGN
roo.irRadGai.AConPar[1] = roo.irRadGai.datConPar[1].A
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2278};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[817]] /* roo.irRadGai.AConPar[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[941]] /* roo.irRadGai.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 2278;
}

/*
equation index: 2279
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.absIR_b = roo.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2279};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[947]] /* roo.irRadGai.datConPar[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[454]] /* roo.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2279;
}

/*
equation index: 2280
type: SIMPLE_ASSIGN
roo.irRadGai.epsConPar_b[1] = roo.irRadGai.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2280};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* roo.irRadGai.epsConPar_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[947]] /* roo.irRadGai.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2280;
}

/*
equation index: 2281
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConPar_b[1] = roo.irRadGai.AConPar[1] * roo.irRadGai.epsConPar_b[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2281};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[823]] /* roo.irRadGai.AEpsConPar_b[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[817]] /* roo.irRadGai.AConPar[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* roo.irRadGai.epsConPar_b[1] PARAM */));
  threadData->lastEquationSolved = 2281;
}

/*
equation index: 2282
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.absIR_a = roo.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2282};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[946]] /* roo.irRadGai.datConPar[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[453]] /* roo.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2282;
}

/*
equation index: 2283
type: SIMPLE_ASSIGN
roo.irRadGai.epsConPar_a[1] = roo.irRadGai.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2283};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1012]] /* roo.irRadGai.epsConPar_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[946]] /* roo.irRadGai.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2283;
}

/*
equation index: 2284
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConPar_a[1] = roo.irRadGai.AConPar[1] * roo.irRadGai.epsConPar_a[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2284};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[822]] /* roo.irRadGai.AEpsConPar_a[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[817]] /* roo.irRadGai.AConPar[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1012]] /* roo.irRadGai.epsConPar_a[1] PARAM */));
  threadData->lastEquationSolved = 2284;
}

/*
equation index: 2285
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].AWin = roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2285};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* roo.irRadGai.datConExtWin[1].AWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 2285;
}

/*
equation index: 2286
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].fFra = roo.datConExtWin[1].fFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2286};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[886]] /* roo.irRadGai.datConExtWin[1].fFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[393]] /* roo.datConExtWin[1].fFra PARAM */);
  threadData->lastEquationSolved = 2286;
}

/*
equation index: 2287
type: SIMPLE_ASSIGN
roo.irRadGai.AConExtWinFra[1] = roo.irRadGai.datConExtWin[1].fFra * roo.irRadGai.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2287};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[814]] /* roo.irRadGai.AConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[886]] /* roo.irRadGai.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* roo.irRadGai.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 2287;
}

/*
equation index: 2288
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.absIRFra = roo.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2288};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[888]] /* roo.irRadGai.datConExtWin[1].glaSys.absIRFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[395]] /* roo.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 2288;
}

/*
equation index: 2289
type: SIMPLE_ASSIGN
roo.irRadGai.epsConExtWinFra[1] = roo.irRadGai.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2289};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1008]] /* roo.irRadGai.epsConExtWinFra[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[888]] /* roo.irRadGai.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 2289;
}

/*
equation index: 2290
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConExtWinFra[1] = roo.irRadGai.AConExtWinFra[1] * roo.irRadGai.epsConExtWinFra[1]
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2290};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[820]] /* roo.irRadGai.AEpsConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[814]] /* roo.irRadGai.AConExtWinFra[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1008]] /* roo.irRadGai.epsConExtWinFra[1] PARAM */));
  threadData->lastEquationSolved = 2290;
}

/*
equation index: 2291
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].AOpa = roo.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2291};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[881]] /* roo.irRadGai.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[388]] /* roo.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 2291;
}

/*
equation index: 2292
type: SIMPLE_ASSIGN
roo.irRadGai.AConExtWinOpa[1] = roo.irRadGai.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void tmp_two_returns_res_eqFunction_2292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2292};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[816]] /* roo.irRadGai.AConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[881]] /* roo.irRadGai.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 2292;
}
OMC_DISABLE_OPT
void tmp_two_returns_res_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[483])(DATA*, threadData_t*) = {
    tmp_two_returns_res_eqFunction_1437,
    tmp_two_returns_res_eqFunction_1438,
    tmp_two_returns_res_eqFunction_1439,
    tmp_two_returns_res_eqFunction_1440,
    tmp_two_returns_res_eqFunction_1441,
    tmp_two_returns_res_eqFunction_1442,
    tmp_two_returns_res_eqFunction_1443,
    tmp_two_returns_res_eqFunction_1446,
    tmp_two_returns_res_eqFunction_1447,
    tmp_two_returns_res_eqFunction_1448,
    tmp_two_returns_res_eqFunction_1449,
    tmp_two_returns_res_eqFunction_1452,
    tmp_two_returns_res_eqFunction_1453,
    tmp_two_returns_res_eqFunction_1465,
    tmp_two_returns_res_eqFunction_1466,
    tmp_two_returns_res_eqFunction_1467,
    tmp_two_returns_res_eqFunction_1471,
    tmp_two_returns_res_eqFunction_1475,
    tmp_two_returns_res_eqFunction_1482,
    tmp_two_returns_res_eqFunction_1486,
    tmp_two_returns_res_eqFunction_1487,
    tmp_two_returns_res_eqFunction_1488,
    tmp_two_returns_res_eqFunction_1492,
    tmp_two_returns_res_eqFunction_1496,
    tmp_two_returns_res_eqFunction_1503,
    tmp_two_returns_res_eqFunction_1506,
    tmp_two_returns_res_eqFunction_1515,
    tmp_two_returns_res_eqFunction_1531,
    tmp_two_returns_res_eqFunction_1532,
    tmp_two_returns_res_eqFunction_1533,
    tmp_two_returns_res_eqFunction_1534,
    tmp_two_returns_res_eqFunction_1535,
    tmp_two_returns_res_eqFunction_1536,
    tmp_two_returns_res_eqFunction_1543,
    tmp_two_returns_res_eqFunction_1546,
    tmp_two_returns_res_eqFunction_1547,
    tmp_two_returns_res_eqFunction_1548,
    tmp_two_returns_res_eqFunction_1549,
    tmp_two_returns_res_eqFunction_1560,
    tmp_two_returns_res_eqFunction_1562,
    tmp_two_returns_res_eqFunction_1564,
    tmp_two_returns_res_eqFunction_1566,
    tmp_two_returns_res_eqFunction_1568,
    tmp_two_returns_res_eqFunction_1570,
    tmp_two_returns_res_eqFunction_1572,
    tmp_two_returns_res_eqFunction_1574,
    tmp_two_returns_res_eqFunction_1576,
    tmp_two_returns_res_eqFunction_1577,
    tmp_two_returns_res_eqFunction_1579,
    tmp_two_returns_res_eqFunction_1581,
    tmp_two_returns_res_eqFunction_1583,
    tmp_two_returns_res_eqFunction_1584,
    tmp_two_returns_res_eqFunction_1614,
    tmp_two_returns_res_eqFunction_1617,
    tmp_two_returns_res_eqFunction_1634,
    tmp_two_returns_res_eqFunction_1635,
    tmp_two_returns_res_eqFunction_1636,
    tmp_two_returns_res_eqFunction_1641,
    tmp_two_returns_res_eqFunction_1657,
    tmp_two_returns_res_eqFunction_1658,
    tmp_two_returns_res_eqFunction_1660,
    tmp_two_returns_res_eqFunction_1661,
    tmp_two_returns_res_eqFunction_1662,
    tmp_two_returns_res_eqFunction_1663,
    tmp_two_returns_res_eqFunction_1664,
    tmp_two_returns_res_eqFunction_1665,
    tmp_two_returns_res_eqFunction_1666,
    tmp_two_returns_res_eqFunction_1667,
    tmp_two_returns_res_eqFunction_1668,
    tmp_two_returns_res_eqFunction_1673,
    tmp_two_returns_res_eqFunction_1674,
    tmp_two_returns_res_eqFunction_1675,
    tmp_two_returns_res_eqFunction_1676,
    tmp_two_returns_res_eqFunction_1677,
    tmp_two_returns_res_eqFunction_1678,
    tmp_two_returns_res_eqFunction_1679,
    tmp_two_returns_res_eqFunction_1680,
    tmp_two_returns_res_eqFunction_1681,
    tmp_two_returns_res_eqFunction_1682,
    tmp_two_returns_res_eqFunction_1683,
    tmp_two_returns_res_eqFunction_1684,
    tmp_two_returns_res_eqFunction_1685,
    tmp_two_returns_res_eqFunction_1686,
    tmp_two_returns_res_eqFunction_1687,
    tmp_two_returns_res_eqFunction_1688,
    tmp_two_returns_res_eqFunction_1689,
    tmp_two_returns_res_eqFunction_1690,
    tmp_two_returns_res_eqFunction_1691,
    tmp_two_returns_res_eqFunction_1692,
    tmp_two_returns_res_eqFunction_1693,
    tmp_two_returns_res_eqFunction_1694,
    tmp_two_returns_res_eqFunction_1695,
    tmp_two_returns_res_eqFunction_1696,
    tmp_two_returns_res_eqFunction_1697,
    tmp_two_returns_res_eqFunction_1698,
    tmp_two_returns_res_eqFunction_1699,
    tmp_two_returns_res_eqFunction_1700,
    tmp_two_returns_res_eqFunction_1701,
    tmp_two_returns_res_eqFunction_1702,
    tmp_two_returns_res_eqFunction_1703,
    tmp_two_returns_res_eqFunction_1704,
    tmp_two_returns_res_eqFunction_1705,
    tmp_two_returns_res_eqFunction_1706,
    tmp_two_returns_res_eqFunction_1707,
    tmp_two_returns_res_eqFunction_1708,
    tmp_two_returns_res_eqFunction_1709,
    tmp_two_returns_res_eqFunction_1710,
    tmp_two_returns_res_eqFunction_1711,
    tmp_two_returns_res_eqFunction_1712,
    tmp_two_returns_res_eqFunction_1713,
    tmp_two_returns_res_eqFunction_1714,
    tmp_two_returns_res_eqFunction_1715,
    tmp_two_returns_res_eqFunction_1716,
    tmp_two_returns_res_eqFunction_1717,
    tmp_two_returns_res_eqFunction_1718,
    tmp_two_returns_res_eqFunction_1719,
    tmp_two_returns_res_eqFunction_1720,
    tmp_two_returns_res_eqFunction_1721,
    tmp_two_returns_res_eqFunction_1722,
    tmp_two_returns_res_eqFunction_1723,
    tmp_two_returns_res_eqFunction_1724,
    tmp_two_returns_res_eqFunction_1730,
    tmp_two_returns_res_eqFunction_1736,
    tmp_two_returns_res_eqFunction_1737,
    tmp_two_returns_res_eqFunction_1739,
    tmp_two_returns_res_eqFunction_1741,
    tmp_two_returns_res_eqFunction_1742,
    tmp_two_returns_res_eqFunction_1744,
    tmp_two_returns_res_eqFunction_1746,
    tmp_two_returns_res_eqFunction_1747,
    tmp_two_returns_res_eqFunction_1749,
    tmp_two_returns_res_eqFunction_1751,
    tmp_two_returns_res_eqFunction_1752,
    tmp_two_returns_res_eqFunction_1754,
    tmp_two_returns_res_eqFunction_1756,
    tmp_two_returns_res_eqFunction_1757,
    tmp_two_returns_res_eqFunction_1759,
    tmp_two_returns_res_eqFunction_1761,
    tmp_two_returns_res_eqFunction_1762,
    tmp_two_returns_res_eqFunction_1764,
    tmp_two_returns_res_eqFunction_1766,
    tmp_two_returns_res_eqFunction_1769,
    tmp_two_returns_res_eqFunction_1770,
    tmp_two_returns_res_eqFunction_1774,
    tmp_two_returns_res_eqFunction_1776,
    tmp_two_returns_res_eqFunction_1777,
    tmp_two_returns_res_eqFunction_1778,
    tmp_two_returns_res_eqFunction_1779,
    tmp_two_returns_res_eqFunction_1782,
    tmp_two_returns_res_eqFunction_1785,
    tmp_two_returns_res_eqFunction_1786,
    tmp_two_returns_res_eqFunction_1787,
    tmp_two_returns_res_eqFunction_1790,
    tmp_two_returns_res_eqFunction_1791,
    tmp_two_returns_res_eqFunction_1792,
    tmp_two_returns_res_eqFunction_1793,
    tmp_two_returns_res_eqFunction_1794,
    tmp_two_returns_res_eqFunction_1795,
    tmp_two_returns_res_eqFunction_1797,
    tmp_two_returns_res_eqFunction_1798,
    tmp_two_returns_res_eqFunction_1801,
    tmp_two_returns_res_eqFunction_1802,
    tmp_two_returns_res_eqFunction_1806,
    tmp_two_returns_res_eqFunction_1808,
    tmp_two_returns_res_eqFunction_1809,
    tmp_two_returns_res_eqFunction_1810,
    tmp_two_returns_res_eqFunction_1813,
    tmp_two_returns_res_eqFunction_1816,
    tmp_two_returns_res_eqFunction_1817,
    tmp_two_returns_res_eqFunction_1818,
    tmp_two_returns_res_eqFunction_1821,
    tmp_two_returns_res_eqFunction_1822,
    tmp_two_returns_res_eqFunction_1823,
    tmp_two_returns_res_eqFunction_1824,
    tmp_two_returns_res_eqFunction_1825,
    tmp_two_returns_res_eqFunction_1826,
    tmp_two_returns_res_eqFunction_1828,
    tmp_two_returns_res_eqFunction_1832,
    tmp_two_returns_res_eqFunction_1833,
    tmp_two_returns_res_eqFunction_1834,
    tmp_two_returns_res_eqFunction_1835,
    tmp_two_returns_res_eqFunction_1836,
    tmp_two_returns_res_eqFunction_1837,
    tmp_two_returns_res_eqFunction_1838,
    tmp_two_returns_res_eqFunction_1839,
    tmp_two_returns_res_eqFunction_1840,
    tmp_two_returns_res_eqFunction_1841,
    tmp_two_returns_res_eqFunction_1842,
    tmp_two_returns_res_eqFunction_1843,
    tmp_two_returns_res_eqFunction_1844,
    tmp_two_returns_res_eqFunction_1845,
    tmp_two_returns_res_eqFunction_1846,
    tmp_two_returns_res_eqFunction_1847,
    tmp_two_returns_res_eqFunction_1848,
    tmp_two_returns_res_eqFunction_1849,
    tmp_two_returns_res_eqFunction_1850,
    tmp_two_returns_res_eqFunction_1851,
    tmp_two_returns_res_eqFunction_1852,
    tmp_two_returns_res_eqFunction_1853,
    tmp_two_returns_res_eqFunction_1854,
    tmp_two_returns_res_eqFunction_1855,
    tmp_two_returns_res_eqFunction_1856,
    tmp_two_returns_res_eqFunction_1859,
    tmp_two_returns_res_eqFunction_1861,
    tmp_two_returns_res_eqFunction_1863,
    tmp_two_returns_res_eqFunction_1865,
    tmp_two_returns_res_eqFunction_1867,
    tmp_two_returns_res_eqFunction_1868,
    tmp_two_returns_res_eqFunction_1869,
    tmp_two_returns_res_eqFunction_1870,
    tmp_two_returns_res_eqFunction_1871,
    tmp_two_returns_res_eqFunction_1872,
    tmp_two_returns_res_eqFunction_1875,
    tmp_two_returns_res_eqFunction_1876,
    tmp_two_returns_res_eqFunction_1880,
    tmp_two_returns_res_eqFunction_1882,
    tmp_two_returns_res_eqFunction_1883,
    tmp_two_returns_res_eqFunction_1884,
    tmp_two_returns_res_eqFunction_1885,
    tmp_two_returns_res_eqFunction_1888,
    tmp_two_returns_res_eqFunction_1891,
    tmp_two_returns_res_eqFunction_1892,
    tmp_two_returns_res_eqFunction_1893,
    tmp_two_returns_res_eqFunction_1896,
    tmp_two_returns_res_eqFunction_1897,
    tmp_two_returns_res_eqFunction_1898,
    tmp_two_returns_res_eqFunction_1899,
    tmp_two_returns_res_eqFunction_1900,
    tmp_two_returns_res_eqFunction_1901,
    tmp_two_returns_res_eqFunction_1903,
    tmp_two_returns_res_eqFunction_1904,
    tmp_two_returns_res_eqFunction_1907,
    tmp_two_returns_res_eqFunction_1908,
    tmp_two_returns_res_eqFunction_1912,
    tmp_two_returns_res_eqFunction_1914,
    tmp_two_returns_res_eqFunction_1915,
    tmp_two_returns_res_eqFunction_1916,
    tmp_two_returns_res_eqFunction_1917,
    tmp_two_returns_res_eqFunction_1920,
    tmp_two_returns_res_eqFunction_1923,
    tmp_two_returns_res_eqFunction_1924,
    tmp_two_returns_res_eqFunction_1925,
    tmp_two_returns_res_eqFunction_1928,
    tmp_two_returns_res_eqFunction_1929,
    tmp_two_returns_res_eqFunction_1930,
    tmp_two_returns_res_eqFunction_1931,
    tmp_two_returns_res_eqFunction_1932,
    tmp_two_returns_res_eqFunction_1933,
    tmp_two_returns_res_eqFunction_1935,
    tmp_two_returns_res_eqFunction_1952,
    tmp_two_returns_res_eqFunction_1961,
    tmp_two_returns_res_eqFunction_1962,
    tmp_two_returns_res_eqFunction_1963,
    tmp_two_returns_res_eqFunction_1964,
    tmp_two_returns_res_eqFunction_1965,
    tmp_two_returns_res_eqFunction_1966,
    tmp_two_returns_res_eqFunction_1967,
    tmp_two_returns_res_eqFunction_1968,
    tmp_two_returns_res_eqFunction_1969,
    tmp_two_returns_res_eqFunction_1970,
    tmp_two_returns_res_eqFunction_1971,
    tmp_two_returns_res_eqFunction_1972,
    tmp_two_returns_res_eqFunction_1973,
    tmp_two_returns_res_eqFunction_1974,
    tmp_two_returns_res_eqFunction_1975,
    tmp_two_returns_res_eqFunction_1976,
    tmp_two_returns_res_eqFunction_1977,
    tmp_two_returns_res_eqFunction_1978,
    tmp_two_returns_res_eqFunction_1979,
    tmp_two_returns_res_eqFunction_1980,
    tmp_two_returns_res_eqFunction_1981,
    tmp_two_returns_res_eqFunction_1982,
    tmp_two_returns_res_eqFunction_1983,
    tmp_two_returns_res_eqFunction_1984,
    tmp_two_returns_res_eqFunction_1985,
    tmp_two_returns_res_eqFunction_1986,
    tmp_two_returns_res_eqFunction_1987,
    tmp_two_returns_res_eqFunction_1988,
    tmp_two_returns_res_eqFunction_1989,
    tmp_two_returns_res_eqFunction_1990,
    tmp_two_returns_res_eqFunction_1991,
    tmp_two_returns_res_eqFunction_1992,
    tmp_two_returns_res_eqFunction_1993,
    tmp_two_returns_res_eqFunction_1994,
    tmp_two_returns_res_eqFunction_1995,
    tmp_two_returns_res_eqFunction_1996,
    tmp_two_returns_res_eqFunction_1997,
    tmp_two_returns_res_eqFunction_1998,
    tmp_two_returns_res_eqFunction_1999,
    tmp_two_returns_res_eqFunction_2000,
    tmp_two_returns_res_eqFunction_2001,
    tmp_two_returns_res_eqFunction_2002,
    tmp_two_returns_res_eqFunction_2003,
    tmp_two_returns_res_eqFunction_2004,
    tmp_two_returns_res_eqFunction_2005,
    tmp_two_returns_res_eqFunction_2006,
    tmp_two_returns_res_eqFunction_2007,
    tmp_two_returns_res_eqFunction_2008,
    tmp_two_returns_res_eqFunction_2009,
    tmp_two_returns_res_eqFunction_2010,
    tmp_two_returns_res_eqFunction_2011,
    tmp_two_returns_res_eqFunction_2012,
    tmp_two_returns_res_eqFunction_2013,
    tmp_two_returns_res_eqFunction_2019,
    tmp_two_returns_res_eqFunction_2025,
    tmp_two_returns_res_eqFunction_2026,
    tmp_two_returns_res_eqFunction_2028,
    tmp_two_returns_res_eqFunction_2030,
    tmp_two_returns_res_eqFunction_2031,
    tmp_two_returns_res_eqFunction_2033,
    tmp_two_returns_res_eqFunction_2035,
    tmp_two_returns_res_eqFunction_2036,
    tmp_two_returns_res_eqFunction_2038,
    tmp_two_returns_res_eqFunction_2040,
    tmp_two_returns_res_eqFunction_2041,
    tmp_two_returns_res_eqFunction_2043,
    tmp_two_returns_res_eqFunction_2045,
    tmp_two_returns_res_eqFunction_2046,
    tmp_two_returns_res_eqFunction_2048,
    tmp_two_returns_res_eqFunction_2050,
    tmp_two_returns_res_eqFunction_2051,
    tmp_two_returns_res_eqFunction_2053,
    tmp_two_returns_res_eqFunction_2055,
    tmp_two_returns_res_eqFunction_2058,
    tmp_two_returns_res_eqFunction_2059,
    tmp_two_returns_res_eqFunction_2063,
    tmp_two_returns_res_eqFunction_2065,
    tmp_two_returns_res_eqFunction_2066,
    tmp_two_returns_res_eqFunction_2067,
    tmp_two_returns_res_eqFunction_2068,
    tmp_two_returns_res_eqFunction_2071,
    tmp_two_returns_res_eqFunction_2074,
    tmp_two_returns_res_eqFunction_2075,
    tmp_two_returns_res_eqFunction_2076,
    tmp_two_returns_res_eqFunction_2079,
    tmp_two_returns_res_eqFunction_2080,
    tmp_two_returns_res_eqFunction_2081,
    tmp_two_returns_res_eqFunction_2082,
    tmp_two_returns_res_eqFunction_2083,
    tmp_two_returns_res_eqFunction_2084,
    tmp_two_returns_res_eqFunction_2086,
    tmp_two_returns_res_eqFunction_2087,
    tmp_two_returns_res_eqFunction_2090,
    tmp_two_returns_res_eqFunction_2091,
    tmp_two_returns_res_eqFunction_2095,
    tmp_two_returns_res_eqFunction_2097,
    tmp_two_returns_res_eqFunction_2098,
    tmp_two_returns_res_eqFunction_2099,
    tmp_two_returns_res_eqFunction_2102,
    tmp_two_returns_res_eqFunction_2105,
    tmp_two_returns_res_eqFunction_2106,
    tmp_two_returns_res_eqFunction_2107,
    tmp_two_returns_res_eqFunction_2110,
    tmp_two_returns_res_eqFunction_2111,
    tmp_two_returns_res_eqFunction_2112,
    tmp_two_returns_res_eqFunction_2113,
    tmp_two_returns_res_eqFunction_2114,
    tmp_two_returns_res_eqFunction_2115,
    tmp_two_returns_res_eqFunction_2117,
    tmp_two_returns_res_eqFunction_2121,
    tmp_two_returns_res_eqFunction_2122,
    tmp_two_returns_res_eqFunction_2123,
    tmp_two_returns_res_eqFunction_2124,
    tmp_two_returns_res_eqFunction_2125,
    tmp_two_returns_res_eqFunction_2126,
    tmp_two_returns_res_eqFunction_2127,
    tmp_two_returns_res_eqFunction_2128,
    tmp_two_returns_res_eqFunction_2129,
    tmp_two_returns_res_eqFunction_2130,
    tmp_two_returns_res_eqFunction_2131,
    tmp_two_returns_res_eqFunction_2132,
    tmp_two_returns_res_eqFunction_2133,
    tmp_two_returns_res_eqFunction_2134,
    tmp_two_returns_res_eqFunction_2135,
    tmp_two_returns_res_eqFunction_2136,
    tmp_two_returns_res_eqFunction_2137,
    tmp_two_returns_res_eqFunction_2138,
    tmp_two_returns_res_eqFunction_2139,
    tmp_two_returns_res_eqFunction_2140,
    tmp_two_returns_res_eqFunction_2141,
    tmp_two_returns_res_eqFunction_2142,
    tmp_two_returns_res_eqFunction_2143,
    tmp_two_returns_res_eqFunction_2144,
    tmp_two_returns_res_eqFunction_2145,
    tmp_two_returns_res_eqFunction_2148,
    tmp_two_returns_res_eqFunction_2149,
    tmp_two_returns_res_eqFunction_2151,
    tmp_two_returns_res_eqFunction_2153,
    tmp_two_returns_res_eqFunction_2155,
    tmp_two_returns_res_eqFunction_2157,
    tmp_two_returns_res_eqFunction_2158,
    tmp_two_returns_res_eqFunction_2159,
    tmp_two_returns_res_eqFunction_2160,
    tmp_two_returns_res_eqFunction_2161,
    tmp_two_returns_res_eqFunction_2162,
    tmp_two_returns_res_eqFunction_2165,
    tmp_two_returns_res_eqFunction_2166,
    tmp_two_returns_res_eqFunction_2170,
    tmp_two_returns_res_eqFunction_2172,
    tmp_two_returns_res_eqFunction_2173,
    tmp_two_returns_res_eqFunction_2174,
    tmp_two_returns_res_eqFunction_2175,
    tmp_two_returns_res_eqFunction_2178,
    tmp_two_returns_res_eqFunction_2181,
    tmp_two_returns_res_eqFunction_2182,
    tmp_two_returns_res_eqFunction_2183,
    tmp_two_returns_res_eqFunction_2186,
    tmp_two_returns_res_eqFunction_2187,
    tmp_two_returns_res_eqFunction_2188,
    tmp_two_returns_res_eqFunction_2189,
    tmp_two_returns_res_eqFunction_2190,
    tmp_two_returns_res_eqFunction_2191,
    tmp_two_returns_res_eqFunction_2193,
    tmp_two_returns_res_eqFunction_2194,
    tmp_two_returns_res_eqFunction_2197,
    tmp_two_returns_res_eqFunction_2198,
    tmp_two_returns_res_eqFunction_2202,
    tmp_two_returns_res_eqFunction_2204,
    tmp_two_returns_res_eqFunction_2205,
    tmp_two_returns_res_eqFunction_2206,
    tmp_two_returns_res_eqFunction_2207,
    tmp_two_returns_res_eqFunction_2210,
    tmp_two_returns_res_eqFunction_2213,
    tmp_two_returns_res_eqFunction_2214,
    tmp_two_returns_res_eqFunction_2215,
    tmp_two_returns_res_eqFunction_2218,
    tmp_two_returns_res_eqFunction_2219,
    tmp_two_returns_res_eqFunction_2220,
    tmp_two_returns_res_eqFunction_2221,
    tmp_two_returns_res_eqFunction_2222,
    tmp_two_returns_res_eqFunction_2223,
    tmp_two_returns_res_eqFunction_2225,
    tmp_two_returns_res_eqFunction_2242,
    tmp_two_returns_res_eqFunction_2243,
    tmp_two_returns_res_eqFunction_2244,
    tmp_two_returns_res_eqFunction_2245,
    tmp_two_returns_res_eqFunction_2246,
    tmp_two_returns_res_eqFunction_2247,
    tmp_two_returns_res_eqFunction_2248,
    tmp_two_returns_res_eqFunction_2249,
    tmp_two_returns_res_eqFunction_2250,
    tmp_two_returns_res_eqFunction_2251,
    tmp_two_returns_res_eqFunction_2252,
    tmp_two_returns_res_eqFunction_2253,
    tmp_two_returns_res_eqFunction_2254,
    tmp_two_returns_res_eqFunction_2255,
    tmp_two_returns_res_eqFunction_2256,
    tmp_two_returns_res_eqFunction_2257,
    tmp_two_returns_res_eqFunction_2258,
    tmp_two_returns_res_eqFunction_2259,
    tmp_two_returns_res_eqFunction_2260,
    tmp_two_returns_res_eqFunction_2261,
    tmp_two_returns_res_eqFunction_2262,
    tmp_two_returns_res_eqFunction_2263,
    tmp_two_returns_res_eqFunction_2264,
    tmp_two_returns_res_eqFunction_2265,
    tmp_two_returns_res_eqFunction_2266,
    tmp_two_returns_res_eqFunction_2267,
    tmp_two_returns_res_eqFunction_2268,
    tmp_two_returns_res_eqFunction_2269,
    tmp_two_returns_res_eqFunction_2270,
    tmp_two_returns_res_eqFunction_2271,
    tmp_two_returns_res_eqFunction_2272,
    tmp_two_returns_res_eqFunction_2273,
    tmp_two_returns_res_eqFunction_2274,
    tmp_two_returns_res_eqFunction_2275,
    tmp_two_returns_res_eqFunction_2276,
    tmp_two_returns_res_eqFunction_2277,
    tmp_two_returns_res_eqFunction_2278,
    tmp_two_returns_res_eqFunction_2279,
    tmp_two_returns_res_eqFunction_2280,
    tmp_two_returns_res_eqFunction_2281,
    tmp_two_returns_res_eqFunction_2282,
    tmp_two_returns_res_eqFunction_2283,
    tmp_two_returns_res_eqFunction_2284,
    tmp_two_returns_res_eqFunction_2285,
    tmp_two_returns_res_eqFunction_2286,
    tmp_two_returns_res_eqFunction_2287,
    tmp_two_returns_res_eqFunction_2288,
    tmp_two_returns_res_eqFunction_2289,
    tmp_two_returns_res_eqFunction_2290,
    tmp_two_returns_res_eqFunction_2291,
    tmp_two_returns_res_eqFunction_2292
  };
  
  for (int id = 0; id < 483; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif