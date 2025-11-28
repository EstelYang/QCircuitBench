gate ryy_5107605840(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2285432143886144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5107602720(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.2778415965633307) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.7228527965890534) _gate_q_0;
  ry(-2.7228527965890534) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.2778415965633307) _gate_q_1;
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
gate r_5107604016(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.42326009371235, -0.524127393818949, 0.524127393818949) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzz_5107609824(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.311149828932841) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate r_5107607760(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.234130903160306, -0.18949915143546958, 0.18949915143546958) _gate_q_0;
}
gate r_5107601616(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.013482874336574, 4.39332296504505, -4.39332296504505) _gate_q_0;
}
gate xx_plus_yy_5107605216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.5084808943293) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2540262772568462) _gate_q_1;
  ry(-0.2540262772568462) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.5084808943293) _gate_q_0;
}
gate rxx_5107597824(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.255000468075486) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5107599024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.155980770268255) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5107612992(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.9107347674306228) _gate_q_0;
  u1(1.0714966705109599) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.260553280000882, 0, -2.9107347674306228) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.260553280000882, 1.8392380969196627, 0) _gate_q_1;
}
gate xx_minus_yy_5107600416(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.5592243302776776) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.0134424815978322) _gate_q_0;
  ry(-3.0134424815978322) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.5592243302776776) _gate_q_1;
}
gate xx_minus_yy_5107605744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.6623856523573375) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.40668443427260337) _gate_q_0;
  ry(-0.40668443427260337) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.6623856523573375) _gate_q_1;
}
gate cu3_5107612704(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.159076728789219) _gate_q_0;
  u1(0.5246670891102625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.3007537809852807, 0, -4.159076728789219) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.3007537809852807, 3.6344096396789562, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu1_5107610448(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1762303701566197) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1762303701566197) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1762303701566197) _gate_q_1;
}
gate xx_plus_yy_5107610016(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.8695620859149154) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5748700190006816) _gate_q_1;
  ry(-0.5748700190006816) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.8695620859149154) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5107609680(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.47056527506796886, -0.916245664203874, 0.916245664203874) _gate_q_0;
}
gate xx_plus_yy_5107605024(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.485256272303745) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.889864264761804) _gate_q_1;
  ry(-0.889864264761804) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.485256272303745) _gate_q_0;
}
gate xx_plus_yy_5107608912(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.12552834462493) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7079654696189583) _gate_q_1;
  ry(-1.7079654696189583) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.12552834462493) _gate_q_0;
}
gate cu3_5107608240(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.521039245744716) _gate_q_0;
  u1(0.7259635372763298) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9768095525854499, 0, -2.521039245744716) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9768095525854499, 1.7950757084683864, 0) _gate_q_1;
}
gate r_5107608384(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.313186747985117, 3.4129280208503774, -3.4129280208503774) _gate_q_0;
}
gate rzx_5107611360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2074148654878816) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5107611024(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.405793089229614, 3.9777138609196294, -3.9777138609196294) _gate_q_0;
}
gate rxx_5107603968(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.453210683259537) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5107608864(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.895260926162754) _gate_q_0;
  u1(-0.37810463486004364) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2963998928685614, 0, -2.895260926162754) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2963998928685614, 3.2733655610227976, 0) _gate_q_1;
}
gate r_5107612128(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.260957721924644, -0.7931689042730583, 0.7931689042730583) _gate_q_0;
}
gate xx_plus_yy_5107603248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.875500037429084) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7328908141535129) _gate_q_1;
  ry(-1.7328908141535129) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.875500037429084) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate ryy_5107603104(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4873957617146191) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5107608960(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.018677935719111503) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  rx(0.5585630601309683) _gate_q_13;
  ch _gate_q_14, _gate_q_15;
  t _gate_q_8;
  ryy_5107605840(1.2285432143886144) _gate_q_4, _gate_q_11;
  xx_minus_yy_5107602720(5.445705593178107, 2.2778415965633307) _gate_q_16, _gate_q_6;
  csx _gate_q_9, _gate_q_1;
  r_5107604016(2.42326009371235, 1.0466689329759475) _gate_q_10;
  iswap _gate_q_0, _gate_q_3;
  csx _gate_q_17, _gate_q_2;
  y _gate_q_7;
  z _gate_q_5;
  u2(3.7416043559570205, 3.2768341057098516) _gate_q_12;
  rz(0.9981460840355129) _gate_q_6;
  cz _gate_q_9, _gate_q_11;
  p(3.2451154658150445) _gate_q_5;
  t _gate_q_16;
  rzz_5107609824(4.311149828932841) _gate_q_8, _gate_q_14;
  ecr _gate_q_13, _gate_q_3;
  U(0.7695505993314822, 2.547049291739101, 1.237358150048548) _gate_q_17;
  sx _gate_q_15;
  cx _gate_q_7, _gate_q_12;
  s _gate_q_2;
  cry(5.337936002454473) _gate_q_0, _gate_q_4;
  rx(2.2117967509906395) _gate_q_10;
  t _gate_q_1;
  r_5107607760(4.234130903160306, 1.381297175359427) _gate_q_10;
  r_5107601616(2.013482874336574, 5.964119291839946) _gate_q_7;
  u1(0.16125291783183976) _gate_q_17;
  xx_plus_yy_5107605216(0.5080525545136924, 5.5084808943293) _gate_q_8, _gate_q_16;
  tdg _gate_q_9;
  sxdg _gate_q_15;
  s _gate_q_2;
  cz _gate_q_4, _gate_q_13;
  tdg _gate_q_5;
  rxx_5107597824(2.255000468075486) _gate_q_6, _gate_q_11;
  sx _gate_q_12;
  cu(3.8967578613573917, 1.4539735790530486, 0.875168526482417, 1.0786032651208324) _gate_q_3, _gate_q_14;
  swap _gate_q_1, _gate_q_0;
  sdg _gate_q_16;
  cp(4.8020333058637386) _gate_q_11, _gate_q_8;
  t _gate_q_5;
  iswap _gate_q_17, _gate_q_15;
  rzx_5107599024(5.155980770268255) _gate_q_3, _gate_q_9;
  cu3_5107612992(0.521106560001764, 1.8392380969196627, 3.9822314379415826) _gate_q_13, _gate_q_1;
  u3(3.175329499015258, 5.102094956676569, 3.942173467898492) _gate_q_4;
  z _gate_q_14;
  xx_minus_yy_5107600416(6.0268849631956645, 0.5592243302776776) _gate_q_0, _gate_q_2;
  xx_minus_yy_5107605744(0.8133688685452067, 4.6623856523573375) _gate_q_12, _gate_q_6;
  cu3_5107612704(4.601507561970561, 3.6344096396789562, 4.683743817899481) _gate_q_10, _gate_q_7;
  U(3.5058828610120907, 3.4779760973356404, 5.742307744028329) _gate_q_7;
  crx(5.283811612665784) _gate_q_16, _gate_q_8;
  x _gate_q_10;
  id _gate_q_13;
  sxdg _gate_q_0;
  swap _gate_q_14, _gate_q_15;
  cu(5.231617395919675, 0.3215375066433435, 5.361434494851795, 2.08089830930605) _gate_q_6, _gate_q_4;
  cz _gate_q_2, _gate_q_5;
  dcx _gate_q_9, _gate_q_3;
  cu1_5107610448(2.3524607403132394) _gate_q_11, _gate_q_12;
  xx_plus_yy_5107610016(1.1497400380013632, 3.8695620859149154) _gate_q_1, _gate_q_17;
  sdg _gate_q_11;
  u2(4.75860149280819, 3.20378933342374) _gate_q_8;
  csdg _gate_q_1, _gate_q_5;
  s _gate_q_3;
  r_5107609680(0.47056527506796886, 0.6545506625910226) _gate_q_6;
  xx_plus_yy_5107605024(1.779728529523608, 5.485256272303745) _gate_q_14, _gate_q_4;
  csdg _gate_q_10, _gate_q_12;
  xx_plus_yy_5107608912(3.4159309392379167, 6.12552834462493) _gate_q_15, _gate_q_16;
  rx(1.5922891181739731) _gate_q_7;
  u3(3.0220285626063266, 2.109915319105381, 1.4856444879580375) _gate_q_17;
  sxdg _gate_q_0;
  cp(1.5903732441187026) _gate_q_9, _gate_q_2;
  rx(2.8012693565409372) _gate_q_13;
  sdg _gate_q_10;
  cu3_5107608240(3.9536191051708998, 1.7950757084683864, 3.247002783021046) _gate_q_15, _gate_q_14;
  cu(3.0260730288504956, 0.48720814451806266, 2.965517328879017, 0.95012852909406) _gate_q_4, _gate_q_9;
  cu(2.770063135207116, 2.996257496320697, 2.4220426774871817, 0.8820117303208357) _gate_q_12, _gate_q_1;
  rz(3.773240862342944) _gate_q_16;
  cz _gate_q_2, _gate_q_5;
  sx _gate_q_13;
  csdg _gate_q_6, _gate_q_3;
  p(1.0744698299027022) _gate_q_17;
  r_5107608384(5.313186747985117, 4.983724347645274) _gate_q_11;
  rzx_5107611360(1.2074148654878816) _gate_q_8, _gate_q_0;
  s _gate_q_7;
  rz(3.4107905842133763) _gate_q_10;
  cp(5.741947782716469) _gate_q_14, _gate_q_9;
  ry(5.5705337851930885) _gate_q_1;
  U(3.200826063282547, 1.9392346701142569, 2.1446139470950816) _gate_q_17;
  rz(0.255184783470748) _gate_q_8;
  r_5107611024(1.405793089229614, 5.548510187714526) _gate_q_12;
  rxx_5107603968(4.453210683259537) _gate_q_2, _gate_q_15;
  cu3_5107608864(4.592799785737123, 3.2733655610227976, 2.5171562913027103) _gate_q_6, _gate_q_5;
  y _gate_q_11;
  cu(2.2865373295690348, 5.945075985287297, 3.378522531385716, 3.949841386581717) _gate_q_4, _gate_q_13;
  u3(1.2152131171105818, 5.576519016061645, 0.30109659706765385) _gate_q_16;
  r_5107612128(5.260957721924644, 0.7776274225218383) _gate_q_7;
  id _gate_q_0;
  sxdg _gate_q_3;
  ecr _gate_q_5, _gate_q_10;
  y _gate_q_15;
  crx(1.7279707583479669) _gate_q_0, _gate_q_17;
  xx_plus_yy_5107603248(3.4657816283070257, 1.875500037429084) _gate_q_2, _gate_q_14;
  crx(1.9758574269088258) _gate_q_9, _gate_q_11;
  cry(5.919187899756161) _gate_q_12, _gate_q_3;
  s _gate_q_8;
  cry(3.615418728291037) _gate_q_1, _gate_q_6;
  tdg _gate_q_4;
  y _gate_q_7;
  ch _gate_q_13, _gate_q_16;
  u1(3.4930387092852495) _gate_q_2;
  u3(6.125164923101951, 5.368309254918101, 3.334482902788468) _gate_q_15;
  x _gate_q_0;
  cy _gate_q_17, _gate_q_12;
  x _gate_q_1;
  cs _gate_q_3, _gate_q_10;
  sdg _gate_q_7;
  sdg _gate_q_14;
  cry(3.28315887477269) _gate_q_13, _gate_q_4;
  sxdg _gate_q_16;
  rx(5.068439055128815) _gate_q_5;
  ryy_5107603104(0.4873957617146191) _gate_q_6, _gate_q_8;
  ryy_5107608960(0.018677935719111503) _gate_q_11, _gate_q_9;
}
gate r_5107605792(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.346674779869666, 2.4009498172582218, -2.4009498172582218) _gate_q_0;
}
gate ryy_5107601760(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0821901954420836) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5107602336(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.872198786034489) _gate_q_0;
  u1(0.9056169974632735) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.3031912511989057, 0, -1.872198786034489) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.3031912511989057, 0.9665817885712155, 0) _gate_q_1;
}
gate ryy_5107612752(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8949544396031504) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5107613088(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6891419355683464) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5107600560(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2667555865156361) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2667555865156361) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2667555865156361) _gate_q_1;
}
gate rzz_5107608528(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.9602392558954612) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5107611072(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.3044240523725581) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.3044240523725581) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.3044240523725581) _gate_q_1;
}
gate xx_minus_yy_5107598928(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.3951488908035765) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.0373190933857224) _gate_q_0;
  ry(-3.0373190933857224) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.3951488908035765) _gate_q_1;
}
gate rxx_5107600800(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8137455826424916) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5107611168(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6159010459444354) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5107610880(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.5682935700052134) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.046644332070308) _gate_q_1;
  ry(-3.046644332070308) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.5682935700052134) _gate_q_0;
}
gate r_5107611264(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.925622065221357, -1.5247476524459995, 1.5247476524459995) _gate_q_0;
}
gate xx_minus_yy_5107601568(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.6469606494684355) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8797217261712014) _gate_q_0;
  ry(-0.8797217261712014) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.6469606494684355) _gate_q_1;
}
gate cu1_5107601184(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.9372521094382282) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.9372521094382282) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.9372521094382282) _gate_q_1;
}
gate rzx_5107612176(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4612764104686249) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5107604784(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.107076737039169, 2.990918850051669, -2.990918850051669) _gate_q_0;
}
gate rzx_5107602096(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.090677376632518) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5107604688(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.7251648021776727, 4.534109254319445, -4.534109254319445) _gate_q_0;
}
gate rzx_5107611312(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7017105242334356) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5107603008(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.801173282185388) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5107608816(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5195341772349464) _gate_q_0;
  u1(-1.5629300646956605) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8738631580947787, 0, -2.5195341772349464) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8738631580947787, 4.082464241930607, 0) _gate_q_1;
}
gate cu3_5107604064(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.7335863144773995) _gate_q_0;
  u1(-0.9014579531220397) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0371782846400162, 0, -3.7335863144773995) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0371782846400162, 4.635044267599439, 0) _gate_q_1;
}
gate xx_minus_yy_5107605312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.0142116189105077) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.24873099650674044) _gate_q_0;
  ry(-0.24873099650674044) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.0142116189105077) _gate_q_1;
}
gate rxx_5107597872(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.037981596900116) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  dcx _gate_q_8, _gate_q_17;
  y _gate_q_3;
  tdg _gate_q_16;
  cry(5.374440114168924) _gate_q_15, _gate_q_6;
  z _gate_q_2;
  s _gate_q_10;
  r_5107605792(5.346674779869666, 3.9717461440531183) _gate_q_9;
  rz(1.0420976539898692) _gate_q_11;
  sdg _gate_q_14;
  ch _gate_q_0, _gate_q_12;
  u1(1.7784906325109164) _gate_q_1;
  rz(4.846294313259203) _gate_q_5;
  s _gate_q_13;
  s _gate_q_7;
  rx(2.9032651601251986) _gate_q_4;
  cy _gate_q_17, _gate_q_2;
  cu(6.137917696154275, 5.3049294640381754, 6.280833217338037, 3.4284416233145896) _gate_q_7, _gate_q_15;
  ryy_5107601760(3.0821901954420836) _gate_q_5, _gate_q_16;
  csdg _gate_q_1, _gate_q_10;
  U(2.6305370467098204, 4.376736545475248, 5.9944105789268605) _gate_q_11;
  cu(1.7677857364335339, 2.1643382746553748, 1.1638073504521624, 5.98997445240255) _gate_q_8, _gate_q_6;
  x _gate_q_12;
  rz(5.950836942089634) _gate_q_4;
  u2(2.2714997388995237, 2.017841300162769) _gate_q_9;
  rx(3.462673237120803) _gate_q_3;
  cp(0.7656707290871395) _gate_q_13, _gate_q_14;
  sxdg _gate_q_0;
  tdg _gate_q_8;
  crx(5.915970249606615) _gate_q_6, _gate_q_11;
  cu3_5107602336(4.606382502397811, 0.9665817885712155, 2.7778157834977626) _gate_q_16, _gate_q_14;
  U(2.177663521274651, 2.47280740396422, 2.25966444952508) _gate_q_12;
  z _gate_q_13;
  p(6.274839683153239) _gate_q_4;
  id _gate_q_10;
  z _gate_q_3;
  h _gate_q_5;
  cs _gate_q_9, _gate_q_1;
  crx(1.015851821638275) _gate_q_15, _gate_q_2;
  p(4.289004683399821) _gate_q_17;
  cx _gate_q_7, _gate_q_0;
  rx(6.248762040454319) _gate_q_4;
  ecr _gate_q_9, _gate_q_6;
  swap _gate_q_11, _gate_q_7;
  crx(0.4117927515207896) _gate_q_13, _gate_q_15;
  u3(0.28887188904582195, 1.623136765162702, 0.944634756822146) _gate_q_0;
  ryy_5107612752(1.8949544396031504) _gate_q_5, _gate_q_2;
  z _gate_q_10;
  cs _gate_q_17, _gate_q_16;
  ch _gate_q_1, _gate_q_14;
  id _gate_q_8;
  ryy_5107613088(1.6891419355683464) _gate_q_12, _gate_q_3;
  swap _gate_q_9, _gate_q_15;
  cu1_5107600560(2.5335111730312723) _gate_q_1, _gate_q_2;
  u3(2.4089417911415962, 1.665159168570211, 2.429177781705279) _gate_q_6;
  z _gate_q_3;
  cp(6.063732531702897) _gate_q_14, _gate_q_4;
  sdg _gate_q_13;
  s _gate_q_8;
  u2(1.901487311970003, 3.42689090148699) _gate_q_7;
  tdg _gate_q_0;
  crz(5.834616602724446) _gate_q_17, _gate_q_5;
  cs _gate_q_12, _gate_q_10;
  u3(1.4322531103185505, 3.352557349769216, 3.9933436997219025) _gate_q_16;
  u2(6.267654080504371, 1.6397219976277115) _gate_q_11;
  cry(4.488868810656388) _gate_q_6, _gate_q_5;
  rz(1.704212164130338) _gate_q_0;
  rzz_5107608528(0.9602392558954612) _gate_q_11, _gate_q_7;
  cu1_5107611072(0.6088481047451162) _gate_q_10, _gate_q_3;
  cz _gate_q_1, _gate_q_4;
  t _gate_q_2;
  xx_minus_yy_5107598928(6.074638186771445, 3.3951488908035765) _gate_q_16, _gate_q_15;
  z _gate_q_12;
  crx(3.0650976173163245) _gate_q_9, _gate_q_13;
  rxx_5107600800(0.8137455826424916) _gate_q_8, _gate_q_14;
  x _gate_q_17;
  rx(4.631986851115062) _gate_q_2;
  rxx_5107611168(3.6159010459444354) _gate_q_9, _gate_q_1;
  iswap _gate_q_3, _gate_q_8;
  xx_plus_yy_5107610880(6.093288664140616, 3.5682935700052134) _gate_q_0, _gate_q_11;
  r_5107611264(5.925622065221357, 0.04604867434889692) _gate_q_16;
  xx_minus_yy_5107601568(1.7594434523424027, 5.6469606494684355) _gate_q_14, _gate_q_13;
  cu1_5107601184(5.8745042188764565) _gate_q_6, _gate_q_5;
  sx _gate_q_12;
  rx(3.830469398805194) _gate_q_10;
  ecr _gate_q_17, _gate_q_15;
  rx(5.4810094223904855) _gate_q_4;
  tdg _gate_q_7;
  rzx_5107612176(1.4612764104686249) _gate_q_11, _gate_q_9;
  crx(3.0360950552450015) _gate_q_5, _gate_q_14;
  cy _gate_q_1, _gate_q_12;
  z _gate_q_8;
  r_5107604784(6.107076737039169, 4.561715176846565) _gate_q_15;
  s _gate_q_16;
  s _gate_q_13;
  rzx_5107602096(4.090677376632518) _gate_q_4, _gate_q_17;
  r_5107604688(1.7251648021776727, 6.104905581114341) _gate_q_10;
  sdg _gate_q_0;
  csx _gate_q_3, _gate_q_2;
  u1(2.6770864035080204) _gate_q_7;
  p(0.0745483531254487) _gate_q_6;
  rzx_5107611312(3.7017105242334356) _gate_q_8, _gate_q_10;
  cy _gate_q_5, _gate_q_3;
  iswap _gate_q_7, _gate_q_14;
  s _gate_q_13;
  ry(1.2589541320450957) _gate_q_16;
  crx(2.5729981049318362) _gate_q_6, _gate_q_12;
  ryy_5107603008(4.801173282185388) _gate_q_15, _gate_q_1;
  cy _gate_q_9, _gate_q_2;
  sdg _gate_q_17;
  rx(0.27734016482820223) _gate_q_0;
  sxdg _gate_q_4;
  u2(2.7211191167841506, 6.042590196939279) _gate_q_11;
  cy _gate_q_14, _gate_q_7;
  U(3.1420433503829264, 2.9287863546791812, 0.4229847058807872) _gate_q_10;
  rx(4.708830907975736) _gate_q_1;
  tdg _gate_q_6;
  cu3_5107608816(5.747726316189557, 4.082464241930607, 0.9566041125392859) _gate_q_2, _gate_q_8;
  cu3_5107604064(2.0743565692800323, 4.635044267599439, 2.83212836135536) _gate_q_3, _gate_q_15;
  xx_minus_yy_5107605312(0.4974619930134809, 3.0142116189105077) _gate_q_0, _gate_q_11;
  y _gate_q_5;
  cry(5.486254988130238) _gate_q_13, _gate_q_9;
  sdg _gate_q_17;
  p(0.13550424153625112) _gate_q_4;
  rxx_5107597872(1.037981596900116) _gate_q_12, _gate_q_16;
}