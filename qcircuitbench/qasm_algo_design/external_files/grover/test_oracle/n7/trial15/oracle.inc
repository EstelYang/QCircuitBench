gate mcphase_5368131376(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  cp(pi/32) _gate_q_4, _gate_q_5;
  cx _gate_q_4, _gate_q_3;
  cp(-pi/32) _gate_q_3, _gate_q_5;
  cx _gate_q_4, _gate_q_3;
  cp(pi/32) _gate_q_3, _gate_q_5;
  cx _gate_q_3, _gate_q_2;
  cp(-pi/32) _gate_q_2, _gate_q_5;
  cx _gate_q_4, _gate_q_2;
  cp(pi/32) _gate_q_2, _gate_q_5;
  cx _gate_q_3, _gate_q_2;
  cp(-pi/32) _gate_q_2, _gate_q_5;
  cx _gate_q_4, _gate_q_2;
  cp(pi/32) _gate_q_2, _gate_q_5;
  cx _gate_q_2, _gate_q_1;
  cp(-pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cp(pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_3, _gate_q_1;
  cp(-pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cp(pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_2, _gate_q_1;
  cp(-pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cp(pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_3, _gate_q_1;
  cp(-pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cp(pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_1, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_2, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_1, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_2, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
}
gate c6z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  U(pi/2, 0, pi) _gate_q_6;
  cx _gate_q_6, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_6, _gate_q_3;
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
  cx _gate_q_6, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_6, _gate_q_3;
  U(pi/2, pi/4, -pi) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, 0, 3*pi/4) _gate_q_3;
  U(pi/4, pi/2, -pi/2) _gate_q_6;
  cx _gate_q_6, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_6, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  U(pi/2, pi/4, -3*pi/4) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_3, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  U(pi/2, -pi/4, 3*pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_6, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_6, _gate_q_2;
  U(pi/2, pi/4, -pi) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_3, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  U(pi/2, 0, 3*pi/4) _gate_q_2;
  U(pi/4, -pi/2, pi/2) _gate_q_6;
  cx _gate_q_6, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_6, _gate_q_3;
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
  cx _gate_q_6, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_6, _gate_q_3;
  U(pi/2, pi/4, -pi) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, 0, 3*pi/4) _gate_q_3;
  U(pi/4, pi/2, -pi/2) _gate_q_6;
  cx _gate_q_6, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_6, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  U(pi/2, pi/4, -3*pi/4) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_3, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  U(pi/2, -pi/4, 3*pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_6, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_6, _gate_q_2;
  U(pi/2, pi/4, -pi) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_3, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  U(pi/2, 0, 3*pi/4) _gate_q_2;
  U(pi/2, pi/4, -pi) _gate_q_6;
  mcphase_5368131376(pi/2) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_3;
  x _gate_q_4;
  x _gate_q_5;
  c6z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_3;
  x _gate_q_4;
  x _gate_q_5;
}
gate cu1_5368599840(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
}
gate cu1_5368599456(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368604112(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368603968(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368604256(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368604448(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368604496(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368604352(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368603488(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368603152(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368605168(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368605456(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368605648(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368605024(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368605552(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368604928(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368605696(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368605744(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368605600(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368605888(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368606080(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368121488(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368131568(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368132528(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368595184(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368604400(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368604880(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368606464(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368606512(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368606368(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368606656(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368606848(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate mcu1_5368598880(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  cu1_5368599840(pi/32) _gate_q_5, _gate_q_6;
  cx _gate_q_5, _gate_q_4;
  cu1_5368599456(-pi/32) _gate_q_4, _gate_q_6;
  cx _gate_q_5, _gate_q_4;
  cu1_5368599840(pi/32) _gate_q_4, _gate_q_6;
  cx _gate_q_4, _gate_q_3;
  cu1_5368604112(-pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_5, _gate_q_3;
  cu1_5368599840(pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_4, _gate_q_3;
  cu1_5368603968(-pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_5, _gate_q_3;
  cu1_5368599840(pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_3, _gate_q_2;
  cu1_5368604256(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5368599840(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_4, _gate_q_2;
  cu1_5368604448(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5368599840(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_3, _gate_q_2;
  cu1_5368604496(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5368599840(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_4, _gate_q_2;
  cu1_5368604352(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5368599840(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_2, _gate_q_1;
  cu1_5368603488(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5368599840(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5368603152(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5368599840(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_3, _gate_q_1;
  cu1_5368605168(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5368599840(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5368605456(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5368599840(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_2, _gate_q_1;
  cu1_5368605648(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5368599840(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5368605024(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5368599840(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_3, _gate_q_1;
  cu1_5368605552(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5368599840(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5368604928(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5368599840(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_1, _gate_q_0;
  cu1_5368605696(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368599840(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5368605744(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368599840(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5368605600(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368599840(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5368605888(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368599840(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_2, _gate_q_0;
  cu1_5368606080(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368599840(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5368121488(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368599840(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5368131568(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368599840(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5368132528(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368599840(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_1, _gate_q_0;
  cu1_5368595184(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368599840(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5368604400(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368599840(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5368604880(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368599840(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5368606464(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368599840(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_2, _gate_q_0;
  cu1_5368606512(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368599840(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5368606368(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368599840(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5368606656(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368599840(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5368606848(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368599840(pi/32) _gate_q_0, _gate_q_6;
}
gate mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  h _gate_q_6;
  mcu1_5368598880(pi) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  h _gate_q_6;
}