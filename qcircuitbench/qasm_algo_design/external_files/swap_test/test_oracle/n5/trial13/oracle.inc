gate rzz_5070809824(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.3272449267471074) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5070810208(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.287777815089538) _gate_q_0;
  u1(-0.64759883395871) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4851986377298692, 0, -2.287777815089538) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4851986377298692, 2.935376649048248, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  ry(0.18940808484780647) _gate_q_1;
  rzz_5070809824(1.3272449267471074) _gate_q_2, _gate_q_0;
  cp(3.6181791422455336) _gate_q_3, _gate_q_4;
  p(2.5482063776925266) _gate_q_3;
  crx(2.939275948853163) _gate_q_0, _gate_q_4;
  cu3_5070810208(2.9703972754597383, 2.935376649048248, 1.6401789811308278) _gate_q_1, _gate_q_2;
  csdg _gate_q_0, _gate_q_2;
  crz(1.8059188163206057) _gate_q_1, _gate_q_3;
  p(0.20513742897882178) _gate_q_4;
  sdg _gate_q_0;
  z _gate_q_1;
  s _gate_q_2;
  cry(4.916288363992525) _gate_q_3, _gate_q_4;
  cx _gate_q_3, _gate_q_4;
  cry(2.8748476032628103) _gate_q_1, _gate_q_0;
  u1(1.5650425132465258) _gate_q_2;
}
gate ryy_5070809728(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.91793755327084) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rxx_5070809344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.044816373782884) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5070811072(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.389175399227551, -0.3137780304980784, 0.3137780304980784) _gate_q_0;
}
gate rxx_5070810448(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.8477660860586065) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  sdg _gate_q_3;
  u1(3.4967452773774745) _gate_q_2;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_4;
  ryy_5070809728(5.91793755327084) _gate_q_1, _gate_q_3;
  ch _gate_q_0, _gate_q_2;
  z _gate_q_4;
  rx(2.002086256925287) _gate_q_2;
  h _gate_q_4;
  u1(3.319135776758523) _gate_q_0;
  id _gate_q_3;
  sxdg _gate_q_1;
  csdg _gate_q_0, _gate_q_3;
  sx _gate_q_4;
  rxx_5070809344(6.044816373782884) _gate_q_1, _gate_q_2;
  r_5070811072(5.389175399227551, 1.2570182962968182) _gate_q_2;
  sx _gate_q_0;
  rxx_5070810448(4.8477660860586065) _gate_q_4, _gate_q_3;
  x _gate_q_1;
}