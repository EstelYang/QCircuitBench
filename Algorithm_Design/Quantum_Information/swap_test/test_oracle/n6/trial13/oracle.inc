gate r_5072020800(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.243458236628612, -0.18722978753717512, 0.18722978753717512) _gate_q_0;
}
gate rzx_5072020368(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1315890577547467) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5072020704(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.328531858031105) _gate_q_0;
  u1(-0.7324246549591229) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.30507467409088246, 0, -3.328531858031105) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.30507467409088246, 4.060956512990228, 0) _gate_q_1;
}
gate rzx_5072014896(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.337435919660107) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072014848(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.089811554489119) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.375875516605764) _gate_q_1;
  ry(-2.375875516605764) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.089811554489119) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate xx_plus_yy_5072015568(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.2970705346552994) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7720672573378753) _gate_q_1;
  ry(-1.7720672573378753) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.2970705346552994) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  r_5072020800(4.243458236628612, 1.3835665392577214) _gate_q_4;
  cp(5.087776426452369) _gate_q_2, _gate_q_0;
  rx(4.2582706505632) _gate_q_3;
  id _gate_q_5;
  t _gate_q_1;
  crz(5.392868331099457) _gate_q_1, _gate_q_5;
  crz(1.0784732733855487) _gate_q_0, _gate_q_2;
  rzx_5072020368(3.1315890577547467) _gate_q_4, _gate_q_3;
  cu3_5072020704(0.6101493481817649, 4.060956512990228, 2.5961072030719823) _gate_q_1, _gate_q_5;
  ch _gate_q_3, _gate_q_2;
  rzx_5072014896(1.337435919660107) _gate_q_4, _gate_q_0;
  xx_plus_yy_5072014848(4.751751033211528, 5.089811554489119) _gate_q_4, _gate_q_1;
  dcx _gate_q_3, _gate_q_5;
  rz(4.40502263722985) _gate_q_0;
  u1(5.7205186663967) _gate_q_2;
  ch _gate_q_5, _gate_q_4;
  cry(3.3851486944860443) _gate_q_3, _gate_q_2;
  csx _gate_q_0, _gate_q_1;
  crz(1.6774597470050963) _gate_q_5, _gate_q_1;
  id _gate_q_4;
  xx_plus_yy_5072015568(3.5441345146757506, 0.2970705346552994) _gate_q_0, _gate_q_3;
  y _gate_q_2;
}
gate rzz_5072012160(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.14143099647100676) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  csx _gate_q_4, _gate_q_3;
  rzz_5072012160(0.14143099647100676) _gate_q_2, _gate_q_0;
  cu(3.402488713245902, 2.40927302709032, 2.249646958923336, 6.270315388759827) _gate_q_1, _gate_q_5;
  crz(5.203310108302724) _gate_q_2, _gate_q_1;
  sxdg _gate_q_3;
  z _gate_q_0;
  tdg _gate_q_4;
  sxdg _gate_q_5;
  x _gate_q_4;
  cp(3.893114058942277) _gate_q_1, _gate_q_3;
  p(1.8186318190056119) _gate_q_0;
  cp(4.049314284880965) _gate_q_2, _gate_q_5;
  sxdg _gate_q_2;
  h _gate_q_3;
  u3(4.755512931092634, 0.4231367230795885, 3.6322308028064008) _gate_q_1;
  cz _gate_q_5, _gate_q_0;
  h _gate_q_4;
  sx _gate_q_2;
  tdg _gate_q_4;
  tdg _gate_q_3;
  cry(3.33137549966235) _gate_q_1, _gate_q_5;
  sxdg _gate_q_0;
  cs _gate_q_1, _gate_q_2;
  sxdg _gate_q_3;
  cp(4.2718131301281685) _gate_q_0, _gate_q_5;
  h _gate_q_4;
}