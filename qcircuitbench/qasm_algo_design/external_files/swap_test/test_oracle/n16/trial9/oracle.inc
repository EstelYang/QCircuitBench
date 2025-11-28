gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5105585040(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.9878154994106016) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.7943996317904682) _gate_q_1;
  ry(-2.7943996317904682) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.9878154994106016) _gate_q_0;
}
gate xx_minus_yy_5105595840(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.859384002208701) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.179845210696809) _gate_q_0;
  ry(-2.179845210696809) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.859384002208701) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5105594400(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1683811855429154) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105587056(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.593108594332485) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate r_5105597664(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.07001449908803106, 3.2845522555415014, -3.2845522555415014) _gate_q_0;
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
gate rzz_5105596800(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6894995736835607) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5105596944(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.674516343544443) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5105592720(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.2067156784810935) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5105591712(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.6411051549597278) _gate_q_0;
  u1(-0.4828045786703754) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.571926511693784, 0, -0.6411051549597278) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.571926511693784, 1.1239097336301032, 0) _gate_q_1;
}
gate r_5105585520(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.9398578034375964, 4.350892873928482, -4.350892873928482) _gate_q_0;
}
gate xx_minus_yy_5105592912(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.972083988940407) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4057029344027927) _gate_q_0;
  ry(-2.4057029344027927) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.972083988940407) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu1_5105584416(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.14455476853513474) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.14455476853513474) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.14455476853513474) _gate_q_1;
}
gate xx_minus_yy_5105598192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.539199411369133) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6833827150017067) _gate_q_0;
  ry(-0.6833827150017067) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.539199411369133) _gate_q_1;
}
gate rzx_5107326496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3242445389982983) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5107331344(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.638322644574911) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.0146430736496965) _gate_q_1;
  ry(-3.0146430736496965) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.638322644574911) _gate_q_0;
}
gate ryy_5107322560(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2987161196059445) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5107324816(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.46206857544751573) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.46206857544751573) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.46206857544751573) _gate_q_1;
}
gate cu1_5107334704(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3578755938752765) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3578755938752765) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3578755938752765) _gate_q_1;
}
gate rzz_5107323472(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.8641947140893188) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5107324528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.3814401464857307) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7818857328664335) _gate_q_1;
  ry(-1.7818857328664335) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.3814401464857307) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzz_5117024960(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.41634113523368) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  U(1.8310114821322576, 3.474686467358489, 3.595536814233981) _gate_q_2;
  sdg _gate_q_9;
  xx_plus_yy_5105585040(5.5887992635809365, 3.9878154994106016) _gate_q_15, _gate_q_11;
  tdg _gate_q_12;
  xx_minus_yy_5105595840(4.359690421393618, 2.859384002208701) _gate_q_5, _gate_q_14;
  rz(4.996305740843368) _gate_q_8;
  cy _gate_q_1, _gate_q_6;
  ch _gate_q_13, _gate_q_10;
  csdg _gate_q_0, _gate_q_4;
  rzx_5105594400(2.1683811855429154) _gate_q_7, _gate_q_3;
  ryy_5105587056(4.593108594332485) _gate_q_1, _gate_q_2;
  z _gate_q_9;
  ecr _gate_q_7, _gate_q_4;
  p(0.023430532077118) _gate_q_5;
  cx _gate_q_11, _gate_q_10;
  cy _gate_q_6, _gate_q_8;
  swap _gate_q_3, _gate_q_0;
  ry(2.886561117880599) _gate_q_13;
  r_5105597664(0.07001449908803106, 4.855348582336398) _gate_q_15;
  crz(2.01413191618037) _gate_q_12, _gate_q_14;
  t _gate_q_11;
  cry(1.1758497645228017) _gate_q_5, _gate_q_9;
  ch _gate_q_10, _gate_q_6;
  csx _gate_q_7, _gate_q_14;
  t _gate_q_8;
  t _gate_q_3;
  csx _gate_q_4, _gate_q_1;
  csdg _gate_q_0, _gate_q_13;
  crx(6.256505123424593) _gate_q_15, _gate_q_12;
  x _gate_q_2;
  rzz_5105596800(0.6894995736835607) _gate_q_15, _gate_q_14;
  cy _gate_q_9, _gate_q_2;
  ryy_5105596944(4.674516343544443) _gate_q_4, _gate_q_5;
  rzz_5105592720(4.2067156784810935) _gate_q_3, _gate_q_6;
  u3(4.364405389956463, 5.767447822645896, 3.8780716722495674) _gate_q_7;
  id _gate_q_13;
  iswap _gate_q_12, _gate_q_1;
  y _gate_q_0;
  h _gate_q_10;
  u1(0.9227213409607985) _gate_q_11;
  U(4.56748971551011, 0.453460461898018, 4.317717416907622) _gate_q_8;
  csx _gate_q_10, _gate_q_5;
  cu3_5105591712(5.143853023387568, 1.1239097336301032, 0.15830057628935235) _gate_q_0, _gate_q_3;
  u1(1.0948034157278126) _gate_q_15;
  u2(5.564961783792726, 5.326257163213462) _gate_q_9;
  u3(1.9412673341320943, 2.16123755258168, 3.419810913966036) _gate_q_13;
  x _gate_q_8;
  h _gate_q_4;
  crz(5.5668600658090766) _gate_q_1, _gate_q_7;
  h _gate_q_14;
  cu(4.753795894453383, 1.8294074884515557, 2.112116099045637, 3.8195142372931525) _gate_q_12, _gate_q_6;
  r_5105585520(1.9398578034375964, 5.921689200723378) _gate_q_2;
  s _gate_q_11;
  csdg _gate_q_13, _gate_q_9;
  iswap _gate_q_0, _gate_q_3;
  ch _gate_q_6, _gate_q_4;
  U(5.826208347180152, 2.538406685962067, 0.014049092387723332) _gate_q_5;
  xx_minus_yy_5105592912(4.811405868805585, 4.972083988940407) _gate_q_14, _gate_q_15;
  s _gate_q_1;
  dcx _gate_q_10, _gate_q_7;
  rz(0.09638967195722366) _gate_q_12;
  U(1.768695961198501, 6.122061725055082, 4.584012757717855) _gate_q_2;
  cu1_5105584416(0.2891095370702695) _gate_q_8, _gate_q_11;
  u2(1.8102550215510445, 2.0955354802241035) _gate_q_8;
  crx(2.2008372725455465) _gate_q_10, _gate_q_5;
  xx_minus_yy_5105598192(1.3667654300034133, 2.539199411369133) _gate_q_14, _gate_q_12;
  z _gate_q_4;
  ry(1.3370112792963336) _gate_q_2;
  crx(4.736595424932268) _gate_q_7, _gate_q_13;
  id _gate_q_11;
  rzx_5107326496(0.3242445389982983) _gate_q_9, _gate_q_1;
  ecr _gate_q_0, _gate_q_15;
  cu(2.3433137726484863, 6.276010576201653, 2.0225347134842178, 4.994363916084772) _gate_q_6, _gate_q_3;
  u1(2.9509468495856277) _gate_q_9;
  xx_plus_yy_5107331344(6.029286147299393, 3.638322644574911) _gate_q_13, _gate_q_14;
  u2(1.2026644655663556, 5.930374158693822) _gate_q_0;
  ryy_5107322560(3.2987161196059445) _gate_q_2, _gate_q_4;
  crz(5.301917375343138) _gate_q_11, _gate_q_8;
  sxdg _gate_q_7;
  id _gate_q_10;
  u2(5.531806721887475, 5.3020202417349145) _gate_q_1;
  cu1_5107324816(0.9241371508950315) _gate_q_15, _gate_q_5;
  cu1_5107334704(2.715751187750553) _gate_q_6, _gate_q_3;
  U(3.722553571565291, 0.6719897060759491, 5.098393045193669) _gate_q_12;
  cy _gate_q_15, _gate_q_3;
  ecr _gate_q_4, _gate_q_7;
  u2(3.103507276794133, 2.6466719709947952) _gate_q_12;
  sxdg _gate_q_9;
  rx(1.3346660792798124) _gate_q_0;
  swap _gate_q_5, _gate_q_6;
  x _gate_q_8;
  rzz_5107323472(0.8641947140893188) _gate_q_11, _gate_q_14;
  u2(4.120276598049437, 2.16847284254457) _gate_q_13;
  xx_plus_yy_5107324528(3.563771465732867, 3.3814401464857307) _gate_q_10, _gate_q_2;
  sdg _gate_q_1;
  tdg _gate_q_10;
  crx(2.912364140773163) _gate_q_3, _gate_q_2;
  cz _gate_q_12, _gate_q_7;
  ch _gate_q_15, _gate_q_4;
  cs _gate_q_1, _gate_q_5;
  h _gate_q_13;
  u1(0.4351151899767597) _gate_q_14;
  u2(1.8742145750900814, 4.509068370263406) _gate_q_6;
  sdg _gate_q_0;
  rzz_5117024960(4.41634113523368) _gate_q_9, _gate_q_8;
  y _gate_q_11;
}
gate cu1_5117023856(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4485566490465813) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4485566490465813) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4485566490465813) _gate_q_1;
}
gate ryy_5117019968(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.640623402240913) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5117020208(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.303176856439852) _gate_q_0;
  u1(2.9630046521589604) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.084688925760597, 0, -3.303176856439852) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.084688925760597, 0.3401722042808915, 0) _gate_q_1;
}
gate rzz_5117019440(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.385334652186387) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5117020304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.748797079435098) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5901752139031683) _gate_q_1;
  ry(-0.5901752139031683) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.748797079435098) _gate_q_0;
}
gate rxx_5117020160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2223487284914394) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5117020976(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.886387343786853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5117020928(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.636018165345636) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.10837491824194015) _gate_q_0;
  ry(-0.10837491824194015) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.636018165345636) _gate_q_1;
}
gate ryy_5117026592(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9857989123429409) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5117021648(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.015269877809116, 2.384721091621841, -2.384721091621841) _gate_q_0;
}
gate xx_minus_yy_5117027984(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.0666209773337885) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7895106794411868) _gate_q_0;
  ry(-1.7895106794411868) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.0666209773337885) _gate_q_1;
}
gate rxx_5117020448(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5854144261351193) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5117027840(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5376419954391576) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5117028128(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.261150425688427) _gate_q_0;
  u1(2.323700940431771) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5841823959773371, 0, -3.261150425688427) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5841823959773371, 0.9374494852566564, 0) _gate_q_1;
}
gate r_5117018672(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.5769825555080514, -1.4232849973578792, 1.4232849973578792) _gate_q_0;
}
gate xx_plus_yy_5117019008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.6468314984635994) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0930959898213417) _gate_q_1;
  ry(-2.0930959898213417) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.6468314984635994) _gate_q_0;
}
gate rzz_5117018480(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.676858312249858) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5117021168(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1434802987316137) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5117021840(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.8382270814186175) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5117022176(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.056543242248336) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  s _gate_q_9;
  cu1_5117023856(4.897113298093163) _gate_q_4, _gate_q_11;
  s _gate_q_2;
  ryy_5117019968(5.640623402240913) _gate_q_3, _gate_q_0;
  cu3_5117020208(2.169377851521194, 0.3401722042808915, 6.266181508598812) _gate_q_13, _gate_q_10;
  rzz_5117019440(5.385334652186387) _gate_q_1, _gate_q_12;
  id _gate_q_14;
  sxdg _gate_q_5;
  ry(4.62002820912121) _gate_q_6;
  z _gate_q_8;
  ecr _gate_q_7, _gate_q_15;
  csx _gate_q_1, _gate_q_2;
  cy _gate_q_5, _gate_q_13;
  dcx _gate_q_15, _gate_q_12;
  xx_plus_yy_5117020304(1.1803504278063366, 5.748797079435098) _gate_q_14, _gate_q_8;
  rxx_5117020160(2.2223487284914394) _gate_q_9, _gate_q_6;
  rzz_5117020976(4.886387343786853) _gate_q_3, _gate_q_4;
  xx_minus_yy_5117020928(0.2167498364838803, 3.636018165345636) _gate_q_11, _gate_q_0;
  cry(4.364157154900942) _gate_q_7, _gate_q_10;
  crx(3.4547370695569697) _gate_q_10, _gate_q_4;
  x _gate_q_12;
  ecr _gate_q_9, _gate_q_0;
  cy _gate_q_1, _gate_q_6;
  csdg _gate_q_13, _gate_q_2;
  s _gate_q_7;
  csdg _gate_q_8, _gate_q_3;
  sxdg _gate_q_15;
  iswap _gate_q_5, _gate_q_11;
  rx(2.2971305012830774) _gate_q_14;
  iswap _gate_q_9, _gate_q_1;
  crz(2.6155271640195847) _gate_q_3, _gate_q_4;
  sx _gate_q_7;
  y _gate_q_0;
  cs _gate_q_14, _gate_q_5;
  cs _gate_q_2, _gate_q_8;
  cu(6.245877154340468, 1.196187892140673, 5.0475655496883345, 3.3498733102638374) _gate_q_6, _gate_q_11;
  ryy_5117026592(0.9857989123429409) _gate_q_12, _gate_q_13;
  y _gate_q_15;
  r_5117021648(4.015269877809116, 3.9555174184167377) _gate_q_10;
  u3(3.433240391781398, 1.3672918445842581, 3.0327269357775304) _gate_q_8;
  rx(6.250424173008546) _gate_q_1;
  rz(2.3316807430410376) _gate_q_9;
  cry(3.0502325298000765) _gate_q_12, _gate_q_11;
  tdg _gate_q_14;
  cy _gate_q_6, _gate_q_0;
  sdg _gate_q_13;
  u3(5.515878221679248, 1.3722998595133964, 5.898850995727395) _gate_q_7;
  xx_minus_yy_5117027984(3.5790213588823736, 2.0666209773337885) _gate_q_4, _gate_q_5;
  rxx_5117020448(3.5854144261351193) _gate_q_3, _gate_q_2;
  sdg _gate_q_15;
  rz(2.238285058924085) _gate_q_10;
  ch _gate_q_3, _gate_q_5;
  p(4.811207506724372) _gate_q_15;
  u1(2.171397855166498) _gate_q_4;
  y _gate_q_7;
  rxx_5117027840(3.5376419954391576) _gate_q_12, _gate_q_14;
  ch _gate_q_6, _gate_q_1;
  p(4.9324795498677405) _gate_q_2;
  u3(4.635130193146938, 0.45688433202526413, 4.365807222424485) _gate_q_11;
  cu3_5117028128(1.1683647919546742, 0.9374494852566564, 5.584851366120198) _gate_q_10, _gate_q_13;
  dcx _gate_q_8, _gate_q_9;
  s _gate_q_0;
  csx _gate_q_12, _gate_q_4;
  r_5117018672(1.5769825555080514, 0.14751132943701728) _gate_q_2;
  cx _gate_q_8, _gate_q_7;
  cy _gate_q_10, _gate_q_13;
  swap _gate_q_9, _gate_q_15;
  swap _gate_q_0, _gate_q_5;
  xx_plus_yy_5117019008(4.186191979642683, 1.6468314984635994) _gate_q_3, _gate_q_6;
  cz _gate_q_14, _gate_q_11;
  rz(3.3303814419854607) _gate_q_1;
  csx _gate_q_7, _gate_q_2;
  cx _gate_q_3, _gate_q_14;
  cx _gate_q_0, _gate_q_15;
  csdg _gate_q_10, _gate_q_4;
  rz(5.8224931826878) _gate_q_11;
  crx(5.429779671314533) _gate_q_13, _gate_q_9;
  sxdg _gate_q_8;
  ry(6.100538277606753) _gate_q_5;
  U(5.3708221492316826, 5.807553859968725, 1.131405238585565) _gate_q_6;
  csx _gate_q_1, _gate_q_12;
  rzz_5117018480(5.676858312249858) _gate_q_4, _gate_q_15;
  y _gate_q_12;
  s _gate_q_9;
  cx _gate_q_6, _gate_q_0;
  rxx_5117021168(1.1434802987316137) _gate_q_10, _gate_q_5;
  t _gate_q_7;
  csx _gate_q_11, _gate_q_8;
  u3(4.651043286387766, 2.4034419434215812, 5.760490766984076) _gate_q_3;
  cs _gate_q_2, _gate_q_13;
  sdg _gate_q_1;
  sxdg _gate_q_14;
  ch _gate_q_8, _gate_q_10;
  cz _gate_q_0, _gate_q_12;
  rzz_5117021840(4.8382270814186175) _gate_q_9, _gate_q_11;
  id _gate_q_13;
  ry(4.587765919364003) _gate_q_7;
  rz(4.374312334423669) _gate_q_2;
  rz(2.1707773569366973) _gate_q_1;
  U(2.83317941461346, 3.483180637065323, 1.3006651144051924) _gate_q_4;
  rzx_5117022176(6.056543242248336) _gate_q_5, _gate_q_15;
  z _gate_q_3;
  cx _gate_q_6, _gate_q_14;
}