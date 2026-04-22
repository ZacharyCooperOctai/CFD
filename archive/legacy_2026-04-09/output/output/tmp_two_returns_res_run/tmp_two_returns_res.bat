@echo off
SET PATH=C:/OpenModelica/bin/;C:/OpenModelica/lib//omc;C:/OpenModelica/lib/;C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/binaries/Modelica;C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Resources/Library/mingw64;C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Resources/Library/ucrt64;C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Resources/Library/win64;C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Resources/Library;C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/binaries/Buildings;C:/OMLibs/modelica-buildings/Buildings/Resources/Library/mingw64;C:/OMLibs/modelica-buildings/Buildings/Resources/Library/ucrt64;C:/OMLibs/modelica-buildings/Buildings/Resources/Library/win64;C:/OMLibs/modelica-buildings/Buildings/Resources/Library;C:/OpenModelica/bin/;%PATH%;
SET ERRORLEVEL=
CALL "%CD%/tmp_two_returns_res.exe" %*
SET RESULT=%ERRORLEVEL%

EXIT /b %RESULT%
