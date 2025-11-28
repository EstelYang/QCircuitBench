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
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5072019840(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.636406657361034, 2.9094952333896966, -2.9094952333896966) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu1_5072020464(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5486408536115643) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5486408536115643) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5486408536115643) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rzz_5072013984(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.261415380999101) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate xx_plus_yy_5072017872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.28879907940615485) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2621325845683111) _gate_q_1;
  ry(-1.2621325845683111) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.28879907940615485) _gate_q_0;
}
gate r_5072026992(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.7457553180721805, -0.5400516086748983, 0.5400516086748983) _gate_q_0;
}
gate xx_minus_yy_5072021952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.4079480059341895) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7720482484577109) _gate_q_0;
  ry(-0.7720482484577109) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.4079480059341895) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  cz _gate_q_8, _gate_q_2;
  sdg _gate_q_1;
  cs _gate_q_0, _gate_q_6;
  csdg _gate_q_4, _gate_q_3;
  crx(2.6287659931381153) _gate_q_7, _gate_q_5;
  iswap _gate_q_2, _gate_q_1;
  U(5.727593444626213, 0.26500727165553656, 1.0047147079226473) _gate_q_0;
  id _gate_q_8;
  y _gate_q_5;
  cy _gate_q_7, _gate_q_6;
  crz(1.5169404348797606) _gate_q_3, _gate_q_4;
  x _gate_q_6;
  crz(0.6476200015050623) _gate_q_3, _gate_q_4;
  z _gate_q_0;
  cs _gate_q_5, _gate_q_1;
  cp(4.620017170103799) _gate_q_2, _gate_q_8;
  t _gate_q_7;
  r_5072019840(5.636406657361034, 4.480291560184593) _gate_q_6;
  sdg _gate_q_1;
  dcx _gate_q_5, _gate_q_2;
  u3(0.15321485803930934, 0.5650915652030032, 1.4945115427088966) _gate_q_4;
  cu1_5072020464(1.0972817072231287) _gate_q_8, _gate_q_7;
  iswap _gate_q_0, _gate_q_3;
  sxdg _gate_q_4;
  cry(5.47315777296789) _gate_q_7, _gate_q_1;
  rzz_5072013984(3.261415380999101) _gate_q_3, _gate_q_2;
  U(0.7893912517370585, 2.7677234752676876, 2.7009053109519208) _gate_q_5;
  ecr _gate_q_8, _gate_q_0;
  sxdg _gate_q_6;
  xx_plus_yy_5072017872(2.5242651691366222, 0.28879907940615485) _gate_q_5, _gate_q_4;
  cu(4.343100816551982, 5.1751297419553595, 2.0688383166166893, 2.073902263605123) _gate_q_0, _gate_q_8;
  u2(3.138509240326532, 4.3984874150240385) _gate_q_1;
  rx(5.776308050068074) _gate_q_2;
  sdg _gate_q_6;
  id _gate_q_7;
  tdg _gate_q_3;
  s _gate_q_7;
  crx(2.036487827527303) _gate_q_2, _gate_q_3;
  iswap _gate_q_0, _gate_q_5;
  sdg _gate_q_8;
  r_5072026992(2.7457553180721805, 1.0307447181199982) _gate_q_1;
  sdg _gate_q_4;
  tdg _gate_q_6;
  swap _gate_q_3, _gate_q_4;
  x _gate_q_0;
  csdg _gate_q_7, _gate_q_8;
  cx _gate_q_2, _gate_q_1;
  dcx _gate_q_5, _gate_q_6;
  sdg _gate_q_6;
  id _gate_q_1;
  swap _gate_q_2, _gate_q_8;
  sx _gate_q_0;
  xx_minus_yy_5072021952(1.5440964969154218, 0.4079480059341895) _gate_q_3, _gate_q_5;
  swap _gate_q_4, _gate_q_7;
}
gate r_5070901552(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.068090593430863, 0.9560651109226281, -0.9560651109226281) _gate_q_0;
}
gate cu3_5070911200(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.73965572970064) _gate_q_0;
  u1(0.4051250221635181) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0690187262350235, 0, -4.73965572970064) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0690187262350235, 4.334530707537122, 0) _gate_q_1;
}
gate r_5070908128(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.271395526569978, 3.7447830146642804, -3.7447830146642804) _gate_q_0;
}
gate rzz_5070911920(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6674029251423123) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5070899536(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.8879785351469045) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5070898960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.108035459602734) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5070901888(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.016749943403192958) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.016749943403192958) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.016749943403192958) _gate_q_1;
}
gate r_5070907648(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.8659223772089013, 2.489186699084124, -2.489186699084124) _gate_q_0;
}
gate r_5070912736(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.191275068257918, 4.3702849899466285, -4.3702849899466285) _gate_q_0;
}
gate cu3_5070900688(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3604148749313696) _gate_q_0;
  u1(1.8602401722397666) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.01439220633548705, 0, -3.3604148749313696) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.01439220633548705, 1.500174702691603, 0) _gate_q_1;
}
gate cu3_5070909664(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.124577404145521) _gate_q_0;
  u1(-0.2731922583247395) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.4972838421565684, 0, -3.124577404145521) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.4972838421565684, 3.3977696624702607, 0) _gate_q_1;
}
gate xx_minus_yy_5070900208(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.627896018072187) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.047218255117569) _gate_q_0;
  ry(-3.047218255117569) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.627896018072187) _gate_q_1;
}
gate cu1_5070900160(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.0149149803038986) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.0149149803038986) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.0149149803038986) _gate_q_1;
}
gate rxx_5070908224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8047497996802973) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  t _gate_q_5;
  cp(1.754194483448427) _gate_q_2, _gate_q_0;
  r_5070901552(3.068090593430863, 2.5268614377175247) _gate_q_4;
  cy _gate_q_3, _gate_q_6;
  sxdg _gate_q_1;
  cy _gate_q_8, _gate_q_7;
  rx(3.544940231436342) _gate_q_7;
  id _gate_q_5;
  u3(3.2210840375048555, 2.785378882589624, 5.9238281685684555) _gate_q_1;
  cu3_5070911200(2.138037452470047, 4.334530707537122, 5.144780751864158) _gate_q_0, _gate_q_6;
  swap _gate_q_2, _gate_q_3;
  sdg _gate_q_8;
  r_5070908128(6.271395526569978, 5.315579341459177) _gate_q_4;
  swap _gate_q_5, _gate_q_4;
  ry(3.8473462081863095) _gate_q_8;
  rzz_5070911920(0.6674029251423123) _gate_q_7, _gate_q_2;
  cry(5.340450096216738) _gate_q_0, _gate_q_6;
  rzz_5070899536(2.8879785351469045) _gate_q_3, _gate_q_1;
  y _gate_q_6;
  rzx_5070898960(1.108035459602734) _gate_q_4, _gate_q_8;
  ch _gate_q_5, _gate_q_3;
  s _gate_q_7;
  ry(3.941977916994113) _gate_q_1;
  crx(1.0950203468082769) _gate_q_2, _gate_q_0;
  cu1_5070901888(0.033499886806385916) _gate_q_8, _gate_q_3;
  r_5070907648(2.8659223772089013, 4.059983025879021) _gate_q_4;
  t _gate_q_6;
  z _gate_q_2;
  x _gate_q_1;
  r_5070912736(2.191275068257918, 5.941081316741525) _gate_q_7;
  cy _gate_q_0, _gate_q_5;
  crx(5.2868587260331195) _gate_q_4, _gate_q_8;
  u1(5.925211213245742) _gate_q_3;
  y _gate_q_2;
  cx _gate_q_6, _gate_q_5;
  x _gate_q_0;
  t _gate_q_1;
  u3(2.0657725408857397, 0.66938913196906, 0.8065048271196992) _gate_q_7;
  swap _gate_q_6, _gate_q_2;
  s _gate_q_0;
  cu3_5070900688(0.0287844126709741, 1.500174702691603, 5.220655047171136) _gate_q_7, _gate_q_5;
  u3(4.370737574347276, 4.157286234475842, 1.5423788825452844) _gate_q_8;
  dcx _gate_q_3, _gate_q_1;
  sxdg _gate_q_4;
  tdg _gate_q_5;
  u2(4.955528566649103, 5.560892675336783) _gate_q_4;
  u3(3.6954442826995946, 3.454047983483905, 5.733611961173012) _gate_q_0;
  cu(3.8960126936001753, 5.515010258179638, 4.588207386993665, 3.8276034890690753) _gate_q_8, _gate_q_1;
  cu3_5070909664(4.994567684313137, 3.3977696624702607, 2.8513851458207817) _gate_q_6, _gate_q_3;
  iswap _gate_q_7, _gate_q_2;
  xx_minus_yy_5070900208(6.094436510235138, 4.627896018072187) _gate_q_6, _gate_q_5;
  cx _gate_q_0, _gate_q_1;
  U(2.9236005181320146, 5.437034052837691, 4.541097512413829) _gate_q_2;
  cu1_5070900160(4.029829960607797) _gate_q_3, _gate_q_7;
  rxx_5070908224(0.8047497996802973) _gate_q_4, _gate_q_8;
}