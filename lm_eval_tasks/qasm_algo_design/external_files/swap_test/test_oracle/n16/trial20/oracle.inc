gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5074197424(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.590040095903077) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8851833803466356) _gate_q_1;
  ry(-2.8851833803466356) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.590040095903077) _gate_q_0;
}
gate xx_plus_yy_5074195744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.695652628444719) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4677877329942426) _gate_q_1;
  ry(-2.4677877329942426) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.695652628444719) _gate_q_0;
}
gate rzz_5074206208(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.93508705429348) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5074198672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.998063715131121) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_plus_yy_5074203088(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6246496255204621) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.506417956662527) _gate_q_1;
  ry(-2.506417956662527) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6246496255204621) _gate_q_0;
}
gate cu3_5074201600(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.035180869889399) _gate_q_0;
  u1(0.41497990611865654) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.6843387739689084, 0, -4.035180869889399) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.6843387739689084, 3.6202009637707424, 0) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5074199296(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.4936067295362285, 3.683272158465625, -3.683272158465625) _gate_q_0;
}
gate r_5074195120(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.16265404497653405, 0.25786033115784357, -0.25786033115784357) _gate_q_0;
}
gate ryy_5074205680(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2587544131098696) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rxx_5074973088(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.113724403006479) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5074968768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.4629425079080285) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.25391318039023386) _gate_q_0;
  ry(-0.25391318039023386) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.4629425079080285) _gate_q_1;
}
gate xx_minus_yy_5074964640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.694852544635031) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3813083176471186) _gate_q_0;
  ry(-1.3813083176471186) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.694852544635031) _gate_q_1;
}
gate r_5074961472(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.676737309922871, -1.3134809606306848, 1.3134809606306848) _gate_q_0;
}
gate xx_plus_yy_5074973184(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.913562139111104) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9195320348436096) _gate_q_1;
  ry(-0.9195320348436096) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.913562139111104) _gate_q_0;
}
gate r_5074961760(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.479067814023292, 4.473294934562457, -4.473294934562457) _gate_q_0;
}
gate cu1_5074975104(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.9676769304748722) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.9676769304748722) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.9676769304748722) _gate_q_1;
}
gate r_5074971120(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.7948814291968835, -1.4385687604979247, 1.4385687604979247) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate r_5074428048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.213521285111512, 3.655064369390989, -3.655064369390989) _gate_q_0;
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
gate rxx_5074427328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.13909712494035) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072109744(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1392058020199907, -0.021594516846807466, 0.021594516846807466) _gate_q_0;
}
gate xx_minus_yy_5072120256(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.2749213631557383) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6739434873809236) _gate_q_0;
  ry(-2.6739434873809236) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.2749213631557383) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  u2(4.510912977839104, 2.3951277397649866) _gate_q_10;
  u3(5.385829889024202, 4.316538387580194, 3.7806244388823886) _gate_q_3;
  xx_plus_yy_5074197424(5.770366760693271, 3.590040095903077) _gate_q_5, _gate_q_14;
  xx_plus_yy_5074195744(4.935575465988485, 4.695652628444719) _gate_q_15, _gate_q_0;
  x _gate_q_2;
  rzz_5074206208(3.93508705429348) _gate_q_4, _gate_q_13;
  rzx_5074198672(4.998063715131121) _gate_q_11, _gate_q_9;
  U(5.311580184079361, 3.091777065010783, 4.431142374403243) _gate_q_12;
  csdg _gate_q_7, _gate_q_6;
  xx_plus_yy_5074203088(5.012835913325054, 0.6246496255204621) _gate_q_8, _gate_q_1;
  cu3_5074201600(5.368677547937817, 3.6202009637707424, 4.4501607760080555) _gate_q_7, _gate_q_1;
  cs _gate_q_13, _gate_q_0;
  y _gate_q_15;
  y _gate_q_11;
  s _gate_q_3;
  sx _gate_q_5;
  r_5074199296(4.4936067295362285, 5.254068485260522) _gate_q_9;
  sx _gate_q_2;
  tdg _gate_q_8;
  r_5074195120(0.16265404497653405, 1.8286566579527401) _gate_q_6;
  h _gate_q_14;
  ryy_5074205680(3.2587544131098696) _gate_q_10, _gate_q_4;
  s _gate_q_12;
  cp(0.5363782008045147) _gate_q_8, _gate_q_12;
  s _gate_q_3;
  iswap _gate_q_6, _gate_q_13;
  x _gate_q_2;
  rxx_5074973088(3.113724403006479) _gate_q_1, _gate_q_11;
  xx_minus_yy_5074968768(0.5078263607804677, 5.4629425079080285) _gate_q_0, _gate_q_10;
  rx(6.129856000093043) _gate_q_5;
  xx_minus_yy_5074964640(2.762616635294237, 4.694852544635031) _gate_q_9, _gate_q_7;
  cz _gate_q_15, _gate_q_14;
  u2(5.332966486361876, 2.6620325357003978) _gate_q_4;
  sx _gate_q_15;
  sdg _gate_q_5;
  r_5074961472(4.676737309922871, 0.25731536616421175) _gate_q_10;
  id _gate_q_9;
  xx_plus_yy_5074973184(1.8390640696872191, 5.913562139111104) _gate_q_3, _gate_q_7;
  swap _gate_q_4, _gate_q_8;
  crx(0.21207383502765492) _gate_q_11, _gate_q_12;
  cz _gate_q_0, _gate_q_13;
  s _gate_q_1;
  s _gate_q_2;
  tdg _gate_q_14;
  sdg _gate_q_6;
  ry(1.0846960012826585) _gate_q_12;
  ch _gate_q_11, _gate_q_14;
  crx(4.3795179710076235) _gate_q_7, _gate_q_10;
  cp(4.317177810120559) _gate_q_9, _gate_q_0;
  iswap _gate_q_6, _gate_q_4;
  y _gate_q_5;
  h _gate_q_15;
  z _gate_q_1;
  sxdg _gate_q_3;
  r_5074961760(1.479067814023292, 6.044091261357353) _gate_q_2;
  cu1_5074975104(5.9353538609497445) _gate_q_13, _gate_q_8;
  swap _gate_q_9, _gate_q_2;
  csdg _gate_q_10, _gate_q_14;
  r_5074971120(1.7948814291968835, 0.13222756629697188) _gate_q_13;
  crx(3.5557050494434357) _gate_q_3, _gate_q_7;
  id _gate_q_1;
  u3(6.01656320732748, 4.2458848460244125, 2.825825632376733) _gate_q_6;
  x _gate_q_0;
  rx(3.780109043814585) _gate_q_5;
  cy _gate_q_8, _gate_q_12;
  cy _gate_q_4, _gate_q_11;
  s _gate_q_15;
  rz(1.392365196434478) _gate_q_5;
  y _gate_q_4;
  cu(5.090995377429546, 3.154496300684184, 3.845393627750934, 0.22707930768921958) _gate_q_8, _gate_q_12;
  ch _gate_q_11, _gate_q_7;
  sxdg _gate_q_10;
  cy _gate_q_15, _gate_q_14;
  t _gate_q_6;
  rx(2.083924002233413) _gate_q_13;
  swap _gate_q_2, _gate_q_1;
  z _gate_q_3;
  dcx _gate_q_0, _gate_q_9;
  sx _gate_q_8;
  ry(2.1604796834426754) _gate_q_13;
  ecr _gate_q_5, _gate_q_6;
  cp(4.882598327737694) _gate_q_7, _gate_q_14;
  cy _gate_q_2, _gate_q_9;
  dcx _gate_q_3, _gate_q_4;
  h _gate_q_1;
  t _gate_q_11;
  p(5.765957883823665) _gate_q_15;
  crz(2.1584564878942123) _gate_q_0, _gate_q_10;
  rx(2.008189926430828) _gate_q_12;
  t _gate_q_13;
  r_5074428048(5.213521285111512, 5.225860696185886) _gate_q_10;
  u2(4.079002102950974, 4.21396721062748) _gate_q_2;
  cu(3.97503682092934, 3.2495661027186316, 3.8315326950232147, 1.015485825990359) _gate_q_7, _gate_q_6;
  csx _gate_q_3, _gate_q_11;
  sxdg _gate_q_5;
  cp(3.809739090488093) _gate_q_15, _gate_q_1;
  u3(3.86320192494316, 2.3013521120223817, 6.263495074463025) _gate_q_14;
  h _gate_q_8;
  rz(2.190223128879213) _gate_q_9;
  u2(3.617671971337864, 1.2831230169769614) _gate_q_12;
  rxx_5074427328(6.13909712494035) _gate_q_4, _gate_q_0;
  iswap _gate_q_3, _gate_q_12;
  csx _gate_q_14, _gate_q_13;
  cry(5.0133343583010435) _gate_q_5, _gate_q_9;
  ry(6.014391295696268) _gate_q_1;
  swap _gate_q_8, _gate_q_7;
  r_5072109744(1.1392058020199907, 1.549201809948089) _gate_q_4;
  xx_minus_yy_5072120256(5.347886974761847, 2.2749213631557383) _gate_q_11, _gate_q_2;
  U(2.222702943405238, 2.049550544455185, 6.1100729960243605) _gate_q_15;
  t _gate_q_6;
  cu(0.17301167857639402, 5.725127053093129, 3.411650810712698, 2.336170546162089) _gate_q_0, _gate_q_10;
}
gate rxx_5072118672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9276176535057212) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5072113488(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.1258256415555232) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.1258256415555232) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.1258256415555232) _gate_q_1;
}
gate cu3_5072120736(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.9328086543574923) _gate_q_0;
  u1(1.1037064209150407) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.338320118463362, 0, -3.9328086543574923) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.338320118463362, 2.8291022334424514, 0) _gate_q_1;
}
gate rzz_5072116176(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.979142775165071) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5072120544(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.9250862857949675) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5072121024(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6877842816497415) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6877842816497415) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6877842816497415) _gate_q_1;
}
gate cu3_5072122944(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.9457846597682105) _gate_q_0;
  u1(0.03566972690208026) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7531336230738954, 0, -2.9457846597682105) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7531336230738954, 2.91011493286613, 0) _gate_q_1;
}
gate rxx_5072123952(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2040276366593194) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5072125200(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.240972408561143) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5072117376(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.6009425440777827) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3533381576429244) _gate_q_1;
  ry(-1.3533381576429244) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.6009425440777827) _gate_q_0;
}
gate xx_minus_yy_5072124240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.815520641473931) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.82967043655902) _gate_q_0;
  ry(-2.82967043655902) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.815520641473931) _gate_q_1;
}
gate rxx_5072117712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8381957907975808) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072120208(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.853168022800312) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5072116560(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.299282141971544) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5072117280(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0659889235085753) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072125680(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.258804377650295) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  tdg _gate_q_4;
  sx _gate_q_12;
  x _gate_q_0;
  t _gate_q_8;
  cry(2.2933122917748507) _gate_q_15, _gate_q_2;
  ecr _gate_q_11, _gate_q_1;
  z _gate_q_13;
  y _gate_q_6;
  cs _gate_q_10, _gate_q_14;
  t _gate_q_7;
  sxdg _gate_q_9;
  rxx_5072118672(0.9276176535057212) _gate_q_5, _gate_q_3;
  cu1_5072113488(4.2516512831110465) _gate_q_15, _gate_q_3;
  t _gate_q_5;
  x _gate_q_11;
  s _gate_q_1;
  cu3_5072120736(2.676640236926724, 2.8291022334424514, 5.036515075272533) _gate_q_2, _gate_q_9;
  rzz_5072116176(3.979142775165071) _gate_q_13, _gate_q_4;
  rzz_5072120544(2.9250862857949675) _gate_q_10, _gate_q_12;
  z _gate_q_7;
  rz(2.5547546560297376) _gate_q_6;
  crz(2.049723022015857) _gate_q_14, _gate_q_0;
  p(3.574023631673199) _gate_q_8;
  cp(1.3000753685447957) _gate_q_13, _gate_q_5;
  u2(2.178956558561053, 4.0163742150601625) _gate_q_1;
  s _gate_q_8;
  cy _gate_q_0, _gate_q_4;
  ecr _gate_q_14, _gate_q_10;
  id _gate_q_15;
  x _gate_q_11;
  ecr _gate_q_6, _gate_q_12;
  crx(2.5657456415702113) _gate_q_7, _gate_q_2;
  cu1_5072121024(3.375568563299483) _gate_q_9, _gate_q_3;
  crz(2.574604867573583) _gate_q_4, _gate_q_8;
  cz _gate_q_3, _gate_q_0;
  crz(3.170885736799842) _gate_q_11, _gate_q_2;
  h _gate_q_12;
  cs _gate_q_1, _gate_q_10;
  cx _gate_q_13, _gate_q_9;
  sdg _gate_q_6;
  ch _gate_q_14, _gate_q_7;
  cu(1.224324641689672, 4.885993198654441, 2.104077989903878, 3.141761953787802) _gate_q_5, _gate_q_15;
  sxdg _gate_q_12;
  crz(2.7277719330434445) _gate_q_1, _gate_q_15;
  iswap _gate_q_6, _gate_q_5;
  cry(0.5388468550355423) _gate_q_11, _gate_q_10;
  cz _gate_q_13, _gate_q_7;
  x _gate_q_14;
  rz(5.817039639877014) _gate_q_8;
  dcx _gate_q_4, _gate_q_9;
  crx(2.6236565728649244) _gate_q_0, _gate_q_3;
  s _gate_q_2;
  rx(5.277954983665327) _gate_q_0;
  sdg _gate_q_2;
  cu3_5072122944(3.506267246147791, 2.91011493286613, 2.9814543866702907) _gate_q_9, _gate_q_1;
  rxx_5072123952(2.2040276366593194) _gate_q_11, _gate_q_14;
  z _gate_q_6;
  rzz_5072125200(6.240972408561143) _gate_q_15, _gate_q_7;
  ry(2.3769369881953324) _gate_q_13;
  xx_plus_yy_5072117376(2.706676315285849, 2.6009425440777827) _gate_q_4, _gate_q_3;
  csx _gate_q_10, _gate_q_8;
  crz(6.187954521952915) _gate_q_5, _gate_q_12;
  u3(2.2215392180160074, 3.445657106818845, 3.293281456265468) _gate_q_10;
  z _gate_q_3;
  sx _gate_q_15;
  id _gate_q_12;
  u2(5.9039982132077435, 5.866162032286466) _gate_q_14;
  cs _gate_q_2, _gate_q_6;
  xx_minus_yy_5072124240(5.65934087311804, 5.815520641473931) _gate_q_1, _gate_q_0;
  ry(4.071246156953473) _gate_q_9;
  p(0.037046073187009435) _gate_q_7;
  rxx_5072117712(1.8381957907975808) _gate_q_11, _gate_q_4;
  cs _gate_q_13, _gate_q_5;
  U(3.713204934495374, 1.5255762103417478, 2.891463627125778) _gate_q_8;
  x _gate_q_7;
  cp(4.579841024215174) _gate_q_3, _gate_q_6;
  csx _gate_q_2, _gate_q_13;
  sx _gate_q_8;
  crz(5.977705592956468) _gate_q_15, _gate_q_0;
  rzx_5072120208(1.853168022800312) _gate_q_9, _gate_q_4;
  crz(0.5577930753905139) _gate_q_11, _gate_q_12;
  swap _gate_q_14, _gate_q_5;
  u1(0.5956127021494716) _gate_q_10;
  u2(0.0006057978528874952, 0.016397273721255465) _gate_q_1;
  csdg _gate_q_4, _gate_q_8;
  cs _gate_q_11, _gate_q_3;
  cx _gate_q_9, _gate_q_1;
  h _gate_q_5;
  t _gate_q_2;
  u1(3.5582639673735077) _gate_q_7;
  cu(0.5608236479507562, 3.9643602788564545, 5.774020734289627, 0.02559264610394158) _gate_q_13, _gate_q_10;
  crx(0.7746673030350935) _gate_q_0, _gate_q_15;
  rzx_5072116560(5.299282141971544) _gate_q_14, _gate_q_12;
  x _gate_q_6;
  cu(5.285620845904972, 1.2699534879952534, 3.8384328923926208, 4.722011147627072) _gate_q_13, _gate_q_14;
  z _gate_q_7;
  y _gate_q_6;
  cu(4.821019737216787, 4.208470727647402, 2.0264923707979334, 3.860975482755259) _gate_q_2, _gate_q_3;
  rxx_5072117280(2.0659889235085753) _gate_q_4, _gate_q_9;
  cp(4.600143395358) _gate_q_8, _gate_q_12;
  crz(0.9261479526289665) _gate_q_1, _gate_q_15;
  swap _gate_q_0, _gate_q_10;
  rzx_5072125680(6.258804377650295) _gate_q_5, _gate_q_11;
}