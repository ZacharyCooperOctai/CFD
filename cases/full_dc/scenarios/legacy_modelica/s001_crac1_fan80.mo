// Auto-generated scenario: s001_crac1_fan80
// CRAC 1 fan @ 80%, rest @ 100%
model Scenario_s001_crac1_fan80
  extends DataCentreFFD(
    // Constant setpoints for this episode via a CombiTimeTable
    u_fan  = fill(0.0, 6),    // overridden below
    u_Tsup = fill(273.15 + 14.0, 6)   // overridden below
  );

  Modelica.Blocks.Sources.CombiTimeTable fanTable(
    table = [0, 0.8000, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000;
             900, 0.8000, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000],
    columns = 2:7,
    smoothness = Modelica.Blocks.Types.Smoothness.ConstantSegments)
    annotation(Placement(transformation(extent={{-200, 60}, {-180, 80}})));

  Modelica.Blocks.Sources.CombiTimeTable TsupTable(
    table = [0, 287.1500, 287.1500, 287.1500, 287.1500, 287.1500, 287.1500;
             900, 287.1500, 287.1500, 287.1500, 287.1500, 287.1500, 287.1500],
    columns = 2:7,
    smoothness = Modelica.Blocks.Types.Smoothness.ConstantSegments)
    annotation(Placement(transformation(extent={{-200, 30}, {-180, 50}})));

equation
  for i in 1:6 loop
    connect(fanTable.y[i],  u_fan[i]);
    connect(TsupTable.y[i], u_Tsup[i]);
  end for;

  annotation(experiment(StopTime = 900, Interval = 10));
end Scenario_s001_crac1_fan80;
