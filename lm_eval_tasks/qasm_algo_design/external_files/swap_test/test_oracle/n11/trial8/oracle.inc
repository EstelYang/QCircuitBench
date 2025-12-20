gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5104445408(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.0728337878462657) _gate_q_0;
  u1(1.2634091701090169) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9665304677659857, 0, -2.0728337878462657) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9665304677659857, 0.8094246177372488, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5104443344(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3537240867591456) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5104451504(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.186267992220084) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5104446896(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.6859031837290984) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6797139035426207) _gate_q_0;
  ry(-2.6797139035426207) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.6859031837290984) _gate_q_1;
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
gate xx_minus_yy_5104439216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.8414741348962596) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9965904570763446) _gate_q_0;
  ry(-1.9965904570763446) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.8414741348962596) _gate_q_1;
}
gate r_5104445360(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.7632070619375195, 1.6790813419186033, -1.6790813419186033) _gate_q_0;
}
gate rzz_5104443248(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.5530698384134878) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5104447280(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.268876470411308, 1.3713808458993961, -1.3713808458993961) _gate_q_0;
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
gate ryy_5104444016(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.099956748294104) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5104450160(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.791167289448438, 3.6382201483569006, -3.6382201483569006) _gate_q_0;
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
gate rzx_5104448432(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4679397937705787) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5104437632(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8571776617089703) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5104435616(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.063521678225559) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5105780016(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.774923334756051) _gate_q_0;
  u1(-1.398331971053604) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.9994167969724916, 0, -3.774923334756051) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.9994167969724916, 5.173255305809655, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  U(0.3225844584845835, 0.14223379110456325, 0.37139164607248587) _gate_q_1;
  cs _gate_q_10, _gate_q_3;
  cp(0.4391583084046026) _gate_q_6, _gate_q_0;
  cu3_5104445408(1.9330609355319714, 0.8094246177372488, 3.3362429579552826) _gate_q_2, _gate_q_9;
  u3(2.631998120627478, 0.6349777562982645, 5.774030887700284) _gate_q_7;
  y _gate_q_4;
  sx _gate_q_5;
  ry(5.182879197061827) _gate_q_8;
  x _gate_q_8;
  sx _gate_q_7;
  x _gate_q_9;
  iswap _gate_q_1, _gate_q_10;
  id _gate_q_5;
  ch _gate_q_6, _gate_q_3;
  x _gate_q_2;
  ryy_5104443344(1.3537240867591456) _gate_q_0, _gate_q_4;
  rzx_5104451504(2.186267992220084) _gate_q_8, _gate_q_0;
  p(0.9971405559803425) _gate_q_6;
  u1(3.3998221735110477) _gate_q_4;
  cs _gate_q_3, _gate_q_2;
  t _gate_q_5;
  xx_minus_yy_5104446896(5.3594278070852415, 0.6859031837290984) _gate_q_1, _gate_q_7;
  cry(4.617650747552516) _gate_q_10, _gate_q_9;
  csdg _gate_q_0, _gate_q_5;
  U(1.1508420556208543, 1.7290049489518997, 2.8570209584153234) _gate_q_3;
  dcx _gate_q_4, _gate_q_9;
  cx _gate_q_7, _gate_q_2;
  xx_minus_yy_5104439216(3.9931809141526893, 1.8414741348962596) _gate_q_10, _gate_q_6;
  rx(3.978290555684618) _gate_q_8;
  z _gate_q_1;
  r_5104445360(5.7632070619375195, 3.2498776687135) _gate_q_2;
  rzz_5104443248(1.5530698384134878) _gate_q_6, _gate_q_10;
  sxdg _gate_q_4;
  dcx _gate_q_5, _gate_q_7;
  r_5104447280(1.268876470411308, 2.9421771726942927) _gate_q_1;
  tdg _gate_q_3;
  sdg _gate_q_0;
  t _gate_q_9;
  ry(3.1145657155350106) _gate_q_8;
  csx _gate_q_5, _gate_q_10;
  ryy_5104444016(6.099956748294104) _gate_q_2, _gate_q_8;
  iswap _gate_q_0, _gate_q_6;
  iswap _gate_q_3, _gate_q_1;
  r_5104450160(5.791167289448438, 5.209016475151797) _gate_q_9;
  u1(4.924637887772786) _gate_q_7;
  sx _gate_q_4;
  csx _gate_q_10, _gate_q_5;
  ecr _gate_q_1, _gate_q_8;
  U(4.445408054468918, 0.3944888799484809, 6.1810026095249295) _gate_q_3;
  cs _gate_q_4, _gate_q_0;
  ry(2.529993607207748) _gate_q_9;
  cx _gate_q_7, _gate_q_2;
  U(2.3940758967200613, 1.4153688877668067, 1.2221445239618953) _gate_q_6;
  dcx _gate_q_1, _gate_q_7;
  U(0.25996704643900315, 1.4056782295385761, 5.840270725860203) _gate_q_8;
  ry(0.9963296554803516) _gate_q_3;
  iswap _gate_q_9, _gate_q_5;
  rzx_5104448432(1.4679397937705787) _gate_q_0, _gate_q_4;
  sdg _gate_q_10;
  z _gate_q_6;
  u3(0.3493008941144507, 4.5472026010692, 5.337294374163207) _gate_q_2;
  h _gate_q_4;
  cy _gate_q_8, _gate_q_1;
  swap _gate_q_7, _gate_q_3;
  ecr _gate_q_10, _gate_q_0;
  ry(5.241698675614475) _gate_q_9;
  u3(5.410616033093243, 4.159160276858223, 3.5463050273273935) _gate_q_6;
  csdg _gate_q_5, _gate_q_2;
  u2(1.4035214727903602, 4.02323858562882) _gate_q_8;
  s _gate_q_4;
  ryy_5104437632(0.8571776617089703) _gate_q_9, _gate_q_10;
  u2(2.9525322711220285, 5.879056519245551) _gate_q_2;
  rxx_5104435616(3.063521678225559) _gate_q_6, _gate_q_3;
  u2(4.860525058370863, 4.074523078870637) _gate_q_7;
  cu3_5105780016(5.998833593944983, 5.173255305809655, 2.376591363702447) _gate_q_1, _gate_q_5;
  h _gate_q_0;
}
gate r_5105790096(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.5467207638397762, -0.3444927087942813, 0.3444927087942813) _gate_q_0;
}
gate xx_plus_yy_5105783040(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.0610211035309876) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6490219002851043) _gate_q_1;
  ry(-1.6490219002851043) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.0610211035309876) _gate_q_0;
}
gate cu1_5105780448(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.0123920860441307) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.0123920860441307) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.0123920860441307) _gate_q_1;
}
gate rzx_5105789328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.400105934105354) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5105783424(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.572395021887348) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9950480969079063) _gate_q_1;
  ry(-1.9950480969079063) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.572395021887348) _gate_q_0;
}
gate rzx_5105782272(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.18239734684661) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5105785296(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.027175911059204198) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5105790720(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.23241629219567464) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5105793840(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.1018758082446294) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1005243484285112) _gate_q_0;
  ry(-1.1005243484285112) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.1018758082446294) _gate_q_1;
}
gate cu3_5105783856(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.11269235539517684) _gate_q_0;
  u1(0.054430564402135215) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8754365372884851, 0, -0.11269235539517684) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8754365372884851, 0.05826179099304162, 0) _gate_q_1;
}
gate rzx_5104448864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4944117195462137) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5105789712(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.795310293932961) _gate_q_0;
  u1(-0.5969947461955831) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.9432687743295447, 0, -4.795310293932961) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.9432687743295447, 5.392305040128544, 0) _gate_q_1;
}
gate rzx_5105779392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.020608218656731) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5106120176(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.679441408446627) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.67795620041289) _gate_q_1;
  ry(-1.67795620041289) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.679441408446627) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  cz _gate_q_1, _gate_q_2;
  cz _gate_q_3, _gate_q_9;
  h _gate_q_7;
  csdg _gate_q_5, _gate_q_10;
  u3(1.2867638602000324, 2.0287528517465625, 1.6669619441902936) _gate_q_0;
  u3(4.258663967840765, 0.46775570773102093, 5.293618651402336) _gate_q_4;
  z _gate_q_6;
  U(2.2520801152075314, 5.381041671980563, 3.141918152737215) _gate_q_8;
  r_5105790096(1.5467207638397762, 1.2263036180006153) _gate_q_2;
  xx_plus_yy_5105783040(3.2980438005702086, 2.0610211035309876) _gate_q_5, _gate_q_10;
  u1(0.2808258343563665) _gate_q_0;
  cu1_5105780448(4.024784172088261) _gate_q_9, _gate_q_6;
  rzx_5105789328(4.400105934105354) _gate_q_8, _gate_q_4;
  sdg _gate_q_1;
  h _gate_q_7;
  h _gate_q_3;
  csx _gate_q_1, _gate_q_0;
  xx_plus_yy_5105783424(3.9900961938158126, 3.572395021887348) _gate_q_3, _gate_q_5;
  U(1.1686699503564748, 6.142271046790013, 0.10091313263631861) _gate_q_10;
  y _gate_q_4;
  h _gate_q_6;
  rx(0.1017240341883504) _gate_q_7;
  iswap _gate_q_8, _gate_q_9;
  p(1.6043073432441681) _gate_q_2;
  x _gate_q_4;
  rzx_5105782272(4.18239734684661) _gate_q_2, _gate_q_3;
  p(3.8888273938405153) _gate_q_5;
  rzz_5105785296(0.027175911059204198) _gate_q_9, _gate_q_1;
  s _gate_q_7;
  rx(0.18837417044817598) _gate_q_6;
  cu(3.58104515540418, 0.9724074822231898, 2.8952869022400445, 0.6859999938132573) _gate_q_8, _gate_q_10;
  u2(2.5746297800887885, 5.512955408461855) _gate_q_0;
  cx _gate_q_1, _gate_q_10;
  swap _gate_q_5, _gate_q_4;
  id _gate_q_2;
  y _gate_q_8;
  cp(5.663564462198014) _gate_q_0, _gate_q_7;
  crz(5.076725612304809) _gate_q_6, _gate_q_3;
  sx _gate_q_9;
  h _gate_q_1;
  crx(6.087518592273698) _gate_q_8, _gate_q_4;
  ryy_5105790720(0.23241629219567464) _gate_q_7, _gate_q_6;
  cry(4.08408025094453) _gate_q_2, _gate_q_10;
  sdg _gate_q_5;
  rx(1.4022178477219651) _gate_q_9;
  u1(5.787124336933097) _gate_q_0;
  ry(2.3278091059157053) _gate_q_3;
  xx_minus_yy_5105793840(2.2010486968570224, 1.1018758082446294) _gate_q_9, _gate_q_4;
  cry(3.752352298913381) _gate_q_8, _gate_q_3;
  ecr _gate_q_10, _gate_q_7;
  rx(0.7810594966877638) _gate_q_6;
  h _gate_q_1;
  cs _gate_q_2, _gate_q_5;
  id _gate_q_0;
  ch _gate_q_9, _gate_q_6;
  cu3_5105783856(3.7508730745769703, 0.05826179099304162, 0.16712291979731206) _gate_q_3, _gate_q_7;
  s _gate_q_4;
  rzx_5104448864(2.4944117195462137) _gate_q_8, _gate_q_2;
  iswap _gate_q_10, _gate_q_1;
  cu3_5105789712(5.886537548659089, 5.392305040128544, 4.198315547737378) _gate_q_5, _gate_q_0;
  crx(3.592337453067398) _gate_q_1, _gate_q_10;
  t _gate_q_8;
  iswap _gate_q_9, _gate_q_4;
  U(1.6922429436340958, 4.441315683585276, 0.09681119989397775) _gate_q_6;
  u1(3.555412097846485) _gate_q_2;
  sx _gate_q_0;
  z _gate_q_5;
  x _gate_q_3;
  sdg _gate_q_7;
  dcx _gate_q_1, _gate_q_5;
  rzx_5105779392(3.020608218656731) _gate_q_10, _gate_q_2;
  cz _gate_q_8, _gate_q_9;
  U(5.13062041355893, 2.1032170234122183, 0.9433460097820051) _gate_q_7;
  crx(1.934181530919702) _gate_q_0, _gate_q_3;
  xx_plus_yy_5106120176(3.35591240082578, 4.679441408446627) _gate_q_6, _gate_q_4;
}