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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate cu3_5074225248(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2127225150149177) _gate_q_0;
  u1(1.4436607408346656) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.18175203304534224, 0, -3.2127225150149177) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.18175203304534224, 1.7690617741802521, 0) _gate_q_1;
}
gate rxx_5074234176(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3858475557553718) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5074239264(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.1263725640100657) _gate_q_0;
  u1(-2.3541318425635107) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4395732394044238, 0, -3.1263725640100657) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4395732394044238, 5.480504406573576, 0) _gate_q_1;
}
gate r_5074234608(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.268263626245255, 3.974897831374702, -3.974897831374702) _gate_q_0;
}
gate ryy_5074224864(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.33770166060303) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5074233888(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.56225231781737) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5074231104(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.250467563732727) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5553876708095702) _gate_q_1;
  ry(-0.5553876708095702) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.250467563732727) _gate_q_0;
}
gate ryy_5074228368(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8540303059752303) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rxx_5074225824(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6842219721966282) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5074228464(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.142085772462735) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.744248910552302) _gate_q_0;
  ry(-1.744248910552302) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.142085772462735) _gate_q_1;
}
gate rzx_5074229520(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.23281693164486936) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5074237008(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.4945771442207745) _gate_q_0;
  u1(-1.2179178447536865) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2884922864573531, 0, -4.4945771442207745) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2884922864573531, 5.712494988974461, 0) _gate_q_1;
}
gate cu3_5074226304(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6006834457126022) _gate_q_0;
  u1(0.010149160917512612) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.6011017087806665, 0, -1.6006834457126022) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.6011017087806665, 1.5905342847950896, 0) _gate_q_1;
}
gate xx_minus_yy_5074235184(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.220048743529251) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.247546955557141) _gate_q_0;
  ry(-2.247546955557141) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.220048743529251) _gate_q_1;
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
gate rxx_5074233072(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.422305851898467) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5074229808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.798407844129279) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzz_5074230720(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.049797288606891) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074228224(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.368250913242745, 3.5652349999628115, -3.5652349999628115) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  u2(1.8071821333208933, 4.997122812813899) _gate_q_5;
  cz _gate_q_9, _gate_q_10;
  cz _gate_q_12, _gate_q_14;
  tdg _gate_q_8;
  U(0.1514085949660243, 1.51535636055168, 4.0732625650886805) _gate_q_11;
  crx(5.741703634164738) _gate_q_3, _gate_q_7;
  cu(4.3533121428990365, 2.46189161770236, 1.1677218967631395, 3.042134669909962) _gate_q_4, _gate_q_0;
  cy _gate_q_16, _gate_q_13;
  sx _gate_q_2;
  csx _gate_q_1, _gate_q_6;
  sxdg _gate_q_15;
  cu3_5074225248(0.3635040660906845, 1.7690617741802521, 4.656383255849583) _gate_q_14, _gate_q_1;
  rx(2.6268779891219722) _gate_q_8;
  cx _gate_q_16, _gate_q_5;
  u1(0.8888464451353519) _gate_q_0;
  h _gate_q_7;
  rxx_5074234176(1.3858475557553718) _gate_q_2, _gate_q_9;
  p(6.207292552511174) _gate_q_3;
  sxdg _gate_q_10;
  z _gate_q_12;
  h _gate_q_13;
  cu3_5074239264(2.8791464788088477, 5.480504406573576, 0.7722407214465546) _gate_q_6, _gate_q_11;
  rz(1.0754602603735854) _gate_q_15;
  r_5074234608(6.268263626245255, 5.545694158169598) _gate_q_4;
  ryy_5074224864(4.33770166060303) _gate_q_11, _gate_q_2;
  cu(4.885525778019088, 2.249518857135027, 2.8083016366795586, 0.3304297606614642) _gate_q_3, _gate_q_5;
  crz(2.5711197805422548) _gate_q_14, _gate_q_0;
  u1(3.1315054805953486) _gate_q_8;
  dcx _gate_q_1, _gate_q_10;
  U(5.758452890709348, 0.8244620308764822, 0.10254387439755758) _gate_q_6;
  u2(3.503278366049539, 0.03682531398549533) _gate_q_7;
  s _gate_q_16;
  u3(4.108389972786246, 2.281697358333402, 3.390944795646308) _gate_q_13;
  rzx_5074233888(4.56225231781737) _gate_q_4, _gate_q_12;
  xx_plus_yy_5074231104(1.1107753416191404, 2.250467563732727) _gate_q_15, _gate_q_9;
  id _gate_q_8;
  sxdg _gate_q_6;
  csx _gate_q_9, _gate_q_4;
  ryy_5074228368(2.8540303059752303) _gate_q_16, _gate_q_13;
  s _gate_q_14;
  cu(4.912063057189355, 3.5752415926682586, 1.250587720052477, 0.3954779686605196) _gate_q_5, _gate_q_10;
  cz _gate_q_2, _gate_q_1;
  rz(0.11598715306549644) _gate_q_7;
  cx _gate_q_15, _gate_q_3;
  u1(5.4935850830997985) _gate_q_12;
  s _gate_q_0;
  u1(0.9561490623767552) _gate_q_11;
  csdg _gate_q_16, _gate_q_2;
  rxx_5074225824(0.6842219721966282) _gate_q_0, _gate_q_4;
  id _gate_q_3;
  cry(2.5336080472815783) _gate_q_13, _gate_q_9;
  u2(2.0680880767774856, 1.4505321604931016) _gate_q_7;
  z _gate_q_11;
  crx(4.729439667438568) _gate_q_6, _gate_q_8;
  u1(5.7294655896026425) _gate_q_1;
  xx_minus_yy_5074228464(3.488497821104604, 5.142085772462735) _gate_q_10, _gate_q_15;
  rzx_5074229520(0.23281693164486936) _gate_q_14, _gate_q_5;
  z _gate_q_12;
  dcx _gate_q_16, _gate_q_6;
  sdg _gate_q_2;
  sdg _gate_q_14;
  id _gate_q_9;
  s _gate_q_15;
  crz(0.9983589542162608) _gate_q_0, _gate_q_4;
  cry(3.239410987604384) _gate_q_12, _gate_q_5;
  cu3_5074237008(2.5769845729147063, 5.712494988974461, 3.276659299467088) _gate_q_7, _gate_q_11;
  p(0.4378896288223183) _gate_q_13;
  cu3_5074226304(5.202203417561333, 1.5905342847950896, 1.6108326066301148) _gate_q_3, _gate_q_10;
  xx_minus_yy_5074235184(4.495093911114282, 3.220048743529251) _gate_q_8, _gate_q_1;
  rx(5.7309849485995095) _gate_q_5;
  cry(3.106865372694294) _gate_q_2, _gate_q_16;
  csdg _gate_q_15, _gate_q_12;
  cy _gate_q_10, _gate_q_3;
  cu(2.768658237263523, 1.9609570222955075, 3.6260454623207856, 3.2340522235437383) _gate_q_11, _gate_q_8;
  dcx _gate_q_0, _gate_q_6;
  x _gate_q_1;
  csx _gate_q_13, _gate_q_9;
  ch _gate_q_7, _gate_q_4;
  ry(1.3495290983737935) _gate_q_14;
  cy _gate_q_5, _gate_q_12;
  y _gate_q_2;
  sx _gate_q_9;
  cy _gate_q_10, _gate_q_7;
  sxdg _gate_q_1;
  sdg _gate_q_6;
  ry(2.4610406812711196) _gate_q_4;
  sx _gate_q_16;
  y _gate_q_13;
  u3(2.7943319945190948, 2.725510713112624, 0.5558169330243669) _gate_q_3;
  ecr _gate_q_15, _gate_q_0;
  rx(2.72474930560241) _gate_q_11;
  tdg _gate_q_8;
  rx(2.1633042230904103) _gate_q_14;
  rxx_5074233072(2.422305851898467) _gate_q_5, _gate_q_13;
  sx _gate_q_3;
  h _gate_q_14;
  u3(1.9398283481942373, 2.656857468209988, 1.0139591979444276) _gate_q_8;
  x _gate_q_16;
  csdg _gate_q_6, _gate_q_1;
  rzx_5074229808(4.798407844129279) _gate_q_15, _gate_q_4;
  dcx _gate_q_2, _gate_q_10;
  crx(2.1201268327173954) _gate_q_0, _gate_q_9;
  csx _gate_q_12, _gate_q_7;
  p(2.281243546366683) _gate_q_11;
  cz _gate_q_9, _gate_q_10;
  cs _gate_q_8, _gate_q_7;
  cx _gate_q_0, _gate_q_2;
  h _gate_q_16;
  s _gate_q_4;
  rzz_5074230720(5.049797288606891) _gate_q_15, _gate_q_6;
  cry(4.758688553412677) _gate_q_13, _gate_q_12;
  cs _gate_q_3, _gate_q_5;
  r_5074228224(3.368250913242745, 5.136031326757708) _gate_q_1;
  rz(4.518030849237066) _gate_q_14;
  sdg _gate_q_11;
}
gate rzx_5074235520(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8601814313915948) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5074233648(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.0637801260335014, -1.5050873500846749, 1.5050873500846749) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rxx_5074224720(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.16348495009731442) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5074237872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.086772696804326) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.21649861290905914) _gate_q_1;
  ry(-0.21649861290905914) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.086772696804326) _gate_q_0;
}
gate rxx_5074236000(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.622740931626578) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5074227504(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.5458431852049124) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.5458431852049124) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.5458431852049124) _gate_q_1;
}
gate rxx_5074231056(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8595168127718065) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5074232016(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.307207519945555) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4987681524346756) _gate_q_1;
  ry(-1.4987681524346756) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.307207519945555) _gate_q_0;
}
gate xx_minus_yy_5074227264(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.1836035047234812) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.2162854843160553) _gate_q_0;
  ry(-2.2162854843160553) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.1836035047234812) _gate_q_1;
}
gate rxx_5074236192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.056383127875039) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5074234656(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.475833151347959) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.373054602301239) _gate_q_1;
  ry(-1.373054602301239) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.475833151347959) _gate_q_0;
}
gate rzz_5074226064(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.8093696180157113) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074131024(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.7364772817956458, 2.6199221251996443, -2.6199221251996443) _gate_q_0;
}
gate ryy_5074138080(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.67333055020566) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5074133520(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.9096166403511) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5074128384(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.053832581973278) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5074140960(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.597438359729521) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.650514624019932) _gate_q_0;
  ry(-1.650514624019932) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.597438359729521) _gate_q_1;
}
gate r_5074126848(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.0240047334223785, 2.242582068006259, -2.242582068006259) _gate_q_0;
}
gate cu3_5074126368(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.1976204051538786) _gate_q_0;
  u1(-0.2338474791039119) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.0953909004688924, 0, -2.1976204051538786) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.0953909004688924, 2.4314678842577906, 0) _gate_q_1;
}
gate xx_plus_yy_5074135392(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.03836795818996621) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8872193000496416) _gate_q_1;
  ry(-2.8872193000496416) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.03836795818996621) _gate_q_0;
}
gate xx_plus_yy_5074130160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.9740304111011) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3604861612429107) _gate_q_1;
  ry(-1.3604861612429107) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.9740304111011) _gate_q_0;
}
gate cu1_5074135440(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.011990638843706582) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.011990638843706582) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.011990638843706582) _gate_q_1;
}
gate rzz_5074127040(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.622300021847432) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074135152(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6553560131321954, -0.6445558260370547, 0.6445558260370547) _gate_q_0;
}
gate rzx_5074135296(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.011875903384474) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5074130400(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.397519234191176) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.061375306515093) _gate_q_0;
  ry(-3.061375306515093) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.397519234191176) _gate_q_1;
}
gate xx_plus_yy_5074233360(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.576357863899799) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.9191509943886675) _gate_q_1;
  ry(-2.9191509943886675) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.576357863899799) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  cp(0.4588419013611342) _gate_q_5, _gate_q_2;
  h _gate_q_10;
  x _gate_q_14;
  rzx_5074235520(3.8601814313915948) _gate_q_9, _gate_q_3;
  ch _gate_q_6, _gate_q_16;
  r_5074233648(3.0637801260335014, 0.06570897671022169) _gate_q_1;
  csdg _gate_q_4, _gate_q_15;
  p(5.1150809374394886) _gate_q_7;
  t _gate_q_11;
  cu(5.03025728743973, 2.2317607186416124, 5.237013988168259, 1.0859255810073867) _gate_q_0, _gate_q_13;
  id _gate_q_8;
  p(3.6625910989232673) _gate_q_12;
  cx _gate_q_4, _gate_q_10;
  y _gate_q_14;
  y _gate_q_6;
  u3(2.8686325641272625, 5.168024571248579, 2.804836026335752) _gate_q_5;
  csx _gate_q_0, _gate_q_2;
  iswap _gate_q_7, _gate_q_8;
  rxx_5074224720(0.16348495009731442) _gate_q_9, _gate_q_1;
  xx_plus_yy_5074237872(0.4329972258181183, 5.086772696804326) _gate_q_13, _gate_q_15;
  h _gate_q_16;
  sxdg _gate_q_11;
  h _gate_q_12;
  h _gate_q_3;
  y _gate_q_12;
  z _gate_q_5;
  rxx_5074236000(3.622740931626578) _gate_q_6, _gate_q_4;
  y _gate_q_8;
  id _gate_q_9;
  cu1_5074227504(5.091686370409825) _gate_q_2, _gate_q_3;
  sdg _gate_q_11;
  iswap _gate_q_13, _gate_q_0;
  rxx_5074231056(3.8595168127718065) _gate_q_1, _gate_q_14;
  cx _gate_q_7, _gate_q_10;
  p(3.748858509345168) _gate_q_16;
  z _gate_q_15;
  cs _gate_q_3, _gate_q_8;
  dcx _gate_q_6, _gate_q_4;
  ch _gate_q_13, _gate_q_16;
  z _gate_q_15;
  p(0.5618973430457223) _gate_q_12;
  z _gate_q_5;
  ch _gate_q_14, _gate_q_0;
  sx _gate_q_1;
  xx_plus_yy_5074232016(2.9975363048693513, 4.307207519945555) _gate_q_10, _gate_q_9;
  xx_minus_yy_5074227264(4.432570968632111, 1.1836035047234812) _gate_q_7, _gate_q_2;
  z _gate_q_11;
  p(2.169840009142644) _gate_q_0;
  rxx_5074236192(6.056383127875039) _gate_q_12, _gate_q_8;
  cz _gate_q_7, _gate_q_5;
  xx_plus_yy_5074234656(2.746109204602478, 5.475833151347959) _gate_q_1, _gate_q_9;
  p(4.913044125780934) _gate_q_11;
  p(3.078630635846642) _gate_q_14;
  id _gate_q_10;
  cry(0.3364800981156068) _gate_q_16, _gate_q_13;
  rzz_5074226064(2.8093696180157113) _gate_q_3, _gate_q_6;
  sdg _gate_q_15;
  u3(6.109776972458562, 0.34147598691734765, 2.8767492370860683) _gate_q_4;
  u3(5.114410134738998, 2.871458473393427, 4.997178154033199) _gate_q_2;
  id _gate_q_1;
  swap _gate_q_3, _gate_q_4;
  x _gate_q_8;
  r_5074131024(3.7364772817956458, 4.190718451994541) _gate_q_9;
  sxdg _gate_q_13;
  csdg _gate_q_2, _gate_q_14;
  U(4.257414561149041, 4.8700203266618445, 2.113086848764941) _gate_q_0;
  ryy_5074138080(5.67333055020566) _gate_q_16, _gate_q_12;
  ry(4.815918200971754) _gate_q_7;
  sx _gate_q_5;
  U(3.4871091917318537, 2.294238712411993, 1.3161165680626115) _gate_q_6;
  rxx_5074133520(5.9096166403511) _gate_q_15, _gate_q_10;
  y _gate_q_11;
  u2(2.251618051923781, 1.4987056993496526) _gate_q_11;
  crz(3.3752752806933652) _gate_q_4, _gate_q_2;
  sx _gate_q_5;
  u1(4.294652915043507) _gate_q_8;
  cz _gate_q_13, _gate_q_12;
  z _gate_q_1;
  cs _gate_q_15, _gate_q_3;
  ry(3.2079458963362395) _gate_q_10;
  U(0.1879102334454979, 1.6221987407341143, 4.687552046957913) _gate_q_0;
  ryy_5074128384(4.053832581973278) _gate_q_16, _gate_q_7;
  xx_minus_yy_5074140960(3.301029248039864, 5.597438359729521) _gate_q_6, _gate_q_9;
  u3(2.6607985310338536, 2.0229644538052165, 2.918348318688615) _gate_q_14;
  u1(4.617576440967581) _gate_q_11;
  rx(0.6588329682092461) _gate_q_1;
  p(3.208803290367601) _gate_q_16;
  r_5074126848(5.0240047334223785, 3.8133783948011555) _gate_q_14;
  sxdg _gate_q_0;
  u3(2.6386932604648745, 2.165872181707376, 1.0678503029470854) _gate_q_15;
  cu3_5074126368(4.190781800937785, 2.4314678842577906, 1.9637729260499668) _gate_q_8, _gate_q_10;
  xx_plus_yy_5074135392(5.774438600099283, 0.03836795818996621) _gate_q_12, _gate_q_3;
  xx_plus_yy_5074130160(2.7209723224858213, 4.9740304111011) _gate_q_2, _gate_q_13;
  cs _gate_q_7, _gate_q_4;
  t _gate_q_5;
  rz(0.6881914413273219) _gate_q_6;
  rz(3.0201131008540396) _gate_q_9;
  cu1_5074135440(0.023981277687413163) _gate_q_1, _gate_q_13;
  rz(4.8865317771616645) _gate_q_6;
  cx _gate_q_5, _gate_q_16;
  rzz_5074127040(3.622300021847432) _gate_q_12, _gate_q_10;
  ch _gate_q_2, _gate_q_11;
  x _gate_q_9;
  sdg _gate_q_8;
  r_5074135152(1.6553560131321954, 0.9262405007578418) _gate_q_3;
  cry(0.5894914948491154) _gate_q_15, _gate_q_7;
  s _gate_q_4;
  dcx _gate_q_0, _gate_q_14;
  rzx_5074135296(4.011875903384474) _gate_q_3, _gate_q_9;
  cp(1.139258295699746) _gate_q_14, _gate_q_2;
  rx(4.0386529758258645) _gate_q_1;
  id _gate_q_10;
  x _gate_q_4;
  xx_minus_yy_5074130400(6.122750613030186, 5.397519234191176) _gate_q_11, _gate_q_16;
  cu(1.0291717745707156, 2.8531639471678227, 0.23041557395591983, 3.3940528762034026) _gate_q_13, _gate_q_6;
  xx_plus_yy_5074233360(5.838301988777335, 4.576357863899799) _gate_q_0, _gate_q_5;
  t _gate_q_8;
  ry(3.6522117945882333) _gate_q_12;
  u2(3.085568162187949, 0.8593883111940817) _gate_q_15;
  sx _gate_q_7;
}