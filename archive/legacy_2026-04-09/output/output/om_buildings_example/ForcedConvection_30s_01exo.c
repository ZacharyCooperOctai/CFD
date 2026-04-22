/* External objects file */
#include "ForcedConvection_30s_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

void ForcedConvection_30s_callExternalObjectDestructors(DATA *data, threadData_t *threadData)
{
  if(data->simulationInfo->extObjs)
  {
    omc_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_destructor(threadData,(data->simulationInfo->extObjs[0]));
    omc_Modelica_Blocks_Types_ExternalCombiTable1D_destructor(threadData,(data->simulationInfo->extObjs[1]));
    omc_Modelica_Blocks_Types_ExternalCombiTable1D_destructor(threadData,(data->simulationInfo->extObjs[2]));
    free(data->simulationInfo->extObjs);
    data->simulationInfo->extObjs = 0;
  }
}
#if defined(__cplusplus)
}
#endif
