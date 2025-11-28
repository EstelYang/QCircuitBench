gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5070429680(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.0218342036936185, 4.225274202244673, -4.225274202244673) _gate_q_0;
}
gate rzz_5070430208(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.619633852791135) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5070432128(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.422175663975855, 0.5120741991692936, -0.5120741991692936) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5070428288(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.291985307565026) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5315079894311894) _gate_q_0;
  ry(-2.5315079894311894) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.291985307565026) _gate_q_1;
}
gate xx_minus_yy_5070429872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.836672786463335) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.507285095894238) _gate_q_0;
  ry(-2.507285095894238) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.836672786463335) _gate_q_1;
}
gate rzx_5070424448(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.986062719795847) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5070437792(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1123995070348998) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5070426032(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.9866926730348964) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7933608943500869) _gate_q_0;
  ry(-0.7933608943500869) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.9866926730348964) _gate_q_1;
}
gate cu3_5072114784(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2367285834010584) _gate_q_0;
  u1(-0.748059793326576) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.1283455159351696, 0, -1.2367285834010584) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.1283455159351696, 1.9847883767276344, 0) _gate_q_1;
}
gate rzz_5072114688(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.284066554569984) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5072110656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.629409303505078) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5070437888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.141984004852411) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.016267374058406267) _gate_q_1;
  ry(-0.016267374058406267) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.141984004852411) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  sdg _gate_q_13;
  y _gate_q_7;
  crz(4.923402485366803) _gate_q_0, _gate_q_8;
  cry(3.9672328666187027) _gate_q_2, _gate_q_10;
  h _gate_q_11;
  u1(0.9491578226488786) _gate_q_9;
  p(3.1711282119081825) _gate_q_12;
  iswap _gate_q_4, _gate_q_1;
  iswap _gate_q_5, _gate_q_6;
  r_5070429680(3.0218342036936185, 5.79607052903957) _gate_q_3;
  u3(2.662319006901553, 2.4633856087478323, 1.7763715359174073) _gate_q_5;
  rzz_5070430208(2.619633852791135) _gate_q_11, _gate_q_2;
  cy _gate_q_0, _gate_q_8;
  sx _gate_q_10;
  swap _gate_q_7, _gate_q_9;
  sx _gate_q_13;
  ecr _gate_q_12, _gate_q_6;
  cs _gate_q_1, _gate_q_3;
  tdg _gate_q_4;
  csx _gate_q_4, _gate_q_9;
  cz _gate_q_12, _gate_q_10;
  h _gate_q_6;
  rx(5.143879533721581) _gate_q_0;
  id _gate_q_2;
  z _gate_q_8;
  cy _gate_q_3, _gate_q_7;
  s _gate_q_11;
  cry(5.606951584594552) _gate_q_5, _gate_q_13;
  u1(5.84580135008894) _gate_q_1;
  cz _gate_q_3, _gate_q_10;
  cu(3.2645435993564464, 4.281593077291949, 4.057891805189239, 5.378873553808381) _gate_q_2, _gate_q_6;
  dcx _gate_q_11, _gate_q_5;
  u3(5.046485421901945, 1.5035635758692023, 3.9024900840759402) _gate_q_0;
  crx(3.250927354369852) _gate_q_9, _gate_q_4;
  csdg _gate_q_12, _gate_q_8;
  r_5070432128(3.422175663975855, 2.08287052596419) _gate_q_13;
  iswap _gate_q_1, _gate_q_7;
  cx _gate_q_12, _gate_q_2;
  id _gate_q_6;
  xx_minus_yy_5070428288(5.063015978862379, 2.291985307565026) _gate_q_13, _gate_q_0;
  cz _gate_q_7, _gate_q_11;
  U(5.521106209406253, 2.1610684271673244, 3.0683938231124586) _gate_q_3;
  ry(5.547465829577499) _gate_q_10;
  u3(2.9283061960523247, 1.6753590927629645, 4.355941958316961) _gate_q_4;
  xx_minus_yy_5070429872(5.014570191788476, 2.836672786463335) _gate_q_5, _gate_q_1;
  cy _gate_q_9, _gate_q_8;
  cu(2.5549682650489536, 4.527710227868338, 3.7290771441382, 4.341888515203921) _gate_q_0, _gate_q_10;
  rz(1.0999023951552933) _gate_q_4;
  u1(4.794965515637796) _gate_q_11;
  csdg _gate_q_5, _gate_q_2;
  cs _gate_q_1, _gate_q_3;
  id _gate_q_9;
  dcx _gate_q_8, _gate_q_7;
  u2(4.338058842227915, 0.12061118972111412) _gate_q_12;
  ch _gate_q_13, _gate_q_6;
  u3(3.2374581146700185, 5.065775766021467, 1.642995861767342) _gate_q_8;
  rzx_5070424448(3.986062719795847) _gate_q_10, _gate_q_9;
  ecr _gate_q_7, _gate_q_4;
  z _gate_q_6;
  rzx_5070437792(2.1123995070348998) _gate_q_2, _gate_q_0;
  csdg _gate_q_13, _gate_q_1;
  p(5.055754403006924) _gate_q_5;
  sx _gate_q_12;
  xx_minus_yy_5070426032(1.5867217887001739, 3.9866926730348964) _gate_q_3, _gate_q_11;
  tdg _gate_q_4;
  x _gate_q_9;
  rx(4.635076659436993) _gate_q_1;
  id _gate_q_13;
  z _gate_q_12;
  csdg _gate_q_6, _gate_q_11;
  u3(0.6753195362426445, 1.1716627427633897, 5.163601365778857) _gate_q_2;
  ry(2.557556522076216) _gate_q_0;
  csdg _gate_q_8, _gate_q_5;
  cu3_5072114784(6.256691031870339, 1.9847883767276344, 0.48866879007448233) _gate_q_3, _gate_q_10;
  sxdg _gate_q_7;
  s _gate_q_5;
  rzz_5072114688(4.284066554569984) _gate_q_7, _gate_q_2;
  csx _gate_q_3, _gate_q_12;
  rxx_5072110656(4.629409303505078) _gate_q_10, _gate_q_6;
  sxdg _gate_q_0;
  dcx _gate_q_13, _gate_q_4;
  cy _gate_q_11, _gate_q_1;
  U(2.2430976400673805, 5.813592405145963, 5.4708110220217945) _gate_q_9;
  u1(4.114369130063538) _gate_q_8;
  cp(1.895757599825125) _gate_q_0, _gate_q_2;
  csx _gate_q_13, _gate_q_1;
  ecr _gate_q_10, _gate_q_7;
  u3(3.5146669798855235, 2.8271358877661865, 1.0469062232615185) _gate_q_6;
  sdg _gate_q_8;
  u1(1.4550257609498982) _gate_q_3;
  y _gate_q_12;
  cu(2.3948167345634466, 1.9991586915860458, 0.627017418145519, 1.4265356707577521) _gate_q_11, _gate_q_5;
  xx_plus_yy_5070437888(0.032534748116812534, 5.141984004852411) _gate_q_4, _gate_q_9;
}
gate r_5072116272(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8517459630196024, 3.5100394375493327, -3.5100394375493327) _gate_q_0;
}
gate rzx_5072119440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.794144170344343) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5072115264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.10677679083057404) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072117472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.6313085539977155) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9830274721714567) _gate_q_1;
  ry(-1.9830274721714567) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.6313085539977155) _gate_q_0;
}
gate r_5072122992(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.299687382392979, 3.8379166652361647, -3.8379166652361647) _gate_q_0;
}
gate r_5072118048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.269828302785906, 1.17439962377876, -1.17439962377876) _gate_q_0;
}
gate xx_minus_yy_5072113872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.3864414739521376) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6980043564541747) _gate_q_0;
  ry(-2.6980043564541747) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.3864414739521376) _gate_q_1;
}
gate xx_minus_yy_5072109984(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.8138877978943153) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.971955356233888) _gate_q_0;
  ry(-1.971955356233888) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.8138877978943153) _gate_q_1;
}
gate rzz_5072112096(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.8072855662177507) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5072121552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.017249596619449) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0120809933040418) _gate_q_1;
  ry(-2.0120809933040418) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.017249596619449) _gate_q_0;
}
gate rzz_5074813200(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.9335062214091545) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5074813488(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.192275532796239) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5074813632(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.595752416757657) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5074813776(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.755136863217701) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5074813824(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.024603938551627) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5871657584253387) _gate_q_1;
  ry(-1.5871657584253387) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.024603938551627) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  sxdg _gate_q_10;
  sx _gate_q_7;
  u3(2.273034270171979, 3.4984827264439553, 2.0729785446438234) _gate_q_2;
  r_5072116272(0.8517459630196024, 5.080835764344229) _gate_q_13;
  rzx_5072119440(4.794144170344343) _gate_q_6, _gate_q_3;
  y _gate_q_12;
  rxx_5072115264(0.10677679083057404) _gate_q_1, _gate_q_5;
  z _gate_q_8;
  cu(5.138477160318865, 3.1754648026147354, 6.18508383787971, 5.021326311778008) _gate_q_4, _gate_q_9;
  z _gate_q_0;
  U(3.3349974142737038, 2.189388433271937, 0.18924265896692155) _gate_q_11;
  dcx _gate_q_13, _gate_q_11;
  xx_plus_yy_5072117472(3.9660549443429134, 1.6313085539977155) _gate_q_2, _gate_q_6;
  cz _gate_q_12, _gate_q_8;
  s _gate_q_9;
  r_5072122992(2.299687382392979, 5.408712992031061) _gate_q_4;
  sx _gate_q_5;
  sx _gate_q_0;
  swap _gate_q_10, _gate_q_1;
  id _gate_q_3;
  r_5072118048(5.269828302785906, 2.7451959505736565) _gate_q_7;
  xx_minus_yy_5072113872(5.396008712908349, 3.3864414739521376) _gate_q_6, _gate_q_5;
  h _gate_q_4;
  u1(4.21855693567086) _gate_q_10;
  u1(5.065011769170716) _gate_q_9;
  ry(2.1001508756172225) _gate_q_11;
  u1(3.4069104886680566) _gate_q_2;
  y _gate_q_8;
  cs _gate_q_13, _gate_q_12;
  cry(1.367415551130883) _gate_q_3, _gate_q_0;
  U(2.0850542977840734, 0.9824367440911129, 5.7658504598874405) _gate_q_1;
  y _gate_q_7;
  xx_minus_yy_5072109984(3.943910712467776, 0.8138877978943153) _gate_q_6, _gate_q_9;
  ch _gate_q_11, _gate_q_0;
  sx _gate_q_12;
  y _gate_q_5;
  cp(3.517714112487721) _gate_q_1, _gate_q_3;
  ry(5.433289674591496) _gate_q_10;
  sxdg _gate_q_8;
  t _gate_q_4;
  cu(3.175927628077629, 1.5127729790713682, 5.959342466925558, 4.02593341760557) _gate_q_13, _gate_q_2;
  rx(3.529534821742077) _gate_q_7;
  ch _gate_q_8, _gate_q_2;
  crz(0.38906875699798404) _gate_q_5, _gate_q_11;
  cs _gate_q_1, _gate_q_4;
  iswap _gate_q_6, _gate_q_7;
  p(0.03116669817605983) _gate_q_12;
  u1(2.5683881856457416) _gate_q_10;
  cry(1.8411289787075118) _gate_q_0, _gate_q_9;
  y _gate_q_3;
  tdg _gate_q_13;
  sxdg _gate_q_1;
  U(2.485268319620626, 6.14507587104664, 3.709255982285507) _gate_q_8;
  swap _gate_q_2, _gate_q_10;
  sx _gate_q_13;
  t _gate_q_9;
  rzz_5072112096(3.8072855662177507) _gate_q_5, _gate_q_3;
  u1(5.0529166968236705) _gate_q_7;
  rz(3.6620311171666744) _gate_q_4;
  xx_plus_yy_5072121552(4.0241619866080836, 3.017249596619449) _gate_q_12, _gate_q_0;
  ry(0.32065538869578447) _gate_q_6;
  h _gate_q_11;
  crz(2.133490022645082) _gate_q_12, _gate_q_0;
  cp(4.76975489965099) _gate_q_10, _gate_q_2;
  cp(5.737673898056632) _gate_q_8, _gate_q_4;
  t _gate_q_11;
  sdg _gate_q_9;
  rz(1.7259690270166392) _gate_q_7;
  iswap _gate_q_6, _gate_q_5;
  crx(1.7090776210861574) _gate_q_13, _gate_q_1;
  rz(2.902345477855905) _gate_q_3;
  h _gate_q_2;
  sxdg _gate_q_0;
  ch _gate_q_6, _gate_q_12;
  sdg _gate_q_11;
  U(6.050132526675331, 0.8019946418488964, 1.2901022942683102) _gate_q_1;
  rzz_5074813200(1.9335062214091545) _gate_q_9, _gate_q_3;
  cx _gate_q_7, _gate_q_5;
  cry(5.8350998891111745) _gate_q_4, _gate_q_13;
  rx(2.038835336917185) _gate_q_8;
  ry(4.108016397331522) _gate_q_10;
  ecr _gate_q_10, _gate_q_6;
  u2(1.1164428384909506, 1.0998670574754186) _gate_q_4;
  ch _gate_q_2, _gate_q_9;
  cy _gate_q_3, _gate_q_11;
  rzx_5074813488(5.192275532796239) _gate_q_12, _gate_q_0;
  id _gate_q_8;
  sdg _gate_q_13;
  cx _gate_q_1, _gate_q_7;
  t _gate_q_5;
  cu(4.0992506824577974, 1.5788473829696783, 3.7669416652741536, 2.1142499687623397) _gate_q_0, _gate_q_10;
  cy _gate_q_13, _gate_q_5;
  rxx_5074813632(2.595752416757657) _gate_q_9, _gate_q_11;
  sxdg _gate_q_12;
  crx(1.6609181739462069) _gate_q_8, _gate_q_3;
  rzx_5074813776(4.755136863217701) _gate_q_4, _gate_q_1;
  xx_plus_yy_5074813824(3.1743315168506774, 5.024603938551627) _gate_q_7, _gate_q_2;
  u1(0.3623833374774319) _gate_q_6;
}