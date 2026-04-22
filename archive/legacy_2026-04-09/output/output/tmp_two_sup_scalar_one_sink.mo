within ;
model TmpTwoSupScalarOneSink
  replaceable package MediumA = Buildings.Media.Air(T_default=295.15);
  parameter Modelica.Units.SI.Time samplePeriod = 10.0;
  parameter Modelica.Units.SI.Temperature T_init = 295.15;
  Buildings.ThermalZones.Detailed.CFD roo(
    redeclare package Medium = MediumA,
    nConExt=0,
    nConExtWin=0,
    nConPar=0,
    nConBou=0,
    nSurBou=6,
    surBou(
      name={"floor","ceiling","south_wall","north_wall","west_wall","east_wall"},
      A={15.0*25.0,15.0*25.0,15.0*4.5,15.0*4.5,25.0*4.5,25.0*4.5},
      til={Buildings.Types.Tilt.Floor,Buildings.Types.Tilt.Ceiling,Buildings.Types.Tilt.Wall,Buildings.Types.Tilt.Wall,Buildings.Types.Tilt.Wall,Buildings.Types.Tilt.Wall},
      each absIR=1e-5,
      each absSol=1e-5,
      each boundaryCondition=Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate),
    cfdFilNam="dc_model.ffd",
    useCFD=true,
    massDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
    samplePeriod=samplePeriod,
    AFlo=15.0*25.0,
    hRoo=4.5,
    sensorName={""},
    portName={"crac_1_supply","crac_2_supply","crac_1_return","crac_2_return"},
    nPorts=4);
  Buildings.BoundaryConditions.WeatherData.ReaderTMY3 weaDat(
    filNam=Modelica.Utilities.Files.loadResource("modelica://Buildings/Resources/weatherdata/USA_IL_Chicago-OHare.Intl.AP.725300_TMY3.mos"),
    TDryBul=T_init);
  Modelica.Blocks.Sources.Constant qCon(k=0);
  Modelica.Blocks.Sources.Constant qRad(k=0);
  Modelica.Blocks.Sources.Constant qLat(k=0);
  Modelica.Blocks.Routing.Multiplex3 qGaiMux;
  Buildings.Fluid.Sources.MassFlowSource_T sup1(redeclare package Medium=MediumA, nPorts=1, use_m_flow_in=true, use_T_in=true, m_flow=4.5*1.204, T=287.15);
  Buildings.Fluid.Sources.MassFlowSource_T sup2(redeclare package Medium=MediumA, nPorts=1, use_m_flow_in=true, use_T_in=true, m_flow=4.5*1.204, T=287.15);
  Buildings.Fluid.Sources.Boundary_pT ret(redeclare package Medium=MediumA, nPorts=2);
  Modelica.Blocks.Sources.Constant fan1(k=1.0);
  Modelica.Blocks.Sources.Constant fan2(k=1.0);
  Modelica.Blocks.Sources.Constant Tsup1(k=287.15);
  Modelica.Blocks.Sources.Constant Tsup2(k=287.15);
equation
  connect(qRad.y, qGaiMux.u1[1]);
  connect(qCon.y, qGaiMux.u2[1]);
  connect(qLat.y, qGaiMux.u3[1]);
  connect(qGaiMux.y, roo.qGai_flow);
  connect(weaDat.weaBus, roo.weaBus);
  connect(fan1.y, sup1.m_flow_in);
  connect(Tsup1.y, sup1.T_in);
  connect(fan2.y, sup2.m_flow_in);
  connect(Tsup2.y, sup2.T_in);
  connect(sup1.ports[1], roo.ports[1]);
  connect(sup2.ports[1], roo.ports[2]);
  connect(roo.ports[3], ret.ports[1]);
  connect(roo.ports[4], ret.ports[2]);
end TmpTwoSupScalarOneSink;
