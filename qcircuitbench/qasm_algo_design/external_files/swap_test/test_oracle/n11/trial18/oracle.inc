gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5074192768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.24397088002785017) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.764601637979834) _gate_q_1;
  ry(-2.764601637979834) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.24397088002785017) _gate_q_0;
}
gate ryy_5074193152(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.442657987421273) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5074191568(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.04579476171471) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5074195504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7695812626936548) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5744403181474412) _gate_q_1;
  ry(-0.5744403181474412) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7695812626936548) _gate_q_0;
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
gate xx_minus_yy_5074191664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.757981993103381) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.582707382373247) _gate_q_0;
  ry(-2.582707382373247) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.757981993103381) _gate_q_1;
}
gate cu3_5074195408(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2971502494725997) _gate_q_0;
  u1(-1.1317778157703513) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.381191701731109, 0, -1.2971502494725997) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.381191701731109, 2.428928065242951, 0) _gate_q_1;
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
gate rzz_5074201984(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.350939597915264) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5074201888(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7217673818209014) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5074196080(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9530995492395924) _gate_q_1;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5074195648(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0264901847154713) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5074201840(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.5461839431322275) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5074200448(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.026824474548082854) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3680403002142232) _gate_q_1;
  ry(-1.3680403002142232) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.026824474548082854) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  sxdg _gate_q_1;
  tdg _gate_q_3;
  h _gate_q_0;
  xx_plus_yy_5074192768(5.529203275959668, 0.24397088002785017) _gate_q_8, _gate_q_6;
  p(0.9911183264193397) _gate_q_5;
  p(1.4056093052721148) _gate_q_10;
  h _gate_q_4;
  ryy_5074193152(3.442657987421273) _gate_q_2, _gate_q_7;
  h _gate_q_9;
  rzx_5074191568(4.04579476171471) _gate_q_10, _gate_q_8;
  cry(3.873535818963445) _gate_q_4, _gate_q_6;
  dcx _gate_q_0, _gate_q_5;
  xx_plus_yy_5074195504(1.1488806362948825, 0.7695812626936548) _gate_q_9, _gate_q_1;
  ry(3.110878595171145) _gate_q_3;
  csx _gate_q_7, _gate_q_2;
  s _gate_q_9;
  xx_minus_yy_5074191664(5.165414764746494, 4.757981993103381) _gate_q_3, _gate_q_0;
  h _gate_q_2;
  cx _gate_q_7, _gate_q_8;
  cry(2.5908072578577044) _gate_q_4, _gate_q_10;
  ch _gate_q_1, _gate_q_5;
  id _gate_q_6;
  tdg _gate_q_2;
  ry(4.846111306470927) _gate_q_0;
  csx _gate_q_5, _gate_q_1;
  cry(3.351889730591436) _gate_q_6, _gate_q_7;
  sx _gate_q_8;
  crx(4.879391156694879) _gate_q_4, _gate_q_9;
  cu3_5074195408(4.762383403462218, 2.428928065242951, 0.16537243370224836) _gate_q_3, _gate_q_10;
  ry(4.817345140861663) _gate_q_6;
  ecr _gate_q_7, _gate_q_5;
  cy _gate_q_1, _gate_q_10;
  crz(4.619171684237422) _gate_q_9, _gate_q_3;
  u3(3.4967598849650012, 1.3185144412930132, 3.1940712871875307) _gate_q_2;
  t _gate_q_4;
  cry(2.73036808032098) _gate_q_0, _gate_q_8;
  h _gate_q_3;
  cu(2.1893540118626458, 3.5106173103326817, 1.6187516703938143, 5.465936077632964) _gate_q_9, _gate_q_10;
  id _gate_q_0;
  y _gate_q_4;
  rzz_5074201984(5.350939597915264) _gate_q_8, _gate_q_7;
  csdg _gate_q_5, _gate_q_2;
  sdg _gate_q_1;
  U(6.224751604291171, 2.8138291903148955, 0.8156206129023056) _gate_q_6;
  cz _gate_q_3, _gate_q_9;
  cy _gate_q_5, _gate_q_7;
  rzx_5074201888(3.7217673818209014) _gate_q_4, _gate_q_10;
  rzx_5074196080(0.9530995492395924) _gate_q_1, _gate_q_2;
  iswap _gate_q_6, _gate_q_0;
  s _gate_q_8;
  s _gate_q_3;
  p(0.9238991602627938) _gate_q_4;
  y _gate_q_0;
  iswap _gate_q_1, _gate_q_7;
  cx _gate_q_9, _gate_q_10;
  u1(0.8879672312636672) _gate_q_8;
  cs _gate_q_2, _gate_q_5;
  sxdg _gate_q_6;
  ecr _gate_q_10, _gate_q_1;
  h _gate_q_9;
  t _gate_q_8;
  z _gate_q_4;
  cx _gate_q_7, _gate_q_5;
  s _gate_q_2;
  z _gate_q_6;
  z _gate_q_3;
  t _gate_q_0;
  z _gate_q_1;
  rzx_5074195648(2.0264901847154713) _gate_q_3, _gate_q_8;
  s _gate_q_0;
  ryy_5074201840(5.5461839431322275) _gate_q_7, _gate_q_2;
  id _gate_q_6;
  xx_plus_yy_5074200448(2.7360806004284464, 0.026824474548082854) _gate_q_10, _gate_q_9;
  z _gate_q_5;
  sdg _gate_q_4;
}
gate r_5072112240(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.281203216946095, 2.8091778369568345, -2.8091778369568345) _gate_q_0;
}
gate r_5072116848(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.609566773300564, 3.842597318603243, -3.842597318603243) _gate_q_0;
}
gate xx_minus_yy_5072110752(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.350968310836935) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8258738392755731) _gate_q_0;
  ry(-1.8258738392755731) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.350968310836935) _gate_q_1;
}
gate rzz_5072111088(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.969393654759788) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5072116032(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.934290222436048) _gate_q_0;
  u1(2.355064047016593) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8582568959306343, 0, -2.934290222436048) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8582568959306343, 0.5792261754194554, 0) _gate_q_1;
}
gate cu1_5072110992(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.2001025464299584) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.2001025464299584) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.2001025464299584) _gate_q_1;
}
gate cu3_5072113872(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.350279209733201) _gate_q_0;
  u1(0.5199361300790108) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.26209823086201, 0, -3.350279209733201) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.26209823086201, 2.8303430796541904, 0) _gate_q_1;
}
gate rzx_5072120880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7035478337372947) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5072113776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.533288616112912) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9454156283156644) _gate_q_0;
  ry(-0.9454156283156644) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.533288616112912) _gate_q_1;
}
gate cu3_5072121792(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.124226449922693) _gate_q_0;
  u1(0.7566806166641471) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3199309683293332, 0, -4.124226449922693) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3199309683293332, 3.3675458332585455, 0) _gate_q_1;
}
gate rzz_5072125872(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.0101522974852821) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5072775232(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.7242509620401565) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5072770624(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.501175735471834) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.501175735471834) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.501175735471834) _gate_q_1;
}
gate rzz_5072772400(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.3863271550992502) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5072320560(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1197234829524803) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  r_5072112240(3.281203216946095, 4.379974163751731) _gate_q_1;
  rx(5.564833311595635) _gate_q_9;
  u2(2.551653974042681, 5.041915945055502) _gate_q_5;
  cz _gate_q_2, _gate_q_8;
  r_5072116848(3.609566773300564, 5.4133936453981395) _gate_q_10;
  U(4.363220522967258, 2.1365170935235445, 2.4040783316366268) _gate_q_0;
  xx_minus_yy_5072110752(3.6517476785511462, 2.350968310836935) _gate_q_4, _gate_q_6;
  y _gate_q_7;
  y _gate_q_3;
  iswap _gate_q_1, _gate_q_6;
  rx(3.2517833681963015) _gate_q_9;
  u3(5.478971869499002, 3.7353888195206393, 0.46996703528630324) _gate_q_0;
  sx _gate_q_4;
  cs _gate_q_7, _gate_q_8;
  rzz_5072111088(2.969393654759788) _gate_q_5, _gate_q_3;
  u3(5.873058955482676, 5.867900483375471, 2.959357391819446) _gate_q_10;
  z _gate_q_2;
  cu3_5072116032(3.7165137918612685, 0.5792261754194554, 5.289354269452641) _gate_q_4, _gate_q_7;
  cs _gate_q_9, _gate_q_6;
  cy _gate_q_8, _gate_q_2;
  cu1_5072110992(4.400205092859917) _gate_q_10, _gate_q_0;
  tdg _gate_q_3;
  rx(5.58957318455128) _gate_q_5;
  sx _gate_q_1;
  id _gate_q_3;
  cu3_5072113872(4.52419646172402, 2.8303430796541904, 3.870215339812212) _gate_q_1, _gate_q_5;
  id _gate_q_2;
  u3(3.9333810146125385, 3.042226523185714, 0.6452284973185785) _gate_q_0;
  rzx_5072120880(3.7035478337372947) _gate_q_6, _gate_q_10;
  rx(1.532513495502574) _gate_q_7;
  z _gate_q_4;
  sxdg _gate_q_8;
  u1(0.07848806254199128) _gate_q_9;
  csdg _gate_q_0, _gate_q_1;
  cz _gate_q_9, _gate_q_4;
  csx _gate_q_2, _gate_q_7;
  xx_minus_yy_5072113776(1.8908312566313288, 5.533288616112912) _gate_q_5, _gate_q_8;
  h _gate_q_6;
  cu3_5072121792(2.6398619366586664, 3.3675458332585455, 4.88090706658684) _gate_q_10, _gate_q_3;
  rz(0.7235368066376257) _gate_q_1;
  p(1.750241264444278) _gate_q_6;
  u2(3.430825857394995, 3.9867143518646677) _gate_q_9;
  csdg _gate_q_2, _gate_q_7;
  rzz_5072125872(1.0101522974852821) _gate_q_3, _gate_q_0;
  x _gate_q_10;
  ecr _gate_q_5, _gate_q_4;
  s _gate_q_8;
  cy _gate_q_10, _gate_q_0;
  cy _gate_q_1, _gate_q_5;
  csx _gate_q_3, _gate_q_2;
  swap _gate_q_6, _gate_q_9;
  cz _gate_q_8, _gate_q_7;
  u3(0.18320637284915817, 2.182913500447761, 5.344795600686639) _gate_q_4;
  cry(3.7482018694853134) _gate_q_8, _gate_q_6;
  u2(3.7594487509293515, 5.041110280279698) _gate_q_7;
  rz(3.57264594739541) _gate_q_1;
  U(5.118111187044827, 3.575447398136897, 3.794563649825051) _gate_q_5;
  ryy_5072775232(4.7242509620401565) _gate_q_9, _gate_q_3;
  U(6.246595494168294, 1.2962152902327466, 4.993742246785602) _gate_q_0;
  p(1.951239182961864) _gate_q_2;
  z _gate_q_4;
  ry(4.443832079354769) _gate_q_10;
  sxdg _gate_q_5;
  cu1_5072770624(1.002351470943668) _gate_q_8, _gate_q_4;
  cu(1.5796031149500822, 5.6333269262198975, 5.076876903866795, 3.788078989937174) _gate_q_0, _gate_q_6;
  sx _gate_q_2;
  iswap _gate_q_10, _gate_q_3;
  z _gate_q_1;
  U(2.2494661792892563, 1.3534286737916612, 4.922482166959831) _gate_q_9;
  U(3.150283082880654, 3.0103312932778414, 2.3545609910610534) _gate_q_7;
  p(2.014976694448261) _gate_q_3;
  sdg _gate_q_10;
  cu(0.751254202133011, 3.2624546296105845, 2.5454753856556476, 5.577985208198943) _gate_q_9, _gate_q_6;
  rzz_5072772400(1.3863271550992502) _gate_q_1, _gate_q_0;
  u1(3.772709242150003) _gate_q_7;
  swap _gate_q_8, _gate_q_4;
  ryy_5072320560(3.1197234829524803) _gate_q_5, _gate_q_2;
}