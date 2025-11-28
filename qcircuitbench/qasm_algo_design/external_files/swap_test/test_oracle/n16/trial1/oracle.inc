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
gate cu3_5106022352(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.708275136613047) _gate_q_0;
  u1(-0.9919202770638509) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9974188596822706, 0, -3.708275136613047) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9974188596822706, 4.700195413676898, 0) _gate_q_1;
}
gate rzx_5106020672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.74482979343848) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5106017552(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.5415908443787816, 4.007195504643826, -4.007195504643826) _gate_q_0;
}
gate ryy_5106010352(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.002861786598035) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5106021296(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.667309688193726) _gate_q_0;
  u1(1.2980553204732632) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.0767805460926128, 0, -3.667309688193726) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.0767805460926128, 2.3692543677204627, 0) _gate_q_1;
}
gate rxx_5106015008(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.195207848866817) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5106024416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6857505639139223) _gate_q_1;
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
gate ryy_5106014480(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.2056904621187851) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5106012080(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.225707443259513) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.225707443259513) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.225707443259513) _gate_q_1;
}
gate cu1_5106013040(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.9195609227094828) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.9195609227094828) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.9195609227094828) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rxx_5106016112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3916417370482597) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5106008624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.900490500931069) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.48141336302625504) _gate_q_1;
  ry(-0.48141336302625504) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.900490500931069) _gate_q_0;
}
gate xx_plus_yy_5106016640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.884164213931252) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8435306847132273) _gate_q_1;
  ry(-1.8435306847132273) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.884164213931252) _gate_q_0;
}
gate xx_plus_yy_5106017360(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.25206021754991015) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5180971353744506) _gate_q_1;
  ry(-1.5180971353744506) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.25206021754991015) _gate_q_0;
}
gate rzx_5106022160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.198248766188604) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5106012512(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.7603564461893055) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9894402756083968) _gate_q_0;
  ry(-0.9894402756083968) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.7603564461893055) _gate_q_1;
}
gate cu3_5106017792(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.5695439740424897) _gate_q_0;
  u1(-2.004737348514034) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8044717657789863, 0, -3.5695439740424897) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8044717657789863, 5.574281322556524, 0) _gate_q_1;
}
gate ryy_5106011552(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3513147652836484) _gate_q_1;
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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  sdg _gate_q_10;
  u2(1.6580366098956354, 0.5649339011744219) _gate_q_11;
  cy _gate_q_5, _gate_q_3;
  id _gate_q_6;
  csx _gate_q_12, _gate_q_15;
  s _gate_q_14;
  cu3_5106022352(1.9948377193645412, 4.700195413676898, 2.716354859549196) _gate_q_7, _gate_q_4;
  s _gate_q_2;
  tdg _gate_q_8;
  rzx_5106020672(4.74482979343848) _gate_q_0, _gate_q_1;
  rz(2.932839885739567) _gate_q_13;
  p(4.240490943662171) _gate_q_9;
  r_5106017552(0.5415908443787816, 5.577991831438722) _gate_q_9;
  ryy_5106010352(6.002861786598035) _gate_q_10, _gate_q_1;
  cu3_5106021296(4.1535610921852255, 2.3692543677204627, 4.965365008666989) _gate_q_4, _gate_q_8;
  s _gate_q_13;
  s _gate_q_7;
  u2(1.3102241521852438, 2.2751566905325706) _gate_q_2;
  cy _gate_q_0, _gate_q_12;
  rxx_5106015008(5.195207848866817) _gate_q_15, _gate_q_5;
  cu(5.402296733760101, 0.7125628323973812, 5.870963952431277, 3.995353153919618) _gate_q_11, _gate_q_3;
  cry(3.5655227828396527) _gate_q_6, _gate_q_14;
  cry(4.704893178878874) _gate_q_2, _gate_q_9;
  rzx_5106024416(1.6857505639139223) _gate_q_5, _gate_q_7;
  rx(4.70448310350016) _gate_q_4;
  ecr _gate_q_15, _gate_q_3;
  ry(2.0208453171948193) _gate_q_10;
  ryy_5106014480(0.2056904621187851) _gate_q_8, _gate_q_0;
  rx(2.078370255887708) _gate_q_14;
  cu1_5106012080(2.451414886519026) _gate_q_12, _gate_q_13;
  ch _gate_q_6, _gate_q_1;
  sdg _gate_q_11;
  cu1_5106013040(5.8391218454189655) _gate_q_13, _gate_q_0;
  s _gate_q_15;
  dcx _gate_q_11, _gate_q_2;
  iswap _gate_q_7, _gate_q_4;
  cry(5.667898312101047) _gate_q_9, _gate_q_3;
  sxdg _gate_q_14;
  u3(0.7815496711510947, 0.9817227890027934, 2.420513871489221) _gate_q_5;
  ch _gate_q_12, _gate_q_8;
  rxx_5106016112(2.3916417370482597) _gate_q_10, _gate_q_1;
  sxdg _gate_q_6;
  cry(4.630998001166793) _gate_q_5, _gate_q_14;
  cy _gate_q_10, _gate_q_13;
  cry(5.274655474069182) _gate_q_7, _gate_q_8;
  cz _gate_q_11, _gate_q_4;
  tdg _gate_q_3;
  cy _gate_q_9, _gate_q_0;
  ch _gate_q_12, _gate_q_15;
  p(5.765779334505866) _gate_q_1;
  xx_plus_yy_5106008624(0.9628267260525101, 4.900490500931069) _gate_q_6, _gate_q_2;
  xx_plus_yy_5106016640(3.6870613694264547, 4.884164213931252) _gate_q_2, _gate_q_1;
  cz _gate_q_3, _gate_q_10;
  rz(5.835928460823079) _gate_q_12;
  x _gate_q_8;
  tdg _gate_q_15;
  xx_plus_yy_5106017360(3.036194270748901, 0.25206021754991015) _gate_q_14, _gate_q_6;
  cx _gate_q_11, _gate_q_7;
  cu(4.605212228014308, 1.1317359210464972, 2.448189365677899, 2.1473899839647888) _gate_q_4, _gate_q_9;
  ecr _gate_q_0, _gate_q_5;
  sxdg _gate_q_13;
  sdg _gate_q_7;
  p(2.0744911241670727) _gate_q_14;
  p(5.04087071031819) _gate_q_1;
  cy _gate_q_8, _gate_q_0;
  rzx_5106022160(1.198248766188604) _gate_q_6, _gate_q_10;
  xx_minus_yy_5106012512(1.9788805512167935, 1.7603564461893055) _gate_q_13, _gate_q_5;
  U(1.4274252456446246, 4.233844264662394, 5.185776216568953) _gate_q_15;
  u2(5.500601443001378, 1.4302147223565713) _gate_q_4;
  tdg _gate_q_2;
  cp(1.2434452923844608) _gate_q_11, _gate_q_12;
  t _gate_q_9;
  U(5.307455138262446, 4.1458329910462295, 3.736021492588399) _gate_q_3;
  cu3_5106017792(1.6089435315579725, 5.574281322556524, 1.5648066255284554) _gate_q_0, _gate_q_15;
  s _gate_q_1;
  cz _gate_q_2, _gate_q_14;
  z _gate_q_8;
  cp(0.4052723270568003) _gate_q_3, _gate_q_13;
  u3(0.6134559988991821, 6.013111195622376, 2.4039754088286527) _gate_q_12;
  ryy_5106011552(2.3513147652836484) _gate_q_4, _gate_q_11;
  sxdg _gate_q_6;
  u3(2.9847450904449184, 3.227240451982855, 0.4107307275121051) _gate_q_5;
  tdg _gate_q_7;
  dcx _gate_q_10, _gate_q_9;
  s _gate_q_10;
  cp(5.722119744526943) _gate_q_6, _gate_q_1;
  cs _gate_q_9, _gate_q_14;
  u2(0.6434833999446884, 2.5174635210310834) _gate_q_8;
  id _gate_q_4;
  s _gate_q_2;
  p(5.195919155824138) _gate_q_13;
  csdg _gate_q_5, _gate_q_0;
  csx _gate_q_15, _gate_q_7;
  u2(2.335523544340571, 5.57422875347961) _gate_q_11;
  crz(3.947216352281227) _gate_q_3, _gate_q_12;
  tdg _gate_q_4;
  tdg _gate_q_7;
  swap _gate_q_15, _gate_q_8;
  s _gate_q_3;
  sx _gate_q_12;
  cx _gate_q_13, _gate_q_2;
  csdg _gate_q_10, _gate_q_1;
  crz(3.5286903812661428) _gate_q_5, _gate_q_14;
  cs _gate_q_11, _gate_q_0;
  z _gate_q_9;
  sdg _gate_q_6;
}
gate r_5106021056(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.1462288912099736, 1.5800543062345183, -1.5800543062345183) _gate_q_0;
}
gate xx_minus_yy_5106012800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.922312527883321) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.46993076194182165) _gate_q_0;
  ry(-0.46993076194182165) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.922312527883321) _gate_q_1;
}
gate cu1_5106022640(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.7010377599240625) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.7010377599240625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.7010377599240625) _gate_q_1;
}
gate rzx_5106024224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.766778349495808) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5106011456(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.1877072022998174) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9346635777971) _gate_q_1;
  ry(-1.9346635777971) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.1877072022998174) _gate_q_0;
}
gate rxx_5106023408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.291154981015689) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5106021104(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.1850398957170745, -0.1699205798585448, 0.1699205798585448) _gate_q_0;
}
gate ryy_5106010208(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.154184356347302) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5106009056(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.253694016851698) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5106021536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7387241454960574) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5106018416(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.07402329718370233, 3.1393933623939434, -3.1393933623939434) _gate_q_0;
}
gate ryy_5106015920(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8280248374599277) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105779488(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.04043262214244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105781696(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.899620840010766, 4.493845670668476, -4.493845670668476) _gate_q_0;
}
gate rzx_5105786208(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6090385560508857) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105793360(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.028531130350156) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5105779728(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.32771569646513404) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5105779344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.250656181650856) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5105785584(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.278590709347088) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.278590709347088) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.278590709347088) _gate_q_1;
}
gate rzz_5105791056(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.9007266230208342) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5105785872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.146448135957347) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3628930628544493) _gate_q_0;
  ry(-1.3628930628544493) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.146448135957347) _gate_q_1;
}
gate rzz_5105785248(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.897365894504879) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  r_5106021056(3.1462288912099736, 3.150850633029415) _gate_q_8;
  U(4.7372647662417675, 2.58429586163577, 3.5696780884667803) _gate_q_7;
  ch _gate_q_5, _gate_q_15;
  xx_minus_yy_5106012800(0.9398615238836433, 4.922312527883321) _gate_q_9, _gate_q_4;
  sxdg _gate_q_0;
  sxdg _gate_q_6;
  cu1_5106022640(3.402075519848125) _gate_q_12, _gate_q_14;
  iswap _gate_q_11, _gate_q_13;
  dcx _gate_q_2, _gate_q_1;
  cu(2.0801595565171302, 3.112981834304934, 2.3023817643433717, 2.2841474797714367) _gate_q_3, _gate_q_10;
  cry(4.542443998905383) _gate_q_0, _gate_q_13;
  cs _gate_q_14, _gate_q_4;
  cu(5.577587535964504, 5.989492661536353, 4.17918394053137, 4.760148140678062) _gate_q_3, _gate_q_2;
  id _gate_q_8;
  u1(4.456524059603474) _gate_q_12;
  crz(2.3465509161472267) _gate_q_10, _gate_q_7;
  ry(2.968945550909833) _gate_q_15;
  z _gate_q_1;
  iswap _gate_q_9, _gate_q_5;
  U(4.470975099303754, 3.47670032284539, 3.1327398515802907) _gate_q_11;
  sxdg _gate_q_6;
  rzx_5106024224(5.766778349495808) _gate_q_3, _gate_q_13;
  sx _gate_q_6;
  crz(0.5396229498891975) _gate_q_14, _gate_q_7;
  cu(4.913732521623311, 4.2184826277267256, 5.0014167941935455, 0.05812078683313732) _gate_q_0, _gate_q_10;
  xx_plus_yy_5106011456(3.8693271555942, 3.1877072022998174) _gate_q_2, _gate_q_4;
  sxdg _gate_q_9;
  ry(3.3714714576681835) _gate_q_11;
  y _gate_q_15;
  h _gate_q_8;
  rxx_5106023408(5.291154981015689) _gate_q_12, _gate_q_1;
  s _gate_q_5;
  cx _gate_q_14, _gate_q_4;
  crx(1.7041212459096222) _gate_q_10, _gate_q_7;
  csdg _gate_q_13, _gate_q_12;
  t _gate_q_9;
  r_5106021104(2.1850398957170745, 1.4008757469363518) _gate_q_6;
  ch _gate_q_5, _gate_q_3;
  crx(6.2571437320658) _gate_q_2, _gate_q_0;
  cp(4.03702199922738) _gate_q_1, _gate_q_11;
  sxdg _gate_q_8;
  id _gate_q_15;
  u3(1.7800641253996872, 6.14458283254926, 4.99187015453414) _gate_q_12;
  ryy_5106010208(6.154184356347302) _gate_q_13, _gate_q_14;
  ryy_5106009056(2.253694016851698) _gate_q_10, _gate_q_11;
  ry(3.175901951822472) _gate_q_3;
  sxdg _gate_q_2;
  rxx_5106021536(1.7387241454960574) _gate_q_8, _gate_q_15;
  cp(5.960774312316713) _gate_q_1, _gate_q_0;
  csdg _gate_q_4, _gate_q_7;
  r_5106018416(0.07402329718370233, 4.71018968918884) _gate_q_5;
  s _gate_q_6;
  s _gate_q_9;
  tdg _gate_q_13;
  cx _gate_q_0, _gate_q_9;
  ryy_5106015920(3.8280248374599277) _gate_q_6, _gate_q_14;
  U(3.3288145043181694, 0.6557197882885387, 1.1371226125765883) _gate_q_4;
  u2(1.7694550892388012, 0.6448134649059429) _gate_q_8;
  cu(5.645355002552652, 1.3916098398821, 3.425743974862112, 3.46361337121457) _gate_q_11, _gate_q_3;
  u2(5.6205075894692555, 1.2989239984808851) _gate_q_10;
  dcx _gate_q_2, _gate_q_12;
  u2(3.6685391970632772, 6.018495543557921) _gate_q_5;
  ryy_5105779488(5.04043262214244) _gate_q_7, _gate_q_15;
  rz(5.872071024442348) _gate_q_1;
  ry(1.178344799309487) _gate_q_13;
  dcx _gate_q_9, _gate_q_6;
  t _gate_q_0;
  cy _gate_q_1, _gate_q_11;
  r_5105781696(3.899620840010766, 6.064641997463372) _gate_q_7;
  cx _gate_q_5, _gate_q_2;
  csx _gate_q_14, _gate_q_12;
  rzx_5105786208(3.6090385560508857) _gate_q_10, _gate_q_3;
  ryy_5105793360(1.028531130350156) _gate_q_8, _gate_q_4;
  y _gate_q_15;
  rz(4.234372996149525) _gate_q_9;
  rzx_5105779728(0.32771569646513404) _gate_q_2, _gate_q_4;
  ch _gate_q_8, _gate_q_13;
  rxx_5105779344(6.250656181650856) _gate_q_5, _gate_q_15;
  cu1_5105785584(2.557181418694176) _gate_q_11, _gate_q_10;
  u2(4.40843625468194, 4.9093574814688) _gate_q_1;
  cry(0.8792415282206566) _gate_q_3, _gate_q_7;
  rz(6.2757838370745045) _gate_q_14;
  u2(4.384556046658674, 0.47456614067296404) _gate_q_12;
  u2(2.1444978435639195, 3.0436921118896283) _gate_q_6;
  t _gate_q_0;
  u2(2.531656334442619, 5.505997217842926) _gate_q_5;
  csdg _gate_q_8, _gate_q_12;
  rzz_5105791056(1.9007266230208342) _gate_q_7, _gate_q_2;
  sxdg _gate_q_15;
  cry(4.79347526960999) _gate_q_13, _gate_q_0;
  h _gate_q_10;
  y _gate_q_6;
  cx _gate_q_11, _gate_q_4;
  cz _gate_q_3, _gate_q_1;
  p(0.5226511596599293) _gate_q_9;
  u1(2.5740488213202632) _gate_q_14;
  dcx _gate_q_8, _gate_q_14;
  xx_minus_yy_5105785872(2.7257861257088987, 5.146448135957347) _gate_q_13, _gate_q_3;
  ch _gate_q_5, _gate_q_9;
  cz _gate_q_12, _gate_q_0;
  ecr _gate_q_1, _gate_q_7;
  t _gate_q_4;
  tdg _gate_q_15;
  u3(5.88693896814242, 2.3555299716328895, 6.178517556131497) _gate_q_10;
  h _gate_q_6;
  rzz_5105785248(3.897365894504879) _gate_q_11, _gate_q_2;
}