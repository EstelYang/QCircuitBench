gate r_5105280272(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.8086431496299529, -1.0689268018685336, 1.0689268018685336) _gate_q_0;
}
gate cu1_5105276192(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.29379423058174686) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.29379423058174686) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.29379423058174686) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu1_5105277440(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.288405220866359) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.288405220866359) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.288405220866359) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  z _gate_q_2;
  r_5105280272(1.8086431496299529, 0.5018695249263629) _gate_q_1;
  y _gate_q_0;
  rz(0.8008283911764957) _gate_q_3;
  cu(5.343462486985393, 2.309982370029974, 4.598018508379316, 3.5288190865357767) _gate_q_2, _gate_q_0;
  cu1_5105276192(0.5875884611634937) _gate_q_1, _gate_q_3;
  csdg _gate_q_2, _gate_q_1;
  cu1_5105277440(2.576810441732718) _gate_q_0, _gate_q_3;
  cz _gate_q_3, _gate_q_0;
  x _gate_q_1;
  z _gate_q_2;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105273360(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.8816883866529075) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7520911244240623) _gate_q_0;
  ry(-0.7520911244240623) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.8816883866529075) _gate_q_1;
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
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  id _gate_q_2;
  crz(3.8698042770964247) _gate_q_1, _gate_q_0;
  sdg _gate_q_3;
  xx_minus_yy_5105273360(1.5041822488481247, 5.8816883866529075) _gate_q_2, _gate_q_0;
  z _gate_q_3;
  s _gate_q_1;
  csdg _gate_q_3, _gate_q_2;
  y _gate_q_1;
  u2(0.8897235237633386, 1.6032764692584995) _gate_q_0;
  csx _gate_q_2, _gate_q_0;
  y _gate_q_1;
  h _gate_q_3;
}