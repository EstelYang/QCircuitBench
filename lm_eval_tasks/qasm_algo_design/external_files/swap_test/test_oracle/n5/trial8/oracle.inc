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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  swap _gate_q_1, _gate_q_4;
  ecr _gate_q_3, _gate_q_0;
  sxdg _gate_q_2;
  ry(3.8326886272759957) _gate_q_4;
  t _gate_q_0;
  x _gate_q_2;
  ch _gate_q_1, _gate_q_3;
  z _gate_q_0;
  rx(2.683551940574032) _gate_q_4;
  h _gate_q_1;
  ecr _gate_q_3, _gate_q_2;
  dcx _gate_q_1, _gate_q_2;
  sxdg _gate_q_3;
  h _gate_q_4;
  z _gate_q_0;
  t _gate_q_4;
  u1(3.218658859326901) _gate_q_1;
  sdg _gate_q_0;
  u1(1.2770868324701619) _gate_q_2;
  z _gate_q_3;
}
gate ryy_5105597136(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.512963681609136) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105597328(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.285291032963374) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5105596992(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.2834657888533743) _gate_q_0;
  u1(0.1799818768831274) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4211959703721395, 0, -2.2834657888533743) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4211959703721395, 2.1034839119702466, 0) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_minus_yy_5105597184(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.560830853576296) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.013431730175620951) _gate_q_0;
  ry(-0.013431730175620951) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.560830853576296) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  ryy_5105597136(4.512963681609136) _gate_q_3, _gate_q_1;
  ryy_5105597328(2.285291032963374) _gate_q_4, _gate_q_0;
  sx _gate_q_2;
  cu3_5105596992(2.842391940744279, 2.1034839119702466, 2.4634476657365014) _gate_q_1, _gate_q_2;
  cs _gate_q_0, _gate_q_4;
  rz(4.312503262797005) _gate_q_3;
  t _gate_q_1;
  rx(5.342133799173748) _gate_q_3;
  cz _gate_q_0, _gate_q_4;
  t _gate_q_2;
  rx(4.727052002978493) _gate_q_1;
  xx_minus_yy_5105597184(0.026863460351241902, 2.560830853576296) _gate_q_2, _gate_q_3;
  sdg _gate_q_0;
  rx(2.8113550370403204) _gate_q_4;
  u2(1.8173056244341614, 4.616826869880367) _gate_q_0;
  id _gate_q_2;
  t _gate_q_1;
  swap _gate_q_3, _gate_q_4;
}