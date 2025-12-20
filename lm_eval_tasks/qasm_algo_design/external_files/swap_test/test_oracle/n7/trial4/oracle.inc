gate rzx_5105874320(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.572037839879617) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5105868848(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.0373889197585298) _gate_q_0;
  u1(-1.320155976820282) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.1875882486996163, 0, -2.0373889197585298) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.1875882486996163, 3.357544896578812, 0) _gate_q_1;
}
gate rzz_5105869520(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.8613577127199727) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105863280(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.7755889651258425) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9297078412236347) _gate_q_0;
  ry(-0.9297078412236347) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.7755889651258425) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
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
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5105873072(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.275983032325827, 1.4993898484583292, -1.4993898484583292) _gate_q_0;
}
gate xx_plus_yy_5105788704(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.2680593135289228) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3894939463069653) _gate_q_1;
  ry(-1.3894939463069653) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.2680593135289228) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  cz _gate_q_0, _gate_q_3;
  U(3.5457055889774423, 3.740720632818042, 4.989381408233974) _gate_q_4;
  cz _gate_q_5, _gate_q_6;
  rzx_5105874320(5.572037839879617) _gate_q_2, _gate_q_1;
  cu3_5105868848(4.375176497399233, 3.357544896578812, 0.7172329429382479) _gate_q_2, _gate_q_6;
  sdg _gate_q_4;
  rzz_5105869520(3.8613577127199727) _gate_q_1, _gate_q_3;
  cp(1.0743444754477842) _gate_q_0, _gate_q_5;
  z _gate_q_0;
  cry(1.0578510177238365) _gate_q_5, _gate_q_2;
  csx _gate_q_6, _gate_q_1;
  xx_minus_yy_5105863280(1.8594156824472694, 0.7755889651258425) _gate_q_3, _gate_q_4;
  sx _gate_q_0;
  crz(6.221494583386805) _gate_q_4, _gate_q_5;
  csdg _gate_q_6, _gate_q_1;
  cs _gate_q_2, _gate_q_3;
  dcx _gate_q_0, _gate_q_3;
  sxdg _gate_q_6;
  cs _gate_q_5, _gate_q_4;
  ry(4.174585860610285) _gate_q_1;
  rx(0.4884130781187129) _gate_q_2;
  u1(0.7711486687193192) _gate_q_1;
  p(1.6629465547989384) _gate_q_5;
  u3(3.217514179228801, 2.1343318614056592, 1.6184527043631756) _gate_q_6;
  iswap _gate_q_4, _gate_q_0;
  r_5105873072(4.275983032325827, 3.070186175253226) _gate_q_3;
  tdg _gate_q_2;
  xx_plus_yy_5105788704(2.7789878926139306, 0.2680593135289228) _gate_q_3, _gate_q_6;
  csdg _gate_q_0, _gate_q_5;
  id _gate_q_2;
  sx _gate_q_1;
  p(0.43575936879804494) _gate_q_4;
}
gate rzx_5105789328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2642979765268594) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105788032(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.16187283929641) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5105784096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.5219868422624105) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.009449594639697) _gate_q_1;
  ry(-3.009449594639697) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.5219868422624105) _gate_q_0;
}
gate cu3_5105785104(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.9707454044352355) _gate_q_0;
  u1(-0.7966842059222472) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.001713795862915, 0, -4.9707454044352355) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.001713795862915, 5.767429610357483, 0) _gate_q_1;
}
gate ryy_5105791056(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7908083988895094) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5105789424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4356047252881217) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5105784480(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.6546692052252249, 2.442345910517264, -2.442345910517264) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  ch _gate_q_1, _gate_q_2;
  id _gate_q_4;
  rz(2.677731145233443) _gate_q_0;
  csx _gate_q_5, _gate_q_6;
  s _gate_q_3;
  cs _gate_q_4, _gate_q_6;
  u3(1.2609636540944915, 0.16010158857492338, 3.8150722675707285) _gate_q_5;
  u1(2.713275420622282) _gate_q_1;
  rzx_5105789328(2.2642979765268594) _gate_q_2, _gate_q_3;
  s _gate_q_0;
  ryy_5105788032(6.16187283929641) _gate_q_1, _gate_q_3;
  dcx _gate_q_4, _gate_q_5;
  u3(3.899112272965584, 0.3168697196518596, 6.162339551524332) _gate_q_0;
  xx_plus_yy_5105784096(6.018899189279394, 3.5219868422624105) _gate_q_6, _gate_q_2;
  U(1.974445144299036, 0.8846140033039271, 2.3145907384710673) _gate_q_6;
  rx(0.2632782103593072) _gate_q_3;
  cu3_5105785104(2.00342759172583, 5.767429610357483, 4.174061198512988) _gate_q_1, _gate_q_5;
  ry(3.5202328403148555) _gate_q_4;
  csx _gate_q_2, _gate_q_0;
  rx(1.1404768876242957) _gate_q_1;
  ryy_5105791056(0.7908083988895094) _gate_q_6, _gate_q_4;
  u2(5.7862490437608, 2.1116162450273146) _gate_q_3;
  sxdg _gate_q_0;
  x _gate_q_5;
  sx _gate_q_2;
  rzx_5105789424(2.4356047252881217) _gate_q_6, _gate_q_0;
  cry(3.0358573629658347) _gate_q_5, _gate_q_3;
  sxdg _gate_q_4;
  sdg _gate_q_2;
  tdg _gate_q_1;
  id _gate_q_6;
  cp(0.3182287228787296) _gate_q_2, _gate_q_0;
  s _gate_q_1;
  r_5105784480(0.6546692052252249, 4.01314223731216) _gate_q_3;
  u1(5.2028679656823025) _gate_q_5;
  x _gate_q_4;
}