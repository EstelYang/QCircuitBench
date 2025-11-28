gate rxx_5070729824(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.369764782948179) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5070727136(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.9524029671825165) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5070726752(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4058432289004115) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4058432289004115) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4058432289004115) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rxx_5070731168(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.013233451058752581) _gate_q_1;
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
gate r_5070728048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.22524962310537855, 2.057908017893954, -2.057908017893954) _gate_q_0;
}
gate rzx_5070723728(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3350598583338087) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5070717008(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.23404423339651528) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.23404423339651528) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.23404423339651528) _gate_q_1;
}
gate xx_plus_yy_5070719360(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.4416306197204594) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2423596834454718) _gate_q_1;
  ry(-1.2423596834454718) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.4416306197204594) _gate_q_0;
}
gate r_5070732320(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.180959558605834, 0.9175296658064007, -0.9175296658064007) _gate_q_0;
}
gate cu1_5070724016(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9090060355003888) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9090060355003888) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9090060355003888) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_minus_yy_5070717632(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.11346481822385913) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3360166164412763) _gate_q_0;
  ry(-0.3360166164412763) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.11346481822385913) _gate_q_1;
}
gate ryy_5070724448(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4439428989631615) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5070718592(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.002953457073222) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5070730112(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.175490222683322) _gate_q_0;
  u1(0.08824409741695227) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6683826341236824, 0, -4.175490222683322) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6683826341236824, 4.08724612526637, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rxx_5070601680(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4421586187043836) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5070727184(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.08213601323582193) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.0181898028942977) _gate_q_1;
  ry(-3.0181898028942977) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.08213601323582193) _gate_q_0;
}
gate cu3_5070722096(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.487714955965622) _gate_q_0;
  u1(-2.2553385246325948) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.35690267099616335, 0, -3.487714955965622) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.35690267099616335, 5.743053480598217, 0) _gate_q_1;
}
gate xx_plus_yy_5070730928(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.457617664232931) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.29945845265700666) _gate_q_1;
  ry(-0.29945845265700666) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.457617664232931) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5070717872(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.1138613525227217, 1.573025459276523, -1.573025459276523) _gate_q_0;
}
gate rxx_5070717296(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.616009425993131) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5070723440(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.6698479359239244) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.6698479359239244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.6698479359239244) _gate_q_1;
}
gate xx_plus_yy_5070732848(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.9978010895343865) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.796154111584563) _gate_q_1;
  ry(-1.796154111584563) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.9978010895343865) _gate_q_0;
}
gate rzz_5070727520(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.4727670967506516) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  p(2.886119892840313) _gate_q_7;
  swap _gate_q_14, _gate_q_10;
  rxx_5070729824(4.369764782948179) _gate_q_0, _gate_q_3;
  rxx_5070727136(5.9524029671825165) _gate_q_2, _gate_q_11;
  z _gate_q_1;
  cry(0.18784280218989205) _gate_q_13, _gate_q_12;
  cp(5.663181565176594) _gate_q_5, _gate_q_15;
  cu(5.930214089070736, 5.213812802586459, 5.779606671047295, 3.65833388276387) _gate_q_9, _gate_q_8;
  cu1_5070726752(4.811686457800823) _gate_q_6, _gate_q_4;
  sxdg _gate_q_13;
  u3(4.513271045350597, 5.453227795085168, 2.1730381884192687) _gate_q_2;
  h _gate_q_9;
  cp(3.991055001700904) _gate_q_4, _gate_q_11;
  rxx_5070731168(0.013233451058752581) _gate_q_8, _gate_q_10;
  ecr _gate_q_12, _gate_q_5;
  u1(2.975722289026901) _gate_q_14;
  ecr _gate_q_3, _gate_q_0;
  r_5070728048(0.22524962310537855, 3.6287043446888507) _gate_q_6;
  sx _gate_q_15;
  rzx_5070723728(2.3350598583338087) _gate_q_1, _gate_q_7;
  cu1_5070717008(0.46808846679303057) _gate_q_9, _gate_q_5;
  sdg _gate_q_13;
  xx_plus_yy_5070719360(2.4847193668909435, 2.4416306197204594) _gate_q_4, _gate_q_0;
  swap _gate_q_1, _gate_q_8;
  r_5070732320(4.180959558605834, 2.4883259926012973) _gate_q_14;
  ry(4.612760499336495) _gate_q_3;
  crz(6.090889477576526) _gate_q_10, _gate_q_15;
  ry(4.690494936629382) _gate_q_12;
  rz(1.5699748487880447) _gate_q_2;
  cu1_5070724016(1.8180120710007777) _gate_q_6, _gate_q_7;
  z _gate_q_11;
  cry(1.9159111992700193) _gate_q_10, _gate_q_1;
  h _gate_q_0;
  cx _gate_q_4, _gate_q_6;
  iswap _gate_q_3, _gate_q_2;
  xx_minus_yy_5070717632(0.6720332328825526, 0.11346481822385913) _gate_q_8, _gate_q_15;
  ryy_5070724448(0.4439428989631615) _gate_q_14, _gate_q_13;
  cs _gate_q_9, _gate_q_11;
  cry(3.2697085933818837) _gate_q_5, _gate_q_7;
  sxdg _gate_q_12;
  cp(2.9705513416536258) _gate_q_12, _gate_q_7;
  sx _gate_q_2;
  cz _gate_q_9, _gate_q_11;
  sxdg _gate_q_13;
  u1(4.723694813830266) _gate_q_5;
  rzx_5070718592(4.002953457073222) _gate_q_1, _gate_q_8;
  y _gate_q_6;
  p(2.9738868442112953) _gate_q_3;
  cu3_5070730112(1.3367652682473647, 4.08724612526637, 4.263734320100275) _gate_q_0, _gate_q_10;
  ry(5.356640171561426) _gate_q_15;
  tdg _gate_q_14;
  id _gate_q_4;
  y _gate_q_4;
  h _gate_q_1;
  U(1.5435555952686844, 0.8463837969110727, 0.7576908126265207) _gate_q_11;
  p(2.842054819935656) _gate_q_10;
  p(4.126402386727916) _gate_q_5;
  dcx _gate_q_14, _gate_q_3;
  cy _gate_q_13, _gate_q_7;
  swap _gate_q_12, _gate_q_6;
  sx _gate_q_9;
  cu(4.596165924260113, 2.9800642825799315, 6.1190782075706505, 1.4623349705304718) _gate_q_0, _gate_q_15;
  cy _gate_q_8, _gate_q_2;
  rxx_5070601680(1.4421586187043836) _gate_q_9, _gate_q_6;
  sx _gate_q_11;
  y _gate_q_13;
  cu(1.468113179911835, 0.965818133995166, 5.921262660403106, 1.5357327692998763) _gate_q_14, _gate_q_3;
  z _gate_q_15;
  cs _gate_q_2, _gate_q_1;
  cz _gate_q_7, _gate_q_5;
  cs _gate_q_0, _gate_q_8;
  xx_plus_yy_5070727184(6.0363796057885954, 0.08213601323582193) _gate_q_12, _gate_q_10;
  y _gate_q_4;
  rz(2.8954819501684415) _gate_q_5;
  h _gate_q_2;
  crx(3.079815860840896) _gate_q_10, _gate_q_14;
  sdg _gate_q_13;
  cx _gate_q_15, _gate_q_3;
  u3(0.30312731535697884, 4.6145108233521075, 4.441623755524659) _gate_q_7;
  cu3_5070722096(0.7138053419923267, 5.743053480598217, 1.2323764313330274) _gate_q_8, _gate_q_6;
  xx_plus_yy_5070730928(0.5989169053140133, 2.457617664232931) _gate_q_4, _gate_q_1;
  csdg _gate_q_11, _gate_q_12;
  ecr _gate_q_0, _gate_q_9;
  ecr _gate_q_0, _gate_q_8;
  cy _gate_q_12, _gate_q_13;
  r_5070717872(3.1138613525227217, 3.1438217860714195) _gate_q_4;
  iswap _gate_q_10, _gate_q_5;
  rxx_5070717296(4.616009425993131) _gate_q_6, _gate_q_2;
  t _gate_q_7;
  sx _gate_q_15;
  sdg _gate_q_9;
  sdg _gate_q_14;
  cu1_5070723440(5.339695871847849) _gate_q_11, _gate_q_3;
  z _gate_q_1;
  t _gate_q_2;
  z _gate_q_1;
  cy _gate_q_3, _gate_q_7;
  cy _gate_q_5, _gate_q_6;
  U(2.688039354536642, 3.872165564236027, 3.596224715938655) _gate_q_14;
  p(0.5836496658780661) _gate_q_0;
  xx_plus_yy_5070732848(3.592308223169126, 0.9978010895343865) _gate_q_8, _gate_q_12;
  rzz_5070727520(1.4727670967506516) _gate_q_9, _gate_q_10;
  sx _gate_q_15;
  U(4.074059402148911, 3.593109181935375, 1.236281635341145) _gate_q_4;
  rz(1.0326711117647507) _gate_q_11;
  x _gate_q_13;
}
gate cu3_5070733088(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.452746138584132) _gate_q_0;
  u1(0.1352000706685994) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0580668263656665, 0, -2.452746138584132) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0580668263656665, 2.3175460679155324, 0) _gate_q_1;
}
gate ryy_5070723680(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.179653843863072) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5070720416(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.2536273329450722) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5070732272(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.4321959112877822) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate ryy_5070723920(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2945138609088134) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5070723584(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.1595758979900666) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2206502464988802) _gate_q_0;
  ry(-1.2206502464988802) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.1595758979900666) _gate_q_1;
}
gate rzz_5070722336(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.129889507527145) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5070721376(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6402545200022823) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5070721520(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.304969511490521) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5070718304(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.16146032101447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5070718736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.4921136514240477) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4353629062645656) _gate_q_0;
  ry(-2.4353629062645656) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.4921136514240477) _gate_q_1;
}
gate ryy_5070731024(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.124184686539986) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5070730880(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.54935709862477, -0.40912177799722027, 0.40912177799722027) _gate_q_0;
}
gate rzz_5070724784(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.879500513497351) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5070727856(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.919504990097809) _gate_q_0;
  u1(-0.41817570175529994) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4203729828159717, 0, -1.919504990097809) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4203729828159717, 2.337680691853109, 0) _gate_q_1;
}
gate cu3_5070724304(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.380085015926807) _gate_q_0;
  u1(-0.025796754888014917) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.6100313345472286, 0, -5.380085015926807) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.6100313345472286, 5.405881770814822, 0) _gate_q_1;
}
gate cu3_5070729776(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.9456188094128293) _gate_q_0;
  u1(-2.402581152696071) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.021044490544446, 0, -2.9456188094128293) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.021044490544446, 5.3481999621089, 0) _gate_q_1;
}
gate xx_minus_yy_5070731696(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.946113146403341) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5805042679200576) _gate_q_0;
  ry(-1.5805042679200576) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.946113146403341) _gate_q_1;
}
gate rzx_5070724880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.750014616461818) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5070732752(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.80661565109698) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5070722144(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1369248749069594) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5070724832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8077874412828627) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5072770288(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5216048597468348) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5216048597468348) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5216048597468348) _gate_q_1;
}
gate rxx_5072773744(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6498904445175486) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5070723200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5814933697476173) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  x _gate_q_11;
  cu3_5070733088(2.116133652731333, 2.3175460679155324, 2.5879462092527312) _gate_q_9, _gate_q_3;
  z _gate_q_8;
  sdg _gate_q_12;
  x _gate_q_6;
  s _gate_q_13;
  x _gate_q_1;
  cz _gate_q_0, _gate_q_4;
  p(2.793699035676913) _gate_q_14;
  ryy_5070723680(4.179653843863072) _gate_q_15, _gate_q_7;
  s _gate_q_5;
  cu(5.247134518728676, 0.27131429261295714, 1.0622731695584726, 2.917166724270904) _gate_q_2, _gate_q_10;
  rzz_5070720416(0.2536273329450722) _gate_q_13, _gate_q_9;
  y _gate_q_0;
  rzz_5070732272(3.4321959112877822) _gate_q_12, _gate_q_1;
  ecr _gate_q_4, _gate_q_14;
  cu(3.2049320517163573, 3.437263879774021, 0.2681939205732649, 6.2309228372833045) _gate_q_6, _gate_q_5;
  sxdg _gate_q_7;
  id _gate_q_2;
  csx _gate_q_11, _gate_q_3;
  ryy_5070723920(2.2945138609088134) _gate_q_15, _gate_q_10;
  sxdg _gate_q_8;
  u3(0.6122342541074364, 3.674160563525257, 2.041492695989135) _gate_q_3;
  crx(5.639063316982685) _gate_q_13, _gate_q_8;
  s _gate_q_7;
  u3(1.4565861274257723, 1.6991681050260532, 1.234313511243742) _gate_q_5;
  u3(4.5054069288644145, 3.6118103108037367, 2.516265858789408) _gate_q_9;
  cz _gate_q_4, _gate_q_1;
  xx_minus_yy_5070723584(2.4413004929977604, 2.1595758979900666) _gate_q_0, _gate_q_2;
  rzz_5070722336(0.129889507527145) _gate_q_6, _gate_q_15;
  crz(3.0386464091104215) _gate_q_11, _gate_q_10;
  csx _gate_q_12, _gate_q_14;
  h _gate_q_12;
  rzz_5070721376(0.6402545200022823) _gate_q_10, _gate_q_0;
  rzx_5070721520(4.304969511490521) _gate_q_9, _gate_q_2;
  rxx_5070718304(6.16146032101447) _gate_q_6, _gate_q_15;
  ch _gate_q_13, _gate_q_14;
  xx_minus_yy_5070718736(4.870725812529131, 0.4921136514240477) _gate_q_11, _gate_q_8;
  ryy_5070731024(6.124184686539986) _gate_q_7, _gate_q_3;
  h _gate_q_1;
  u1(0.23231164256569695) _gate_q_4;
  sxdg _gate_q_5;
  iswap _gate_q_14, _gate_q_4;
  ch _gate_q_2, _gate_q_8;
  r_5070730880(5.54935709862477, 1.1616745487976763) _gate_q_0;
  dcx _gate_q_15, _gate_q_1;
  ecr _gate_q_11, _gate_q_5;
  sdg _gate_q_10;
  rzz_5070724784(4.879500513497351) _gate_q_6, _gate_q_7;
  p(0.9685172683441526) _gate_q_9;
  cs _gate_q_13, _gate_q_3;
  s _gate_q_12;
  sx _gate_q_1;
  cu3_5070727856(2.8407459656319434, 2.337680691853109, 1.501329288342509) _gate_q_10, _gate_q_11;
  csdg _gate_q_9, _gate_q_6;
  x _gate_q_13;
  sx _gate_q_8;
  cu3_5070724304(3.220062669094457, 5.405881770814822, 5.354288261038792) _gate_q_5, _gate_q_15;
  u2(2.7212669666435554, 0.32144507755550455) _gate_q_14;
  x _gate_q_12;
  p(0.8733949188683445) _gate_q_4;
  ch _gate_q_2, _gate_q_0;
  ry(0.805650419809325) _gate_q_3;
  t _gate_q_7;
  t _gate_q_15;
  sxdg _gate_q_14;
  cs _gate_q_2, _gate_q_7;
  cy _gate_q_13, _gate_q_5;
  cu3_5070729776(2.042088981088892, 5.3481999621089, 0.5430376567167586) _gate_q_10, _gate_q_3;
  U(5.891786445799872, 5.260148696323369, 2.523026882759945) _gate_q_12;
  t _gate_q_9;
  dcx _gate_q_0, _gate_q_6;
  z _gate_q_11;
  xx_minus_yy_5070731696(3.161008535840115, 4.946113146403341) _gate_q_4, _gate_q_1;
  ry(3.9287633191757987) _gate_q_8;
  rzx_5070724880(5.750014616461818) _gate_q_11, _gate_q_1;
  crz(0.41981253658147) _gate_q_7, _gate_q_2;
  ecr _gate_q_0, _gate_q_3;
  cry(2.7709405440232087) _gate_q_4, _gate_q_15;
  u3(1.0973680765601674, 4.5028682755479625, 5.657173081355954) _gate_q_12;
  rzx_5070732752(2.80661565109698) _gate_q_13, _gate_q_8;
  rx(5.03841029999158) _gate_q_10;
  rxx_5070722144(2.1369248749069594) _gate_q_14, _gate_q_9;
  rxx_5070724832(1.8077874412828627) _gate_q_5, _gate_q_6;
  cry(1.0683352132952995) _gate_q_12, _gate_q_5;
  p(3.5305313518973627) _gate_q_6;
  cx _gate_q_10, _gate_q_3;
  U(5.982584477358304, 5.300971587444, 3.581467341247111) _gate_q_0;
  t _gate_q_4;
  h _gate_q_15;
  cp(0.7621215530006944) _gate_q_9, _gate_q_8;
  crz(5.515534032295598) _gate_q_2, _gate_q_1;
  cu1_5072770288(3.0432097194936696) _gate_q_14, _gate_q_7;
  h _gate_q_11;
  sdg _gate_q_13;
  csdg _gate_q_9, _gate_q_10;
  rxx_5072773744(3.6498904445175486) _gate_q_12, _gate_q_4;
  crx(5.120422139412677) _gate_q_2, _gate_q_8;
  cu(4.047070451557222, 3.146451918251579, 1.016838906626125, 5.300603488353007) _gate_q_6, _gate_q_0;
  rxx_5070723200(0.5814933697476173) _gate_q_1, _gate_q_11;
  cry(2.435818141359031) _gate_q_3, _gate_q_5;
  x _gate_q_14;
  y _gate_q_13;
  crz(3.391718411826718) _gate_q_7, _gate_q_15;
}