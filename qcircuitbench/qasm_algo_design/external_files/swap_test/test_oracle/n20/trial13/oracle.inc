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
gate xx_minus_yy_5074426080(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.8182114213409843) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6723352236255153) _gate_q_0;
  ry(-2.6723352236255153) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.8182114213409843) _gate_q_1;
}
gate rzz_5074429056(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.128670155541329) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu1_5074427760(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4781031328753609) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4781031328753609) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4781031328753609) _gate_q_1;
}
gate cu3_5074275648(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.772945017652318) _gate_q_0;
  u1(1.7228618054809883) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.442640722762521, 0, -3.772945017652318) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.442640722762521, 2.0500832121713297, 0) _gate_q_1;
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
gate rxx_5074427040(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8940636182515154) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5074424016(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.3911838795044544) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.18314386886375628) _gate_q_1;
  ry(-0.18314386886375628) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.3911838795044544) _gate_q_0;
}
gate rxx_5074426848(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0091855942249035) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074427808(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.9574830576554647, 3.5370511363243455, -3.5370511363243455) _gate_q_0;
}
gate xx_minus_yy_5074423680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.426791463280762) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5289215995420677) _gate_q_0;
  ry(-0.5289215995420677) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.426791463280762) _gate_q_1;
}
gate xx_minus_yy_5074430880(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.018600542454302) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.1360074756619345) _gate_q_0;
  ry(-3.1360074756619345) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.018600542454302) _gate_q_1;
}
gate r_5074422960(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.994711571026876, -1.3865779194993135, 1.3865779194993135) _gate_q_0;
}
gate rzx_5074767648(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.471602333962103) _gate_q_1;
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
gate cu1_5074435584(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8523402730282827) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8523402730282827) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8523402730282827) _gate_q_1;
}
gate rxx_5074421520(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.965523118821844) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate ryy_5074423056(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0642475221203256) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5074420800(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.0797468554208143) _gate_q_0;
  u1(0.25535541190773414) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5453278204300079, 0, -1.0797468554208143) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5453278204300079, 0.8243914435130801, 0) _gate_q_1;
}
gate xx_minus_yy_5074427952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.799841641986533) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.859838484201333) _gate_q_0;
  ry(-0.859838484201333) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.799841641986533) _gate_q_1;
}
gate rzz_5074425072(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.1594028114161061) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5074425792(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.316961768689866) _gate_q_0;
  u1(-0.14034448757637108) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.227836005607185, 0, -2.316961768689866) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.227836005607185, 2.457306256266237, 0) _gate_q_1;
}
gate rzz_5072766208(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.342390348836711) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5072767744(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.08884769883111952) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5072772640(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.875460038889367) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.875460038889367) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.875460038889367) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  cs _gate_q_12, _gate_q_4;
  u2(0.23307020385625002, 2.3859966645756225) _gate_q_3;
  u1(1.5937659942450393) _gate_q_6;
  p(5.60870694862457) _gate_q_17;
  cry(2.6456211113946835) _gate_q_14, _gate_q_7;
  xx_minus_yy_5074426080(5.344670447251031, 1.8182114213409843) _gate_q_9, _gate_q_2;
  tdg _gate_q_5;
  rz(0.5427483417242133) _gate_q_1;
  u3(4.77944677473317, 1.080218992982273, 0.24998679279777705) _gate_q_11;
  cx _gate_q_8, _gate_q_18;
  cs _gate_q_15, _gate_q_10;
  rzz_5074429056(6.128670155541329) _gate_q_16, _gate_q_13;
  p(3.035811436728738) _gate_q_0;
  x _gate_q_19;
  csdg _gate_q_13, _gate_q_12;
  s _gate_q_19;
  cu1_5074427760(2.9562062657507218) _gate_q_18, _gate_q_5;
  u1(3.3303762827419976) _gate_q_7;
  cu3_5074275648(2.885281445525042, 2.0500832121713297, 5.495806823133306) _gate_q_9, _gate_q_1;
  csx _gate_q_6, _gate_q_10;
  t _gate_q_0;
  p(1.4693984232877082) _gate_q_2;
  rx(3.629605624607306) _gate_q_3;
  cx _gate_q_17, _gate_q_14;
  p(1.8444389522487215) _gate_q_15;
  rz(2.375013713366452) _gate_q_4;
  rx(4.493203859748415) _gate_q_11;
  ch _gate_q_8, _gate_q_16;
  cp(0.3046353853100022) _gate_q_4, _gate_q_18;
  u2(4.245043006304986, 4.450254689370545) _gate_q_2;
  h _gate_q_0;
  id _gate_q_6;
  sdg _gate_q_8;
  crx(2.015330737493732) _gate_q_1, _gate_q_15;
  rxx_5074427040(1.8940636182515154) _gate_q_11, _gate_q_17;
  swap _gate_q_14, _gate_q_9;
  tdg _gate_q_19;
  U(1.3296296503032323, 2.8475201999828688, 2.535692970124626) _gate_q_16;
  cp(2.897671207902665) _gate_q_3, _gate_q_7;
  xx_plus_yy_5074424016(0.36628773772751255, 2.3911838795044544) _gate_q_13, _gate_q_12;
  cs _gate_q_5, _gate_q_10;
  rz(4.465843520029331) _gate_q_14;
  cy _gate_q_18, _gate_q_11;
  rxx_5074426848(2.0091855942249035) _gate_q_1, _gate_q_2;
  sx _gate_q_5;
  sx _gate_q_19;
  cy _gate_q_15, _gate_q_3;
  p(3.7413427315319736) _gate_q_6;
  csx _gate_q_10, _gate_q_0;
  csx _gate_q_8, _gate_q_9;
  r_5074427808(3.9574830576554647, 5.107847463119242) _gate_q_17;
  xx_minus_yy_5074423680(1.0578431990841355, 2.426791463280762) _gate_q_13, _gate_q_12;
  xx_minus_yy_5074430880(6.272014951323869, 3.018600542454302) _gate_q_7, _gate_q_4;
  z _gate_q_16;
  r_5074422960(5.994711571026876, 0.184218407295583) _gate_q_7;
  sx _gate_q_5;
  t _gate_q_2;
  rzx_5074767648(5.471602333962103) _gate_q_6, _gate_q_13;
  iswap _gate_q_8, _gate_q_10;
  y _gate_q_15;
  cz _gate_q_9, _gate_q_3;
  cry(1.9270813869504344) _gate_q_17, _gate_q_1;
  ry(5.843502531232805) _gate_q_11;
  ch _gate_q_18, _gate_q_0;
  sx _gate_q_4;
  csdg _gate_q_12, _gate_q_16;
  cu1_5074435584(1.7046805460565655) _gate_q_19, _gate_q_14;
  cu(5.777741238099604, 0.1323807431399141, 1.0909419205479833, 1.0890634648558881) _gate_q_1, _gate_q_13;
  cy _gate_q_3, _gate_q_9;
  U(1.1321901893111699, 1.3051866613691772, 1.37511723103438) _gate_q_14;
  z _gate_q_12;
  csx _gate_q_19, _gate_q_6;
  cs _gate_q_10, _gate_q_8;
  cy _gate_q_16, _gate_q_4;
  rz(0.3320479878014622) _gate_q_11;
  cy _gate_q_18, _gate_q_17;
  rxx_5074421520(5.965523118821844) _gate_q_15, _gate_q_0;
  x _gate_q_2;
  ch _gate_q_7, _gate_q_5;
  swap _gate_q_19, _gate_q_7;
  crz(6.0051232441133235) _gate_q_9, _gate_q_5;
  t _gate_q_10;
  u1(2.7457708053056042) _gate_q_15;
  ecr _gate_q_18, _gate_q_3;
  ryy_5074423056(2.0642475221203256) _gate_q_11, _gate_q_13;
  cu3_5074420800(1.0906556408600159, 0.8243914435130801, 1.3351022673285484) _gate_q_4, _gate_q_2;
  ch _gate_q_16, _gate_q_12;
  rz(0.6908330497143597) _gate_q_0;
  cz _gate_q_6, _gate_q_17;
  ch _gate_q_8, _gate_q_1;
  tdg _gate_q_14;
  sx _gate_q_17;
  id _gate_q_19;
  xx_minus_yy_5074427952(1.719676968402666, 0.799841641986533) _gate_q_15, _gate_q_3;
  u1(5.7031970311344296) _gate_q_2;
  p(4.9921563517821825) _gate_q_4;
  s _gate_q_8;
  x _gate_q_5;
  crx(2.840775792295069) _gate_q_1, _gate_q_18;
  crx(1.68306339003084) _gate_q_16, _gate_q_9;
  u2(5.981022946108735, 5.044408485875482) _gate_q_10;
  crz(5.612397291569008) _gate_q_6, _gate_q_14;
  p(2.9133993958596087) _gate_q_11;
  u3(4.064261374201646, 2.400616688854762, 5.651441024792086) _gate_q_13;
  crz(1.5464162140613058) _gate_q_0, _gate_q_12;
  h _gate_q_7;
  rzz_5074425072(1.1594028114161061) _gate_q_11, _gate_q_9;
  cu3_5074425792(4.45567201121437, 2.457306256266237, 2.176617281113495) _gate_q_5, _gate_q_16;
  crx(5.883851317620506) _gate_q_2, _gate_q_10;
  sdg _gate_q_12;
  crz(4.958925159838623) _gate_q_17, _gate_q_14;
  cry(0.5537590763710228) _gate_q_18, _gate_q_13;
  cz _gate_q_4, _gate_q_7;
  u2(1.6060238141867336, 5.455339416078505) _gate_q_1;
  s _gate_q_15;
  u3(4.570178980893465, 0.6157935247103274, 3.494532800539039) _gate_q_0;
  p(4.7119174950308516) _gate_q_6;
  rzz_5072766208(5.342390348836711) _gate_q_3, _gate_q_19;
  rz(3.187852907423561) _gate_q_8;
  s _gate_q_17;
  cs _gate_q_14, _gate_q_4;
  sdg _gate_q_10;
  h _gate_q_11;
  tdg _gate_q_9;
  cy _gate_q_13, _gate_q_2;
  cry(3.13958380247064) _gate_q_1, _gate_q_18;
  rx(4.979458977898926) _gate_q_16;
  s _gate_q_15;
  rzx_5072767744(0.08884769883111952) _gate_q_3, _gate_q_6;
  cu1_5072772640(1.750920077778734) _gate_q_19, _gate_q_12;
  z _gate_q_8;
  t _gate_q_0;
  h _gate_q_7;
  u2(0.7085632059873181, 3.8725312150551523) _gate_q_5;
}
gate cu1_5072767312(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4691480538361552) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4691480538361552) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4691480538361552) _gate_q_1;
}
gate cu3_5072780320(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.9652500539482025) _gate_q_0;
  u1(1.8298370976115639) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.67072597229401, 0, -3.9652500539482025) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.67072597229401, 2.1354129563366384, 0) _gate_q_1;
}
gate rzz_5072765584(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.896303536159829) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5072769088(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.337081707181634) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5072770960(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.9408974154832008) _gate_q_0;
  u1(-0.5762592165555305) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7679698221228632, 0, -0.9408974154832008) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7679698221228632, 1.5171566320387313, 0) _gate_q_1;
}
gate cu1_5072772832(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4103311178164775) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4103311178164775) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4103311178164775) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5072775088(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.9489470331459449, 0.9161370560510567, -0.9161370560510567) _gate_q_0;
}
gate rxx_5072769664(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.457569817432858) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5070427808(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.3878486073790985) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0108927459906263) _gate_q_1;
  ry(-2.0108927459906263) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.3878486073790985) _gate_q_0;
}
gate ryy_5070423440(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.521845282723938) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5070428480(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.561046585206976) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5070422720(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.313661880606035) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.007170950482057) _gate_q_0;
  ry(-2.007170950482057) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.313661880606035) _gate_q_1;
}
gate ryy_5070432032(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6473623750682838) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5070423200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.985210597498697) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.619649390863228) _gate_q_1;
  ry(-1.619649390863228) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.985210597498697) _gate_q_0;
}
gate r_5070437744(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.187259650239226, 0.23634825680391391, -0.23634825680391391) _gate_q_0;
}
gate rzz_5070431936(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.3678606730991437) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5072777632(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.900477755398288) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.2790133368811185) _gate_q_0;
  ry(-0.2790133368811185) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.900477755398288) _gate_q_1;
}
gate xx_plus_yy_5070427904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.8022151881075392) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.306955341106073) _gate_q_1;
  ry(-1.306955341106073) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.8022151881075392) _gate_q_0;
}
gate xx_minus_yy_5070429104(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.302086707088483) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.075715546824981) _gate_q_0;
  ry(-2.075715546824981) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.302086707088483) _gate_q_1;
}
gate rxx_5070427376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.317793077105265) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5070427616(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.347443782818877) _gate_q_0;
  u1(-0.8682459638399185) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.175668834786397, 0, -5.347443782818877) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.175668834786397, 6.2156897466587955, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  sxdg _gate_q_4;
  crz(5.624102139378396) _gate_q_5, _gate_q_19;
  cz _gate_q_16, _gate_q_8;
  cu1_5072767312(2.9382961076723104) _gate_q_9, _gate_q_17;
  cu3_5072780320(5.34145194458802, 2.1354129563366384, 5.795087151559766) _gate_q_3, _gate_q_6;
  cu(2.5546568846099955, 5.681533862612243, 3.8760587262916055, 3.109740542778797) _gate_q_12, _gate_q_13;
  t _gate_q_7;
  rzz_5072765584(4.896303536159829) _gate_q_18, _gate_q_11;
  cry(5.222950445829829) _gate_q_15, _gate_q_1;
  z _gate_q_2;
  id _gate_q_14;
  rxx_5072769088(5.337081707181634) _gate_q_0, _gate_q_10;
  cu3_5072770960(1.5359396442457265, 1.5171566320387313, 0.36463819892767024) _gate_q_18, _gate_q_17;
  u1(5.81381712314028) _gate_q_6;
  cry(4.7749800138093) _gate_q_15, _gate_q_10;
  u3(3.6820023209363746, 5.319734840260111, 4.658527539743018) _gate_q_8;
  u2(2.182497427435592, 4.52696759445309) _gate_q_16;
  iswap _gate_q_1, _gate_q_13;
  tdg _gate_q_4;
  cu1_5072772832(2.820662235632955) _gate_q_12, _gate_q_7;
  sdg _gate_q_14;
  ecr _gate_q_2, _gate_q_5;
  u3(4.145929362500953, 0.6410603699173781, 5.751600970509577) _gate_q_19;
  cp(2.0275853391647445) _gate_q_3, _gate_q_11;
  h _gate_q_0;
  tdg _gate_q_9;
  dcx _gate_q_13, _gate_q_3;
  rz(2.8501900678208423) _gate_q_16;
  sx _gate_q_11;
  cry(5.534252835694483) _gate_q_5, _gate_q_0;
  swap _gate_q_8, _gate_q_1;
  cp(2.9700056525490757) _gate_q_10, _gate_q_17;
  z _gate_q_9;
  t _gate_q_14;
  u3(0.7382516470009982, 4.2069328076038035, 3.288086168543932) _gate_q_6;
  u1(4.0561923965128) _gate_q_12;
  csx _gate_q_2, _gate_q_15;
  U(6.203209441117751, 4.963718835179515, 4.80963430667969) _gate_q_18;
  cx _gate_q_19, _gate_q_7;
  id _gate_q_4;
  sx _gate_q_9;
  csx _gate_q_15, _gate_q_10;
  cp(1.9615780942757488) _gate_q_5, _gate_q_12;
  r_5072775088(1.9489470331459449, 2.4869333828459532) _gate_q_3;
  rxx_5072769664(2.457569817432858) _gate_q_4, _gate_q_13;
  ry(0.2354590928453943) _gate_q_14;
  u2(1.626110216180595, 1.8967037294345825) _gate_q_18;
  u2(5.879672209561618, 3.343285337132329) _gate_q_7;
  u2(4.003208896642077, 6.201843010477122) _gate_q_16;
  dcx _gate_q_1, _gate_q_17;
  p(1.866047687814605) _gate_q_19;
  csx _gate_q_6, _gate_q_2;
  y _gate_q_11;
  U(3.6077256256382424, 3.2739311554532464, 2.659211744573483) _gate_q_0;
  y _gate_q_8;
  crz(1.1127483954299682) _gate_q_11, _gate_q_10;
  csdg _gate_q_15, _gate_q_14;
  xx_plus_yy_5070427808(4.021785491981253, 1.3878486073790985) _gate_q_0, _gate_q_5;
  swap _gate_q_8, _gate_q_19;
  ryy_5070423440(2.521845282723938) _gate_q_18, _gate_q_3;
  rzz_5070428480(4.561046585206976) _gate_q_13, _gate_q_1;
  z _gate_q_17;
  cry(2.8050313699419562) _gate_q_9, _gate_q_4;
  rx(4.138785912832992) _gate_q_2;
  xx_minus_yy_5070422720(4.014341900964114, 3.313661880606035) _gate_q_6, _gate_q_16;
  x _gate_q_7;
  z _gate_q_12;
  sdg _gate_q_3;
  t _gate_q_16;
  crx(2.0624816377768416) _gate_q_4, _gate_q_19;
  rx(3.784545218763911) _gate_q_5;
  u2(2.293516341874882, 5.67402285400257) _gate_q_15;
  swap _gate_q_0, _gate_q_8;
  ryy_5070432032(0.6473623750682838) _gate_q_11, _gate_q_13;
  cy _gate_q_12, _gate_q_7;
  cz _gate_q_14, _gate_q_1;
  y _gate_q_2;
  cp(4.1811017454154245) _gate_q_17, _gate_q_6;
  csdg _gate_q_10, _gate_q_18;
  id _gate_q_9;
  crz(3.0089990428878037) _gate_q_7, _gate_q_18;
  csdg _gate_q_5, _gate_q_10;
  csx _gate_q_16, _gate_q_11;
  cy _gate_q_0, _gate_q_17;
  swap _gate_q_19, _gate_q_8;
  cry(5.199714420264856) _gate_q_1, _gate_q_4;
  xx_plus_yy_5070423200(3.239298781726456, 2.985210597498697) _gate_q_6, _gate_q_9;
  r_5070437744(6.187259650239226, 1.8071445835988105) _gate_q_12;
  iswap _gate_q_15, _gate_q_3;
  tdg _gate_q_2;
  csdg _gate_q_14, _gate_q_13;
  sdg _gate_q_15;
  sxdg _gate_q_19;
  tdg _gate_q_11;
  crx(2.409401934730487) _gate_q_8, _gate_q_17;
  p(5.355973784254415) _gate_q_14;
  h _gate_q_2;
  u1(0.35008034007397354) _gate_q_16;
  cry(0.3234594022198341) _gate_q_18, _gate_q_9;
  ry(2.2175790717911465) _gate_q_7;
  cry(3.9204473978657615) _gate_q_4, _gate_q_0;
  cy _gate_q_10, _gate_q_1;
  rzz_5070431936(0.3678606730991437) _gate_q_5, _gate_q_13;
  U(2.3018530691260186, 0.6309775141936868, 4.148485298406998) _gate_q_6;
  id _gate_q_12;
  s _gate_q_3;
  U(3.612705738400272, 1.7163157541218632, 3.0185469261443325) _gate_q_8;
  s _gate_q_19;
  cu(0.003627068047218406, 0.21833677697766446, 4.61143244228228, 1.2181291763671869) _gate_q_0, _gate_q_15;
  csdg _gate_q_4, _gate_q_11;
  csx _gate_q_12, _gate_q_18;
  h _gate_q_5;
  y _gate_q_1;
  tdg _gate_q_14;
  h _gate_q_17;
  sdg _gate_q_7;
  p(4.969863035182954) _gate_q_9;
  cu(1.7515456746599773, 0.3813478728357636, 1.2265608976730578, 5.521262735568422) _gate_q_2, _gate_q_10;
  xx_minus_yy_5072777632(0.558026673762237, 1.900477755398288) _gate_q_13, _gate_q_16;
  xx_plus_yy_5070427904(2.613910682212146, 3.8022151881075392) _gate_q_3, _gate_q_6;
  xx_minus_yy_5070429104(4.151431093649962, 2.302086707088483) _gate_q_18, _gate_q_10;
  t _gate_q_9;
  rz(1.3297622348391032) _gate_q_14;
  ecr _gate_q_1, _gate_q_0;
  rxx_5070427376(4.317793077105265) _gate_q_7, _gate_q_12;
  sxdg _gate_q_2;
  id _gate_q_6;
  crz(0.6688191116268394) _gate_q_17, _gate_q_15;
  sdg _gate_q_11;
  cu3_5070427616(2.351337669572794, 6.2156897466587955, 4.4791978189789585) _gate_q_13, _gate_q_8;
  crx(2.3368693919982855) _gate_q_16, _gate_q_19;
  tdg _gate_q_5;
  ch _gate_q_3, _gate_q_4;
}