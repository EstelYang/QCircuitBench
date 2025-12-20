gate mcphase_5363207584(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  cp(pi/16) _gate_q_3, _gate_q_4;
  cx _gate_q_3, _gate_q_2;
  cp(-pi/16) _gate_q_2, _gate_q_4;
  cx _gate_q_3, _gate_q_2;
  cp(pi/16) _gate_q_2, _gate_q_4;
  cx _gate_q_2, _gate_q_1;
  cp(-pi/16) _gate_q_1, _gate_q_4;
  cx _gate_q_3, _gate_q_1;
  cp(pi/16) _gate_q_1, _gate_q_4;
  cx _gate_q_2, _gate_q_1;
  cp(-pi/16) _gate_q_1, _gate_q_4;
  cx _gate_q_3, _gate_q_1;
  cp(pi/16) _gate_q_1, _gate_q_4;
  cx _gate_q_1, _gate_q_0;
  cp(-pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_3, _gate_q_0;
  cp(pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_2, _gate_q_0;
  cp(-pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_3, _gate_q_0;
  cp(pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_1, _gate_q_0;
  cp(-pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_3, _gate_q_0;
  cp(pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_2, _gate_q_0;
  cp(-pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_3, _gate_q_0;
  cp(pi/16) _gate_q_0, _gate_q_4;
}
gate c5z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  U(pi/2, 0, pi) _gate_q_5;
  cx _gate_q_5, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_5, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  U(pi/2, pi/4, -3*pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, -pi/4, 3*pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_5, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_5, _gate_q_3;
  U(pi/2, pi/4, -pi) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, 0, 3*pi/4) _gate_q_3;
  U(pi/4, pi/2, -pi/2) _gate_q_5;
  cx _gate_q_4, _gate_q_5;
  p(-pi/4) _gate_q_5;
  cx _gate_q_3, _gate_q_5;
  p(pi/4) _gate_q_5;
  cx _gate_q_4, _gate_q_5;
  p(pi/4) _gate_q_4;
  p(-pi/4) _gate_q_5;
  cx _gate_q_3, _gate_q_5;
  cx _gate_q_3, _gate_q_4;
  p(pi/4) _gate_q_3;
  p(-pi/4) _gate_q_4;
  cx _gate_q_3, _gate_q_4;
  U(pi/4, -pi/2, 3*pi/4) _gate_q_5;
  cx _gate_q_5, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_5, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  U(pi/2, pi/4, -3*pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, -pi/4, 3*pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_5, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_5, _gate_q_3;
  U(pi/2, pi/4, -pi) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, 0, 3*pi/4) _gate_q_3;
  U(pi/4, pi/2, -pi/2) _gate_q_5;
  cx _gate_q_4, _gate_q_5;
  p(-pi/4) _gate_q_5;
  cx _gate_q_3, _gate_q_5;
  p(pi/4) _gate_q_5;
  cx _gate_q_4, _gate_q_5;
  p(pi/4) _gate_q_4;
  p(-pi/4) _gate_q_5;
  cx _gate_q_3, _gate_q_5;
  cx _gate_q_3, _gate_q_4;
  p(pi/4) _gate_q_3;
  p(-pi/4) _gate_q_4;
  cx _gate_q_3, _gate_q_4;
  U(pi/2, pi/4, -3*pi/4) _gate_q_5;
  mcphase_5363207584(pi/2) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_3;
  c5z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5;
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_3;
}
gate cu1_5364470832(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
}
gate cu1_5364474528(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364474288(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364481824(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364471264(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364472992(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364479760(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364472608(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364475008(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364466656(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364479376(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364470640(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364476256(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364479616(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364470400(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364469776(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate mcu1_5364472944(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  cu1_5364470832(pi/16) _gate_q_4, _gate_q_5;
  cx _gate_q_4, _gate_q_3;
  cu1_5364474528(-pi/16) _gate_q_3, _gate_q_5;
  cx _gate_q_4, _gate_q_3;
  cu1_5364470832(pi/16) _gate_q_3, _gate_q_5;
  cx _gate_q_3, _gate_q_2;
  cu1_5364474288(-pi/16) _gate_q_2, _gate_q_5;
  cx _gate_q_4, _gate_q_2;
  cu1_5364470832(pi/16) _gate_q_2, _gate_q_5;
  cx _gate_q_3, _gate_q_2;
  cu1_5364481824(-pi/16) _gate_q_2, _gate_q_5;
  cx _gate_q_4, _gate_q_2;
  cu1_5364470832(pi/16) _gate_q_2, _gate_q_5;
  cx _gate_q_2, _gate_q_1;
  cu1_5364471264(-pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cu1_5364470832(pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_3, _gate_q_1;
  cu1_5364472992(-pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cu1_5364470832(pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_2, _gate_q_1;
  cu1_5364479760(-pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cu1_5364470832(pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_3, _gate_q_1;
  cu1_5364472608(-pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cu1_5364470832(pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_1, _gate_q_0;
  cu1_5364475008(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364470832(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cu1_5364466656(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364470832(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_2, _gate_q_0;
  cu1_5364479376(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364470832(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cu1_5364470640(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364470832(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_1, _gate_q_0;
  cu1_5364476256(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364470832(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cu1_5364479616(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364470832(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_2, _gate_q_0;
  cu1_5364470400(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364470832(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cu1_5364469776(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364470832(pi/16) _gate_q_0, _gate_q_5;
}
gate mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  h _gate_q_5;
  mcu1_5364472944(pi) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5;
  h _gate_q_5;
}