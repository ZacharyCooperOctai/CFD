within ;
model MinimalCoupledFFD
  "Minimal one-inlet one-outlet CFD regression model"
  extends Buildings.ThermalZones.Detailed.Examples.FFD.BaseClasses.PartialRoom(
    roo(
      redeclare package Medium = MediumA,
      nConExt = 0,
      nConExtWin = 0,
      nConPar = 0,
      nConBou = 0,
      nSurBou = 6,
      surBou(
        name = {"East Wall", "West Wall", "North Wall", "South Wall", "Ceiling", "Floor"},
        A = {0.9, 0.9, 1.0, 1.0, 1.0, 1.0},
        til = {Buildings.Types.Tilt.Wall,
               Buildings.Types.Tilt.Wall,
               Buildings.Types.Tilt.Wall,
               Buildings.Types.Tilt.Wall,
               Buildings.Types.Tilt.Ceiling,
               Buildings.Types.Tilt.Floor},
        each absIR = 1e-5,
        each absSol = 1e-5,
        each boundaryCondition = Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature),
      nPorts = 2,
      portName = {"Inlet", "Outlet"},
      cfdFilNam = "case.ffd",
      sensorName = fill("", 0),
      useCFD = true,
      samplePeriod = 10.0,
      linearizeRadiation = true,
      massDynamics = Modelica.Fluid.Types.Dynamics.DynamicFreeInitial),
    nSurBou = 6,
    nConBou = 0,
    nConExt = 0,
    nConPar = 0,
    nConExtWin = 0);

  parameter Integer nCRAC = 1 "Single forced-convection inlet/outlet pair";
  parameter Real m_flow_rated(unit = "kg/s") = 0.01;

  Buildings.Fluid.Sources.MassFlowSource_T sup(
    nPorts = 1,
    redeclare package Medium = MediumA,
    use_m_flow_in = true,
    use_T_in = true,
    m_flow = m_flow_rated,
    T = MediumA.T_default)
    annotation(Placement(transformation(extent = {{0, 20}, {20, 40}})));

  Buildings.Fluid.Sources.Boundary_pT ret(
    nPorts = 1,
    redeclare package Medium = MediumA)
    annotation(Placement(transformation(extent = {{0, -10}, {20, 10}})));

  Modelica.Blocks.Interfaces.RealInput u_fan[nCRAC](each min = 0.0, each max = 1.0, each unit = "1")
    annotation(Placement(transformation(extent = {{-160, 60}, {-140, 80}})));
  Modelica.Blocks.Interfaces.RealInput u_Tsup[nCRAC](each min = 273.15, each max = 323.15, each unit = "K")
    annotation(Placement(transformation(extent = {{-160, 20}, {-140, 40}})));

  Modelica.Blocks.Math.Product mFlowSet[nCRAC]
    annotation(Placement(transformation(extent = {{-120, 60}, {-100, 80}})));
  Modelica.Blocks.Sources.Constant mFlowRated[nCRAC](each k = m_flow_rated)
    annotation(Placement(transformation(extent = {{-150, 90}, {-130, 110}})));
  Modelica.Thermal.HeatTransfer.Sources.FixedTemperature TWal[nSurBou](each T = 283.15)
    annotation(Placement(transformation(extent = {{110, 0}, {90, 20}})));

  Modelica.Blocks.Interfaces.RealOutput T_ret_out[nCRAC](each unit = "K")
    annotation(Placement(transformation(extent = {{140, 60}, {160, 80}})));
  Modelica.Blocks.Interfaces.RealOutput T_sup_out[nCRAC](each unit = "K")
    annotation(Placement(transformation(extent = {{140, 20}, {160, 40}})));

equation
  for i in 1:nSurBou loop
    connect(TWal[i].port, roo.surf_surBou[i]);
  end for;

  for i in 1:nCRAC loop
    connect(mFlowRated[i].y, mFlowSet[i].u2);
    connect(u_fan[i], mFlowSet[i].u1);
    connect(mFlowSet[i].y, sup.m_flow_in);
    connect(u_Tsup[i], sup.T_in);
    connect(sup.ports[i], roo.ports[i]);
    connect(ret.ports[i], roo.ports[nCRAC + i]);
    T_sup_out[i] = u_Tsup[i];
    T_ret_out[i] = MediumA.temperature(
      MediumA.setState_phX(
        ret.ports[i].p,
        actualStream(ret.ports[i].h_outflow),
        actualStream(ret.ports[i].Xi_outflow)));
  end for;
end MinimalCoupledFFD;
