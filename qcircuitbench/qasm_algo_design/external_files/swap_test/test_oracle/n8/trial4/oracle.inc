gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5106394048(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.1597825947887217) _gate_q_0;
  u1(2.863613264579121) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9977923526652278, 0, -3.1597825947887217) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9977923526652278, 0.29616933020960073, 0) _gate_q_1;
}
gate ryy_5106393856(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.286168279135664) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate rzz_5106395344(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.950417924371629) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5106386944(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.97213753736216) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate ryy_5106395536(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.746391725829516) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5106395632(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.135011152987613, -0.8401910429671468, 0.8401910429671468) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5106390064(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.307000452166449) _gate_q_0;
  u1(1.7836879389919276) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7971726061265001, 0, -4.307000452166449) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7971726061265001, 2.523312513174521, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  cs _gate_q_7, _gate_q_5;
  h _gate_q_2;
  cu3_5106394048(1.9955847053304556, 0.29616933020960073, 6.0233958593678425) _gate_q_0, _gate_q_3;
  ryy_5106393856(3.286168279135664) _gate_q_1, _gate_q_4;
  sdg _gate_q_6;
  cs _gate_q_5, _gate_q_0;
  ry(2.6015263527610983) _gate_q_3;
  crz(0.7712910943051426) _gate_q_1, _gate_q_2;
  dcx _gate_q_6, _gate_q_4;
  rz(6.267233987573052) _gate_q_7;
  u1(4.882035770110326) _gate_q_6;
  cry(5.071748512884247) _gate_q_2, _gate_q_1;
  x _gate_q_4;
  ecr _gate_q_5, _gate_q_7;
  t _gate_q_3;
  tdg _gate_q_0;
  rx(2.7323200641000747) _gate_q_2;
  ry(6.126973072735706) _gate_q_1;
  ry(4.4992055421004205) _gate_q_0;
  id _gate_q_6;
  cry(4.264824794995493) _gate_q_3, _gate_q_7;
  crx(0.805874348088111) _gate_q_5, _gate_q_4;
  U(1.4325577814509995, 5.08903101687724, 4.2332120977361525) _gate_q_6;
  s _gate_q_4;
  tdg _gate_q_2;
  rzz_5106395344(5.950417924371629) _gate_q_5, _gate_q_7;
  t _gate_q_0;
  x _gate_q_3;
  p(2.671141436786191) _gate_q_1;
  rz(1.9478375374584862) _gate_q_0;
  cry(4.864249032319657) _gate_q_3, _gate_q_2;
  rxx_5106386944(4.97213753736216) _gate_q_5, _gate_q_6;
  cx _gate_q_1, _gate_q_7;
  sdg _gate_q_4;
  csdg _gate_q_2, _gate_q_1;
  ryy_5106395536(4.746391725829516) _gate_q_5, _gate_q_6;
  r_5106395632(6.135011152987613, 0.7306052838277498) _gate_q_0;
  crx(0.3444264746269082) _gate_q_7, _gate_q_4;
  tdg _gate_q_3;
  iswap _gate_q_1, _gate_q_7;
  cp(3.8055988958385605) _gate_q_4, _gate_q_0;
  cu3_5106390064(1.5943452122530002, 2.523312513174521, 6.090688391158376) _gate_q_6, _gate_q_2;
  z _gate_q_3;
  rz(0.6612961819638233) _gate_q_5;
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
gate r_5106573264(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.70725632920347, -1.0415147359875094, 1.0415147359875094) _gate_q_0;
}
gate rzx_5106573312(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.099232402800285) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate ryy_5106573408(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.328254829216995) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5106567600(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.645320108732985) _gate_q_0;
  u1(0.013877984491988293) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.1774362869906932, 0, -3.645320108732985) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.1774362869906932, 3.631442124240997, 0) _gate_q_1;
}
gate r_5106569232(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.8751600491746514, 0.24825203843033128, -0.24825203843033128) _gate_q_0;
}
gate ryy_5106569184(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.001435916014811) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5106569088(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.8352291628721292) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9021408897197143) _gate_q_0;
  ry(-0.9021408897197143) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.8352291628721292) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  sdg _gate_q_4;
  u1(1.600101077682682) _gate_q_1;
  ch _gate_q_7, _gate_q_5;
  cry(3.3448897222565344) _gate_q_2, _gate_q_0;
  csx _gate_q_3, _gate_q_6;
  r_5106573264(4.70725632920347, 0.5292815908073871) _gate_q_4;
  rzx_5106573312(4.099232402800285) _gate_q_2, _gate_q_3;
  s _gate_q_6;
  x _gate_q_1;
  sxdg _gate_q_0;
  csx _gate_q_7, _gate_q_5;
  y _gate_q_2;
  crz(2.134483285814256) _gate_q_3, _gate_q_4;
  x _gate_q_7;
  ryy_5106573408(3.328254829216995) _gate_q_1, _gate_q_0;
  ch _gate_q_6, _gate_q_5;
  iswap _gate_q_1, _gate_q_0;
  u3(3.1890619844572936, 6.090913363838277, 0.30054447260023764) _gate_q_5;
  u2(5.263345623183997, 1.6280411438895608) _gate_q_2;
  cu3_5106567600(0.3548725739813864, 3.631442124240997, 3.6591980932249735) _gate_q_7, _gate_q_6;
  y _gate_q_4;
  sx _gate_q_3;
  sx _gate_q_1;
  dcx _gate_q_2, _gate_q_5;
  cz _gate_q_7, _gate_q_3;
  z _gate_q_4;
  s _gate_q_0;
  U(2.0188950334452525, 3.0911615707097018, 2.1667078859191444) _gate_q_6;
  h _gate_q_1;
  sxdg _gate_q_0;
  cz _gate_q_2, _gate_q_7;
  id _gate_q_6;
  cs _gate_q_3, _gate_q_4;
  y _gate_q_5;
  cz _gate_q_3, _gate_q_6;
  sx _gate_q_7;
  cx _gate_q_2, _gate_q_4;
  U(2.902440946715454, 5.443827170245499, 5.81285407488223) _gate_q_1;
  id _gate_q_0;
  r_5106569232(1.8751600491746514, 1.8190483652252278) _gate_q_5;
  ryy_5106569184(1.001435916014811) _gate_q_4, _gate_q_0;
  id _gate_q_1;
  p(1.2759853587121348) _gate_q_5;
  xx_minus_yy_5106569088(1.8042817794394286, 0.8352291628721292) _gate_q_6, _gate_q_2;
  ch _gate_q_3, _gate_q_7;
}