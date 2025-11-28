gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
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
gate r_5105794704(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.51599665566791, 2.3536239541968387, -2.3536239541968387) _gate_q_0;
}
gate rxx_5105792736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.29631487891918257) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105789184(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.115553853711381) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7205830395054122) _gate_q_0;
  ry(-1.7205830395054122) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.115553853711381) _gate_q_1;
}
gate xx_minus_yy_5105794608(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.2727689032207357) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.654093686703746) _gate_q_0;
  ry(-2.654093686703746) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.2727689032207357) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5105794848(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.5151689498743117, 0.493647766517324, -0.493647766517324) _gate_q_0;
}
gate cu3_5105789568(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.215862463651014) _gate_q_0;
  u1(1.6016198824883914) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9924823957345164, 0, -4.215862463651014) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9924823957345164, 2.6142425811626224, 0) _gate_q_1;
}
gate cu1_5105593872(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.696906094605956) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.696906094605956) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.696906094605956) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  csdg _gate_q_6, _gate_q_0;
  u1(0.35196176417365665) _gate_q_3;
  y _gate_q_2;
  csx _gate_q_5, _gate_q_4;
  r_5105794704(2.51599665566791, 3.9244202809917352) _gate_q_1;
  csdg _gate_q_6, _gate_q_0;
  y _gate_q_2;
  rxx_5105792736(0.29631487891918257) _gate_q_5, _gate_q_4;
  x _gate_q_1;
  y _gate_q_3;
  crz(2.166171278783996) _gate_q_3, _gate_q_1;
  cp(1.9205943805470644) _gate_q_2, _gate_q_4;
  xx_minus_yy_5105789184(3.4411660790108245, 6.115553853711381) _gate_q_0, _gate_q_6;
  rz(0.9128632590875572) _gate_q_5;
  t _gate_q_0;
  U(0.46863962585716396, 5.1360041514047, 5.050440761980716) _gate_q_5;
  x _gate_q_6;
  xx_minus_yy_5105794608(5.308187373407492, 1.2727689032207357) _gate_q_3, _gate_q_2;
  iswap _gate_q_4, _gate_q_1;
  rz(5.976321319277926) _gate_q_0;
  sxdg _gate_q_3;
  crz(3.856683701595742) _gate_q_6, _gate_q_5;
  crz(3.0026511635498307) _gate_q_4, _gate_q_1;
  r_5105794848(3.5151689498743117, 2.0644440933122206) _gate_q_2;
  sdg _gate_q_6;
  ch _gate_q_4, _gate_q_3;
  cy _gate_q_2, _gate_q_5;
  u3(4.300981254685718, 2.1183619344558418, 4.137380378676539) _gate_q_0;
  y _gate_q_1;
  cu3_5105789568(1.9849647914690327, 2.6142425811626224, 5.817482346139405) _gate_q_2, _gate_q_0;
  u1(4.528177995002736) _gate_q_6;
  cu1_5105593872(5.393812189211912) _gate_q_3, _gate_q_4;
  rx(2.665620961313925) _gate_q_1;
  z _gate_q_5;
}
gate ryy_5105876240(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.000949579358467444) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5105876624(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.592048335314812) _gate_q_0;
  u1(-2.0537191874932312) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.482130132921408, 0, -3.592048335314812) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.482130132921408, 5.645767522808043, 0) _gate_q_1;
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
gate rzz_5105875664(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.593152019314322) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  crx(5.636189583005259) _gate_q_4, _gate_q_3;
  crx(5.306713944104127) _gate_q_5, _gate_q_6;
  id _gate_q_1;
  sxdg _gate_q_2;
  u3(1.1945020550481118, 1.903084911348768, 1.590486805591233) _gate_q_0;
  h _gate_q_0;
  cz _gate_q_4, _gate_q_3;
  h _gate_q_6;
  sx _gate_q_1;
  sx _gate_q_2;
  y _gate_q_5;
  z _gate_q_1;
  cz _gate_q_3, _gate_q_2;
  csdg _gate_q_6, _gate_q_4;
  x _gate_q_0;
  x _gate_q_5;
  s _gate_q_2;
  ryy_5105876240(0.000949579358467444) _gate_q_1, _gate_q_3;
  cu3_5105876624(2.964260265842816, 5.645767522808043, 1.5383291478215806) _gate_q_6, _gate_q_5;
  p(2.806684176761419) _gate_q_0;
  x _gate_q_4;
  crz(2.1151804290017573) _gate_q_6, _gate_q_5;
  ecr _gate_q_4, _gate_q_0;
  p(1.0777513783510926) _gate_q_2;
  id _gate_q_3;
  tdg _gate_q_1;
  t _gate_q_4;
  rz(3.8250285130453245) _gate_q_0;
  csx _gate_q_5, _gate_q_3;
  sxdg _gate_q_1;
  rzz_5105875664(2.593152019314322) _gate_q_2, _gate_q_6;
  z _gate_q_0;
  iswap _gate_q_5, _gate_q_4;
  ecr _gate_q_1, _gate_q_3;
  p(4.477403097848682) _gate_q_6;
  id _gate_q_2;
}