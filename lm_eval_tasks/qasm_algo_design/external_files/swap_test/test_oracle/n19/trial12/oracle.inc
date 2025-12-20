gate cu1_5070719216(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.572990185447276) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.572990185447276) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.572990185447276) _gate_q_1;
}
gate cu1_5070722768(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.802191494581398) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.802191494581398) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.802191494581398) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5070729248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.975505241123305) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.0001061528898179023) _gate_q_1;
  ry(-0.0001061528898179023) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.975505241123305) _gate_q_0;
}
gate rzx_5070724112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7380704118869252) _gate_q_1;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5070730112(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7164866646186819) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1444462870419354) _gate_q_1;
  ry(-1.1444462870419354) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7164866646186819) _gate_q_0;
}
gate cu3_5070730928(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.331053061730451) _gate_q_0;
  u1(0.214564256531236) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.6701964960930558, 0, -5.331053061730451) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.6701964960930558, 5.116488805199215, 0) _gate_q_1;
}
gate r_5070728384(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.037971087925178, -1.2914105347130596, 1.2914105347130596) _gate_q_0;
}
gate xx_plus_yy_5070729632(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.548685349531055) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.11417237557957133) _gate_q_1;
  ry(-0.11417237557957133) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.548685349531055) _gate_q_0;
}
gate r_5070731840(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.617779852434062, 2.345171447117071, -2.345171447117071) _gate_q_0;
}
gate ryy_5070718496(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.729691570522403) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5070719072(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.615977848957762) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5070721664(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.128283350045874, -0.8746177407226217, 0.8746177407226217) _gate_q_0;
}
gate ryy_5070717440(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3735998531450635) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5070728192(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.11879055716315) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5070730160(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.414087912753474, 0.7608377678544072, -0.7608377678544072) _gate_q_0;
}
gate xx_minus_yy_5070721712(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.571921482198501) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.11100621903803626) _gate_q_0;
  ry(-0.11100621903803626) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.571921482198501) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5070718976(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.747801802705367) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5070732656(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.461330390208789) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5070719984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6149438225627664) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5070720368(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.2578945270374613) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.2578945270374613) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.2578945270374613) _gate_q_1;
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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu1_5070722000(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4222178663742227) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4222178663742227) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4222178663742227) _gate_q_1;
}
gate cu3_5070721952(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.973079894485619) _gate_q_0;
  u1(1.2847231505281247) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.073612402722771, 0, -3.973079894485619) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.073612402722771, 2.6883567439574945, 0) _gate_q_1;
}
gate r_5070717776(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.821814896041035, 1.4165610434034148, -1.4165610434034148) _gate_q_0;
}
gate r_5070727568(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.326222404972585, 4.660646682097741, -4.660646682097741) _gate_q_0;
}
gate r_5070725792(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.288395331139992, 1.3820845960908659, -1.3820845960908659) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  cu1_5070719216(5.145980370894552) _gate_q_14, _gate_q_18;
  s _gate_q_4;
  cu1_5070722768(5.604382989162796) _gate_q_1, _gate_q_13;
  cz _gate_q_8, _gate_q_9;
  swap _gate_q_3, _gate_q_12;
  crx(1.691278416621011) _gate_q_17, _gate_q_7;
  cx _gate_q_5, _gate_q_10;
  xx_plus_yy_5070729248(0.0002123057796358046, 5.975505241123305) _gate_q_2, _gate_q_6;
  cry(2.6825272467152415) _gate_q_0, _gate_q_16;
  rzx_5070724112(0.7380704118869252) _gate_q_11, _gate_q_15;
  ry(5.798961607117431) _gate_q_4;
  cs _gate_q_1, _gate_q_16;
  sdg _gate_q_10;
  ch _gate_q_17, _gate_q_2;
  cz _gate_q_18, _gate_q_14;
  cp(1.570359966845082) _gate_q_6, _gate_q_11;
  sdg _gate_q_9;
  dcx _gate_q_8, _gate_q_12;
  rx(1.861923377471778) _gate_q_13;
  tdg _gate_q_3;
  cy _gate_q_5, _gate_q_15;
  z _gate_q_7;
  ry(6.056686943819985) _gate_q_0;
  tdg _gate_q_0;
  sxdg _gate_q_4;
  xx_plus_yy_5070730112(2.288892574083871, 0.7164866646186819) _gate_q_13, _gate_q_14;
  h _gate_q_3;
  cy _gate_q_6, _gate_q_9;
  cu3_5070730928(5.3403929921861115, 5.116488805199215, 5.545617318261687) _gate_q_10, _gate_q_11;
  rz(3.825922781465444) _gate_q_15;
  U(0.7688487511431327, 0.39259943416417137, 6.237747967474668) _gate_q_2;
  dcx _gate_q_1, _gate_q_7;
  ry(2.315028293572861) _gate_q_18;
  x _gate_q_16;
  rx(1.3678939457083028) _gate_q_5;
  cz _gate_q_12, _gate_q_8;
  sdg _gate_q_17;
  rx(4.592843898507281) _gate_q_9;
  z _gate_q_0;
  r_5070728384(3.037971087925178, 0.2793857920818371) _gate_q_1;
  xx_plus_yy_5070729632(0.22834475115914266, 5.548685349531055) _gate_q_3, _gate_q_15;
  U(3.799863050550817, 6.262837304434163, 4.235829898627591) _gate_q_5;
  sdg _gate_q_8;
  cy _gate_q_14, _gate_q_16;
  r_5070731840(3.617779852434062, 3.9159677739119676) _gate_q_18;
  ryy_5070718496(2.729691570522403) _gate_q_7, _gate_q_17;
  sxdg _gate_q_2;
  dcx _gate_q_10, _gate_q_11;
  cs _gate_q_12, _gate_q_6;
  u1(2.480183107954075) _gate_q_13;
  ry(4.430256381540838) _gate_q_4;
  tdg _gate_q_1;
  rx(5.369382779612379) _gate_q_9;
  rxx_5070719072(5.615977848957762) _gate_q_2, _gate_q_11;
  u2(0.5863140113077342, 2.7765675443808076) _gate_q_6;
  dcx _gate_q_7, _gate_q_4;
  r_5070721664(2.128283350045874, 0.6961785860722749) _gate_q_16;
  ryy_5070717440(3.3735998531450635) _gate_q_14, _gate_q_15;
  cz _gate_q_10, _gate_q_3;
  crz(1.1397976147024316) _gate_q_5, _gate_q_12;
  id _gate_q_13;
  x _gate_q_0;
  sx _gate_q_17;
  x _gate_q_8;
  rz(3.7860788473033438) _gate_q_18;
  ryy_5070728192(5.11879055716315) _gate_q_3, _gate_q_11;
  u2(1.03603423701361, 1.1469173793448209) _gate_q_7;
  r_5070730160(2.414087912753474, 2.3316340946493037) _gate_q_15;
  swap _gate_q_0, _gate_q_16;
  xx_minus_yy_5070721712(0.22201243807607252, 3.571921482198501) _gate_q_6, _gate_q_5;
  ry(1.2170620631870888) _gate_q_9;
  iswap _gate_q_17, _gate_q_12;
  rz(3.1378131849155113) _gate_q_8;
  sdg _gate_q_10;
  crx(1.8016468415650855) _gate_q_13, _gate_q_14;
  crx(2.2258983199248856) _gate_q_2, _gate_q_4;
  ry(4.836854291105359) _gate_q_1;
  id _gate_q_18;
  cu(0.718011019056337, 2.2749042119396305, 3.6295360913875334, 0.5199698186662773) _gate_q_18, _gate_q_11;
  h _gate_q_17;
  ry(3.562457872744053) _gate_q_14;
  ryy_5070718976(5.747801802705367) _gate_q_6, _gate_q_2;
  ryy_5070732656(3.461330390208789) _gate_q_12, _gate_q_15;
  cy _gate_q_13, _gate_q_8;
  cu(5.42708679695794, 5.204117178914533, 3.3930375820778687, 1.9985825305853209) _gate_q_0, _gate_q_1;
  iswap _gate_q_3, _gate_q_7;
  ry(2.805153673776083) _gate_q_16;
  rxx_5070719984(1.6149438225627664) _gate_q_10, _gate_q_5;
  sx _gate_q_4;
  sdg _gate_q_9;
  u1(2.612929705991888) _gate_q_3;
  id _gate_q_15;
  sx _gate_q_2;
  x _gate_q_10;
  iswap _gate_q_14, _gate_q_16;
  cu1_5070720368(0.5157890540749226) _gate_q_11, _gate_q_8;
  cp(2.563224448595381) _gate_q_0, _gate_q_5;
  iswap _gate_q_13, _gate_q_6;
  csx _gate_q_7, _gate_q_9;
  u3(1.2671574698611754, 6.149426918712018, 3.458755853312698) _gate_q_1;
  cy _gate_q_17, _gate_q_12;
  csx _gate_q_18, _gate_q_4;
  csdg _gate_q_11, _gate_q_6;
  sdg _gate_q_4;
  cu1_5070722000(2.8444357327484453) _gate_q_17, _gate_q_7;
  cu3_5070721952(4.147224805445542, 2.6883567439574945, 5.257803045013744) _gate_q_1, _gate_q_13;
  y _gate_q_2;
  crx(1.6722458535778333) _gate_q_16, _gate_q_12;
  csdg _gate_q_8, _gate_q_10;
  r_5070717776(5.821814896041035, 2.9873573701983114) _gate_q_0;
  r_5070727568(4.326222404972585, 6.231443008892637) _gate_q_9;
  crx(2.1998134750699996) _gate_q_15, _gate_q_18;
  iswap _gate_q_14, _gate_q_5;
  u1(0.2758652592801397) _gate_q_3;
  r_5070725792(4.288395331139992, 2.9528809228857624) _gate_q_1;
  swap _gate_q_18, _gate_q_13;
  crz(3.5980047211922535) _gate_q_12, _gate_q_9;
  csdg _gate_q_11, _gate_q_3;
  crx(1.920866422989806) _gate_q_10, _gate_q_15;
  z _gate_q_4;
  u3(0.21894868875275483, 0.23356316797431442, 1.767879888530037) _gate_q_7;
  rx(0.7180788422219088) _gate_q_8;
  sx _gate_q_0;
  u1(0.4601663610947184) _gate_q_14;
  rz(1.7901955504861282) _gate_q_16;
  dcx _gate_q_17, _gate_q_6;
  cz _gate_q_5, _gate_q_2;
}
gate ryy_5070856240(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9795066150701701) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5070849184(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.002331975996726) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5070852976(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.062036134208193) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5070864352(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.935643618064937) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5070854128(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.723173252124929) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6111524569294764) _gate_q_0;
  ry(-1.6111524569294764) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.723173252124929) _gate_q_1;
}
gate r_5070853600(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.444778009283708, 0.09715200063280682, -0.09715200063280682) _gate_q_0;
}
gate rzx_5070856864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7876352032295637) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5070856192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.3222178572591132) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0703525725193135) _gate_q_1;
  ry(-2.0703525725193135) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.3222178572591132) _gate_q_0;
}
gate rzx_5070858496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3729845362430621) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5070858784(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6828090861302059) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9160843287996334) _gate_q_1;
  ry(-1.9160843287996334) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6828090861302059) _gate_q_0;
}
gate xx_plus_yy_5070854224(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.831729495171563) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.044143608928348) _gate_q_1;
  ry(-3.044143608928348) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.831729495171563) _gate_q_0;
}
gate rzx_5070851824(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4299433587199215) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5070861712(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0022649304769384) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5070858160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.8147870367581778) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8087019939679851) _gate_q_0;
  ry(-1.8087019939679851) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.8147870367581778) _gate_q_1;
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
gate r_5070849520(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.730739759319512, 3.7980335641924334, -3.7980335641924334) _gate_q_0;
}
gate cu3_5070864160(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.362389912624552) _gate_q_0;
  u1(1.602018101131041) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5235360112611285, 0, -3.362389912624552) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5235360112611285, 1.7603718114935105, 0) _gate_q_1;
}
gate rzx_5070858736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.209209508943174) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5070848848(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.619149666247705) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5070856960(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.0760207224668275) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.2598297723650127) _gate_q_1;
  ry(-2.2598297723650127) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.0760207224668275) _gate_q_0;
}
gate xx_plus_yy_5070861184(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.0809238773548535) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.609802868244312) _gate_q_1;
  ry(-2.609802868244312) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.0809238773548535) _gate_q_0;
}
gate rzx_5070852256(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.6169119319705825) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5070853696(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.45940314919141584) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.45940314919141584) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.45940314919141584) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  ry(1.5443637893606899) _gate_q_3;
  cs _gate_q_0, _gate_q_8;
  iswap _gate_q_17, _gate_q_11;
  cry(6.258417824788894) _gate_q_1, _gate_q_12;
  ryy_5070856240(1.9795066150701701) _gate_q_16, _gate_q_9;
  ryy_5070849184(6.002331975996726) _gate_q_14, _gate_q_5;
  rxx_5070852976(2.062036134208193) _gate_q_6, _gate_q_2;
  sxdg _gate_q_13;
  cp(2.9872587539588458) _gate_q_18, _gate_q_4;
  sdg _gate_q_15;
  u1(3.5666335133432416) _gate_q_7;
  sx _gate_q_10;
  ry(2.2083205351737853) _gate_q_16;
  u3(4.681487408258889, 2.403051748621014, 4.514568701721396) _gate_q_6;
  rzx_5070864352(4.935643618064937) _gate_q_14, _gate_q_3;
  crx(2.5337037323917193) _gate_q_8, _gate_q_12;
  h _gate_q_5;
  sxdg _gate_q_17;
  sx _gate_q_0;
  xx_minus_yy_5070854128(3.222304913858953, 4.723173252124929) _gate_q_1, _gate_q_4;
  u3(4.001954768888479, 5.829264064437292, 3.23276845046498) _gate_q_13;
  y _gate_q_11;
  dcx _gate_q_10, _gate_q_18;
  U(4.756248966812484, 1.021565892208731, 6.099980682781501) _gate_q_9;
  r_5070853600(1.444778009283708, 1.6679483274277034) _gate_q_15;
  z _gate_q_7;
  p(1.0576935549911275) _gate_q_2;
  u2(2.9170506407459458, 4.051345303019654) _gate_q_17;
  crx(5.8976251175588) _gate_q_4, _gate_q_12;
  csdg _gate_q_5, _gate_q_11;
  p(6.199080484508938) _gate_q_18;
  rzx_5070856864(2.7876352032295637) _gate_q_8, _gate_q_6;
  xx_plus_yy_5070856192(4.140705145038627, 1.3222178572591132) _gate_q_1, _gate_q_10;
  cry(6.200508261284276) _gate_q_0, _gate_q_15;
  rzx_5070858496(0.3729845362430621) _gate_q_2, _gate_q_3;
  cry(5.745931999704135) _gate_q_9, _gate_q_16;
  csdg _gate_q_7, _gate_q_14;
  u3(2.045079367369359, 2.493737268154712, 3.464793292331345) _gate_q_13;
  rx(4.4900468552087425) _gate_q_10;
  xx_plus_yy_5070858784(3.832168657599267, 0.6828090861302059) _gate_q_6, _gate_q_5;
  tdg _gate_q_4;
  cu(4.0109817720172405, 4.144182578569219, 5.515413105361179, 5.793707146938578) _gate_q_8, _gate_q_17;
  p(2.687671309228492) _gate_q_15;
  xx_plus_yy_5070854224(6.088287217856696, 4.831729495171563) _gate_q_7, _gate_q_13;
  crz(3.0552485700981236) _gate_q_0, _gate_q_2;
  sdg _gate_q_12;
  sx _gate_q_1;
  iswap _gate_q_3, _gate_q_16;
  rx(6.2637439605676875) _gate_q_14;
  rz(2.8576571197824703) _gate_q_9;
  U(5.665182380605522, 4.390826190316286, 4.86871252251029) _gate_q_11;
  u2(0.17666317107183904, 3.54451732678188) _gate_q_18;
  cs _gate_q_3, _gate_q_11;
  sxdg _gate_q_17;
  sx _gate_q_9;
  sx _gate_q_1;
  rzx_5070851824(1.4299433587199215) _gate_q_4, _gate_q_8;
  u2(0.2251052678767349, 0.27471324844779615) _gate_q_7;
  u1(2.7255079061725325) _gate_q_13;
  ryy_5070861712(1.0022649304769384) _gate_q_15, _gate_q_5;
  sx _gate_q_6;
  t _gate_q_16;
  id _gate_q_14;
  crz(5.0765400636295155) _gate_q_12, _gate_q_10;
  ry(5.67071875111718) _gate_q_0;
  cx _gate_q_2, _gate_q_18;
  cy _gate_q_8, _gate_q_13;
  sx _gate_q_5;
  t _gate_q_1;
  ry(1.6999665955596173) _gate_q_15;
  cu(5.618803079872888, 2.3329585384656326, 1.5272893709358648, 1.8157493319779041) _gate_q_2, _gate_q_4;
  xx_minus_yy_5070858160(3.6174039879359703, 3.8147870367581778) _gate_q_3, _gate_q_12;
  cu(1.1262036990653759, 1.081125285615208, 1.9687983673741838, 2.27159380301785) _gate_q_6, _gate_q_18;
  crx(3.8171041307582025) _gate_q_9, _gate_q_14;
  p(6.047543243173711) _gate_q_7;
  ch _gate_q_11, _gate_q_16;
  tdg _gate_q_0;
  rx(0.13698763313119067) _gate_q_17;
  sxdg _gate_q_10;
  cz _gate_q_13, _gate_q_1;
  y _gate_q_6;
  ecr _gate_q_2, _gate_q_9;
  cy _gate_q_5, _gate_q_8;
  y _gate_q_18;
  crx(2.733756451872832) _gate_q_16, _gate_q_0;
  r_5070849520(5.730739759319512, 5.36882989098733) _gate_q_12;
  cp(5.467822595106008) _gate_q_14, _gate_q_7;
  iswap _gate_q_4, _gate_q_15;
  cu3_5070864160(5.047072022522257, 1.7603718114935105, 4.964408013755593) _gate_q_17, _gate_q_10;
  U(3.1940244826689796, 3.696391225124924, 2.2792438790327387) _gate_q_11;
  p(2.862938878850116) _gate_q_3;
  ch _gate_q_8, _gate_q_13;
  U(5.137189005528095, 1.2032676841675534, 2.3374514550140613) _gate_q_7;
  ry(3.2719887902426668) _gate_q_14;
  cp(2.552048334822765) _gate_q_16, _gate_q_18;
  crx(6.07348912341934) _gate_q_2, _gate_q_5;
  x _gate_q_6;
  sdg _gate_q_9;
  sdg _gate_q_4;
  swap _gate_q_0, _gate_q_3;
  cy _gate_q_15, _gate_q_10;
  u3(3.493482895047088, 2.809468048534072, 2.9326572013352026) _gate_q_17;
  iswap _gate_q_12, _gate_q_11;
  rx(4.660970880791956) _gate_q_1;
  y _gate_q_11;
  rzx_5070858736(3.209209508943174) _gate_q_10, _gate_q_15;
  p(6.224995166584043) _gate_q_1;
  rzz_5070848848(5.619149666247705) _gate_q_7, _gate_q_9;
  cy _gate_q_0, _gate_q_17;
  iswap _gate_q_16, _gate_q_4;
  id _gate_q_5;
  ch _gate_q_12, _gate_q_13;
  rz(1.7973521332469613) _gate_q_6;
  x _gate_q_14;
  cx _gate_q_3, _gate_q_8;
  sdg _gate_q_18;
  u3(4.848515908772813, 3.875463842280879, 1.2359792747923923) _gate_q_2;
  cp(0.3011016910772156) _gate_q_4, _gate_q_9;
  h _gate_q_3;
  sxdg _gate_q_5;
  x _gate_q_6;
  xx_plus_yy_5070856960(4.519659544730025, 6.0760207224668275) _gate_q_15, _gate_q_18;
  U(2.037837000360118, 4.758713921810085, 3.0564765821065465) _gate_q_1;
  ecr _gate_q_16, _gate_q_12;
  xx_plus_yy_5070861184(5.219605736488624, 1.0809238773548535) _gate_q_8, _gate_q_7;
  U(0.2961298358716808, 6.018180803426329, 3.8111671509845997) _gate_q_0;
  cy _gate_q_14, _gate_q_13;
  rzx_5070852256(4.6169119319705825) _gate_q_17, _gate_q_10;
  cu1_5070853696(0.9188062983828317) _gate_q_2, _gate_q_11;
}