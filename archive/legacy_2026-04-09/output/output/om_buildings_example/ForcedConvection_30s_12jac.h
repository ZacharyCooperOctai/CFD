/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;

#if defined(__cplusplus)
extern "C" {
#endif

/* Jacobian Variables */
#define ForcedConvection_30s_INDEX_JAC_LSJac0 0
int ForcedConvection_30s_functionJacLSJac0_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int ForcedConvection_30s_initialAnalyticJacobianLSJac0(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define ForcedConvection_30s_INDEX_JAC_NLSJac1 1
int ForcedConvection_30s_functionJacNLSJac1_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int ForcedConvection_30s_initialAnalyticJacobianNLSJac1(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define ForcedConvection_30s_INDEX_JAC_LSJac2 2
int ForcedConvection_30s_functionJacLSJac2_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int ForcedConvection_30s_initialAnalyticJacobianLSJac2(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define ForcedConvection_30s_INDEX_JAC_NLSJac3 3
int ForcedConvection_30s_functionJacNLSJac3_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int ForcedConvection_30s_initialAnalyticJacobianNLSJac3(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define ForcedConvection_30s_INDEX_JAC_H 4
int ForcedConvection_30s_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int ForcedConvection_30s_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define ForcedConvection_30s_INDEX_JAC_F 5
int ForcedConvection_30s_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int ForcedConvection_30s_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define ForcedConvection_30s_INDEX_JAC_D 6
int ForcedConvection_30s_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int ForcedConvection_30s_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define ForcedConvection_30s_INDEX_JAC_C 7
int ForcedConvection_30s_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int ForcedConvection_30s_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define ForcedConvection_30s_INDEX_JAC_B 8
int ForcedConvection_30s_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int ForcedConvection_30s_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define ForcedConvection_30s_INDEX_JAC_A 9
int ForcedConvection_30s_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int ForcedConvection_30s_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);

#if defined(__cplusplus)
}
#endif
