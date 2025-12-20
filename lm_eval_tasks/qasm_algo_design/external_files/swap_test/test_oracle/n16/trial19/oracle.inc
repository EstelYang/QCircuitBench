gate r_5074359392(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.942228372355035, -0.9612919437717133, 0.9612919437717133) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5074370144(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.6975780344626116) _gate_q_0;
  u1(0.31141558312520534) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.3273355414894836, 0, -0.6975780344626116) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.3273355414894836, 0.38616245133740623, 0) _gate_q_1;
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
gate rzz_5074356608(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.508501002234008) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5074354784(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.5726568732113138) _gate_q_0;
  u1(-0.580658914244252) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9906879920898632, 0, -3.5726568732113138) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9906879920898632, 4.153315787455566, 0) _gate_q_1;
}
gate ryy_5074369424(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0502367148187024) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5074364384(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.8813970399920796) _gate_q_0;
  u1(1.4654381942954078) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.6481877458799266, 0, -3.8813970399920796) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.6481877458799266, 2.415958845696672, 0) _gate_q_1;
}
gate rzz_5074367120(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.9186880862766142) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074368896(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.3117706761923997) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.32128517686677116) _gate_q_1;
  ry(-0.32128517686677116) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.3117706761923997) _gate_q_0;
}
gate cu3_5074369904(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.979767940950289) _gate_q_0;
  u1(-0.303232432235653) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.80141807863825, 0, -4.979767940950289) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.80141807863825, 5.283000373185942, 0) _gate_q_1;
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
gate ryy_5074370384(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1234089990077205) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5084640560(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6082256832187166) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5084638736(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.7595999005881877) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.7595999005881877) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.7595999005881877) _gate_q_1;
}
gate rzz_5084634128(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.8320228154614335) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5084627888(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2424807987538755) _gate_q_0;
  u1(-2.4891699657114317) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5884194315445073, 0, -3.2424807987538755) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5884194315445073, 5.731650764465307, 0) _gate_q_1;
}
gate rzz_5084638784(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.787162388322945) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5084639216(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.61132083787427, -0.5782925011988655, 0.5782925011988655) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  crx(4.026574942706615) _gate_q_15, _gate_q_5;
  r_5074359392(4.942228372355035, 0.6095043830231832) _gate_q_6;
  crz(2.3570340636439253) _gate_q_13, _gate_q_12;
  cz _gate_q_8, _gate_q_11;
  iswap _gate_q_4, _gate_q_9;
  sdg _gate_q_14;
  u2(1.500547897326603, 1.3664901564628338) _gate_q_10;
  ch _gate_q_2, _gate_q_1;
  iswap _gate_q_3, _gate_q_0;
  x _gate_q_7;
  tdg _gate_q_0;
  z _gate_q_11;
  cry(1.1359874175665334) _gate_q_4, _gate_q_1;
  u1(2.826630622757004) _gate_q_14;
  cry(2.879989351510027) _gate_q_5, _gate_q_8;
  crz(2.0924295537307414) _gate_q_12, _gate_q_2;
  crz(6.2382083403131485) _gate_q_6, _gate_q_15;
  sdg _gate_q_10;
  rz(5.703959729511528) _gate_q_9;
  t _gate_q_7;
  cs _gate_q_3, _gate_q_13;
  sxdg _gate_q_7;
  U(3.3292518075553934, 5.443577697270911, 2.435261725323112) _gate_q_2;
  csdg _gate_q_9, _gate_q_15;
  csdg _gate_q_3, _gate_q_1;
  u1(0.3162367466465611) _gate_q_8;
  csdg _gate_q_11, _gate_q_10;
  iswap _gate_q_5, _gate_q_14;
  cz _gate_q_6, _gate_q_4;
  cs _gate_q_12, _gate_q_13;
  h _gate_q_0;
  crz(2.644199125794001) _gate_q_10, _gate_q_7;
  cu(0.5532558583350549, 1.361187084844636, 5.995910783949893, 1.9899987625353228) _gate_q_6, _gate_q_14;
  rz(2.760173495289836) _gate_q_0;
  tdg _gate_q_8;
  iswap _gate_q_5, _gate_q_9;
  z _gate_q_13;
  cry(4.791370023784951) _gate_q_2, _gate_q_4;
  x _gate_q_12;
  cu3_5074370144(4.654671082978967, 0.38616245133740623, 1.008993617587817) _gate_q_15, _gate_q_1;
  rz(3.0461626436870595) _gate_q_3;
  sx _gate_q_11;
  ecr _gate_q_0, _gate_q_6;
  y _gate_q_15;
  rzz_5074356608(4.508501002234008) _gate_q_11, _gate_q_8;
  cry(4.80346974569704) _gate_q_2, _gate_q_5;
  sx _gate_q_1;
  cu3_5074354784(3.9813759841797265, 4.153315787455566, 2.9919979589670618) _gate_q_14, _gate_q_3;
  ryy_5074369424(2.0502367148187024) _gate_q_4, _gate_q_9;
  cy _gate_q_10, _gate_q_12;
  cu3_5074364384(3.296375491759853, 2.415958845696672, 5.346835234287488) _gate_q_13, _gate_q_7;
  crz(1.966349854950869) _gate_q_0, _gate_q_13;
  U(0.6034425692388681, 3.796116149927772, 2.406259091996952) _gate_q_10;
  iswap _gate_q_7, _gate_q_5;
  rzz_5074367120(3.9186880862766142) _gate_q_8, _gate_q_2;
  xx_plus_yy_5074368896(0.6425703537335423, 1.3117706761923997) _gate_q_1, _gate_q_4;
  y _gate_q_9;
  U(0.5054890053225936, 4.819266199136946, 2.430402478420044) _gate_q_11;
  u3(2.228527873161387, 3.6455565274245614, 4.66526154035118) _gate_q_14;
  sx _gate_q_6;
  rz(1.836081756612924) _gate_q_3;
  cu3_5074369904(3.6028361572765, 5.283000373185942, 4.676535508714636) _gate_q_15, _gate_q_12;
  csx _gate_q_1, _gate_q_15;
  cu(2.7778543505013387, 5.085546935892939, 1.1452806740703267, 3.4435530967879804) _gate_q_11, _gate_q_2;
  csx _gate_q_12, _gate_q_9;
  cz _gate_q_3, _gate_q_4;
  ecr _gate_q_8, _gate_q_5;
  U(0.3926872843470381, 1.4158245939233705, 4.225324260313516) _gate_q_6;
  ry(2.2791004859313335) _gate_q_10;
  ry(6.282173774485185) _gate_q_14;
  cp(1.8671011163380864) _gate_q_0, _gate_q_13;
  id _gate_q_7;
  z _gate_q_10;
  ryy_5074370384(2.1234089990077205) _gate_q_7, _gate_q_11;
  cp(4.672806253154654) _gate_q_15, _gate_q_13;
  crz(2.478213734104127) _gate_q_12, _gate_q_1;
  sx _gate_q_2;
  cy _gate_q_9, _gate_q_0;
  cry(6.102241792300621) _gate_q_6, _gate_q_8;
  ecr _gate_q_5, _gate_q_4;
  t _gate_q_14;
  y _gate_q_3;
  rzx_5084640560(0.6082256832187166) _gate_q_8, _gate_q_10;
  ch _gate_q_6, _gate_q_4;
  cu(0.4836602172900375, 4.67519096539821, 1.5253569028482186, 4.623227925822317) _gate_q_2, _gate_q_3;
  swap _gate_q_0, _gate_q_12;
  sdg _gate_q_14;
  cu1_5084638736(5.519199801176375) _gate_q_1, _gate_q_13;
  cy _gate_q_11, _gate_q_9;
  s _gate_q_15;
  rzz_5084634128(1.8320228154614335) _gate_q_5, _gate_q_7;
  u1(1.4185920224549549) _gate_q_1;
  cx _gate_q_6, _gate_q_5;
  cu3_5084627888(5.1768388630890145, 5.731650764465307, 0.7533108330424442) _gate_q_10, _gate_q_3;
  U(3.5509762583271276, 3.338470903270897, 3.1896197047121446) _gate_q_8;
  u1(1.2447823411458325) _gate_q_9;
  rzz_5084638784(4.787162388322945) _gate_q_11, _gate_q_12;
  ch _gate_q_0, _gate_q_15;
  crz(5.8753705501419615) _gate_q_13, _gate_q_7;
  ry(1.2557983900495353) _gate_q_14;
  sxdg _gate_q_2;
  r_5084639216(2.61132083787427, 0.992503825596031) _gate_q_4;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_minus_yy_5084627312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.025684720357844) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5647874474715884) _gate_q_0;
  ry(-1.5647874474715884) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.025684720357844) _gate_q_1;
}
gate rxx_5084633984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1436870056218515) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5084628032(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.7784020617658878) _gate_q_0;
  u1(-0.8977234732022787) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.969654397474147, 0, -1.7784020617658878) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.969654397474147, 2.6761255349681665, 0) _gate_q_1;
}
gate cu1_5084637104(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.845779583482205) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.845779583482205) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.845779583482205) _gate_q_1;
}
gate xx_plus_yy_5084640896(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.066721821384528) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7166505765124243) _gate_q_1;
  ry(-0.7166505765124243) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.066721821384528) _gate_q_0;
}
gate rxx_5084640944(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.37178020913025267) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5084641088(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.770758757974832) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5084628464(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2793432484092215) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5084636528(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.0310701930635515) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5084636336(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.448243078128354) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5084630960(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.706708447932669) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5084634800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.0677646567075176) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0004453100539386) _gate_q_0;
  ry(-1.0004453100539386) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.0677646567075176) _gate_q_1;
}
gate cu3_5084635136(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.183206495112438) _gate_q_0;
  u1(-0.006850453429169789) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5012490253523898, 0, -4.183206495112438) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5012490253523898, 4.190056948541608, 0) _gate_q_1;
}
gate xx_minus_yy_5084634608(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.012811490375295) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.835950567108394) _gate_q_0;
  ry(-2.835950567108394) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.012811490375295) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  dcx _gate_q_10, _gate_q_6;
  csdg _gate_q_4, _gate_q_15;
  crx(1.6688775630373944) _gate_q_1, _gate_q_13;
  xx_minus_yy_5084627312(3.1295748949431768, 3.025684720357844) _gate_q_9, _gate_q_5;
  h _gate_q_0;
  rxx_5084633984(1.1436870056218515) _gate_q_7, _gate_q_3;
  h _gate_q_11;
  cry(5.563124000877815) _gate_q_8, _gate_q_2;
  crz(5.558698648386596) _gate_q_14, _gate_q_12;
  t _gate_q_4;
  swap _gate_q_0, _gate_q_10;
  p(4.954522544122961) _gate_q_3;
  ch _gate_q_12, _gate_q_1;
  cz _gate_q_13, _gate_q_6;
  cs _gate_q_15, _gate_q_2;
  cs _gate_q_5, _gate_q_14;
  cry(0.4422001753174625) _gate_q_8, _gate_q_9;
  x _gate_q_11;
  U(0.38023835772388337, 0.19859752523143465, 1.5318082408501184) _gate_q_7;
  rx(2.9091233368034115) _gate_q_3;
  p(2.8199049468904036) _gate_q_9;
  csx _gate_q_5, _gate_q_15;
  u3(2.1899156377486912, 5.092729206236818, 3.980007769157386) _gate_q_7;
  h _gate_q_8;
  cy _gate_q_2, _gate_q_12;
  u1(2.394794398674548) _gate_q_14;
  cx _gate_q_1, _gate_q_6;
  iswap _gate_q_0, _gate_q_11;
  ry(1.3294912959911016) _gate_q_4;
  cy _gate_q_13, _gate_q_10;
  p(3.1828952198450904) _gate_q_12;
  ecr _gate_q_4, _gate_q_10;
  h _gate_q_6;
  cu3_5084628032(5.939308794948294, 2.6761255349681665, 0.8806785885636091) _gate_q_1, _gate_q_7;
  p(4.42589872330292) _gate_q_2;
  tdg _gate_q_8;
  sxdg _gate_q_9;
  cu1_5084637104(3.69155916696441) _gate_q_15, _gate_q_0;
  rz(5.283158860717798) _gate_q_5;
  csx _gate_q_11, _gate_q_14;
  u1(6.104607428876574) _gate_q_13;
  ry(0.2598697580935773) _gate_q_3;
  y _gate_q_11;
  p(6.2148753389856575) _gate_q_12;
  id _gate_q_4;
  x _gate_q_6;
  crx(0.5836082587702442) _gate_q_5, _gate_q_15;
  tdg _gate_q_3;
  crx(3.702865387985767) _gate_q_0, _gate_q_1;
  iswap _gate_q_10, _gate_q_8;
  sdg _gate_q_7;
  tdg _gate_q_14;
  x _gate_q_13;
  ecr _gate_q_2, _gate_q_9;
  swap _gate_q_0, _gate_q_5;
  xx_plus_yy_5084640896(1.4333011530248485, 5.066721821384528) _gate_q_4, _gate_q_11;
  U(3.0459342462456105, 0.17237988403118262, 3.4826234253973647) _gate_q_9;
  rxx_5084640944(0.37178020913025267) _gate_q_13, _gate_q_14;
  s _gate_q_15;
  iswap _gate_q_10, _gate_q_12;
  csdg _gate_q_3, _gate_q_2;
  sx _gate_q_8;
  z _gate_q_1;
  crz(4.26507753205991) _gate_q_6, _gate_q_7;
  csdg _gate_q_8, _gate_q_11;
  ry(1.9041399970125832) _gate_q_13;
  cp(1.2898939847459507) _gate_q_4, _gate_q_10;
  crx(5.975552167643373) _gate_q_7, _gate_q_3;
  rzz_5084641088(3.770758757974832) _gate_q_0, _gate_q_2;
  ryy_5084628464(3.2793432484092215) _gate_q_15, _gate_q_6;
  ryy_5084636528(4.0310701930635515) _gate_q_1, _gate_q_14;
  cs _gate_q_12, _gate_q_5;
  id _gate_q_9;
  cs _gate_q_11, _gate_q_2;
  p(4.164192416135856) _gate_q_10;
  sxdg _gate_q_14;
  ryy_5084636336(5.448243078128354) _gate_q_6, _gate_q_8;
  cu(2.3979879293415705, 5.975106714787083, 4.99291152815739, 1.337309851378984) _gate_q_7, _gate_q_0;
  s _gate_q_1;
  sdg _gate_q_4;
  rzz_5084630960(4.706708447932669) _gate_q_13, _gate_q_15;
  swap _gate_q_12, _gate_q_9;
  ry(4.461405493952302) _gate_q_3;
  u1(2.9515129172167853) _gate_q_5;
  u2(4.077439505139679, 1.9226620057343662) _gate_q_2;
  xx_minus_yy_5084634800(2.000890620107877, 3.0677646567075176) _gate_q_9, _gate_q_5;
  dcx _gate_q_1, _gate_q_11;
  rz(5.311576814269621) _gate_q_0;
  cy _gate_q_12, _gate_q_3;
  cu(5.857456465958528, 0.5825023677735117, 1.2449956574905758, 4.0004052331176) _gate_q_6, _gate_q_14;
  cs _gate_q_8, _gate_q_4;
  cz _gate_q_10, _gate_q_7;
  cu3_5084635136(3.0024980507047796, 4.190056948541608, 4.176356041683269) _gate_q_15, _gate_q_13;
  rz(3.6112247814511984) _gate_q_7;
  cy _gate_q_2, _gate_q_12;
  crz(1.711460623948663) _gate_q_14, _gate_q_9;
  sxdg _gate_q_10;
  xx_minus_yy_5084634608(5.671901134216788, 5.012811490375295) _gate_q_0, _gate_q_15;
  sxdg _gate_q_5;
  ry(3.6544889493854114) _gate_q_3;
  crx(3.8535355169730243) _gate_q_13, _gate_q_4;
  id _gate_q_1;
  u3(0.9730723906606707, 5.791398092380719, 3.6040981118364153) _gate_q_11;
  swap _gate_q_6, _gate_q_8;
}