/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;

#if defined(__cplusplus)
extern "C" {
#endif

/* Jacobian Variables */
#define tmp_one_port_INDEX_JAC_LSJac0 0
int tmp_one_port_functionJacLSJac0_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_one_port_initialAnalyticJacobianLSJac0(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_one_port_INDEX_JAC_NLSJac1 1
int tmp_one_port_functionJacNLSJac1_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_one_port_initialAnalyticJacobianNLSJac1(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_one_port_INDEX_JAC_LSJac2 2
int tmp_one_port_functionJacLSJac2_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_one_port_initialAnalyticJacobianLSJac2(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_one_port_INDEX_JAC_NLSJac3 3
int tmp_one_port_functionJacNLSJac3_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_one_port_initialAnalyticJacobianNLSJac3(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_one_port_INDEX_JAC_H 4
int tmp_one_port_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_one_port_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_one_port_INDEX_JAC_F 5
int tmp_one_port_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_one_port_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_one_port_INDEX_JAC_D 6
int tmp_one_port_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_one_port_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_one_port_INDEX_JAC_C 7
int tmp_one_port_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_one_port_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_one_port_INDEX_JAC_B 8
int tmp_one_port_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_one_port_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_one_port_INDEX_JAC_A 9
int tmp_one_port_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_one_port_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);

#if defined(__cplusplus)
}
#endif
