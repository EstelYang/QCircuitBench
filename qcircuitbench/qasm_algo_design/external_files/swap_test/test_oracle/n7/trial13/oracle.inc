gate r_5072317680(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.2530551929855334, -1.1553817745055637, 1.1553817745055637) _gate_q_0;
}
gate cu1_5072313024(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.6556800647513237) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.6556800647513237) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.6556800647513237) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072312592(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.519766398922494) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8554561232808364) _gate_q_1;
  ry(-0.8554561232808364) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.519766398922494) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5072316192(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.8154457543837446) _gate_q_0;
  u1(-0.8166346636287021) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8667706493972073, 0, -1.8154457543837446) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8667706493972073, 2.6320804180124466, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_plus_yy_5072315472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.475892906967223) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3994218718700053) _gate_q_1;
  ry(-1.3994218718700053) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.475892906967223) _gate_q_0;
}
gate ryy_5072314992(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.159792255369873) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_minus_yy_5072315232(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.042226540461417) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2685728237154004) _gate_q_0;
  ry(-1.2685728237154004) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.042226540461417) _gate_q_1;
}
gate ryy_5072315952(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7522450812589803) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5072315760(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.7151402731372094) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  swap _gate_q_2, _gate_q_0;
  r_5072317680(0.2530551929855334, 0.41541455228933294) _gate_q_3;
  ry(1.6561821041272549) _gate_q_6;
  cu1_5072313024(5.311360129502647) _gate_q_4, _gate_q_1;
  z _gate_q_5;
  p(3.0791594838734304) _gate_q_3;
  cs _gate_q_6, _gate_q_4;
  sx _gate_q_5;
  xx_plus_yy_5072312592(1.7109122465616728, 2.519766398922494) _gate_q_1, _gate_q_0;
  h _gate_q_2;
  z _gate_q_3;
  tdg _gate_q_0;
  p(3.0569884654859063) _gate_q_2;
  dcx _gate_q_1, _gate_q_6;
  cu3_5072316192(1.7335412987944145, 2.6320804180124466, 0.9988110907550424) _gate_q_4, _gate_q_5;
  iswap _gate_q_0, _gate_q_1;
  u1(1.6288649960765957) _gate_q_2;
  xx_plus_yy_5072315472(2.7988437437400107, 3.475892906967223) _gate_q_3, _gate_q_5;
  t _gate_q_6;
  tdg _gate_q_4;
  rz(5.795620792485186) _gate_q_2;
  ryy_5072314992(4.159792255369873) _gate_q_4, _gate_q_3;
  ch _gate_q_5, _gate_q_0;
  z _gate_q_6;
  x _gate_q_1;
  ch _gate_q_2, _gate_q_1;
  csdg _gate_q_5, _gate_q_4;
  xx_minus_yy_5072315232(2.5371456474308007, 5.042226540461417) _gate_q_3, _gate_q_6;
  rz(2.3019306539755653) _gate_q_0;
  ryy_5072315952(3.7522450812589803) _gate_q_6, _gate_q_1;
  ch _gate_q_3, _gate_q_2;
  rzz_5072315760(0.7151402731372094) _gate_q_0, _gate_q_4;
  tdg _gate_q_5;
}
gate cu1_5072319648(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9194310161851542) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9194310161851542) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9194310161851542) _gate_q_1;
}
gate rzx_5043124656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5043124704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ecr _gate_q_0, _gate_q_1 {
  rzx_5043124656(pi/4) _gate_q_0, _gate_q_1;
  x _gate_q_0;
  rzx_5043124704(-pi/4) _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5072319216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.1324774164252629) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.2399885821534613) _gate_q_0;
  ry(-2.2399885821534613) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.1324774164252629) _gate_q_1;
}
gate ryy_5072311920(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.891906523931514) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5072312448(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.124981235806892) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9427643738923321) _gate_q_0;
  ry(-0.9427643738923321) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.124981235806892) _gate_q_1;
}
gate xx_plus_yy_5072313216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.8674980648208246) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.197012847580799) _gate_q_1;
  ry(-1.197012847580799) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.8674980648208246) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  sdg _gate_q_3;
  crx(2.0986531501201413) _gate_q_2, _gate_q_4;
  z _gate_q_1;
  t _gate_q_6;
  crx(3.909932505534029) _gate_q_0, _gate_q_5;
  cu1_5072319648(3.8388620323703084) _gate_q_6, _gate_q_5;
  crz(4.168930823888671) _gate_q_1, _gate_q_4;
  cy _gate_q_3, _gate_q_2;
  h _gate_q_0;
  ecr _gate_q_2, _gate_q_4;
  xx_minus_yy_5072319216(4.479977164306923, 0.1324774164252629) _gate_q_1, _gate_q_6;
  U(6.24390024748708, 0.11349933282721729, 5.895269474457477) _gate_q_0;
  rx(5.27696504428432) _gate_q_3;
  u3(0.7693438826486565, 3.6582972134707825, 1.0093565679012924) _gate_q_5;
  s _gate_q_4;
  ryy_5072311920(0.891906523931514) _gate_q_5, _gate_q_2;
  ecr _gate_q_3, _gate_q_1;
  u2(2.9233506108960134, 0.430173686227929) _gate_q_6;
  rx(0.41125436323311154) _gate_q_0;
  tdg _gate_q_5;
  iswap _gate_q_2, _gate_q_4;
  cp(1.5918532377081187) _gate_q_3, _gate_q_0;
  xx_minus_yy_5072312448(1.8855287477846643, 6.124981235806892) _gate_q_1, _gate_q_6;
  ch _gate_q_5, _gate_q_2;
  ch _gate_q_3, _gate_q_0;
  s _gate_q_1;
  swap _gate_q_6, _gate_q_4;
  u1(1.0892464623957896) _gate_q_2;
  cu(0.26085909825811215, 2.093860654182772, 2.949089888243523, 1.7623367428100984) _gate_q_4, _gate_q_3;
  cs _gate_q_6, _gate_q_0;
  xx_plus_yy_5072313216(2.394025695161598, 2.8674980648208246) _gate_q_1, _gate_q_5;
}