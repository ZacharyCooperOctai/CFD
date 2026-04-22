within ;
model Scenario_const_inputs
  DataCentreFFD dc;
  Modelica.Blocks.Sources.Constant fan[6](each k = 1.0);
  Modelica.Blocks.Sources.Constant Tsup[6](each k = 287.15);
equation
  for i in 1:6 loop
    connect(fan[i].y, dc.u_fan[i]);
    connect(Tsup[i].y, dc.u_Tsup[i]);
  end for;
end Scenario_const_inputs;
