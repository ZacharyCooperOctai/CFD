within ;
model DataCentreFFD
  "FFD-coupled Convergence Hall A thermal model with 6 supply/return units"

  replaceable package MediumA = Buildings.Media.Air(
    T_default = 297.15);

  parameter Integer nCRAC = 6;
  parameter Real m_flow_rated(unit = "kg/s") = 12.7778 * 1.204;
  parameter Real T_sup_rated(unit = "K") = 21.5 + 273.15;
  parameter Real T_init(unit = "K") = 24.0 + 273.15;
  parameter Real samplePeriod(unit = "s") = 10.0;
  parameter Modelica.Units.SI.Area surBouArea[6] = {
    18.3*23.4,
    18.3*23.4,
    18.3*5.0,
    18.3*5.0,
    23.4*5.0,
    23.4*5.0};

  Buildings.ThermalZones.Detailed.CFD roo(
    redeclare package Medium = MediumA,
    nConExt    = 0,
    nConExtWin = 0,
    nConPar    = 0,
    nConBou    = 0,
    nSurBou    = 6,
    surBou(
      name    = {"Floor", "Ceiling", "South wall", "North wall",
                 "West wall", "East wall"},
      A       = surBouArea,
      til     = {Buildings.Types.Tilt.Floor,
                 Buildings.Types.Tilt.Ceiling,
                 Buildings.Types.Tilt.Wall,
                 Buildings.Types.Tilt.Wall,
                 Buildings.Types.Tilt.Wall,
                 Buildings.Types.Tilt.Wall},
      each absIR = 1e-5,
      each absSol = 1e-5,
      each boundaryCondition =
        Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature
    ),
    cfdFilNam   = "case.ffd",
    useCFD      = true,
    massDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial,
    samplePeriod = samplePeriod,
    linearizeRadiation = true,
    AFlo        = 18.3*23.4,
    hRoo        = 5.0,
    sensorName  = fill("", 0),
    portName    = {"crac_1_supply", "crac_2_supply", "crac_3_supply",
                   "crac_4_supply", "crac_5_supply", "crac_6_supply",
                   "crac_1_return", "crac_2_return", "crac_3_return",
                   "crac_4_return", "crac_5_return", "crac_6_return"},
    nPorts = 2*nCRAC);

  Buildings.BoundaryConditions.WeatherData.ReaderTMY3 weaDat(
    filNam =
      Modelica.Utilities.Files.loadResource(
        "modelica://Buildings/Resources/weatherdata/USA_IL_Chicago-OHare.Intl.AP.725300_TMY3.mos"),
    TDryBul = T_init);

  Buildings.Fluid.Sources.MassFlowSource_T sup[nCRAC](
    redeclare each package Medium = MediumA,
    each nPorts = 1,
    each use_m_flow_in = true,
    each use_T_in = true,
    each m_flow = m_flow_rated,
    each T = T_sup_rated);

  Buildings.Fluid.FixedResistances.PressureDrop retRes[nCRAC](
    redeclare each package Medium = MediumA,
    each m_flow_nominal = m_flow_rated,
    each dp_nominal = 10.0,
    each allowFlowReversal = false);

  Buildings.Fluid.Sources.Boundary_pT retSink(
    redeclare package Medium = MediumA,
    nPorts = nCRAC);

  Modelica.Blocks.Interfaces.RealInput u_fan[nCRAC](
    each min = 0.0,
    each max = 1.0,
    each unit = "1");

  Modelica.Blocks.Interfaces.RealInput u_Tsup[nCRAC](
    each min  = 273.15 + 5.0,
    each max  = 273.15 + 30.0,
    each unit = "K");

  Modelica.Blocks.Interfaces.RealOutput T_sup_out[nCRAC](each unit = "K");
  Modelica.Blocks.Interfaces.RealOutput T_ret_out[nCRAC](each unit = "K");

  Modelica.Blocks.Math.Product mFlowSet[nCRAC];
  Modelica.Blocks.Sources.Constant mFlowRated[nCRAC](each k = m_flow_rated);

  Modelica.Blocks.Sources.Constant qConGai_flow(k = 0.0);
  Modelica.Blocks.Sources.Constant qRadGai_flow(k = 0.0);
  Modelica.Blocks.Sources.Constant qLatGai_flow(k = 0.0);
  Modelica.Blocks.Routing.Multiplex3 qGaiMux;

  Modelica.Thermal.HeatTransfer.Sources.FixedTemperature TWal[6](each T = T_init);

equation
  connect(qRadGai_flow.y, qGaiMux.u1[1]);
  connect(qConGai_flow.y, qGaiMux.u2[1]);
  connect(qLatGai_flow.y, qGaiMux.u3[1]);
  connect(qGaiMux.y, roo.qGai_flow);
  connect(weaDat.weaBus, roo.weaBus);

  for i in 1:6 loop
    connect(TWal[i].port, roo.surf_surBou[i]);
  end for;

  for i in 1:nCRAC loop
    connect(sup[i].ports[1], roo.ports[i]);
    connect(roo.ports[nCRAC + i], retRes[i].port_a);
    connect(retRes[i].port_b, retSink.ports[i]);

    connect(mFlowRated[i].y, mFlowSet[i].u2);
    connect(u_fan[i], mFlowSet[i].u1);
    connect(mFlowSet[i].y, sup[i].m_flow_in);

    connect(u_Tsup[i], sup[i].T_in);

    T_sup_out[i] = u_Tsup[i];
    T_ret_out[i] = MediumA.temperature(
      MediumA.setState_phX(
        retSink.ports[i].p,
        actualStream(retSink.ports[i].h_outflow),
        actualStream(retSink.ports[i].Xi_outflow)));
  end for;
end DataCentreFFD;
