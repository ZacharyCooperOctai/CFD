#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "ModelicaStrings.h"
#include "ModelicaInternal.h"
#include <cfdSendStopCommand.c>
#include <cfdcosim.c>
#include <cfdStartCosimulation.c>
#include <cfdExchangeData.c>
#include <getTimeSpan.c>
#ifdef __cplusplus
}
#endif
