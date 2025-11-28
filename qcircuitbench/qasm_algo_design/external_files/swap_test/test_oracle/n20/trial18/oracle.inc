gate cu1_5084958592(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8735655836483713) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8735655836483713) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8735655836483713) _gate_q_1;
}
gate r_5084956672(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.9435947228202985, 2.6834595381750805, -2.6834595381750805) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzx_5084958112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.176569229646562) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5084957200(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.659184308394604) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.659184308394604) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.659184308394604) _gate_q_1;
}
gate ryy_5084955376(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.904999884621837) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5084956576(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.360026092116849) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate r_5084955424(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.970147692832268, 2.0098608539623912, -2.0098608539623912) _gate_q_0;
}
gate cu3_5084962672(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.3686319900062283) _gate_q_0;
  u1(-0.22820406152031514) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7776734799659246, 0, -1.3686319900062283) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7776734799659246, 1.5968360515265434, 0) _gate_q_1;
}
gate cu3_5084958928(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.591669419749877) _gate_q_0;
  u1(1.636199856068366) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.2059542295146175, 0, -2.591669419749877) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.2059542295146175, 0.9554695636815114, 0) _gate_q_1;
}
gate rzx_5084959360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.408646896166986) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5072466480(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.7048356109476321) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.7048356109476321) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.7048356109476321) _gate_q_1;
}
gate rxx_5072465760(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1850356076005313) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072460288(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.245478951683469, -0.7646681150494177, 0.7646681150494177) _gate_q_0;
}
gate cu3_5072456016(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.177265429194823) _gate_q_0;
  u1(0.516893801762305) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.472465037133691, 0, -5.177265429194823) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.472465037133691, 4.660371627432518, 0) _gate_q_1;
}
gate xx_plus_yy_5072453760(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.890490478089575) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5613116927057875) _gate_q_1;
  ry(-1.5613116927057875) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.890490478089575) _gate_q_0;
}
gate xx_minus_yy_5072459136(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.3196019302706439) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.1599687504679386) _gate_q_0;
  ry(-0.1599687504679386) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.3196019302706439) _gate_q_1;
}
gate ryy_5072460912(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.536295272804579) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072459232(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8010890911680133) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5072457504(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7052374958637214) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5072460336(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.652397171103619) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5072461056(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7009521864864015) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5072455440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.589033097838941) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072457600(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6213891297578544) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072456400(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.561345098186776) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5072459856(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.643627684732969) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  cu1_5084958592(1.7471311672967427) _gate_q_4, _gate_q_2;
  r_5084956672(0.9435947228202985, 4.254255864969977) _gate_q_5;
  h _gate_q_3;
  cx _gate_q_7, _gate_q_14;
  ch _gate_q_0, _gate_q_15;
  id _gate_q_9;
  z _gate_q_11;
  rx(5.39537693739678) _gate_q_10;
  s _gate_q_6;
  t _gate_q_13;
  iswap _gate_q_16, _gate_q_18;
  tdg _gate_q_17;
  sx _gate_q_12;
  rzx_5084958112(1.176569229646562) _gate_q_1, _gate_q_19;
  tdg _gate_q_8;
  sdg _gate_q_13;
  crz(3.7304977992424413) _gate_q_4, _gate_q_17;
  x _gate_q_19;
  cz _gate_q_1, _gate_q_12;
  cu(0.24900925242742467, 5.988928771846386, 5.886646495772397, 4.0083411710204935) _gate_q_9, _gate_q_15;
  cu1_5084957200(3.318368616789208) _gate_q_0, _gate_q_18;
  iswap _gate_q_10, _gate_q_2;
  ryy_5084955376(0.904999884621837) _gate_q_5, _gate_q_6;
  id _gate_q_16;
  t _gate_q_8;
  ecr _gate_q_3, _gate_q_7;
  u3(4.205563791655838, 1.3421947698536227, 4.097589205617196) _gate_q_14;
  u2(4.553743608904286, 0.08299136584868988) _gate_q_11;
  sxdg _gate_q_7;
  id _gate_q_18;
  csdg _gate_q_17, _gate_q_1;
  u1(1.30957586885791) _gate_q_4;
  x _gate_q_12;
  cx _gate_q_16, _gate_q_10;
  rzz_5084956576(4.360026092116849) _gate_q_11, _gate_q_2;
  U(0.5722667184918334, 2.9690052455920655, 1.3764822755837183) _gate_q_13;
  csx _gate_q_14, _gate_q_6;
  r_5084955424(3.970147692832268, 3.580657180757288) _gate_q_19;
  sxdg _gate_q_8;
  y _gate_q_3;
  csdg _gate_q_5, _gate_q_9;
  crx(0.945508732392012) _gate_q_0, _gate_q_15;
  cu3_5084962672(1.5553469599318492, 1.5968360515265434, 1.1404279284859131) _gate_q_14, _gate_q_12;
  p(4.024318345224886) _gate_q_16;
  U(1.9137631808113782, 3.5951850735564554, 4.927411681306294) _gate_q_5;
  crz(1.5476325255164975) _gate_q_10, _gate_q_17;
  cx _gate_q_2, _gate_q_1;
  csx _gate_q_18, _gate_q_15;
  cu3_5084958928(0.411908459029235, 0.9554695636815114, 4.227869275818243) _gate_q_0, _gate_q_8;
  id _gate_q_11;
  h _gate_q_7;
  rzx_5084959360(4.408646896166986) _gate_q_3, _gate_q_13;
  cu1_5072466480(3.4096712218952643) _gate_q_4, _gate_q_9;
  z _gate_q_19;
  rz(1.1539533148695593) _gate_q_6;
  csx _gate_q_6, _gate_q_16;
  swap _gate_q_18, _gate_q_10;
  sdg _gate_q_3;
  id _gate_q_4;
  ecr _gate_q_1, _gate_q_0;
  rxx_5072465760(3.1850356076005313) _gate_q_19, _gate_q_14;
  x _gate_q_5;
  r_5072460288(5.245478951683469, 0.8061282117454789) _gate_q_7;
  y _gate_q_13;
  cu3_5072456016(2.944930074267382, 4.660371627432518, 5.694159230957128) _gate_q_17, _gate_q_2;
  iswap _gate_q_11, _gate_q_8;
  u3(2.5472182160164842, 4.793048095455035, 4.859281452847784) _gate_q_9;
  U(5.693207723705603, 4.932505003142574, 5.79728830016582) _gate_q_15;
  y _gate_q_12;
  xx_plus_yy_5072453760(3.122623385411575, 5.890490478089575) _gate_q_9, _gate_q_1;
  x _gate_q_4;
  p(2.439196445211227) _gate_q_3;
  rz(5.757413055551435) _gate_q_12;
  cz _gate_q_5, _gate_q_8;
  p(1.815820498613187) _gate_q_7;
  xx_minus_yy_5072459136(0.3199375009358772, 0.3196019302706439) _gate_q_10, _gate_q_11;
  ecr _gate_q_13, _gate_q_18;
  t _gate_q_14;
  u2(0.8907873129452971, 0.028562344020409355) _gate_q_2;
  iswap _gate_q_6, _gate_q_0;
  ry(4.123462435509768) _gate_q_17;
  U(5.100082045031857, 0.05090133760860228, 3.9268915434061133) _gate_q_19;
  s _gate_q_16;
  p(2.8590563981305364) _gate_q_15;
  csdg _gate_q_0, _gate_q_15;
  crz(5.799884047902019) _gate_q_14, _gate_q_8;
  cz _gate_q_7, _gate_q_18;
  ryy_5072460912(4.536295272804579) _gate_q_17, _gate_q_1;
  cz _gate_q_3, _gate_q_5;
  ryy_5072459232(3.8010890911680133) _gate_q_10, _gate_q_9;
  y _gate_q_19;
  cry(5.216792680108972) _gate_q_11, _gate_q_6;
  cz _gate_q_13, _gate_q_12;
  u3(1.5844780624971122, 2.1477642119085245, 5.759654426892543) _gate_q_2;
  iswap _gate_q_4, _gate_q_16;
  z _gate_q_13;
  cu(5.711772183078589, 6.2584797153275025, 4.419666033471247, 1.0333058246914824) _gate_q_19, _gate_q_2;
  rzx_5072457504(0.7052374958637214) _gate_q_18, _gate_q_16;
  sxdg _gate_q_0;
  cy _gate_q_15, _gate_q_8;
  sxdg _gate_q_12;
  ch _gate_q_4, _gate_q_7;
  cy _gate_q_17, _gate_q_5;
  ch _gate_q_11, _gate_q_10;
  csx _gate_q_6, _gate_q_14;
  sx _gate_q_9;
  crx(2.3037644207426036) _gate_q_1, _gate_q_3;
  ry(0.07590259964319632) _gate_q_12;
  cu(3.8964680410544656, 2.726190491359134, 4.213548944298873, 6.16655671503662) _gate_q_3, _gate_q_7;
  x _gate_q_8;
  u1(0.4975002120004523) _gate_q_17;
  ch _gate_q_1, _gate_q_13;
  cu(5.0023969136540964, 2.0345745439638394, 4.689448736481925, 3.3988821687285355) _gate_q_9, _gate_q_2;
  ryy_5072460336(3.652397171103619) _gate_q_14, _gate_q_11;
  swap _gate_q_16, _gate_q_10;
  rx(2.529326362674066) _gate_q_4;
  cry(5.172315571133236) _gate_q_19, _gate_q_5;
  u1(5.995327159566445) _gate_q_18;
  cs _gate_q_15, _gate_q_6;
  id _gate_q_0;
  sx _gate_q_13;
  rzx_5072461056(2.7009521864864015) _gate_q_7, _gate_q_11;
  p(3.2482729335371108) _gate_q_12;
  rxx_5072455440(5.589033097838941) _gate_q_4, _gate_q_10;
  swap _gate_q_17, _gate_q_6;
  rzx_5072457600(3.6213891297578544) _gate_q_14, _gate_q_2;
  ry(2.4180652989131133) _gate_q_8;
  rzz_5072456400(5.561345098186776) _gate_q_3, _gate_q_0;
  ry(4.5024016033543655) _gate_q_19;
  cx _gate_q_9, _gate_q_16;
  sxdg _gate_q_5;
  t _gate_q_1;
  rzz_5072459856(2.643627684732969) _gate_q_18, _gate_q_15;
}
gate xx_minus_yy_5072469696(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.3864237636496006) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.1781227236992553) _gate_q_0;
  ry(-2.1781227236992553) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.3864237636496006) _gate_q_1;
}
gate rzz_5072465856(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.9189597048362029) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5072467680(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.034849271534399) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.034849271534399) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.034849271534399) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5072457072(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.760489918078853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5072458656(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.1632196196716644) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.193328213703742) _gate_q_0;
  ry(-2.193328213703742) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.1632196196716644) _gate_q_1;
}
gate r_5072456880(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.533252525619749, 0.9984532036580087, -0.9984532036580087) _gate_q_0;
}
gate ryy_5072469504(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.014546960688591) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072457744(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.797760336278754) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5072453904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.70542153895649) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.62686321873148) _gate_q_0;
  ry(-2.62686321873148) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.70542153895649) _gate_q_1;
}
gate cu3_5072459328(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.364134976357752) _gate_q_0;
  u1(0.5183248852002245) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.1239612552105736, 0, -5.364134976357752) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.1239612552105736, 4.845810091157527, 0) _gate_q_1;
}
gate rzx_5072466192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4468986502792776) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072457120(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.674561731255382) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5072463600(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.095150021634573) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0345311103284884) _gate_q_0;
  ry(-1.0345311103284884) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.095150021634573) _gate_q_1;
}
gate xx_plus_yy_5072463504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.313649701583682) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6118312383533224) _gate_q_1;
  ry(-1.6118312383533224) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.313649701583682) _gate_q_0;
}
gate rzz_5072464800(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.287749697279663) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072462688(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.764844905346358, -0.49857613411740576, 0.49857613411740576) _gate_q_0;
}
gate cu3_5072455872(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2703816247303577) _gate_q_0;
  u1(-2.505916527733242) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9856981631967747, 0, -3.2703816247303577) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9856981631967747, 5.7762981524636, 0) _gate_q_1;
}
gate rxx_5072461008(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.122746707822912) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5072461872(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.5815226591611106) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5072458608(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.520591466351215) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072467392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2607567844602814) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072467248(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.7239493585283916, 0.7807743033385743, -0.7807743033385743) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  u3(2.5982203876864234, 1.7776791166675694, 5.5783541393653024) _gate_q_12;
  xx_minus_yy_5072469696(4.356245447398511, 2.3864237636496006) _gate_q_6, _gate_q_2;
  cz _gate_q_19, _gate_q_16;
  u3(0.5016048844186367, 3.3112064549416824, 4.379060041768394) _gate_q_15;
  ry(4.08656223406421) _gate_q_8;
  tdg _gate_q_7;
  z _gate_q_13;
  U(3.029745617324541, 2.790231041696572, 3.012212188637626) _gate_q_3;
  ry(4.036884355000234) _gate_q_17;
  crz(4.809356209069963) _gate_q_11, _gate_q_14;
  s _gate_q_9;
  u1(3.5654139096080413) _gate_q_10;
  u3(6.061090321976835, 5.2344002872265465, 3.0537153940636244) _gate_q_1;
  x _gate_q_5;
  u3(1.2490475967846408, 1.6351603398317958, 4.736872957825165) _gate_q_0;
  cp(5.013089814299787) _gate_q_4, _gate_q_18;
  u1(0.2165669341518265) _gate_q_15;
  rzz_5072465856(0.9189597048362029) _gate_q_13, _gate_q_1;
  cu1_5072467680(6.069698543068798) _gate_q_6, _gate_q_3;
  s _gate_q_11;
  swap _gate_q_17, _gate_q_14;
  u1(1.244165013514223) _gate_q_8;
  rz(5.539672533927446) _gate_q_4;
  ry(2.255636310633873) _gate_q_16;
  ecr _gate_q_12, _gate_q_10;
  dcx _gate_q_18, _gate_q_2;
  crz(2.0044487028839257) _gate_q_7, _gate_q_9;
  csx _gate_q_0, _gate_q_19;
  rx(6.137602955857813) _gate_q_5;
  rzz_5072457072(3.760489918078853) _gate_q_2, _gate_q_4;
  h _gate_q_5;
  cs _gate_q_17, _gate_q_6;
  sdg _gate_q_3;
  cp(0.6880887107154501) _gate_q_14, _gate_q_9;
  xx_minus_yy_5072458656(4.386656427407484, 3.1632196196716644) _gate_q_12, _gate_q_18;
  u3(1.32522495200715, 4.782977446985151, 1.9279546569259054) _gate_q_11;
  p(3.5845995620904) _gate_q_19;
  r_5072456880(4.533252525619749, 2.5692495304529053) _gate_q_16;
  ch _gate_q_0, _gate_q_7;
  swap _gate_q_10, _gate_q_1;
  csdg _gate_q_13, _gate_q_15;
  rz(1.9321050716571904) _gate_q_8;
  ry(5.906425366668672) _gate_q_15;
  ryy_5072469504(3.014546960688591) _gate_q_16, _gate_q_2;
  cx _gate_q_6, _gate_q_14;
  ryy_5072457744(3.797760336278754) _gate_q_5, _gate_q_4;
  id _gate_q_10;
  y _gate_q_7;
  xx_minus_yy_5072453904(5.25372643746296, 3.70542153895649) _gate_q_18, _gate_q_13;
  p(2.4884476830917883) _gate_q_11;
  cu3_5072459328(4.247922510421147, 4.845810091157527, 5.882459861557976) _gate_q_1, _gate_q_12;
  rzx_5072466192(2.4468986502792776) _gate_q_17, _gate_q_19;
  crx(0.4569514069547929) _gate_q_8, _gate_q_0;
  iswap _gate_q_3, _gate_q_9;
  u2(1.2123012194742933, 1.9628160320477743) _gate_q_3;
  cs _gate_q_17, _gate_q_5;
  t _gate_q_14;
  rzz_5072457120(3.674561731255382) _gate_q_10, _gate_q_4;
  cs _gate_q_19, _gate_q_18;
  xx_minus_yy_5072463600(2.069062220656977, 4.095150021634573) _gate_q_11, _gate_q_6;
  xx_plus_yy_5072463504(3.223662476706645, 4.313649701583682) _gate_q_1, _gate_q_12;
  u3(2.1325997536146626, 0.5241270533033129, 0.37359662252586645) _gate_q_9;
  s _gate_q_13;
  id _gate_q_0;
  rz(5.487131926857543) _gate_q_7;
  U(1.3157269953533466, 2.797995234921694, 0.46754157789288625) _gate_q_2;
  ch _gate_q_16, _gate_q_8;
  t _gate_q_15;
  sdg _gate_q_6;
  cs _gate_q_11, _gate_q_12;
  x _gate_q_7;
  rzz_5072464800(4.287749697279663) _gate_q_4, _gate_q_0;
  tdg _gate_q_17;
  p(3.593076365147797) _gate_q_9;
  r_5072462688(4.764844905346358, 1.0722201926774908) _gate_q_16;
  ch _gate_q_8, _gate_q_5;
  p(4.861253834939795) _gate_q_14;
  crz(1.8484128798758772) _gate_q_19, _gate_q_3;
  cu3_5072455872(1.9713963263935494, 5.7762981524636, 0.7644650969971155) _gate_q_10, _gate_q_13;
  cry(3.733728196057956) _gate_q_15, _gate_q_2;
  cp(4.382636474170516) _gate_q_1, _gate_q_18;
  cz _gate_q_7, _gate_q_3;
  cy _gate_q_15, _gate_q_11;
  crz(1.097444012116907) _gate_q_12, _gate_q_2;
  dcx _gate_q_4, _gate_q_17;
  rz(5.6810149528307194) _gate_q_19;
  u2(1.9880809120636538, 3.4018337804056538) _gate_q_13;
  csdg _gate_q_5, _gate_q_16;
  tdg _gate_q_8;
  h _gate_q_10;
  x _gate_q_9;
  u1(5.825055367863614) _gate_q_0;
  rxx_5072461008(4.122746707822912) _gate_q_1, _gate_q_6;
  sxdg _gate_q_14;
  z _gate_q_18;
  rzz_5072461872(0.5815226591611106) _gate_q_0, _gate_q_10;
  y _gate_q_6;
  csx _gate_q_9, _gate_q_18;
  rz(6.1729158193418625) _gate_q_1;
  cry(2.606495113045606) _gate_q_15, _gate_q_14;
  crz(2.8831425395578214) _gate_q_12, _gate_q_19;
  rxx_5072458608(4.520591466351215) _gate_q_5, _gate_q_17;
  y _gate_q_16;
  dcx _gate_q_7, _gate_q_13;
  p(0.01550476655420334) _gate_q_4;
  rz(5.248077381042168) _gate_q_11;
  rz(6.162777169101278) _gate_q_2;
  id _gate_q_3;
  U(3.124229453579019, 5.393077601390016, 1.794189932050491) _gate_q_8;
  tdg _gate_q_3;
  cu(5.83579536054298, 1.1500543195236297, 2.0876469032873377, 0.29210502125964416) _gate_q_18, _gate_q_11;
  u1(3.0172279798909725) _gate_q_9;
  dcx _gate_q_1, _gate_q_0;
  cy _gate_q_13, _gate_q_2;
  rz(3.374376900760054) _gate_q_15;
  ch _gate_q_8, _gate_q_5;
  csdg _gate_q_6, _gate_q_14;
  iswap _gate_q_10, _gate_q_12;
  sxdg _gate_q_16;
  cu(1.7118012538727214, 0.396168982423148, 0.9229860629706543, 5.440588829871692) _gate_q_4, _gate_q_17;
  z _gate_q_7;
  z _gate_q_19;
  u1(4.124104153401786) _gate_q_11;
  ch _gate_q_12, _gate_q_6;
  cp(4.55162055538163) _gate_q_13, _gate_q_0;
  crz(5.152734902258736) _gate_q_4, _gate_q_19;
  x _gate_q_18;
  sdg _gate_q_5;
  id _gate_q_9;
  cu(0.5047941947224192, 5.265135673921654, 5.070529518259979, 2.948491616839037) _gate_q_16, _gate_q_10;
  csdg _gate_q_8, _gate_q_7;
  rzx_5072467392(3.2607567844602814) _gate_q_15, _gate_q_2;
  cp(3.3140625372943924) _gate_q_17, _gate_q_3;
  r_5072467248(3.7239493585283916, 2.351570630133471) _gate_q_1;
  p(3.8215322510812686) _gate_q_14;
}