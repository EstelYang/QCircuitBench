gate rzx_5105876768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0510058912022144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105866688(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.6430576131630406) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2413384528921618) _gate_q_0;
  ry(-1.2413384528921618) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.6430576131630406) _gate_q_1;
}
gate rzx_5105870480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5660547109819578) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5105871680(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.3784828029456609, 4.53519475932053, -4.53519475932053) _gate_q_0;
}
gate rzx_5105864960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.444318427048955) _gate_q_1;
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
gate cu1_5105866016(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5214846236414847) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5214846236414847) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5214846236414847) _gate_q_1;
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
gate rzx_5105870048(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4841526741084774) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate xx_plus_yy_5105868368(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.6449831725334665) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.0970318528616743) _gate_q_1;
  ry(-1.0970318528616743) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.6449831725334665) _gate_q_0;
}
gate rxx_5105871584(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.4704063205146545) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5105862896(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.1455774069181131, 3.7670229793190426, -3.7670229793190426) _gate_q_0;
}
gate r_5105861360(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.228714071336985, 4.558291470732416, -4.558291470732416) _gate_q_0;
}
gate r_5105862368(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.9681325842513577, 1.799937256086971, -1.799937256086971) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu1_5105876480(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2571195672839184) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2571195672839184) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2571195672839184) _gate_q_1;
}
gate xx_minus_yy_5105867360(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.197337514604678) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3071230949698221) _gate_q_0;
  ry(-0.3071230949698221) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.197337514604678) _gate_q_1;
}
gate rzx_5105875088(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5389935016976014) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5105875760(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.4084070575499636) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5105871776(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.42898026396028244) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.42898026396028244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.42898026396028244) _gate_q_1;
}
gate rzz_5105863280(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.7437029811546427) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105861936(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.359136785505282) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5105869664(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.02299150770972827) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.02299150770972827) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.02299150770972827) _gate_q_1;
}
gate rxx_5105864576(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.824065370533894) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5107002224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.062196330556081265) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5106999344(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.06758219917048344) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.967813772288172) _gate_q_0;
  ry(-1.967813772288172) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.06758219917048344) _gate_q_1;
}
gate xx_plus_yy_5107003856(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.143613880348483) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8616253245160764) _gate_q_1;
  ry(-0.8616253245160764) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.143613880348483) _gate_q_0;
}
gate r_5107440272(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.0525929149562079, -0.06965314597929773, 0.06965314597929773) _gate_q_0;
}
gate cu1_5107434848(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.45637287645836816) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.45637287645836816) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.45637287645836816) _gate_q_1;
}
gate r_5107447904(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.031074473283645, -0.16933800797509457, 0.16933800797509457) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  rzx_5105876768(1.0510058912022144) _gate_q_12, _gate_q_15;
  sdg _gate_q_9;
  cp(2.6885347564171056) _gate_q_14, _gate_q_10;
  tdg _gate_q_7;
  xx_minus_yy_5105866688(2.4826769057843237, 3.6430576131630406) _gate_q_5, _gate_q_6;
  cy _gate_q_18, _gate_q_1;
  cy _gate_q_2, _gate_q_13;
  rzx_5105870480(0.5660547109819578) _gate_q_11, _gate_q_4;
  swap _gate_q_0, _gate_q_8;
  cz _gate_q_3, _gate_q_17;
  u1(5.112580982258553) _gate_q_16;
  r_5105871680(0.3784828029456609, 6.105991086115426) _gate_q_10;
  id _gate_q_18;
  rzx_5105864960(5.444318427048955) _gate_q_7, _gate_q_17;
  cy _gate_q_3, _gate_q_9;
  cp(1.7764844627775345) _gate_q_8, _gate_q_13;
  iswap _gate_q_1, _gate_q_16;
  cu1_5105866016(3.0429692472829695) _gate_q_15, _gate_q_14;
  t _gate_q_11;
  sdg _gate_q_4;
  csx _gate_q_2, _gate_q_6;
  rzx_5105870048(2.4841526741084774) _gate_q_5, _gate_q_0;
  sx _gate_q_12;
  swap _gate_q_7, _gate_q_5;
  id _gate_q_8;
  rz(2.0430435068586625) _gate_q_15;
  ecr _gate_q_4, _gate_q_13;
  xx_plus_yy_5105868368(2.1940637057233485, 4.6449831725334665) _gate_q_16, _gate_q_12;
  id _gate_q_1;
  sxdg _gate_q_18;
  y _gate_q_11;
  rxx_5105871584(4.4704063205146545) _gate_q_2, _gate_q_14;
  r_5105862896(0.1455774069181131, 5.337819306113939) _gate_q_0;
  crx(3.7843358648031296) _gate_q_6, _gate_q_3;
  u3(0.027624642318437143, 5.449504095848879, 4.46940137485596) _gate_q_9;
  cz _gate_q_10, _gate_q_17;
  cz _gate_q_3, _gate_q_2;
  u3(1.8147847296739998, 0.46001113382514214, 5.758612182196142) _gate_q_10;
  r_5105861360(5.228714071336985, 6.129087797527313) _gate_q_14;
  r_5105862368(2.9681325842513577, 3.3707335828818676) _gate_q_15;
  csdg _gate_q_9, _gate_q_11;
  dcx _gate_q_1, _gate_q_8;
  cu1_5105876480(2.5142391345678368) _gate_q_6, _gate_q_0;
  sxdg _gate_q_12;
  xx_minus_yy_5105867360(0.6142461899396442, 4.197337514604678) _gate_q_17, _gate_q_4;
  rzx_5105875088(0.5389935016976014) _gate_q_16, _gate_q_5;
  y _gate_q_18;
  csdg _gate_q_13, _gate_q_7;
  y _gate_q_13;
  rzz_5105875760(1.4084070575499636) _gate_q_10, _gate_q_5;
  z _gate_q_17;
  csx _gate_q_1, _gate_q_12;
  s _gate_q_15;
  cu1_5105871776(0.8579605279205649) _gate_q_18, _gate_q_4;
  cu(4.402882612686936, 0.01564660935884525, 3.4022008084591016, 1.9690100731658868) _gate_q_14, _gate_q_3;
  sx _gate_q_6;
  cz _gate_q_7, _gate_q_2;
  cp(2.3359852384923863) _gate_q_0, _gate_q_9;
  rz(4.772101789935785) _gate_q_11;
  iswap _gate_q_16, _gate_q_8;
  u3(1.5575967639663115, 2.5317241153805203, 3.3166668893052855) _gate_q_3;
  u2(3.8517544951581084, 2.160342224924589) _gate_q_16;
  crz(6.242709137946565) _gate_q_17, _gate_q_6;
  cry(4.574716133821269) _gate_q_7, _gate_q_12;
  sxdg _gate_q_10;
  cz _gate_q_13, _gate_q_11;
  rzz_5105863280(2.7437029811546427) _gate_q_8, _gate_q_4;
  rzz_5105861936(5.359136785505282) _gate_q_14, _gate_q_9;
  cu1_5105869664(0.04598301541945654) _gate_q_18, _gate_q_5;
  s _gate_q_1;
  x _gate_q_2;
  dcx _gate_q_0, _gate_q_15;
  x _gate_q_2;
  dcx _gate_q_9, _gate_q_7;
  cp(3.9775306493402733) _gate_q_10, _gate_q_1;
  swap _gate_q_18, _gate_q_6;
  p(2.592805281499901) _gate_q_11;
  rxx_5105864576(2.824065370533894) _gate_q_0, _gate_q_4;
  rx(4.603323871869648) _gate_q_8;
  sx _gate_q_14;
  rx(4.8855847700430735) _gate_q_17;
  rxx_5107002224(0.062196330556081265) _gate_q_16, _gate_q_15;
  id _gate_q_3;
  sxdg _gate_q_13;
  swap _gate_q_12, _gate_q_5;
  sx _gate_q_13;
  tdg _gate_q_6;
  cy _gate_q_16, _gate_q_15;
  sxdg _gate_q_10;
  xx_minus_yy_5106999344(3.935627544576344, 0.06758219917048344) _gate_q_11, _gate_q_18;
  csx _gate_q_5, _gate_q_1;
  rx(3.603226954458048) _gate_q_4;
  iswap _gate_q_8, _gate_q_3;
  xx_plus_yy_5107003856(1.7232506490321529, 6.143613880348483) _gate_q_9, _gate_q_12;
  h _gate_q_14;
  u1(1.6404826621382298) _gate_q_7;
  h _gate_q_2;
  sx _gate_q_17;
  sx _gate_q_0;
  u1(2.8012381560074147) _gate_q_8;
  crx(5.223344357114448) _gate_q_4, _gate_q_6;
  sxdg _gate_q_13;
  iswap _gate_q_14, _gate_q_3;
  csx _gate_q_2, _gate_q_5;
  cp(2.9680359640745255) _gate_q_17, _gate_q_1;
  sx _gate_q_15;
  s _gate_q_0;
  id _gate_q_18;
  cry(5.141962822785315) _gate_q_10, _gate_q_7;
  crz(0.05426523957919791) _gate_q_16, _gate_q_11;
  cz _gate_q_12, _gate_q_9;
  sxdg _gate_q_3;
  z _gate_q_12;
  p(1.0032830648938444) _gate_q_2;
  U(3.701203975795546, 5.540825967035194, 2.073802153035912) _gate_q_16;
  r_5107440272(1.0525929149562079, 1.5011431808155988) _gate_q_0;
  ry(2.4375477164237727) _gate_q_10;
  ch _gate_q_8, _gate_q_4;
  z _gate_q_15;
  cu1_5107434848(0.9127457529167363) _gate_q_13, _gate_q_9;
  u1(2.470968750410975) _gate_q_14;
  x _gate_q_1;
  ry(0.7691651881924043) _gate_q_11;
  cu(0.2718790406091292, 5.8240338183932625, 4.109896739975268, 4.442642179197314) _gate_q_6, _gate_q_17;
  sxdg _gate_q_18;
  ry(4.241306758668054) _gate_q_7;
  r_5107447904(4.031074473283645, 1.401458318819802) _gate_q_5;
}
gate cu1_5107333456(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8588572581908902) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8588572581908902) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8588572581908902) _gate_q_1;
}
gate rzx_5107320832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.960695450031387) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5107326688(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.9649049711830235) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.9649049711830235) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.9649049711830235) _gate_q_1;
}
gate r_5107332112(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.041179628524477, -1.0654262320269616, 1.0654262320269616) _gate_q_0;
}
gate rxx_5107325248(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.847687735824913) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5107319728(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.223893960686564) _gate_q_0;
  u1(0.3208443149859297) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5691823462211953, 0, -4.223893960686564) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5691823462211953, 3.903049645700635, 0) _gate_q_1;
}
gate xx_minus_yy_5107319680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.5973726847057486) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6139071684034637) _gate_q_0;
  ry(-0.6139071684034637) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.5973726847057486) _gate_q_1;
}
gate cu3_5107328080(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.111559648760916) _gate_q_0;
  u1(0.975300537869437) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8540830343603141, 0, -4.111559648760916) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8540830343603141, 3.1362591108914786, 0) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5107325824(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.7034466649437556) _gate_q_0;
  u1(-2.394891328333231) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5340916016149526, 0, -3.7034466649437556) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5340916016149526, 6.098337993276987, 0) _gate_q_1;
}
gate xx_minus_yy_5107330624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.7982380547563164) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5602102561300755) _gate_q_0;
  ry(-2.5602102561300755) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.7982380547563164) _gate_q_1;
}
gate xx_minus_yy_5107326976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.8510823072948233) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3551886104845805) _gate_q_0;
  ry(-1.3551886104845805) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.8510823072948233) _gate_q_1;
}
gate rxx_5107329280(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.349059291026833) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5107327696(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.3879560619353315) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5107328416(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.9788980737393371) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1156818679763225) _gate_q_0;
  ry(-1.1156818679763225) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.9788980737393371) _gate_q_1;
}
gate xx_minus_yy_5107323952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.23272279000231) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.33585752233806526) _gate_q_0;
  ry(-0.33585752233806526) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.23272279000231) _gate_q_1;
}
gate rxx_5107333264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5891537692534314) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5107325584(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.9525795410656945) _gate_q_0;
  u1(2.0973977002895223) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4792809782660891, 0, -2.9525795410656945) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4792809782660891, 0.8551818407761719, 0) _gate_q_1;
}
gate rzx_5107324864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2680333160847792) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5107328032(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.7302765510715944) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5107321360(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.74781206144776) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5107321504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.2622279919727033) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6429048573978706) _gate_q_0;
  ry(-2.6429048573978706) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.2622279919727033) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  p(3.130714153671402) _gate_q_5;
  ry(4.819360818622196) _gate_q_3;
  p(3.4650646609375024) _gate_q_12;
  y _gate_q_8;
  x _gate_q_1;
  cu(2.9168760452306954, 5.0957520087508446, 0.25726826275007286, 1.9293164037554384) _gate_q_14, _gate_q_6;
  rz(6.190539618021621) _gate_q_16;
  s _gate_q_2;
  p(3.1722370345506055) _gate_q_13;
  cu1_5107333456(1.7177145163817804) _gate_q_11, _gate_q_4;
  crx(5.5454749170660165) _gate_q_10, _gate_q_17;
  z _gate_q_7;
  ry(5.080442944138681) _gate_q_0;
  crz(0.6014423486288782) _gate_q_15, _gate_q_9;
  u2(2.6793456584408393, 2.431995491931932) _gate_q_18;
  rzx_5107320832(5.960695450031387) _gate_q_0, _gate_q_14;
  sx _gate_q_7;
  swap _gate_q_6, _gate_q_15;
  cu1_5107326688(5.929809942366047) _gate_q_17, _gate_q_4;
  cry(6.094506163989315) _gate_q_1, _gate_q_11;
  r_5107332112(5.041179628524477, 0.5053700947679348) _gate_q_18;
  sxdg _gate_q_5;
  csx _gate_q_3, _gate_q_13;
  rx(0.6911053826081903) _gate_q_12;
  csx _gate_q_10, _gate_q_2;
  cp(1.105123935517982) _gate_q_9, _gate_q_16;
  id _gate_q_8;
  rx(5.860388093329863) _gate_q_13;
  crx(5.784020739600004) _gate_q_3, _gate_q_1;
  tdg _gate_q_14;
  h _gate_q_12;
  rxx_5107325248(4.847687735824913) _gate_q_5, _gate_q_15;
  rz(4.045674153588854) _gate_q_17;
  cu3_5107319728(5.138364692442391, 3.903049645700635, 4.544738275672494) _gate_q_9, _gate_q_8;
  csx _gate_q_4, _gate_q_0;
  xx_minus_yy_5107319680(1.2278143368069274, 1.5973726847057486) _gate_q_10, _gate_q_7;
  cu3_5107328080(1.7081660687206282, 3.1362591108914786, 5.086860186630353) _gate_q_18, _gate_q_2;
  cs _gate_q_11, _gate_q_16;
  U(0.3888974723489187, 3.4889546140764884, 3.7526738679199405) _gate_q_6;
  cu3_5107325824(5.068183203229905, 6.098337993276987, 1.308555336610524) _gate_q_10, _gate_q_1;
  ch _gate_q_13, _gate_q_18;
  dcx _gate_q_16, _gate_q_12;
  ecr _gate_q_0, _gate_q_5;
  u1(5.075656094549352) _gate_q_9;
  rx(0.363541313848797) _gate_q_3;
  xx_minus_yy_5107330624(5.120420512260151, 3.7982380547563164) _gate_q_14, _gate_q_6;
  p(3.2832232073711713) _gate_q_11;
  ry(0.4959779650332666) _gate_q_17;
  cx _gate_q_7, _gate_q_8;
  cu(5.9128144127043605, 6.211785947673909, 4.862444877144613, 5.865708830064907) _gate_q_2, _gate_q_4;
  x _gate_q_15;
  rz(5.142268865975669) _gate_q_6;
  h _gate_q_13;
  u3(5.602008590764957, 4.968806138583519, 5.871049021567036) _gate_q_9;
  U(5.635022254034605, 1.421267056258048, 3.4004383179377244) _gate_q_18;
  cu(2.670160880449363, 1.0051425044453353, 5.6480957005850305, 0.17068630695228937) _gate_q_10, _gate_q_7;
  p(0.7371351594522315) _gate_q_14;
  iswap _gate_q_4, _gate_q_5;
  x _gate_q_12;
  tdg _gate_q_17;
  z _gate_q_8;
  ch _gate_q_2, _gate_q_11;
  id _gate_q_1;
  cry(3.3086116353317485) _gate_q_0, _gate_q_3;
  swap _gate_q_15, _gate_q_16;
  csx _gate_q_4, _gate_q_1;
  xx_minus_yy_5107326976(2.710377220969161, 1.8510823072948233) _gate_q_13, _gate_q_3;
  sxdg _gate_q_17;
  u1(2.237130824490914) _gate_q_12;
  iswap _gate_q_2, _gate_q_5;
  crz(6.280598671123006) _gate_q_14, _gate_q_8;
  u3(3.111140778364317, 0.7429631538565873, 5.590750432733569) _gate_q_15;
  rxx_5107329280(5.349059291026833) _gate_q_16, _gate_q_11;
  h _gate_q_9;
  p(3.2658142636367105) _gate_q_18;
  rzz_5107327696(5.3879560619353315) _gate_q_7, _gate_q_10;
  csx _gate_q_0, _gate_q_6;
  ch _gate_q_17, _gate_q_4;
  swap _gate_q_3, _gate_q_6;
  u3(1.9025852173636588, 1.6295192939421295, 5.589711173462484) _gate_q_18;
  rx(1.9234954964799988) _gate_q_13;
  sxdg _gate_q_8;
  xx_minus_yy_5107328416(2.231363735952645, 0.9788980737393371) _gate_q_16, _gate_q_2;
  u2(6.139142968934146, 5.200411801863021) _gate_q_14;
  z _gate_q_10;
  ry(4.683067736225102) _gate_q_9;
  xx_minus_yy_5107323952(0.6717150446761305, 5.23272279000231) _gate_q_0, _gate_q_12;
  u2(2.9450418246008243, 3.374665497865693) _gate_q_5;
  crx(4.023183383001702) _gate_q_11, _gate_q_15;
  sxdg _gate_q_1;
  u2(1.7219793749211634, 3.7857037234636177) _gate_q_7;
  z _gate_q_5;
  id _gate_q_2;
  rx(4.53752100185593) _gate_q_6;
  cy _gate_q_3, _gate_q_12;
  rxx_5107333264(0.5891537692534314) _gate_q_18, _gate_q_1;
  p(5.478010388504278) _gate_q_17;
  cu3_5107325584(0.9585619565321782, 0.8551818407761719, 5.049977241355217) _gate_q_14, _gate_q_8;
  cx _gate_q_11, _gate_q_0;
  u2(4.452331468676322, 4.021365539963932) _gate_q_13;
  iswap _gate_q_16, _gate_q_4;
  u3(3.787723490376515, 0.15065451824988196, 0.6283486171520811) _gate_q_10;
  cry(1.4266633141295901) _gate_q_9, _gate_q_7;
  id _gate_q_15;
  dcx _gate_q_15, _gate_q_5;
  u2(0.9944553156609622, 6.155353257944782) _gate_q_9;
  sxdg _gate_q_16;
  cx _gate_q_11, _gate_q_1;
  iswap _gate_q_18, _gate_q_10;
  dcx _gate_q_13, _gate_q_0;
  csdg _gate_q_17, _gate_q_3;
  U(1.1583598181299957, 1.1047297140226018, 2.706313936757578) _gate_q_8;
  u1(5.141256977494714) _gate_q_7;
  cp(5.516283874213609) _gate_q_6, _gate_q_14;
  y _gate_q_12;
  h _gate_q_4;
  id _gate_q_2;
  h _gate_q_5;
  x _gate_q_0;
  swap _gate_q_8, _gate_q_10;
  cry(1.4704001936463764) _gate_q_6, _gate_q_18;
  ry(1.194848140482743) _gate_q_1;
  U(6.021910658302699, 1.2669390266057754, 5.8418447389056505) _gate_q_16;
  rzx_5107324864(1.2680333160847792) _gate_q_4, _gate_q_2;
  y _gate_q_12;
  id _gate_q_9;
  rzz_5107328032(0.7302765510715944) _gate_q_17, _gate_q_14;
  rzz_5107321360(3.74781206144776) _gate_q_11, _gate_q_13;
  sx _gate_q_3;
  xx_minus_yy_5107321504(5.285809714795741, 3.2622279919727033) _gate_q_15, _gate_q_7;
}