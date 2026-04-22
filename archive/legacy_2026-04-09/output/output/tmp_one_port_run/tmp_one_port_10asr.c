/* Asserts */
#include "tmp_one_port_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 2938
type: ALGORITHM

  assert(weaDat.weaBus.TDryBul >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.weaBus.TDryBul, has value: " + String(weaDat.weaBus.TDryBul, "g"));
*/
void tmp_one_port_eqFunction_2938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2938};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,76,"Variable violating min constraint: 0.0 <= weaDat.weaBus.TDryBul, has value: ");
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  static int tmp4 = 0;
  if(!tmp4)
  {
    tmp0 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* weaDat.weaBus.TDryBul variable */),0.0);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* weaDat.weaBus.TDryBul variable */), (modelica_string) mmc_strings_len1[103]);
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
  threadData->lastEquationSolved = 2938;
}

/*
equation index: 2939
type: ALGORITHM

  assert(weaDat.weaBus.relHum >= 0.0 and weaDat.weaBus.relHum <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.weaBus.relHum <= 1.0, has value: " + String(weaDat.weaBus.relHum, "g"));
*/
void tmp_one_port_eqFunction_2939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2939};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,86,"Variable violating min/max constraint: 0.0 <= weaDat.weaBus.relHum <= 1.0, has value: ");
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  static int tmp10 = 0;
  if(!tmp10)
  {
    tmp5 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* weaDat.weaBus.relHum variable */),0.0);
    tmp6 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* weaDat.weaBus.relHum variable */),1.0);
    if(!(tmp5 && tmp6))
    {
      tmp8 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* weaDat.weaBus.relHum variable */), (modelica_string) mmc_strings_len1[103]);
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
  threadData->lastEquationSolved = 2939;
}

/*
equation index: 2940
type: ALGORITHM

  assert(weaDat.weaBus.HHorIR >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.weaBus.HHorIR, has value: " + String(weaDat.weaBus.HHorIR, "g"));
*/
void tmp_one_port_eqFunction_2940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2940};
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,75,"Variable violating min constraint: 0.0 <= weaDat.weaBus.HHorIR, has value: ");
  modelica_string tmp13;
  modelica_metatype tmpMeta14;
  static int tmp15 = 0;
  if(!tmp15)
  {
    tmp11 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* weaDat.weaBus.HHorIR variable */),0.0);
    if(!tmp11)
    {
      tmp13 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* weaDat.weaBus.HHorIR variable */), (modelica_string) mmc_strings_len1[103]);
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
  threadData->lastEquationSolved = 2940;
}

/*
equation index: 2941
type: ALGORITHM

  assert(weaDat.weaBus.nOpa >= 0.0 and weaDat.weaBus.nOpa <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.weaBus.nOpa <= 1.0, has value: " + String(weaDat.weaBus.nOpa, "g"));
*/
void tmp_one_port_eqFunction_2941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2941};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  static const MMC_DEFSTRINGLIT(tmp18,84,"Variable violating min/max constraint: 0.0 <= weaDat.weaBus.nOpa <= 1.0, has value: ");
  modelica_string tmp19;
  modelica_metatype tmpMeta20;
  static int tmp21 = 0;
  if(!tmp21)
  {
    tmp16 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* weaDat.weaBus.nOpa variable */),0.0);
    tmp17 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* weaDat.weaBus.nOpa variable */),1.0);
    if(!(tmp16 && tmp17))
    {
      tmp19 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* weaDat.weaBus.nOpa variable */), (modelica_string) mmc_strings_len1[103]);
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
  threadData->lastEquationSolved = 2941;
}

/*
equation index: 2942
type: ALGORITHM

  assert(weaDat.weaBus.TWetBul >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.weaBus.TWetBul, has value: " + String(weaDat.weaBus.TWetBul, "g"));
*/
void tmp_one_port_eqFunction_2942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2942};
  modelica_boolean tmp22;
  static const MMC_DEFSTRINGLIT(tmp23,76,"Variable violating min constraint: 0.0 <= weaDat.weaBus.TWetBul, has value: ");
  modelica_string tmp24;
  modelica_metatype tmpMeta25;
  static int tmp26 = 0;
  if(!tmp26)
  {
    tmp22 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.TWetBul variable */),0.0);
    if(!tmp22)
    {
      tmp24 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.TWetBul variable */), (modelica_string) mmc_strings_len1[103]);
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
  threadData->lastEquationSolved = 2942;
}

/*
equation index: 2943
type: ALGORITHM

  assert(weaDat.TBlaSkyCom.TDewPoiK >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.TBlaSkyCom.TDewPoiK, has value: " + String(weaDat.TBlaSkyCom.TDewPoiK, "g"));
*/
void tmp_one_port_eqFunction_2943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2943};
  modelica_boolean tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,81,"Variable violating min constraint: 0.0 <= weaDat.TBlaSkyCom.TDewPoiK, has value: ");
  modelica_string tmp29;
  modelica_metatype tmpMeta30;
  static int tmp31 = 0;
  if(!tmp31)
  {
    tmp27 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* weaDat.TBlaSkyCom.TDewPoiK variable */),0.0);
    if(!tmp27)
    {
      tmp29 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* weaDat.TBlaSkyCom.TDewPoiK variable */), (modelica_string) mmc_strings_len1[103]);
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
  threadData->lastEquationSolved = 2943;
}

/*
equation index: 2944
type: ALGORITHM

  assert(weaDat.TBlaSkyCom.nOpa10 >= 0.0 and weaDat.TBlaSkyCom.nOpa10 <= 10.0, "Variable violating min/max constraint: 0.0 <= weaDat.TBlaSkyCom.nOpa10 <= 10.0, has value: " + String(weaDat.TBlaSkyCom.nOpa10, "g"));
*/
void tmp_one_port_eqFunction_2944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2944};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,91,"Variable violating min/max constraint: 0.0 <= weaDat.TBlaSkyCom.nOpa10 <= 10.0, has value: ");
  modelica_string tmp35;
  modelica_metatype tmpMeta36;
  static int tmp37 = 0;
  if(!tmp37)
  {
    tmp32 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* weaDat.TBlaSkyCom.nOpa10 variable */),0.0);
    tmp33 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* weaDat.TBlaSkyCom.nOpa10 variable */),10.0);
    if(!(tmp32 && tmp33))
    {
      tmp35 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* weaDat.TBlaSkyCom.nOpa10 variable */), (modelica_string) mmc_strings_len1[103]);
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
  threadData->lastEquationSolved = 2944;
}

/*
equation index: 2945
type: ALGORITHM

  assert(weaDat.tWetBul_TDryBulXi.XiDryBul >= 0.0 and weaDat.tWetBul_TDryBulXi.XiDryBul <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.tWetBul_TDryBulXi.XiDryBul <= 1.0, has value: " + String(weaDat.tWetBul_TDryBulXi.XiDryBul, "g"));
*/
void tmp_one_port_eqFunction_2945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2945};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,99,"Variable violating min/max constraint: 0.0 <= weaDat.tWetBul_TDryBulXi.XiDryBul <= 1.0, has value: ");
  modelica_string tmp41;
  modelica_metatype tmpMeta42;
  static int tmp43 = 0;
  if(!tmp43)
  {
    tmp38 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */),0.0);
    tmp39 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */),1.0);
    if(!(tmp38 && tmp39))
    {
      tmp41 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */), (modelica_string) mmc_strings_len1[103]);
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
  threadData->lastEquationSolved = 2945;
}

/*
equation index: 2946
type: ALGORITHM

  assert(weaDat.tWetBul_TDryBulXi.XiSat >= 0.0 and weaDat.tWetBul_TDryBulXi.XiSat <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.tWetBul_TDryBulXi.XiSat <= 1.0, has value: " + String(weaDat.tWetBul_TDryBulXi.XiSat, "g"));
*/
void tmp_one_port_eqFunction_2946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2946};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,96,"Variable violating min/max constraint: 0.0 <= weaDat.tWetBul_TDryBulXi.XiSat <= 1.0, has value: ");
  modelica_string tmp47;
  modelica_metatype tmpMeta48;
  static int tmp49 = 0;
  if(!tmp49)
  {
    tmp44 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */),0.0);
    tmp45 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */),1.0);
    if(!(tmp44 && tmp45))
    {
      tmp47 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */), (modelica_string) mmc_strings_len1[103]);
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
  threadData->lastEquationSolved = 2946;
}

/*
equation index: 2947
type: ALGORITHM

  assert(weaDat.tWetBul_TDryBulXi.XiSatRefIn >= 0.0 and weaDat.tWetBul_TDryBulXi.XiSatRefIn <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.tWetBul_TDryBulXi.XiSatRefIn <= 1.0, has value: " + String(weaDat.tWetBul_TDryBulXi.XiSatRefIn, "g"));
*/
void tmp_one_port_eqFunction_2947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2947};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,101,"Variable violating min/max constraint: 0.0 <= weaDat.tWetBul_TDryBulXi.XiSatRefIn <= 1.0, has value: ");
  modelica_string tmp53;
  modelica_metatype tmpMeta54;
  static int tmp55 = 0;
  if(!tmp55)
  {
    tmp50 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */),0.0);
    tmp51 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */),1.0);
    if(!(tmp50 && tmp51))
    {
      tmp53 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */), (modelica_string) mmc_strings_len1[103]);
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
  threadData->lastEquationSolved = 2947;
}

/*
equation index: 2913
type: ALGORITHM

  assert(roo.ports[1].h_outflow >= -1e10 and roo.ports[1].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= roo.ports[1].h_outflow <= 1e10, has value: " + String(roo.ports[1].h_outflow, "g"));
*/
void tmp_one_port_eqFunction_2913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2913};
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  static const MMC_DEFSTRINGLIT(tmp58,91,"Variable violating min/max constraint: -1e10 <= roo.ports[1].h_outflow <= 1e10, has value: ");
  modelica_string tmp59;
  modelica_metatype tmpMeta60;
  static int tmp61 = 0;
  if(!tmp61)
  {
    tmp56 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* roo.ports[1].h_outflow variable */),-1e10);
    tmp57 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* roo.ports[1].h_outflow variable */),1e10);
    if(!(tmp56 && tmp57))
    {
      tmp59 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* roo.ports[1].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
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
  threadData->lastEquationSolved = 2913;
}

/*
equation index: 2914
type: ALGORITHM

  assert(roo.ports[2].h_outflow >= -1e10 and roo.ports[2].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= roo.ports[2].h_outflow <= 1e10, has value: " + String(roo.ports[2].h_outflow, "g"));
*/
void tmp_one_port_eqFunction_2914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2914};
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,91,"Variable violating min/max constraint: -1e10 <= roo.ports[2].h_outflow <= 1e10, has value: ");
  modelica_string tmp65;
  modelica_metatype tmpMeta66;
  static int tmp67 = 0;
  if(!tmp67)
  {
    tmp62 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* roo.ports[2].h_outflow variable */),-1e10);
    tmp63 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* roo.ports[2].h_outflow variable */),1e10);
    if(!(tmp62 && tmp63))
    {
      tmp65 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* roo.ports[2].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
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
  threadData->lastEquationSolved = 2914;
}

/*
equation index: 2915
type: ALGORITHM

  assert(roo.heaPorRad.T >= 0.0, "Variable violating min constraint: 0.0 <= roo.heaPorRad.T, has value: " + String(roo.heaPorRad.T, "g"));
*/
void tmp_one_port_eqFunction_2915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2915};
  modelica_boolean tmp68;
  static const MMC_DEFSTRINGLIT(tmp69,70,"Variable violating min constraint: 0.0 <= roo.heaPorRad.T, has value: ");
  modelica_string tmp70;
  modelica_metatype tmpMeta71;
  static int tmp72 = 0;
  if(!tmp72)
  {
    tmp68 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* roo.heaPorRad.T variable */),0.0);
    if(!tmp68)
    {
      tmp70 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* roo.heaPorRad.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta71 = stringAppend(MMC_REFSTRINGLIT(tmp69),tmp70);
      {
        const char* assert_cond = "(roo.heaPorRad.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta71));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta71));
        }
      }
      tmp72 = 1;
    }
  }
  threadData->lastEquationSolved = 2915;
}

/*
equation index: 2916
type: ALGORITHM

  assert(roo.air.cfd.y[1] >= 0.0, "Variable violating min constraint: 0.0 <= roo.air.cfd.y[1], has value: " + String(roo.air.cfd.y[1], "g"));
*/
void tmp_one_port_eqFunction_2916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2916};
  modelica_boolean tmp73;
  static const MMC_DEFSTRINGLIT(tmp74,71,"Variable violating min constraint: 0.0 <= roo.air.cfd.y[1], has value: ");
  modelica_string tmp75;
  modelica_metatype tmpMeta76;
  static int tmp77 = 0;
  if(!tmp77)
  {
    tmp73 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* roo.air.cfd.y[1] DISCRETE */),0.0);
    if(!tmp73)
    {
      tmp75 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* roo.air.cfd.y[1] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta76 = stringAppend(MMC_REFSTRINGLIT(tmp74),tmp75);
      {
        const char* assert_cond = "(roo.air.cfd.y[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta76));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta76));
        }
      }
      tmp77 = 1;
    }
  }
  threadData->lastEquationSolved = 2916;
}

/*
equation index: 2917
type: ALGORITHM

  assert(roo.air.cfd.y[2] >= 0.0, "Variable violating min constraint: 0.0 <= roo.air.cfd.y[2], has value: " + String(roo.air.cfd.y[2], "g"));
*/
void tmp_one_port_eqFunction_2917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2917};
  modelica_boolean tmp78;
  static const MMC_DEFSTRINGLIT(tmp79,71,"Variable violating min constraint: 0.0 <= roo.air.cfd.y[2], has value: ");
  modelica_string tmp80;
  modelica_metatype tmpMeta81;
  static int tmp82 = 0;
  if(!tmp82)
  {
    tmp78 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* roo.air.cfd.y[2] DISCRETE */),0.0);
    if(!tmp78)
    {
      tmp80 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* roo.air.cfd.y[2] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta81 = stringAppend(MMC_REFSTRINGLIT(tmp79),tmp80);
      {
        const char* assert_cond = "(roo.air.cfd.y[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta81));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta81));
        }
      }
      tmp82 = 1;
    }
  }
  threadData->lastEquationSolved = 2917;
}

/*
equation index: 2918
type: ALGORITHM

  assert(roo.air.cfd.y[3] >= 0.0, "Variable violating min constraint: 0.0 <= roo.air.cfd.y[3], has value: " + String(roo.air.cfd.y[3], "g"));
*/
void tmp_one_port_eqFunction_2918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2918};
  modelica_boolean tmp83;
  static const MMC_DEFSTRINGLIT(tmp84,71,"Variable violating min constraint: 0.0 <= roo.air.cfd.y[3], has value: ");
  modelica_string tmp85;
  modelica_metatype tmpMeta86;
  static int tmp87 = 0;
  if(!tmp87)
  {
    tmp83 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* roo.air.cfd.y[3] DISCRETE */),0.0);
    if(!tmp83)
    {
      tmp85 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* roo.air.cfd.y[3] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta86 = stringAppend(MMC_REFSTRINGLIT(tmp84),tmp85);
      {
        const char* assert_cond = "(roo.air.cfd.y[3] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta86));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta86));
        }
      }
      tmp87 = 1;
    }
  }
  threadData->lastEquationSolved = 2918;
}

/*
equation index: 2919
type: ALGORITHM

  assert(roo.air.cfd.y[4] >= 0.0, "Variable violating min constraint: 0.0 <= roo.air.cfd.y[4], has value: " + String(roo.air.cfd.y[4], "g"));
*/
void tmp_one_port_eqFunction_2919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2919};
  modelica_boolean tmp88;
  static const MMC_DEFSTRINGLIT(tmp89,71,"Variable violating min constraint: 0.0 <= roo.air.cfd.y[4], has value: ");
  modelica_string tmp90;
  modelica_metatype tmpMeta91;
  static int tmp92 = 0;
  if(!tmp92)
  {
    tmp88 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* roo.air.cfd.y[4] DISCRETE */),0.0);
    if(!tmp88)
    {
      tmp90 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* roo.air.cfd.y[4] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta91 = stringAppend(MMC_REFSTRINGLIT(tmp89),tmp90);
      {
        const char* assert_cond = "(roo.air.cfd.y[4] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta91));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta91));
        }
      }
      tmp92 = 1;
    }
  }
  threadData->lastEquationSolved = 2919;
}

/*
equation index: 2920
type: ALGORITHM

  assert(roo.air.cfd.y[5] >= 0.0, "Variable violating min constraint: 0.0 <= roo.air.cfd.y[5], has value: " + String(roo.air.cfd.y[5], "g"));
*/
void tmp_one_port_eqFunction_2920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2920};
  modelica_boolean tmp93;
  static const MMC_DEFSTRINGLIT(tmp94,71,"Variable violating min constraint: 0.0 <= roo.air.cfd.y[5], has value: ");
  modelica_string tmp95;
  modelica_metatype tmpMeta96;
  static int tmp97 = 0;
  if(!tmp97)
  {
    tmp93 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* roo.air.cfd.y[5] DISCRETE */),0.0);
    if(!tmp93)
    {
      tmp95 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* roo.air.cfd.y[5] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta96 = stringAppend(MMC_REFSTRINGLIT(tmp94),tmp95);
      {
        const char* assert_cond = "(roo.air.cfd.y[5] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta96));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta96));
        }
      }
      tmp97 = 1;
    }
  }
  threadData->lastEquationSolved = 2920;
}

/*
equation index: 2921
type: ALGORITHM

  assert(roo.air.cfd.y[6] >= 0.0, "Variable violating min constraint: 0.0 <= roo.air.cfd.y[6], has value: " + String(roo.air.cfd.y[6], "g"));
*/
void tmp_one_port_eqFunction_2921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2921};
  modelica_boolean tmp98;
  static const MMC_DEFSTRINGLIT(tmp99,71,"Variable violating min constraint: 0.0 <= roo.air.cfd.y[6], has value: ");
  modelica_string tmp100;
  modelica_metatype tmpMeta101;
  static int tmp102 = 0;
  if(!tmp102)
  {
    tmp98 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* roo.air.cfd.y[6] DISCRETE */),0.0);
    if(!tmp98)
    {
      tmp100 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* roo.air.cfd.y[6] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta101 = stringAppend(MMC_REFSTRINGLIT(tmp99),tmp100);
      {
        const char* assert_cond = "(roo.air.cfd.y[6] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta101));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta101));
        }
      }
      tmp102 = 1;
    }
  }
  threadData->lastEquationSolved = 2921;
}

/*
equation index: 2922
type: ALGORITHM

  assert(roo.air.cfd.y[7] >= 0.0, "Variable violating min constraint: 0.0 <= roo.air.cfd.y[7], has value: " + String(roo.air.cfd.y[7], "g"));
*/
void tmp_one_port_eqFunction_2922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2922};
  modelica_boolean tmp103;
  static const MMC_DEFSTRINGLIT(tmp104,71,"Variable violating min constraint: 0.0 <= roo.air.cfd.y[7], has value: ");
  modelica_string tmp105;
  modelica_metatype tmpMeta106;
  static int tmp107 = 0;
  if(!tmp107)
  {
    tmp103 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* roo.air.cfd.y[7] DISCRETE */),0.0);
    if(!tmp103)
    {
      tmp105 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* roo.air.cfd.y[7] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta106 = stringAppend(MMC_REFSTRINGLIT(tmp104),tmp105);
      {
        const char* assert_cond = "(roo.air.cfd.y[7] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta106));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta106));
        }
      }
      tmp107 = 1;
    }
  }
  threadData->lastEquationSolved = 2922;
}

/*
equation index: 2923
type: ALGORITHM

  assert(roo.air.cfd.y[10] >= 0.0 and roo.air.cfd.y[10] <= 1.0, "Variable violating min/max constraint: 0.0 <= roo.air.cfd.y[10] <= 1.0, has value: " + String(roo.air.cfd.y[10], "g"));
*/
void tmp_one_port_eqFunction_2923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2923};
  modelica_boolean tmp108;
  modelica_boolean tmp109;
  static const MMC_DEFSTRINGLIT(tmp110,83,"Variable violating min/max constraint: 0.0 <= roo.air.cfd.y[10] <= 1.0, has value: ");
  modelica_string tmp111;
  modelica_metatype tmpMeta112;
  static int tmp113 = 0;
  if(!tmp113)
  {
    tmp108 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* roo.air.cfd.y[10] DISCRETE */),0.0);
    tmp109 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* roo.air.cfd.y[10] DISCRETE */),1.0);
    if(!(tmp108 && tmp109))
    {
      tmp111 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* roo.air.cfd.y[10] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta112 = stringAppend(MMC_REFSTRINGLIT(tmp110),tmp111);
      {
        const char* assert_cond = "(roo.air.cfd.y[10] >= 0.0 and roo.air.cfd.y[10] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta112));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta112));
        }
      }
      tmp113 = 1;
    }
  }
  threadData->lastEquationSolved = 2923;
}

/*
equation index: 2924
type: ALGORITHM

  assert(roo.air.cfd.y[11] >= 0.0 and roo.air.cfd.y[11] <= 1.0, "Variable violating min/max constraint: 0.0 <= roo.air.cfd.y[11] <= 1.0, has value: " + String(roo.air.cfd.y[11], "g"));
*/
void tmp_one_port_eqFunction_2924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2924};
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  static const MMC_DEFSTRINGLIT(tmp116,83,"Variable violating min/max constraint: 0.0 <= roo.air.cfd.y[11] <= 1.0, has value: ");
  modelica_string tmp117;
  modelica_metatype tmpMeta118;
  static int tmp119 = 0;
  if(!tmp119)
  {
    tmp114 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* roo.air.cfd.y[11] DISCRETE */),0.0);
    tmp115 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* roo.air.cfd.y[11] DISCRETE */),1.0);
    if(!(tmp114 && tmp115))
    {
      tmp117 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* roo.air.cfd.y[11] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta118 = stringAppend(MMC_REFSTRINGLIT(tmp116),tmp117);
      {
        const char* assert_cond = "(roo.air.cfd.y[11] >= 0.0 and roo.air.cfd.y[11] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta118));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta118));
        }
      }
      tmp119 = 1;
    }
  }
  threadData->lastEquationSolved = 2924;
}

/*
equation index: 2925
type: ALGORITHM

  assert(roo.irRadGai.JOutConExtWin[1] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadGai.JOutConExtWin[1], has value: " + String(roo.irRadGai.JOutConExtWin[1], "g"));
*/
void tmp_one_port_eqFunction_2925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2925};
  modelica_boolean tmp120;
  static const MMC_DEFSTRINGLIT(tmp121,84,"Variable violating min constraint: 0.0 <= roo.irRadGai.JOutConExtWin[1], has value: ");
  modelica_string tmp122;
  modelica_metatype tmpMeta123;
  static int tmp124 = 0;
  if(!tmp124)
  {
    tmp120 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* roo.irRadGai.JOutConExtWin[1] variable */),0.0);
    if(!tmp120)
    {
      tmp122 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* roo.irRadGai.JOutConExtWin[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta123 = stringAppend(MMC_REFSTRINGLIT(tmp121),tmp122);
      {
        const char* assert_cond = "(roo.irRadGai.JOutConExtWin[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationGainDistribution.mo",19,3,21,73,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta123));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationGainDistribution.mo",19,3,21,73,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta123));
        }
      }
      tmp124 = 1;
    }
  }
  threadData->lastEquationSolved = 2925;
}

/*
equation index: 2926
type: ALGORITHM

  assert(roo.irRadExc.J[1] <= 0.0, "Variable violating max constraint: roo.irRadExc.J[1] <= 0.0, has value: " + String(roo.irRadExc.J[1], "g"));
*/
void tmp_one_port_eqFunction_2926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2926};
  modelica_boolean tmp125;
  static const MMC_DEFSTRINGLIT(tmp126,72,"Variable violating max constraint: roo.irRadExc.J[1] <= 0.0, has value: ");
  modelica_string tmp127;
  modelica_metatype tmpMeta128;
  static int tmp129 = 0;
  if(!tmp129)
  {
    tmp125 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */),0.0);
    if(!tmp125)
    {
      tmp127 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta128 = stringAppend(MMC_REFSTRINGLIT(tmp126),tmp127);
      {
        const char* assert_cond = "(roo.irRadExc.J[1] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta128));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta128));
        }
      }
      tmp129 = 1;
    }
  }
  threadData->lastEquationSolved = 2926;
}

/*
equation index: 2927
type: ALGORITHM

  assert(roo.irRadExc.J[2] <= 0.0, "Variable violating max constraint: roo.irRadExc.J[2] <= 0.0, has value: " + String(roo.irRadExc.J[2], "g"));
*/
void tmp_one_port_eqFunction_2927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2927};
  modelica_boolean tmp130;
  static const MMC_DEFSTRINGLIT(tmp131,72,"Variable violating max constraint: roo.irRadExc.J[2] <= 0.0, has value: ");
  modelica_string tmp132;
  modelica_metatype tmpMeta133;
  static int tmp134 = 0;
  if(!tmp134)
  {
    tmp130 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */),0.0);
    if(!tmp130)
    {
      tmp132 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta133 = stringAppend(MMC_REFSTRINGLIT(tmp131),tmp132);
      {
        const char* assert_cond = "(roo.irRadExc.J[2] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta133));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta133));
        }
      }
      tmp134 = 1;
    }
  }
  threadData->lastEquationSolved = 2927;
}

/*
equation index: 2928
type: ALGORITHM

  assert(roo.irRadExc.J[3] <= 0.0, "Variable violating max constraint: roo.irRadExc.J[3] <= 0.0, has value: " + String(roo.irRadExc.J[3], "g"));
*/
void tmp_one_port_eqFunction_2928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2928};
  modelica_boolean tmp135;
  static const MMC_DEFSTRINGLIT(tmp136,72,"Variable violating max constraint: roo.irRadExc.J[3] <= 0.0, has value: ");
  modelica_string tmp137;
  modelica_metatype tmpMeta138;
  static int tmp139 = 0;
  if(!tmp139)
  {
    tmp135 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */),0.0);
    if(!tmp135)
    {
      tmp137 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta138 = stringAppend(MMC_REFSTRINGLIT(tmp136),tmp137);
      {
        const char* assert_cond = "(roo.irRadExc.J[3] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta138));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta138));
        }
      }
      tmp139 = 1;
    }
  }
  threadData->lastEquationSolved = 2928;
}

/*
equation index: 2929
type: ALGORITHM

  assert(roo.irRadExc.J[4] <= 0.0, "Variable violating max constraint: roo.irRadExc.J[4] <= 0.0, has value: " + String(roo.irRadExc.J[4], "g"));
*/
void tmp_one_port_eqFunction_2929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2929};
  modelica_boolean tmp140;
  static const MMC_DEFSTRINGLIT(tmp141,72,"Variable violating max constraint: roo.irRadExc.J[4] <= 0.0, has value: ");
  modelica_string tmp142;
  modelica_metatype tmpMeta143;
  static int tmp144 = 0;
  if(!tmp144)
  {
    tmp140 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */),0.0);
    if(!tmp140)
    {
      tmp142 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta143 = stringAppend(MMC_REFSTRINGLIT(tmp141),tmp142);
      {
        const char* assert_cond = "(roo.irRadExc.J[4] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta143));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta143));
        }
      }
      tmp144 = 1;
    }
  }
  threadData->lastEquationSolved = 2929;
}

/*
equation index: 2930
type: ALGORITHM

  assert(roo.irRadExc.J[5] <= 0.0, "Variable violating max constraint: roo.irRadExc.J[5] <= 0.0, has value: " + String(roo.irRadExc.J[5], "g"));
*/
void tmp_one_port_eqFunction_2930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2930};
  modelica_boolean tmp145;
  static const MMC_DEFSTRINGLIT(tmp146,72,"Variable violating max constraint: roo.irRadExc.J[5] <= 0.0, has value: ");
  modelica_string tmp147;
  modelica_metatype tmpMeta148;
  static int tmp149 = 0;
  if(!tmp149)
  {
    tmp145 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.J[5] variable */),0.0);
    if(!tmp145)
    {
      tmp147 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.J[5] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta148 = stringAppend(MMC_REFSTRINGLIT(tmp146),tmp147);
      {
        const char* assert_cond = "(roo.irRadExc.J[5] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta148));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta148));
        }
      }
      tmp149 = 1;
    }
  }
  threadData->lastEquationSolved = 2930;
}

/*
equation index: 2931
type: ALGORITHM

  assert(roo.irRadExc.J[6] <= 0.0, "Variable violating max constraint: roo.irRadExc.J[6] <= 0.0, has value: " + String(roo.irRadExc.J[6], "g"));
*/
void tmp_one_port_eqFunction_2931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2931};
  modelica_boolean tmp150;
  static const MMC_DEFSTRINGLIT(tmp151,72,"Variable violating max constraint: roo.irRadExc.J[6] <= 0.0, has value: ");
  modelica_string tmp152;
  modelica_metatype tmpMeta153;
  static int tmp154 = 0;
  if(!tmp154)
  {
    tmp150 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */),0.0);
    if(!tmp150)
    {
      tmp152 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta153 = stringAppend(MMC_REFSTRINGLIT(tmp151),tmp152);
      {
        const char* assert_cond = "(roo.irRadExc.J[6] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta153));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta153));
        }
      }
      tmp154 = 1;
    }
  }
  threadData->lastEquationSolved = 2931;
}

/*
equation index: 2932
type: ALGORITHM

  assert(roo.irRadExc.G[1] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadExc.G[1], has value: " + String(roo.irRadExc.G[1], "g"));
*/
void tmp_one_port_eqFunction_2932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2932};
  modelica_boolean tmp155;
  static const MMC_DEFSTRINGLIT(tmp156,72,"Variable violating min constraint: 0.0 <= roo.irRadExc.G[1], has value: ");
  modelica_string tmp157;
  modelica_metatype tmpMeta158;
  static int tmp159 = 0;
  if(!tmp159)
  {
    tmp155 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* roo.irRadExc.G[1] variable */),0.0);
    if(!tmp155)
    {
      tmp157 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* roo.irRadExc.G[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta158 = stringAppend(MMC_REFSTRINGLIT(tmp156),tmp157);
      {
        const char* assert_cond = "(roo.irRadExc.G[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta158));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta158));
        }
      }
      tmp159 = 1;
    }
  }
  threadData->lastEquationSolved = 2932;
}

/*
equation index: 2933
type: ALGORITHM

  assert(roo.irRadExc.G[2] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadExc.G[2], has value: " + String(roo.irRadExc.G[2], "g"));
*/
void tmp_one_port_eqFunction_2933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2933};
  modelica_boolean tmp160;
  static const MMC_DEFSTRINGLIT(tmp161,72,"Variable violating min constraint: 0.0 <= roo.irRadExc.G[2], has value: ");
  modelica_string tmp162;
  modelica_metatype tmpMeta163;
  static int tmp164 = 0;
  if(!tmp164)
  {
    tmp160 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* roo.irRadExc.G[2] variable */),0.0);
    if(!tmp160)
    {
      tmp162 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* roo.irRadExc.G[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta163 = stringAppend(MMC_REFSTRINGLIT(tmp161),tmp162);
      {
        const char* assert_cond = "(roo.irRadExc.G[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta163));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta163));
        }
      }
      tmp164 = 1;
    }
  }
  threadData->lastEquationSolved = 2933;
}

/*
equation index: 2934
type: ALGORITHM

  assert(roo.irRadExc.G[3] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadExc.G[3], has value: " + String(roo.irRadExc.G[3], "g"));
*/
void tmp_one_port_eqFunction_2934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2934};
  modelica_boolean tmp165;
  static const MMC_DEFSTRINGLIT(tmp166,72,"Variable violating min constraint: 0.0 <= roo.irRadExc.G[3], has value: ");
  modelica_string tmp167;
  modelica_metatype tmpMeta168;
  static int tmp169 = 0;
  if(!tmp169)
  {
    tmp165 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.irRadExc.G[3] variable */),0.0);
    if(!tmp165)
    {
      tmp167 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.irRadExc.G[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta168 = stringAppend(MMC_REFSTRINGLIT(tmp166),tmp167);
      {
        const char* assert_cond = "(roo.irRadExc.G[3] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta168));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta168));
        }
      }
      tmp169 = 1;
    }
  }
  threadData->lastEquationSolved = 2934;
}

/*
equation index: 2935
type: ALGORITHM

  assert(roo.irRadExc.G[4] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadExc.G[4], has value: " + String(roo.irRadExc.G[4], "g"));
*/
void tmp_one_port_eqFunction_2935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2935};
  modelica_boolean tmp170;
  static const MMC_DEFSTRINGLIT(tmp171,72,"Variable violating min constraint: 0.0 <= roo.irRadExc.G[4], has value: ");
  modelica_string tmp172;
  modelica_metatype tmpMeta173;
  static int tmp174 = 0;
  if(!tmp174)
  {
    tmp170 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.irRadExc.G[4] variable */),0.0);
    if(!tmp170)
    {
      tmp172 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.irRadExc.G[4] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta173 = stringAppend(MMC_REFSTRINGLIT(tmp171),tmp172);
      {
        const char* assert_cond = "(roo.irRadExc.G[4] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta173));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta173));
        }
      }
      tmp174 = 1;
    }
  }
  threadData->lastEquationSolved = 2935;
}

/*
equation index: 2936
type: ALGORITHM

  assert(roo.irRadExc.G[5] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadExc.G[5], has value: " + String(roo.irRadExc.G[5], "g"));
*/
void tmp_one_port_eqFunction_2936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2936};
  modelica_boolean tmp175;
  static const MMC_DEFSTRINGLIT(tmp176,72,"Variable violating min constraint: 0.0 <= roo.irRadExc.G[5], has value: ");
  modelica_string tmp177;
  modelica_metatype tmpMeta178;
  static int tmp179 = 0;
  if(!tmp179)
  {
    tmp175 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* roo.irRadExc.G[5] variable */),0.0);
    if(!tmp175)
    {
      tmp177 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* roo.irRadExc.G[5] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta178 = stringAppend(MMC_REFSTRINGLIT(tmp176),tmp177);
      {
        const char* assert_cond = "(roo.irRadExc.G[5] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta178));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta178));
        }
      }
      tmp179 = 1;
    }
  }
  threadData->lastEquationSolved = 2936;
}

/*
equation index: 2937
type: ALGORITHM

  assert(roo.irRadExc.G[6] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadExc.G[6], has value: " + String(roo.irRadExc.G[6], "g"));
*/
void tmp_one_port_eqFunction_2937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2937};
  modelica_boolean tmp180;
  static const MMC_DEFSTRINGLIT(tmp181,72,"Variable violating min constraint: 0.0 <= roo.irRadExc.G[6], has value: ");
  modelica_string tmp182;
  modelica_metatype tmpMeta183;
  static int tmp184 = 0;
  if(!tmp184)
  {
    tmp180 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* roo.irRadExc.G[6] variable */),0.0);
    if(!tmp180)
    {
      tmp182 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* roo.irRadExc.G[6] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta183 = stringAppend(MMC_REFSTRINGLIT(tmp181),tmp182);
      {
        const char* assert_cond = "(roo.irRadExc.G[6] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta183));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta183));
        }
      }
      tmp184 = 1;
    }
  }
  threadData->lastEquationSolved = 2937;
}

/*
equation index: 2912
type: ALGORITHM

  assert(roo.air.fluInt.p >= 8e4 and roo.air.fluInt.p <= 1.2e5, "Variable violating min/max constraint: 8e4 <= roo.air.fluInt.p <= 1.2e5, has value: " + String(roo.air.fluInt.p, "g"));
*/
void tmp_one_port_eqFunction_2912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2912};
  modelica_boolean tmp185;
  modelica_boolean tmp186;
  static const MMC_DEFSTRINGLIT(tmp187,84,"Variable violating min/max constraint: 8e4 <= roo.air.fluInt.p <= 1.2e5, has value: ");
  modelica_string tmp188;
  modelica_metatype tmpMeta189;
  static int tmp190 = 0;
  if(!tmp190)
  {
    tmp185 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* roo.air.fluInt.p DUMMY_STATE */),8e4);
    tmp186 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* roo.air.fluInt.p DUMMY_STATE */),1.2e5);
    if(!(tmp185 && tmp186))
    {
      tmp188 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* roo.air.fluInt.p DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta189 = stringAppend(MMC_REFSTRINGLIT(tmp187),tmp188);
      {
        const char* assert_cond = "(roo.air.fluInt.p >= 8e4 and roo.air.fluInt.p <= 1.2e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDFluidInterface.mo",44,3,50,71,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta189));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDFluidInterface.mo",44,3,50,71,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta189));
        }
      }
      tmp190 = 1;
    }
  }
  threadData->lastEquationSolved = 2912;
}

/*
equation index: 2911
type: ALGORITHM

  assert(roo.air.cfd.u[11] >= -1e5 and roo.air.cfd.u[11] <= 1e5, "Variable violating min/max constraint: -1e5 <= roo.air.cfd.u[11] <= 1e5, has value: " + String(roo.air.cfd.u[11], "g"));
*/
void tmp_one_port_eqFunction_2911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2911};
  modelica_boolean tmp191;
  modelica_boolean tmp192;
  static const MMC_DEFSTRINGLIT(tmp193,84,"Variable violating min/max constraint: -1e5 <= roo.air.cfd.u[11] <= 1e5, has value: ");
  modelica_string tmp194;
  modelica_metatype tmpMeta195;
  static int tmp196 = 0;
  if(!tmp196)
  {
    tmp191 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* roo.air.cfd.u[11] variable */),-1e5);
    tmp192 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* roo.air.cfd.u[11] variable */),1e5);
    if(!(tmp191 && tmp192))
    {
      tmp194 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* roo.air.cfd.u[11] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta195 = stringAppend(MMC_REFSTRINGLIT(tmp193),tmp194);
      {
        const char* assert_cond = "(roo.air.cfd.u[11] >= -1e5 and roo.air.cfd.u[11] <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta195));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta195));
        }
      }
      tmp196 = 1;
    }
  }
  threadData->lastEquationSolved = 2911;
}

/*
equation index: 2910
type: ALGORITHM

  assert(roo.air.cfd.u[12] >= 200.0 and roo.air.cfd.u[12] <= 373.15, "Variable violating min/max constraint: 200.0 <= roo.air.cfd.u[12] <= 373.15, has value: " + String(roo.air.cfd.u[12], "g"));
*/
void tmp_one_port_eqFunction_2910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2910};
  modelica_boolean tmp197;
  modelica_boolean tmp198;
  static const MMC_DEFSTRINGLIT(tmp199,88,"Variable violating min/max constraint: 200.0 <= roo.air.cfd.u[12] <= 373.15, has value: ");
  modelica_string tmp200;
  modelica_metatype tmpMeta201;
  static int tmp202 = 0;
  if(!tmp202)
  {
    tmp197 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* roo.air.cfd.u[12] variable */),200.0);
    tmp198 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* roo.air.cfd.u[12] variable */),373.15);
    if(!(tmp197 && tmp198))
    {
      tmp200 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* roo.air.cfd.u[12] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta201 = stringAppend(MMC_REFSTRINGLIT(tmp199),tmp200);
      {
        const char* assert_cond = "(roo.air.cfd.u[12] >= 200.0 and roo.air.cfd.u[12] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta201));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta201));
        }
      }
      tmp202 = 1;
    }
  }
  threadData->lastEquationSolved = 2910;
}

/*
equation index: 2909
type: ALGORITHM

  assert(roo.air.cfd.u[13] >= 200.0 and roo.air.cfd.u[13] <= 373.15, "Variable violating min/max constraint: 200.0 <= roo.air.cfd.u[13] <= 373.15, has value: " + String(roo.air.cfd.u[13], "g"));
*/
void tmp_one_port_eqFunction_2909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2909};
  modelica_boolean tmp203;
  modelica_boolean tmp204;
  static const MMC_DEFSTRINGLIT(tmp205,88,"Variable violating min/max constraint: 200.0 <= roo.air.cfd.u[13] <= 373.15, has value: ");
  modelica_string tmp206;
  modelica_metatype tmpMeta207;
  static int tmp208 = 0;
  if(!tmp208)
  {
    tmp203 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* roo.air.cfd.u[13] variable */),200.0);
    tmp204 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* roo.air.cfd.u[13] variable */),373.15);
    if(!(tmp203 && tmp204))
    {
      tmp206 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* roo.air.cfd.u[13] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta207 = stringAppend(MMC_REFSTRINGLIT(tmp205),tmp206);
      {
        const char* assert_cond = "(roo.air.cfd.u[13] >= 200.0 and roo.air.cfd.u[13] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta207));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta207));
        }
      }
      tmp208 = 1;
    }
  }
  threadData->lastEquationSolved = 2909;
}

/*
equation index: 2908
type: ALGORITHM

  assert(sup.ports[1].h_outflow >= -1e10 and sup.ports[1].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= sup.ports[1].h_outflow <= 1e10, has value: " + String(sup.ports[1].h_outflow, "g"));
*/
void tmp_one_port_eqFunction_2908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2908};
  modelica_boolean tmp209;
  modelica_boolean tmp210;
  static const MMC_DEFSTRINGLIT(tmp211,91,"Variable violating min/max constraint: -1e10 <= sup.ports[1].h_outflow <= 1e10, has value: ");
  modelica_string tmp212;
  modelica_metatype tmpMeta213;
  static int tmp214 = 0;
  if(!tmp214)
  {
    tmp209 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* sup.ports[1].h_outflow variable */),-1e10);
    tmp210 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* sup.ports[1].h_outflow variable */),1e10);
    if(!(tmp209 && tmp210))
    {
      tmp212 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* sup.ports[1].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta213 = stringAppend(MMC_REFSTRINGLIT(tmp211),tmp212);
      {
        const char* assert_cond = "(sup.ports[1].h_outflow >= -1e10 and sup.ports[1].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta213));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta213));
        }
      }
      tmp214 = 1;
    }
  }
  threadData->lastEquationSolved = 2908;
}

/*
equation index: 2907
type: ALGORITHM

  assert(retSink.ports[1].h_outflow >= -1e10 and retSink.ports[1].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= retSink.ports[1].h_outflow <= 1e10, has value: " + String(retSink.ports[1].h_outflow, "g"));
*/
void tmp_one_port_eqFunction_2907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2907};
  modelica_boolean tmp215;
  modelica_boolean tmp216;
  static const MMC_DEFSTRINGLIT(tmp217,95,"Variable violating min/max constraint: -1e10 <= retSink.ports[1].h_outflow <= 1e10, has value: ");
  modelica_string tmp218;
  modelica_metatype tmpMeta219;
  static int tmp220 = 0;
  if(!tmp220)
  {
    tmp215 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* retSink.ports[1].h_outflow variable */),-1e10);
    tmp216 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* retSink.ports[1].h_outflow variable */),1e10);
    if(!(tmp215 && tmp216))
    {
      tmp218 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* retSink.ports[1].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta219 = stringAppend(MMC_REFSTRINGLIT(tmp217),tmp218);
      {
        const char* assert_cond = "(retSink.ports[1].h_outflow >= -1e10 and retSink.ports[1].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta219));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta219));
        }
      }
      tmp220 = 1;
    }
  }
  threadData->lastEquationSolved = 2907;
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int tmp_one_port_checkForAsserts(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[41])(DATA*, threadData_t*) = {
    tmp_one_port_eqFunction_2938,
    tmp_one_port_eqFunction_2939,
    tmp_one_port_eqFunction_2940,
    tmp_one_port_eqFunction_2941,
    tmp_one_port_eqFunction_2942,
    tmp_one_port_eqFunction_2943,
    tmp_one_port_eqFunction_2944,
    tmp_one_port_eqFunction_2945,
    tmp_one_port_eqFunction_2946,
    tmp_one_port_eqFunction_2947,
    tmp_one_port_eqFunction_2913,
    tmp_one_port_eqFunction_2914,
    tmp_one_port_eqFunction_2915,
    tmp_one_port_eqFunction_2916,
    tmp_one_port_eqFunction_2917,
    tmp_one_port_eqFunction_2918,
    tmp_one_port_eqFunction_2919,
    tmp_one_port_eqFunction_2920,
    tmp_one_port_eqFunction_2921,
    tmp_one_port_eqFunction_2922,
    tmp_one_port_eqFunction_2923,
    tmp_one_port_eqFunction_2924,
    tmp_one_port_eqFunction_2925,
    tmp_one_port_eqFunction_2926,
    tmp_one_port_eqFunction_2927,
    tmp_one_port_eqFunction_2928,
    tmp_one_port_eqFunction_2929,
    tmp_one_port_eqFunction_2930,
    tmp_one_port_eqFunction_2931,
    tmp_one_port_eqFunction_2932,
    tmp_one_port_eqFunction_2933,
    tmp_one_port_eqFunction_2934,
    tmp_one_port_eqFunction_2935,
    tmp_one_port_eqFunction_2936,
    tmp_one_port_eqFunction_2937,
    tmp_one_port_eqFunction_2912,
    tmp_one_port_eqFunction_2911,
    tmp_one_port_eqFunction_2910,
    tmp_one_port_eqFunction_2909,
    tmp_one_port_eqFunction_2908,
    tmp_one_port_eqFunction_2907
  };
  
  for (int id = 0; id < 41; id++) {
    eqFunctions[id](data, threadData);
  }
  
  return 0;
}

#if defined(__cplusplus)
}
#endif
