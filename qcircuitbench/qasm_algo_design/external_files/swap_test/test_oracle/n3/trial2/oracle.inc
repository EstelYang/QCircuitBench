gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5104451456(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.340375247579964) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9452431681808252) _gate_q_0;
  ry(-0.9452431681808252) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.340375247579964) _gate_q_1;
}
gate rzx_4371195392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_4948473424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ecr _gate_q_0, _gate_q_1 {
  rzx_4371195392(pi/4) _gate_q_0, _gate_q_1;
  x _gate_q_0;
  rzx_4948473424(-pi/4) _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  u2(1.1633664525539316, 3.516180298051567) _gate_q_1;
  xx_minus_yy_5104451456(1.8904863363616504, 1.340375247579964) _gate_q_2, _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_2;
  ecr _gate_q_1, _gate_q_0;
  y _gate_q_2;
}
gate cu1_4948306656(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/4) _gate_q_1;
}
gate csx _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cu1_4948306656(pi/2) _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5104449056(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.2105543612407628, 2.9236004663083364, -2.9236004663083364) _gate_q_0;
}
gate cu3_5104449008(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.516473187782134) _gate_q_0;
  u1(-1.3779273068500393) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.6086442924517628, 0, -2.516473187782134) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.6086442924517628, 3.894400494632173, 0) _gate_q_1;
}
gate cu3_5104448912(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.022366567678746) _gate_q_0;
  u1(1.0470373050665447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.14287254600938312, 0, -5.022366567678746) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.14287254600938312, 3.975329262612201, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  csx _gate_q_0, _gate_q_1;
  r_5104449056(3.2105543612407628, 4.494396793103233) _gate_q_2;
  y _gate_q_2;
  cu3_5104449008(5.2172885849035255, 3.894400494632173, 1.1385458809320943) _gate_q_0, _gate_q_1;
  cu3_5104448912(0.28574509201876624, 3.975329262612201, 6.069403872745291) _gate_q_0, _gate_q_2;
  sxdg _gate_q_1;
}