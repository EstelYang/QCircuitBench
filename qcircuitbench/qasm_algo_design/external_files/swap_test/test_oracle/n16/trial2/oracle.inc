gate rxx_5106010112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.64320325332783) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
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
gate r_5106021776(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.5194652893157485, 0.5464872889740566, -0.5464872889740566) _gate_q_0;
}
gate cu3_5106015632(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.347707911462951) _gate_q_0;
  u1(1.5926262879015252) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8436154204867714, 0, -2.347707911462951) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8436154204867714, 0.7550816235614257, 0) _gate_q_1;
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
gate rzz_5106008432(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.231242986747706) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5106008720(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.4040756490371056) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5106008192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.5794101823246263) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8910548273535168) _gate_q_1;
  ry(-1.8910548273535168) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.5794101823246263) _gate_q_0;
}
gate xx_plus_yy_5106009680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.207020083451044) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3409171470267598) _gate_q_1;
  ry(-1.3409171470267598) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.207020083451044) _gate_q_0;
}
gate rzx_5106021584(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7377328025445594) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5106015056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.018176408026449) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.025090101362222193) _gate_q_0;
  ry(-0.025090101362222193) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.018176408026449) _gate_q_1;
}
gate ryy_5106009296(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.160245383676194) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5106018896(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.621036755609043) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5106023504(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.7740029201628708) _gate_q_0;
  u1(0.768975992606422) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9350367261091247, 0, -0.7740029201628708) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9350367261091247, 0.00502692755644876, 0) _gate_q_1;
}
gate cu1_5106014144(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5648258672178561) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5648258672178561) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5648258672178561) _gate_q_1;
}
gate rxx_5106024320(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3400904545551309) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5106020096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.5258395097243183) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.139751454301764) _gate_q_1;
  ry(-2.139751454301764) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.5258395097243183) _gate_q_0;
}
gate xx_plus_yy_5116900224(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.2687230379910264) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.9725877483012577) _gate_q_1;
  ry(-2.9725877483012577) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.2687230379910264) _gate_q_0;
}
gate r_5105869328(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.202262670725874, -0.4587678151308421, 0.4587678151308421) _gate_q_0;
}
gate cu3_5116681760(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.5856070482303144) _gate_q_0;
  u1(-2.323388089983502) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8009568153601223, 0, -3.5856070482303144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8009568153601223, 5.908995138213816, 0) _gate_q_1;
}
gate cu1_5116682912(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7745393057930132) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7745393057930132) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7745393057930132) _gate_q_1;
}
gate rzx_5105283776(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.93118474731097) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5107602816(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.15756905843190394) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6362023660082008) _gate_q_1;
  ry(-1.6362023660082008) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.15756905843190394) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  rxx_5106010112(5.64320325332783) _gate_q_6, _gate_q_8;
  s _gate_q_11;
  cy _gate_q_7, _gate_q_2;
  tdg _gate_q_1;
  cy _gate_q_14, _gate_q_10;
  cs _gate_q_0, _gate_q_12;
  sx _gate_q_15;
  iswap _gate_q_5, _gate_q_13;
  csx _gate_q_3, _gate_q_9;
  z _gate_q_4;
  r_5106021776(4.5194652893157485, 2.117283615768953) _gate_q_10;
  rz(1.673126915970761) _gate_q_2;
  cu3_5106015632(5.687230840973543, 0.7550816235614257, 3.940334199364476) _gate_q_0, _gate_q_15;
  crz(2.5772561669377976) _gate_q_4, _gate_q_11;
  ecr _gate_q_9, _gate_q_5;
  cx _gate_q_6, _gate_q_14;
  crx(4.915094933057664) _gate_q_1, _gate_q_12;
  rzz_5106008432(5.231242986747706) _gate_q_8, _gate_q_7;
  sdg _gate_q_3;
  h _gate_q_13;
  sdg _gate_q_9;
  ecr _gate_q_1, _gate_q_4;
  dcx _gate_q_6, _gate_q_15;
  swap _gate_q_11, _gate_q_2;
  cz _gate_q_7, _gate_q_13;
  csx _gate_q_10, _gate_q_8;
  iswap _gate_q_3, _gate_q_12;
  h _gate_q_5;
  rzz_5106008720(1.4040756490371056) _gate_q_14, _gate_q_0;
  xx_plus_yy_5106008192(3.7821096547070336, 3.5794101823246263) _gate_q_3, _gate_q_5;
  xx_plus_yy_5106009680(2.6818342940535196, 1.207020083451044) _gate_q_6, _gate_q_0;
  cy _gate_q_10, _gate_q_9;
  sdg _gate_q_7;
  cz _gate_q_11, _gate_q_15;
  sxdg _gate_q_13;
  ry(1.0514726147750353) _gate_q_12;
  rzx_5106021584(0.7377328025445594) _gate_q_4, _gate_q_1;
  u3(1.9984963303739736, 4.726855955112741, 0.15174849452135422) _gate_q_2;
  xx_minus_yy_5106015056(0.05018020272444439, 3.018176408026449) _gate_q_8, _gate_q_14;
  id _gate_q_4;
  u1(0.14785428341808707) _gate_q_3;
  crz(4.048686897557685) _gate_q_0, _gate_q_9;
  ryy_5106009296(4.160245383676194) _gate_q_11, _gate_q_1;
  rzz_5106018896(2.621036755609043) _gate_q_14, _gate_q_13;
  cy _gate_q_7, _gate_q_12;
  rz(5.298755726380256) _gate_q_15;
  crx(5.673048881599829) _gate_q_6, _gate_q_5;
  dcx _gate_q_8, _gate_q_2;
  u3(1.9004369006532753, 5.038826353403336, 4.245312415574546) _gate_q_10;
  swap _gate_q_11, _gate_q_1;
  x _gate_q_12;
  csdg _gate_q_3, _gate_q_8;
  cu3_5106023504(1.8700734522182494, 0.00502692755644876, 1.5429789127692928) _gate_q_2, _gate_q_10;
  u2(2.0286622772055023, 3.3388436644446404) _gate_q_7;
  s _gate_q_5;
  rx(0.604231151484099) _gate_q_4;
  sdg _gate_q_15;
  iswap _gate_q_9, _gate_q_0;
  iswap _gate_q_6, _gate_q_14;
  sxdg _gate_q_13;
  crx(4.377093307702485) _gate_q_10, _gate_q_3;
  sdg _gate_q_11;
  crx(4.599779471081867) _gate_q_15, _gate_q_14;
  p(2.6297004555796746) _gate_q_6;
  sdg _gate_q_4;
  cu1_5106014144(1.1296517344357122) _gate_q_13, _gate_q_8;
  tdg _gate_q_9;
  rxx_5106024320(1.3400904545551309) _gate_q_0, _gate_q_12;
  xx_plus_yy_5106020096(4.279502908603528, 1.5258395097243183) _gate_q_1, _gate_q_2;
  ch _gate_q_5, _gate_q_7;
  xx_plus_yy_5116900224(5.945175496602515, 1.2687230379910264) _gate_q_8, _gate_q_1;
  r_5105869328(4.202262670725874, 1.1120285116640545) _gate_q_12;
  rx(0.6481909719041976) _gate_q_0;
  sx _gate_q_10;
  rx(1.8715539548197566) _gate_q_2;
  cu3_5116681760(1.6019136307202446, 5.908995138213816, 1.2622189582468124) _gate_q_9, _gate_q_5;
  ch _gate_q_14, _gate_q_11;
  csx _gate_q_3, _gate_q_15;
  cu1_5116682912(1.5490786115860264) _gate_q_7, _gate_q_13;
  u2(1.0305281599922287, 2.0128154055087264) _gate_q_6;
  z _gate_q_4;
  id _gate_q_11;
  U(2.022568713627878, 0.4792622683510499, 0.31215499449378414) _gate_q_3;
  rzx_5105283776(5.93118474731097) _gate_q_6, _gate_q_1;
  iswap _gate_q_5, _gate_q_0;
  crz(0.7237001927949123) _gate_q_2, _gate_q_4;
  xx_plus_yy_5107602816(3.2724047320164016, 0.15756905843190394) _gate_q_9, _gate_q_13;
  y _gate_q_10;
  rx(6.225053410854953) _gate_q_15;
  cy _gate_q_8, _gate_q_14;
  s _gate_q_12;
  t _gate_q_7;
  U(4.602830537150291, 3.273194075279878, 3.0885775133891564) _gate_q_5;
  csdg _gate_q_3, _gate_q_13;
  ch _gate_q_1, _gate_q_7;
  ecr _gate_q_0, _gate_q_10;
  swap _gate_q_14, _gate_q_8;
  csx _gate_q_9, _gate_q_15;
  tdg _gate_q_6;
  rx(0.3510340161549756) _gate_q_4;
  cu(3.126216641286696, 4.056992298998745, 0.2062765867858843, 2.773111655681851) _gate_q_2, _gate_q_12;
  y _gate_q_11;
}
gate ryy_5107598352(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2645613489857739) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5107613472(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.7122083839321585) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5107605552(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4210338108299334) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107600416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5251875914328299) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5107612704(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.864944424776953) _gate_q_0;
  u1(1.3162172324874102) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.3218281053445307, 0, -2.864944424776953) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.3218281053445307, 1.5487271922895431, 0) _gate_q_1;
}
gate cu3_5107612992(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.474428755512823) _gate_q_0;
  u1(2.0462396671478102) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.6889522169608373, 0, -2.474428755512823) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.6889522169608373, 0.4281890883650125, 0) _gate_q_1;
}
gate rxx_5116414480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.399332860481832) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5116426480(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.074973659794368) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7870281109167084) _gate_q_0;
  ry(-0.7870281109167084) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.074973659794368) _gate_q_1;
}
gate rzz_5116414000(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.55415791826285) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5116414864(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.1656343145950965) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.059085868907272784) _gate_q_1;
  ry(-0.059085868907272784) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.1656343145950965) _gate_q_0;
}
gate ryy_5116412944(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.631775991164903) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5116412800(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.026361544710698) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5116413136(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1676252413695796) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5116413040(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.3986482606250403) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.3986482606250403) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.3986482606250403) _gate_q_1;
}
gate xx_plus_yy_5116413904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.655704782523292) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9884986429883647) _gate_q_1;
  ry(-1.9884986429883647) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.655704782523292) _gate_q_0;
}
gate cu1_5116422928(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.22849009394078465) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.22849009394078465) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.22849009394078465) _gate_q_1;
}
gate rzx_5116426768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2011199031204027) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5116425856(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8090155576111293) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5116423312(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.233188456130375) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5106566784(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.531603979096025) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9513202584364118) _gate_q_0;
  ry(-2.9513202584364118) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.531603979096025) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  csdg _gate_q_6, _gate_q_10;
  tdg _gate_q_8;
  ryy_5107598352(1.2645613489857739) _gate_q_11, _gate_q_14;
  rxx_5107613472(4.7122083839321585) _gate_q_13, _gate_q_2;
  z _gate_q_7;
  h _gate_q_15;
  rzx_5107605552(3.4210338108299334) _gate_q_1, _gate_q_9;
  cu(4.335904327745879, 1.8446740771212553, 0.7352564195167457, 1.5071254249329655) _gate_q_3, _gate_q_5;
  u1(5.8694595221192305) _gate_q_12;
  sxdg _gate_q_0;
  u2(4.52164206606061, 3.2873621896760206) _gate_q_4;
  id _gate_q_0;
  sxdg _gate_q_12;
  ch _gate_q_9, _gate_q_14;
  rzx_5107600416(0.5251875914328299) _gate_q_2, _gate_q_1;
  cu3_5107612704(0.6436562106890614, 1.5487271922895431, 4.181161657264363) _gate_q_7, _gate_q_13;
  u2(5.729202496716337, 4.293877974210785) _gate_q_11;
  rx(0.5296889725801395) _gate_q_4;
  cu3_5107612992(5.377904433921675, 0.4281890883650125, 4.520668422660633) _gate_q_3, _gate_q_15;
  rx(0.9387080937610338) _gate_q_5;
  id _gate_q_6;
  id _gate_q_8;
  z _gate_q_10;
  cs _gate_q_1, _gate_q_0;
  u2(1.4356996120300638, 1.9911202127136036) _gate_q_6;
  rxx_5116414480(4.399332860481832) _gate_q_2, _gate_q_15;
  csx _gate_q_9, _gate_q_4;
  cs _gate_q_11, _gate_q_12;
  t _gate_q_8;
  cz _gate_q_13, _gate_q_14;
  cu(6.102314918874214, 0.5778730107556643, 6.162897886827522, 4.606621313135498) _gate_q_3, _gate_q_5;
  xx_minus_yy_5116426480(1.5740562218334169, 2.074973659794368) _gate_q_7, _gate_q_10;
  rzz_5116414000(5.55415791826285) _gate_q_0, _gate_q_7;
  cp(5.365534737181146) _gate_q_4, _gate_q_10;
  sxdg _gate_q_2;
  xx_plus_yy_5116414864(0.11817173781454557, 4.1656343145950965) _gate_q_8, _gate_q_5;
  cz _gate_q_15, _gate_q_13;
  cx _gate_q_3, _gate_q_14;
  u1(0.6510674005833665) _gate_q_9;
  id _gate_q_12;
  ryy_5116412944(1.631775991164903) _gate_q_6, _gate_q_11;
  x _gate_q_1;
  ch _gate_q_1, _gate_q_15;
  ecr _gate_q_10, _gate_q_12;
  rxx_5116412800(6.026361544710698) _gate_q_6, _gate_q_0;
  ecr _gate_q_8, _gate_q_7;
  z _gate_q_4;
  rx(5.717748777421358) _gate_q_9;
  rxx_5116413136(1.1676252413695796) _gate_q_13, _gate_q_14;
  u1(1.7384574414500125) _gate_q_2;
  cu1_5116413040(4.797296521250081) _gate_q_5, _gate_q_11;
  sx _gate_q_3;
  xx_plus_yy_5116413904(3.9769972859767293, 5.655704782523292) _gate_q_8, _gate_q_6;
  t _gate_q_5;
  p(3.679267490280207) _gate_q_7;
  sx _gate_q_10;
  ry(2.176085957846541) _gate_q_3;
  iswap _gate_q_1, _gate_q_14;
  cy _gate_q_12, _gate_q_2;
  cu(4.78529325208619, 6.197030663221621, 2.0982886985531506, 1.3518398429392935) _gate_q_11, _gate_q_9;
  s _gate_q_15;
  p(1.1058391968430203) _gate_q_13;
  cu1_5116422928(0.4569801878815693) _gate_q_0, _gate_q_4;
  ch _gate_q_10, _gate_q_0;
  rx(1.1288957178683605) _gate_q_2;
  ry(0.8458309541347391) _gate_q_15;
  h _gate_q_6;
  id _gate_q_1;
  rzx_5116426768(3.2011199031204027) _gate_q_9, _gate_q_12;
  iswap _gate_q_13, _gate_q_11;
  ry(3.12518018654382) _gate_q_4;
  cz _gate_q_3, _gate_q_7;
  ch _gate_q_8, _gate_q_14;
  sdg _gate_q_5;
  ecr _gate_q_14, _gate_q_2;
  rzx_5116425856(0.8090155576111293) _gate_q_6, _gate_q_8;
  rz(3.3041229105410777) _gate_q_5;
  x _gate_q_0;
  u1(4.056022449197353) _gate_q_11;
  rzz_5116423312(3.233188456130375) _gate_q_1, _gate_q_12;
  csx _gate_q_13, _gate_q_4;
  ecr _gate_q_10, _gate_q_3;
  U(2.433152533626623, 4.542576201461652, 0.29767385866028073) _gate_q_9;
  iswap _gate_q_7, _gate_q_15;
  p(0.9955038236366937) _gate_q_2;
  cz _gate_q_10, _gate_q_8;
  crz(5.984892442483309) _gate_q_5, _gate_q_15;
  cry(0.5778799290803366) _gate_q_13, _gate_q_6;
  cry(3.240252932376249) _gate_q_7, _gate_q_4;
  swap _gate_q_1, _gate_q_9;
  sxdg _gate_q_12;
  dcx _gate_q_3, _gate_q_14;
  u1(4.442073161449716) _gate_q_0;
  sxdg _gate_q_11;
  ry(1.710769438323213) _gate_q_10;
  xx_minus_yy_5106566784(5.9026405168728235, 5.531603979096025) _gate_q_4, _gate_q_2;
  swap _gate_q_7, _gate_q_8;
  cu(1.1895420038235025, 2.8191667337810347, 1.0370308539006574, 5.167118655408742) _gate_q_3, _gate_q_0;
  cx _gate_q_15, _gate_q_9;
  y _gate_q_5;
  crx(6.1011035807639935) _gate_q_14, _gate_q_11;
  crz(5.194773225937816) _gate_q_13, _gate_q_6;
  cy _gate_q_1, _gate_q_12;
}