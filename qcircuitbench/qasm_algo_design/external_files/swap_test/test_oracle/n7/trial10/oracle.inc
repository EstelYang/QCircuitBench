gate ryy_5106259424(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.54910622015995) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate rzz_5106259376(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.911881629816315) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5106258512(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.274076097863053) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5106260048(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.573744647289178) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5106258416(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.620770157624118) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  cp(5.073927511875744) _gate_q_6, _gate_q_0;
  crx(4.435312044987482) _gate_q_1, _gate_q_2;
  s _gate_q_3;
  x _gate_q_4;
  sdg _gate_q_5;
  ryy_5106259424(3.54910622015995) _gate_q_6, _gate_q_5;
  sx _gate_q_3;
  ecr _gate_q_0, _gate_q_2;
  rzz_5106259376(0.911881629816315) _gate_q_4, _gate_q_1;
  cu(2.5926507021346845, 1.4642822975296386, 1.3414174829800454, 4.112808571618595) _gate_q_6, _gate_q_1;
  z _gate_q_2;
  cp(6.061359981167542) _gate_q_0, _gate_q_3;
  cz _gate_q_4, _gate_q_5;
  cx _gate_q_5, _gate_q_3;
  rzz_5106258512(6.274076097863053) _gate_q_4, _gate_q_0;
  sxdg _gate_q_6;
  u3(5.51324104621337, 5.994814275462492, 3.5995128835566526) _gate_q_2;
  y _gate_q_1;
  sxdg _gate_q_4;
  rx(3.496237561736915) _gate_q_0;
  cy _gate_q_2, _gate_q_3;
  rz(5.919220323649923) _gate_q_1;
  crz(5.25232022137236) _gate_q_6, _gate_q_5;
  y _gate_q_0;
  dcx _gate_q_4, _gate_q_6;
  h _gate_q_5;
  crz(2.3389534544145727) _gate_q_3, _gate_q_2;
  x _gate_q_1;
  ryy_5106260048(5.573744647289178) _gate_q_1, _gate_q_6;
  ryy_5106258416(3.620770157624118) _gate_q_0, _gate_q_2;
  x _gate_q_5;
  h _gate_q_4;
  t _gate_q_3;
}
gate ryy_5106270032(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.697672271692244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5106257792(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.767525197266435, 3.0603754072695875, -3.0603754072695875) _gate_q_0;
}
gate r_5106258464(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.8660998900265904, 3.3079295414675105, -3.3079295414675105) _gate_q_0;
}
gate cu1_5106257888(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(4.8739291815208223e-05) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-4.8739291815208223e-05) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(4.8739291815208223e-05) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5106016832(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.7146494062780295, 0.24888796745161845, -0.24888796745161845) _gate_q_0;
}
gate xx_minus_yy_5106019760(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.22955749477458468) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.698141384796127) _gate_q_0;
  ry(-0.698141384796127) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.22955749477458468) _gate_q_1;
}
gate xx_plus_yy_5106014816(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.2718122949669885) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.14617522485446338) _gate_q_1;
  ry(-0.14617522485446338) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.2718122949669885) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  u2(0.722333154701983, 2.9414458005891295) _gate_q_2;
  cry(0.8872526485839004) _gate_q_0, _gate_q_3;
  U(5.353623241694072, 4.90732815043187, 0.9224157171378389) _gate_q_1;
  rx(4.120679397472463) _gate_q_6;
  sdg _gate_q_4;
  id _gate_q_5;
  sx _gate_q_5;
  tdg _gate_q_6;
  x _gate_q_0;
  ryy_5106270032(3.697672271692244) _gate_q_1, _gate_q_4;
  r_5106257792(2.767525197266435, 4.631171734064484) _gate_q_2;
  s _gate_q_3;
  cry(2.4579958939420106) _gate_q_2, _gate_q_1;
  cy _gate_q_4, _gate_q_0;
  s _gate_q_6;
  r_5106258464(1.8660998900265904, 4.878725868262407) _gate_q_3;
  s _gate_q_5;
  cu1_5106257888(9.747858363041645e-05) _gate_q_6, _gate_q_1;
  csdg _gate_q_3, _gate_q_5;
  r_5106016832(4.7146494062780295, 1.819684294246515) _gate_q_4;
  dcx _gate_q_0, _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  z _gate_q_1;
  xx_minus_yy_5106019760(1.396282769592254, 0.22955749477458468) _gate_q_6, _gate_q_5;
  xx_plus_yy_5106014816(0.29235044970892676, 0.2718122949669885) _gate_q_3, _gate_q_0;
  ch _gate_q_4, _gate_q_0;
  cy _gate_q_3, _gate_q_2;
  rz(4.109545086690115) _gate_q_1;
  csdg _gate_q_6, _gate_q_5;
  y _gate_q_4;
  id _gate_q_0;
  z _gate_q_2;
  tdg _gate_q_1;
  y _gate_q_3;
  rx(4.889443997239344) _gate_q_5;
  rx(5.449494969187106) _gate_q_6;
}