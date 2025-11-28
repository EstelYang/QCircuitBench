gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzz_5072775856(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.6222885608823105) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5072778304(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.619550751429189) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_plus_yy_5072779936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.6626891742959127) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.270119075037854) _gate_q_1;
  ry(-2.270119075037854) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.6626891742959127) _gate_q_0;
}
gate xx_plus_yy_5072779216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.942196406760204) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4157359905784435) _gate_q_1;
  ry(-2.4157359905784435) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.942196406760204) _gate_q_0;
}
gate cu3_5072780176(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8837087082417003) _gate_q_0;
  u1(-0.486780921694949) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.717081374495358, 0, -2.8837087082417003) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.717081374495358, 3.3704896299366496, 0) _gate_q_1;
}
gate rzx_5072781232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.378919186731821) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5072765296(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.026087172916737) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5072765776(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.7830981350726054, 3.099781767702166, -3.099781767702166) _gate_q_0;
}
gate ryy_5072770384(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5202497789943251) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5072777296(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.620308159732517) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072770672(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.315362967290257) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5072775472(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3755125325926898) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5072768896(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.677873661741179, 3.0419435732763924, -3.0419435732763924) _gate_q_0;
}
gate rzz_5072780896(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.354354710075307) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5072767216(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.41155256960434056) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.41155256960434056) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.41155256960434056) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  rx(4.2872079084117845) _gate_q_1;
  id _gate_q_3;
  cs _gate_q_7, _gate_q_2;
  rzz_5072775856(4.6222885608823105) _gate_q_8, _gate_q_0;
  cz _gate_q_6, _gate_q_5;
  crz(0.22308910201101959) _gate_q_9, _gate_q_4;
  csdg _gate_q_8, _gate_q_0;
  rx(0.15772956894383852) _gate_q_4;
  sx _gate_q_7;
  rzx_5072778304(3.619550751429189) _gate_q_9, _gate_q_6;
  sxdg _gate_q_3;
  iswap _gate_q_2, _gate_q_5;
  id _gate_q_1;
  z _gate_q_5;
  xx_plus_yy_5072779936(4.540238150075708, 2.6626891742959127) _gate_q_3, _gate_q_0;
  rx(0.22533966954628445) _gate_q_9;
  x _gate_q_8;
  xx_plus_yy_5072779216(4.831471981156887, 4.942196406760204) _gate_q_6, _gate_q_2;
  cs _gate_q_7, _gate_q_1;
  ry(1.779692178447899) _gate_q_4;
  rz(5.41658373042863) _gate_q_2;
  u2(4.078854484043885, 1.5954214184274393) _gate_q_0;
  cu3_5072780176(1.434162748990716, 3.3704896299366496, 2.3969277865467515) _gate_q_9, _gate_q_6;
  rzx_5072781232(1.378919186731821) _gate_q_5, _gate_q_7;
  x _gate_q_8;
  ryy_5072765296(4.026087172916737) _gate_q_3, _gate_q_4;
  u3(3.311393818241193, 1.946615028870221, 0.1446217878747343) _gate_q_1;
  t _gate_q_6;
  crz(5.201702326075222) _gate_q_9, _gate_q_1;
  cs _gate_q_8, _gate_q_3;
  u1(5.314571063288865) _gate_q_0;
  x _gate_q_5;
  crx(2.55941072645506) _gate_q_4, _gate_q_7;
  r_5072765776(3.7830981350726054, 4.6705780944970625) _gate_q_2;
  ryy_5072770384(0.5202497789943251) _gate_q_2, _gate_q_0;
  cz _gate_q_5, _gate_q_6;
  swap _gate_q_1, _gate_q_4;
  id _gate_q_3;
  rzx_5072777296(1.620308159732517) _gate_q_8, _gate_q_7;
  sx _gate_q_9;
  u2(5.22604298249215, 4.587828269429597) _gate_q_9;
  t _gate_q_3;
  cry(3.173735000451883) _gate_q_6, _gate_q_4;
  tdg _gate_q_1;
  id _gate_q_7;
  sdg _gate_q_0;
  y _gate_q_8;
  rzz_5072770672(5.315362967290257) _gate_q_5, _gate_q_2;
  rzx_5072775472(0.3755125325926898) _gate_q_4, _gate_q_3;
  cx _gate_q_5, _gate_q_6;
  dcx _gate_q_0, _gate_q_2;
  p(2.5032254629062085) _gate_q_7;
  sdg _gate_q_8;
  sxdg _gate_q_1;
  rz(1.164956787420053) _gate_q_9;
  iswap _gate_q_6, _gate_q_0;
  r_5072768896(5.677873661741179, 4.612739900071289) _gate_q_4;
  z _gate_q_2;
  h _gate_q_7;
  cy _gate_q_5, _gate_q_1;
  rzz_5072780896(3.354354710075307) _gate_q_9, _gate_q_8;
  x _gate_q_3;
  cz _gate_q_4, _gate_q_7;
  cu1_5072767216(0.8231051392086811) _gate_q_0, _gate_q_2;
  cs _gate_q_5, _gate_q_9;
  sx _gate_q_3;
  rz(1.4412672450984412) _gate_q_8;
  sx _gate_q_6;
  z _gate_q_1;
}
gate cu3_5072769328(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.053647035536281) _gate_q_0;
  u1(-0.2557685286604392) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2190605288664016, 0, -4.053647035536281) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2190605288664016, 4.309415564196721, 0) _gate_q_1;
}
gate ryy_5072777968(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.8777282678713405) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072766448(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.9363822007320115) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072770432(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.233426480667865) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5072770912(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.604000959401954) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.604000959401954) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.604000959401954) _gate_q_1;
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
gate rzx_5072768704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.897780551507734) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate rzz_5072768512(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6617967921960969) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5072777008(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.08289904480478148) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.08289904480478148) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.08289904480478148) _gate_q_1;
}
gate xx_plus_yy_5072772304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.944158239846251) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.24491255142738186) _gate_q_1;
  ry(-0.24491255142738186) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.944158239846251) _gate_q_0;
}
gate rzx_5072771536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.408751910529847) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072779648(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.0876568470865653) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  id _gate_q_6;
  cry(4.077970489025382) _gate_q_0, _gate_q_9;
  h _gate_q_7;
  u3(3.654655974656605, 2.571743795556045, 4.212164208023893) _gate_q_5;
  rz(2.2100942204126635) _gate_q_4;
  ry(6.138424764841645) _gate_q_1;
  p(2.4665811007626037) _gate_q_3;
  U(5.595174075225022, 4.029701072391118, 3.7529778393632114) _gate_q_2;
  u3(0.4415021379943407, 5.339600842892189, 3.550032505435003) _gate_q_8;
  cx _gate_q_8, _gate_q_3;
  t _gate_q_6;
  u1(6.143930406302409) _gate_q_4;
  crx(6.268537367633836) _gate_q_9, _gate_q_5;
  cu3_5072769328(4.438121057732803, 4.309415564196721, 3.7978785068758425) _gate_q_0, _gate_q_7;
  tdg _gate_q_2;
  s _gate_q_1;
  ryy_5072777968(4.8777282678713405) _gate_q_0, _gate_q_4;
  U(5.648605854369667, 3.757235299175191, 5.32660079774969) _gate_q_7;
  U(5.4692589501700155, 1.2488350669949004, 2.539789983683804) _gate_q_1;
  s _gate_q_6;
  h _gate_q_9;
  sdg _gate_q_3;
  ry(4.486026923356884) _gate_q_2;
  y _gate_q_8;
  y _gate_q_5;
  ryy_5072766448(5.9363822007320115) _gate_q_4, _gate_q_0;
  ch _gate_q_3, _gate_q_2;
  u3(0.697606491185645, 0.0362195191579759, 5.169403938122304) _gate_q_5;
  dcx _gate_q_8, _gate_q_9;
  ryy_5072770432(4.233426480667865) _gate_q_6, _gate_q_7;
  p(5.023397963718028) _gate_q_1;
  U(1.4581992970934727, 2.776285576274591, 5.360000679050985) _gate_q_7;
  cu1_5072770912(5.208001918803908) _gate_q_9, _gate_q_8;
  ecr _gate_q_1, _gate_q_3;
  cx _gate_q_5, _gate_q_0;
  rz(4.822907540571634) _gate_q_6;
  cx _gate_q_2, _gate_q_4;
  cy _gate_q_6, _gate_q_5;
  iswap _gate_q_7, _gate_q_4;
  s _gate_q_0;
  rzx_5072768704(4.897780551507734) _gate_q_2, _gate_q_9;
  rz(0.6211484316583912) _gate_q_8;
  u1(2.1543632217921846) _gate_q_3;
  sx _gate_q_1;
  u3(4.806853526727862, 5.074233470056358, 1.1736821781246538) _gate_q_1;
  id _gate_q_0;
  rz(2.7125573430895553) _gate_q_6;
  csx _gate_q_8, _gate_q_7;
  cx _gate_q_9, _gate_q_2;
  u3(4.725656827979707, 4.1188765557994085, 4.246352723534686) _gate_q_3;
  ch _gate_q_5, _gate_q_4;
  rzz_5072768512(0.6617967921960969) _gate_q_9, _gate_q_8;
  sxdg _gate_q_3;
  p(4.3664256557478325) _gate_q_2;
  cu1_5072777008(0.16579808960956297) _gate_q_4, _gate_q_1;
  z _gate_q_5;
  xx_plus_yy_5072772304(0.4898251028547637, 5.944158239846251) _gate_q_0, _gate_q_6;
  p(4.436966273297942) _gate_q_7;
  sx _gate_q_2;
  rz(3.623926276949866) _gate_q_9;
  csdg _gate_q_3, _gate_q_6;
  rzx_5072771536(5.408751910529847) _gate_q_1, _gate_q_4;
  cu(4.901493726882189, 5.729609608744262, 2.4288146316272385, 4.789449966535361) _gate_q_5, _gate_q_8;
  ch _gate_q_7, _gate_q_0;
  cu(4.445047693681268, 4.174310514317443, 0.5595524318968342, 0.4067821049391647) _gate_q_1, _gate_q_5;
  sx _gate_q_4;
  cp(3.7115114992028566) _gate_q_7, _gate_q_2;
  rzz_5072779648(1.0876568470865653) _gate_q_0, _gate_q_6;
  s _gate_q_3;
  iswap _gate_q_8, _gate_q_9;
}