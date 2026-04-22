/* External objects file */
#include "s000_baseline_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

void s000_baseline_callExternalObjectDestructors(DATA *data, threadData_t *threadData)
{
  if(data->simulationInfo->extObjs)
  {
    omc_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_destructor(threadData,(data->simulationInfo->extObjs[1]));
    omc_Modelica_Blocks_Types_ExternalCombiTable1D_destructor(threadData,(data->simulationInfo->extObjs[2]));
    omc_Modelica_Blocks_Types_ExternalCombiTable1D_destructor(threadData,(data->simulationInfo->extObjs[3]));
    omc_Modelica_Blocks_Types_ExternalCombiTimeTable_destructor(threadData,(data->simulationInfo->extObjs[4]));
    omc_Modelica_Blocks_Types_ExternalCombiTimeTable_destructor(threadData,(data->simulationInfo->extObjs[0]));
    free(data->simulationInfo->extObjs);
    data->simulationInfo->extObjs = 0;
  }
}
#if defined(__cplusplus)
}
#endif
