gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105507200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.953651521507318) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1836157072450593) _gate_q_0;
  ry(-1.1836157072450593) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.953651521507318) _gate_q_1;
}
gate xx_minus_yy_5105503168(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.240594703662122) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.915447224458958) _gate_q_0;
  ry(-1.915447224458958) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.240594703662122) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu1_5105511088(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4912617847876883) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4912617847876883) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4912617847876883) _gate_q_1;
}
gate ryy_5105509744(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.915609637447685) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105502304(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.152544259055083, 1.0066377499433425, -1.0066377499433425) _gate_q_0;
}
gate xx_plus_yy_5105501296(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.9828237624259137) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.571889384487444) _gate_q_1;
  ry(-2.571889384487444) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.9828237624259137) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_minus_yy_5105511040(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.2043116783755545) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9165511094668903) _gate_q_0;
  ry(-0.9165511094668903) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.2043116783755545) _gate_q_1;
}
gate r_5105514112(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.3789451518380056, 4.208838393286905, -4.208838393286905) _gate_q_0;
}
gate xx_plus_yy_5105510992(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6274081041921996) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3270765674318095) _gate_q_1;
  ry(-2.3270765674318095) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6274081041921996) _gate_q_0;
}
gate xx_minus_yy_5105501584(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.8015264215104247) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8343016039877845) _gate_q_0;
  ry(-0.8343016039877845) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.8015264215104247) _gate_q_1;
}
gate xx_minus_yy_5105513824(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.441004705776472) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9716908072736925) _gate_q_0;
  ry(-2.9716908072736925) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.441004705776472) _gate_q_1;
}
gate r_5105515216(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.707507093141374, -1.0075195219548663, 1.0075195219548663) _gate_q_0;
}
gate r_5105512960(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.4549780748885446, 0.7164765492167118, -0.7164765492167118) _gate_q_0;
}
gate rzx_5105505184(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.272354770609325) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
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
gate ryy_5105500384(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2941522201436055) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5105509792(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.698902275949347) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5105501680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.8099973722173144) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8039706155733446) _gate_q_0;
  ry(-0.8039706155733446) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.8099973722173144) _gate_q_1;
}
gate r_5105510272(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.927819788831811, -0.6717933866254858, 0.6717933866254858) _gate_q_0;
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
gate xx_plus_yy_5105509216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.6095959300557516) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.1302876916749365) _gate_q_1;
  ry(-2.1302876916749365) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.6095959300557516) _gate_q_0;
}
gate rzz_5105500672(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.9816063303092233) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5105510896(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4428686983170813) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5105500480(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6312582146390213) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5925653914843814) _gate_q_1;
  ry(-2.5925653914843814) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6312582146390213) _gate_q_0;
}
gate rxx_5105511808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7113204933424684) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5105506528(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.6002113343020508) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  cz _gate_q_8, _gate_q_6;
  h _gate_q_13;
  y _gate_q_0;
  csdg _gate_q_7, _gate_q_14;
  s _gate_q_9;
  xx_minus_yy_5105507200(2.3672314144901185, 4.953651521507318) _gate_q_5, _gate_q_10;
  ch _gate_q_15, _gate_q_2;
  xx_minus_yy_5105503168(3.830894448917916, 5.240594703662122) _gate_q_11, _gate_q_4;
  cs _gate_q_17, _gate_q_1;
  cu1_5105511088(2.9825235695753767) _gate_q_3, _gate_q_16;
  id _gate_q_12;
  y _gate_q_3;
  ryy_5105509744(5.915609637447685) _gate_q_7, _gate_q_5;
  r_5105502304(4.152544259055083, 2.577434076738239) _gate_q_10;
  xx_plus_yy_5105501296(5.143778768974888, 2.9828237624259137) _gate_q_14, _gate_q_1;
  dcx _gate_q_0, _gate_q_15;
  id _gate_q_2;
  p(4.150592172830991) _gate_q_13;
  swap _gate_q_4, _gate_q_17;
  y _gate_q_9;
  xx_minus_yy_5105511040(1.8331022189337807, 4.2043116783755545) _gate_q_6, _gate_q_11;
  r_5105514112(2.3789451518380056, 5.779634720081802) _gate_q_16;
  xx_plus_yy_5105510992(4.654153134863619, 0.6274081041921996) _gate_q_12, _gate_q_8;
  tdg _gate_q_17;
  ry(0.06801264228530365) _gate_q_16;
  xx_minus_yy_5105501584(1.668603207975569, 3.8015264215104247) _gate_q_3, _gate_q_9;
  cs _gate_q_11, _gate_q_6;
  cs _gate_q_4, _gate_q_10;
  rx(2.6889442822152687) _gate_q_13;
  xx_minus_yy_5105513824(5.943381614547385, 4.441004705776472) _gate_q_0, _gate_q_5;
  U(0.1766142443900817, 4.387791858139695, 0.5355976688687298) _gate_q_8;
  sxdg _gate_q_15;
  r_5105515216(4.707507093141374, 0.5632768048400304) _gate_q_1;
  rx(1.126574096713617) _gate_q_7;
  cz _gate_q_14, _gate_q_2;
  sxdg _gate_q_12;
  u3(2.3091898278384253, 0.3450403392066987, 6.224884350693178) _gate_q_17;
  r_5105512960(1.4549780748885446, 2.2872728760116083) _gate_q_16;
  x _gate_q_0;
  u2(5.097055498092734, 4.581630625388831) _gate_q_6;
  ch _gate_q_8, _gate_q_9;
  rz(2.1047057817762083) _gate_q_15;
  csdg _gate_q_12, _gate_q_14;
  y _gate_q_10;
  rzx_5105505184(4.272354770609325) _gate_q_13, _gate_q_5;
  sxdg _gate_q_7;
  csdg _gate_q_11, _gate_q_4;
  u2(5.152837411217157, 2.3772223315336403) _gate_q_2;
  sdg _gate_q_3;
  u2(3.5975456246906936, 0.5761914321263845) _gate_q_1;
  sxdg _gate_q_12;
  iswap _gate_q_17, _gate_q_5;
  ry(2.976180330200427) _gate_q_15;
  cu(2.791215129983027, 3.241328429346478, 4.867766584701876, 2.043668019086196) _gate_q_10, _gate_q_0;
  cy _gate_q_6, _gate_q_4;
  h _gate_q_14;
  ecr _gate_q_1, _gate_q_11;
  ryy_5105500384(3.2941522201436055) _gate_q_9, _gate_q_13;
  s _gate_q_7;
  sdg _gate_q_8;
  u2(3.6023418323135803, 0.5261743565636464) _gate_q_3;
  rxx_5105509792(4.698902275949347) _gate_q_16, _gate_q_2;
  sxdg _gate_q_5;
  s _gate_q_10;
  u1(2.5824970085453103) _gate_q_12;
  cp(0.8586944567896986) _gate_q_9, _gate_q_14;
  swap _gate_q_13, _gate_q_16;
  t _gate_q_1;
  cz _gate_q_3, _gate_q_2;
  ch _gate_q_7, _gate_q_0;
  cry(5.648831466639394) _gate_q_17, _gate_q_8;
  xx_minus_yy_5105501680(1.6079412311466892, 2.8099973722173144) _gate_q_11, _gate_q_6;
  sx _gate_q_15;
  t _gate_q_4;
  sdg _gate_q_14;
  r_5105510272(5.927819788831811, 0.8990029401694107) _gate_q_5;
  cu(0.6765624164029753, 0.05858887548658661, 5.630619694204283, 3.2926644929548723) _gate_q_9, _gate_q_0;
  csx _gate_q_17, _gate_q_7;
  ecr _gate_q_13, _gate_q_3;
  t _gate_q_8;
  cry(4.644074544463722) _gate_q_11, _gate_q_10;
  tdg _gate_q_6;
  sdg _gate_q_15;
  cy _gate_q_2, _gate_q_4;
  ch _gate_q_12, _gate_q_16;
  p(1.5662499456029753) _gate_q_1;
  xx_plus_yy_5105509216(4.260575383349873, 1.6095959300557516) _gate_q_16, _gate_q_15;
  csdg _gate_q_6, _gate_q_8;
  id _gate_q_5;
  crz(1.5974887779994695) _gate_q_3, _gate_q_14;
  rzz_5105500672(2.9816063303092233) _gate_q_13, _gate_q_11;
  rxx_5105510896(3.4428686983170813) _gate_q_10, _gate_q_4;
  xx_plus_yy_5105500480(5.185130782968763, 0.6312582146390213) _gate_q_17, _gate_q_7;
  z _gate_q_1;
  cz _gate_q_12, _gate_q_9;
  rxx_5105511808(3.7113204933424684) _gate_q_2, _gate_q_0;
  U(5.650118200912679, 1.6949239622671228, 4.24993619013072) _gate_q_2;
  t _gate_q_15;
  p(2.071795247245668) _gate_q_9;
  rz(5.693882739972337) _gate_q_4;
  tdg _gate_q_1;
  u1(0.6851731868980768) _gate_q_3;
  swap _gate_q_8, _gate_q_6;
  p(1.7597207012246647) _gate_q_12;
  swap _gate_q_0, _gate_q_5;
  crz(1.8895446992995069) _gate_q_16, _gate_q_10;
  cx _gate_q_11, _gate_q_17;
  crz(3.190014097277005) _gate_q_13, _gate_q_7;
  tdg _gate_q_14;
  U(2.284741242422026, 0.47610912978895936, 5.694463638268934) _gate_q_11;
  h _gate_q_10;
  cp(6.207560417113132) _gate_q_0, _gate_q_8;
  sdg _gate_q_7;
  iswap _gate_q_1, _gate_q_5;
  rzz_5105506528(3.6002113343020508) _gate_q_15, _gate_q_16;
  iswap _gate_q_2, _gate_q_6;
  iswap _gate_q_4, _gate_q_3;
  U(5.776900879728599, 1.5481923265311357, 1.0641487064505903) _gate_q_14;
  s _gate_q_9;
  p(1.945067408057489) _gate_q_13;
  ecr _gate_q_17, _gate_q_12;
}
gate cu3_5103920880(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.2673279421194346) _gate_q_0;
  u1(-0.2461580996467607) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5656947856349754, 0, -0.2673279421194346) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5656947856349754, 0.5134860417661953, 0) _gate_q_1;
}
gate xx_plus_yy_5103922752(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.3190260561932447) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.2124671801295746) _gate_q_1;
  ry(-2.2124671801295746) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.3190260561932447) _gate_q_0;
}
gate xx_plus_yy_5103926640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.5581760901826467) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.11223716436244) _gate_q_1;
  ry(-3.11223716436244) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.5581760901826467) _gate_q_0;
}
gate ryy_5103922848(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0387850363709576) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5103926496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.602427223760931) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5103926928(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.027888332773147) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5103924576(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.247576942757207) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5103925344(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4051376427002937) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4051376427002937) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4051376427002937) _gate_q_1;
}
gate r_5103924384(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1866385871547076, 1.0380421557230681, -1.0380421557230681) _gate_q_0;
}
gate rzz_5103925536(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.9593039278002284) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5103923472(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.1140267032079665) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5103926064(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.3022998813476607, 1.678304106038524, -1.678304106038524) _gate_q_0;
}
gate xx_plus_yy_5103927120(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.020117783740191) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.2840466419544074) _gate_q_1;
  ry(-2.2840466419544074) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.020117783740191) _gate_q_0;
}
gate r_5103925200(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.8553009315119717, 0.9392848289659752, -0.9392848289659752) _gate_q_0;
}
gate xx_plus_yy_5103923616(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6625439555861666) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9760115314623764) _gate_q_1;
  ry(-0.9760115314623764) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6625439555861666) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  rz(4.109376640139055) _gate_q_12;
  u2(0.7015905586827348, 0.7159180876378373) _gate_q_11;
  rx(5.443605693809982) _gate_q_16;
  U(2.7196502061957903, 5.541725047245371, 4.588402041250903) _gate_q_13;
  iswap _gate_q_6, _gate_q_5;
  cp(0.7746487028052983) _gate_q_15, _gate_q_7;
  cu3_5103920880(3.131389571269951, 0.5134860417661953, 0.0211698424726739) _gate_q_14, _gate_q_3;
  cz _gate_q_8, _gate_q_9;
  ry(6.214716278876471) _gate_q_0;
  ecr _gate_q_4, _gate_q_2;
  ecr _gate_q_10, _gate_q_1;
  rx(4.365221241982043) _gate_q_17;
  ch _gate_q_8, _gate_q_4;
  cs _gate_q_17, _gate_q_3;
  cry(2.0571609217323634) _gate_q_16, _gate_q_1;
  rz(2.0623204547491474) _gate_q_12;
  sdg _gate_q_0;
  csdg _gate_q_6, _gate_q_5;
  U(4.742947169133513, 0.33399022155721425, 1.3883461724266406) _gate_q_2;
  xx_plus_yy_5103922752(4.424934360259149, 0.3190260561932447) _gate_q_7, _gate_q_15;
  y _gate_q_10;
  xx_plus_yy_5103926640(6.22447432872488, 2.5581760901826467) _gate_q_9, _gate_q_14;
  cu(5.53753925528397, 1.9225145811598754, 3.819179431952885, 2.588976781917176) _gate_q_13, _gate_q_11;
  tdg _gate_q_3;
  ryy_5103922848(2.0387850363709576) _gate_q_11, _gate_q_15;
  cs _gate_q_4, _gate_q_0;
  ch _gate_q_16, _gate_q_12;
  U(4.54926766025164, 4.7317021892328, 0.6292436840331636) _gate_q_6;
  cs _gate_q_10, _gate_q_17;
  rz(2.9626887882333235) _gate_q_1;
  sx _gate_q_14;
  rxx_5103926496(5.602427223760931) _gate_q_8, _gate_q_7;
  U(5.816806456131762, 5.5985767963074755, 0.4318753449548644) _gate_q_5;
  sdg _gate_q_13;
  csx _gate_q_2, _gate_q_9;
  csdg _gate_q_0, _gate_q_4;
  rzx_5103926928(3.027888332773147) _gate_q_10, _gate_q_1;
  crx(5.203430701346389) _gate_q_14, _gate_q_12;
  u1(2.0262885805969515) _gate_q_5;
  crx(4.864263055138601) _gate_q_8, _gate_q_16;
  ry(1.3318197581894613) _gate_q_9;
  sdg _gate_q_2;
  rx(3.4517507075893588) _gate_q_11;
  cry(4.92424781409337) _gate_q_7, _gate_q_6;
  t _gate_q_13;
  z _gate_q_17;
  tdg _gate_q_3;
  ry(5.712410207215257) _gate_q_15;
  ryy_5103924576(6.247576942757207) _gate_q_14, _gate_q_8;
  sx _gate_q_15;
  x _gate_q_10;
  id _gate_q_3;
  x _gate_q_0;
  t _gate_q_4;
  cu1_5103925344(2.8102752854005875) _gate_q_11, _gate_q_2;
  ch _gate_q_12, _gate_q_16;
  s _gate_q_9;
  cry(0.9049618211826018) _gate_q_7, _gate_q_17;
  swap _gate_q_5, _gate_q_13;
  cx _gate_q_1, _gate_q_6;
  crz(4.254628771552559) _gate_q_7, _gate_q_15;
  cp(0.7364151655142063) _gate_q_11, _gate_q_8;
  h _gate_q_12;
  u3(2.590581292953257, 6.227896021485082, 5.580469075566922) _gate_q_17;
  t _gate_q_10;
  r_5103924384(1.1866385871547076, 2.6088384825179647) _gate_q_14;
  sdg _gate_q_4;
  u3(4.547310355748967, 1.697024213054078, 3.3683084656028597) _gate_q_0;
  rz(1.4806149562460449) _gate_q_5;
  swap _gate_q_9, _gate_q_3;
  id _gate_q_6;
  h _gate_q_16;
  ch _gate_q_13, _gate_q_2;
  u1(4.447700819996393) _gate_q_1;
  z _gate_q_3;
  U(4.404544588964204, 3.6335766275326034, 0.04425684532630952) _gate_q_15;
  cu(0.24443535652392945, 0.06275460839910364, 6.204624516624213, 5.790027562442298) _gate_q_7, _gate_q_8;
  u2(1.8825999809166176, 2.453056244022153) _gate_q_16;
  z _gate_q_0;
  tdg _gate_q_12;
  u3(5.12389960015923, 1.1600770749907798, 5.22680166224045) _gate_q_6;
  ry(3.373522133467232) _gate_q_13;
  cx _gate_q_4, _gate_q_9;
  rzz_5103925536(1.9593039278002284) _gate_q_14, _gate_q_2;
  U(1.7750359680259347, 5.072552561856691, 6.00247503699773) _gate_q_11;
  swap _gate_q_10, _gate_q_1;
  sxdg _gate_q_5;
  h _gate_q_17;
  crx(0.15825778812909683) _gate_q_0, _gate_q_5;
  sxdg _gate_q_6;
  crx(4.0706404228097215) _gate_q_1, _gate_q_10;
  cz _gate_q_8, _gate_q_11;
  cu(2.974206768778643, 0.7347774439317464, 5.97457545637708, 3.20707854352214) _gate_q_12, _gate_q_2;
  cu(3.7244780373543773, 0.35758220514935013, 0.9274377554689583, 2.876609565637266) _gate_q_16, _gate_q_17;
  id _gate_q_7;
  cx _gate_q_4, _gate_q_9;
  rzz_5103923472(6.1140267032079665) _gate_q_15, _gate_q_13;
  x _gate_q_14;
  sxdg _gate_q_3;
  csdg _gate_q_9, _gate_q_13;
  cs _gate_q_7, _gate_q_1;
  rx(4.211788662969954) _gate_q_8;
  cy _gate_q_0, _gate_q_2;
  x _gate_q_4;
  cy _gate_q_14, _gate_q_17;
  cy _gate_q_15, _gate_q_3;
  x _gate_q_11;
  h _gate_q_12;
  rx(2.8644522559425862) _gate_q_5;
  ecr _gate_q_16, _gate_q_6;
  r_5103926064(1.3022998813476607, 3.2491004328334205) _gate_q_10;
  xx_plus_yy_5103927120(4.568093283908815, 3.020117783740191) _gate_q_0, _gate_q_15;
  swap _gate_q_11, _gate_q_14;
  cx _gate_q_17, _gate_q_5;
  r_5103925200(2.8553009315119717, 2.5100811557608718) _gate_q_3;
  tdg _gate_q_16;
  csdg _gate_q_7, _gate_q_13;
  xx_plus_yy_5103923616(1.9520230629247528, 0.6625439555861666) _gate_q_9, _gate_q_8;
  cs _gate_q_1, _gate_q_2;
  h _gate_q_12;
  cu(5.524181193787428, 2.729308854858128, 0.8850177388050104, 5.593353111528476) _gate_q_10, _gate_q_4;
  ry(0.4000766596693514) _gate_q_6;
}