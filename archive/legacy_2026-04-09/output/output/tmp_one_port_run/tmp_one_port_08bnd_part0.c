#include "tmp_one_port_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 749
type: SIMPLE_ASSIGN
weaDat.lat = Buildings.BoundaryConditions.WeatherData.BaseClasses.getLatitudeTMY3(weaDat.filNam)
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,749};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1305]] /* weaDat.lat PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[84]] /* weaDat.filNam PARAM */));
  threadData->lastEquationSolved = 749;
}

/*
equation index: 750
type: SIMPLE_ASSIGN
weaDat.latitude.latitude = weaDat.lat
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,750};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1306]] /* weaDat.latitude.latitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1305]] /* weaDat.lat PARAM */);
  threadData->lastEquationSolved = 750;
}

/*
equation index: 751
type: SIMPLE_ASSIGN
$cse5 = cos(weaDat.latitude.latitude)
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,751};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[0]] /* $cse5 PARAM */) = cos((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1306]] /* weaDat.latitude.latitude PARAM */));
  threadData->lastEquationSolved = 751;
}

/*
equation index: 752
type: SIMPLE_ASSIGN
$cse8 = sin(weaDat.latitude.latitude)
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,752};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* $cse8 PARAM */) = sin((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1306]] /* weaDat.latitude.latitude PARAM */));
  threadData->lastEquationSolved = 752;
}

/*
equation index: 753
type: SIMPLE_ASSIGN
roo.air.cfd.CFDThre = Buildings.ThermalZones.Detailed.BaseClasses.CFDThread.constructor()
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,753};
  (data->simulationInfo->extObjs[0]) = omc_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_constructor(threadData);
  threadData->lastEquationSolved = 753;
}

/*
equation index: 754
type: SIMPLE_ASSIGN
weaDat.datRea.fileName = weaDat.filNam
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,754};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[79]] /* weaDat.datRea.fileName PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[84]] /* weaDat.filNam PARAM */);
  threadData->lastEquationSolved = 754;
}

/*
equation index: 755
type: SIMPLE_ASSIGN
weaDat.datRea.delimiter = ","
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,755};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[78]] /* weaDat.datRea.delimiter PARAM */) = _OMC_LIT7;
  threadData->lastEquationSolved = 755;
}

/*
equation index: 758
type: SIMPLE_ASSIGN
weaDat.datRea.isCsvExt = Modelica.Utilities.Strings.findLast(weaDat.datRea.fileName, ".csv", 0, false) + 3 == Modelica.Utilities.Strings.length(weaDat.datRea.fileName)
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,758};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[282]] /* weaDat.datRea.isCsvExt PARAM */) = (omc_Modelica_Utilities_Strings_findLast(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[79]] /* weaDat.datRea.fileName PARAM */), _OMC_LIT73, ((modelica_integer) 0), 0 /* false */) + ((modelica_integer) 3) == omc_Modelica_Utilities_Strings_length(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[79]] /* weaDat.datRea.fileName PARAM */)));
  threadData->lastEquationSolved = 758;
}

/*
equation index: 759
type: SIMPLE_ASSIGN
weaDat.datRea.tableID = Modelica.Blocks.Types.ExternalCombiTable1D.constructor(if weaDat.datRea.isCsvExt then "Values" else "tab1", if weaDat.datRea.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(weaDat.datRea.fileName) then weaDat.datRea.fileName else "NoName", {}, {2, 3, 4, 5, 6, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 8}, Modelica.Blocks.Types.Smoothness.ContinuousDerivative, Modelica.Blocks.Types.Extrapolation.LastTwoPoints, weaDat.datRea.verboseRead, weaDat.datRea.delimiter, weaDat.datRea.nHeaderLines)
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,759};
  (data->simulationInfo->extObjs[1]) = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[282]] /* weaDat.datRea.isCsvExt PARAM */)?_OMC_LIT74:_OMC_LIT75), (((!stringEqual((data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[79]] /* weaDat.datRea.fileName PARAM */), _OMC_LIT76)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[79]] /* weaDat.datRea.fileName PARAM */))))?(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[79]] /* weaDat.datRea.fileName PARAM */):_OMC_LIT76), _OMC_LIT77, _OMC_LIT78, 2, 2, (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[285]] /* weaDat.datRea.verboseRead PARAM */), (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[78]] /* weaDat.datRea.delimiter PARAM */), (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[356]] /* weaDat.datRea.nHeaderLines PARAM */));
  threadData->lastEquationSolved = 759;
}

/*
equation index: 760
type: SIMPLE_ASSIGN
weaDat.datRea30Min.fileName = weaDat.filNam
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,760};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[82]] /* weaDat.datRea30Min.fileName PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[84]] /* weaDat.filNam PARAM */);
  threadData->lastEquationSolved = 760;
}

/*
equation index: 761
type: SIMPLE_ASSIGN
weaDat.datRea30Min.delimiter = ","
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,761};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[81]] /* weaDat.datRea30Min.delimiter PARAM */) = _OMC_LIT7;
  threadData->lastEquationSolved = 761;
}

/*
equation index: 764
type: SIMPLE_ASSIGN
weaDat.datRea30Min.isCsvExt = Modelica.Utilities.Strings.findLast(weaDat.datRea30Min.fileName, ".csv", 0, false) + 3 == Modelica.Utilities.Strings.length(weaDat.datRea30Min.fileName)
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,764};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[286]] /* weaDat.datRea30Min.isCsvExt PARAM */) = (omc_Modelica_Utilities_Strings_findLast(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[82]] /* weaDat.datRea30Min.fileName PARAM */), _OMC_LIT73, ((modelica_integer) 0), 0 /* false */) + ((modelica_integer) 3) == omc_Modelica_Utilities_Strings_length(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[82]] /* weaDat.datRea30Min.fileName PARAM */)));
  threadData->lastEquationSolved = 764;
}

/*
equation index: 765
type: SIMPLE_ASSIGN
weaDat.datRea30Min.tableID = Modelica.Blocks.Types.ExternalCombiTable1D.constructor(if weaDat.datRea30Min.isCsvExt then "Values" else "tab1", if weaDat.datRea30Min.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(weaDat.datRea30Min.fileName) then weaDat.datRea30Min.fileName else "NoName", {}, {9, 10, 11}, Modelica.Blocks.Types.Smoothness.ContinuousDerivative, Modelica.Blocks.Types.Extrapolation.LastTwoPoints, weaDat.datRea30Min.verboseRead, weaDat.datRea30Min.delimiter, weaDat.datRea30Min.nHeaderLines)
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,765};
  (data->simulationInfo->extObjs[2]) = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[286]] /* weaDat.datRea30Min.isCsvExt PARAM */)?_OMC_LIT74:_OMC_LIT75), (((!stringEqual((data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[82]] /* weaDat.datRea30Min.fileName PARAM */), _OMC_LIT76)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[82]] /* weaDat.datRea30Min.fileName PARAM */))))?(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[82]] /* weaDat.datRea30Min.fileName PARAM */):_OMC_LIT76), _OMC_LIT77, _OMC_LIT79, 2, 2, (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[289]] /* weaDat.datRea30Min.verboseRead PARAM */), (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[81]] /* weaDat.datRea30Min.delimiter PARAM */), (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[363]] /* weaDat.datRea30Min.nHeaderLines PARAM */));
  threadData->lastEquationSolved = 765;
}

/*
equation index: 791
type: SIMPLE_ASSIGN
weaDat.alt = Buildings.BoundaryConditions.WeatherData.BaseClasses.getAltitudeLocationTMY3(weaDat.filNam)
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,791};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1280]] /* weaDat.alt PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAltitudeLocationTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[84]] /* weaDat.filNam PARAM */));
  threadData->lastEquationSolved = 791;
}

/*
equation index: 792
type: SIMPLE_ASSIGN
weaDat.altitude.Altitude = weaDat.alt
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,792};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1281]] /* weaDat.altitude.Altitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1280]] /* weaDat.alt PARAM */);
  threadData->lastEquationSolved = 792;
}

/*
equation index: 793
type: SIMPLE_ASSIGN
weaDat.lon = Buildings.BoundaryConditions.WeatherData.BaseClasses.getLongitudeTMY3(weaDat.filNam)
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,793};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1310]] /* weaDat.lon PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[84]] /* weaDat.filNam PARAM */));
  threadData->lastEquationSolved = 793;
}

/*
equation index: 794
type: SIMPLE_ASSIGN
weaDat.longitude.longitude = weaDat.lon
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,794};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1311]] /* weaDat.longitude.longitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1310]] /* weaDat.lon PARAM */);
  threadData->lastEquationSolved = 794;
}

/*
equation index: 795
type: SIMPLE_ASSIGN
weaDat.datRea30Min.u_max = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmax(weaDat.datRea30Min.tableID)
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,795};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1302]] /* weaDat.datRea30Min.u_max PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData, (data->simulationInfo->extObjs[2]));
  threadData->lastEquationSolved = 795;
}

/*
equation index: 796
type: SIMPLE_ASSIGN
weaDat.datRea30Min.u_min = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmin(weaDat.datRea30Min.tableID)
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,796};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1303]] /* weaDat.datRea30Min.u_min PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData, (data->simulationInfo->extObjs[2]));
  threadData->lastEquationSolved = 796;
}

/*
equation index: 803
type: SIMPLE_ASSIGN
weaDat.datRea30Min.tableName = "tab1"
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,803};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[83]] /* weaDat.datRea30Min.tableName PARAM */) = _OMC_LIT75;
  threadData->lastEquationSolved = 803;
}

/*
equation index: 806
type: SIMPLE_ASSIGN
weaDat.timZon = Buildings.BoundaryConditions.WeatherData.BaseClasses.getTimeZoneTMY3(weaDat.filNam)
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,806};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1318]] /* weaDat.timZon PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[84]] /* weaDat.filNam PARAM */));
  threadData->lastEquationSolved = 806;
}

/*
equation index: 807
type: SIMPLE_ASSIGN
weaDat.locTim.timZon = weaDat.timZon
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,807};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1309]] /* weaDat.locTim.timZon PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1318]] /* weaDat.timZon PARAM */);
  threadData->lastEquationSolved = 807;
}

/*
equation index: 808
type: SIMPLE_ASSIGN
weaDat.locTim.lon = weaDat.lon
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,808};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1308]] /* weaDat.locTim.lon PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1310]] /* weaDat.lon PARAM */);
  threadData->lastEquationSolved = 808;
}

/*
equation index: 809
type: SIMPLE_ASSIGN
weaDat.locTim.diff = 13750.987083139758 * weaDat.locTim.lon - weaDat.locTim.timZon
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,809};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1307]] /* weaDat.locTim.diff PARAM */) = (13750.987083139758) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1308]] /* weaDat.locTim.lon PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1309]] /* weaDat.locTim.timZon PARAM */);
  threadData->lastEquationSolved = 809;
}

/*
equation index: 820
type: SIMPLE_ASSIGN
weaDat.horInfRadSel.p = weaDat.HInfHor
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,820};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1304]] /* weaDat.horInfRadSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1271]] /* weaDat.HInfHor PARAM */);
  threadData->lastEquationSolved = 820;
}

/*
equation index: 822
type: SIMPLE_ASSIGN
weaDat.winDirSel.p = weaDat.winDir
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,822};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* weaDat.winDirSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1323]] /* weaDat.winDir PARAM */);
  threadData->lastEquationSolved = 822;
}

/*
equation index: 824
type: SIMPLE_ASSIGN
weaDat.winSpeSel.p = weaDat.winSpe
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,824};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1326]] /* weaDat.winSpeSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1325]] /* weaDat.winSpe PARAM */);
  threadData->lastEquationSolved = 824;
}

/*
equation index: 826
type: SIMPLE_ASSIGN
weaDat.totSkyCovSel.p = weaDat.totSkyCov
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,826};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1322]] /* weaDat.totSkyCovSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1321]] /* weaDat.totSkyCov PARAM */);
  threadData->lastEquationSolved = 826;
}

/*
equation index: 828
type: SIMPLE_ASSIGN
weaDat.ceiHeiSel.p = weaDat.ceiHei
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,828};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1283]] /* weaDat.ceiHeiSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1282]] /* weaDat.ceiHei PARAM */);
  threadData->lastEquationSolved = 828;
}

/*
equation index: 830
type: SIMPLE_ASSIGN
weaDat.opaSkyCovSel.p = weaDat.opaSkyCov
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,830};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1313]] /* weaDat.opaSkyCovSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1312]] /* weaDat.opaSkyCov PARAM */);
  threadData->lastEquationSolved = 830;
}

/*
equation index: 832
type: SIMPLE_ASSIGN
weaDat.relHumSel.p = weaDat.relHum
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,832};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1317]] /* weaDat.relHumSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* weaDat.relHum PARAM */);
  threadData->lastEquationSolved = 832;
}

/*
equation index: 834
type: SIMPLE_ASSIGN
weaDat.TBlaSkySel.p = weaDat.TBlaSky
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,834};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1273]] /* weaDat.TBlaSkySel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1272]] /* weaDat.TBlaSky PARAM */);
  threadData->lastEquationSolved = 834;
}

/*
equation index: 836
type: SIMPLE_ASSIGN
weaDat.TDryBul = T_init
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,836};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1276]] /* weaDat.TDryBul PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* T_init PARAM */);
  threadData->lastEquationSolved = 836;
}

/*
equation index: 837
type: SIMPLE_ASSIGN
weaDat.TDryBulSel.p = weaDat.TDryBul
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,837};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1277]] /* weaDat.TDryBulSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1276]] /* weaDat.TDryBul PARAM */);
  threadData->lastEquationSolved = 837;
}

/*
equation index: 839
type: SIMPLE_ASSIGN
weaDat.TDewPoiSel.p = weaDat.TDewPoi
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,839};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1275]] /* weaDat.TDewPoiSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1274]] /* weaDat.TDewPoi PARAM */);
  threadData->lastEquationSolved = 839;
}

/*
equation index: 841
type: SIMPLE_ASSIGN
weaDat.pAtmSel.p = weaDat.pAtm
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,841};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* weaDat.pAtmSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* weaDat.pAtm PARAM */);
  threadData->lastEquationSolved = 841;
}

/*
equation index: 843
type: SIMPLE_ASSIGN
weaDat.datRea.u_max = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmax(weaDat.datRea.tableID)
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,843};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* weaDat.datRea.u_max PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData, (data->simulationInfo->extObjs[1]));
  threadData->lastEquationSolved = 843;
}

/*
equation index: 844
type: SIMPLE_ASSIGN
weaDat.datRea.u_min = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmin(weaDat.datRea.tableID)
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,844};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* weaDat.datRea.u_min PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData, (data->simulationInfo->extObjs[1]));
  threadData->lastEquationSolved = 844;
}

/*
equation index: 874
type: SIMPLE_ASSIGN
weaDat.datRea.tableName = "tab1"
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,874};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[80]] /* weaDat.datRea.tableName PARAM */) = _OMC_LIT75;
  threadData->lastEquationSolved = 874;
}

/*
equation index: 877
type: ARRAY_CALL_ASSIGN

weaDat.timeSpan = Buildings.BoundaryConditions.WeatherData.BaseClasses.getTimeSpanTMY3(weaDat.filNam, "tab1")
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,877};
  real_array tmp0;
  real_array_create(&tmp0, ((modelica_real*)&((&(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* weaDat.timeSpan[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[84]] /* weaDat.filNam PARAM */), _OMC_LIT75), tmp0);
  threadData->lastEquationSolved = 877;
}

/*
equation index: 894
type: SIMPLE_ASSIGN
roo.absCfdFilNam = Buildings.BoundaryConditions.WeatherData.BaseClasses.getAbsolutePath(roo.cfdFilNam)
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,894};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* roo.absCfdFilNam PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAbsolutePath(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[31]] /* roo.cfdFilNam PARAM */));
  threadData->lastEquationSolved = 894;
}

/*
equation index: 895
type: SIMPLE_ASSIGN
roo.sensorName[1] = ""
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,895};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[71]] /* roo.sensorName[1] PARAM */) = _OMC_LIT46;
  threadData->lastEquationSolved = 895;
}

/*
equation index: 896
type: SIMPLE_ASSIGN
roo.samplePeriod = samplePeriod
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,896};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1239]] /* roo.samplePeriod PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* samplePeriod PARAM */);
  threadData->lastEquationSolved = 896;
}

/*
equation index: 901
type: SIMPLE_ASSIGN
roo.heaGai.AFlo = roo.AFlo
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,901};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[469]] /* roo.heaGai.AFlo PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* roo.AFlo PARAM */);
  threadData->lastEquationSolved = 901;
}

/*
equation index: 917
type: SIMPLE_ASSIGN
roo.tauIRSha_glass[1] = roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,917};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1265]] /* roo.tauIRSha_glass[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 917;
}

/*
equation index: 918
type: SIMPLE_ASSIGN
roo.tauIRSha_air[1] = roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,918};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* roo.tauIRSha_air[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 918;
}

/*
equation index: 920
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.absIR_a = roo.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,920};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1084]] /* roo.radTem.datConExtWin[1].glaSys.shade.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[367]] /* roo.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 920;
}

/*
equation index: 921
type: SIMPLE_ASSIGN
roo.radTem.epsSha[1] = roo.radTem.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,921};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1206]] /* roo.radTem.epsSha[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1084]] /* roo.radTem.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 921;
}

/*
equation index: 922
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b = roo.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,922};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1077]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 922;
}

/*
equation index: 923
type: SIMPLE_ASSIGN
roo.radTem.epsGla[1] = roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,923};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1205]] /* roo.radTem.epsGla[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1077]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 923;
}

/*
equation index: 924
type: SIMPLE_ASSIGN
roo.datConExtWin[1].AWin = roo.datConExtWin[1].hWin * roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,924};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[342]] /* roo.datConExtWin[1].AWin PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* roo.datConExtWin[1].hWin PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[400]] /* roo.datConExtWin[1].wWin PARAM */));
  threadData->lastEquationSolved = 924;
}

/*
equation index: 925
type: SIMPLE_ASSIGN
roo.datConExtWin[1].AFra = roo.datConExtWin[1].fFra * roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,925};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[339]] /* roo.datConExtWin[1].AFra PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* roo.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[342]] /* roo.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 925;
}

/*
equation index: 926
type: SIMPLE_ASSIGN
roo.datConExtWin[1].AGla = roo.datConExtWin[1].AWin - roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,926};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[340]] /* roo.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[342]] /* roo.datConExtWin[1].AWin PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[339]] /* roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 926;
}

/*
equation index: 927
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].AGla = roo.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,927};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1057]] /* roo.radTem.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[340]] /* roo.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 927;
}

/*
equation index: 928
type: SIMPLE_ASSIGN
roo.radTem.AGla[1] = roo.radTem.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,928};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* roo.radTem.AGla[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1057]] /* roo.radTem.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 928;
}

/*
equation index: 933
type: SIMPLE_ASSIGN
roo.radTem.surBou[6].absIR = roo.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,933};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1225]] /* roo.radTem.surBou[6].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* roo.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 933;
}

/*
equation index: 934
type: SIMPLE_ASSIGN
roo.radTem.epsSurBou[6] = roo.radTem.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,934};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* roo.radTem.epsSurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1225]] /* roo.radTem.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 934;
}

/*
equation index: 935
type: SIMPLE_ASSIGN
roo.radTem.surBou[5].absIR = roo.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,935};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1224]] /* roo.radTem.surBou[5].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1250]] /* roo.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 935;
}

/*
equation index: 936
type: SIMPLE_ASSIGN
roo.radTem.epsSurBou[5] = roo.radTem.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,936};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1211]] /* roo.radTem.epsSurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1224]] /* roo.radTem.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 936;
}

/*
equation index: 937
type: SIMPLE_ASSIGN
roo.radTem.surBou[4].absIR = roo.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,937};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* roo.radTem.surBou[4].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* roo.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 937;
}

/*
equation index: 938
type: SIMPLE_ASSIGN
roo.radTem.epsSurBou[4] = roo.radTem.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,938};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1210]] /* roo.radTem.epsSurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* roo.radTem.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 938;
}

/*
equation index: 939
type: SIMPLE_ASSIGN
roo.radTem.surBou[3].absIR = roo.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,939};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1222]] /* roo.radTem.surBou[3].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* roo.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 939;
}

/*
equation index: 940
type: SIMPLE_ASSIGN
roo.radTem.epsSurBou[3] = roo.radTem.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,940};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1209]] /* roo.radTem.epsSurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1222]] /* roo.radTem.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 940;
}

/*
equation index: 941
type: SIMPLE_ASSIGN
roo.radTem.surBou[2].absIR = roo.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,941};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1221]] /* roo.radTem.surBou[2].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1247]] /* roo.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 941;
}

/*
equation index: 942
type: SIMPLE_ASSIGN
roo.radTem.epsSurBou[2] = roo.radTem.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,942};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1208]] /* roo.radTem.epsSurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1221]] /* roo.radTem.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 942;
}

/*
equation index: 943
type: SIMPLE_ASSIGN
roo.radTem.surBou[1].absIR = roo.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,943};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* roo.radTem.surBou[1].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* roo.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 943;
}

/*
equation index: 944
type: SIMPLE_ASSIGN
roo.radTem.epsSurBou[1] = roo.radTem.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,944};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* roo.radTem.epsSurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* roo.radTem.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 944;
}

/*
equation index: 945
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.absIR_b = roo.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,945};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1019]] /* roo.radTem.datConBou[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* roo.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 945;
}

/*
equation index: 946
type: SIMPLE_ASSIGN
roo.radTem.epsConBou[1] = roo.radTem.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,946};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1197]] /* roo.radTem.epsConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1019]] /* roo.radTem.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 946;
}

/*
equation index: 947
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.absIR_b = roo.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,947};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* roo.radTem.datConPar[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* roo.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 947;
}

/*
equation index: 948
type: SIMPLE_ASSIGN
roo.radTem.epsConPar_b[1] = roo.radTem.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,948};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* roo.radTem.epsConPar_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* roo.radTem.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 948;
}

/*
equation index: 949
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.absIR_a = roo.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,949};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1123]] /* roo.radTem.datConPar[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* roo.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 949;
}

/*
equation index: 950
type: SIMPLE_ASSIGN
roo.radTem.epsConPar_a[1] = roo.radTem.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,950};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1203]] /* roo.radTem.epsConPar_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1123]] /* roo.radTem.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 950;
}

/*
equation index: 951
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.absIRFra = roo.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,951};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1065]] /* roo.radTem.datConExtWin[1].glaSys.absIRFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* roo.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 951;
}

/*
equation index: 952
type: SIMPLE_ASSIGN
roo.radTem.epsConExtWinFra[1] = roo.radTem.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,952};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1199]] /* roo.radTem.epsConExtWinFra[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1065]] /* roo.radTem.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 952;
}

/*
equation index: 953
type: SIMPLE_ASSIGN
roo.radTem.epsConExtWinSha[1] = roo.radTem.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,953};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1201]] /* roo.radTem.epsConExtWinSha[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1084]] /* roo.radTem.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 953;
}

/*
equation index: 954
type: SIMPLE_ASSIGN
roo.radTem.epsConExtWinUns[1] = roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,954};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1202]] /* roo.radTem.epsConExtWinUns[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1077]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 954;
}

/*
equation index: 955
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.absIR_b = roo.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,955};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1095]] /* roo.radTem.datConExtWin[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* roo.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 955;
}

/*
equation index: 956
type: SIMPLE_ASSIGN
roo.radTem.epsConExtWinOpa[1] = roo.radTem.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,956};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1200]] /* roo.radTem.epsConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1095]] /* roo.radTem.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 956;
}

/*
equation index: 957
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.absIR_b = roo.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,957};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1040]] /* roo.radTem.datConExt[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* roo.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 957;
}

/*
equation index: 958
type: SIMPLE_ASSIGN
roo.radTem.epsConExt[1] = roo.radTem.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,958};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1198]] /* roo.radTem.epsConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1040]] /* roo.radTem.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 958;
}

/*
equation index: 959
type: SIMPLE_ASSIGN
roo.radTem.surBou[6].A = roo.surBou[6].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,959};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1219]] /* roo.radTem.surBou[6].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* roo.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 959;
}

/*
equation index: 960
type: SIMPLE_ASSIGN
roo.radTem.ASurBou[6] = roo.radTem.surBou[6].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,960};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1012]] /* roo.radTem.ASurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1219]] /* roo.radTem.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 960;
}

/*
equation index: 961
type: SIMPLE_ASSIGN
roo.radTem.surBou[5].A = roo.surBou[5].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,961};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1218]] /* roo.radTem.surBou[5].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* roo.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 961;
}

/*
equation index: 962
type: SIMPLE_ASSIGN
roo.radTem.ASurBou[5] = roo.radTem.surBou[5].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,962};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* roo.radTem.ASurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1218]] /* roo.radTem.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 962;
}

/*
equation index: 963
type: SIMPLE_ASSIGN
roo.radTem.surBou[4].A = roo.surBou[4].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,963};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1217]] /* roo.radTem.surBou[4].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1243]] /* roo.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 963;
}

/*
equation index: 964
type: SIMPLE_ASSIGN
roo.radTem.ASurBou[4] = roo.radTem.surBou[4].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,964};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1010]] /* roo.radTem.ASurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1217]] /* roo.radTem.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 964;
}

/*
equation index: 965
type: SIMPLE_ASSIGN
roo.radTem.surBou[3].A = roo.surBou[3].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,965};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1216]] /* roo.radTem.surBou[3].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* roo.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 965;
}

/*
equation index: 966
type: SIMPLE_ASSIGN
roo.radTem.ASurBou[3] = roo.radTem.surBou[3].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,966};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1009]] /* roo.radTem.ASurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1216]] /* roo.radTem.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 966;
}

/*
equation index: 967
type: SIMPLE_ASSIGN
roo.radTem.surBou[2].A = roo.surBou[2].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,967};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1215]] /* roo.radTem.surBou[2].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1241]] /* roo.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 967;
}

/*
equation index: 968
type: SIMPLE_ASSIGN
roo.radTem.ASurBou[2] = roo.radTem.surBou[2].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,968};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1008]] /* roo.radTem.ASurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1215]] /* roo.radTem.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 968;
}

/*
equation index: 969
type: SIMPLE_ASSIGN
roo.radTem.surBou[1].A = roo.surBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,969};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* roo.radTem.surBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1240]] /* roo.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 969;
}

/*
equation index: 970
type: SIMPLE_ASSIGN
roo.radTem.ASurBou[1] = roo.radTem.surBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,970};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1007]] /* roo.radTem.ASurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* roo.radTem.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 970;
}

/*
equation index: 971
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].A = roo.datConBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,971};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* roo.radTem.datConBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[296]] /* roo.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 971;
}

/*
equation index: 972
type: SIMPLE_ASSIGN
roo.radTem.AConBou[1] = roo.radTem.datConBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,972};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1000]] /* roo.radTem.AConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* roo.radTem.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 972;
}

/*
equation index: 973
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].A = roo.datConPar[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,973};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1118]] /* roo.radTem.datConPar[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* roo.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 973;
}

/*
equation index: 974
type: SIMPLE_ASSIGN
roo.radTem.AConPar[1] = roo.radTem.datConPar[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,974};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1005]] /* roo.radTem.AConPar[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1118]] /* roo.radTem.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 974;
}

/*
equation index: 975
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].AWin = roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,975};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1059]] /* roo.radTem.datConExtWin[1].AWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[342]] /* roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 975;
}

/*
equation index: 976
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].fFra = roo.datConExtWin[1].fFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,976};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1063]] /* roo.radTem.datConExtWin[1].fFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* roo.datConExtWin[1].fFra PARAM */);
  threadData->lastEquationSolved = 976;
}

/*
equation index: 977
type: SIMPLE_ASSIGN
roo.radTem.AConExtWinFra[1] = roo.radTem.datConExtWin[1].fFra * roo.radTem.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,977};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1002]] /* roo.radTem.AConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1063]] /* roo.radTem.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1059]] /* roo.radTem.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 977;
}

/*
equation index: 978
type: SIMPLE_ASSIGN
roo.radTem.AConExtWinGla[1] = (1.0 - roo.radTem.datConExtWin[1].fFra) * roo.radTem.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,978};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* roo.radTem.AConExtWinGla[1] PARAM */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1063]] /* roo.radTem.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1059]] /* roo.radTem.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 978;
}

/*
equation index: 979
type: SIMPLE_ASSIGN
roo.datConExtWin[1].AOpa = roo.datConExtWin[1].A - roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,979};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* roo.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[338]] /* roo.datConExtWin[1].A PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[342]] /* roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 979;
}

/*
equation index: 980
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].AOpa = roo.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,980};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1058]] /* roo.radTem.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* roo.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 980;
}

/*
equation index: 981
type: SIMPLE_ASSIGN
roo.radTem.AConExtWinOpa[1] = roo.radTem.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,981};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1004]] /* roo.radTem.AConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1058]] /* roo.radTem.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 981;
}

/*
equation index: 982
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].A = roo.datConExt[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,982};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1034]] /* roo.radTem.datConExt[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[317]] /* roo.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 982;
}

/*
equation index: 983
type: SIMPLE_ASSIGN
roo.radTem.AConExt[1] = roo.radTem.datConExt[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,983};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1001]] /* roo.radTem.AConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1034]] /* roo.radTem.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 983;
}

/*
equation index: 984
type: SIMPLE_ASSIGN
roo.radTem.instanceName = "TmpOnePort.roo.radTem"
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,984};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[64]] /* roo.radTem.instanceName PARAM */) = _OMC_LIT80;
  threadData->lastEquationSolved = 984;
}

/*
equation index: 990
type: SIMPLE_ASSIGN
roo.radTem.dummyCon.R = roo.radTem.dummyCon.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,990};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1139]] /* roo.radTem.dummyCon.R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1145]] /* roo.radTem.dummyCon.material[1].R PARAM */);
  threadData->lastEquationSolved = 990;
}

/*
equation index: 996
type: SIMPLE_ASSIGN
roo.radTem.surBou[6].boundaryCondition = roo.surBou[6].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,996};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[308]] /* roo.radTem.surBou[6].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[314]] /* roo.surBou[6].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 996;
}

/*
equation index: 997
type: SIMPLE_ASSIGN
roo.radTem.surBou[6].name = roo.surBou[6].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,997};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[70]] /* roo.radTem.surBou[6].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[77]] /* roo.surBou[6].name PARAM */);
  threadData->lastEquationSolved = 997;
}

/*
equation index: 999
type: SIMPLE_ASSIGN
roo.radTem.surBou[6].absSol = roo.surBou[6].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,999};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1231]] /* roo.radTem.surBou[6].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1257]] /* roo.surBou[6].absSol PARAM */);
  threadData->lastEquationSolved = 999;
}

/*
equation index: 1001
type: SIMPLE_ASSIGN
roo.radTem.surBou[5].boundaryCondition = roo.surBou[5].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1001};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[307]] /* roo.radTem.surBou[5].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[313]] /* roo.surBou[5].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1001;
}

/*
equation index: 1002
type: SIMPLE_ASSIGN
roo.radTem.surBou[5].name = roo.surBou[5].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1002};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[69]] /* roo.radTem.surBou[5].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[76]] /* roo.surBou[5].name PARAM */);
  threadData->lastEquationSolved = 1002;
}

/*
equation index: 1004
type: SIMPLE_ASSIGN
roo.radTem.surBou[5].absSol = roo.surBou[5].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1004};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1230]] /* roo.radTem.surBou[5].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1256]] /* roo.surBou[5].absSol PARAM */);
  threadData->lastEquationSolved = 1004;
}

/*
equation index: 1006
type: SIMPLE_ASSIGN
roo.radTem.surBou[4].boundaryCondition = roo.surBou[4].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1006};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[306]] /* roo.radTem.surBou[4].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[312]] /* roo.surBou[4].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1006;
}

/*
equation index: 1007
type: SIMPLE_ASSIGN
roo.radTem.surBou[4].name = roo.surBou[4].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1007};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[68]] /* roo.radTem.surBou[4].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[75]] /* roo.surBou[4].name PARAM */);
  threadData->lastEquationSolved = 1007;
}

/*
equation index: 1009
type: SIMPLE_ASSIGN
roo.radTem.surBou[4].absSol = roo.surBou[4].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1009};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1229]] /* roo.radTem.surBou[4].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1255]] /* roo.surBou[4].absSol PARAM */);
  threadData->lastEquationSolved = 1009;
}

/*
equation index: 1011
type: SIMPLE_ASSIGN
roo.radTem.surBou[3].boundaryCondition = roo.surBou[3].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1011};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[305]] /* roo.radTem.surBou[3].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[311]] /* roo.surBou[3].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1011;
}

/*
equation index: 1012
type: SIMPLE_ASSIGN
roo.radTem.surBou[3].name = roo.surBou[3].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1012};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[67]] /* roo.radTem.surBou[3].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[74]] /* roo.surBou[3].name PARAM */);
  threadData->lastEquationSolved = 1012;
}

/*
equation index: 1014
type: SIMPLE_ASSIGN
roo.radTem.surBou[3].absSol = roo.surBou[3].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1014};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* roo.radTem.surBou[3].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1254]] /* roo.surBou[3].absSol PARAM */);
  threadData->lastEquationSolved = 1014;
}

/*
equation index: 1016
type: SIMPLE_ASSIGN
roo.radTem.surBou[2].boundaryCondition = roo.surBou[2].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1016};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[304]] /* roo.radTem.surBou[2].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[310]] /* roo.surBou[2].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1016;
}

/*
equation index: 1017
type: SIMPLE_ASSIGN
roo.radTem.surBou[2].name = roo.surBou[2].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1017};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[66]] /* roo.radTem.surBou[2].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[73]] /* roo.surBou[2].name PARAM */);
  threadData->lastEquationSolved = 1017;
}

/*
equation index: 1019
type: SIMPLE_ASSIGN
roo.radTem.surBou[2].absSol = roo.surBou[2].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1019};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1227]] /* roo.radTem.surBou[2].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* roo.surBou[2].absSol PARAM */);
  threadData->lastEquationSolved = 1019;
}

/*
equation index: 1021
type: SIMPLE_ASSIGN
roo.radTem.surBou[1].boundaryCondition = roo.surBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1021};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[303]] /* roo.radTem.surBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[309]] /* roo.surBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1021;
}

/*
equation index: 1022
type: SIMPLE_ASSIGN
roo.radTem.surBou[1].name = roo.surBou[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1022};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[65]] /* roo.radTem.surBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[72]] /* roo.surBou[1].name PARAM */);
  threadData->lastEquationSolved = 1022;
}

/*
equation index: 1024
type: SIMPLE_ASSIGN
roo.radTem.surBou[1].absSol = roo.surBou[1].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1024};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1226]] /* roo.radTem.surBou[1].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* roo.surBou[1].absSol PARAM */);
  threadData->lastEquationSolved = 1024;
}

/*
equation index: 1026
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].boundaryCondition = roo.datConBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1026};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[269]] /* roo.radTem.datConBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[126]] /* roo.datConBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1026;
}

/*
equation index: 1029
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].T_b_start = roo.datConBou[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1029};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1015]] /* roo.radTem.datConBou[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[298]] /* roo.datConBou[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1029;
}

/*
equation index: 1030
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].T_a_start = roo.datConBou[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1030};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1014]] /* roo.radTem.datConBou[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[297]] /* roo.datConBou[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1030;
}

/*
equation index: 1034
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].azi = roo.datConBou[1].azi
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1034};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1016]] /* roo.radTem.datConBou[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[299]] /* roo.datConBou[1].azi PARAM */);
  threadData->lastEquationSolved = 1034;
}

/*
equation index: 1036
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.roughness_a = roo.datConBou[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1036};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[274]] /* roo.radTem.datConBou[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[131]] /* roo.datConBou[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1036;
}

/*
equation index: 1037
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.absSol_b = roo.datConBou[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1037};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1021]] /* roo.radTem.datConBou[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[304]] /* roo.datConBou[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1037;
}

/*
equation index: 1038
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.absSol_a = roo.datConBou[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1038};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1020]] /* roo.radTem.datConBou[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[303]] /* roo.datConBou[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1038;
}

/*
equation index: 1039
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.absIR_a = roo.datConBou[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1039};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1018]] /* roo.radTem.datConBou[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[301]] /* roo.datConBou[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1039;
}

/*
equation index: 1042
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].LHea = roo.datConBou[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1042};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1022]] /* roo.radTem.datConBou[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[305]] /* roo.datConBou[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1042;
}

/*
equation index: 1045
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].nStaReal = roo.datConBou[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1045};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1029]] /* roo.radTem.datConBou[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[312]] /* roo.datConBou[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1045;
}

/*
equation index: 1046
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].piMat = roo.datConBou[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1046};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1030]] /* roo.radTem.datConBou[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[313]] /* roo.datConBou[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1046;
}

/*
equation index: 1047
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].piRef = roo.datConBou[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1047};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1031]] /* roo.radTem.datConBou[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[314]] /* roo.datConBou[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1047;
}

/*
equation index: 1050
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].nStaRef = roo.datConBou[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1050};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[271]] /* roo.radTem.datConBou[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[128]] /* roo.datConBou[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1050;
}

/*
equation index: 1051
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].R = roo.datConBou[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1051};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1023]] /* roo.radTem.datConBou[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[306]] /* roo.datConBou[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1051;
}

/*
equation index: 1052
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].d = roo.datConBou[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1052};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1027]] /* roo.radTem.datConBou[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[310]] /* roo.datConBou[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1052;
}

/*
equation index: 1053
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].c = roo.datConBou[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1053};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1026]] /* roo.radTem.datConBou[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[309]] /* roo.datConBou[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1053;
}

/*
equation index: 1054
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].k = roo.datConBou[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1054};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1028]] /* roo.radTem.datConBou[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[311]] /* roo.datConBou[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1054;
}

/*
equation index: 1055
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].x = roo.datConBou[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1055};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1032]] /* roo.radTem.datConBou[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[315]] /* roo.datConBou[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1055;
}

/*
equation index: 1057
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].name = roo.datConBou[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1057};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[60]] /* roo.radTem.datConBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[32]] /* roo.datConBou[1].name PARAM */);
  threadData->lastEquationSolved = 1057;
}

/*
equation index: 1058
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].boundaryCondition = roo.datConPar[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1058};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[287]] /* roo.radTem.datConPar[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[144]] /* roo.datConPar[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1058;
}

/*
equation index: 1061
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].T_b_start = roo.datConPar[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1061};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1120]] /* roo.radTem.datConPar[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* roo.datConPar[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1061;
}

/*
equation index: 1062
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].T_a_start = roo.datConPar[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1062};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1119]] /* roo.radTem.datConPar[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[402]] /* roo.datConPar[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1062;
}

/*
equation index: 1066
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].azi = roo.datConPar[1].azi
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1066};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1121]] /* roo.radTem.datConPar[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* roo.datConPar[1].azi PARAM */);
  threadData->lastEquationSolved = 1066;
}

/*
equation index: 1068
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.roughness_a = roo.datConPar[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1068};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[292]] /* roo.radTem.datConPar[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[149]] /* roo.datConPar[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1068;
}

/*
equation index: 1069
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.absSol_b = roo.datConPar[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1069};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1126]] /* roo.radTem.datConPar[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* roo.datConPar[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1069;
}

/*
equation index: 1070
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.absSol_a = roo.datConPar[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1070};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1125]] /* roo.radTem.datConPar[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[408]] /* roo.datConPar[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1070;
}

/*
equation index: 1073
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].LHea = roo.datConPar[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1073};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1127]] /* roo.radTem.datConPar[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* roo.datConPar[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1073;
}

/*
equation index: 1076
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].nStaReal = roo.datConPar[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1076};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1134]] /* roo.radTem.datConPar[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* roo.datConPar[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1076;
}

/*
equation index: 1077
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].piMat = roo.datConPar[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1077};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1135]] /* roo.radTem.datConPar[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* roo.datConPar[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1077;
}

/*
equation index: 1078
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].piRef = roo.datConPar[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1078};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1136]] /* roo.radTem.datConPar[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* roo.datConPar[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1078;
}

/*
equation index: 1081
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].nStaRef = roo.datConPar[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1081};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[289]] /* roo.radTem.datConPar[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[146]] /* roo.datConPar[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1081;
}

/*
equation index: 1082
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].R = roo.datConPar[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1082};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1128]] /* roo.radTem.datConPar[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* roo.datConPar[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1082;
}

/*
equation index: 1083
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].d = roo.datConPar[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1083};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1132]] /* roo.radTem.datConPar[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* roo.datConPar[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1083;
}

/*
equation index: 1084
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].c = roo.datConPar[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1084};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1131]] /* roo.radTem.datConPar[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* roo.datConPar[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1084;
}

/*
equation index: 1085
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].k = roo.datConPar[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1085};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1133]] /* roo.radTem.datConPar[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* roo.datConPar[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1085;
}

/*
equation index: 1086
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].x = roo.datConPar[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1086};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1137]] /* roo.radTem.datConPar[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* roo.datConPar[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1086;
}

/*
equation index: 1088
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].name = roo.datConPar[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1088};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[63]] /* roo.radTem.datConPar[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[35]] /* roo.datConPar[1].name PARAM */);
  threadData->lastEquationSolved = 1088;
}

/*
equation index: 1092
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.absSolFra = roo.datConExtWin[1].glaSys.absSolFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1092};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1066]] /* roo.radTem.datConExtWin[1].glaSys.absSolFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[349]] /* roo.datConExtWin[1].glaSys.absSolFra PARAM */);
  threadData->lastEquationSolved = 1092;
}

/*
equation index: 1093
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.UFra = roo.datConExtWin[1].glaSys.UFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1093};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1064]] /* roo.radTem.datConExtWin[1].glaSys.UFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* roo.datConExtWin[1].glaSys.UFra PARAM */);
  threadData->lastEquationSolved = 1093;
}

/*
equation index: 1094
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.tauIR_b = roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1094};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1089]] /* roo.radTem.datConExtWin[1].glaSys.shade.tauIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 1094;
}

/*
equation index: 1095
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.tauIR_a = roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1095};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1088]] /* roo.radTem.datConExtWin[1].glaSys.shade.tauIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 1095;
}

/*
equation index: 1096
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.absIR_b = roo.datConExtWin[1].glaSys.shade.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1096};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* roo.radTem.datConExtWin[1].glaSys.shade.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[368]] /* roo.datConExtWin[1].glaSys.shade.absIR_b PARAM */);
  threadData->lastEquationSolved = 1096;
}

/*
equation index: 1097
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.rhoSol_b = roo.datConExtWin[1].glaSys.shade.rhoSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1097};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1087]] /* roo.radTem.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */);
  threadData->lastEquationSolved = 1097;
}

/*
equation index: 1098
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.rhoSol_a = roo.datConExtWin[1].glaSys.shade.rhoSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1098};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* roo.radTem.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */);
  threadData->lastEquationSolved = 1098;
}

/*
equation index: 1099
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.tauSol_b = roo.datConExtWin[1].glaSys.shade.tauSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1099};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1091]] /* roo.radTem.datConExtWin[1].glaSys.shade.tauSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* roo.datConExtWin[1].glaSys.shade.tauSol_b PARAM */);
  threadData->lastEquationSolved = 1099;
}

/*
equation index: 1100
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.tauSol_a = roo.datConExtWin[1].glaSys.shade.tauSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1100};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1090]] /* roo.radTem.datConExtWin[1].glaSys.shade.tauSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* roo.datConExtWin[1].glaSys.shade.tauSol_a PARAM */);
  threadData->lastEquationSolved = 1100;
}

/*
equation index: 1101
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].P0 = roo.datConExtWin[1].glaSys.gas[1].P0
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1101};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1068]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].P0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* roo.datConExtWin[1].glaSys.gas[1].P0 PARAM */);
  threadData->lastEquationSolved = 1101;
}

/*
equation index: 1102
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].MM = roo.datConExtWin[1].glaSys.gas[1].MM
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1102};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1067]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].MM PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[350]] /* roo.datConExtWin[1].glaSys.gas[1].MM PARAM */);
  threadData->lastEquationSolved = 1102;
}

/*
equation index: 1103
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].b_c = roo.datConExtWin[1].glaSys.gas[1].b_c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1103};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1072]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].b_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* roo.datConExtWin[1].glaSys.gas[1].b_c PARAM */);
  threadData->lastEquationSolved = 1103;
}

/*
equation index: 1104
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].a_c = roo.datConExtWin[1].glaSys.gas[1].a_c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1104};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1069]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].a_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* roo.datConExtWin[1].glaSys.gas[1].a_c PARAM */);
  threadData->lastEquationSolved = 1104;
}

/*
equation index: 1105
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].b_mu = roo.datConExtWin[1].glaSys.gas[1].b_mu
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1105};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1074]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].b_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* roo.datConExtWin[1].glaSys.gas[1].b_mu PARAM */);
  threadData->lastEquationSolved = 1105;
}

/*
equation index: 1106
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].a_mu = roo.datConExtWin[1].glaSys.gas[1].a_mu
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1106};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1071]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].a_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[354]] /* roo.datConExtWin[1].glaSys.gas[1].a_mu PARAM */);
  threadData->lastEquationSolved = 1106;
}

/*
equation index: 1107
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].b_k = roo.datConExtWin[1].glaSys.gas[1].b_k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1107};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1073]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].b_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* roo.datConExtWin[1].glaSys.gas[1].b_k PARAM */);
  threadData->lastEquationSolved = 1107;
}

/*
equation index: 1108
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].a_k = roo.datConExtWin[1].glaSys.gas[1].a_k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1108};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1070]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].a_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* roo.datConExtWin[1].glaSys.gas[1].a_k PARAM */);
  threadData->lastEquationSolved = 1108;
}

/*
equation index: 1109
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].x = roo.datConExtWin[1].glaSys.gas[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1109};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1075]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[358]] /* roo.datConExtWin[1].glaSys.gas[1].x PARAM */);
  threadData->lastEquationSolved = 1109;
}

/*
equation index: 1110
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_a = roo.datConExtWin[1].glaSys.glass[1].absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1110};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1076]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */);
  threadData->lastEquationSolved = 1110;
}

/*
equation index: 1111
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].tauIR = roo.datConExtWin[1].glaSys.glass[1].tauIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1111};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].tauIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[364]] /* roo.datConExtWin[1].glaSys.glass[1].tauIR PARAM */);
  threadData->lastEquationSolved = 1111;
}

/*
equation index: 1112
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1112};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1080]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[363]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */);
  threadData->lastEquationSolved = 1112;
}

/*
equation index: 1113
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1113};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1079]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */);
  threadData->lastEquationSolved = 1113;
}

/*
equation index: 1114
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].tauSol[1] = roo.datConExtWin[1].glaSys.glass[1].tauSol[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1114};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1082]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* roo.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */);
  threadData->lastEquationSolved = 1114;
}

/*
equation index: 1115
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].k = roo.datConExtWin[1].glaSys.glass[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1115};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1078]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[361]] /* roo.datConExtWin[1].glaSys.glass[1].k PARAM */);
  threadData->lastEquationSolved = 1115;
}

/*
equation index: 1116
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].x = roo.datConExtWin[1].glaSys.glass[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1116};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[366]] /* roo.datConExtWin[1].glaSys.glass[1].x PARAM */);
  threadData->lastEquationSolved = 1116;
}

/*
equation index: 1119
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].AFra = roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1119};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1056]] /* roo.radTem.datConExtWin[1].AFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[339]] /* roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 1119;
}

/*
equation index: 1121
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].sidFin.gap = roo.datConExtWin[1].sidFin.gap
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1121};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1114]] /* roo.radTem.datConExtWin[1].sidFin.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* roo.datConExtWin[1].sidFin.gap PARAM */);
  threadData->lastEquationSolved = 1121;
}

/*
equation index: 1123
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].sidFin.h = roo.datConExtWin[1].sidFin.h
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1123};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1115]] /* roo.radTem.datConExtWin[1].sidFin.h PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* roo.datConExtWin[1].sidFin.h PARAM */);
  threadData->lastEquationSolved = 1123;
}

/*
equation index: 1125
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].ove.gap = roo.datConExtWin[1].ove.gap
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1125};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* roo.radTem.datConExtWin[1].ove.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[393]] /* roo.datConExtWin[1].ove.gap PARAM */);
  threadData->lastEquationSolved = 1125;
}

/*
equation index: 1127
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].ove.wR = roo.datConExtWin[1].ove.wR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1127};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1112]] /* roo.radTem.datConExtWin[1].ove.wR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[395]] /* roo.datConExtWin[1].ove.wR PARAM */);
  threadData->lastEquationSolved = 1127;
}

/*
equation index: 1128
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].ove.wL = roo.datConExtWin[1].ove.wL
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1128};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1111]] /* roo.radTem.datConExtWin[1].ove.wL PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[394]] /* roo.datConExtWin[1].ove.wL PARAM */);
  threadData->lastEquationSolved = 1128;
}

/*
equation index: 1129
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].wWin = roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1129};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1117]] /* roo.radTem.datConExtWin[1].wWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[400]] /* roo.datConExtWin[1].wWin PARAM */);
  threadData->lastEquationSolved = 1129;
}

/*
equation index: 1130
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].hWin = roo.datConExtWin[1].hWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1130};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1092]] /* roo.radTem.datConExtWin[1].hWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* roo.datConExtWin[1].hWin PARAM */);
  threadData->lastEquationSolved = 1130;
}

/*
equation index: 1131
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].A = roo.datConExtWin[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1131};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1055]] /* roo.radTem.datConExtWin[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[338]] /* roo.datConExtWin[1].A PARAM */);
  threadData->lastEquationSolved = 1131;
}

/*
equation index: 1132
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].boundaryCondition = roo.datConExtWin[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1132};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[281]] /* roo.radTem.datConExtWin[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[138]] /* roo.datConExtWin[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1132;
}

/*
equation index: 1135
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].T_b_start = roo.datConExtWin[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1135};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1061]] /* roo.radTem.datConExtWin[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* roo.datConExtWin[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1135;
}

/*
equation index: 1136
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].T_a_start = roo.datConExtWin[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1136};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1060]] /* roo.radTem.datConExtWin[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* roo.datConExtWin[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1136;
}

/*
equation index: 1140
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].azi = roo.datConExtWin[1].azi
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1140};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1062]] /* roo.radTem.datConExtWin[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* roo.datConExtWin[1].azi PARAM */);
  threadData->lastEquationSolved = 1140;
}

/*
equation index: 1142
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.roughness_a = roo.datConExtWin[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1142};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[286]] /* roo.radTem.datConExtWin[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[143]] /* roo.datConExtWin[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1142;
}

/*
equation index: 1143
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.absSol_b = roo.datConExtWin[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1143};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1097]] /* roo.radTem.datConExtWin[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[380]] /* roo.datConExtWin[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1143;
}

/*
equation index: 1144
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.absSol_a = roo.datConExtWin[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1144};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1096]] /* roo.radTem.datConExtWin[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* roo.datConExtWin[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1144;
}

/*
equation index: 1145
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.absIR_a = roo.datConExtWin[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1145};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1094]] /* roo.radTem.datConExtWin[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* roo.datConExtWin[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1145;
}

/*
equation index: 1148
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].LHea = roo.datConExtWin[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1148};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1098]] /* roo.radTem.datConExtWin[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* roo.datConExtWin[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1148;
}

/*
equation index: 1151
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].nStaReal = roo.datConExtWin[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1151};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1105]] /* roo.radTem.datConExtWin[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[388]] /* roo.datConExtWin[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1151;
}

/*
equation index: 1152
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].piMat = roo.datConExtWin[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1152};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1106]] /* roo.radTem.datConExtWin[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* roo.datConExtWin[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1152;
}

/*
equation index: 1153
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].piRef = roo.datConExtWin[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1153};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1107]] /* roo.radTem.datConExtWin[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* roo.datConExtWin[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1153;
}

/*
equation index: 1156
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].nStaRef = roo.datConExtWin[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1156};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[283]] /* roo.radTem.datConExtWin[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[140]] /* roo.datConExtWin[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1156;
}

/*
equation index: 1157
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].R = roo.datConExtWin[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1157};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1099]] /* roo.radTem.datConExtWin[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[382]] /* roo.datConExtWin[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1157;
}

/*
equation index: 1158
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].d = roo.datConExtWin[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1158};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* roo.radTem.datConExtWin[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[386]] /* roo.datConExtWin[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1158;
}

/*
equation index: 1159
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].c = roo.datConExtWin[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1159};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1102]] /* roo.radTem.datConExtWin[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[385]] /* roo.datConExtWin[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1159;
}

/*
equation index: 1160
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].k = roo.datConExtWin[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1160};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1104]] /* roo.radTem.datConExtWin[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* roo.datConExtWin[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1160;
}

/*
equation index: 1161
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].x = roo.datConExtWin[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1161};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* roo.radTem.datConExtWin[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[391]] /* roo.datConExtWin[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1161;
}

/*
equation index: 1163
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].name = roo.datConExtWin[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1163};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[62]] /* roo.radTem.datConExtWin[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[34]] /* roo.datConExtWin[1].name PARAM */);
  threadData->lastEquationSolved = 1163;
}

/*
equation index: 1164
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].boundaryCondition = roo.datConExt[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1164};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[275]] /* roo.radTem.datConExt[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[132]] /* roo.datConExt[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1164;
}

/*
equation index: 1167
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].T_b_start = roo.datConExt[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1167};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1036]] /* roo.radTem.datConExt[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[319]] /* roo.datConExt[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1167;
}

/*
equation index: 1168
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].T_a_start = roo.datConExt[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1168};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1035]] /* roo.radTem.datConExt[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[318]] /* roo.datConExt[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1168;
}

/*
equation index: 1172
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].azi = roo.datConExt[1].azi
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1172};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1037]] /* roo.radTem.datConExt[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[320]] /* roo.datConExt[1].azi PARAM */);
  threadData->lastEquationSolved = 1172;
}

/*
equation index: 1174
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.roughness_a = roo.datConExt[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1174};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[280]] /* roo.radTem.datConExt[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[137]] /* roo.datConExt[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1174;
}

/*
equation index: 1175
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.absSol_b = roo.datConExt[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1175};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* roo.radTem.datConExt[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[325]] /* roo.datConExt[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1175;
}

/*
equation index: 1176
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.absSol_a = roo.datConExt[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1176};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1041]] /* roo.radTem.datConExt[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[324]] /* roo.datConExt[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1176;
}

/*
equation index: 1177
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.absIR_a = roo.datConExt[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1177};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1039]] /* roo.radTem.datConExt[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[322]] /* roo.datConExt[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1177;
}

/*
equation index: 1180
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].LHea = roo.datConExt[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1180};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1043]] /* roo.radTem.datConExt[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[326]] /* roo.datConExt[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1180;
}

/*
equation index: 1183
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].nStaReal = roo.datConExt[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1183};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1050]] /* roo.radTem.datConExt[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[333]] /* roo.datConExt[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1183;
}

/*
equation index: 1184
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].piMat = roo.datConExt[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1184};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1051]] /* roo.radTem.datConExt[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[334]] /* roo.datConExt[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1184;
}

/*
equation index: 1185
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].piRef = roo.datConExt[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1185};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1052]] /* roo.radTem.datConExt[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[335]] /* roo.datConExt[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1185;
}

/*
equation index: 1188
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].nStaRef = roo.datConExt[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1188};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[277]] /* roo.radTem.datConExt[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[134]] /* roo.datConExt[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1188;
}

/*
equation index: 1189
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].R = roo.datConExt[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1189};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1044]] /* roo.radTem.datConExt[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* roo.datConExt[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1189;
}

/*
equation index: 1190
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].d = roo.datConExt[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1190};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1048]] /* roo.radTem.datConExt[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[331]] /* roo.datConExt[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1190;
}

/*
equation index: 1191
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].c = roo.datConExt[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1191};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1047]] /* roo.radTem.datConExt[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[330]] /* roo.datConExt[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1191;
}

/*
equation index: 1192
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].k = roo.datConExt[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1192};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1049]] /* roo.radTem.datConExt[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[332]] /* roo.datConExt[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1192;
}

/*
equation index: 1193
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].x = roo.datConExt[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1193};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1053]] /* roo.radTem.datConExt[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[336]] /* roo.datConExt[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1193;
}

/*
equation index: 1195
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].name = roo.datConExt[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1195};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[61]] /* roo.radTem.datConExt[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[33]] /* roo.datConExt[1].name PARAM */);
  threadData->lastEquationSolved = 1195;
}

/*
equation index: 1212
type: SIMPLE_ASSIGN
roo.irRadExc.T03 = roo.irRadExc.T0 ^ 3.0
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1212};
  modelica_real tmp1;
  tmp1 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[530]] /* roo.irRadExc.T0 PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[531]] /* roo.irRadExc.T03 PARAM */) = (tmp1 * tmp1 * tmp1);
  threadData->lastEquationSolved = 1212;
}

/*
equation index: 1221
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[6].absIR = roo.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1221};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* roo.irRadExc.surBou[6].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* roo.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 1221;
}

/*
equation index: 1222
type: SIMPLE_ASSIGN
roo.irRadExc.epsSurBou[6] = roo.irRadExc.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1222};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[721]] /* roo.irRadExc.epsSurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* roo.irRadExc.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 1222;
}

/*
equation index: 1223
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[5].absIR = roo.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1223};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* roo.irRadExc.surBou[5].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1250]] /* roo.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 1223;
}

/*
equation index: 1224
type: SIMPLE_ASSIGN
roo.irRadExc.epsSurBou[5] = roo.irRadExc.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1224};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[720]] /* roo.irRadExc.epsSurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* roo.irRadExc.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 1224;
}

/*
equation index: 1225
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[4].absIR = roo.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1225};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* roo.irRadExc.surBou[4].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* roo.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 1225;
}

/*
equation index: 1226
type: SIMPLE_ASSIGN
roo.irRadExc.epsSurBou[4] = roo.irRadExc.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1226};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[719]] /* roo.irRadExc.epsSurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* roo.irRadExc.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 1226;
}

/*
equation index: 1227
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[3].absIR = roo.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1227};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[748]] /* roo.irRadExc.surBou[3].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* roo.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 1227;
}

/*
equation index: 1228
type: SIMPLE_ASSIGN
roo.irRadExc.epsSurBou[3] = roo.irRadExc.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1228};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[718]] /* roo.irRadExc.epsSurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[748]] /* roo.irRadExc.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 1228;
}

/*
equation index: 1229
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[2].absIR = roo.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1229};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[747]] /* roo.irRadExc.surBou[2].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1247]] /* roo.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 1229;
}

/*
equation index: 1230
type: SIMPLE_ASSIGN
roo.irRadExc.epsSurBou[2] = roo.irRadExc.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1230};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[717]] /* roo.irRadExc.epsSurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[747]] /* roo.irRadExc.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 1230;
}

/*
equation index: 1231
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[1].absIR = roo.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1231};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* roo.irRadExc.surBou[1].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* roo.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 1231;
}

/*
equation index: 1232
type: SIMPLE_ASSIGN
roo.irRadExc.epsSurBou[1] = roo.irRadExc.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1232};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[716]] /* roo.irRadExc.epsSurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* roo.irRadExc.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 1232;
}

/*
equation index: 1233
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.absIR_b = roo.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1233};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* roo.irRadExc.datConBou[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* roo.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1233;
}

/*
equation index: 1234
type: SIMPLE_ASSIGN
roo.irRadExc.epsConBou[1] = roo.irRadExc.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1234};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[702]] /* roo.irRadExc.epsConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* roo.irRadExc.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1234;
}

/*
equation index: 1235
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.absIR_b = roo.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1235};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[643]] /* roo.irRadExc.datConPar[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* roo.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1235;
}

/*
equation index: 1236
type: SIMPLE_ASSIGN
roo.irRadExc.epsConPar_b[1] = roo.irRadExc.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1236};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[709]] /* roo.irRadExc.epsConPar_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[643]] /* roo.irRadExc.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1236;
}

/*
equation index: 1237
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.absIR_a = roo.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1237};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[642]] /* roo.irRadExc.datConPar[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* roo.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1237;
}

/*
equation index: 1238
type: SIMPLE_ASSIGN
roo.irRadExc.epsConPar_a[1] = roo.irRadExc.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1238};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[708]] /* roo.irRadExc.epsConPar_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[642]] /* roo.irRadExc.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1238;
}

/*
equation index: 1239
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.absIRFra = roo.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1239};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[584]] /* roo.irRadExc.datConExtWin[1].glaSys.absIRFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* roo.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 1239;
}

/*
equation index: 1240
type: SIMPLE_ASSIGN
roo.irRadExc.epsConExtWinFra[1] = roo.irRadExc.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1240};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* roo.irRadExc.epsConExtWinFra[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[584]] /* roo.irRadExc.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 1240;
}

/*
equation index: 1241
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_a = roo.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1241};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[367]] /* roo.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 1241;
}

/*
equation index: 1242
type: SIMPLE_ASSIGN
roo.irRadExc.epsConExtWinSha[1] = roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1242};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[706]] /* roo.irRadExc.epsConExtWinSha[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 1242;
}

/*
equation index: 1243
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_b = roo.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1243};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[596]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 1243;
}

/*
equation index: 1244
type: SIMPLE_ASSIGN
roo.irRadExc.epsConExtWinUns[1] = roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1244};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[707]] /* roo.irRadExc.epsConExtWinUns[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[596]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 1244;
}

/*
equation index: 1245
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.absIR_b = roo.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1245};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[614]] /* roo.irRadExc.datConExtWin[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* roo.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1245;
}

/*
equation index: 1246
type: SIMPLE_ASSIGN
roo.irRadExc.epsConExtWinOpa[1] = roo.irRadExc.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1246};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[705]] /* roo.irRadExc.epsConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[614]] /* roo.irRadExc.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1246;
}

/*
equation index: 1247
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.absIR_b = roo.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1247};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* roo.irRadExc.datConExt[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* roo.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1247;
}

/*
equation index: 1248
type: SIMPLE_ASSIGN
roo.irRadExc.epsConExt[1] = roo.irRadExc.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1248};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[703]] /* roo.irRadExc.epsConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* roo.irRadExc.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1248;
}

/*
equation index: 1249
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[6].A = roo.surBou[6].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1249};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[745]] /* roo.irRadExc.surBou[6].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* roo.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 1249;
}

/*
equation index: 1250
type: SIMPLE_ASSIGN
roo.irRadExc.ASurBou[6] = roo.irRadExc.surBou[6].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1250};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* roo.irRadExc.ASurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[745]] /* roo.irRadExc.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 1250;
}

/*
equation index: 1251
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[5].A = roo.surBou[5].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1251};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[744]] /* roo.irRadExc.surBou[5].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* roo.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 1251;
}

/*
equation index: 1252
type: SIMPLE_ASSIGN
roo.irRadExc.ASurBou[5] = roo.irRadExc.surBou[5].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1252};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[492]] /* roo.irRadExc.ASurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[744]] /* roo.irRadExc.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 1252;
}

/*
equation index: 1253
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[4].A = roo.surBou[4].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1253};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[743]] /* roo.irRadExc.surBou[4].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1243]] /* roo.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 1253;
}

/*
equation index: 1254
type: SIMPLE_ASSIGN
roo.irRadExc.ASurBou[4] = roo.irRadExc.surBou[4].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1254};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* roo.irRadExc.ASurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[743]] /* roo.irRadExc.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 1254;
}

/*
equation index: 1255
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[3].A = roo.surBou[3].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1255};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[742]] /* roo.irRadExc.surBou[3].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* roo.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 1255;
}

/*
equation index: 1256
type: SIMPLE_ASSIGN
roo.irRadExc.ASurBou[3] = roo.irRadExc.surBou[3].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1256};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[490]] /* roo.irRadExc.ASurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[742]] /* roo.irRadExc.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 1256;
}

/*
equation index: 1257
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[2].A = roo.surBou[2].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1257};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[741]] /* roo.irRadExc.surBou[2].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1241]] /* roo.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 1257;
}

/*
equation index: 1258
type: SIMPLE_ASSIGN
roo.irRadExc.ASurBou[2] = roo.irRadExc.surBou[2].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1258};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[489]] /* roo.irRadExc.ASurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[741]] /* roo.irRadExc.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 1258;
}

/*
equation index: 1259
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[1].A = roo.surBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1259};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[740]] /* roo.irRadExc.surBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1240]] /* roo.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 1259;
}

/*
equation index: 1260
type: SIMPLE_ASSIGN
roo.irRadExc.ASurBou[1] = roo.irRadExc.surBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1260};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[488]] /* roo.irRadExc.ASurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[740]] /* roo.irRadExc.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 1260;
}

/*
equation index: 1261
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].A = roo.datConBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1261};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* roo.irRadExc.datConBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[296]] /* roo.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 1261;
}

/*
equation index: 1262
type: SIMPLE_ASSIGN
roo.irRadExc.AConBou[1] = roo.irRadExc.datConBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1262};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* roo.irRadExc.AConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* roo.irRadExc.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 1262;
}

/*
equation index: 1263
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].A = roo.datConPar[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1263};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[637]] /* roo.irRadExc.datConPar[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* roo.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 1263;
}

/*
equation index: 1264
type: SIMPLE_ASSIGN
roo.irRadExc.AConPar[1] = roo.irRadExc.datConPar[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1264};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.AConPar[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[637]] /* roo.irRadExc.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 1264;
}

/*
equation index: 1265
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].AWin = roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1265};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[578]] /* roo.irRadExc.datConExtWin[1].AWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[342]] /* roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 1265;
}

/*
equation index: 1266
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].fFra = roo.datConExtWin[1].fFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1266};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[582]] /* roo.irRadExc.datConExtWin[1].fFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* roo.datConExtWin[1].fFra PARAM */);
  threadData->lastEquationSolved = 1266;
}

/*
equation index: 1267
type: SIMPLE_ASSIGN
roo.irRadExc.AConExtWinFra[1] = roo.irRadExc.datConExtWin[1].fFra * roo.irRadExc.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1267};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[478]] /* roo.irRadExc.AConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[582]] /* roo.irRadExc.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[578]] /* roo.irRadExc.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 1267;
}

/*
equation index: 1268
type: SIMPLE_ASSIGN
roo.irRadExc.AConExtWinGla[1] = (1.0 - roo.irRadExc.datConExtWin[1].fFra) * roo.irRadExc.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1268};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.AConExtWinGla[1] PARAM */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[582]] /* roo.irRadExc.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[578]] /* roo.irRadExc.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 1268;
}

/*
equation index: 1269
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].AOpa = roo.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1269};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* roo.irRadExc.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* roo.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 1269;
}

/*
equation index: 1270
type: SIMPLE_ASSIGN
roo.irRadExc.AConExtWinOpa[1] = roo.irRadExc.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1270};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.AConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* roo.irRadExc.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 1270;
}

/*
equation index: 1271
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].A = roo.datConExt[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1271};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[553]] /* roo.irRadExc.datConExt[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[317]] /* roo.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 1271;
}

/*
equation index: 1272
type: SIMPLE_ASSIGN
roo.irRadExc.AConExt[1] = roo.irRadExc.datConExt[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1272};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[477]] /* roo.irRadExc.AConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[553]] /* roo.irRadExc.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 1272;
}

/*
equation index: 1273
type: SIMPLE_ASSIGN
roo.irRadExc.instanceName = "TmpOnePort.roo.irRadExc"
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1273};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[40]] /* roo.irRadExc.instanceName PARAM */) = _OMC_LIT81;
  threadData->lastEquationSolved = 1273;
}

/*
equation index: 1279
type: SIMPLE_ASSIGN
roo.irRadExc.dummyCon.R = roo.irRadExc.dummyCon.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1279};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[658]] /* roo.irRadExc.dummyCon.R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[664]] /* roo.irRadExc.dummyCon.material[1].R PARAM */);
  threadData->lastEquationSolved = 1279;
}

/*
equation index: 1285
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[6].boundaryCondition = roo.surBou[6].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1285};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[207]] /* roo.irRadExc.surBou[6].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[314]] /* roo.surBou[6].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1285;
}

/*
equation index: 1286
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[6].name = roo.surBou[6].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1286};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[46]] /* roo.irRadExc.surBou[6].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[77]] /* roo.surBou[6].name PARAM */);
  threadData->lastEquationSolved = 1286;
}

/*
equation index: 1288
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[6].absSol = roo.surBou[6].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1288};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* roo.irRadExc.surBou[6].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1257]] /* roo.surBou[6].absSol PARAM */);
  threadData->lastEquationSolved = 1288;
}

/*
equation index: 1290
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[5].boundaryCondition = roo.surBou[5].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1290};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[206]] /* roo.irRadExc.surBou[5].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[313]] /* roo.surBou[5].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1290;
}

/*
equation index: 1291
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[5].name = roo.surBou[5].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1291};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[45]] /* roo.irRadExc.surBou[5].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[76]] /* roo.surBou[5].name PARAM */);
  threadData->lastEquationSolved = 1291;
}

/*
equation index: 1293
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[5].absSol = roo.surBou[5].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1293};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[756]] /* roo.irRadExc.surBou[5].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1256]] /* roo.surBou[5].absSol PARAM */);
  threadData->lastEquationSolved = 1293;
}

/*
equation index: 1295
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[4].boundaryCondition = roo.surBou[4].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1295};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[205]] /* roo.irRadExc.surBou[4].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[312]] /* roo.surBou[4].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1295;
}

/*
equation index: 1296
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[4].name = roo.surBou[4].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1296};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[44]] /* roo.irRadExc.surBou[4].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[75]] /* roo.surBou[4].name PARAM */);
  threadData->lastEquationSolved = 1296;
}

/*
equation index: 1298
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[4].absSol = roo.surBou[4].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1298};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[755]] /* roo.irRadExc.surBou[4].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1255]] /* roo.surBou[4].absSol PARAM */);
  threadData->lastEquationSolved = 1298;
}

/*
equation index: 1300
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[3].boundaryCondition = roo.surBou[3].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1300};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[204]] /* roo.irRadExc.surBou[3].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[311]] /* roo.surBou[3].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1300;
}

/*
equation index: 1301
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[3].name = roo.surBou[3].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1301};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[43]] /* roo.irRadExc.surBou[3].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[74]] /* roo.surBou[3].name PARAM */);
  threadData->lastEquationSolved = 1301;
}

/*
equation index: 1303
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[3].absSol = roo.surBou[3].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1303};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[754]] /* roo.irRadExc.surBou[3].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1254]] /* roo.surBou[3].absSol PARAM */);
  threadData->lastEquationSolved = 1303;
}

/*
equation index: 1305
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[2].boundaryCondition = roo.surBou[2].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1305};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[203]] /* roo.irRadExc.surBou[2].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[310]] /* roo.surBou[2].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1305;
}

/*
equation index: 1306
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[2].name = roo.surBou[2].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1306};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[42]] /* roo.irRadExc.surBou[2].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[73]] /* roo.surBou[2].name PARAM */);
  threadData->lastEquationSolved = 1306;
}

/*
equation index: 1308
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[2].absSol = roo.surBou[2].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1308};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[753]] /* roo.irRadExc.surBou[2].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* roo.surBou[2].absSol PARAM */);
  threadData->lastEquationSolved = 1308;
}

/*
equation index: 1310
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[1].boundaryCondition = roo.surBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1310};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[202]] /* roo.irRadExc.surBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[309]] /* roo.surBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1310;
}

/*
equation index: 1311
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[1].name = roo.surBou[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1311};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[41]] /* roo.irRadExc.surBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[72]] /* roo.surBou[1].name PARAM */);
  threadData->lastEquationSolved = 1311;
}

/*
equation index: 1313
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[1].absSol = roo.surBou[1].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1313};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* roo.irRadExc.surBou[1].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* roo.surBou[1].absSol PARAM */);
  threadData->lastEquationSolved = 1313;
}

/*
equation index: 1315
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].boundaryCondition = roo.datConBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1315};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[165]] /* roo.irRadExc.datConBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[126]] /* roo.datConBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1315;
}

/*
equation index: 1318
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].T_b_start = roo.datConBou[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1318};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[534]] /* roo.irRadExc.datConBou[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[298]] /* roo.datConBou[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1318;
}

/*
equation index: 1319
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].T_a_start = roo.datConBou[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1319};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* roo.irRadExc.datConBou[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[297]] /* roo.datConBou[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1319;
}

/*
equation index: 1323
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].azi = roo.datConBou[1].azi
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1323};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[535]] /* roo.irRadExc.datConBou[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[299]] /* roo.datConBou[1].azi PARAM */);
  threadData->lastEquationSolved = 1323;
}

/*
equation index: 1325
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.roughness_a = roo.datConBou[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1325};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[170]] /* roo.irRadExc.datConBou[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[131]] /* roo.datConBou[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1325;
}

/*
equation index: 1326
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.absSol_b = roo.datConBou[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1326};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[540]] /* roo.irRadExc.datConBou[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[304]] /* roo.datConBou[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1326;
}

/*
equation index: 1327
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.absSol_a = roo.datConBou[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1327};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[539]] /* roo.irRadExc.datConBou[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[303]] /* roo.datConBou[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1327;
}

/*
equation index: 1328
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.absIR_a = roo.datConBou[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1328};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[537]] /* roo.irRadExc.datConBou[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[301]] /* roo.datConBou[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1328;
}

/*
equation index: 1331
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].LHea = roo.datConBou[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1331};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* roo.irRadExc.datConBou[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[305]] /* roo.datConBou[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1331;
}

/*
equation index: 1334
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].nStaReal = roo.datConBou[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1334};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* roo.irRadExc.datConBou[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[312]] /* roo.datConBou[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1334;
}

/*
equation index: 1335
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].piMat = roo.datConBou[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1335};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* roo.irRadExc.datConBou[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[313]] /* roo.datConBou[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1335;
}

/*
equation index: 1336
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].piRef = roo.datConBou[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1336};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* roo.irRadExc.datConBou[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[314]] /* roo.datConBou[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1336;
}

/*
equation index: 1339
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].nStaRef = roo.datConBou[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1339};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[167]] /* roo.irRadExc.datConBou[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[128]] /* roo.datConBou[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1339;
}

/*
equation index: 1340
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].R = roo.datConBou[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1340};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* roo.irRadExc.datConBou[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[306]] /* roo.datConBou[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1340;
}

/*
equation index: 1341
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].d = roo.datConBou[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1341};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[546]] /* roo.irRadExc.datConBou[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[310]] /* roo.datConBou[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1341;
}

/*
equation index: 1342
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].c = roo.datConBou[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1342};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[545]] /* roo.irRadExc.datConBou[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[309]] /* roo.datConBou[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1342;
}

/*
equation index: 1343
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].k = roo.datConBou[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1343};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* roo.irRadExc.datConBou[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[311]] /* roo.datConBou[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1343;
}

/*
equation index: 1344
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].x = roo.datConBou[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1344};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* roo.irRadExc.datConBou[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[315]] /* roo.datConBou[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1344;
}

/*
equation index: 1346
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].name = roo.datConBou[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1346};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[36]] /* roo.irRadExc.datConBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[32]] /* roo.datConBou[1].name PARAM */);
  threadData->lastEquationSolved = 1346;
}

/*
equation index: 1347
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].boundaryCondition = roo.datConPar[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1347};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[183]] /* roo.irRadExc.datConPar[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[144]] /* roo.datConPar[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1347;
}

/*
equation index: 1350
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].T_b_start = roo.datConPar[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1350};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[639]] /* roo.irRadExc.datConPar[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* roo.datConPar[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1350;
}

/*
equation index: 1351
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].T_a_start = roo.datConPar[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1351};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[638]] /* roo.irRadExc.datConPar[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[402]] /* roo.datConPar[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1351;
}

/*
equation index: 1355
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].azi = roo.datConPar[1].azi
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1355};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[640]] /* roo.irRadExc.datConPar[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* roo.datConPar[1].azi PARAM */);
  threadData->lastEquationSolved = 1355;
}

/*
equation index: 1357
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.roughness_a = roo.datConPar[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1357};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[188]] /* roo.irRadExc.datConPar[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[149]] /* roo.datConPar[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1357;
}

/*
equation index: 1358
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.absSol_b = roo.datConPar[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1358};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[645]] /* roo.irRadExc.datConPar[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* roo.datConPar[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1358;
}

/*
equation index: 1359
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.absSol_a = roo.datConPar[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1359};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[644]] /* roo.irRadExc.datConPar[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[408]] /* roo.datConPar[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1359;
}

/*
equation index: 1362
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].LHea = roo.datConPar[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1362};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[646]] /* roo.irRadExc.datConPar[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* roo.datConPar[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1362;
}

/*
equation index: 1365
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].nStaReal = roo.datConPar[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1365};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[653]] /* roo.irRadExc.datConPar[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* roo.datConPar[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1365;
}

/*
equation index: 1366
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].piMat = roo.datConPar[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1366};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[654]] /* roo.irRadExc.datConPar[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* roo.datConPar[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1366;
}

/*
equation index: 1367
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].piRef = roo.datConPar[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1367};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[655]] /* roo.irRadExc.datConPar[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* roo.datConPar[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1367;
}

/*
equation index: 1370
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].nStaRef = roo.datConPar[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1370};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[185]] /* roo.irRadExc.datConPar[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[146]] /* roo.datConPar[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1370;
}

/*
equation index: 1371
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].R = roo.datConPar[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1371};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[647]] /* roo.irRadExc.datConPar[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* roo.datConPar[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1371;
}

/*
equation index: 1372
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].d = roo.datConPar[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1372};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[651]] /* roo.irRadExc.datConPar[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* roo.datConPar[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1372;
}

/*
equation index: 1373
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].c = roo.datConPar[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1373};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[650]] /* roo.irRadExc.datConPar[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* roo.datConPar[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1373;
}

/*
equation index: 1374
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].k = roo.datConPar[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1374};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[652]] /* roo.irRadExc.datConPar[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* roo.datConPar[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1374;
}

/*
equation index: 1375
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].x = roo.datConPar[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1375};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[656]] /* roo.irRadExc.datConPar[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* roo.datConPar[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1375;
}

/*
equation index: 1377
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].name = roo.datConPar[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1377};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[39]] /* roo.irRadExc.datConPar[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[35]] /* roo.datConPar[1].name PARAM */);
  threadData->lastEquationSolved = 1377;
}

/*
equation index: 1381
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.absSolFra = roo.datConExtWin[1].glaSys.absSolFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1381};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[585]] /* roo.irRadExc.datConExtWin[1].glaSys.absSolFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[349]] /* roo.datConExtWin[1].glaSys.absSolFra PARAM */);
  threadData->lastEquationSolved = 1381;
}

/*
equation index: 1382
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.UFra = roo.datConExtWin[1].glaSys.UFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1382};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[583]] /* roo.irRadExc.datConExtWin[1].glaSys.UFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* roo.datConExtWin[1].glaSys.UFra PARAM */);
  threadData->lastEquationSolved = 1382;
}

/*
equation index: 1383
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_b = roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1383};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[608]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 1383;
}

/*
equation index: 1384
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_a = roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1384};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[607]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 1384;
}

/*
equation index: 1385
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_b = roo.datConExtWin[1].glaSys.shade.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1385};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[604]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[368]] /* roo.datConExtWin[1].glaSys.shade.absIR_b PARAM */);
  threadData->lastEquationSolved = 1385;
}

/*
equation index: 1386
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_b = roo.datConExtWin[1].glaSys.shade.rhoSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1386};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[606]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */);
  threadData->lastEquationSolved = 1386;
}

/*
equation index: 1387
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_a = roo.datConExtWin[1].glaSys.shade.rhoSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1387};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */);
  threadData->lastEquationSolved = 1387;
}

/*
equation index: 1388
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_b = roo.datConExtWin[1].glaSys.shade.tauSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1388};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[610]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* roo.datConExtWin[1].glaSys.shade.tauSol_b PARAM */);
  threadData->lastEquationSolved = 1388;
}

/*
equation index: 1389
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_a = roo.datConExtWin[1].glaSys.shade.tauSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1389};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[609]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* roo.datConExtWin[1].glaSys.shade.tauSol_a PARAM */);
  threadData->lastEquationSolved = 1389;
}

/*
equation index: 1390
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].P0 = roo.datConExtWin[1].glaSys.gas[1].P0
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1390};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[587]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].P0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* roo.datConExtWin[1].glaSys.gas[1].P0 PARAM */);
  threadData->lastEquationSolved = 1390;
}

/*
equation index: 1391
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].MM = roo.datConExtWin[1].glaSys.gas[1].MM
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1391};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[586]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].MM PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[350]] /* roo.datConExtWin[1].glaSys.gas[1].MM PARAM */);
  threadData->lastEquationSolved = 1391;
}

/*
equation index: 1392
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_c = roo.datConExtWin[1].glaSys.gas[1].b_c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1392};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[591]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* roo.datConExtWin[1].glaSys.gas[1].b_c PARAM */);
  threadData->lastEquationSolved = 1392;
}

/*
equation index: 1393
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_c = roo.datConExtWin[1].glaSys.gas[1].a_c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1393};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[588]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* roo.datConExtWin[1].glaSys.gas[1].a_c PARAM */);
  threadData->lastEquationSolved = 1393;
}

/*
equation index: 1394
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_mu = roo.datConExtWin[1].glaSys.gas[1].b_mu
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1394};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[593]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* roo.datConExtWin[1].glaSys.gas[1].b_mu PARAM */);
  threadData->lastEquationSolved = 1394;
}

/*
equation index: 1395
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_mu = roo.datConExtWin[1].glaSys.gas[1].a_mu
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1395};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[590]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[354]] /* roo.datConExtWin[1].glaSys.gas[1].a_mu PARAM */);
  threadData->lastEquationSolved = 1395;
}

/*
equation index: 1396
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_k = roo.datConExtWin[1].glaSys.gas[1].b_k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1396};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[592]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* roo.datConExtWin[1].glaSys.gas[1].b_k PARAM */);
  threadData->lastEquationSolved = 1396;
}

/*
equation index: 1397
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_k = roo.datConExtWin[1].glaSys.gas[1].a_k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1397};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[589]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* roo.datConExtWin[1].glaSys.gas[1].a_k PARAM */);
  threadData->lastEquationSolved = 1397;
}

/*
equation index: 1398
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].x = roo.datConExtWin[1].glaSys.gas[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1398};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[358]] /* roo.datConExtWin[1].glaSys.gas[1].x PARAM */);
  threadData->lastEquationSolved = 1398;
}

/*
equation index: 1399
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_a = roo.datConExtWin[1].glaSys.glass[1].absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1399};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[595]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */);
  threadData->lastEquationSolved = 1399;
}

/*
equation index: 1400
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauIR = roo.datConExtWin[1].glaSys.glass[1].tauIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1400};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[600]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[364]] /* roo.datConExtWin[1].glaSys.glass[1].tauIR PARAM */);
  threadData->lastEquationSolved = 1400;
}

/*
equation index: 1401
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1401};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[599]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[363]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */);
  threadData->lastEquationSolved = 1401;
}

/*
equation index: 1402
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1402};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[598]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */);
  threadData->lastEquationSolved = 1402;
}

/*
equation index: 1403
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauSol[1] = roo.datConExtWin[1].glaSys.glass[1].tauSol[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1403};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* roo.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */);
  threadData->lastEquationSolved = 1403;
}

/*
equation index: 1404
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].k = roo.datConExtWin[1].glaSys.glass[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1404};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[597]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[361]] /* roo.datConExtWin[1].glaSys.glass[1].k PARAM */);
  threadData->lastEquationSolved = 1404;
}

/*
equation index: 1405
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].x = roo.datConExtWin[1].glaSys.glass[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1405};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[602]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[366]] /* roo.datConExtWin[1].glaSys.glass[1].x PARAM */);
  threadData->lastEquationSolved = 1405;
}

/*
equation index: 1408
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].AGla = roo.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1408};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* roo.irRadExc.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[340]] /* roo.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 1408;
}

/*
equation index: 1409
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].AFra = roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1409};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* roo.irRadExc.datConExtWin[1].AFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[339]] /* roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 1409;
}

/*
equation index: 1411
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].sidFin.gap = roo.datConExtWin[1].sidFin.gap
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1411};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[633]] /* roo.irRadExc.datConExtWin[1].sidFin.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* roo.datConExtWin[1].sidFin.gap PARAM */);
  threadData->lastEquationSolved = 1411;
}

/*
equation index: 1413
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].sidFin.h = roo.datConExtWin[1].sidFin.h
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1413};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[634]] /* roo.irRadExc.datConExtWin[1].sidFin.h PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* roo.datConExtWin[1].sidFin.h PARAM */);
  threadData->lastEquationSolved = 1413;
}

/*
equation index: 1415
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].ove.gap = roo.datConExtWin[1].ove.gap
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1415};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[629]] /* roo.irRadExc.datConExtWin[1].ove.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[393]] /* roo.datConExtWin[1].ove.gap PARAM */);
  threadData->lastEquationSolved = 1415;
}

/*
equation index: 1417
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].ove.wR = roo.datConExtWin[1].ove.wR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1417};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[631]] /* roo.irRadExc.datConExtWin[1].ove.wR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[395]] /* roo.datConExtWin[1].ove.wR PARAM */);
  threadData->lastEquationSolved = 1417;
}

/*
equation index: 1418
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].ove.wL = roo.datConExtWin[1].ove.wL
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1418};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[630]] /* roo.irRadExc.datConExtWin[1].ove.wL PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[394]] /* roo.datConExtWin[1].ove.wL PARAM */);
  threadData->lastEquationSolved = 1418;
}

/*
equation index: 1419
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].wWin = roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1419};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[636]] /* roo.irRadExc.datConExtWin[1].wWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[400]] /* roo.datConExtWin[1].wWin PARAM */);
  threadData->lastEquationSolved = 1419;
}

/*
equation index: 1420
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].hWin = roo.datConExtWin[1].hWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1420};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[611]] /* roo.irRadExc.datConExtWin[1].hWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* roo.datConExtWin[1].hWin PARAM */);
  threadData->lastEquationSolved = 1420;
}

/*
equation index: 1421
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].A = roo.datConExtWin[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1421};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* roo.irRadExc.datConExtWin[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[338]] /* roo.datConExtWin[1].A PARAM */);
  threadData->lastEquationSolved = 1421;
}

/*
equation index: 1422
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].boundaryCondition = roo.datConExtWin[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1422};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[177]] /* roo.irRadExc.datConExtWin[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[138]] /* roo.datConExtWin[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1422;
}

/*
equation index: 1425
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].T_b_start = roo.datConExtWin[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1425};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[580]] /* roo.irRadExc.datConExtWin[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* roo.datConExtWin[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1425;
}

/*
equation index: 1426
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].T_a_start = roo.datConExtWin[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1426};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[579]] /* roo.irRadExc.datConExtWin[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* roo.datConExtWin[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1426;
}

/*
equation index: 1430
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].azi = roo.datConExtWin[1].azi
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1430};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[581]] /* roo.irRadExc.datConExtWin[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* roo.datConExtWin[1].azi PARAM */);
  threadData->lastEquationSolved = 1430;
}

/*
equation index: 1432
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.roughness_a = roo.datConExtWin[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1432};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[182]] /* roo.irRadExc.datConExtWin[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[143]] /* roo.datConExtWin[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1432;
}

/*
equation index: 1433
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.absSol_b = roo.datConExtWin[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1433};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[616]] /* roo.irRadExc.datConExtWin[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[380]] /* roo.datConExtWin[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1433;
}

/*
equation index: 1434
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.absSol_a = roo.datConExtWin[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1434};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[615]] /* roo.irRadExc.datConExtWin[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* roo.datConExtWin[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1434;
}

/*
equation index: 1435
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.absIR_a = roo.datConExtWin[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1435};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[613]] /* roo.irRadExc.datConExtWin[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* roo.datConExtWin[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1435;
}

/*
equation index: 1438
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].LHea = roo.datConExtWin[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1438};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[617]] /* roo.irRadExc.datConExtWin[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* roo.datConExtWin[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1438;
}

/*
equation index: 1441
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].nStaReal = roo.datConExtWin[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1441};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[624]] /* roo.irRadExc.datConExtWin[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[388]] /* roo.datConExtWin[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1441;
}

/*
equation index: 1442
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].piMat = roo.datConExtWin[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1442};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[625]] /* roo.irRadExc.datConExtWin[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* roo.datConExtWin[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1442;
}

/*
equation index: 1443
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].piRef = roo.datConExtWin[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1443};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[626]] /* roo.irRadExc.datConExtWin[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* roo.datConExtWin[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1443;
}

/*
equation index: 1446
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].nStaRef = roo.datConExtWin[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1446};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[179]] /* roo.irRadExc.datConExtWin[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[140]] /* roo.datConExtWin[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1446;
}

/*
equation index: 1447
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].R = roo.datConExtWin[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1447};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[618]] /* roo.irRadExc.datConExtWin[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[382]] /* roo.datConExtWin[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1447;
}

/*
equation index: 1448
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].d = roo.datConExtWin[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1448};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[622]] /* roo.irRadExc.datConExtWin[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[386]] /* roo.datConExtWin[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1448;
}

/*
equation index: 1449
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].c = roo.datConExtWin[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1449};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[621]] /* roo.irRadExc.datConExtWin[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[385]] /* roo.datConExtWin[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1449;
}

/*
equation index: 1450
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].k = roo.datConExtWin[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1450};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[623]] /* roo.irRadExc.datConExtWin[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* roo.datConExtWin[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1450;
}

/*
equation index: 1451
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].x = roo.datConExtWin[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1451};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[627]] /* roo.irRadExc.datConExtWin[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[391]] /* roo.datConExtWin[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1451;
}

/*
equation index: 1453
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].name = roo.datConExtWin[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1453};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[38]] /* roo.irRadExc.datConExtWin[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[34]] /* roo.datConExtWin[1].name PARAM */);
  threadData->lastEquationSolved = 1453;
}

/*
equation index: 1454
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].boundaryCondition = roo.datConExt[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1454};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[171]] /* roo.irRadExc.datConExt[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[132]] /* roo.datConExt[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1454;
}

/*
equation index: 1457
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].T_b_start = roo.datConExt[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1457};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* roo.irRadExc.datConExt[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[319]] /* roo.datConExt[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1457;
}

/*
equation index: 1458
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].T_a_start = roo.datConExt[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1458};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[554]] /* roo.irRadExc.datConExt[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[318]] /* roo.datConExt[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1458;
}

/*
equation index: 1462
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].azi = roo.datConExt[1].azi
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1462};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[556]] /* roo.irRadExc.datConExt[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[320]] /* roo.datConExt[1].azi PARAM */);
  threadData->lastEquationSolved = 1462;
}

/*
equation index: 1464
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.roughness_a = roo.datConExt[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1464};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[176]] /* roo.irRadExc.datConExt[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[137]] /* roo.datConExt[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1464;
}

/*
equation index: 1465
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.absSol_b = roo.datConExt[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1465};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* roo.irRadExc.datConExt[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[325]] /* roo.datConExt[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1465;
}

/*
equation index: 1466
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.absSol_a = roo.datConExt[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1466};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* roo.irRadExc.datConExt[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[324]] /* roo.datConExt[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1466;
}

/*
equation index: 1467
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.absIR_a = roo.datConExt[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1467};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* roo.irRadExc.datConExt[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[322]] /* roo.datConExt[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1467;
}

/*
equation index: 1470
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].LHea = roo.datConExt[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1470};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* roo.irRadExc.datConExt[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[326]] /* roo.datConExt[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1470;
}

/*
equation index: 1473
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].nStaReal = roo.datConExt[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1473};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[569]] /* roo.irRadExc.datConExt[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[333]] /* roo.datConExt[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1473;
}

/*
equation index: 1474
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].piMat = roo.datConExt[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1474};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[570]] /* roo.irRadExc.datConExt[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[334]] /* roo.datConExt[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1474;
}

/*
equation index: 1475
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].piRef = roo.datConExt[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1475};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* roo.irRadExc.datConExt[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[335]] /* roo.datConExt[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1475;
}

/*
equation index: 1478
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].nStaRef = roo.datConExt[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1478};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[173]] /* roo.irRadExc.datConExt[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[134]] /* roo.datConExt[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1478;
}

/*
equation index: 1479
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].R = roo.datConExt[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1479};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[563]] /* roo.irRadExc.datConExt[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* roo.datConExt[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1479;
}

/*
equation index: 1480
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].d = roo.datConExt[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1480};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* roo.irRadExc.datConExt[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[331]] /* roo.datConExt[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1480;
}

/*
equation index: 1481
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].c = roo.datConExt[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1481};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[566]] /* roo.irRadExc.datConExt[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[330]] /* roo.datConExt[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1481;
}

/*
equation index: 1482
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].k = roo.datConExt[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1482};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* roo.irRadExc.datConExt[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[332]] /* roo.datConExt[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1482;
}

/*
equation index: 1483
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].x = roo.datConExt[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1483};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* roo.irRadExc.datConExt[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[336]] /* roo.datConExt[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1483;
}

/*
equation index: 1485
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].name = roo.datConExt[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1485};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[37]] /* roo.irRadExc.datConExt[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[33]] /* roo.datConExt[1].name PARAM */);
  threadData->lastEquationSolved = 1485;
}

/*
equation index: 1502
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[6].A = roo.surBou[6].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1502};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[979]] /* roo.irRadGai.surBou[6].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* roo.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 1502;
}

/*
equation index: 1503
type: SIMPLE_ASSIGN
roo.irRadGai.ASurBou[6] = roo.irRadGai.surBou[6].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1503};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[788]] /* roo.irRadGai.ASurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[979]] /* roo.irRadGai.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 1503;
}

/*
equation index: 1504
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[6].absIR = roo.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1504};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* roo.irRadGai.surBou[6].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* roo.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 1504;
}

/*
equation index: 1505
type: SIMPLE_ASSIGN
roo.irRadGai.epsSurBou[6] = roo.irRadGai.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1505};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[972]] /* roo.irRadGai.epsSurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* roo.irRadGai.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 1505;
}

/*
equation index: 1506
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsSurBou[6] = roo.irRadGai.ASurBou[6] * roo.irRadGai.epsSurBou[6]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1506};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* roo.irRadGai.AEpsSurBou[6] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[788]] /* roo.irRadGai.ASurBou[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[972]] /* roo.irRadGai.epsSurBou[6] PARAM */));
  threadData->lastEquationSolved = 1506;
}

/*
equation index: 1507
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[5].A = roo.surBou[5].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1507};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[978]] /* roo.irRadGai.surBou[5].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* roo.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 1507;
}

/*
equation index: 1508
type: SIMPLE_ASSIGN
roo.irRadGai.ASurBou[5] = roo.irRadGai.surBou[5].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1508};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[787]] /* roo.irRadGai.ASurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[978]] /* roo.irRadGai.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 1508;
}

/*
equation index: 1509
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[5].absIR = roo.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1509};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[984]] /* roo.irRadGai.surBou[5].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1250]] /* roo.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 1509;
}

/*
equation index: 1510
type: SIMPLE_ASSIGN
roo.irRadGai.epsSurBou[5] = roo.irRadGai.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1510};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[971]] /* roo.irRadGai.epsSurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[984]] /* roo.irRadGai.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 1510;
}

/*
equation index: 1511
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsSurBou[5] = roo.irRadGai.ASurBou[5] * roo.irRadGai.epsSurBou[5]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1511};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* roo.irRadGai.AEpsSurBou[5] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[787]] /* roo.irRadGai.ASurBou[5] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[971]] /* roo.irRadGai.epsSurBou[5] PARAM */));
  threadData->lastEquationSolved = 1511;
}

/*
equation index: 1512
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[4].A = roo.surBou[4].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1512};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[977]] /* roo.irRadGai.surBou[4].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1243]] /* roo.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 1512;
}

/*
equation index: 1513
type: SIMPLE_ASSIGN
roo.irRadGai.ASurBou[4] = roo.irRadGai.surBou[4].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1513};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* roo.irRadGai.ASurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[977]] /* roo.irRadGai.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 1513;
}

/*
equation index: 1514
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[4].absIR = roo.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1514};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[983]] /* roo.irRadGai.surBou[4].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* roo.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 1514;
}

/*
equation index: 1515
type: SIMPLE_ASSIGN
roo.irRadGai.epsSurBou[4] = roo.irRadGai.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1515};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* roo.irRadGai.epsSurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[983]] /* roo.irRadGai.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 1515;
}

/*
equation index: 1516
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsSurBou[4] = roo.irRadGai.ASurBou[4] * roo.irRadGai.epsSurBou[4]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1516};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* roo.irRadGai.AEpsSurBou[4] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* roo.irRadGai.ASurBou[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* roo.irRadGai.epsSurBou[4] PARAM */));
  threadData->lastEquationSolved = 1516;
}

/*
equation index: 1517
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[3].A = roo.surBou[3].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1517};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[976]] /* roo.irRadGai.surBou[3].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* roo.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 1517;
}

/*
equation index: 1518
type: SIMPLE_ASSIGN
roo.irRadGai.ASurBou[3] = roo.irRadGai.surBou[3].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1518};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* roo.irRadGai.ASurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[976]] /* roo.irRadGai.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 1518;
}

/*
equation index: 1519
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[3].absIR = roo.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1519};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[982]] /* roo.irRadGai.surBou[3].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* roo.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 1519;
}

/*
equation index: 1520
type: SIMPLE_ASSIGN
roo.irRadGai.epsSurBou[3] = roo.irRadGai.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1520};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[969]] /* roo.irRadGai.epsSurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[982]] /* roo.irRadGai.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 1520;
}

/*
equation index: 1521
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsSurBou[3] = roo.irRadGai.ASurBou[3] * roo.irRadGai.epsSurBou[3]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1521};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* roo.irRadGai.AEpsSurBou[3] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* roo.irRadGai.ASurBou[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[969]] /* roo.irRadGai.epsSurBou[3] PARAM */));
  threadData->lastEquationSolved = 1521;
}

/*
equation index: 1522
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[2].A = roo.surBou[2].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1522};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[975]] /* roo.irRadGai.surBou[2].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1241]] /* roo.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 1522;
}

/*
equation index: 1523
type: SIMPLE_ASSIGN
roo.irRadGai.ASurBou[2] = roo.irRadGai.surBou[2].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1523};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[784]] /* roo.irRadGai.ASurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[975]] /* roo.irRadGai.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 1523;
}

/*
equation index: 1524
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[2].absIR = roo.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1524};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[981]] /* roo.irRadGai.surBou[2].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1247]] /* roo.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 1524;
}

/*
equation index: 1525
type: SIMPLE_ASSIGN
roo.irRadGai.epsSurBou[2] = roo.irRadGai.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1525};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[968]] /* roo.irRadGai.epsSurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[981]] /* roo.irRadGai.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 1525;
}

/*
equation index: 1526
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsSurBou[2] = roo.irRadGai.ASurBou[2] * roo.irRadGai.epsSurBou[2]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1526};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* roo.irRadGai.AEpsSurBou[2] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[784]] /* roo.irRadGai.ASurBou[2] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[968]] /* roo.irRadGai.epsSurBou[2] PARAM */));
  threadData->lastEquationSolved = 1526;
}

/*
equation index: 1527
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[1].A = roo.surBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1527};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[974]] /* roo.irRadGai.surBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1240]] /* roo.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 1527;
}

/*
equation index: 1528
type: SIMPLE_ASSIGN
roo.irRadGai.ASurBou[1] = roo.irRadGai.surBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1528};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* roo.irRadGai.ASurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[974]] /* roo.irRadGai.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 1528;
}

/*
equation index: 1529
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[1].absIR = roo.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1529};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[980]] /* roo.irRadGai.surBou[1].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* roo.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 1529;
}

/*
equation index: 1530
type: SIMPLE_ASSIGN
roo.irRadGai.epsSurBou[1] = roo.irRadGai.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1530};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[967]] /* roo.irRadGai.epsSurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[980]] /* roo.irRadGai.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 1530;
}

/*
equation index: 1531
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsSurBou[1] = roo.irRadGai.ASurBou[1] * roo.irRadGai.epsSurBou[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1531};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* roo.irRadGai.AEpsSurBou[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* roo.irRadGai.ASurBou[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[967]] /* roo.irRadGai.epsSurBou[1] PARAM */));
  threadData->lastEquationSolved = 1531;
}

/*
equation index: 1532
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].A = roo.datConBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1532};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[789]] /* roo.irRadGai.datConBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[296]] /* roo.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 1532;
}

/*
equation index: 1533
type: SIMPLE_ASSIGN
roo.irRadGai.AConBou[1] = roo.irRadGai.datConBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1533};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[765]] /* roo.irRadGai.AConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[789]] /* roo.irRadGai.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 1533;
}

/*
equation index: 1534
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.absIR_b = roo.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1534};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* roo.irRadGai.datConBou[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* roo.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1534;
}

/*
equation index: 1535
type: SIMPLE_ASSIGN
roo.irRadGai.epsConBou[1] = roo.irRadGai.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1535};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[959]] /* roo.irRadGai.epsConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* roo.irRadGai.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1535;
}

/*
equation index: 1536
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConBou[1] = roo.irRadGai.AConBou[1] * roo.irRadGai.epsConBou[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1536};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[771]] /* roo.irRadGai.AEpsConBou[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[765]] /* roo.irRadGai.AConBou[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[959]] /* roo.irRadGai.epsConBou[1] PARAM */));
  threadData->lastEquationSolved = 1536;
}

/*
equation index: 1537
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].A = roo.datConPar[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1537};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[894]] /* roo.irRadGai.datConPar[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* roo.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 1537;
}

/*
equation index: 1538
type: SIMPLE_ASSIGN
roo.irRadGai.AConPar[1] = roo.irRadGai.datConPar[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1538};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[770]] /* roo.irRadGai.AConPar[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[894]] /* roo.irRadGai.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 1538;
}

/*
equation index: 1539
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.absIR_b = roo.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1539};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[900]] /* roo.irRadGai.datConPar[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* roo.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1539;
}

/*
equation index: 1540
type: SIMPLE_ASSIGN
roo.irRadGai.epsConPar_b[1] = roo.irRadGai.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1540};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[966]] /* roo.irRadGai.epsConPar_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[900]] /* roo.irRadGai.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1540;
}

/*
equation index: 1541
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConPar_b[1] = roo.irRadGai.AConPar[1] * roo.irRadGai.epsConPar_b[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1541};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* roo.irRadGai.AEpsConPar_b[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[770]] /* roo.irRadGai.AConPar[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[966]] /* roo.irRadGai.epsConPar_b[1] PARAM */));
  threadData->lastEquationSolved = 1541;
}

/*
equation index: 1542
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.absIR_a = roo.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1542};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[899]] /* roo.irRadGai.datConPar[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* roo.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1542;
}

/*
equation index: 1543
type: SIMPLE_ASSIGN
roo.irRadGai.epsConPar_a[1] = roo.irRadGai.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1543};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[965]] /* roo.irRadGai.epsConPar_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[899]] /* roo.irRadGai.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1543;
}

/*
equation index: 1544
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConPar_a[1] = roo.irRadGai.AConPar[1] * roo.irRadGai.epsConPar_a[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1544};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* roo.irRadGai.AEpsConPar_a[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[770]] /* roo.irRadGai.AConPar[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[965]] /* roo.irRadGai.epsConPar_a[1] PARAM */));
  threadData->lastEquationSolved = 1544;
}

/*
equation index: 1545
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].AWin = roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1545};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[835]] /* roo.irRadGai.datConExtWin[1].AWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[342]] /* roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 1545;
}

/*
equation index: 1546
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].fFra = roo.datConExtWin[1].fFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1546};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[839]] /* roo.irRadGai.datConExtWin[1].fFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* roo.datConExtWin[1].fFra PARAM */);
  threadData->lastEquationSolved = 1546;
}

/*
equation index: 1547
type: SIMPLE_ASSIGN
roo.irRadGai.AConExtWinFra[1] = roo.irRadGai.datConExtWin[1].fFra * roo.irRadGai.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1547};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[767]] /* roo.irRadGai.AConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[839]] /* roo.irRadGai.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[835]] /* roo.irRadGai.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 1547;
}

/*
equation index: 1548
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.absIRFra = roo.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1548};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[841]] /* roo.irRadGai.datConExtWin[1].glaSys.absIRFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* roo.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 1548;
}

/*
equation index: 1549
type: SIMPLE_ASSIGN
roo.irRadGai.epsConExtWinFra[1] = roo.irRadGai.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1549};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[961]] /* roo.irRadGai.epsConExtWinFra[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[841]] /* roo.irRadGai.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 1549;
}

/*
equation index: 1550
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConExtWinFra[1] = roo.irRadGai.AConExtWinFra[1] * roo.irRadGai.epsConExtWinFra[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1550};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[773]] /* roo.irRadGai.AEpsConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[767]] /* roo.irRadGai.AConExtWinFra[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[961]] /* roo.irRadGai.epsConExtWinFra[1] PARAM */));
  threadData->lastEquationSolved = 1550;
}
OMC_DISABLE_OPT
void tmp_one_port_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[467])(DATA*, threadData_t*) = {
    tmp_one_port_eqFunction_749,
    tmp_one_port_eqFunction_750,
    tmp_one_port_eqFunction_751,
    tmp_one_port_eqFunction_752,
    tmp_one_port_eqFunction_753,
    tmp_one_port_eqFunction_754,
    tmp_one_port_eqFunction_755,
    tmp_one_port_eqFunction_758,
    tmp_one_port_eqFunction_759,
    tmp_one_port_eqFunction_760,
    tmp_one_port_eqFunction_761,
    tmp_one_port_eqFunction_764,
    tmp_one_port_eqFunction_765,
    tmp_one_port_eqFunction_791,
    tmp_one_port_eqFunction_792,
    tmp_one_port_eqFunction_793,
    tmp_one_port_eqFunction_794,
    tmp_one_port_eqFunction_795,
    tmp_one_port_eqFunction_796,
    tmp_one_port_eqFunction_803,
    tmp_one_port_eqFunction_806,
    tmp_one_port_eqFunction_807,
    tmp_one_port_eqFunction_808,
    tmp_one_port_eqFunction_809,
    tmp_one_port_eqFunction_820,
    tmp_one_port_eqFunction_822,
    tmp_one_port_eqFunction_824,
    tmp_one_port_eqFunction_826,
    tmp_one_port_eqFunction_828,
    tmp_one_port_eqFunction_830,
    tmp_one_port_eqFunction_832,
    tmp_one_port_eqFunction_834,
    tmp_one_port_eqFunction_836,
    tmp_one_port_eqFunction_837,
    tmp_one_port_eqFunction_839,
    tmp_one_port_eqFunction_841,
    tmp_one_port_eqFunction_843,
    tmp_one_port_eqFunction_844,
    tmp_one_port_eqFunction_874,
    tmp_one_port_eqFunction_877,
    tmp_one_port_eqFunction_894,
    tmp_one_port_eqFunction_895,
    tmp_one_port_eqFunction_896,
    tmp_one_port_eqFunction_901,
    tmp_one_port_eqFunction_917,
    tmp_one_port_eqFunction_918,
    tmp_one_port_eqFunction_920,
    tmp_one_port_eqFunction_921,
    tmp_one_port_eqFunction_922,
    tmp_one_port_eqFunction_923,
    tmp_one_port_eqFunction_924,
    tmp_one_port_eqFunction_925,
    tmp_one_port_eqFunction_926,
    tmp_one_port_eqFunction_927,
    tmp_one_port_eqFunction_928,
    tmp_one_port_eqFunction_933,
    tmp_one_port_eqFunction_934,
    tmp_one_port_eqFunction_935,
    tmp_one_port_eqFunction_936,
    tmp_one_port_eqFunction_937,
    tmp_one_port_eqFunction_938,
    tmp_one_port_eqFunction_939,
    tmp_one_port_eqFunction_940,
    tmp_one_port_eqFunction_941,
    tmp_one_port_eqFunction_942,
    tmp_one_port_eqFunction_943,
    tmp_one_port_eqFunction_944,
    tmp_one_port_eqFunction_945,
    tmp_one_port_eqFunction_946,
    tmp_one_port_eqFunction_947,
    tmp_one_port_eqFunction_948,
    tmp_one_port_eqFunction_949,
    tmp_one_port_eqFunction_950,
    tmp_one_port_eqFunction_951,
    tmp_one_port_eqFunction_952,
    tmp_one_port_eqFunction_953,
    tmp_one_port_eqFunction_954,
    tmp_one_port_eqFunction_955,
    tmp_one_port_eqFunction_956,
    tmp_one_port_eqFunction_957,
    tmp_one_port_eqFunction_958,
    tmp_one_port_eqFunction_959,
    tmp_one_port_eqFunction_960,
    tmp_one_port_eqFunction_961,
    tmp_one_port_eqFunction_962,
    tmp_one_port_eqFunction_963,
    tmp_one_port_eqFunction_964,
    tmp_one_port_eqFunction_965,
    tmp_one_port_eqFunction_966,
    tmp_one_port_eqFunction_967,
    tmp_one_port_eqFunction_968,
    tmp_one_port_eqFunction_969,
    tmp_one_port_eqFunction_970,
    tmp_one_port_eqFunction_971,
    tmp_one_port_eqFunction_972,
    tmp_one_port_eqFunction_973,
    tmp_one_port_eqFunction_974,
    tmp_one_port_eqFunction_975,
    tmp_one_port_eqFunction_976,
    tmp_one_port_eqFunction_977,
    tmp_one_port_eqFunction_978,
    tmp_one_port_eqFunction_979,
    tmp_one_port_eqFunction_980,
    tmp_one_port_eqFunction_981,
    tmp_one_port_eqFunction_982,
    tmp_one_port_eqFunction_983,
    tmp_one_port_eqFunction_984,
    tmp_one_port_eqFunction_990,
    tmp_one_port_eqFunction_996,
    tmp_one_port_eqFunction_997,
    tmp_one_port_eqFunction_999,
    tmp_one_port_eqFunction_1001,
    tmp_one_port_eqFunction_1002,
    tmp_one_port_eqFunction_1004,
    tmp_one_port_eqFunction_1006,
    tmp_one_port_eqFunction_1007,
    tmp_one_port_eqFunction_1009,
    tmp_one_port_eqFunction_1011,
    tmp_one_port_eqFunction_1012,
    tmp_one_port_eqFunction_1014,
    tmp_one_port_eqFunction_1016,
    tmp_one_port_eqFunction_1017,
    tmp_one_port_eqFunction_1019,
    tmp_one_port_eqFunction_1021,
    tmp_one_port_eqFunction_1022,
    tmp_one_port_eqFunction_1024,
    tmp_one_port_eqFunction_1026,
    tmp_one_port_eqFunction_1029,
    tmp_one_port_eqFunction_1030,
    tmp_one_port_eqFunction_1034,
    tmp_one_port_eqFunction_1036,
    tmp_one_port_eqFunction_1037,
    tmp_one_port_eqFunction_1038,
    tmp_one_port_eqFunction_1039,
    tmp_one_port_eqFunction_1042,
    tmp_one_port_eqFunction_1045,
    tmp_one_port_eqFunction_1046,
    tmp_one_port_eqFunction_1047,
    tmp_one_port_eqFunction_1050,
    tmp_one_port_eqFunction_1051,
    tmp_one_port_eqFunction_1052,
    tmp_one_port_eqFunction_1053,
    tmp_one_port_eqFunction_1054,
    tmp_one_port_eqFunction_1055,
    tmp_one_port_eqFunction_1057,
    tmp_one_port_eqFunction_1058,
    tmp_one_port_eqFunction_1061,
    tmp_one_port_eqFunction_1062,
    tmp_one_port_eqFunction_1066,
    tmp_one_port_eqFunction_1068,
    tmp_one_port_eqFunction_1069,
    tmp_one_port_eqFunction_1070,
    tmp_one_port_eqFunction_1073,
    tmp_one_port_eqFunction_1076,
    tmp_one_port_eqFunction_1077,
    tmp_one_port_eqFunction_1078,
    tmp_one_port_eqFunction_1081,
    tmp_one_port_eqFunction_1082,
    tmp_one_port_eqFunction_1083,
    tmp_one_port_eqFunction_1084,
    tmp_one_port_eqFunction_1085,
    tmp_one_port_eqFunction_1086,
    tmp_one_port_eqFunction_1088,
    tmp_one_port_eqFunction_1092,
    tmp_one_port_eqFunction_1093,
    tmp_one_port_eqFunction_1094,
    tmp_one_port_eqFunction_1095,
    tmp_one_port_eqFunction_1096,
    tmp_one_port_eqFunction_1097,
    tmp_one_port_eqFunction_1098,
    tmp_one_port_eqFunction_1099,
    tmp_one_port_eqFunction_1100,
    tmp_one_port_eqFunction_1101,
    tmp_one_port_eqFunction_1102,
    tmp_one_port_eqFunction_1103,
    tmp_one_port_eqFunction_1104,
    tmp_one_port_eqFunction_1105,
    tmp_one_port_eqFunction_1106,
    tmp_one_port_eqFunction_1107,
    tmp_one_port_eqFunction_1108,
    tmp_one_port_eqFunction_1109,
    tmp_one_port_eqFunction_1110,
    tmp_one_port_eqFunction_1111,
    tmp_one_port_eqFunction_1112,
    tmp_one_port_eqFunction_1113,
    tmp_one_port_eqFunction_1114,
    tmp_one_port_eqFunction_1115,
    tmp_one_port_eqFunction_1116,
    tmp_one_port_eqFunction_1119,
    tmp_one_port_eqFunction_1121,
    tmp_one_port_eqFunction_1123,
    tmp_one_port_eqFunction_1125,
    tmp_one_port_eqFunction_1127,
    tmp_one_port_eqFunction_1128,
    tmp_one_port_eqFunction_1129,
    tmp_one_port_eqFunction_1130,
    tmp_one_port_eqFunction_1131,
    tmp_one_port_eqFunction_1132,
    tmp_one_port_eqFunction_1135,
    tmp_one_port_eqFunction_1136,
    tmp_one_port_eqFunction_1140,
    tmp_one_port_eqFunction_1142,
    tmp_one_port_eqFunction_1143,
    tmp_one_port_eqFunction_1144,
    tmp_one_port_eqFunction_1145,
    tmp_one_port_eqFunction_1148,
    tmp_one_port_eqFunction_1151,
    tmp_one_port_eqFunction_1152,
    tmp_one_port_eqFunction_1153,
    tmp_one_port_eqFunction_1156,
    tmp_one_port_eqFunction_1157,
    tmp_one_port_eqFunction_1158,
    tmp_one_port_eqFunction_1159,
    tmp_one_port_eqFunction_1160,
    tmp_one_port_eqFunction_1161,
    tmp_one_port_eqFunction_1163,
    tmp_one_port_eqFunction_1164,
    tmp_one_port_eqFunction_1167,
    tmp_one_port_eqFunction_1168,
    tmp_one_port_eqFunction_1172,
    tmp_one_port_eqFunction_1174,
    tmp_one_port_eqFunction_1175,
    tmp_one_port_eqFunction_1176,
    tmp_one_port_eqFunction_1177,
    tmp_one_port_eqFunction_1180,
    tmp_one_port_eqFunction_1183,
    tmp_one_port_eqFunction_1184,
    tmp_one_port_eqFunction_1185,
    tmp_one_port_eqFunction_1188,
    tmp_one_port_eqFunction_1189,
    tmp_one_port_eqFunction_1190,
    tmp_one_port_eqFunction_1191,
    tmp_one_port_eqFunction_1192,
    tmp_one_port_eqFunction_1193,
    tmp_one_port_eqFunction_1195,
    tmp_one_port_eqFunction_1212,
    tmp_one_port_eqFunction_1221,
    tmp_one_port_eqFunction_1222,
    tmp_one_port_eqFunction_1223,
    tmp_one_port_eqFunction_1224,
    tmp_one_port_eqFunction_1225,
    tmp_one_port_eqFunction_1226,
    tmp_one_port_eqFunction_1227,
    tmp_one_port_eqFunction_1228,
    tmp_one_port_eqFunction_1229,
    tmp_one_port_eqFunction_1230,
    tmp_one_port_eqFunction_1231,
    tmp_one_port_eqFunction_1232,
    tmp_one_port_eqFunction_1233,
    tmp_one_port_eqFunction_1234,
    tmp_one_port_eqFunction_1235,
    tmp_one_port_eqFunction_1236,
    tmp_one_port_eqFunction_1237,
    tmp_one_port_eqFunction_1238,
    tmp_one_port_eqFunction_1239,
    tmp_one_port_eqFunction_1240,
    tmp_one_port_eqFunction_1241,
    tmp_one_port_eqFunction_1242,
    tmp_one_port_eqFunction_1243,
    tmp_one_port_eqFunction_1244,
    tmp_one_port_eqFunction_1245,
    tmp_one_port_eqFunction_1246,
    tmp_one_port_eqFunction_1247,
    tmp_one_port_eqFunction_1248,
    tmp_one_port_eqFunction_1249,
    tmp_one_port_eqFunction_1250,
    tmp_one_port_eqFunction_1251,
    tmp_one_port_eqFunction_1252,
    tmp_one_port_eqFunction_1253,
    tmp_one_port_eqFunction_1254,
    tmp_one_port_eqFunction_1255,
    tmp_one_port_eqFunction_1256,
    tmp_one_port_eqFunction_1257,
    tmp_one_port_eqFunction_1258,
    tmp_one_port_eqFunction_1259,
    tmp_one_port_eqFunction_1260,
    tmp_one_port_eqFunction_1261,
    tmp_one_port_eqFunction_1262,
    tmp_one_port_eqFunction_1263,
    tmp_one_port_eqFunction_1264,
    tmp_one_port_eqFunction_1265,
    tmp_one_port_eqFunction_1266,
    tmp_one_port_eqFunction_1267,
    tmp_one_port_eqFunction_1268,
    tmp_one_port_eqFunction_1269,
    tmp_one_port_eqFunction_1270,
    tmp_one_port_eqFunction_1271,
    tmp_one_port_eqFunction_1272,
    tmp_one_port_eqFunction_1273,
    tmp_one_port_eqFunction_1279,
    tmp_one_port_eqFunction_1285,
    tmp_one_port_eqFunction_1286,
    tmp_one_port_eqFunction_1288,
    tmp_one_port_eqFunction_1290,
    tmp_one_port_eqFunction_1291,
    tmp_one_port_eqFunction_1293,
    tmp_one_port_eqFunction_1295,
    tmp_one_port_eqFunction_1296,
    tmp_one_port_eqFunction_1298,
    tmp_one_port_eqFunction_1300,
    tmp_one_port_eqFunction_1301,
    tmp_one_port_eqFunction_1303,
    tmp_one_port_eqFunction_1305,
    tmp_one_port_eqFunction_1306,
    tmp_one_port_eqFunction_1308,
    tmp_one_port_eqFunction_1310,
    tmp_one_port_eqFunction_1311,
    tmp_one_port_eqFunction_1313,
    tmp_one_port_eqFunction_1315,
    tmp_one_port_eqFunction_1318,
    tmp_one_port_eqFunction_1319,
    tmp_one_port_eqFunction_1323,
    tmp_one_port_eqFunction_1325,
    tmp_one_port_eqFunction_1326,
    tmp_one_port_eqFunction_1327,
    tmp_one_port_eqFunction_1328,
    tmp_one_port_eqFunction_1331,
    tmp_one_port_eqFunction_1334,
    tmp_one_port_eqFunction_1335,
    tmp_one_port_eqFunction_1336,
    tmp_one_port_eqFunction_1339,
    tmp_one_port_eqFunction_1340,
    tmp_one_port_eqFunction_1341,
    tmp_one_port_eqFunction_1342,
    tmp_one_port_eqFunction_1343,
    tmp_one_port_eqFunction_1344,
    tmp_one_port_eqFunction_1346,
    tmp_one_port_eqFunction_1347,
    tmp_one_port_eqFunction_1350,
    tmp_one_port_eqFunction_1351,
    tmp_one_port_eqFunction_1355,
    tmp_one_port_eqFunction_1357,
    tmp_one_port_eqFunction_1358,
    tmp_one_port_eqFunction_1359,
    tmp_one_port_eqFunction_1362,
    tmp_one_port_eqFunction_1365,
    tmp_one_port_eqFunction_1366,
    tmp_one_port_eqFunction_1367,
    tmp_one_port_eqFunction_1370,
    tmp_one_port_eqFunction_1371,
    tmp_one_port_eqFunction_1372,
    tmp_one_port_eqFunction_1373,
    tmp_one_port_eqFunction_1374,
    tmp_one_port_eqFunction_1375,
    tmp_one_port_eqFunction_1377,
    tmp_one_port_eqFunction_1381,
    tmp_one_port_eqFunction_1382,
    tmp_one_port_eqFunction_1383,
    tmp_one_port_eqFunction_1384,
    tmp_one_port_eqFunction_1385,
    tmp_one_port_eqFunction_1386,
    tmp_one_port_eqFunction_1387,
    tmp_one_port_eqFunction_1388,
    tmp_one_port_eqFunction_1389,
    tmp_one_port_eqFunction_1390,
    tmp_one_port_eqFunction_1391,
    tmp_one_port_eqFunction_1392,
    tmp_one_port_eqFunction_1393,
    tmp_one_port_eqFunction_1394,
    tmp_one_port_eqFunction_1395,
    tmp_one_port_eqFunction_1396,
    tmp_one_port_eqFunction_1397,
    tmp_one_port_eqFunction_1398,
    tmp_one_port_eqFunction_1399,
    tmp_one_port_eqFunction_1400,
    tmp_one_port_eqFunction_1401,
    tmp_one_port_eqFunction_1402,
    tmp_one_port_eqFunction_1403,
    tmp_one_port_eqFunction_1404,
    tmp_one_port_eqFunction_1405,
    tmp_one_port_eqFunction_1408,
    tmp_one_port_eqFunction_1409,
    tmp_one_port_eqFunction_1411,
    tmp_one_port_eqFunction_1413,
    tmp_one_port_eqFunction_1415,
    tmp_one_port_eqFunction_1417,
    tmp_one_port_eqFunction_1418,
    tmp_one_port_eqFunction_1419,
    tmp_one_port_eqFunction_1420,
    tmp_one_port_eqFunction_1421,
    tmp_one_port_eqFunction_1422,
    tmp_one_port_eqFunction_1425,
    tmp_one_port_eqFunction_1426,
    tmp_one_port_eqFunction_1430,
    tmp_one_port_eqFunction_1432,
    tmp_one_port_eqFunction_1433,
    tmp_one_port_eqFunction_1434,
    tmp_one_port_eqFunction_1435,
    tmp_one_port_eqFunction_1438,
    tmp_one_port_eqFunction_1441,
    tmp_one_port_eqFunction_1442,
    tmp_one_port_eqFunction_1443,
    tmp_one_port_eqFunction_1446,
    tmp_one_port_eqFunction_1447,
    tmp_one_port_eqFunction_1448,
    tmp_one_port_eqFunction_1449,
    tmp_one_port_eqFunction_1450,
    tmp_one_port_eqFunction_1451,
    tmp_one_port_eqFunction_1453,
    tmp_one_port_eqFunction_1454,
    tmp_one_port_eqFunction_1457,
    tmp_one_port_eqFunction_1458,
    tmp_one_port_eqFunction_1462,
    tmp_one_port_eqFunction_1464,
    tmp_one_port_eqFunction_1465,
    tmp_one_port_eqFunction_1466,
    tmp_one_port_eqFunction_1467,
    tmp_one_port_eqFunction_1470,
    tmp_one_port_eqFunction_1473,
    tmp_one_port_eqFunction_1474,
    tmp_one_port_eqFunction_1475,
    tmp_one_port_eqFunction_1478,
    tmp_one_port_eqFunction_1479,
    tmp_one_port_eqFunction_1480,
    tmp_one_port_eqFunction_1481,
    tmp_one_port_eqFunction_1482,
    tmp_one_port_eqFunction_1483,
    tmp_one_port_eqFunction_1485,
    tmp_one_port_eqFunction_1502,
    tmp_one_port_eqFunction_1503,
    tmp_one_port_eqFunction_1504,
    tmp_one_port_eqFunction_1505,
    tmp_one_port_eqFunction_1506,
    tmp_one_port_eqFunction_1507,
    tmp_one_port_eqFunction_1508,
    tmp_one_port_eqFunction_1509,
    tmp_one_port_eqFunction_1510,
    tmp_one_port_eqFunction_1511,
    tmp_one_port_eqFunction_1512,
    tmp_one_port_eqFunction_1513,
    tmp_one_port_eqFunction_1514,
    tmp_one_port_eqFunction_1515,
    tmp_one_port_eqFunction_1516,
    tmp_one_port_eqFunction_1517,
    tmp_one_port_eqFunction_1518,
    tmp_one_port_eqFunction_1519,
    tmp_one_port_eqFunction_1520,
    tmp_one_port_eqFunction_1521,
    tmp_one_port_eqFunction_1522,
    tmp_one_port_eqFunction_1523,
    tmp_one_port_eqFunction_1524,
    tmp_one_port_eqFunction_1525,
    tmp_one_port_eqFunction_1526,
    tmp_one_port_eqFunction_1527,
    tmp_one_port_eqFunction_1528,
    tmp_one_port_eqFunction_1529,
    tmp_one_port_eqFunction_1530,
    tmp_one_port_eqFunction_1531,
    tmp_one_port_eqFunction_1532,
    tmp_one_port_eqFunction_1533,
    tmp_one_port_eqFunction_1534,
    tmp_one_port_eqFunction_1535,
    tmp_one_port_eqFunction_1536,
    tmp_one_port_eqFunction_1537,
    tmp_one_port_eqFunction_1538,
    tmp_one_port_eqFunction_1539,
    tmp_one_port_eqFunction_1540,
    tmp_one_port_eqFunction_1541,
    tmp_one_port_eqFunction_1542,
    tmp_one_port_eqFunction_1543,
    tmp_one_port_eqFunction_1544,
    tmp_one_port_eqFunction_1545,
    tmp_one_port_eqFunction_1546,
    tmp_one_port_eqFunction_1547,
    tmp_one_port_eqFunction_1548,
    tmp_one_port_eqFunction_1549,
    tmp_one_port_eqFunction_1550
  };
  
  for (int id = 0; id < 467; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif