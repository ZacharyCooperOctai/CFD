/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;

#if defined(__cplusplus)
extern "C" {
#endif

/* Jacobian Variables */
#define s000_baseline_INDEX_JAC_LSJac0 0
int s000_baseline_functionJacLSJac0_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int s000_baseline_initialAnalyticJacobianLSJac0(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define s000_baseline_INDEX_JAC_NLSJac7 1
int s000_baseline_functionJacNLSJac7_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int s000_baseline_initialAnalyticJacobianNLSJac7(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define s000_baseline_INDEX_JAC_LSJac8 2
int s000_baseline_functionJacLSJac8_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int s000_baseline_initialAnalyticJacobianLSJac8(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define s000_baseline_INDEX_JAC_NLSJac9 3
int s000_baseline_functionJacNLSJac9_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int s000_baseline_initialAnalyticJacobianNLSJac9(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define s000_baseline_INDEX_JAC_LSJac10 4
int s000_baseline_functionJacLSJac10_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int s000_baseline_initialAnalyticJacobianLSJac10(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define s000_baseline_INDEX_JAC_NLSJac17 5
int s000_baseline_functionJacNLSJac17_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int s000_baseline_initialAnalyticJacobianNLSJac17(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define s000_baseline_INDEX_JAC_H 6
int s000_baseline_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int s000_baseline_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define s000_baseline_INDEX_JAC_F 7
int s000_baseline_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int s000_baseline_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define s000_baseline_INDEX_JAC_D 8
int s000_baseline_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int s000_baseline_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define s000_baseline_INDEX_JAC_C 9
int s000_baseline_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int s000_baseline_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define s000_baseline_INDEX_JAC_B 10
int s000_baseline_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int s000_baseline_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define s000_baseline_INDEX_JAC_A 11
int s000_baseline_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int s000_baseline_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);

#if defined(__cplusplus)
}
#endif
