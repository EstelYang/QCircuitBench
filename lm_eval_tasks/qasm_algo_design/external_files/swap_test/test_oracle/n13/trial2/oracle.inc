gate r_5106261584(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.5419538591366266, -0.04490237008889997, 0.04490237008889997) _gate_q_0;
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
gate ryy_5106254096(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1941413281969895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rzx_5106255200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5654182934232509) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5106260816(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.726733701738659) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5106268112(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.1231667907388663) _gate_q_0;
  u1(-0.9503881712195548) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.6597827854870757, 0, -3.1231667907388663) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.6597827854870757, 4.073554961958421, 0) _gate_q_1;
}
gate cu3_5106269936(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.231419693547058) _gate_q_0;
  u1(-1.969265940468561) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8667917980092108, 0, -2.231419693547058) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8667917980092108, 4.200685634015619, 0) _gate_q_1;
}
gate rxx_5106263936(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.58488341204434) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5106263168(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8870699850438974) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5106262064(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.0257143174376795) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5106261632(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.7631511651665577, 2.64545191391026, -2.64545191391026) _gate_q_0;
}
gate xx_minus_yy_5106263840(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.33381029176512894) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.771452429583607) _gate_q_0;
  ry(-1.771452429583607) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.33381029176512894) _gate_q_1;
}
gate rxx_5106256736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.703120831477849) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5106262880(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.239246749472126, 3.892677156216237, -3.892677156216237) _gate_q_0;
}
gate xx_plus_yy_5106258128(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.25360752292269617) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.4742552460670744) _gate_q_1;
  ry(-0.4742552460670744) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.25360752292269617) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5106269264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2281912403897661) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5106268208(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.9070900859305837) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.9070900859305837) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.9070900859305837) _gate_q_1;
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
gate cu3_5106263792(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(6.042682941187587) _gate_q_0;
  u1(0.15738548786208462) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.0990233727928627, 0, -6.042682941187587) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.0990233727928627, 5.885297453325502, 0) _gate_q_1;
}
gate r_5106267200(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.315226381424685, 4.359074775393732, -4.359074775393732) _gate_q_0;
}
gate cu1_5106261200(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5998852578846061) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5998852578846061) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5998852578846061) _gate_q_1;
}
gate xx_plus_yy_5106269792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.4805503978880636) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.3051245075462532) _gate_q_1;
  ry(-0.3051245075462532) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.4805503978880636) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5106265760(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1320213645555532) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1320213645555532) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1320213645555532) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  r_5106261584(3.5419538591366266, 1.5258939567059966) _gate_q_1;
  ecr _gate_q_6, _gate_q_4;
  ryy_5106254096(1.1941413281969895) _gate_q_7, _gate_q_5;
  cry(1.6196364205399973) _gate_q_12, _gate_q_3;
  dcx _gate_q_2, _gate_q_11;
  ecr _gate_q_8, _gate_q_10;
  swap _gate_q_9, _gate_q_0;
  h _gate_q_4;
  ecr _gate_q_11, _gate_q_3;
  sxdg _gate_q_9;
  ecr _gate_q_7, _gate_q_1;
  rzx_5106255200(0.5654182934232509) _gate_q_10, _gate_q_2;
  rzx_5106260816(4.726733701738659) _gate_q_12, _gate_q_8;
  cy _gate_q_6, _gate_q_5;
  U(1.0804046426403306, 3.3905211085517886, 1.4340853429147526) _gate_q_0;
  cu3_5106268112(5.319565570974151, 4.073554961958421, 2.1727786195193115) _gate_q_1, _gate_q_2;
  ry(0.4059270620144204) _gate_q_8;
  u3(5.5320730690680096, 5.766416705052874, 1.6170075026820725) _gate_q_10;
  t _gate_q_7;
  cu3_5106269936(3.7335835960184216, 4.200685634015619, 0.26215375307849664) _gate_q_9, _gate_q_12;
  t _gate_q_3;
  tdg _gate_q_4;
  cry(0.4164194068816238) _gate_q_5, _gate_q_6;
  cry(1.1944433008616981) _gate_q_11, _gate_q_0;
  y _gate_q_5;
  rxx_5106263936(4.58488341204434) _gate_q_11, _gate_q_3;
  U(5.708923314834715, 3.4199659238665365, 1.2182497651351165) _gate_q_1;
  rz(0.7721746671704938) _gate_q_0;
  u2(5.259411348549542, 1.7830527862428924) _gate_q_7;
  cry(3.0107637378576535) _gate_q_2, _gate_q_12;
  id _gate_q_6;
  rzx_5106263168(2.8870699850438974) _gate_q_9, _gate_q_4;
  x _gate_q_10;
  U(4.769719455299581, 6.0130865900297605, 1.8832489103218049) _gate_q_8;
  rxx_5106262064(6.0257143174376795) _gate_q_9, _gate_q_11;
  r_5106261632(0.7631511651665577, 4.2162482407051565) _gate_q_3;
  id _gate_q_8;
  xx_minus_yy_5106263840(3.542904859167214, 0.33381029176512894) _gate_q_0, _gate_q_7;
  t _gate_q_4;
  id _gate_q_6;
  rxx_5106256736(2.703120831477849) _gate_q_2, _gate_q_5;
  swap _gate_q_10, _gate_q_1;
  sxdg _gate_q_12;
  cry(6.196635177976477) _gate_q_12, _gate_q_9;
  rz(3.651647561159961) _gate_q_10;
  r_5106262880(6.239246749472126, 5.463473483011134) _gate_q_8;
  sdg _gate_q_5;
  xx_plus_yy_5106258128(0.9485104921341488, 0.25360752292269617) _gate_q_0, _gate_q_11;
  cz _gate_q_6, _gate_q_7;
  y _gate_q_4;
  s _gate_q_2;
  cs _gate_q_3, _gate_q_1;
  y _gate_q_8;
  U(3.8769789879601344, 5.515618994084087, 1.383307799455948) _gate_q_5;
  sx _gate_q_3;
  tdg _gate_q_2;
  rx(2.6690259084519554) _gate_q_1;
  u2(0.9029454870307548, 3.605295812004008) _gate_q_12;
  crx(4.609207553908707) _gate_q_7, _gate_q_0;
  crz(5.467691107573849) _gate_q_10, _gate_q_4;
  rzx_5106269264(1.2281912403897661) _gate_q_11, _gate_q_9;
  sx _gate_q_6;
  cu1_5106268208(5.814180171861167) _gate_q_12, _gate_q_8;
  rx(0.07311379831969535) _gate_q_5;
  csx _gate_q_0, _gate_q_6;
  s _gate_q_4;
  p(4.4340260783311285) _gate_q_7;
  cu3_5106263792(4.198046745585725, 5.885297453325502, 6.200068429049671) _gate_q_3, _gate_q_9;
  x _gate_q_10;
  cp(1.7520360897725384) _gate_q_11, _gate_q_2;
  z _gate_q_1;
  y _gate_q_1;
  ecr _gate_q_9, _gate_q_8;
  r_5106267200(2.315226381424685, 5.929871102188629) _gate_q_3;
  cu1_5106261200(3.1997705157692122) _gate_q_10, _gate_q_5;
  sdg _gate_q_6;
  ecr _gate_q_12, _gate_q_2;
  xx_plus_yy_5106269792(0.6102490150925064, 1.4805503978880636) _gate_q_0, _gate_q_7;
  u1(3.0143500252784006) _gate_q_4;
  rz(5.126763406678454) _gate_q_11;
  z _gate_q_1;
  iswap _gate_q_12, _gate_q_7;
  dcx _gate_q_4, _gate_q_11;
  ry(6.103913720316717) _gate_q_8;
  id _gate_q_6;
  cu1_5106265760(2.2640427291111065) _gate_q_3, _gate_q_5;
  s _gate_q_9;
  cy _gate_q_0, _gate_q_10;
  t _gate_q_2;
}
gate r_5104282336(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.377008095819462, 1.987454931241198, -1.987454931241198) _gate_q_0;
}
gate r_5106325680(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.7387420704472616, 3.088694131130919, -3.088694131130919) _gate_q_0;
}
gate ryy_5106333984(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.035652359387554) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5106334224(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.4986481880316709) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5106334704(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.273720161048263) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5515693418636147) _gate_q_1;
  ry(-1.5515693418636147) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.273720161048263) _gate_q_0;
}
gate ryy_5106323904(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9202470361257498) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5106323520(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2365023330442626) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5106331056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.581239250995585) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.987173957839755) _gate_q_0;
  ry(-2.987173957839755) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.581239250995585) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5106320352(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.7084537375081974) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5106324144(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.619791313620205) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5106331680(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.621237821524048) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5106330432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.562093751577057) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.387137371868489) _gate_q_0;
  ry(-2.387137371868489) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.562093751577057) _gate_q_1;
}
gate xx_plus_yy_5106321696(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.4416717729422885) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.788417879017792) _gate_q_1;
  ry(-2.788417879017792) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.4416717729422885) _gate_q_0;
}
gate r_5106324912(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.9964633834666379, 0.19864607893075226, -0.19864607893075226) _gate_q_0;
}
gate rzx_5106327792(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9383995452547178) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5106324000(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.875079539823216) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5106325632(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.51154304292249) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5106321552(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.654124471365738) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5108210992(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.5455058952549061) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9038460232319858) _gate_q_1;
  ry(-1.9038460232319858) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.5455058952549061) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  cy _gate_q_6, _gate_q_11;
  rz(1.316972086358178) _gate_q_0;
  r_5104282336(5.377008095819462, 3.5582512580360945) _gate_q_5;
  u2(4.403863340209238, 2.988022184218048) _gate_q_7;
  r_5106325680(3.7387420704472616, 4.659490457925815) _gate_q_8;
  ryy_5106333984(5.035652359387554) _gate_q_12, _gate_q_10;
  crx(5.266101666842339) _gate_q_2, _gate_q_4;
  U(2.4632750371846726, 5.508364195028603, 2.085016944701885) _gate_q_9;
  z _gate_q_3;
  rz(3.133453409650918) _gate_q_1;
  rzz_5106334224(1.4986481880316709) _gate_q_6, _gate_q_3;
  x _gate_q_4;
  crz(3.962142453463895) _gate_q_8, _gate_q_10;
  cp(4.972969459320199) _gate_q_7, _gate_q_2;
  xx_plus_yy_5106334704(3.1031386837272295, 5.273720161048263) _gate_q_11, _gate_q_9;
  ch _gate_q_0, _gate_q_5;
  iswap _gate_q_12, _gate_q_1;
  sdg _gate_q_10;
  cx _gate_q_8, _gate_q_6;
  rz(2.7903157391599627) _gate_q_11;
  crz(2.2536661822557673) _gate_q_7, _gate_q_2;
  crx(1.8773431867446202) _gate_q_0, _gate_q_3;
  crx(3.8124333796318655) _gate_q_9, _gate_q_4;
  ry(3.400614476976701) _gate_q_5;
  ryy_5106323904(1.9202470361257498) _gate_q_1, _gate_q_12;
  sxdg _gate_q_1;
  rzx_5106323520(1.2365023330442626) _gate_q_4, _gate_q_3;
  xx_minus_yy_5106331056(5.97434791567951, 5.581239250995585) _gate_q_5, _gate_q_8;
  csdg _gate_q_2, _gate_q_6;
  csx _gate_q_7, _gate_q_0;
  rzz_5106320352(0.7084537375081974) _gate_q_10, _gate_q_11;
  dcx _gate_q_12, _gate_q_9;
  rzx_5106324144(3.619791313620205) _gate_q_8, _gate_q_10;
  z _gate_q_9;
  cp(3.1438084480569564) _gate_q_3, _gate_q_6;
  sdg _gate_q_0;
  crz(2.160876370408073) _gate_q_1, _gate_q_2;
  swap _gate_q_7, _gate_q_12;
  h _gate_q_4;
  cz _gate_q_11, _gate_q_5;
  sxdg _gate_q_8;
  rzx_5106331680(3.621237821524048) _gate_q_10, _gate_q_9;
  s _gate_q_7;
  id _gate_q_4;
  xx_minus_yy_5106330432(4.774274743736978, 5.562093751577057) _gate_q_11, _gate_q_5;
  u1(0.6234084936508437) _gate_q_0;
  id _gate_q_6;
  p(5.880220250797109) _gate_q_12;
  cu(2.47229369038448, 0.7199512399512951, 4.2388844103884455, 2.4215087557866037) _gate_q_3, _gate_q_2;
  u1(5.765020520783172) _gate_q_1;
  z _gate_q_10;
  ecr _gate_q_11, _gate_q_5;
  z _gate_q_9;
  z _gate_q_0;
  dcx _gate_q_4, _gate_q_3;
  csx _gate_q_6, _gate_q_8;
  u1(5.633561592202152) _gate_q_7;
  tdg _gate_q_12;
  cz _gate_q_1, _gate_q_2;
  U(1.1686946863698062, 3.917759562246964, 4.60904596527087) _gate_q_9;
  s _gate_q_4;
  y _gate_q_7;
  cu(1.496882333798519, 3.389279335329488, 2.3589305671033585, 1.1095821245080977) _gate_q_6, _gate_q_11;
  rz(1.6875893962987285) _gate_q_2;
  ch _gate_q_10, _gate_q_12;
  xx_plus_yy_5106321696(5.576835758035584, 1.4416717729422885) _gate_q_0, _gate_q_8;
  cp(0.41966619565290203) _gate_q_5, _gate_q_3;
  sxdg _gate_q_1;
  u3(2.129148749413448, 6.030121123966565, 2.599590084056023) _gate_q_5;
  r_5106324912(1.9964633834666379, 1.7694424057256488) _gate_q_4;
  y _gate_q_0;
  u3(4.538150226981961, 3.11539522899998, 6.05921676259292) _gate_q_2;
  rzx_5106327792(1.9383995452547178) _gate_q_1, _gate_q_7;
  rxx_5106324000(4.875079539823216) _gate_q_10, _gate_q_9;
  ch _gate_q_12, _gate_q_8;
  rzx_5106325632(5.51154304292249) _gate_q_3, _gate_q_11;
  s _gate_q_6;
  rzz_5106321552(4.654124471365738) _gate_q_6, _gate_q_2;
  s _gate_q_8;
  xx_plus_yy_5108210992(3.8076920464639716, 1.5455058952549061) _gate_q_4, _gate_q_0;
  iswap _gate_q_10, _gate_q_7;
  csdg _gate_q_11, _gate_q_5;
  sx _gate_q_3;
  x _gate_q_9;
  t _gate_q_12;
  s _gate_q_1;
}