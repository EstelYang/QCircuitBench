gate rzx_5072463072(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3162488950085798) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072463456(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.219391625966299, 1.5751480015801946, -1.5751480015801946) _gate_q_0;
}
gate rxx_5072463744(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.377047665336156) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072463792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.0753078268037823) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.0054094713022796) _gate_q_1;
  ry(-3.0054094713022796) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.0753078268037823) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu1_5072463168(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7660617033621827) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7660617033621827) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7660617033621827) _gate_q_1;
}
gate cu1_5072464224(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0304287915098747) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0304287915098747) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0304287915098747) _gate_q_1;
}
gate rxx_5072464416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.268743137680378) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072464032(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.946651980063262, 3.768724239283009, -3.768724239283009) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  rz(4.63786535884564) _gate_q_1;
  crx(6.133199094013796) _gate_q_6, _gate_q_4;
  rz(3.0804782892243985) _gate_q_0;
  z _gate_q_3;
  cy _gate_q_5, _gate_q_2;
  s _gate_q_1;
  rzx_5072463072(1.3162488950085798) _gate_q_0, _gate_q_3;
  cp(2.1904183316823485) _gate_q_6, _gate_q_4;
  r_5072463456(5.219391625966299, 3.145944328375091) _gate_q_5;
  U(4.773136478587425, 2.481935599377024, 5.555045108697588) _gate_q_2;
  id _gate_q_1;
  rxx_5072463744(1.377047665336156) _gate_q_3, _gate_q_5;
  u3(2.400914757138991, 5.1500601286397885, 0.8837664952289555) _gate_q_4;
  xx_plus_yy_5072463792(6.010818942604559, 3.0753078268037823) _gate_q_0, _gate_q_6;
  sdg _gate_q_2;
  tdg _gate_q_6;
  cu(4.071981554367637, 5.759130108503952, 4.369915147965302, 1.9515297484979295) _gate_q_4, _gate_q_2;
  csdg _gate_q_1, _gate_q_3;
  u1(1.3524801162452553) _gate_q_5;
  t _gate_q_0;
  rx(5.272135782030016) _gate_q_5;
  cu1_5072463168(1.5321234067243654) _gate_q_4, _gate_q_1;
  u1(3.340422862648653) _gate_q_0;
  cu1_5072464224(2.0608575830197493) _gate_q_3, _gate_q_2;
  s _gate_q_6;
  sx _gate_q_2;
  sdg _gate_q_6;
  cry(0.3586307550454675) _gate_q_3, _gate_q_5;
  rxx_5072464416(6.268743137680378) _gate_q_0, _gate_q_1;
  h _gate_q_4;
  cz _gate_q_6, _gate_q_4;
  rz(5.870404293166717) _gate_q_1;
  r_5072464032(0.946651980063262, 5.339520566077906) _gate_q_2;
  cp(4.067695864613177) _gate_q_3, _gate_q_0;
  x _gate_q_5;
}
gate rxx_5072241440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.544361586754343) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5072241824(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.501560461984939) _gate_q_0;
  u1(1.9497851453809978) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9759636264674698, 0, -3.501560461984939) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9759636264674698, 1.5517753166039416, 0) _gate_q_1;
}
gate ryy_5072242928(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.359269048460312) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5072459232(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.401053875415331) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072241104(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.5482758406135768, -1.5637217488605206, 1.5637217488605206) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5072241008(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.4767686737396915) _gate_q_0;
  u1(2.2049978640196644) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.3248245159851186, 0, -3.4767686737396915) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.3248245159851186, 1.2717708097200275, 0) _gate_q_1;
}
gate cu1_5042941264(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/4) _gate_q_1;
}
gate csx _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cu1_5042941264(pi/2) _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072240864(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.069629546697472) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5072241200(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.7793403875594727) _gate_q_0;
  u1(-0.17446919509770314) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.574813481074511, 0, -0.7793403875594727) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.574813481074511, 0.9538095826571757, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  t _gate_q_3;
  rxx_5072241440(1.544361586754343) _gate_q_2, _gate_q_5;
  cu3_5072241824(1.9519272529349396, 1.5517753166039416, 5.451345607365937) _gate_q_4, _gate_q_0;
  sdg _gate_q_1;
  y _gate_q_6;
  ryy_5072242928(4.359269048460312) _gate_q_5, _gate_q_4;
  cu(4.020306729827889, 2.848172632067578, 1.1400818319794745, 3.0941698788578442) _gate_q_3, _gate_q_6;
  rzz_5072459232(1.401053875415331) _gate_q_2, _gate_q_0;
  r_5072241104(1.5482758406135768, 0.007074577934375831) _gate_q_1;
  tdg _gate_q_2;
  cx _gate_q_5, _gate_q_4;
  tdg _gate_q_1;
  h _gate_q_6;
  cs _gate_q_0, _gate_q_3;
  cs _gate_q_5, _gate_q_2;
  sxdg _gate_q_0;
  cy _gate_q_6, _gate_q_4;
  cz _gate_q_1, _gate_q_3;
  cry(0.9400891447195727) _gate_q_2, _gate_q_5;
  y _gate_q_0;
  y _gate_q_4;
  u1(2.9405184166318175) _gate_q_1;
  cu3_5072241008(4.649649031970237, 1.2717708097200275, 5.681766537759356) _gate_q_6, _gate_q_3;
  ch _gate_q_5, _gate_q_0;
  cs _gate_q_2, _gate_q_6;
  tdg _gate_q_4;
  h _gate_q_3;
  u3(5.844016894079629, 5.35183911729848, 1.7880091296310994) _gate_q_1;
  csx _gate_q_2, _gate_q_0;
  rzz_5072240864(4.069629546697472) _gate_q_6, _gate_q_3;
  cu3_5072241200(5.149626962149022, 0.9538095826571757, 0.6048711924617695) _gate_q_4, _gate_q_5;
  id _gate_q_1;
}