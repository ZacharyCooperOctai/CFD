#include "omc_simulation_settings.h"
#include "tmp_one_port_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "tmp_one_port_includes.h"


DLLDirection
modelica_string omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAbsolutePath(threadData_t *threadData, modelica_string _uri)
{
  modelica_string _path = NULL;
  _tailrecursive: OMC_LABEL_UNUSED
  // _path has no default value.
  _path = OpenModelica__uriToFilename(_uri);
  _return: OMC_LABEL_UNUSED
  return _path;
}

DLLDirection
modelica_real omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAltitudeLocationTMY3(threadData_t *threadData, modelica_string _filNam)
{
  modelica_real _alt;
  modelica_integer _nexInd;
  modelica_string _element = NULL;
  _tailrecursive: OMC_LABEL_UNUSED
  // _alt has no default value.
  // _nexInd has no default value.
  // _element has no default value.
  _element = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLastHeaderElementTMY3(threadData, _filNam, _OMC_LIT2, _OMC_LIT3);

  _nexInd = omc_Modelica_Utilities_Strings_Advanced_scanReal(threadData, _element, ((modelica_integer) 1), 0 /* false */ ,&_alt);
  _return: OMC_LABEL_UNUSED
  return _alt;
}
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAltitudeLocationTMY3(threadData_t *threadData, modelica_metatype _filNam)
{
  modelica_real _alt;
  modelica_metatype out_alt;
  _alt = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAltitudeLocationTMY3(threadData, _filNam);
  out_alt = mmc_mk_rcon(_alt);
  return out_alt;
}

DLLDirection
modelica_string omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3(threadData_t *threadData, modelica_string _filNam, modelica_string _start, modelica_string _name, modelica_integer _position)
{
  modelica_string _element = NULL;
  modelica_string _lin = NULL;
  modelica_integer _iLin;
  modelica_integer _index;
  modelica_integer _staInd;
  modelica_integer _nexInd;
  modelica_boolean _found;
  modelica_boolean _EOF;
  modelica_string _fouDel = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  static int tmp11 = 0;
  modelica_integer tmp12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  static int tmp21 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _element has no default value.
  // _lin has no default value.
  // _iLin has no default value.
  _index = ((modelica_integer) 0);
  // _staInd has no default value.
  // _nexInd has no default value.
  // _found has no default value.
  // _EOF has no default value.
  // _fouDel has no default value.
  _iLin = ((modelica_integer) 0);

  _EOF = 0 /* false */;

  while(1)
  {
    if(!((!_EOF) && (_index == ((modelica_integer) 0)))) break;
    _iLin = _iLin + ((modelica_integer) 1);

    _lin = omc_Modelica_Utilities_Streams_readLine(threadData, _filNam, _iLin ,&_EOF);

    _index = omc_Modelica_Utilities_Strings_find(threadData, _lin, _start, ((modelica_integer) 1), 0 /* false */);
  }

  {
    if(!(!_EOF))
    {
      tmpMeta1 = stringAppend(_OMC_LIT4,_start);
      tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT5);
      tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT6);
      {
        FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/getHeaderElementTMY3.mo",38,3,39,71,1};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta3));
      }
    }
  }

  _nexInd = ((modelica_integer) 1);

  tmp12 = ((modelica_integer) 1); tmp13 = 1; tmp14 = _position - ((modelica_integer) 1);
  if(!(((tmp13 > 0) && (tmp12 > tmp14)) || ((tmp13 < 0) && (tmp12 < tmp14))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp12, tmp14); _i += tmp13)
    {
      _nexInd = omc_Modelica_Utilities_Strings_find(threadData, _lin, _OMC_LIT7, _nexInd + ((modelica_integer) 1), 1 /* true */);

      {
        if(!(_nexInd > ((modelica_integer) 0)))
        {
          tmpMeta5 = stringAppend(_OMC_LIT8,_name);
          tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT9);
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT10);
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT11);
          tmpMeta9 = stringAppend(tmpMeta8,_lin);
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT12);
          {
            FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/getHeaderElementTMY3.mo",47,4,49,20,1};
            omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta10));
          }
        }
      }
    }
  }

  _staInd = _nexInd;

  _nexInd = omc_Modelica_Utilities_Strings_find(threadData, _lin, _OMC_LIT7, _nexInd + ((modelica_integer) 1), 1 /* true */);

  {
    if(!(_nexInd > ((modelica_integer) 0)))
    {
      tmpMeta15 = stringAppend(_OMC_LIT8,_name);
      tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT9);
      tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT10);
      tmpMeta18 = stringAppend(tmpMeta17,_OMC_LIT11);
      tmpMeta19 = stringAppend(tmpMeta18,_lin);
      tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT12);
      {
        FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/getHeaderElementTMY3.mo",57,3,59,21,1};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta20));
      }
    }
  }

  _element = omc_Modelica_Utilities_Strings_substring(threadData, _lin, _staInd + ((modelica_integer) 1), _nexInd - ((modelica_integer) 1));
  _return: OMC_LABEL_UNUSED
  return _element;
}
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3(threadData_t *threadData, modelica_metatype _filNam, modelica_metatype _start, modelica_metatype _name, modelica_metatype _position)
{
  modelica_integer tmp1;
  modelica_string _element = NULL;
  tmp1 = mmc_unbox_integer(_position);
  _element = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3(threadData, _filNam, _start, _name, tmp1);
  /* skip box _element; String */
  return _element;
}

DLLDirection
modelica_string omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLastHeaderElementTMY3(threadData_t *threadData, modelica_string _filNam, modelica_string _start, modelica_string _name)
{
  modelica_string _element = NULL;
  modelica_string _lin = NULL;
  modelica_integer _iLin;
  modelica_integer _index;
  modelica_integer _staInd;
  modelica_integer _lasInd;
  modelica_boolean _EOF;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  static int tmp4 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _element has no default value.
  // _lin has no default value.
  // _iLin has no default value.
  _index = ((modelica_integer) 0);
  // _staInd has no default value.
  // _lasInd has no default value.
  // _EOF has no default value.
  _iLin = ((modelica_integer) 0);

  _EOF = 0 /* false */;

  while(1)
  {
    if(!((!_EOF) && (_index == ((modelica_integer) 0)))) break;
    _iLin = _iLin + ((modelica_integer) 1);

    _lin = omc_Modelica_Utilities_Streams_readLine(threadData, _filNam, _iLin ,&_EOF);

    _index = omc_Modelica_Utilities_Strings_find(threadData, _lin, _start, ((modelica_integer) 1), 0 /* false */);
  }

  {
    if(!(!_EOF))
    {
      tmpMeta1 = stringAppend(_OMC_LIT4,_start);
      tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT5);
      tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT6);
      {
        FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/getLastHeaderElementTMY3.mo",34,3,35,71,1};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta3));
      }
    }
  }

  _staInd = omc_Modelica_Utilities_Strings_findLast(threadData, _lin, _OMC_LIT7, ((modelica_integer) 0), 1 /* true */);

  _lasInd = ((modelica_integer)floor(((modelica_real)omc_Modelica_Utilities_Strings_length(threadData, _lin))));

  _element = omc_Modelica_Utilities_Strings_substring(threadData, _lin, _staInd + ((modelica_integer) 1), _lasInd);
  _return: OMC_LABEL_UNUSED
  return _element;
}

DLLDirection
modelica_real omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3(threadData_t *threadData, modelica_string _filNam)
{
  modelica_real _lat;
  modelica_integer _nexInd;
  modelica_string _element = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  static int tmp3 = 0;
  modelica_real tmp4;
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_string tmp8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  static int tmp12 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _lat has no default value.
  // _nexInd has no default value.
  // _element has no default value.
  _element = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3(threadData, _filNam, _OMC_LIT2, _OMC_LIT16, ((modelica_integer) 7));

  _nexInd = omc_Modelica_Utilities_Strings_Advanced_scanReal(threadData, _element, ((modelica_integer) 1), 0 /* false */ ,&_lat);

  {
    if(!(_nexInd > ((modelica_integer) 1)))
    {
      tmpMeta1 = stringAppend(_OMC_LIT17,_element);
      tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT18);
      {
        FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/getLatitudeTMY3.mo",23,4,24,62,1};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta2));
      }
    }
  }

  tmp4 = 180.0;
  if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "lat * 3.141592653589793 / 180.0");}
  _lat = ((_lat) * (3.141592653589793)) / tmp4;

  {
    if(!(fabs(_lat) <= 3.141592653589793))
    {
      tmp5 = modelica_real_to_modelica_string(_lat, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta6 = stringAppend(_OMC_LIT19,tmp5);
      tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT20);
      tmp9 = 3.141592653589793;
      if (tmp9 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "lat * 180.0 / 3.141592653589793");}
      tmp8 = modelica_real_to_modelica_string(((_lat) * (180.0)) / tmp9, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta10 = stringAppend(tmpMeta7,tmp8);
      tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT21);
      {
        FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/getLatitudeTMY3.mo",28,4,30,84,1};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta11));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _lat;
}
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3(threadData_t *threadData, modelica_metatype _filNam)
{
  modelica_real _lat;
  modelica_metatype out_lat;
  _lat = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3(threadData, _filNam);
  out_lat = mmc_mk_rcon(_lat);
  return out_lat;
}

DLLDirection
modelica_real omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3(threadData_t *threadData, modelica_string _filNam)
{
  modelica_real _lon;
  modelica_integer _nexInd;
  modelica_string _element = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  static int tmp3 = 0;
  modelica_real tmp4;
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_string tmp8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  static int tmp12 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _lon has no default value.
  // _nexInd has no default value.
  // _element has no default value.
  _element = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3(threadData, _filNam, _OMC_LIT2, _OMC_LIT22, ((modelica_integer) 8));

  _nexInd = omc_Modelica_Utilities_Strings_Advanced_scanReal(threadData, _element, ((modelica_integer) 1), 0 /* false */ ,&_lon);

  {
    if(!(_nexInd > ((modelica_integer) 1)))
    {
      tmpMeta1 = stringAppend(_OMC_LIT23,_element);
      tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT18);
      {
        FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/getLongitudeTMY3.mo",23,4,24,62,1};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta2));
      }
    }
  }

  tmp4 = 180.0;
  if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "lon * 3.141592653589793 / 180.0");}
  _lon = ((_lon) * (3.141592653589793)) / tmp4;

  {
    if(!(fabs(_lon) < 6.283185307179586))
    {
      tmp5 = modelica_real_to_modelica_string(_lon, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta6 = stringAppend(_OMC_LIT24,tmp5);
      tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT20);
      tmp9 = 3.141592653589793;
      if (tmp9 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "lon * 180.0 / 3.141592653589793");}
      tmp8 = modelica_real_to_modelica_string(((_lon) * (180.0)) / tmp9, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta10 = stringAppend(tmpMeta7,tmp8);
      tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT21);
      {
        FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/getLongitudeTMY3.mo",28,4,30,84,1};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta11));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _lon;
}
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3(threadData_t *threadData, modelica_metatype _filNam)
{
  modelica_real _lon;
  modelica_metatype out_lon;
  _lon = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3(threadData, _filNam);
  out_lon = mmc_mk_rcon(_lon);
  return out_lon;
}

real_array omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3(threadData_t *threadData, modelica_string _filNam, modelica_string _tabNam)
{
  void *_timeSpan_c89;
  real_array _timeSpan;
  alloc_real_array(&(_timeSpan), 1, (_index_t)2); // _timeSpan has no default value.
  _timeSpan_c89 = (void*) data_of_real_c89_array(_timeSpan);
  getTimeSpan(MMC_STRINGDATA(_filNam), MMC_STRINGDATA(_tabNam), (double*) _timeSpan_c89);
  return _timeSpan;
}
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3(threadData_t *threadData, modelica_metatype _filNam, modelica_metatype _tabNam)
{
  real_array _timeSpan;
  modelica_metatype out_timeSpan;
  _timeSpan = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3(threadData, _filNam, _tabNam);
  out_timeSpan = mmc_mk_modelica_array(_timeSpan);
  return out_timeSpan;
}

DLLDirection
modelica_real omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3(threadData_t *threadData, modelica_string _filNam)
{
  modelica_real _timZon;
  modelica_integer _nexInd;
  modelica_string _element = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  static int tmp3 = 0;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_string tmp7;
  modelica_real tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  static int tmp11 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _timZon has no default value.
  // _nexInd has no default value.
  // _element has no default value.
  _element = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3(threadData, _filNam, _OMC_LIT2, _OMC_LIT22, ((modelica_integer) 9));

  _nexInd = omc_Modelica_Utilities_Strings_Advanced_scanReal(threadData, _element, ((modelica_integer) 1), 0 /* false */ ,&_timZon);

  {
    if(!(_nexInd > ((modelica_integer) 1)))
    {
      tmpMeta1 = stringAppend(_OMC_LIT29,_element);
      tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT18);
      {
        FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/getTimeZoneTMY3.mo",23,4,24,62,1};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta2));
      }
    }
  }

  _timZon = (_timZon) * (3600.0);

  {
    if(!(fabs(_timZon) < 86400.0))
    {
      tmp4 = modelica_real_to_modelica_string(_timZon, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta5 = stringAppend(_OMC_LIT30,tmp4);
      tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT20);
      tmp8 = 3600.0;
      if (tmp8 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "timZon / 3600.0");}
      tmp7 = modelica_real_to_modelica_string((_timZon) / tmp8, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta9 = stringAppend(tmpMeta6,tmp7);
      tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT31);
      {
        FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/getTimeZoneTMY3.mo",27,4,29,67,1};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta10));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _timZon;
}
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3(threadData_t *threadData, modelica_metatype _filNam)
{
  modelica_real _timZon;
  modelica_metatype out_timZon;
  _timZon = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3(threadData, _filNam);
  out_timZon = mmc_mk_rcon(_timZon);
  return out_timZon;
}

modelica_real omc_Buildings_ThermalZones_Detailed_BaseClasses_cfdExchangeData(threadData_t *threadData, modelica_integer _flag, modelica_real _t, modelica_real _dt, real_array _u, modelica_integer _nU, modelica_integer _nY, real_array *out_y, modelica_integer *out_retVal)
{
  double _t_ext;
  double _dt_ext;
  int _nU_ext;
  int _nY_ext;
  double _modTimRea_ext;
  void *_u_c89;
  void *_y_c89;
  int _retVal_ext;
  modelica_real _modTimRea;
  real_array _y;
  modelica_integer _retVal;
  // _modTimRea has no default value.
  alloc_real_array(&(_y), 1, (_index_t)_nY); // _y has no default value.
  // _retVal has no default value.
  _t_ext = (double)_t;
  _dt_ext = (double)_dt;
  _nU_ext = (int)_nU;
  _nY_ext = (int)_nY;_u_c89 = (void*) data_of_real_c89_array(_u);
  _y_c89 = (void*) data_of_real_c89_array(_y);
  _retVal_ext = cfdExchangeData(_t_ext, _dt_ext, (const double*) _u_c89, _nU_ext, _nY_ext, &_modTimRea_ext, (double*) _y_c89);
  _modTimRea = (modelica_real)_modTimRea_ext;
  _retVal = (modelica_integer)_retVal_ext;
  if (out_y) { if (out_y->dim_size == NULL) {copy_real_array(_y, out_y);} else {real_array_copy_data(_y, *out_y);} }
  if (out_retVal) { *out_retVal = _retVal; }
  return _modTimRea;
}
modelica_metatype boxptr_Buildings_ThermalZones_Detailed_BaseClasses_cfdExchangeData(threadData_t *threadData, modelica_metatype _flag, modelica_metatype _t, modelica_metatype _dt, modelica_metatype _u, modelica_metatype _nU, modelica_metatype _nY, modelica_metatype *out_y, modelica_metatype *out_retVal)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  real_array _y;
  modelica_integer _retVal;
  modelica_real _modTimRea;
  modelica_metatype out_modTimRea;
  tmp1 = mmc_unbox_integer(_flag);
  tmp2 = mmc_unbox_real(_t);
  tmp3 = mmc_unbox_real(_dt);
  tmp4 = mmc_unbox_integer(_nU);
  tmp5 = mmc_unbox_integer(_nY);
  _modTimRea = omc_Buildings_ThermalZones_Detailed_BaseClasses_cfdExchangeData(threadData, tmp1, tmp2, tmp3, *((base_array_t*)_u), tmp4, tmp5, &_y, &_retVal);
  out_modTimRea = mmc_mk_rcon(_modTimRea);
  if (out_y) { *out_y = mmc_mk_modelica_array(_y); }
  if (out_retVal) { *out_retVal = mmc_mk_icon(_retVal); }
  return out_modTimRea;
}

modelica_integer omc_Buildings_ThermalZones_Detailed_BaseClasses_cfdStartCosimulation(threadData_t *threadData, modelica_string _cfdFilNam, string_array _name, real_array _A, real_array _til, integer_array _bouCon, modelica_integer _nPorts, string_array _portName, modelica_boolean _haveSensor, string_array _sensorName, modelica_boolean _haveShade, modelica_integer _nSur, modelica_integer _nSen, modelica_integer _nConExtWin, modelica_integer _nXi, modelica_integer _nC, modelica_real _rho_start)
{
  integer_array _bouCon_packed;
  int _nPorts_ext;
  int _haveSensor_ext;
  int _haveShade_ext;
  int _nSur_ext;
  int _nSen_ext;
  int _nConExtWin_ext;
  int _nXi_ext;
  int _nC_ext;
  double _rho_start_ext;
  void *_name_c89;
  void *_A_c89;
  void *_til_c89;
  void *_bouCon_c89;
  void *_portName_c89;
  void *_sensorName_c89;
  int _retVal_ext;
  modelica_integer _retVal;
  // _retVal has no default value.
  pack_alloc_integer_array(&_bouCon, &_bouCon_packed);

  _nPorts_ext = (int)_nPorts;
  _haveSensor_ext = (int)_haveSensor;
  _haveShade_ext = (int)_haveShade;
  _nSur_ext = (int)_nSur;
  _nSen_ext = (int)_nSen;
  _nConExtWin_ext = (int)_nConExtWin;
  _nXi_ext = (int)_nXi;
  _nC_ext = (int)_nC;
  _rho_start_ext = (double)_rho_start;_name_c89 = (void*) data_of_string_c89_array(_name);
  _A_c89 = (void*) data_of_real_c89_array(_A);
  _til_c89 = (void*) data_of_real_c89_array(_til);
  _bouCon_c89 = (void*) data_of_integer_c89_array(_bouCon_packed);
  _portName_c89 = (void*) data_of_string_c89_array(_portName);
  _sensorName_c89 = (void*) data_of_string_c89_array(_sensorName);
  _retVal_ext = cfdStartCosimulation(MMC_STRINGDATA(_cfdFilNam), (const char**) _name_c89, (const double*) _A_c89, (const double*) _til_c89, (const int*) _bouCon_c89, _nPorts_ext, (const char**) _portName_c89, _haveSensor_ext, (const char**) _sensorName_c89, _haveShade_ext, _nSur_ext, _nSen_ext, _nConExtWin_ext, _nXi_ext, _nC_ext, _rho_start_ext);
  _retVal = (modelica_integer)_retVal_ext;
  return _retVal;
}
modelica_metatype boxptr_Buildings_ThermalZones_Detailed_BaseClasses_cfdStartCosimulation(threadData_t *threadData, modelica_metatype _cfdFilNam, modelica_metatype _name, modelica_metatype _A, modelica_metatype _til, modelica_metatype _bouCon, modelica_metatype _nPorts, modelica_metatype _portName, modelica_metatype _haveSensor, modelica_metatype _sensorName, modelica_metatype _haveShade, modelica_metatype _nSur, modelica_metatype _nSen, modelica_metatype _nConExtWin, modelica_metatype _nXi, modelica_metatype _nC, modelica_metatype _rho_start)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_real tmp9;
  modelica_integer _retVal;
  modelica_metatype out_retVal;
  tmp1 = mmc_unbox_integer(_nPorts);
  tmp2 = mmc_unbox_integer(_haveSensor);
  tmp3 = mmc_unbox_integer(_haveShade);
  tmp4 = mmc_unbox_integer(_nSur);
  tmp5 = mmc_unbox_integer(_nSen);
  tmp6 = mmc_unbox_integer(_nConExtWin);
  tmp7 = mmc_unbox_integer(_nXi);
  tmp8 = mmc_unbox_integer(_nC);
  tmp9 = mmc_unbox_real(_rho_start);
  _retVal = omc_Buildings_ThermalZones_Detailed_BaseClasses_cfdStartCosimulation(threadData, _cfdFilNam, *((base_array_t*)_name), *((base_array_t*)_A), *((base_array_t*)_til), *((base_array_t*)_bouCon), tmp1, *((base_array_t*)_portName), tmp2, *((base_array_t*)_sensorName), tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9);
  out_retVal = mmc_mk_icon(_retVal);
  return out_retVal;
}

modelica_complex omc_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_constructor(threadData_t *threadData)
{
  void * _FFDThre_ext;
  modelica_complex _FFDThre;
  // _FFDThre has no default value.
  _FFDThre_ext = cfdcosim();
  _FFDThre = (modelica_complex)_FFDThre_ext;
  return _FFDThre;
}
modelica_metatype boxptr_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_constructor(threadData_t *threadData)
{
  modelica_complex _FFDThre;
  _FFDThre = omc_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_constructor(threadData);
  /* skip box _FFDThre; ExternalObject Buildings.ThermalZones.Detailed.BaseClasses.CFDThread */
  return _FFDThre;
}

void omc_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_destructor(threadData_t *threadData, modelica_complex _FFDThre)
{
  void * _FFDThre_ext;
  _FFDThre_ext = (void *)_FFDThre;
  cfdSendStopCommand(_FFDThre_ext);
  return;
}
void boxptr_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_destructor(threadData_t *threadData, modelica_metatype _FFDThre)
{
  omc_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_destructor(threadData, _FFDThre);
  return;
}

modelica_real omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData_t *threadData, modelica_complex _tableID)
{
  void * _tableID_ext;
  double _uMax_ext;
  modelica_real _uMax;
  // _uMax has no default value.
  _tableID_ext = (void *)_tableID;
  _uMax_ext = ModelicaStandardTables_CombiTable1D_maximumAbscissa(_tableID_ext);
  _uMax = (modelica_real)_uMax_ext;
  return _uMax;
}
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData_t *threadData, modelica_metatype _tableID)
{
  modelica_real _uMax;
  modelica_metatype out_uMax;
  _uMax = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData, _tableID);
  out_uMax = mmc_mk_rcon(_uMax);
  return out_uMax;
}

modelica_real omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData_t *threadData, modelica_complex _tableID)
{
  void * _tableID_ext;
  double _uMin_ext;
  modelica_real _uMin;
  // _uMin has no default value.
  _tableID_ext = (void *)_tableID;
  _uMin_ext = ModelicaStandardTables_CombiTable1D_minimumAbscissa(_tableID_ext);
  _uMin = (modelica_real)_uMin_ext;
  return _uMin;
}
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData_t *threadData, modelica_metatype _tableID)
{
  modelica_real _uMin;
  modelica_metatype out_uMin;
  _uMin = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData, _tableID);
  out_uMin = mmc_mk_rcon(_uMin);
  return out_uMin;
}

modelica_real omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData_t *threadData, modelica_complex _tableID, modelica_integer _icol, modelica_real _u)
{
  void * _tableID_ext;
  int _icol_ext;
  double _u_ext;
  double _y_ext;
  modelica_real _y;
  // _y has no default value.
  _tableID_ext = (void *)_tableID;
  _icol_ext = (int)_icol;
  _u_ext = (double)_u;
  _y_ext = ModelicaStandardTables_CombiTable1D_getValue(_tableID_ext, _icol_ext, _u_ext);
  _y = (modelica_real)_y_ext;
  return _y;
}
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData_t *threadData, modelica_metatype _tableID, modelica_metatype _icol, modelica_metatype _u)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_integer(_icol);
  tmp2 = mmc_unbox_real(_u);
  _y = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, _tableID, tmp1, tmp2);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

modelica_complex omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData_t *threadData, modelica_string _tableName, modelica_string _fileName, real_array _table, integer_array _columns, modelica_integer _smoothness, modelica_integer _extrapolation, modelica_boolean _verboseRead, modelica_string _delimiter, modelica_integer _nHeaderLines)
{
  integer_array _columns_packed;
  int _smoothness_ext;
  int _extrapolation_ext;
  int _verboseRead_ext;
  int _nHeaderLines_ext;
  void *_table_c89;
  void *_columns_c89;
  void * _externalCombiTable1D_ext;
  modelica_complex _externalCombiTable1D;
  // _externalCombiTable1D has no default value.
  pack_alloc_integer_array(&_columns, &_columns_packed);

  _smoothness_ext = (int)_smoothness;
  _extrapolation_ext = (int)_extrapolation;
  _verboseRead_ext = (int)_verboseRead;
  _nHeaderLines_ext = (int)_nHeaderLines;_table_c89 = (void*) data_of_real_c89_array(_table);
  _columns_c89 = (void*) data_of_integer_c89_array(_columns_packed);
  _externalCombiTable1D_ext = ModelicaStandardTables_CombiTable1D_init3(MMC_STRINGDATA(_fileName), MMC_STRINGDATA(_tableName), (const double*) _table_c89, size_of_dimension_base_array(_table, ((modelica_integer) 1)), size_of_dimension_base_array(_table, ((modelica_integer) 2)), (const int*) _columns_c89, size_of_dimension_base_array(_columns, ((modelica_integer) 1)), _smoothness_ext, _extrapolation_ext, _verboseRead_ext, MMC_STRINGDATA(_delimiter), _nHeaderLines_ext);
  _externalCombiTable1D = (modelica_complex)_externalCombiTable1D_ext;
  return _externalCombiTable1D;
}
modelica_metatype boxptr_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData_t *threadData, modelica_metatype _tableName, modelica_metatype _fileName, modelica_metatype _table, modelica_metatype _columns, modelica_metatype _smoothness, modelica_metatype _extrapolation, modelica_metatype _verboseRead, modelica_metatype _delimiter, modelica_metatype _nHeaderLines)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_complex _externalCombiTable1D;
  tmp1 = mmc_unbox_integer(_smoothness);
  tmp2 = mmc_unbox_integer(_extrapolation);
  tmp3 = mmc_unbox_integer(_verboseRead);
  tmp4 = mmc_unbox_integer(_nHeaderLines);
  _externalCombiTable1D = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, _tableName, _fileName, *((base_array_t*)_table), *((base_array_t*)_columns), tmp1, tmp2, tmp3, _delimiter, tmp4);
  /* skip box _externalCombiTable1D; ExternalObject Modelica.Blocks.Types.ExternalCombiTable1D */
  return _externalCombiTable1D;
}

void omc_Modelica_Blocks_Types_ExternalCombiTable1D_destructor(threadData_t *threadData, modelica_complex _externalCombiTable1D)
{
  void * _externalCombiTable1D_ext;
  _externalCombiTable1D_ext = (void *)_externalCombiTable1D;
  ModelicaStandardTables_CombiTable1D_close(_externalCombiTable1D_ext);
  return;
}
void boxptr_Modelica_Blocks_Types_ExternalCombiTable1D_destructor(threadData_t *threadData, modelica_metatype _externalCombiTable1D)
{
  omc_Modelica_Blocks_Types_ExternalCombiTable1D_destructor(threadData, _externalCombiTable1D);
  return;
}

DLLDirection
void omc_Modelica_Fluid_Utilities_checkBoundary(threadData_t *threadData, modelica_string _mediumName, string_array _substanceNames, modelica_boolean _singleState, modelica_boolean _define_p, real_array _X_boundary, modelica_string _modelName)
{
  modelica_integer _nX;
  modelica_integer tmp1;
  modelica_string _X_str = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  static int tmp6 = 0;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_string tmp11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_string tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  static int tmp17 = 0;
  modelica_integer tmp18;
  modelica_integer tmp19;
  modelica_integer tmp20;
  modelica_metatype tmpMeta21;
  modelica_string tmp22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_string tmp25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_integer tmp30;
  modelica_integer tmp31;
  modelica_integer tmp32;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  modelica_metatype tmpMeta36;
  modelica_metatype tmpMeta37;
  modelica_string tmp38;
  modelica_metatype tmpMeta39;
  modelica_metatype tmpMeta40;
  modelica_metatype tmpMeta41;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = size_of_dimension_base_array(_X_boundary, ((modelica_integer) 1));
  _nX = tmp1;
  // _X_str has no default value.
  {
    if(!((!_singleState) || (_singleState && _define_p)))
    {
      tmpMeta2 = stringAppend(_OMC_LIT38,_modelName);
      tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT39);
      tmpMeta4 = stringAppend(tmpMeta3,_mediumName);
      tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT40);
      {
        FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Utilities.mo",18,5,23,3,1};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta5));
      }
    }
  }

  tmp18 = ((modelica_integer) 1); tmp19 = 1; tmp20 = _nX;
  if(!(((tmp19 > 0) && (tmp18 > tmp20)) || ((tmp19 < 0) && (tmp18 < tmp20))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp18, tmp20); _i += tmp19)
    {
      {
        if(!(real_array_get(_X_boundary, 1, _i) >= 0.0))
        {
          tmpMeta7 = stringAppend(_OMC_LIT41,_mediumName);
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT42);
          tmpMeta9 = stringAppend(tmpMeta8,_modelName);
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT43);
          tmp11 = modelica_integer_to_modelica_string(_i, ((modelica_integer) 0), 1 /* true */);
          tmpMeta12 = stringAppend(tmpMeta10,tmp11);
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT44);
          tmp14 = modelica_real_to_modelica_string(real_array_get(_X_boundary, 1, _i), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
          tmpMeta15 = stringAppend(tmpMeta13,tmp14);
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT45);
          {
            FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Utilities.mo",26,7,33,3,1};
            omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta16));
          }
        }
      }
    }
  }

  if(((_nX > ((modelica_integer) 0)) && (fabs(sum_real_array(_X_boundary) - 1.0) > 1e-10)))
  {
    _X_str = _OMC_LIT46;

    tmp30 = ((modelica_integer) 1); tmp31 = 1; tmp32 = _nX;
    if(!(((tmp31 > 0) && (tmp30 > tmp32)) || ((tmp31 < 0) && (tmp30 < tmp32))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp30, tmp32); _i += tmp31)
      {
        tmpMeta21 = stringAppend(_X_str,_OMC_LIT47);
        tmp22 = modelica_integer_to_modelica_string(_i, ((modelica_integer) 0), 1 /* true */);
        tmpMeta23 = stringAppend(tmpMeta21,tmp22);
        tmpMeta24 = stringAppend(tmpMeta23,_OMC_LIT48);
        tmp25 = modelica_real_to_modelica_string(real_array_get(_X_boundary, 1, _i), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
        tmpMeta26 = stringAppend(tmpMeta24,tmp25);
        tmpMeta27 = stringAppend(tmpMeta26,_OMC_LIT49);
        tmpMeta28 = stringAppend(tmpMeta27,string_array_get(_substanceNames, 1, _i));
        tmpMeta29 = stringAppend(tmpMeta28,_OMC_LIT50);
        _X_str = tmpMeta29;
      }
    }

    tmpMeta33 = stringAppend(_OMC_LIT51,_mediumName);
    tmpMeta34 = stringAppend(tmpMeta33,_OMC_LIT42);
    tmpMeta35 = stringAppend(tmpMeta34,_modelName);
    tmpMeta36 = stringAppend(tmpMeta35,_OMC_LIT50);
    tmpMeta37 = stringAppend(tmpMeta36,_OMC_LIT52);
    tmp38 = modelica_real_to_modelica_string(sum_real_array(_X_boundary), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
    tmpMeta39 = stringAppend(tmpMeta37,tmp38);
    tmpMeta40 = stringAppend(tmpMeta39,_OMC_LIT53);
    tmpMeta41 = stringAppend(tmpMeta40,_X_str);
    omc_Modelica_Utilities_Streams_error(threadData, tmpMeta41);
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_Modelica_Fluid_Utilities_checkBoundary(threadData_t *threadData, modelica_metatype _mediumName, modelica_metatype _substanceNames, modelica_metatype _singleState, modelica_metatype _define_p, modelica_metatype _X_boundary, modelica_metatype _modelName)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_singleState);
  tmp2 = mmc_unbox_integer(_define_p);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, _mediumName, *((base_array_t*)_substanceNames), tmp1, tmp2, *((base_array_t*)_X_boundary), _modelName);
  return;
}

DLLDirection
modelica_boolean omc_Modelica_Math_BooleanVectors_anyTrue(threadData_t *threadData, boolean_array _b)
{
  modelica_boolean _result;
  modelica_integer tmp1;
  modelica_boolean tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = size_of_dimension_base_array(_b, ((modelica_integer) 1));
  tmp2 = max_boolean_array(_b);
  _result = ((tmp1 > ((modelica_integer) 0)) && tmp2);
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_Modelica_Math_BooleanVectors_anyTrue(threadData_t *threadData, modelica_metatype _b)
{
  modelica_boolean _result;
  modelica_integer tmp1;
  modelica_boolean tmp2;
  modelica_metatype out_result;
  _result = omc_Modelica_Math_BooleanVectors_anyTrue(threadData, *((base_array_t*)_b));
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_real omc_Modelica_Math_Vectors_norm(threadData_t *threadData, real_array _v, modelica_real _p)
{
  modelica_real _result;
  modelica_real _eps;
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp8;
  modelica_real tmp13;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_string tmp33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  static int tmp36 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  _result = 0.0;
  _eps = 2.220446049250313e-15;
  tmp1 = size_of_dimension_base_array(_v, ((modelica_integer) 1));
  if((tmp1 > ((modelica_integer) 0)))
  {
    if(((_p >= 2.0 - _eps) && (_p <= 2.0 + _eps)))
    {
      tmp2 = mul_real_scalar_product(_v, _v);
      if(!(tmp2 >= 0.0))
      {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert(threadData, info, "Model error: Argument of sqrt(v * v) was %g should be >= 0", tmp2);
      }
      _result = sqrt(tmp2);
    }
    else
    {
      if((_p >= 1e60))
      {
        {
          modelica_real __omcQ_24tmpVar105;
          modelica_real __omcQ_24tmpVar104;
          modelica_integer tmp4;
          modelica_integer tmp5;
          modelica_integer tmp6;
          modelica_integer tmp7;
          modelica_integer __omcQ_24i20;
          tmp7 = size_of_dimension_base_array(_v, ((modelica_integer) 1));
          tmp5 = 1 /* Range step-value */;
          tmp6 = tmp7 /* Range stop-value */;
          __omcQ_24i20 = ((modelica_integer) 1) /* Range start-value */;
          __omcQ_24i20 = (((modelica_integer) 1) /* Range start-value */)-tmp5;
          __omcQ_24tmpVar105 = -8.777798510069901e304; /* defaultValue */
          while(1) {
            tmp4 = 1;
            if (tmp5 > 0 ? __omcQ_24i20+tmp5 <= tmp6 : __omcQ_24i20+tmp5 >= tmp6) {
              __omcQ_24i20 += tmp5;
              tmp4--;
            }
            if (tmp4 == 0) {
              __omcQ_24tmpVar104 = fabs(real_array_get(_v, 1, __omcQ_24i20));
              __omcQ_24tmpVar105 = fmax(__omcQ_24tmpVar104,__omcQ_24tmpVar105);
            } else if (tmp4 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          tmp3 = __omcQ_24tmpVar105;
        }
        _result = tmp3;
      }
      else
      {
        if(((_p >= 1.0 - _eps) && (_p <= 1.0 + _eps)))
        {
          {
            modelica_real __omcQ_24tmpVar107;
            modelica_real __omcQ_24tmpVar106;
            modelica_integer tmp9;
            modelica_integer tmp10;
            modelica_integer tmp11;
            modelica_integer tmp12;
            modelica_integer __omcQ_24i21;
            tmp12 = size_of_dimension_base_array(_v, ((modelica_integer) 1));
            tmp10 = 1 /* Range step-value */;
            tmp11 = tmp12 /* Range stop-value */;
            __omcQ_24i21 = ((modelica_integer) 1) /* Range start-value */;
            __omcQ_24i21 = (((modelica_integer) 1) /* Range start-value */)-tmp10;
            __omcQ_24tmpVar107 = 0.0; /* defaultValue */
            while(1) {
              tmp9 = 1;
              if (tmp10 > 0 ? __omcQ_24i21+tmp10 <= tmp11 : __omcQ_24i21+tmp10 >= tmp11) {
                __omcQ_24i21 += tmp10;
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar106 = fabs(real_array_get(_v, 1, __omcQ_24i21));
                __omcQ_24tmpVar107 = __omcQ_24tmpVar107 + __omcQ_24tmpVar106;
              } else if (tmp9 == 1) {
                break;
              } else {
                MMC_THROW_INTERNAL();
              }
            }
            tmp8 = __omcQ_24tmpVar107;
          }
          _result = tmp8;
        }
        else
        {
          if((_p >= 1.0))
          {
            {
              modelica_real __omcQ_24tmpVar89;
              modelica_real tmp14;
              modelica_real tmp15;
              modelica_real tmp16;
              modelica_real tmp17;
              modelica_real tmp18;
              modelica_real tmp19;
              modelica_real tmp20;
              modelica_real __omcQ_24tmpVar88;
              modelica_integer tmp21;
              modelica_integer tmp22;
              modelica_integer tmp23;
              modelica_integer tmp24;
              modelica_integer _i;
              tmp24 = size_of_dimension_base_array(_v, ((modelica_integer) 1));
              tmp22 = 1 /* Range step-value */;
              tmp23 = tmp24 /* Range stop-value */;
              _i = ((modelica_integer) 1) /* Range start-value */;
              _i = (((modelica_integer) 1) /* Range start-value */)-tmp22;
              __omcQ_24tmpVar89 = 0.0; /* defaultValue */
              while(1) {
                tmp21 = 1;
                if (tmp22 > 0 ? _i+tmp22 <= tmp23 : _i+tmp22 >= tmp23) {
                  _i += tmp22;
                  tmp21--;
                }
                if (tmp21 == 0) {
                  tmp14 = fabs(real_array_get(_v, 1, _i));
                  tmp15 = _p;
                  if(tmp14 < 0.0 && tmp15 != 0.0)
                  {
                    tmp17 = modf(tmp15, &tmp18);
                    
                    if(tmp17 > 0.5)
                    {
                      tmp17 -= 1.0;
                      tmp18 += 1.0;
                    }
                    else if(tmp17 < -0.5)
                    {
                      tmp17 += 1.0;
                      tmp18 -= 1.0;
                    }
                    
                    if(fabs(tmp17) < 1e-10)
                      tmp16 = pow(tmp14, tmp18);
                    else
                    {
                      tmp20 = modf(1.0/tmp15, &tmp19);
                      if(tmp20 > 0.5)
                      {
                        tmp20 -= 1.0;
                        tmp19 += 1.0;
                      }
                      else if(tmp20 < -0.5)
                      {
                        tmp20 += 1.0;
                        tmp19 -= 1.0;
                      }
                      if(fabs(tmp20) < 1e-10 && ((unsigned long)tmp19 & 1))
                      {
                        tmp16 = -pow(-tmp14, tmp17)*pow(tmp14, tmp18);
                      }
                      else
                      {
                        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp14, tmp15);
                      }
                    }
                  }
                  else
                  {
                    tmp16 = pow(tmp14, tmp15);
                  }
                  if(isnan(tmp16) || isinf(tmp16))
                  {
                    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp14, tmp15);
                  }__omcQ_24tmpVar88 = tmp16;
                  __omcQ_24tmpVar89 = __omcQ_24tmpVar89 + __omcQ_24tmpVar88;
                } else if (tmp21 == 1) {
                  break;
                } else {
                  MMC_THROW_INTERNAL();
                }
              }
              tmp13 = __omcQ_24tmpVar89;
            }
            tmp25 = _p;
            if (tmp25 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / p");}
            tmp26 = tmp13;
            tmp27 = (1.0) / tmp25;
            if(tmp26 < 0.0 && tmp27 != 0.0)
            {
              tmp29 = modf(tmp27, &tmp30);
              
              if(tmp29 > 0.5)
              {
                tmp29 -= 1.0;
                tmp30 += 1.0;
              }
              else if(tmp29 < -0.5)
              {
                tmp29 += 1.0;
                tmp30 -= 1.0;
              }
              
              if(fabs(tmp29) < 1e-10)
                tmp28 = pow(tmp26, tmp30);
              else
              {
                tmp32 = modf(1.0/tmp27, &tmp31);
                if(tmp32 > 0.5)
                {
                  tmp32 -= 1.0;
                  tmp31 += 1.0;
                }
                else if(tmp32 < -0.5)
                {
                  tmp32 += 1.0;
                  tmp31 -= 1.0;
                }
                if(fabs(tmp32) < 1e-10 && ((unsigned long)tmp31 & 1))
                {
                  tmp28 = -pow(-tmp26, tmp29)*pow(tmp26, tmp30);
                }
                else
                {
                  throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp26, tmp27);
                }
              }
            }
            else
            {
              tmp28 = pow(tmp26, tmp27);
            }
            if(isnan(tmp28) || isinf(tmp28))
            {
              throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp26, tmp27);
            }
            _result = tmp28;
          }
          else
          {
            {
              if(!0 /* false */)
              {
                tmp33 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
                tmpMeta34 = stringAppend(_OMC_LIT54,tmp33);
                tmpMeta35 = stringAppend(tmpMeta34,_OMC_LIT55);
                {
                  FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Math/package.mo",159,7,159,104,1};
                  omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta35));
                }
              }
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_Modelica_Math_Vectors_norm(threadData_t *threadData, modelica_metatype _v, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _result;
  modelica_metatype out_result;
  tmp1 = mmc_unbox_real(_p);
  _result = omc_Modelica_Math_Vectors_norm(threadData, *((base_array_t*)_v), tmp1);
  out_result = mmc_mk_rcon(_result);
  return out_result;
}

DLLDirection
modelica_string omc_Modelica_Math_Vectors_toString(threadData_t *threadData, real_array _v, modelica_string _name, modelica_integer _significantDigits)
{
  modelica_string _s = NULL;
  modelica_string _blanks = NULL;
  modelica_string _space = NULL;
  modelica_integer _r;
  modelica_integer tmp1;
  modelica_metatype tmpMeta2;
  modelica_boolean tmp3;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_boolean tmp7;
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_string tmp11;
  modelica_metatype tmpMeta12;
  modelica_string tmp13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  _tailrecursive: OMC_LABEL_UNUSED
  _s = _OMC_LIT46;
  _blanks = omc_Modelica_Utilities_Strings_repeat(threadData, _significantDigits, _OMC_LIT56);
  _space = _OMC_LIT57;
  tmp1 = size_of_dimension_base_array(_v, ((modelica_integer) 1));
  _r = tmp1;
  if((_r == ((modelica_integer) 0)))
  {
    tmp3 = (modelica_boolean)(stringEqual(_name, _OMC_LIT46));
    if(tmp3)
    {
      tmp4 = _OMC_LIT60;
    }
    else
    {
      tmpMeta2 = stringAppend(_name,_OMC_LIT61);
      tmp4 = tmpMeta2;
    }
    _s = tmp4;
  }
  else
  {
    tmp7 = (modelica_boolean)(stringEqual(_name, _OMC_LIT46));
    if(tmp7)
    {
      tmp8 = _OMC_LIT58;
    }
    else
    {
      tmpMeta5 = stringAppend(_OMC_LIT58,_name);
      tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT59);
      tmp8 = tmpMeta6;
    }
    _s = tmp8;

    tmp16 = ((modelica_integer) 1); tmp17 = 1; tmp18 = _r;
    if(!(((tmp17 > 0) && (tmp16 > tmp18)) || ((tmp17 < 0) && (tmp16 < tmp18))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp16, tmp18); _i += tmp17)
      {
        tmpMeta9 = stringAppend(_s,_space);
        _s = tmpMeta9;

        if((real_array_get(_v, 1, _i) >= 0.0))
        {
          tmpMeta10 = stringAppend(_s,_OMC_LIT56);
          _s = tmpMeta10;
        }

        tmp11 = modelica_real_to_modelica_string(real_array_get(_v, 1, _i), _significantDigits, ((modelica_integer) 0), 1 /* true */);
        tmpMeta12 = stringAppend(_s,tmp11);
        tmp13 = modelica_real_to_modelica_string(fabs(real_array_get(_v, 1, _i)), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
        tmpMeta14 = stringAppend(tmpMeta12,omc_Modelica_Utilities_Strings_repeat(threadData, _significantDigits + ((modelica_integer) 8) - omc_Modelica_Utilities_Strings_length(threadData, tmp13), _OMC_LIT56));
        _s = tmpMeta14;

        tmpMeta15 = stringAppend(_s,_OMC_LIT58);
        _s = tmpMeta15;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _s;
}
modelica_metatype boxptr_Modelica_Math_Vectors_toString(threadData_t *threadData, modelica_metatype _v, modelica_metatype _name, modelica_metatype _significantDigits)
{
  modelica_integer tmp1;
  modelica_string _s = NULL;
  tmp1 = mmc_unbox_integer(_significantDigits);
  _s = omc_Modelica_Math_Vectors_toString(threadData, *((base_array_t*)_v), _name, tmp1);
  /* skip box _s; String */
  return _s;
}

DLLDirection
void omc_Modelica_Utilities_Streams_error(threadData_t *threadData, modelica_string _string)
{
  static int tmp1 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  {
    if(!0 /* false */)
    {
      {
        FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Utilities/Streams.mo",113,5,113,48,1};
        omc_assert(threadData, info, MMC_STRINGDATA(_string));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

modelica_string omc_Modelica_Utilities_Streams_readLine(threadData_t *threadData, modelica_string _fileName, modelica_integer _lineNumber, modelica_boolean *out_endOfFile)
{
  int _lineNumber_ext;
  int _endOfFile_ext;
  const char* _string_ext;
  modelica_string _string = NULL;
  modelica_boolean _endOfFile;
  // _string has no default value.
  // _endOfFile has no default value.
  _lineNumber_ext = (int)_lineNumber;
  _string_ext = ModelicaInternal_readLine(MMC_STRINGDATA(_fileName), _lineNumber_ext, &_endOfFile_ext);
  _endOfFile = (modelica_boolean)_endOfFile_ext;
  _string = (modelica_string)mmc_mk_scon(_string_ext);
  if (out_endOfFile) { *out_endOfFile = _endOfFile; }
  return _string;
}
modelica_metatype boxptr_Modelica_Utilities_Streams_readLine(threadData_t *threadData, modelica_metatype _fileName, modelica_metatype _lineNumber, modelica_metatype *out_endOfFile)
{
  modelica_integer tmp1;
  modelica_boolean _endOfFile;
  modelica_string _string = NULL;
  tmp1 = mmc_unbox_integer(_lineNumber);
  _string = omc_Modelica_Utilities_Streams_readLine(threadData, _fileName, tmp1, &_endOfFile);
  /* skip box _string; String */
  if (out_endOfFile) { *out_endOfFile = mmc_mk_icon(_endOfFile); }
  return _string;
}

modelica_integer omc_Modelica_Utilities_Strings_compare(threadData_t *threadData, modelica_string _string1, modelica_string _string2, modelica_boolean _caseSensitive)
{
  int _caseSensitive_ext;
  int _result_ext;
  modelica_integer _result;
  // _result has no default value.
  _caseSensitive_ext = (int)_caseSensitive;
  _result_ext = ModelicaStrings_compare(MMC_STRINGDATA(_string1), MMC_STRINGDATA(_string2), _caseSensitive_ext);
  _result = (modelica_integer)_result_ext;
  return _result;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_compare(threadData_t *threadData, modelica_metatype _string1, modelica_metatype _string2, modelica_metatype _caseSensitive)
{
  modelica_integer tmp1;
  modelica_integer _result;
  modelica_metatype out_result;
  tmp1 = mmc_unbox_integer(_caseSensitive);
  _result = omc_Modelica_Utilities_Strings_compare(threadData, _string1, _string2, tmp1);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_integer omc_Modelica_Utilities_Strings_find(threadData_t *threadData, modelica_string _string, modelica_string _searchString, modelica_integer _startIndex, modelica_boolean _caseSensitive)
{
  modelica_integer _index;
  modelica_integer _lengthSearchString;
  modelica_integer _i;
  modelica_integer _len;
  modelica_integer _i_max;
  _tailrecursive: OMC_LABEL_UNUSED
  // _index has no default value.
  _lengthSearchString = omc_Modelica_Utilities_Strings_length(threadData, _searchString);
  _i = _startIndex;
  _len = _lengthSearchString - ((modelica_integer) 1);
  _i_max = omc_Modelica_Utilities_Strings_length(threadData, _string) - _lengthSearchString + ((modelica_integer) 1);
  _index = ((modelica_integer) 0);

  while(1)
  {
    if(!(_i <= _i_max)) break;
    if(omc_Modelica_Utilities_Strings_isEqual(threadData, omc_Modelica_Utilities_Strings_substring(threadData, _string, _i, _i + _len), _searchString, _caseSensitive))
    {
      _index = _i;

      _i = _i_max + ((modelica_integer) 1);
    }
    else
    {
      _i = _i + ((modelica_integer) 1);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _index;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_find(threadData_t *threadData, modelica_metatype _string, modelica_metatype _searchString, modelica_metatype _startIndex, modelica_metatype _caseSensitive)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _index;
  modelica_metatype out_index;
  tmp1 = mmc_unbox_integer(_startIndex);
  tmp2 = mmc_unbox_integer(_caseSensitive);
  _index = omc_Modelica_Utilities_Strings_find(threadData, _string, _searchString, tmp1, tmp2);
  out_index = mmc_mk_icon(_index);
  return out_index;
}

DLLDirection
modelica_integer omc_Modelica_Utilities_Strings_findLast(threadData_t *threadData, modelica_string _string, modelica_string _searchString, modelica_integer _startIndex, modelica_boolean _caseSensitive)
{
  modelica_integer _index;
  modelica_integer _lenString;
  modelica_integer _lenSearchString;
  modelica_integer _i;
  modelica_integer _iMax;
  _tailrecursive: OMC_LABEL_UNUSED
  // _index has no default value.
  _lenString = omc_Modelica_Utilities_Strings_length(threadData, _string);
  _lenSearchString = omc_Modelica_Utilities_Strings_length(threadData, _searchString);
  // _i has no default value.
  _iMax = _lenString - _lenSearchString + ((modelica_integer) 1);
  _i = (((_startIndex == ((modelica_integer) 0)) || (_startIndex > _iMax))?_iMax:_startIndex);

  _index = ((modelica_integer) 0);

  while(1)
  {
    if(!(_i >= ((modelica_integer) 1))) break;
    if(omc_Modelica_Utilities_Strings_isEqual(threadData, omc_Modelica_Utilities_Strings_substring(threadData, _string, _i, _i + _lenSearchString - ((modelica_integer) 1)), _searchString, _caseSensitive))
    {
      _index = _i;

      _i = ((modelica_integer) 0);
    }
    else
    {
      _i = _i - ((modelica_integer) 1);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _index;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_findLast(threadData_t *threadData, modelica_metatype _string, modelica_metatype _searchString, modelica_metatype _startIndex, modelica_metatype _caseSensitive)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _index;
  modelica_metatype out_index;
  tmp1 = mmc_unbox_integer(_startIndex);
  tmp2 = mmc_unbox_integer(_caseSensitive);
  _index = omc_Modelica_Utilities_Strings_findLast(threadData, _string, _searchString, tmp1, tmp2);
  out_index = mmc_mk_icon(_index);
  return out_index;
}

DLLDirection
modelica_boolean omc_Modelica_Utilities_Strings_isEmpty(threadData_t *threadData, modelica_string _string)
{
  modelica_boolean _result;
  modelica_integer _nextIndex;
  modelica_integer _len;
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  // _nextIndex has no default value.
  // _len has no default value.
  _nextIndex = omc_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData, _string, ((modelica_integer) 1));

  _len = omc_Modelica_Utilities_Strings_length(threadData, _string);

  if(((_len < ((modelica_integer) 1)) || (_nextIndex > _len)))
  {
    _result = 1 /* true */;
  }
  else
  {
    _result = 0 /* false */;
  }
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_isEmpty(threadData_t *threadData, modelica_metatype _string)
{
  modelica_boolean _result;
  modelica_metatype out_result;
  _result = omc_Modelica_Utilities_Strings_isEmpty(threadData, _string);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_boolean omc_Modelica_Utilities_Strings_isEqual(threadData_t *threadData, modelica_string _string1, modelica_string _string2, modelica_boolean _caseSensitive)
{
  modelica_boolean _identical;
  _tailrecursive: OMC_LABEL_UNUSED
  // _identical has no default value.
  _identical = (omc_Modelica_Utilities_Strings_compare(threadData, _string1, _string2, _caseSensitive) == 2);
  _return: OMC_LABEL_UNUSED
  return _identical;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_isEqual(threadData_t *threadData, modelica_metatype _string1, modelica_metatype _string2, modelica_metatype _caseSensitive)
{
  modelica_integer tmp1;
  modelica_boolean _identical;
  modelica_metatype out_identical;
  tmp1 = mmc_unbox_integer(_caseSensitive);
  _identical = omc_Modelica_Utilities_Strings_isEqual(threadData, _string1, _string2, tmp1);
  out_identical = mmc_mk_icon(_identical);
  return out_identical;
}

modelica_integer omc_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_string _string)
{
  int _result_ext;
  modelica_integer _result;
  // _result has no default value.
  _result_ext = ModelicaStrings_length(MMC_STRINGDATA(_string));
  _result = (modelica_integer)_result_ext;
  return _result;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_metatype _string)
{
  modelica_integer _result;
  modelica_metatype out_result;
  _result = omc_Modelica_Utilities_Strings_length(threadData, _string);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_string omc_Modelica_Utilities_Strings_repeat(threadData_t *threadData, modelica_integer _n, modelica_string _string)
{
  modelica_string _repeatedString = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  _tailrecursive: OMC_LABEL_UNUSED
  // _repeatedString has no default value.
  _repeatedString = _OMC_LIT46;

  tmp2 = ((modelica_integer) 1); tmp3 = 1; tmp4 = _n;
  if(!(((tmp3 > 0) && (tmp2 > tmp4)) || ((tmp3 < 0) && (tmp2 < tmp4))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp2, tmp4); _i += tmp3)
    {
      tmpMeta1 = stringAppend(_repeatedString,_string);
      _repeatedString = tmpMeta1;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _repeatedString;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_repeat(threadData_t *threadData, modelica_metatype _n, modelica_metatype _string)
{
  modelica_integer tmp1;
  modelica_string _repeatedString = NULL;
  tmp1 = mmc_unbox_integer(_n);
  _repeatedString = omc_Modelica_Utilities_Strings_repeat(threadData, tmp1, _string);
  /* skip box _repeatedString; String */
  return _repeatedString;
}

modelica_string omc_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex, modelica_integer _endIndex)
{
  int _startIndex_ext;
  int _endIndex_ext;
  const char* _result_ext;
  modelica_string _result = NULL;
  // _result has no default value.
  _startIndex_ext = (int)_startIndex;
  _endIndex_ext = (int)_endIndex;
  _result_ext = ModelicaStrings_substring(MMC_STRINGDATA(_string), _startIndex_ext, _endIndex_ext);
  _result = (modelica_string)mmc_mk_scon(_result_ext);
  return _result;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex, modelica_metatype _endIndex)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_string _result = NULL;
  tmp1 = mmc_unbox_integer(_startIndex);
  tmp2 = mmc_unbox_integer(_endIndex);
  _result = omc_Modelica_Utilities_Strings_substring(threadData, _string, tmp1, tmp2);
  /* skip box _result; String */
  return _result;
}

modelica_integer omc_Modelica_Utilities_Strings_Advanced_scanReal(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex, modelica_boolean _unsigned, modelica_real *out_number)
{
  int _startIndex_ext;
  int _unsigned_ext;
  int _nextIndex_ext;
  double _number_ext;
  modelica_integer _nextIndex;
  modelica_real _number;
  // _nextIndex has no default value.
  // _number has no default value.
  _startIndex_ext = (int)_startIndex;
  _unsigned_ext = (int)_unsigned;
  ModelicaStrings_scanReal(MMC_STRINGDATA(_string), _startIndex_ext, _unsigned_ext, &_nextIndex_ext, &_number_ext);
  _nextIndex = (modelica_integer)_nextIndex_ext;
  _number = (modelica_real)_number_ext;
  if (out_number) { *out_number = _number; }
  return _nextIndex;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_Advanced_scanReal(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex, modelica_metatype _unsigned, modelica_metatype *out_number)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_real _number;
  modelica_integer _nextIndex;
  modelica_metatype out_nextIndex;
  tmp1 = mmc_unbox_integer(_startIndex);
  tmp2 = mmc_unbox_integer(_unsigned);
  _nextIndex = omc_Modelica_Utilities_Strings_Advanced_scanReal(threadData, _string, tmp1, tmp2, &_number);
  out_nextIndex = mmc_mk_icon(_nextIndex);
  if (out_number) { *out_number = mmc_mk_rcon(_number); }
  return out_nextIndex;
}

modelica_integer omc_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex)
{
  int _startIndex_ext;
  int _nextIndex_ext;
  modelica_integer _nextIndex;
  // _nextIndex has no default value.
  _startIndex_ext = (int)_startIndex;
  _nextIndex_ext = ModelicaStrings_skipWhiteSpace(MMC_STRINGDATA(_string), _startIndex_ext);
  _nextIndex = (modelica_integer)_nextIndex_ext;
  return _nextIndex;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex)
{
  modelica_integer tmp1;
  modelica_integer _nextIndex;
  modelica_metatype out_nextIndex;
  tmp1 = mmc_unbox_integer(_startIndex);
  _nextIndex = omc_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData, _string, tmp1);
  out_nextIndex = mmc_mk_icon(_nextIndex);
  return out_nextIndex;
}

TmpOnePort_retSink_Medium_ThermodynamicState omc_TmpOnePort_retSink_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  TmpOnePort_retSink_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_TmpOnePort_retSink_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &TmpOnePort_retSink_Medium_ThermodynamicState__desc, _p, _T, _X);
}

TmpOnePort_roo_air_Medium_ThermodynamicState omc_TmpOnePort_roo_air_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  TmpOnePort_roo_air_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_TmpOnePort_roo_air_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &TmpOnePort_roo_air_Medium_ThermodynamicState__desc, _p, _T, _X);
}

DLLDirection
void omc_TmpOnePort_roo_air_cfd_assertStringsAreUnique(threadData_t *threadData, modelica_string _descriptiveName, modelica_integer _n, string_array _names)
{
  boolean_array _ideNam;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  static int tmp12 = 0;
  modelica_boolean tmp13;
  boolean_array tmp14;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_boolean_array(&(_ideNam), 1, (_index_t)_n - ((modelica_integer) 1)); // _ideNam has no default value.
  if((_n > ((modelica_integer) 1)))
  {
    tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = _n - ((modelica_integer) 1);
    if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp4, tmp6); _i += tmp5)
      {
        tmp1 = _i + ((modelica_integer) 1); tmp2 = 1; tmp3 = _n;
        if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
        {
          modelica_integer _j;
          for(_j = _i + ((modelica_integer) 1); in_range_integer(_j, tmp1, tmp3); _j += tmp2)
          {
            boolean_array_get(_ideNam, 1, _i) = omc_Modelica_Utilities_Strings_isEqual(threadData, string_array_get(_names, 1, _i), string_array_get(_names, 1, _j), 1 /* true */);

            if(boolean_array_get(_ideNam, 1, _i))
            {
              break;
            }
          }
        }
      }
    }

    {
      if(!(!omc_Modelica_Math_BooleanVectors_anyTrue(threadData, _ideNam)))
      {
        tmpMeta7 = stringAppend(_OMC_LIT62,_descriptiveName);
        tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT63);
        tmpMeta9 = stringAppend(tmpMeta8,_descriptiveName);
        tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT64);
        tmpMeta11 = stringAppend(tmpMeta10,omc_TmpOnePort_roo_air_cfd_returnNonUniqueStrings(threadData, _n, _ideNam, _names));
        {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",184,7,189,48,1};
          omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta11));
        }
      }
    }
  }
  else
  {
    tmp13 = 0 /* false */;
    fill_alloc_boolean_array(&tmp14, tmp13, 1, modelica_integer_max((modelica_integer)(((modelica_integer) 0)),(modelica_integer)(_n - ((modelica_integer) 1))));
    boolean_array_copy_data(tmp14, _ideNam);
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_TmpOnePort_roo_air_cfd_assertStringsAreUnique(threadData_t *threadData, modelica_metatype _descriptiveName, modelica_metatype _n, modelica_metatype _names)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_n);
  omc_TmpOnePort_roo_air_cfd_assertStringsAreUnique(threadData, _descriptiveName, tmp1, *((base_array_t*)_names));
  return;
}

DLLDirection
modelica_real omc_TmpOnePort_roo_air_cfd_exchange(threadData_t *threadData, modelica_integer _flag, modelica_real _t, modelica_real _dt, real_array _u, modelica_integer _nU, real_array _yFixed, modelica_integer _nY, real_array *out_y, modelica_integer *out_retVal)
{
  modelica_real _modTimRea;
  real_array _y;
  modelica_integer _retVal;
  _tailrecursive: OMC_LABEL_UNUSED
  // _modTimRea has no default value.
  alloc_real_array(&(_y), 1, (_index_t)_nY); // _y has no default value.
  // _retVal has no default value.
  _modTimRea = omc_Buildings_ThermalZones_Detailed_BaseClasses_cfdExchangeData(threadData, _flag, _t, _dt, _u, _nU, _nY ,&_y ,&_retVal);
  _return: OMC_LABEL_UNUSED
  if (out_y) { if (out_y->dim_size == NULL) {copy_real_array(_y, out_y);} else {real_array_copy_data(_y, *out_y);} }
  if (out_retVal) { *out_retVal = _retVal; }
  return _modTimRea;
}
modelica_metatype boxptr_TmpOnePort_roo_air_cfd_exchange(threadData_t *threadData, modelica_metatype _flag, modelica_metatype _t, modelica_metatype _dt, modelica_metatype _u, modelica_metatype _nU, modelica_metatype _yFixed, modelica_metatype _nY, modelica_metatype *out_y, modelica_metatype *out_retVal)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  real_array _y;
  modelica_integer _retVal;
  modelica_real _modTimRea;
  modelica_metatype out_modTimRea;
  tmp1 = mmc_unbox_integer(_flag);
  tmp2 = mmc_unbox_real(_t);
  tmp3 = mmc_unbox_real(_dt);
  tmp4 = mmc_unbox_integer(_nU);
  tmp5 = mmc_unbox_integer(_nY);
  _modTimRea = omc_TmpOnePort_roo_air_cfd_exchange(threadData, tmp1, tmp2, tmp3, *((base_array_t*)_u), tmp4, *((base_array_t*)_yFixed), tmp5, &_y, &_retVal);
  out_modTimRea = mmc_mk_rcon(_modTimRea);
  if (out_y) { *out_y = mmc_mk_modelica_array(_y); }
  if (out_retVal) { *out_retVal = mmc_mk_icon(_retVal); }
  return out_modTimRea;
}

DLLDirection
modelica_string omc_TmpOnePort_roo_air_cfd_returnNonUniqueStrings(threadData_t *threadData, modelica_integer _n, boolean_array _ideNam, string_array _names)
{
  modelica_string _s = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  _s = _OMC_LIT46;

  tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = _n - ((modelica_integer) 1);
  if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp4, tmp6); _i += tmp5)
    {
      if(boolean_array_get(_ideNam, 1, _i))
      {
        tmpMeta1 = stringAppend(_s,_OMC_LIT65);
        tmpMeta2 = stringAppend(tmpMeta1,string_array_get(_names, 1, _i));
        tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT66);
        _s = tmpMeta3;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _s;
}
modelica_metatype boxptr_TmpOnePort_roo_air_cfd_returnNonUniqueStrings(threadData_t *threadData, modelica_metatype _n, modelica_metatype _ideNam, modelica_metatype _names)
{
  modelica_integer tmp1;
  modelica_string _s = NULL;
  tmp1 = mmc_unbox_integer(_n);
  _s = omc_TmpOnePort_roo_air_cfd_returnNonUniqueStrings(threadData, tmp1, *((base_array_t*)_ideNam), *((base_array_t*)_names));
  /* skip box _s; String */
  return _s;
}

DLLDirection
void omc_TmpOnePort_roo_air_cfd_sendParameters(threadData_t *threadData, modelica_string _cfdFilNam, string_array _name, real_array _A, real_array _til, integer_array _bouCon, modelica_integer _nPorts, string_array _portName, modelica_boolean _haveSensor, string_array _sensorName, modelica_boolean _haveShade, modelica_integer _nSur, modelica_integer _nSen, modelica_integer _nConExtWin, modelica_integer _nXi, modelica_integer _nC, modelica_real _rho_start)
{
  modelica_integer _coSimFlag;
  static int tmp1 = 0;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  static int tmp5 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  _coSimFlag = ((modelica_integer) 0);
  tmp2 = ((modelica_integer) 1); tmp3 = 1; tmp4 = _nSur;
  if(!(((tmp3 > 0) && (tmp2 > tmp4)) || ((tmp3 < 0) && (tmp2 < tmp4))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp2, tmp4); _i += tmp3)
    {
      {
        if(!(real_array_get(_A, 1, _i) > 0.0))
        {
          {
            FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",92,7,92,60,1};
            omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT67));
          }
        }
      }
    }
  }

  _coSimFlag = omc_Buildings_ThermalZones_Detailed_BaseClasses_cfdStartCosimulation(threadData, _cfdFilNam, _name, _A, _til, _bouCon, _nPorts, _portName, _haveSensor, _sensorName, _haveShade, _nSur, _nSen, _nConExtWin, _nXi, _nC, _rho_start);

  {
    if(!(((modelica_real)_coSimFlag) < 0.5))
    {
      {
        FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",112,5,112,65,1};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT68));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_TmpOnePort_roo_air_cfd_sendParameters(threadData_t *threadData, modelica_metatype _cfdFilNam, modelica_metatype _name, modelica_metatype _A, modelica_metatype _til, modelica_metatype _bouCon, modelica_metatype _nPorts, modelica_metatype _portName, modelica_metatype _haveSensor, modelica_metatype _sensorName, modelica_metatype _haveShade, modelica_metatype _nSur, modelica_metatype _nSen, modelica_metatype _nConExtWin, modelica_metatype _nXi, modelica_metatype _nC, modelica_metatype _rho_start)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_real tmp9;
  tmp1 = mmc_unbox_integer(_nPorts);
  tmp2 = mmc_unbox_integer(_haveSensor);
  tmp3 = mmc_unbox_integer(_haveShade);
  tmp4 = mmc_unbox_integer(_nSur);
  tmp5 = mmc_unbox_integer(_nSen);
  tmp6 = mmc_unbox_integer(_nConExtWin);
  tmp7 = mmc_unbox_integer(_nXi);
  tmp8 = mmc_unbox_integer(_nC);
  tmp9 = mmc_unbox_real(_rho_start);
  omc_TmpOnePort_roo_air_cfd_sendParameters(threadData, _cfdFilNam, *((base_array_t*)_name), *((base_array_t*)_A), *((base_array_t*)_til), *((base_array_t*)_bouCon), tmp1, *((base_array_t*)_portName), tmp2, *((base_array_t*)_sensorName), tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9);
  return;
}

TmpOnePort_roo_air_fluInt_Medium_ThermodynamicState omc_TmpOnePort_roo_air_fluInt_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  TmpOnePort_roo_air_fluInt_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_TmpOnePort_roo_air_fluInt_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &TmpOnePort_roo_air_fluInt_Medium_ThermodynamicState__desc, _p, _T, _X);
}

DLLDirection
void omc_TmpOnePort_roo_irRadExc_checkSurfaceAreas(threadData_t *threadData, modelica_integer _n, real_array _A, modelica_string _name)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  static int tmp5 = 0;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  static int tmp10 = 0;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  _tailrecursive: OMC_LABEL_UNUSED
  if((_n == ((modelica_integer) 0)))
  {
    {
      if(!(omc_Modelica_Math_Vectors_norm(threadData, _A, 1.0) < 1e-10))
      {
        tmpMeta1 = stringAppend(_OMC_LIT69,_name);
        tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT70);
        tmpMeta3 = stringAppend(tmpMeta2,omc_Modelica_Math_Vectors_toString(threadData, _A, _OMC_LIT46, ((modelica_integer) 6)));
        tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT72);
        {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialSurfaceInterface.mo",63,7,69,42,1};
          omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta4));
        }
      }
    }
  }
  else
  {
    tmp11 = ((modelica_integer) 1); tmp12 = 1; tmp13 = _n;
    if(!(((tmp12 > 0) && (tmp11 > tmp13)) || ((tmp12 < 0) && (tmp11 < tmp13))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp11, tmp13); _i += tmp12)
      {
        {
          if(!(real_array_get(_A, 1, _i) > 0.0))
          {
            tmpMeta6 = stringAppend(_OMC_LIT69,_name);
            tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT70);
            tmpMeta8 = stringAppend(tmpMeta7,omc_Modelica_Math_Vectors_toString(threadData, _A, _OMC_LIT46, ((modelica_integer) 6)));
            tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT71);
            {
              FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialSurfaceInterface.mo",72,9,75,42,1};
              omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta9));
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_TmpOnePort_roo_irRadExc_checkSurfaceAreas(threadData_t *threadData, modelica_metatype _n, modelica_metatype _A, modelica_metatype _name)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_n);
  omc_TmpOnePort_roo_irRadExc_checkSurfaceAreas(threadData, tmp1, *((base_array_t*)_A), _name);
  return;
}

DLLDirection
void omc_TmpOnePort_roo_irRadGai_checkSurfaceAreas(threadData_t *threadData, modelica_integer _n, real_array _A, modelica_string _name)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  static int tmp5 = 0;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  static int tmp10 = 0;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  _tailrecursive: OMC_LABEL_UNUSED
  if((_n == ((modelica_integer) 0)))
  {
    {
      if(!(omc_Modelica_Math_Vectors_norm(threadData, _A, 1.0) < 1e-10))
      {
        tmpMeta1 = stringAppend(_OMC_LIT69,_name);
        tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT70);
        tmpMeta3 = stringAppend(tmpMeta2,omc_Modelica_Math_Vectors_toString(threadData, _A, _OMC_LIT46, ((modelica_integer) 6)));
        tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT72);
        {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialSurfaceInterface.mo",63,7,69,42,1};
          omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta4));
        }
      }
    }
  }
  else
  {
    tmp11 = ((modelica_integer) 1); tmp12 = 1; tmp13 = _n;
    if(!(((tmp12 > 0) && (tmp11 > tmp13)) || ((tmp12 < 0) && (tmp11 < tmp13))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp11, tmp13); _i += tmp12)
      {
        {
          if(!(real_array_get(_A, 1, _i) > 0.0))
          {
            tmpMeta6 = stringAppend(_OMC_LIT69,_name);
            tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT70);
            tmpMeta8 = stringAppend(tmpMeta7,omc_Modelica_Math_Vectors_toString(threadData, _A, _OMC_LIT46, ((modelica_integer) 6)));
            tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT71);
            {
              FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialSurfaceInterface.mo",72,9,75,42,1};
              omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta9));
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_TmpOnePort_roo_irRadGai_checkSurfaceAreas(threadData_t *threadData, modelica_metatype _n, modelica_metatype _A, modelica_metatype _name)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_n);
  omc_TmpOnePort_roo_irRadGai_checkSurfaceAreas(threadData, tmp1, *((base_array_t*)_A), _name);
  return;
}

DLLDirection
void omc_TmpOnePort_roo_radTem_checkSurfaceAreas(threadData_t *threadData, modelica_integer _n, real_array _A, modelica_string _name)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  static int tmp5 = 0;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  static int tmp10 = 0;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  _tailrecursive: OMC_LABEL_UNUSED
  if((_n == ((modelica_integer) 0)))
  {
    {
      if(!(omc_Modelica_Math_Vectors_norm(threadData, _A, 1.0) < 1e-10))
      {
        tmpMeta1 = stringAppend(_OMC_LIT69,_name);
        tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT70);
        tmpMeta3 = stringAppend(tmpMeta2,omc_Modelica_Math_Vectors_toString(threadData, _A, _OMC_LIT46, ((modelica_integer) 6)));
        tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT72);
        {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialSurfaceInterface.mo",63,7,69,42,1};
          omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta4));
        }
      }
    }
  }
  else
  {
    tmp11 = ((modelica_integer) 1); tmp12 = 1; tmp13 = _n;
    if(!(((tmp12 > 0) && (tmp11 > tmp13)) || ((tmp12 < 0) && (tmp11 < tmp13))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp11, tmp13); _i += tmp12)
      {
        {
          if(!(real_array_get(_A, 1, _i) > 0.0))
          {
            tmpMeta6 = stringAppend(_OMC_LIT69,_name);
            tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT70);
            tmpMeta8 = stringAppend(tmpMeta7,omc_Modelica_Math_Vectors_toString(threadData, _A, _OMC_LIT46, ((modelica_integer) 6)));
            tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT71);
            {
              FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialSurfaceInterface.mo",72,9,75,42,1};
              omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta9));
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_TmpOnePort_roo_radTem_checkSurfaceAreas(threadData_t *threadData, modelica_metatype _n, modelica_metatype _A, modelica_metatype _name)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_n);
  omc_TmpOnePort_roo_radTem_checkSurfaceAreas(threadData, tmp1, *((base_array_t*)_A), _name);
  return;
}

TmpOnePort_sup_Medium_ThermodynamicState omc_TmpOnePort_sup_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  TmpOnePort_sup_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_TmpOnePort_sup_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &TmpOnePort_sup_Medium_ThermodynamicState__desc, _p, _T, _X);
}

#ifdef __cplusplus
}
#endif
