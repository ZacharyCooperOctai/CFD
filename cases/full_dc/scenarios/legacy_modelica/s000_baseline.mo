// Auto-generated scenario: s000_baseline
// Baseline: all CRACs 100% fan, 14°C
model Scenario_s000_baseline
  DataCentreFFD dc;

  Modelica.Blocks.Sources.CombiTimeTable fanTable(
    table = [0, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000;
             30, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000],
    columns = 2:7,
    smoothness = Modelica.Blocks.Types.Smoothness.ConstantSegments)
    annotation(Placement(transformation(extent={{-200, 60}, {-180, 80}})));

  Modelica.Blocks.Sources.CombiTimeTable TsupTable(
    table = [0, 287.1500, 287.1500, 287.1500, 287.1500, 287.1500, 287.1500;
             30, 287.1500, 287.1500, 287.1500, 287.1500, 287.1500, 287.1500],
    columns = 2:7,
    smoothness = Modelica.Blocks.Types.Smoothness.ConstantSegments)
    annotation(Placement(transformation(extent={{-200, 30}, {-180, 50}})));

equation
  for i in 1:6 loop
    connect(fanTable.y[i],  dc.u_fan[i]);
    connect(TsupTable.y[i], dc.u_Tsup[i]);
  end for;

  annotation(experiment(StopTime = 30, Interval = 10));
end Scenario_s000_baseline;
