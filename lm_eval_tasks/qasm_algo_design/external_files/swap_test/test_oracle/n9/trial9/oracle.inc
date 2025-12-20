gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rxx_5104271680(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3698512416862214) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5104276240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.776690149489238) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5038475614551647) _gate_q_1;
  ry(-0.5038475614551647) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.776690149489238) _gate_q_0;
}
gate cu3_5104286656(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.7462071314877519) _gate_q_0;
  u1(0.1382879162209238) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.51773264592869, 0, -0.7462071314877519) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.51773264592869, 0.6079192152668281, 0) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
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
gate cu1_5104280320(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1681750319974682) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1681750319974682) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1681750319974682) _gate_q_1;
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
gate rzx_5104280992(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7369894089032814) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5104271776(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.73009959348429) _gate_q_0;
  u1(-0.25868756864151043) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2480928190596723, 0, -5.73009959348429) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2480928190596723, 5.988787162125801, 0) _gate_q_1;
}
gate cu3_5104286464(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.0099245764590576) _gate_q_0;
  u1(1.2579329332999802) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5848543419883626, 0, -3.0099245764590576) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5848543419883626, 1.7519916431590772, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5104284160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.8995425854032622) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.442696658693994) _gate_q_1;
  ry(-2.442696658693994) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.8995425854032622) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  u3(3.90391235770334, 2.5163586110403435, 4.638142446573567) _gate_q_5;
  iswap _gate_q_6, _gate_q_1;
  ry(4.5147212374078265) _gate_q_8;
  u1(0.8827350869028564) _gate_q_0;
  csdg _gate_q_2, _gate_q_3;
  p(2.7658653694739455) _gate_q_7;
  sdg _gate_q_4;
  sdg _gate_q_7;
  ch _gate_q_5, _gate_q_1;
  rxx_5104271680(2.3698512416862214) _gate_q_6, _gate_q_3;
  xx_plus_yy_5104276240(1.0076951229103295, 3.776690149489238) _gate_q_0, _gate_q_4;
  sdg _gate_q_2;
  tdg _gate_q_8;
  u3(6.097465250607846, 0.6951042727888552, 4.463602594337896) _gate_q_6;
  h _gate_q_8;
  cu3_5104286656(5.03546529185738, 0.6079192152668281, 0.8844950477086757) _gate_q_0, _gate_q_1;
  crz(3.5701101213919086) _gate_q_4, _gate_q_2;
  u1(4.292142748613702) _gate_q_5;
  rz(2.1179327732868876) _gate_q_7;
  sxdg _gate_q_3;
  cs _gate_q_4, _gate_q_1;
  h _gate_q_2;
  ry(3.687380887339923) _gate_q_6;
  u1(0.3297927482049571) _gate_q_0;
  id _gate_q_7;
  s _gate_q_5;
  cz _gate_q_8, _gate_q_3;
  ecr _gate_q_8, _gate_q_5;
  cx _gate_q_2, _gate_q_1;
  z _gate_q_0;
  x _gate_q_7;
  cu1_5104280320(2.3363500639949364) _gate_q_4, _gate_q_3;
  ry(3.1856176142099906) _gate_q_6;
  cy _gate_q_0, _gate_q_3;
  csx _gate_q_7, _gate_q_4;
  U(2.705822692589553, 0.2551933040020944, 0.24186840800263285) _gate_q_2;
  csx _gate_q_5, _gate_q_8;
  rzx_5104280992(2.7369894089032814) _gate_q_1, _gate_q_6;
  cu3_5104271776(2.4961856381193446, 5.988787162125801, 5.47141202484278) _gate_q_1, _gate_q_7;
  sxdg _gate_q_5;
  csx _gate_q_6, _gate_q_0;
  t _gate_q_8;
  x _gate_q_4;
  iswap _gate_q_2, _gate_q_3;
  z _gate_q_7;
  cu3_5104286464(1.1697086839767252, 1.7519916431590772, 4.267857509759038) _gate_q_8, _gate_q_3;
  u3(4.708764738995866, 2.4375558611387236, 5.162864179304903) _gate_q_1;
  sdg _gate_q_6;
  rz(1.2069379926324615) _gate_q_4;
  dcx _gate_q_0, _gate_q_2;
  z _gate_q_5;
  dcx _gate_q_7, _gate_q_2;
  sx _gate_q_6;
  rz(0.23613525564935234) _gate_q_1;
  y _gate_q_5;
  xx_plus_yy_5104284160(4.885393317387988, 1.8995425854032622) _gate_q_0, _gate_q_3;
  rx(3.6895347445022066) _gate_q_8;
  U(3.164987839042946, 5.534817262265887, 4.639803430260916) _gate_q_4;
}
gate rzx_5105154624(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.553603721790745) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5104444016(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1569305130509107) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5104447568(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9239492167285915) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5104447712(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.275106403196884) _gate_q_0;
  u1(2.1280096366722034) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.277026746665366, 0, -2.275106403196884) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.277026746665366, 0.1470967665246806, 0) _gate_q_1;
}
gate xx_minus_yy_5104435328(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.82645258421425) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.081725113982631) _gate_q_0;
  ry(-2.081725113982631) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.82645258421425) _gate_q_1;
}
gate xx_minus_yy_5104450928(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.754532682111721) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2826451362441311) _gate_q_0;
  ry(-1.2826451362441311) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.754532682111721) _gate_q_1;
}
gate xx_plus_yy_5104440416(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.3329730950956475) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.4949094386655056) _gate_q_1;
  ry(-0.4949094386655056) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.3329730950956475) _gate_q_0;
}
gate rzx_5104443200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.20621078976046567) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5104445888(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.0586416248458526) _gate_q_0;
  u1(-2.7193351509449273) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.009647261690748, 0, -3.0586416248458526) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.009647261690748, 5.77797677579078, 0) _gate_q_1;
}
gate rzz_5104439984(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.7470597328426525) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5104448048(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.071134215830314) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5104445984(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.042987128870008, 0.8389581553936067, -0.8389581553936067) _gate_q_0;
}
gate rxx_5104451024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.665716735392032) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  p(3.70849553025898) _gate_q_7;
  csdg _gate_q_3, _gate_q_0;
  U(4.73698064488826, 5.787582888291426, 5.269241953009656) _gate_q_1;
  rzx_5105154624(5.553603721790745) _gate_q_2, _gate_q_8;
  csdg _gate_q_4, _gate_q_6;
  h _gate_q_5;
  ecr _gate_q_7, _gate_q_1;
  cry(1.4246214937022332) _gate_q_6, _gate_q_8;
  rzx_5104444016(3.1569305130509107) _gate_q_2, _gate_q_3;
  rzx_5104447568(0.9239492167285915) _gate_q_0, _gate_q_4;
  z _gate_q_5;
  cu3_5104447712(4.554053493330732, 0.1470967665246806, 4.403116039869087) _gate_q_2, _gate_q_0;
  csx _gate_q_8, _gate_q_4;
  u1(2.607871613335683) _gate_q_1;
  cs _gate_q_6, _gate_q_5;
  u2(3.5722949560874397, 4.741130985767399) _gate_q_7;
  t _gate_q_3;
  dcx _gate_q_4, _gate_q_5;
  id _gate_q_8;
  t _gate_q_1;
  cx _gate_q_0, _gate_q_7;
  ch _gate_q_3, _gate_q_2;
  t _gate_q_6;
  csx _gate_q_1, _gate_q_4;
  dcx _gate_q_5, _gate_q_8;
  cz _gate_q_2, _gate_q_0;
  xx_minus_yy_5104435328(4.163450227965262, 4.82645258421425) _gate_q_6, _gate_q_7;
  s _gate_q_3;
  cp(0.6906700987991381) _gate_q_8, _gate_q_1;
  xx_minus_yy_5104450928(2.5652902724882622, 3.754532682111721) _gate_q_4, _gate_q_3;
  xx_plus_yy_5104440416(0.9898188773310111, 1.3329730950956475) _gate_q_7, _gate_q_0;
  s _gate_q_2;
  rzx_5104443200(0.20621078976046567) _gate_q_6, _gate_q_5;
  cu3_5104445888(4.019294523381496, 5.77797677579078, 0.3393064739009251) _gate_q_1, _gate_q_5;
  cx _gate_q_8, _gate_q_7;
  rzz_5104439984(3.7470597328426525) _gate_q_0, _gate_q_3;
  y _gate_q_2;
  rzx_5104448048(4.071134215830314) _gate_q_6, _gate_q_4;
  r_5104445984(4.042987128870008, 2.4097544821885033) _gate_q_8;
  rxx_5104451024(5.665716735392032) _gate_q_2, _gate_q_0;
  csdg _gate_q_7, _gate_q_6;
  u2(5.0707679626244495, 5.7322482764431175) _gate_q_4;
  z _gate_q_5;
  cs _gate_q_3, _gate_q_1;
  iswap _gate_q_3, _gate_q_0;
  crz(4.384622757747236) _gate_q_8, _gate_q_2;
  cu(3.1110222196122885, 2.5320721126346584, 4.2277349268154065, 0.910648069133776) _gate_q_6, _gate_q_5;
  csx _gate_q_1, _gate_q_7;
  u1(5.316263519102134) _gate_q_4;
}