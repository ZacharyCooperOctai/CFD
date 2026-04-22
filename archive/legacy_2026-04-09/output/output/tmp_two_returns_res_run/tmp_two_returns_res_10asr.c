/* Asserts */
#include "tmp_two_returns_res_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 3728
type: ALGORITHM

  assert(weaDat.weaBus.TDryBul >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.weaBus.TDryBul, has value: " + String(weaDat.weaBus.TDryBul, "g"));
*/
void tmp_two_returns_res_eqFunction_3728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3728};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,76,"Variable violating min constraint: 0.0 <= weaDat.weaBus.TDryBul, has value: ");
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  static int tmp4 = 0;
  if(!tmp4)
  {
    tmp0 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* weaDat.weaBus.TDryBul variable */),0.0);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* weaDat.weaBus.TDryBul variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3 = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      {
        const char* assert_cond = "(weaDat.weaBus.TDryBul >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",737,3,742,47,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",737,3,742,47,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3));
        }
      }
      tmp4 = 1;
    }
  }
  threadData->lastEquationSolved = 3728;
}

/*
equation index: 3729
type: ALGORITHM

  assert(weaDat.weaBus.relHum >= 0.0 and weaDat.weaBus.relHum <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.weaBus.relHum <= 1.0, has value: " + String(weaDat.weaBus.relHum, "g"));
*/
void tmp_two_returns_res_eqFunction_3729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3729};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,86,"Variable violating min/max constraint: 0.0 <= weaDat.weaBus.relHum <= 1.0, has value: ");
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  static int tmp10 = 0;
  if(!tmp10)
  {
    tmp5 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* weaDat.weaBus.relHum variable */),0.0);
    tmp6 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* weaDat.weaBus.relHum variable */),1.0);
    if(!(tmp5 && tmp6))
    {
      tmp8 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* weaDat.weaBus.relHum variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta9 = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        const char* assert_cond = "(weaDat.weaBus.relHum >= 0.0 and weaDat.weaBus.relHum <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",757,3,761,29,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta9));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",757,3,761,29,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta9));
        }
      }
      tmp10 = 1;
    }
  }
  threadData->lastEquationSolved = 3729;
}

/*
equation index: 3730
type: ALGORITHM

  assert(weaDat.weaBus.HHorIR >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.weaBus.HHorIR, has value: " + String(weaDat.weaBus.HHorIR, "g"));
*/
void tmp_two_returns_res_eqFunction_3730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3730};
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,75,"Variable violating min constraint: 0.0 <= weaDat.weaBus.HHorIR, has value: ");
  modelica_string tmp13;
  modelica_metatype tmpMeta14;
  static int tmp15 = 0;
  if(!tmp15)
  {
    tmp11 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* weaDat.weaBus.HHorIR variable */),0.0);
    if(!tmp11)
    {
      tmp13 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* weaDat.weaBus.HHorIR variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta14 = stringAppend(MMC_REFSTRINGLIT(tmp12),tmp13);
      {
        const char* assert_cond = "(weaDat.weaBus.HHorIR >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",790,3,795,47,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta14));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",790,3,795,47,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta14));
        }
      }
      tmp15 = 1;
    }
  }
  threadData->lastEquationSolved = 3730;
}

/*
equation index: 3731
type: ALGORITHM

  assert(weaDat.weaBus.nOpa >= 0.0 and weaDat.weaBus.nOpa <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.weaBus.nOpa <= 1.0, has value: " + String(weaDat.weaBus.nOpa, "g"));
*/
void tmp_two_returns_res_eqFunction_3731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3731};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  static const MMC_DEFSTRINGLIT(tmp18,84,"Variable violating min/max constraint: 0.0 <= weaDat.weaBus.nOpa <= 1.0, has value: ");
  modelica_string tmp19;
  modelica_metatype tmpMeta20;
  static int tmp21 = 0;
  if(!tmp21)
  {
    tmp16 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* weaDat.weaBus.nOpa variable */),0.0);
    tmp17 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* weaDat.weaBus.nOpa variable */),1.0);
    if(!(tmp16 && tmp17))
    {
      tmp19 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* weaDat.weaBus.nOpa variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta20 = stringAppend(MMC_REFSTRINGLIT(tmp18),tmp19);
      {
        const char* assert_cond = "(weaDat.weaBus.nOpa >= 0.0 and weaDat.weaBus.nOpa <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",822,3,826,29,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta20));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",822,3,826,29,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta20));
        }
      }
      tmp21 = 1;
    }
  }
  threadData->lastEquationSolved = 3731;
}

/*
equation index: 3732
type: ALGORITHM

  assert(weaDat.weaBus.TWetBul >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.weaBus.TWetBul, has value: " + String(weaDat.weaBus.TWetBul, "g"));
*/
void tmp_two_returns_res_eqFunction_3732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3732};
  modelica_boolean tmp22;
  static const MMC_DEFSTRINGLIT(tmp23,76,"Variable violating min constraint: 0.0 <= weaDat.weaBus.TWetBul, has value: ");
  modelica_string tmp24;
  modelica_metatype tmpMeta25;
  static int tmp26 = 0;
  if(!tmp26)
  {
    tmp22 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* weaDat.weaBus.TWetBul variable */),0.0);
    if(!tmp22)
    {
      tmp24 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* weaDat.weaBus.TWetBul variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta25 = stringAppend(MMC_REFSTRINGLIT(tmp23),tmp24);
      {
        const char* assert_cond = "(weaDat.weaBus.TWetBul >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",750,3,755,29,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta25));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",750,3,755,29,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta25));
        }
      }
      tmp26 = 1;
    }
  }
  threadData->lastEquationSolved = 3732;
}

/*
equation index: 3733
type: ALGORITHM

  assert(weaDat.TBlaSkyCom.TDewPoiK >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.TBlaSkyCom.TDewPoiK, has value: " + String(weaDat.TBlaSkyCom.TDewPoiK, "g"));
*/
void tmp_two_returns_res_eqFunction_3733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3733};
  modelica_boolean tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,81,"Variable violating min constraint: 0.0 <= weaDat.TBlaSkyCom.TDewPoiK, has value: ");
  modelica_string tmp29;
  modelica_metatype tmpMeta30;
  static int tmp31 = 0;
  if(!tmp31)
  {
    tmp27 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* weaDat.TBlaSkyCom.TDewPoiK variable */),0.0);
    if(!tmp27)
    {
      tmp29 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* weaDat.TBlaSkyCom.TDewPoiK variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta30 = stringAppend(MMC_REFSTRINGLIT(tmp28),tmp29);
      {
        const char* assert_cond = "(weaDat.TBlaSkyCom.TDewPoiK >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/SkyTemperature/BlackBody.mo",34,3,34,64,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta30));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/SkyTemperature/BlackBody.mo",34,3,34,64,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta30));
        }
      }
      tmp31 = 1;
    }
  }
  threadData->lastEquationSolved = 3733;
}

/*
equation index: 3734
type: ALGORITHM

  assert(weaDat.TBlaSkyCom.nOpa10 >= 0.0 and weaDat.TBlaSkyCom.nOpa10 <= 10.0, "Variable violating min/max constraint: 0.0 <= weaDat.TBlaSkyCom.nOpa10 <= 10.0, has value: " + String(weaDat.TBlaSkyCom.nOpa10, "g"));
*/
void tmp_two_returns_res_eqFunction_3734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3734};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,91,"Variable violating min/max constraint: 0.0 <= weaDat.TBlaSkyCom.nOpa10 <= 10.0, has value: ");
  modelica_string tmp35;
  modelica_metatype tmpMeta36;
  static int tmp37 = 0;
  if(!tmp37)
  {
    tmp32 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* weaDat.TBlaSkyCom.nOpa10 variable */),0.0);
    tmp33 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* weaDat.TBlaSkyCom.nOpa10 variable */),10.0);
    if(!(tmp32 && tmp33))
    {
      tmp35 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* weaDat.TBlaSkyCom.nOpa10 variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta36 = stringAppend(MMC_REFSTRINGLIT(tmp34),tmp35);
      {
        const char* assert_cond = "(weaDat.TBlaSkyCom.nOpa10 >= 0.0 and weaDat.TBlaSkyCom.nOpa10 <= 10.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/SkyTemperature/BlackBody.mo",36,3,36,59,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta36));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/SkyTemperature/BlackBody.mo",36,3,36,59,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta36));
        }
      }
      tmp37 = 1;
    }
  }
  threadData->lastEquationSolved = 3734;
}

/*
equation index: 3735
type: ALGORITHM

  assert(weaDat.tWetBul_TDryBulXi.XiDryBul >= 0.0 and weaDat.tWetBul_TDryBulXi.XiDryBul <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.tWetBul_TDryBulXi.XiDryBul <= 1.0, has value: " + String(weaDat.tWetBul_TDryBulXi.XiDryBul, "g"));
*/
void tmp_two_returns_res_eqFunction_3735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3735};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,99,"Variable violating min/max constraint: 0.0 <= weaDat.tWetBul_TDryBulXi.XiDryBul <= 1.0, has value: ");
  modelica_string tmp41;
  modelica_metatype tmpMeta42;
  static int tmp43 = 0;
  if(!tmp43)
  {
    tmp38 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */),0.0);
    tmp39 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */),1.0);
    if(!(tmp38 && tmp39))
    {
      tmp41 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta42 = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        const char* assert_cond = "(weaDat.tWetBul_TDryBulXi.XiDryBul >= 0.0 and weaDat.tWetBul_TDryBulXi.XiDryBul <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",38,3,39,50,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta42));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",38,3,39,50,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta42));
        }
      }
      tmp43 = 1;
    }
  }
  threadData->lastEquationSolved = 3735;
}

/*
equation index: 3736
type: ALGORITHM

  assert(weaDat.tWetBul_TDryBulXi.XiSat >= 0.0 and weaDat.tWetBul_TDryBulXi.XiSat <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.tWetBul_TDryBulXi.XiSat <= 1.0, has value: " + String(weaDat.tWetBul_TDryBulXi.XiSat, "g"));
*/
void tmp_two_returns_res_eqFunction_3736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3736};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,96,"Variable violating min/max constraint: 0.0 <= weaDat.tWetBul_TDryBulXi.XiSat <= 1.0, has value: ");
  modelica_string tmp47;
  modelica_metatype tmpMeta48;
  static int tmp49 = 0;
  if(!tmp49)
  {
    tmp44 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */),0.0);
    tmp45 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */),1.0);
    if(!(tmp44 && tmp45))
    {
      tmp47 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta48 = stringAppend(MMC_REFSTRINGLIT(tmp46),tmp47);
      {
        const char* assert_cond = "(weaDat.tWetBul_TDryBulXi.XiSat >= 0.0 and weaDat.tWetBul_TDryBulXi.XiSat <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",40,3,41,46,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta48));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",40,3,41,46,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta48));
        }
      }
      tmp49 = 1;
    }
  }
  threadData->lastEquationSolved = 3736;
}

/*
equation index: 3737
type: ALGORITHM

  assert(weaDat.tWetBul_TDryBulXi.XiSatRefIn >= 0.0 and weaDat.tWetBul_TDryBulXi.XiSatRefIn <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.tWetBul_TDryBulXi.XiSatRefIn <= 1.0, has value: " + String(weaDat.tWetBul_TDryBulXi.XiSatRefIn, "g"));
*/
void tmp_two_returns_res_eqFunction_3737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3737};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,101,"Variable violating min/max constraint: 0.0 <= weaDat.tWetBul_TDryBulXi.XiSatRefIn <= 1.0, has value: ");
  modelica_string tmp53;
  modelica_metatype tmpMeta54;
  static int tmp55 = 0;
  if(!tmp55)
  {
    tmp50 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */),0.0);
    tmp51 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */),1.0);
    if(!(tmp50 && tmp51))
    {
      tmp53 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta54 = stringAppend(MMC_REFSTRINGLIT(tmp52),tmp53);
      {
        const char* assert_cond = "(weaDat.tWetBul_TDryBulXi.XiSatRefIn >= 0.0 and weaDat.tWetBul_TDryBulXi.XiSatRefIn <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",42,3,43,82,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta54));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",42,3,43,82,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta54));
        }
      }
      tmp55 = 1;
    }
  }
  threadData->lastEquationSolved = 3737;
}

/*
equation index: 3694
type: ALGORITHM

  assert(roo.ports[1].h_outflow >= -1e10 and roo.ports[1].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= roo.ports[1].h_outflow <= 1e10, has value: " + String(roo.ports[1].h_outflow, "g"));
*/
void tmp_two_returns_res_eqFunction_3694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3694};
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  static const MMC_DEFSTRINGLIT(tmp58,91,"Variable violating min/max constraint: -1e10 <= roo.ports[1].h_outflow <= 1e10, has value: ");
  modelica_string tmp59;
  modelica_metatype tmpMeta60;
  static int tmp61 = 0;
  if(!tmp61)
  {
    tmp56 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* roo.ports[1].h_outflow variable */),-1e10);
    tmp57 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* roo.ports[1].h_outflow variable */),1e10);
    if(!(tmp56 && tmp57))
    {
      tmp59 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* roo.ports[1].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta60 = stringAppend(MMC_REFSTRINGLIT(tmp58),tmp59);
      {
        const char* assert_cond = "(roo.ports[1].h_outflow >= -1e10 and roo.ports[1].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta60));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta60));
        }
      }
      tmp61 = 1;
    }
  }
  threadData->lastEquationSolved = 3694;
}

/*
equation index: 3695
type: ALGORITHM

  assert(roo.ports[2].h_outflow >= -1e10 and roo.ports[2].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= roo.ports[2].h_outflow <= 1e10, has value: " + String(roo.ports[2].h_outflow, "g"));
*/
void tmp_two_returns_res_eqFunction_3695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3695};
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,91,"Variable violating min/max constraint: -1e10 <= roo.ports[2].h_outflow <= 1e10, has value: ");
  modelica_string tmp65;
  modelica_metatype tmpMeta66;
  static int tmp67 = 0;
  if(!tmp67)
  {
    tmp62 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* roo.ports[2].h_outflow variable */),-1e10);
    tmp63 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* roo.ports[2].h_outflow variable */),1e10);
    if(!(tmp62 && tmp63))
    {
      tmp65 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* roo.ports[2].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta66 = stringAppend(MMC_REFSTRINGLIT(tmp64),tmp65);
      {
        const char* assert_cond = "(roo.ports[2].h_outflow >= -1e10 and roo.ports[2].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta66));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta66));
        }
      }
      tmp67 = 1;
    }
  }
  threadData->lastEquationSolved = 3695;
}

/*
equation index: 3696
type: ALGORITHM

  assert(roo.ports[3].h_outflow >= -1e10 and roo.ports[3].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= roo.ports[3].h_outflow <= 1e10, has value: " + String(roo.ports[3].h_outflow, "g"));
*/
void tmp_two_returns_res_eqFunction_3696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3696};
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  static const MMC_DEFSTRINGLIT(tmp70,91,"Variable violating min/max constraint: -1e10 <= roo.ports[3].h_outflow <= 1e10, has value: ");
  modelica_string tmp71;
  modelica_metatype tmpMeta72;
  static int tmp73 = 0;
  if(!tmp73)
  {
    tmp68 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* roo.ports[3].h_outflow variable */),-1e10);
    tmp69 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* roo.ports[3].h_outflow variable */),1e10);
    if(!(tmp68 && tmp69))
    {
      tmp71 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* roo.ports[3].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta72 = stringAppend(MMC_REFSTRINGLIT(tmp70),tmp71);
      {
        const char* assert_cond = "(roo.ports[3].h_outflow >= -1e10 and roo.ports[3].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta72));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta72));
        }
      }
      tmp73 = 1;
    }
  }
  threadData->lastEquationSolved = 3696;
}

/*
equation index: 3697
type: ALGORITHM

  assert(roo.ports[4].h_outflow >= -1e10 and roo.ports[4].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= roo.ports[4].h_outflow <= 1e10, has value: " + String(roo.ports[4].h_outflow, "g"));
*/
void tmp_two_returns_res_eqFunction_3697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3697};
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  static const MMC_DEFSTRINGLIT(tmp76,91,"Variable violating min/max constraint: -1e10 <= roo.ports[4].h_outflow <= 1e10, has value: ");
  modelica_string tmp77;
  modelica_metatype tmpMeta78;
  static int tmp79 = 0;
  if(!tmp79)
  {
    tmp74 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* roo.ports[4].h_outflow variable */),-1e10);
    tmp75 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* roo.ports[4].h_outflow variable */),1e10);
    if(!(tmp74 && tmp75))
    {
      tmp77 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* roo.ports[4].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta78 = stringAppend(MMC_REFSTRINGLIT(tmp76),tmp77);
      {
        const char* assert_cond = "(roo.ports[4].h_outflow >= -1e10 and roo.ports[4].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta78));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta78));
        }
      }
      tmp79 = 1;
    }
  }
  threadData->lastEquationSolved = 3697;
}

/*
equation index: 3698
type: ALGORITHM

  assert(roo.heaPorRad.T >= 0.0, "Variable violating min constraint: 0.0 <= roo.heaPorRad.T, has value: " + String(roo.heaPorRad.T, "g"));
*/
void tmp_two_returns_res_eqFunction_3698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3698};
  modelica_boolean tmp80;
  static const MMC_DEFSTRINGLIT(tmp81,70,"Variable violating min constraint: 0.0 <= roo.heaPorRad.T, has value: ");
  modelica_string tmp82;
  modelica_metatype tmpMeta83;
  static int tmp84 = 0;
  if(!tmp84)
  {
    tmp80 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* roo.heaPorRad.T variable */),0.0);
    if(!tmp80)
    {
      tmp82 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* roo.heaPorRad.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta83 = stringAppend(MMC_REFSTRINGLIT(tmp81),tmp82);
      {
        const char* assert_cond = "(roo.heaPorRad.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta83));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta83));
        }
      }
      tmp84 = 1;
    }
  }
  threadData->lastEquationSolved = 3698;
}

/*
equation index: 3699
type: ALGORITHM

  assert(roo.air.cfd.u[12] >= -1e5 and roo.air.cfd.u[12] <= 0.0, "Variable violating min/max constraint: -1e5 <= roo.air.cfd.u[12] <= 0.0, has value: " + String(roo.air.cfd.u[12], "g"));
*/
void tmp_two_returns_res_eqFunction_3699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3699};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  static const MMC_DEFSTRINGLIT(tmp87,84,"Variable violating min/max constraint: -1e5 <= roo.air.cfd.u[12] <= 0.0, has value: ");
  modelica_string tmp88;
  modelica_metatype tmpMeta89;
  static int tmp90 = 0;
  if(!tmp90)
  {
    tmp85 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.air.cfd.u[12] variable */),-1e5);
    tmp86 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.air.cfd.u[12] variable */),0.0);
    if(!(tmp85 && tmp86))
    {
      tmp88 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.air.cfd.u[12] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta89 = stringAppend(MMC_REFSTRINGLIT(tmp87),tmp88);
      {
        const char* assert_cond = "(roo.air.cfd.u[12] >= -1e5 and roo.air.cfd.u[12] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta89));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta89));
        }
      }
      tmp90 = 1;
    }
  }
  threadData->lastEquationSolved = 3699;
}

/*
equation index: 3700
type: ALGORITHM

  assert(roo.air.cfd.u[13] >= -1e5 and roo.air.cfd.u[13] <= 0.0, "Variable violating min/max constraint: -1e5 <= roo.air.cfd.u[13] <= 0.0, has value: " + String(roo.air.cfd.u[13], "g"));
*/
void tmp_two_returns_res_eqFunction_3700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3700};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  static const MMC_DEFSTRINGLIT(tmp93,84,"Variable violating min/max constraint: -1e5 <= roo.air.cfd.u[13] <= 0.0, has value: ");
  modelica_string tmp94;
  modelica_metatype tmpMeta95;
  static int tmp96 = 0;
  if(!tmp96)
  {
    tmp91 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.air.cfd.u[13] variable */),-1e5);
    tmp92 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.air.cfd.u[13] variable */),0.0);
    if(!(tmp91 && tmp92))
    {
      tmp94 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.air.cfd.u[13] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta95 = stringAppend(MMC_REFSTRINGLIT(tmp93),tmp94);
      {
        const char* assert_cond = "(roo.air.cfd.u[13] >= -1e5 and roo.air.cfd.u[13] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta95));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta95));
        }
      }
      tmp96 = 1;
    }
  }
  threadData->lastEquationSolved = 3700;
}

/*
equation index: 3701
type: ALGORITHM

  assert(roo.air.cfd.u[16] >= 200.0 and roo.air.cfd.u[16] <= 373.15, "Variable violating min/max constraint: 200.0 <= roo.air.cfd.u[16] <= 373.15, has value: " + String(roo.air.cfd.u[16], "g"));
*/
void tmp_two_returns_res_eqFunction_3701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3701};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  static const MMC_DEFSTRINGLIT(tmp99,88,"Variable violating min/max constraint: 200.0 <= roo.air.cfd.u[16] <= 373.15, has value: ");
  modelica_string tmp100;
  modelica_metatype tmpMeta101;
  static int tmp102 = 0;
  if(!tmp102)
  {
    tmp97 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.air.cfd.u[16] variable */),200.0);
    tmp98 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.air.cfd.u[16] variable */),373.15);
    if(!(tmp97 && tmp98))
    {
      tmp100 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.air.cfd.u[16] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta101 = stringAppend(MMC_REFSTRINGLIT(tmp99),tmp100);
      {
        const char* assert_cond = "(roo.air.cfd.u[16] >= 200.0 and roo.air.cfd.u[16] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta101));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta101));
        }
      }
      tmp102 = 1;
    }
  }
  threadData->lastEquationSolved = 3701;
}

/*
equation index: 3702
type: ALGORITHM

  assert(roo.air.cfd.u[17] >= 200.0 and roo.air.cfd.u[17] <= 373.15, "Variable violating min/max constraint: 200.0 <= roo.air.cfd.u[17] <= 373.15, has value: " + String(roo.air.cfd.u[17], "g"));
*/
void tmp_two_returns_res_eqFunction_3702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3702};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  static const MMC_DEFSTRINGLIT(tmp105,88,"Variable violating min/max constraint: 200.0 <= roo.air.cfd.u[17] <= 373.15, has value: ");
  modelica_string tmp106;
  modelica_metatype tmpMeta107;
  static int tmp108 = 0;
  if(!tmp108)
  {
    tmp103 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.air.cfd.u[17] variable */),200.0);
    tmp104 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.air.cfd.u[17] variable */),373.15);
    if(!(tmp103 && tmp104))
    {
      tmp106 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.air.cfd.u[17] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta107 = stringAppend(MMC_REFSTRINGLIT(tmp105),tmp106);
      {
        const char* assert_cond = "(roo.air.cfd.u[17] >= 200.0 and roo.air.cfd.u[17] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta107));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta107));
        }
      }
      tmp108 = 1;
    }
  }
  threadData->lastEquationSolved = 3702;
}

/*
equation index: 3703
type: ALGORITHM

  assert(roo.air.cfd.u[20] >= 0.0 and roo.air.cfd.u[20] <= 1.0, "Variable violating min/max constraint: 0.0 <= roo.air.cfd.u[20] <= 1.0, has value: " + String(roo.air.cfd.u[20], "g"));
*/
void tmp_two_returns_res_eqFunction_3703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3703};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  static const MMC_DEFSTRINGLIT(tmp111,83,"Variable violating min/max constraint: 0.0 <= roo.air.cfd.u[20] <= 1.0, has value: ");
  modelica_string tmp112;
  modelica_metatype tmpMeta113;
  static int tmp114 = 0;
  if(!tmp114)
  {
    tmp109 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.air.cfd.u[20] variable */),0.0);
    tmp110 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.air.cfd.u[20] variable */),1.0);
    if(!(tmp109 && tmp110))
    {
      tmp112 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.air.cfd.u[20] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta113 = stringAppend(MMC_REFSTRINGLIT(tmp111),tmp112);
      {
        const char* assert_cond = "(roo.air.cfd.u[20] >= 0.0 and roo.air.cfd.u[20] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta113));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta113));
        }
      }
      tmp114 = 1;
    }
  }
  threadData->lastEquationSolved = 3703;
}

/*
equation index: 3704
type: ALGORITHM

  assert(roo.air.cfd.u[21] >= 0.0 and roo.air.cfd.u[21] <= 1.0, "Variable violating min/max constraint: 0.0 <= roo.air.cfd.u[21] <= 1.0, has value: " + String(roo.air.cfd.u[21], "g"));
*/
void tmp_two_returns_res_eqFunction_3704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3704};
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  static const MMC_DEFSTRINGLIT(tmp117,83,"Variable violating min/max constraint: 0.0 <= roo.air.cfd.u[21] <= 1.0, has value: ");
  modelica_string tmp118;
  modelica_metatype tmpMeta119;
  static int tmp120 = 0;
  if(!tmp120)
  {
    tmp115 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.air.cfd.u[21] variable */),0.0);
    tmp116 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.air.cfd.u[21] variable */),1.0);
    if(!(tmp115 && tmp116))
    {
      tmp118 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.air.cfd.u[21] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta119 = stringAppend(MMC_REFSTRINGLIT(tmp117),tmp118);
      {
        const char* assert_cond = "(roo.air.cfd.u[21] >= 0.0 and roo.air.cfd.u[21] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta119));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta119));
        }
      }
      tmp120 = 1;
    }
  }
  threadData->lastEquationSolved = 3704;
}

/*
equation index: 3705
type: ALGORITHM

  assert(roo.air.cfd.y[1] >= 0.0, "Variable violating min constraint: 0.0 <= roo.air.cfd.y[1], has value: " + String(roo.air.cfd.y[1], "g"));
*/
void tmp_two_returns_res_eqFunction_3705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3705};
  modelica_boolean tmp121;
  static const MMC_DEFSTRINGLIT(tmp122,71,"Variable violating min constraint: 0.0 <= roo.air.cfd.y[1], has value: ");
  modelica_string tmp123;
  modelica_metatype tmpMeta124;
  static int tmp125 = 0;
  if(!tmp125)
  {
    tmp121 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* roo.air.cfd.y[1] DISCRETE */),0.0);
    if(!tmp121)
    {
      tmp123 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* roo.air.cfd.y[1] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta124 = stringAppend(MMC_REFSTRINGLIT(tmp122),tmp123);
      {
        const char* assert_cond = "(roo.air.cfd.y[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta124));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta124));
        }
      }
      tmp125 = 1;
    }
  }
  threadData->lastEquationSolved = 3705;
}

/*
equation index: 3706
type: ALGORITHM

  assert(roo.air.cfd.y[2] >= 0.0, "Variable violating min constraint: 0.0 <= roo.air.cfd.y[2], has value: " + String(roo.air.cfd.y[2], "g"));
*/
void tmp_two_returns_res_eqFunction_3706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3706};
  modelica_boolean tmp126;
  static const MMC_DEFSTRINGLIT(tmp127,71,"Variable violating min constraint: 0.0 <= roo.air.cfd.y[2], has value: ");
  modelica_string tmp128;
  modelica_metatype tmpMeta129;
  static int tmp130 = 0;
  if(!tmp130)
  {
    tmp126 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* roo.air.cfd.y[2] DISCRETE */),0.0);
    if(!tmp126)
    {
      tmp128 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* roo.air.cfd.y[2] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta129 = stringAppend(MMC_REFSTRINGLIT(tmp127),tmp128);
      {
        const char* assert_cond = "(roo.air.cfd.y[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta129));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta129));
        }
      }
      tmp130 = 1;
    }
  }
  threadData->lastEquationSolved = 3706;
}

/*
equation index: 3707
type: ALGORITHM

  assert(roo.air.cfd.y[3] >= 0.0, "Variable violating min constraint: 0.0 <= roo.air.cfd.y[3], has value: " + String(roo.air.cfd.y[3], "g"));
*/
void tmp_two_returns_res_eqFunction_3707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3707};
  modelica_boolean tmp131;
  static const MMC_DEFSTRINGLIT(tmp132,71,"Variable violating min constraint: 0.0 <= roo.air.cfd.y[3], has value: ");
  modelica_string tmp133;
  modelica_metatype tmpMeta134;
  static int tmp135 = 0;
  if(!tmp135)
  {
    tmp131 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* roo.air.cfd.y[3] DISCRETE */),0.0);
    if(!tmp131)
    {
      tmp133 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* roo.air.cfd.y[3] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta134 = stringAppend(MMC_REFSTRINGLIT(tmp132),tmp133);
      {
        const char* assert_cond = "(roo.air.cfd.y[3] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta134));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta134));
        }
      }
      tmp135 = 1;
    }
  }
  threadData->lastEquationSolved = 3707;
}

/*
equation index: 3708
type: ALGORITHM

  assert(roo.air.cfd.y[4] >= 0.0, "Variable violating min constraint: 0.0 <= roo.air.cfd.y[4], has value: " + String(roo.air.cfd.y[4], "g"));
*/
void tmp_two_returns_res_eqFunction_3708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3708};
  modelica_boolean tmp136;
  static const MMC_DEFSTRINGLIT(tmp137,71,"Variable violating min constraint: 0.0 <= roo.air.cfd.y[4], has value: ");
  modelica_string tmp138;
  modelica_metatype tmpMeta139;
  static int tmp140 = 0;
  if(!tmp140)
  {
    tmp136 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* roo.air.cfd.y[4] DISCRETE */),0.0);
    if(!tmp136)
    {
      tmp138 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* roo.air.cfd.y[4] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta139 = stringAppend(MMC_REFSTRINGLIT(tmp137),tmp138);
      {
        const char* assert_cond = "(roo.air.cfd.y[4] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta139));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta139));
        }
      }
      tmp140 = 1;
    }
  }
  threadData->lastEquationSolved = 3708;
}

/*
equation index: 3709
type: ALGORITHM

  assert(roo.air.cfd.y[5] >= 0.0, "Variable violating min constraint: 0.0 <= roo.air.cfd.y[5], has value: " + String(roo.air.cfd.y[5], "g"));
*/
void tmp_two_returns_res_eqFunction_3709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3709};
  modelica_boolean tmp141;
  static const MMC_DEFSTRINGLIT(tmp142,71,"Variable violating min constraint: 0.0 <= roo.air.cfd.y[5], has value: ");
  modelica_string tmp143;
  modelica_metatype tmpMeta144;
  static int tmp145 = 0;
  if(!tmp145)
  {
    tmp141 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* roo.air.cfd.y[5] DISCRETE */),0.0);
    if(!tmp141)
    {
      tmp143 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* roo.air.cfd.y[5] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta144 = stringAppend(MMC_REFSTRINGLIT(tmp142),tmp143);
      {
        const char* assert_cond = "(roo.air.cfd.y[5] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta144));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta144));
        }
      }
      tmp145 = 1;
    }
  }
  threadData->lastEquationSolved = 3709;
}

/*
equation index: 3710
type: ALGORITHM

  assert(roo.air.cfd.y[6] >= 0.0, "Variable violating min constraint: 0.0 <= roo.air.cfd.y[6], has value: " + String(roo.air.cfd.y[6], "g"));
*/
void tmp_two_returns_res_eqFunction_3710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3710};
  modelica_boolean tmp146;
  static const MMC_DEFSTRINGLIT(tmp147,71,"Variable violating min constraint: 0.0 <= roo.air.cfd.y[6], has value: ");
  modelica_string tmp148;
  modelica_metatype tmpMeta149;
  static int tmp150 = 0;
  if(!tmp150)
  {
    tmp146 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* roo.air.cfd.y[6] DISCRETE */),0.0);
    if(!tmp146)
    {
      tmp148 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* roo.air.cfd.y[6] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta149 = stringAppend(MMC_REFSTRINGLIT(tmp147),tmp148);
      {
        const char* assert_cond = "(roo.air.cfd.y[6] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta149));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta149));
        }
      }
      tmp150 = 1;
    }
  }
  threadData->lastEquationSolved = 3710;
}

/*
equation index: 3711
type: ALGORITHM

  assert(roo.air.cfd.y[7] >= 0.0, "Variable violating min constraint: 0.0 <= roo.air.cfd.y[7], has value: " + String(roo.air.cfd.y[7], "g"));
*/
void tmp_two_returns_res_eqFunction_3711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3711};
  modelica_boolean tmp151;
  static const MMC_DEFSTRINGLIT(tmp152,71,"Variable violating min constraint: 0.0 <= roo.air.cfd.y[7], has value: ");
  modelica_string tmp153;
  modelica_metatype tmpMeta154;
  static int tmp155 = 0;
  if(!tmp155)
  {
    tmp151 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* roo.air.cfd.y[7] DISCRETE */),0.0);
    if(!tmp151)
    {
      tmp153 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* roo.air.cfd.y[7] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta154 = stringAppend(MMC_REFSTRINGLIT(tmp152),tmp153);
      {
        const char* assert_cond = "(roo.air.cfd.y[7] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta154));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta154));
        }
      }
      tmp155 = 1;
    }
  }
  threadData->lastEquationSolved = 3711;
}

/*
equation index: 3712
type: ALGORITHM

  assert(roo.air.cfd.y[12] >= 0.0 and roo.air.cfd.y[12] <= 1.0, "Variable violating min/max constraint: 0.0 <= roo.air.cfd.y[12] <= 1.0, has value: " + String(roo.air.cfd.y[12], "g"));
*/
void tmp_two_returns_res_eqFunction_3712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3712};
  modelica_boolean tmp156;
  modelica_boolean tmp157;
  static const MMC_DEFSTRINGLIT(tmp158,83,"Variable violating min/max constraint: 0.0 <= roo.air.cfd.y[12] <= 1.0, has value: ");
  modelica_string tmp159;
  modelica_metatype tmpMeta160;
  static int tmp161 = 0;
  if(!tmp161)
  {
    tmp156 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* roo.air.cfd.y[12] DISCRETE */),0.0);
    tmp157 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* roo.air.cfd.y[12] DISCRETE */),1.0);
    if(!(tmp156 && tmp157))
    {
      tmp159 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* roo.air.cfd.y[12] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta160 = stringAppend(MMC_REFSTRINGLIT(tmp158),tmp159);
      {
        const char* assert_cond = "(roo.air.cfd.y[12] >= 0.0 and roo.air.cfd.y[12] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta160));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta160));
        }
      }
      tmp161 = 1;
    }
  }
  threadData->lastEquationSolved = 3712;
}

/*
equation index: 3713
type: ALGORITHM

  assert(roo.air.cfd.y[13] >= 0.0 and roo.air.cfd.y[13] <= 1.0, "Variable violating min/max constraint: 0.0 <= roo.air.cfd.y[13] <= 1.0, has value: " + String(roo.air.cfd.y[13], "g"));
*/
void tmp_two_returns_res_eqFunction_3713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3713};
  modelica_boolean tmp162;
  modelica_boolean tmp163;
  static const MMC_DEFSTRINGLIT(tmp164,83,"Variable violating min/max constraint: 0.0 <= roo.air.cfd.y[13] <= 1.0, has value: ");
  modelica_string tmp165;
  modelica_metatype tmpMeta166;
  static int tmp167 = 0;
  if(!tmp167)
  {
    tmp162 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* roo.air.cfd.y[13] DISCRETE */),0.0);
    tmp163 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* roo.air.cfd.y[13] DISCRETE */),1.0);
    if(!(tmp162 && tmp163))
    {
      tmp165 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* roo.air.cfd.y[13] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta166 = stringAppend(MMC_REFSTRINGLIT(tmp164),tmp165);
      {
        const char* assert_cond = "(roo.air.cfd.y[13] >= 0.0 and roo.air.cfd.y[13] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta166));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta166));
        }
      }
      tmp167 = 1;
    }
  }
  threadData->lastEquationSolved = 3713;
}

/*
equation index: 3714
type: ALGORITHM

  assert(roo.air.fluInt.p >= 8e4 and roo.air.fluInt.p <= 1.2e5, "Variable violating min/max constraint: 8e4 <= roo.air.fluInt.p <= 1.2e5, has value: " + String(roo.air.fluInt.p, "g"));
*/
void tmp_two_returns_res_eqFunction_3714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3714};
  modelica_boolean tmp168;
  modelica_boolean tmp169;
  static const MMC_DEFSTRINGLIT(tmp170,84,"Variable violating min/max constraint: 8e4 <= roo.air.fluInt.p <= 1.2e5, has value: ");
  modelica_string tmp171;
  modelica_metatype tmpMeta172;
  static int tmp173 = 0;
  if(!tmp173)
  {
    tmp168 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* roo.air.fluInt.p STATE(1) */),8e4);
    tmp169 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* roo.air.fluInt.p STATE(1) */),1.2e5);
    if(!(tmp168 && tmp169))
    {
      tmp171 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* roo.air.fluInt.p STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta172 = stringAppend(MMC_REFSTRINGLIT(tmp170),tmp171);
      {
        const char* assert_cond = "(roo.air.fluInt.p >= 8e4 and roo.air.fluInt.p <= 1.2e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDFluidInterface.mo",44,3,50,71,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta172));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDFluidInterface.mo",44,3,50,71,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta172));
        }
      }
      tmp173 = 1;
    }
  }
  threadData->lastEquationSolved = 3714;
}

/*
equation index: 3715
type: ALGORITHM

  assert(roo.irRadGai.JOutConExtWin[1] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadGai.JOutConExtWin[1], has value: " + String(roo.irRadGai.JOutConExtWin[1], "g"));
*/
void tmp_two_returns_res_eqFunction_3715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3715};
  modelica_boolean tmp174;
  static const MMC_DEFSTRINGLIT(tmp175,84,"Variable violating min constraint: 0.0 <= roo.irRadGai.JOutConExtWin[1], has value: ");
  modelica_string tmp176;
  modelica_metatype tmpMeta177;
  static int tmp178 = 0;
  if(!tmp178)
  {
    tmp174 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* roo.irRadGai.JOutConExtWin[1] variable */),0.0);
    if(!tmp174)
    {
      tmp176 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* roo.irRadGai.JOutConExtWin[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta177 = stringAppend(MMC_REFSTRINGLIT(tmp175),tmp176);
      {
        const char* assert_cond = "(roo.irRadGai.JOutConExtWin[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationGainDistribution.mo",19,3,21,73,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta177));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationGainDistribution.mo",19,3,21,73,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta177));
        }
      }
      tmp178 = 1;
    }
  }
  threadData->lastEquationSolved = 3715;
}

/*
equation index: 3716
type: ALGORITHM

  assert(roo.irRadExc.J[1] <= 0.0, "Variable violating max constraint: roo.irRadExc.J[1] <= 0.0, has value: " + String(roo.irRadExc.J[1], "g"));
*/
void tmp_two_returns_res_eqFunction_3716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3716};
  modelica_boolean tmp179;
  static const MMC_DEFSTRINGLIT(tmp180,72,"Variable violating max constraint: roo.irRadExc.J[1] <= 0.0, has value: ");
  modelica_string tmp181;
  modelica_metatype tmpMeta182;
  static int tmp183 = 0;
  if(!tmp183)
  {
    tmp179 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */),0.0);
    if(!tmp179)
    {
      tmp181 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta182 = stringAppend(MMC_REFSTRINGLIT(tmp180),tmp181);
      {
        const char* assert_cond = "(roo.irRadExc.J[1] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta182));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta182));
        }
      }
      tmp183 = 1;
    }
  }
  threadData->lastEquationSolved = 3716;
}

/*
equation index: 3717
type: ALGORITHM

  assert(roo.irRadExc.J[2] <= 0.0, "Variable violating max constraint: roo.irRadExc.J[2] <= 0.0, has value: " + String(roo.irRadExc.J[2], "g"));
*/
void tmp_two_returns_res_eqFunction_3717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3717};
  modelica_boolean tmp184;
  static const MMC_DEFSTRINGLIT(tmp185,72,"Variable violating max constraint: roo.irRadExc.J[2] <= 0.0, has value: ");
  modelica_string tmp186;
  modelica_metatype tmpMeta187;
  static int tmp188 = 0;
  if(!tmp188)
  {
    tmp184 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */),0.0);
    if(!tmp184)
    {
      tmp186 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta187 = stringAppend(MMC_REFSTRINGLIT(tmp185),tmp186);
      {
        const char* assert_cond = "(roo.irRadExc.J[2] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta187));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta187));
        }
      }
      tmp188 = 1;
    }
  }
  threadData->lastEquationSolved = 3717;
}

/*
equation index: 3718
type: ALGORITHM

  assert(roo.irRadExc.J[3] <= 0.0, "Variable violating max constraint: roo.irRadExc.J[3] <= 0.0, has value: " + String(roo.irRadExc.J[3], "g"));
*/
void tmp_two_returns_res_eqFunction_3718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3718};
  modelica_boolean tmp189;
  static const MMC_DEFSTRINGLIT(tmp190,72,"Variable violating max constraint: roo.irRadExc.J[3] <= 0.0, has value: ");
  modelica_string tmp191;
  modelica_metatype tmpMeta192;
  static int tmp193 = 0;
  if(!tmp193)
  {
    tmp189 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */),0.0);
    if(!tmp189)
    {
      tmp191 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta192 = stringAppend(MMC_REFSTRINGLIT(tmp190),tmp191);
      {
        const char* assert_cond = "(roo.irRadExc.J[3] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta192));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta192));
        }
      }
      tmp193 = 1;
    }
  }
  threadData->lastEquationSolved = 3718;
}

/*
equation index: 3719
type: ALGORITHM

  assert(roo.irRadExc.J[4] <= 0.0, "Variable violating max constraint: roo.irRadExc.J[4] <= 0.0, has value: " + String(roo.irRadExc.J[4], "g"));
*/
void tmp_two_returns_res_eqFunction_3719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3719};
  modelica_boolean tmp194;
  static const MMC_DEFSTRINGLIT(tmp195,72,"Variable violating max constraint: roo.irRadExc.J[4] <= 0.0, has value: ");
  modelica_string tmp196;
  modelica_metatype tmpMeta197;
  static int tmp198 = 0;
  if(!tmp198)
  {
    tmp194 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */),0.0);
    if(!tmp194)
    {
      tmp196 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta197 = stringAppend(MMC_REFSTRINGLIT(tmp195),tmp196);
      {
        const char* assert_cond = "(roo.irRadExc.J[4] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta197));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta197));
        }
      }
      tmp198 = 1;
    }
  }
  threadData->lastEquationSolved = 3719;
}

/*
equation index: 3720
type: ALGORITHM

  assert(roo.irRadExc.J[5] <= 0.0, "Variable violating max constraint: roo.irRadExc.J[5] <= 0.0, has value: " + String(roo.irRadExc.J[5], "g"));
*/
void tmp_two_returns_res_eqFunction_3720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3720};
  modelica_boolean tmp199;
  static const MMC_DEFSTRINGLIT(tmp200,72,"Variable violating max constraint: roo.irRadExc.J[5] <= 0.0, has value: ");
  modelica_string tmp201;
  modelica_metatype tmpMeta202;
  static int tmp203 = 0;
  if(!tmp203)
  {
    tmp199 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */),0.0);
    if(!tmp199)
    {
      tmp201 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta202 = stringAppend(MMC_REFSTRINGLIT(tmp200),tmp201);
      {
        const char* assert_cond = "(roo.irRadExc.J[5] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta202));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta202));
        }
      }
      tmp203 = 1;
    }
  }
  threadData->lastEquationSolved = 3720;
}

/*
equation index: 3721
type: ALGORITHM

  assert(roo.irRadExc.J[6] <= 0.0, "Variable violating max constraint: roo.irRadExc.J[6] <= 0.0, has value: " + String(roo.irRadExc.J[6], "g"));
*/
void tmp_two_returns_res_eqFunction_3721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3721};
  modelica_boolean tmp204;
  static const MMC_DEFSTRINGLIT(tmp205,72,"Variable violating max constraint: roo.irRadExc.J[6] <= 0.0, has value: ");
  modelica_string tmp206;
  modelica_metatype tmpMeta207;
  static int tmp208 = 0;
  if(!tmp208)
  {
    tmp204 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */),0.0);
    if(!tmp204)
    {
      tmp206 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta207 = stringAppend(MMC_REFSTRINGLIT(tmp205),tmp206);
      {
        const char* assert_cond = "(roo.irRadExc.J[6] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta207));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta207));
        }
      }
      tmp208 = 1;
    }
  }
  threadData->lastEquationSolved = 3721;
}

/*
equation index: 3722
type: ALGORITHM

  assert(roo.irRadExc.G[1] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadExc.G[1], has value: " + String(roo.irRadExc.G[1], "g"));
*/
void tmp_two_returns_res_eqFunction_3722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3722};
  modelica_boolean tmp209;
  static const MMC_DEFSTRINGLIT(tmp210,72,"Variable violating min constraint: 0.0 <= roo.irRadExc.G[1], has value: ");
  modelica_string tmp211;
  modelica_metatype tmpMeta212;
  static int tmp213 = 0;
  if(!tmp213)
  {
    tmp209 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[108]] /* roo.irRadExc.G[1] variable */),0.0);
    if(!tmp209)
    {
      tmp211 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[108]] /* roo.irRadExc.G[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta212 = stringAppend(MMC_REFSTRINGLIT(tmp210),tmp211);
      {
        const char* assert_cond = "(roo.irRadExc.G[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta212));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta212));
        }
      }
      tmp213 = 1;
    }
  }
  threadData->lastEquationSolved = 3722;
}

/*
equation index: 3723
type: ALGORITHM

  assert(roo.irRadExc.G[2] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadExc.G[2], has value: " + String(roo.irRadExc.G[2], "g"));
*/
void tmp_two_returns_res_eqFunction_3723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3723};
  modelica_boolean tmp214;
  static const MMC_DEFSTRINGLIT(tmp215,72,"Variable violating min constraint: 0.0 <= roo.irRadExc.G[2], has value: ");
  modelica_string tmp216;
  modelica_metatype tmpMeta217;
  static int tmp218 = 0;
  if(!tmp218)
  {
    tmp214 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[109]] /* roo.irRadExc.G[2] variable */),0.0);
    if(!tmp214)
    {
      tmp216 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[109]] /* roo.irRadExc.G[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta217 = stringAppend(MMC_REFSTRINGLIT(tmp215),tmp216);
      {
        const char* assert_cond = "(roo.irRadExc.G[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta217));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta217));
        }
      }
      tmp218 = 1;
    }
  }
  threadData->lastEquationSolved = 3723;
}

/*
equation index: 3724
type: ALGORITHM

  assert(roo.irRadExc.G[3] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadExc.G[3], has value: " + String(roo.irRadExc.G[3], "g"));
*/
void tmp_two_returns_res_eqFunction_3724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3724};
  modelica_boolean tmp219;
  static const MMC_DEFSTRINGLIT(tmp220,72,"Variable violating min constraint: 0.0 <= roo.irRadExc.G[3], has value: ");
  modelica_string tmp221;
  modelica_metatype tmpMeta222;
  static int tmp223 = 0;
  if(!tmp223)
  {
    tmp219 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[110]] /* roo.irRadExc.G[3] variable */),0.0);
    if(!tmp219)
    {
      tmp221 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[110]] /* roo.irRadExc.G[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta222 = stringAppend(MMC_REFSTRINGLIT(tmp220),tmp221);
      {
        const char* assert_cond = "(roo.irRadExc.G[3] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta222));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta222));
        }
      }
      tmp223 = 1;
    }
  }
  threadData->lastEquationSolved = 3724;
}

/*
equation index: 3725
type: ALGORITHM

  assert(roo.irRadExc.G[4] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadExc.G[4], has value: " + String(roo.irRadExc.G[4], "g"));
*/
void tmp_two_returns_res_eqFunction_3725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3725};
  modelica_boolean tmp224;
  static const MMC_DEFSTRINGLIT(tmp225,72,"Variable violating min constraint: 0.0 <= roo.irRadExc.G[4], has value: ");
  modelica_string tmp226;
  modelica_metatype tmpMeta227;
  static int tmp228 = 0;
  if(!tmp228)
  {
    tmp224 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* roo.irRadExc.G[4] variable */),0.0);
    if(!tmp224)
    {
      tmp226 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* roo.irRadExc.G[4] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta227 = stringAppend(MMC_REFSTRINGLIT(tmp225),tmp226);
      {
        const char* assert_cond = "(roo.irRadExc.G[4] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta227));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta227));
        }
      }
      tmp228 = 1;
    }
  }
  threadData->lastEquationSolved = 3725;
}

/*
equation index: 3726
type: ALGORITHM

  assert(roo.irRadExc.G[5] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadExc.G[5], has value: " + String(roo.irRadExc.G[5], "g"));
*/
void tmp_two_returns_res_eqFunction_3726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3726};
  modelica_boolean tmp229;
  static const MMC_DEFSTRINGLIT(tmp230,72,"Variable violating min constraint: 0.0 <= roo.irRadExc.G[5], has value: ");
  modelica_string tmp231;
  modelica_metatype tmpMeta232;
  static int tmp233 = 0;
  if(!tmp233)
  {
    tmp229 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* roo.irRadExc.G[5] variable */),0.0);
    if(!tmp229)
    {
      tmp231 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* roo.irRadExc.G[5] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta232 = stringAppend(MMC_REFSTRINGLIT(tmp230),tmp231);
      {
        const char* assert_cond = "(roo.irRadExc.G[5] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta232));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta232));
        }
      }
      tmp233 = 1;
    }
  }
  threadData->lastEquationSolved = 3726;
}

/*
equation index: 3727
type: ALGORITHM

  assert(roo.irRadExc.G[6] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadExc.G[6], has value: " + String(roo.irRadExc.G[6], "g"));
*/
void tmp_two_returns_res_eqFunction_3727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3727};
  modelica_boolean tmp234;
  static const MMC_DEFSTRINGLIT(tmp235,72,"Variable violating min constraint: 0.0 <= roo.irRadExc.G[6], has value: ");
  modelica_string tmp236;
  modelica_metatype tmpMeta237;
  static int tmp238 = 0;
  if(!tmp238)
  {
    tmp234 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* roo.irRadExc.G[6] variable */),0.0);
    if(!tmp234)
    {
      tmp236 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* roo.irRadExc.G[6] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta237 = stringAppend(MMC_REFSTRINGLIT(tmp235),tmp236);
      {
        const char* assert_cond = "(roo.irRadExc.G[6] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta237));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta237));
        }
      }
      tmp238 = 1;
    }
  }
  threadData->lastEquationSolved = 3727;
}

/*
equation index: 3693
type: ALGORITHM

  assert(roo.air.cfd.u[14] >= 200.0 and roo.air.cfd.u[14] <= 373.15, "Variable violating min/max constraint: 200.0 <= roo.air.cfd.u[14] <= 373.15, has value: " + String(roo.air.cfd.u[14], "g"));
*/
void tmp_two_returns_res_eqFunction_3693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3693};
  modelica_boolean tmp239;
  modelica_boolean tmp240;
  static const MMC_DEFSTRINGLIT(tmp241,88,"Variable violating min/max constraint: 200.0 <= roo.air.cfd.u[14] <= 373.15, has value: ");
  modelica_string tmp242;
  modelica_metatype tmpMeta243;
  static int tmp244 = 0;
  if(!tmp244)
  {
    tmp239 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* roo.air.cfd.u[14] variable */),200.0);
    tmp240 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* roo.air.cfd.u[14] variable */),373.15);
    if(!(tmp239 && tmp240))
    {
      tmp242 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* roo.air.cfd.u[14] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta243 = stringAppend(MMC_REFSTRINGLIT(tmp241),tmp242);
      {
        const char* assert_cond = "(roo.air.cfd.u[14] >= 200.0 and roo.air.cfd.u[14] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta243));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta243));
        }
      }
      tmp244 = 1;
    }
  }
  threadData->lastEquationSolved = 3693;
}

/*
equation index: 3692
type: ALGORITHM

  assert(roo.air.cfd.u[15] >= 200.0 and roo.air.cfd.u[15] <= 373.15, "Variable violating min/max constraint: 200.0 <= roo.air.cfd.u[15] <= 373.15, has value: " + String(roo.air.cfd.u[15], "g"));
*/
void tmp_two_returns_res_eqFunction_3692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3692};
  modelica_boolean tmp245;
  modelica_boolean tmp246;
  static const MMC_DEFSTRINGLIT(tmp247,88,"Variable violating min/max constraint: 200.0 <= roo.air.cfd.u[15] <= 373.15, has value: ");
  modelica_string tmp248;
  modelica_metatype tmpMeta249;
  static int tmp250 = 0;
  if(!tmp250)
  {
    tmp245 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* roo.air.cfd.u[15] variable */),200.0);
    tmp246 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* roo.air.cfd.u[15] variable */),373.15);
    if(!(tmp245 && tmp246))
    {
      tmp248 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* roo.air.cfd.u[15] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta249 = stringAppend(MMC_REFSTRINGLIT(tmp247),tmp248);
      {
        const char* assert_cond = "(roo.air.cfd.u[15] >= 200.0 and roo.air.cfd.u[15] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta249));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta249));
        }
      }
      tmp250 = 1;
    }
  }
  threadData->lastEquationSolved = 3692;
}

/*
equation index: 3691
type: ALGORITHM

  assert(sup1.ports[1].h_outflow >= -1e10 and sup1.ports[1].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= sup1.ports[1].h_outflow <= 1e10, has value: " + String(sup1.ports[1].h_outflow, "g"));
*/
void tmp_two_returns_res_eqFunction_3691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3691};
  modelica_boolean tmp251;
  modelica_boolean tmp252;
  static const MMC_DEFSTRINGLIT(tmp253,92,"Variable violating min/max constraint: -1e10 <= sup1.ports[1].h_outflow <= 1e10, has value: ");
  modelica_string tmp254;
  modelica_metatype tmpMeta255;
  static int tmp256 = 0;
  if(!tmp256)
  {
    tmp251 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* sup1.ports[1].h_outflow variable */),-1e10);
    tmp252 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* sup1.ports[1].h_outflow variable */),1e10);
    if(!(tmp251 && tmp252))
    {
      tmp254 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* sup1.ports[1].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta255 = stringAppend(MMC_REFSTRINGLIT(tmp253),tmp254);
      {
        const char* assert_cond = "(sup1.ports[1].h_outflow >= -1e10 and sup1.ports[1].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta255));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta255));
        }
      }
      tmp256 = 1;
    }
  }
  threadData->lastEquationSolved = 3691;
}

/*
equation index: 3690
type: ALGORITHM

  assert(sup2.ports[1].h_outflow >= -1e10 and sup2.ports[1].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= sup2.ports[1].h_outflow <= 1e10, has value: " + String(sup2.ports[1].h_outflow, "g"));
*/
void tmp_two_returns_res_eqFunction_3690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3690};
  modelica_boolean tmp257;
  modelica_boolean tmp258;
  static const MMC_DEFSTRINGLIT(tmp259,92,"Variable violating min/max constraint: -1e10 <= sup2.ports[1].h_outflow <= 1e10, has value: ");
  modelica_string tmp260;
  modelica_metatype tmpMeta261;
  static int tmp262 = 0;
  if(!tmp262)
  {
    tmp257 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* sup2.ports[1].h_outflow variable */),-1e10);
    tmp258 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* sup2.ports[1].h_outflow variable */),1e10);
    if(!(tmp257 && tmp258))
    {
      tmp260 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* sup2.ports[1].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta261 = stringAppend(MMC_REFSTRINGLIT(tmp259),tmp260);
      {
        const char* assert_cond = "(sup2.ports[1].h_outflow >= -1e10 and sup2.ports[1].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta261));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta261));
        }
      }
      tmp262 = 1;
    }
  }
  threadData->lastEquationSolved = 3690;
}

/*
equation index: 3689
type: ALGORITHM

  assert(ret.ports[2].h_outflow >= -1e10 and ret.ports[2].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= ret.ports[2].h_outflow <= 1e10, has value: " + String(ret.ports[2].h_outflow, "g"));
*/
void tmp_two_returns_res_eqFunction_3689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3689};
  modelica_boolean tmp263;
  modelica_boolean tmp264;
  static const MMC_DEFSTRINGLIT(tmp265,91,"Variable violating min/max constraint: -1e10 <= ret.ports[2].h_outflow <= 1e10, has value: ");
  modelica_string tmp266;
  modelica_metatype tmpMeta267;
  static int tmp268 = 0;
  if(!tmp268)
  {
    tmp263 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* ret.ports[2].h_outflow variable */),-1e10);
    tmp264 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* ret.ports[2].h_outflow variable */),1e10);
    if(!(tmp263 && tmp264))
    {
      tmp266 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* ret.ports[2].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta267 = stringAppend(MMC_REFSTRINGLIT(tmp265),tmp266);
      {
        const char* assert_cond = "(ret.ports[2].h_outflow >= -1e10 and ret.ports[2].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta267));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta267));
        }
      }
      tmp268 = 1;
    }
  }
  threadData->lastEquationSolved = 3689;
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int tmp_two_returns_res_checkForAsserts(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[49])(DATA*, threadData_t*) = {
    tmp_two_returns_res_eqFunction_3728,
    tmp_two_returns_res_eqFunction_3729,
    tmp_two_returns_res_eqFunction_3730,
    tmp_two_returns_res_eqFunction_3731,
    tmp_two_returns_res_eqFunction_3732,
    tmp_two_returns_res_eqFunction_3733,
    tmp_two_returns_res_eqFunction_3734,
    tmp_two_returns_res_eqFunction_3735,
    tmp_two_returns_res_eqFunction_3736,
    tmp_two_returns_res_eqFunction_3737,
    tmp_two_returns_res_eqFunction_3694,
    tmp_two_returns_res_eqFunction_3695,
    tmp_two_returns_res_eqFunction_3696,
    tmp_two_returns_res_eqFunction_3697,
    tmp_two_returns_res_eqFunction_3698,
    tmp_two_returns_res_eqFunction_3699,
    tmp_two_returns_res_eqFunction_3700,
    tmp_two_returns_res_eqFunction_3701,
    tmp_two_returns_res_eqFunction_3702,
    tmp_two_returns_res_eqFunction_3703,
    tmp_two_returns_res_eqFunction_3704,
    tmp_two_returns_res_eqFunction_3705,
    tmp_two_returns_res_eqFunction_3706,
    tmp_two_returns_res_eqFunction_3707,
    tmp_two_returns_res_eqFunction_3708,
    tmp_two_returns_res_eqFunction_3709,
    tmp_two_returns_res_eqFunction_3710,
    tmp_two_returns_res_eqFunction_3711,
    tmp_two_returns_res_eqFunction_3712,
    tmp_two_returns_res_eqFunction_3713,
    tmp_two_returns_res_eqFunction_3714,
    tmp_two_returns_res_eqFunction_3715,
    tmp_two_returns_res_eqFunction_3716,
    tmp_two_returns_res_eqFunction_3717,
    tmp_two_returns_res_eqFunction_3718,
    tmp_two_returns_res_eqFunction_3719,
    tmp_two_returns_res_eqFunction_3720,
    tmp_two_returns_res_eqFunction_3721,
    tmp_two_returns_res_eqFunction_3722,
    tmp_two_returns_res_eqFunction_3723,
    tmp_two_returns_res_eqFunction_3724,
    tmp_two_returns_res_eqFunction_3725,
    tmp_two_returns_res_eqFunction_3726,
    tmp_two_returns_res_eqFunction_3727,
    tmp_two_returns_res_eqFunction_3693,
    tmp_two_returns_res_eqFunction_3692,
    tmp_two_returns_res_eqFunction_3691,
    tmp_two_returns_res_eqFunction_3690,
    tmp_two_returns_res_eqFunction_3689
  };
  
  for (int id = 0; id < 49; id++) {
    eqFunctions[id](data, threadData);
  }
  
  return 0;
}

#if defined(__cplusplus)
}
#endif
