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
gate rzx_5105787408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9007028784325488) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105788080(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.3562613465267077) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5521475065647651) _gate_q_0;
  ry(-0.5521475065647651) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.3562613465267077) _gate_q_1;
}
gate xx_plus_yy_5105781168(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.648517834066166) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.664619430014548) _gate_q_1;
  ry(-2.664619430014548) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.648517834066166) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu1_5105779968(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.395406861592946) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.395406861592946) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.395406861592946) _gate_q_1;
}
gate rzx_5105788656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.938815590064992) _gate_q_1;
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
gate xx_plus_yy_5105785152(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.263445972368561) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9765417655151818) _gate_q_1;
  ry(-1.9765417655151818) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.263445972368561) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5105781264(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.054662976717224, 0.06448259405713053, -0.06448259405713053) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzx_5105779104(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2864258247305271) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5105784384(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.828818554554265) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1753297414468569) _gate_q_0;
  ry(-1.1753297414468569) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.828818554554265) _gate_q_1;
}
gate xx_plus_yy_5105793456(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.3398650367945444) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1467511670584922) _gate_q_1;
  ry(-1.1467511670584922) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.3398650367945444) _gate_q_0;
}
gate cu3_5105790336(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8089359603292423) _gate_q_0;
  u1(-1.1820233052987064) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3394235278230031, 0, -2.8089359603292423) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3394235278230031, 3.9909592656279487, 0) _gate_q_1;
}
gate rzz_5105782128(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.9321520323936087) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate cu3_5105789856(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.031452248477862) _gate_q_0;
  u1(1.2275147959055641) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8052110600450595, 0, -3.031452248477862) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8052110600450595, 1.8039374525722978, 0) _gate_q_1;
}
gate rzz_5105786112(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.9327443670208888) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5105794560(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.515465617870265) _gate_q_0;
  u1(-0.6401298665180857) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6209269940367159, 0, -3.515465617870265) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6209269940367159, 4.155595484388351, 0) _gate_q_1;
}
gate rzz_5105782080(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.2861583198454576) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  t _gate_q_0;
  ry(1.409000166114082) _gate_q_8;
  rz(2.5717088811141102) _gate_q_16;
  y _gate_q_10;
  ecr _gate_q_14, _gate_q_5;
  cu(3.280741433532099, 6.05414579545416, 4.798866293637705, 1.9207877018427904) _gate_q_12, _gate_q_3;
  rzx_5105787408(0.9007028784325488) _gate_q_4, _gate_q_9;
  ecr _gate_q_6, _gate_q_2;
  ry(0.08398629762574931) _gate_q_7;
  h _gate_q_11;
  swap _gate_q_1, _gate_q_13;
  rz(1.905271604617353) _gate_q_15;
  z _gate_q_5;
  h _gate_q_6;
  ry(4.625248395091258) _gate_q_2;
  xx_minus_yy_5105788080(1.1042950131295302, 1.3562613465267077) _gate_q_15, _gate_q_3;
  xx_plus_yy_5105781168(5.329238860029096, 5.648517834066166) _gate_q_8, _gate_q_16;
  cs _gate_q_4, _gate_q_11;
  cz _gate_q_7, _gate_q_0;
  cu1_5105779968(4.790813723185892) _gate_q_9, _gate_q_13;
  t _gate_q_14;
  id _gate_q_10;
  ecr _gate_q_12, _gate_q_1;
  z _gate_q_6;
  crz(4.849826288067292) _gate_q_10, _gate_q_5;
  rzx_5105788656(5.938815590064992) _gate_q_3, _gate_q_0;
  u3(3.1554447119746887, 3.119876170686692, 3.5037037732159093) _gate_q_8;
  csdg _gate_q_11, _gate_q_2;
  U(3.687468946313585, 5.499845459501512, 1.0740678465072255) _gate_q_9;
  cu(4.6782853295080935, 6.275428525634475, 2.2715440278215593, 5.552587562076614) _gate_q_14, _gate_q_12;
  p(2.0749407247027016) _gate_q_1;
  csdg _gate_q_4, _gate_q_7;
  crx(4.101428338311305) _gate_q_13, _gate_q_16;
  u1(5.886149779335609) _gate_q_15;
  xx_plus_yy_5105785152(3.9530835310303636, 5.263445972368561) _gate_q_7, _gate_q_0;
  dcx _gate_q_14, _gate_q_15;
  sdg _gate_q_5;
  csdg _gate_q_10, _gate_q_6;
  z _gate_q_8;
  dcx _gate_q_2, _gate_q_9;
  ecr _gate_q_12, _gate_q_1;
  r_5105781264(5.054662976717224, 1.635278920852027) _gate_q_11;
  s _gate_q_13;
  sdg _gate_q_3;
  u2(1.5444380984626997, 0.9152784605520324) _gate_q_16;
  sdg _gate_q_4;
  cx _gate_q_6, _gate_q_7;
  cu(4.638380847563242, 4.467064811362942, 0.1692880511004779, 4.625953479967347) _gate_q_15, _gate_q_14;
  u2(2.5042261401205015, 1.6860746907912985) _gate_q_12;
  iswap _gate_q_2, _gate_q_16;
  rzx_5105779104(1.2864258247305271) _gate_q_9, _gate_q_10;
  h _gate_q_4;
  cu(2.1486989187580905, 4.288082209387448, 0.9923641373294698, 2.27575283577286) _gate_q_3, _gate_q_1;
  cz _gate_q_8, _gate_q_5;
  z _gate_q_11;
  p(2.495066668583277) _gate_q_13;
  sdg _gate_q_0;
  xx_minus_yy_5105784384(2.3506594828937137, 5.828818554554265) _gate_q_10, _gate_q_12;
  x _gate_q_7;
  swap _gate_q_1, _gate_q_13;
  u3(0.48405392552984566, 3.700041195144229, 5.8623310913994295) _gate_q_2;
  ch _gate_q_8, _gate_q_4;
  cu(5.047148586542915, 4.926559595159991, 2.2169503757276754, 3.115016117105117) _gate_q_3, _gate_q_0;
  U(1.8572781036969985, 6.019987424824795, 1.6813898736390873) _gate_q_6;
  s _gate_q_15;
  swap _gate_q_9, _gate_q_16;
  sx _gate_q_14;
  xx_plus_yy_5105793456(2.2935023341169845, 2.3398650367945444) _gate_q_5, _gate_q_11;
  rx(6.126023499383224) _gate_q_11;
  cu3_5105790336(2.6788470556460062, 3.9909592656279487, 1.6269126550305362) _gate_q_6, _gate_q_14;
  rzz_5105782128(0.9321520323936087) _gate_q_0, _gate_q_8;
  y _gate_q_2;
  cu(1.3069552274924172, 1.7790211539886063, 0.23325166373512274, 1.1271331897312602) _gate_q_16, _gate_q_5;
  cu(3.8262855438557852, 4.227461630694164, 3.3123242044261496, 3.015519925652647) _gate_q_13, _gate_q_15;
  t _gate_q_12;
  csx _gate_q_10, _gate_q_1;
  s _gate_q_9;
  cz _gate_q_4, _gate_q_7;
  u2(5.229656735096203, 5.017476443828374) _gate_q_3;
  id _gate_q_10;
  iswap _gate_q_11, _gate_q_13;
  cu3_5105789856(3.610422120090119, 1.8039374525722978, 4.258967044383426) _gate_q_0, _gate_q_4;
  ecr _gate_q_6, _gate_q_7;
  crz(5.3771374896032365) _gate_q_14, _gate_q_1;
  ecr _gate_q_9, _gate_q_16;
  dcx _gate_q_12, _gate_q_8;
  h _gate_q_2;
  u2(1.1616743448563034, 4.988964288739016) _gate_q_5;
  s _gate_q_3;
  x _gate_q_15;
  csdg _gate_q_16, _gate_q_2;
  crx(1.1228781059064405) _gate_q_7, _gate_q_3;
  rzz_5105786112(1.9327443670208888) _gate_q_1, _gate_q_6;
  sdg _gate_q_0;
  sx _gate_q_5;
  dcx _gate_q_10, _gate_q_15;
  sx _gate_q_12;
  cu3_5105794560(1.2418539880734318, 4.155595484388351, 2.8753357513521793) _gate_q_13, _gate_q_14;
  x _gate_q_9;
  u3(3.1055422216132285, 4.800420700737312, 0.8201032576445796) _gate_q_4;
  h _gate_q_8;
  tdg _gate_q_11;
  swap _gate_q_14, _gate_q_10;
  cz _gate_q_15, _gate_q_1;
  cry(1.4950066041524837) _gate_q_16, _gate_q_9;
  id _gate_q_11;
  rzz_5105782080(3.2861583198454576) _gate_q_4, _gate_q_13;
  crx(2.4174589542453866) _gate_q_12, _gate_q_8;
  ecr _gate_q_0, _gate_q_7;
  dcx _gate_q_2, _gate_q_5;
  cx _gate_q_6, _gate_q_3;
}
gate xx_minus_yy_5105789952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.812377392144296) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7628279046905633) _gate_q_0;
  ry(-0.7628279046905633) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.812377392144296) _gate_q_1;
}
gate rxx_5105791776(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.951465656125045) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5105779008(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.21905684787923) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5105782272(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.5230350252391736) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.5230350252391736) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.5230350252391736) _gate_q_1;
}
gate xx_plus_yy_5105779248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.720220101685739) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.040433103282461004) _gate_q_1;
  ry(-0.040433103282461004) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.720220101685739) _gate_q_0;
}
gate cu1_5105789280(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.48906715460529626) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.48906715460529626) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.48906715460529626) _gate_q_1;
}
gate r_5105779776(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.250548484634601, 1.6187713424666224, -1.6187713424666224) _gate_q_0;
}
gate xx_minus_yy_5105792640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.664641515233967) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0108638803252767) _gate_q_0;
  ry(-2.0108638803252767) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.664641515233967) _gate_q_1;
}
gate rzx_5105790672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7804494055659335) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5105787072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.173559333114676) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8326891646359286) _gate_q_1;
  ry(-0.8326891646359286) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.173559333114676) _gate_q_0;
}
gate cu3_5105783088(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.1877712162015586) _gate_q_0;
  u1(-0.9344553973977978) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5355441702417982, 0, -3.1877712162015586) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5355441702417982, 4.122226613599357, 0) _gate_q_1;
}
gate xx_plus_yy_5105783568(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.067532519781604) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5620110148346624) _gate_q_1;
  ry(-1.5620110148346624) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.067532519781604) _gate_q_0;
}
gate ryy_5105794512(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0291737781647257) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5105790240(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.320173543932634) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.320173543932634) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.320173543932634) _gate_q_1;
}
gate ryy_5105784000(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.418947044803192) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105789760(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.23688692701713) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5105786064(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.2630330922070705) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5105786544(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2773312087749593) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  dcx _gate_q_7, _gate_q_10;
  z _gate_q_9;
  xx_minus_yy_5105789952(1.5256558093811265, 4.812377392144296) _gate_q_11, _gate_q_15;
  y _gate_q_2;
  u1(5.111294175087973) _gate_q_16;
  rxx_5105791776(3.951465656125045) _gate_q_1, _gate_q_0;
  csx _gate_q_12, _gate_q_14;
  rzx_5105779008(3.21905684787923) _gate_q_6, _gate_q_5;
  h _gate_q_3;
  sdg _gate_q_4;
  u1(0.719226882580972) _gate_q_8;
  id _gate_q_13;
  h _gate_q_5;
  cs _gate_q_8, _gate_q_13;
  sdg _gate_q_15;
  crx(0.24836525109635418) _gate_q_3, _gate_q_4;
  cz _gate_q_12, _gate_q_6;
  tdg _gate_q_16;
  crx(4.206895789300978) _gate_q_9, _gate_q_2;
  swap _gate_q_11, _gate_q_14;
  sx _gate_q_0;
  sx _gate_q_1;
  cu1_5105782272(5.046070050478347) _gate_q_10, _gate_q_7;
  cz _gate_q_15, _gate_q_8;
  csdg _gate_q_14, _gate_q_0;
  cp(3.846007943020074) _gate_q_13, _gate_q_5;
  y _gate_q_11;
  crx(5.375223537507212) _gate_q_3, _gate_q_6;
  xx_plus_yy_5105779248(0.08086620656492201, 3.720220101685739) _gate_q_7, _gate_q_4;
  y _gate_q_16;
  dcx _gate_q_10, _gate_q_2;
  cu1_5105789280(0.9781343092105925) _gate_q_12, _gate_q_1;
  r_5105779776(6.250548484634601, 3.189567669261519) _gate_q_9;
  cz _gate_q_14, _gate_q_3;
  u2(2.4827828731584187, 4.158601187426862) _gate_q_0;
  cz _gate_q_11, _gate_q_1;
  ch _gate_q_12, _gate_q_6;
  xx_minus_yy_5105792640(4.0217277606505535, 4.664641515233967) _gate_q_8, _gate_q_10;
  sdg _gate_q_16;
  rzx_5105790672(0.7804494055659335) _gate_q_15, _gate_q_9;
  cry(3.624061545236469) _gate_q_7, _gate_q_4;
  rx(2.0821591103840107) _gate_q_13;
  rx(4.252345879893597) _gate_q_2;
  ry(0.15282565444885382) _gate_q_5;
  iswap _gate_q_0, _gate_q_1;
  cu(2.0076814024773055, 6.275677184752092, 5.53692339746175, 5.349001760825133) _gate_q_8, _gate_q_14;
  p(0.2213234562377387) _gate_q_15;
  swap _gate_q_7, _gate_q_5;
  iswap _gate_q_2, _gate_q_11;
  xx_plus_yy_5105787072(1.6653783292718571, 2.173559333114676) _gate_q_13, _gate_q_9;
  h _gate_q_16;
  cu3_5105783088(5.0710883404835965, 4.122226613599357, 2.253315818803761) _gate_q_3, _gate_q_12;
  rz(5.565440268346864) _gate_q_6;
  sxdg _gate_q_10;
  s _gate_q_4;
  u3(4.986013169546957, 3.635463746404196, 3.2319261955572114) _gate_q_15;
  tdg _gate_q_0;
  x _gate_q_16;
  u1(0.9483030787297336) _gate_q_9;
  xx_plus_yy_5105783568(3.124022029669325, 6.067532519781604) _gate_q_1, _gate_q_2;
  s _gate_q_13;
  ry(1.33723317235183) _gate_q_3;
  rx(0.9872515219056308) _gate_q_14;
  cry(1.3355585950712268) _gate_q_4, _gate_q_5;
  p(0.6016123611130988) _gate_q_12;
  y _gate_q_11;
  cz _gate_q_7, _gate_q_6;
  id _gate_q_10;
  tdg _gate_q_8;
  crx(5.61294799294328) _gate_q_6, _gate_q_14;
  U(3.8399347685434906, 1.3540786223863372, 0.20029390414979875) _gate_q_0;
  ryy_5105794512(3.0291737781647257) _gate_q_1, _gate_q_13;
  cu1_5105790240(4.640347087865268) _gate_q_2, _gate_q_9;
  x _gate_q_12;
  cu(2.4853873822296606, 1.9193807001562446, 3.969978775495955, 1.3905351080675274) _gate_q_7, _gate_q_8;
  ry(3.6445999706240237) _gate_q_16;
  crx(1.009442297632847) _gate_q_10, _gate_q_4;
  cx _gate_q_15, _gate_q_5;
  sx _gate_q_11;
  id _gate_q_3;
  ry(3.368158095640501) _gate_q_6;
  ecr _gate_q_15, _gate_q_5;
  cu(6.148271666662904, 2.871484689129578, 3.784912229456958, 0.529254726329342) _gate_q_2, _gate_q_7;
  cu(2.8187821496312333, 0.7890392495316992, 1.6326897275179304, 4.396508031870638) _gate_q_13, _gate_q_9;
  rz(2.1619282450585566) _gate_q_12;
  rz(4.574221179622767) _gate_q_16;
  s _gate_q_0;
  u3(5.219420707419175, 5.409935212843285, 0.4870888960153391) _gate_q_10;
  ryy_5105784000(5.418947044803192) _gate_q_3, _gate_q_1;
  s _gate_q_8;
  cu(2.6684232058490025, 1.9596631889732827, 5.9169517023454405, 2.1676382923479265) _gate_q_11, _gate_q_4;
  u3(3.96106302327827, 2.9777171934210385, 1.0403699102677129) _gate_q_14;
  cz _gate_q_11, _gate_q_14;
  h _gate_q_5;
  iswap _gate_q_7, _gate_q_15;
  x _gate_q_8;
  crz(0.9790413148449862) _gate_q_0, _gate_q_2;
  ryy_5105789760(4.23688692701713) _gate_q_4, _gate_q_9;
  t _gate_q_16;
  h _gate_q_1;
  z _gate_q_12;
  cu(5.862935788348939, 0.3395830201758927, 0.4986301804662207, 4.050406150537847) _gate_q_10, _gate_q_3;
  rz(0.003264958283040854) _gate_q_13;
  x _gate_q_6;
  rzz_5105786064(4.2630330922070705) _gate_q_5, _gate_q_3;
  csdg _gate_q_7, _gate_q_15;
  cx _gate_q_4, _gate_q_1;
  ecr _gate_q_16, _gate_q_9;
  crz(4.923598213221029) _gate_q_6, _gate_q_12;
  ch _gate_q_8, _gate_q_13;
  rxx_5105786544(1.2773312087749593) _gate_q_0, _gate_q_10;
  u1(4.487398921148563) _gate_q_11;
  y _gate_q_14;
  sxdg _gate_q_2;
}