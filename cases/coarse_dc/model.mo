within ;
// =============================================================================
// dc_model.mo
// Data Centre FFD–Modelica Coupled Thermal Model
// =============================================================================
//
// Description:
//   Couples the FFD solver (isat_ffd) to Modelica via the Buildings library
//   Buildings.ThermalZones.Detailed.CFD interface.
//
//   6 CRAC units are modelled as controlled supply fans + cooling coils.
//   Control inputs (fan fraction 0–1, supply temperature setpoint) are exposed
//   as Real inputs so that an external CombiTimeTable can drive scenario sweeps
//   for ML training-data generation.
//
// Target:
//   OpenModelica + Modelica Buildings Library >= v8
//   FFD solver: isat_ffd (Han et al. 2021)
//
// Key parameters:
//   Room:    15 m × 25 m × 4.5 m (incl. 0.6 m plenum)
//   IT load: 520 kW total (104 racks × 5 kW) — update via rack heat flux in .cfd
//   CRACs:   6 units, rated 4.5 m³/s, 14 °C supply
//   Sync:    10 s data-exchange interval between Modelica and FFD
//
// Connections:
//   The room model exposes one fluid port per CRAC supply inlet and one per
//   CRAC return outlet, matched to the port names written in dc_model.cfd
//   (crac_1_supply … crac_6_supply, crac_1_return … crac_6_return).
//
// Usage:
//   1. Install Buildings library and add to OpenModelica library path.
//   2. Ensure dc_model.ffd, dc_model.cfd, dc_model.dat are in the working dir.
//   3. Open in OpenModelica (OMEdit) or compile via OMPython.
//   4. Drive u_fan[1..6] and u_Tsup[1..6] via a CombiTimeTable for scenarios.
// =============================================================================

model DataCentreFFD
  "FFD-coupled data-centre thermal model with 6 parametric CRAC units"

  // -------------------------------------------------------------------------
  // Package imports
  // -------------------------------------------------------------------------
  replaceable package MediumA = Buildings.Media.Air(
    T_default = 295.15)
    "Medium model for air";

  // -------------------------------------------------------------------------
  // Parameters
  // -------------------------------------------------------------------------
  parameter Integer nCRAC = 6
    "Number of CRAC units";

  parameter Real m_flow_rated(unit = "kg/s") = 4.5 * 1.204
    "Rated CRAC air mass flow rate (4.5 m³/s × 1.204 kg/m³)"
    annotation(Dialog(group="CRAC sizing"));

  parameter Real T_sup_rated(unit = "K") = 14.0 + 273.15
    "Rated CRAC supply air temperature [K]"
    annotation(Dialog(group="CRAC sizing"));

  parameter Real T_init(unit = "K") = 22.0 + 273.15
    "Initial domain temperature [K]";

  parameter Real samplePeriod(unit = "s") = 10.0
    "FFD–Modelica data exchange interval [s]"
    annotation(Dialog(group="Coupling"));

  parameter Modelica.Units.SI.Area surBouArea[6] = {
    15.0*25.0,
    15.0*25.0,
    15.0*4.5,
    15.0*4.5,
    107.770001,
    107.770001}
    "Surface areas for floor, ceiling, south, north, west and east walls";

  // -------------------------------------------------------------------------
  // FFD-coupled room
  // -------------------------------------------------------------------------
  // The CFD model acts as the fluid zone. It reads dc_model.ffd which in turn
  // references dc_model.cfd and dc_model.dat.  Port names must match the
  // boundary-condition names written in dc_model.cfd.
  Buildings.ThermalZones.Detailed.CFD roo(
    redeclare package Medium = MediumA,
    // --- Geometry ---
    // Six direct room-envelope surfaces.
    // Plenum is included in the FFD domain; the outer envelope is treated as
    // a thermally massive boundary fixed at the initial room temperature over
    // this short validation horizon.
    nConExt    = 0,       // no exterior constructions
    nConExtWin = 0,
    nConPar    = 0,
    nConBou    = 0,
    nSurBou    = 6,       // 6 direct surface boundaries (adiabatic)
    // --- Direct surface boundaries for floor, ceiling, and four walls ---
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
    // --- FFD coupling ---
    cfdFilNam   = "case.ffd",
    useCFD      = true,
    massDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial,
    samplePeriod = samplePeriod,
    linearizeRadiation = true,
    AFlo        = 15.0*25.0,
    hRoo        = 4.5,
    sensorName  = fill("", 0),
    // --- Ports: 6 supply inlets + 6 return outlets ---
    // Port names MUST match boundary names in dc_model.cfd exactly.
    portName    = {"crac_1_supply", "crac_2_supply", "crac_3_supply",
                   "crac_4_supply", "crac_5_supply", "crac_6_supply",
                   "crac_1_return", "crac_2_return", "crac_3_return",
                   "crac_4_return", "crac_5_return", "crac_6_return"},
    nPorts = 2*nCRAC)
    annotation(Placement(transformation(extent={{-20,-20},{20,20}})));

  Buildings.BoundaryConditions.WeatherData.ReaderTMY3 weaDat(
    filNam =
      Modelica.Utilities.Files.loadResource(
        "modelica://Buildings/Resources/weatherdata/USA_IL_Chicago-OHare.Intl.AP.725300_TMY3.mos"),
    TDryBul = T_init)
    annotation(Placement(transformation(extent={{80,80},{100,100}})));

  // -------------------------------------------------------------------------
  // CRAC supply boundaries
  // -------------------------------------------------------------------------
  // For the coupled workflow, FFD only needs supply mass flow and supply
  // temperature at each CRAC inlet. A prescribed mass-flow/temperature source
  // is therefore sufficient and avoids unnecessary HVAC-side algebraic loops.
  Buildings.Fluid.Sources.MassFlowSource_T sup[nCRAC](
    redeclare each package Medium = MediumA,
    each nPorts = 1,
    each use_m_flow_in = true,
    each use_T_in = true,
    each m_flow = m_flow_rated,
    each T = T_sup_rated)
    annotation(Placement(transformation(extent={{-140,-10},{-120,10}})));

  // -------------------------------------------------------------------------
  // Return-air sink (vented to boundary at return conditions)
  // -------------------------------------------------------------------------
  // A small pressure drop is inserted between each CFD return port and the
  // common pressure sink. This avoids the structural singularity that
  // OpenModelica otherwise creates when multiple room return ports are tied
  // directly to one ideal pressure boundary.
  Buildings.Fluid.FixedResistances.PressureDrop retRes[nCRAC](
    redeclare each package Medium = MediumA,
    each m_flow_nominal = m_flow_rated,
    each dp_nominal = 10.0,
    each allowFlowReversal = false)
    annotation(Placement(transformation(extent={{70,-10},{90,10}})));

  Buildings.Fluid.Sources.Boundary_pT retSink(
    redeclare package Medium = MediumA,
    nPorts = nCRAC)
    annotation(Placement(transformation(extent={{120,-10},{100,10}})));

  // -------------------------------------------------------------------------
  // Control inputs  (driven by CombiTimeTable for scenario sweeps)
  // -------------------------------------------------------------------------
  Modelica.Blocks.Interfaces.RealInput u_fan[nCRAC](
    each min = 0.0,
    each max = 1.0,
    each unit = "1")
    "Fan speed fraction for each CRAC (0 = off, 1 = rated)"
    annotation(Placement(transformation(extent={{-180,40},{-160,60}})));

  Modelica.Blocks.Interfaces.RealInput u_Tsup[nCRAC](
    each min  = 273.15 + 5.0,
    each max  = 273.15 + 30.0,
    each unit = "K")
    "Supply temperature setpoint for each CRAC [K]"
    annotation(Placement(transformation(extent={{-180,10},{-160,30}})));

  // -------------------------------------------------------------------------
  // Control outputs  (for monitoring and ML data collection)
  // -------------------------------------------------------------------------
  Modelica.Blocks.Interfaces.RealOutput T_sup_out[nCRAC](
    each unit = "K")
    "Actual supply air temperature at each CRAC outlet [K]"
    annotation(Placement(transformation(extent={{160,40},{180,60}})));

  Modelica.Blocks.Interfaces.RealOutput T_ret_out[nCRAC](
    each unit = "K")
    "Return air temperature at each CRAC inlet [K]"
    annotation(Placement(transformation(extent={{160,10},{180,30}})));

  // -------------------------------------------------------------------------
  // Fan mass-flow rate setpoints  (u_fan × rated)
  // -------------------------------------------------------------------------
  Modelica.Blocks.Math.Product mFlowSet[nCRAC]
    annotation(Placement(transformation(extent={{-130,-30},{-110,-10}})));
  Modelica.Blocks.Sources.Constant mFlowRated[nCRAC](
    each k = m_flow_rated)
    annotation(Placement(transformation(extent={{-160,-50},{-140,-30}})));

  // Buildings.ThermalZones.Detailed.CFD expects radiant, convective, and
  // latent room gains as a 3-element input. Wire these the same way as the
  // upstream Buildings FFD examples and leave them at zero for this workflow.
  Modelica.Blocks.Sources.Constant qConGai_flow(k = 0.0)
    annotation(Placement(transformation(extent={{-120,70},{-100,90}})));
  Modelica.Blocks.Sources.Constant qRadGai_flow(k = 0.0)
    annotation(Placement(transformation(extent={{-120,100},{-100,120}})));
  Modelica.Blocks.Sources.Constant qLatGai_flow(k = 0.0)
    annotation(Placement(transformation(extent={{-120,40},{-100,60}})));
  Modelica.Blocks.Routing.Multiplex3 qGaiMux
    annotation(Placement(transformation(extent={{-80,60},{-60,80}})));

  Modelica.Thermal.HeatTransfer.Sources.FixedTemperature TWal[6](each T = T_init)
    "Reference temperature for the room envelope"
    annotation(Placement(transformation(extent={{90,40},{110,60}})));

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
    // Supply source → room supply port
    connect(sup[i].ports[1],       roo.ports[i]);        // supply ports 1..6

    // Room return port → small resistance → common pressure sink
    connect(roo.ports[nCRAC + i],  retRes[i].port_a);    // return ports 7..12
    connect(retRes[i].port_b,      retSink.ports[i]);

    // Supply mass-flow setpoint: u_fan[i] × m_flow_rated
    connect(mFlowRated[i].y,       mFlowSet[i].u2);
    connect(u_fan[i],              mFlowSet[i].u1);
    connect(mFlowSet[i].y,         sup[i].m_flow_in);

    // Supply temperature setpoint
    connect(u_Tsup[i],             sup[i].T_in);

    // Output bus
    T_sup_out[i] = u_Tsup[i];
    T_ret_out[i] = MediumA.temperature(
      MediumA.setState_phX(
        retSink.ports[i].p,
        actualStream(retSink.ports[i].h_outflow),
        actualStream(retSink.ports[i].Xi_outflow)));
  end for;

  annotation(
    Documentation(info="<html>
<p>
  Data-centre FFD–Modelica coupled model.
  Six CRAC units supply conditioned air into the raised-floor plenum and
  extract warm return air from the white space.
  The FFD solver (isat_ffd) handles the spatially-resolved airflow and
  temperature field; Modelica handles the HVAC equipment and controls.
</p>
<h4>Control interface for ML scenario sweeps</h4>
<p>
  Drive <code>u_fan[1..6]</code> (0–1 fan fraction) and
  <code>u_Tsup[1..6]</code> (supply temperature setpoint in K) via a
  <code>Modelica.Blocks.Sources.CombiTimeTable</code> reading a scenario CSV.
  See <code>run_scenarios.py</code> for the sweep design.
</p>
<h4>Port order</h4>
<p>
  <code>roo.ports[1..6]</code>   = CRAC supply inlets (names: crac_1_supply … crac_6_supply)<br/>
  <code>roo.ports[7..12]</code>  = CRAC return outlets (names: crac_1_return … crac_6_return)
</p>
<h4>References</h4>
<ul>
  <li>Zuo et al. 2016 – Modelica Buildings library CFD coupling</li>
  <li>Han et al. 2021 – isat_ffd data-centre FFD</li>
</ul>
</html>"),
    experiment(
      StopTime  = 900,
      Interval  = 10,
      Tolerance = 1e-6),
    uses(Buildings(version="9.0.0"),
         Modelica(version="4.0.0")));

end DataCentreFFD;
