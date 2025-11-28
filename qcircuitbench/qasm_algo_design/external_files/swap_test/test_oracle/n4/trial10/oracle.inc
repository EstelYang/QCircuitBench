gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5105444064(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.050227561325441) _gate_q_0;
  u1(-2.1048824478353625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.763068863137666, 0, -3.050227561325441) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.763068863137666, 5.155110009160803, 0) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105443488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.705808397400132) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.42474124408792) _gate_q_0;
  ry(-2.42474124408792) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.705808397400132) _gate_q_1;
}
gate r_5105444640(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.578579883263577, -0.22705719099422805, 0.22705719099422805) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  cs _gate_q_0, _gate_q_2;
  cp(1.4500750009923744) _gate_q_1, _gate_q_3;
  cu3_5105444064(1.526137726275332, 5.155110009160803, 0.9453451134900781) _gate_q_2, _gate_q_3;
  s _gate_q_1;
  h _gate_q_0;
  ch _gate_q_0, _gate_q_3;
  cry(2.795437872942744) _gate_q_2, _gate_q_1;
  p(3.561531871465544) _gate_q_0;
  xx_minus_yy_5105443488(4.84948248817584, 4.705808397400132) _gate_q_1, _gate_q_2;
  r_5105444640(5.578579883263577, 1.3437391358006685) _gate_q_3;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5105437488(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.3739626934187017) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5105442960(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.860004318031443, 3.4993356705762677, -3.4993356705762677) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  csdg _gate_q_1, _gate_q_2;
  tdg _gate_q_0;
  u3(5.2560470459701, 0.09873069555206107, 0.9557771557842668) _gate_q_3;
  p(2.777807854420196) _gate_q_3;
  ry(5.395709552925343) _gate_q_0;
  y _gate_q_2;
  u3(6.174004989592372, 4.974749596588948, 5.734578490130635) _gate_q_1;
  sxdg _gate_q_1;
  sxdg _gate_q_0;
  rzz_5105437488(3.3739626934187017) _gate_q_2, _gate_q_3;
  cs _gate_q_1, _gate_q_2;
  z _gate_q_0;
  r_5105442960(4.860004318031443, 5.070131997371164) _gate_q_3;
}