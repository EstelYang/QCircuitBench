gate r_5105150640(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.440307136327555, 1.755331032555631, -1.755331032555631) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105155104(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.311844382321891) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5306090420748593) _gate_q_0;
  ry(-2.5306090420748593) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.311844382321891) _gate_q_1;
}
gate cu3_5105142480(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.704906105573552) _gate_q_0;
  u1(0.28069480514233813) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.6927906761986113, 0, -4.704906105573552) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.6927906761986113, 4.424211300431214, 0) _gate_q_1;
}
gate rxx_5105154144(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.5248270326317925) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate cu1_5105145072(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.1087464891865024) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.1087464891865024) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.1087464891865024) _gate_q_1;
}
gate xx_minus_yy_5105141808(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.38817559094485) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8811207773498337) _gate_q_0;
  ry(-1.8811207773498337) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.38817559094485) _gate_q_1;
}
gate ryy_5105154336(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.22598577999632777) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5105150352(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.7437741030560527) _gate_q_0;
  u1(1.071660910875482) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.0948985676120238, 0, -2.7437741030560527) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.0948985676120238, 1.672113192180571, 0) _gate_q_1;
}
gate r_5105155584(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.932299354980293, -0.6761974731893544, 0.6761974731893544) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rxx_5105645328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.251367059555717) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5105640672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8902995943307257) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5105641728(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0156149582727774) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5105639376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.2956218698226145) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5105632896(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2066128468973403) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5105646576(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.203964717796236) _gate_q_0;
  u1(-1.3641350618368022) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.447504978388649, 0, -3.203964717796236) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.447504978388649, 4.568099779633038, 0) _gate_q_1;
}
gate r_5105646288(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.850338936181931, -1.2215681899851134, 1.2215681899851134) _gate_q_0;
}
gate r_5105645040(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1744961834685526, 0.8142963220084098, -0.8142963220084098) _gate_q_0;
}
gate xx_minus_yy_5105641920(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.1114905854832057) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5488814131469386) _gate_q_0;
  ry(-2.5488814131469386) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.1114905854832057) _gate_q_1;
}
gate cu3_5105646000(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.6001711768035323) _gate_q_0;
  u1(1.470910370973341) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.0763948211988303, 0, -3.6001711768035323) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.0763948211988303, 2.129260805830191, 0) _gate_q_1;
}
gate rzx_5105631696(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8210246615594463) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5105633808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.33108209326460464) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5105642112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1359596535777507) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_minus_yy_5105635824(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.68161528273874) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.4935554295922809) _gate_q_0;
  ry(-0.4935554295922809) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.68161528273874) _gate_q_1;
}
gate cu3_5105631984(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.050745630407342) _gate_q_0;
  u1(-1.6938979352748418) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.274200632626139, 0, -3.050745630407342) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.274200632626139, 4.744643565682184, 0) _gate_q_1;
}
gate cu3_5105637024(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.143427004133155) _gate_q_0;
  u1(-0.28080614101445445) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.930921470572875, 0, -5.143427004133155) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.930921470572875, 5.42423314514761, 0) _gate_q_1;
}
gate xx_plus_yy_5105642880(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.272951735713966) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.116838431813315) _gate_q_1;
  ry(-3.116838431813315) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.272951735713966) _gate_q_0;
}
gate xx_plus_yy_5105640144(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.093787887914326) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1888402642822362) _gate_q_1;
  ry(-1.1888402642822362) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.093787887914326) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  r_5105150640(5.440307136327555, 3.3261273593505276) _gate_q_13;
  u3(1.8631137637270436, 5.403351924616698, 3.6166462397463) _gate_q_10;
  csdg _gate_q_15, _gate_q_17;
  id _gate_q_14;
  xx_minus_yy_5105155104(5.0612180841497185, 1.311844382321891) _gate_q_7, _gate_q_4;
  cu3_5105142480(3.3855813523972227, 4.424211300431214, 4.98560091071589) _gate_q_5, _gate_q_0;
  cx _gate_q_16, _gate_q_9;
  rx(4.181287243358227) _gate_q_6;
  cry(4.254054533744455) _gate_q_3, _gate_q_1;
  tdg _gate_q_8;
  rxx_5105154144(4.5248270326317925) _gate_q_12, _gate_q_11;
  s _gate_q_2;
  sx _gate_q_0;
  u2(4.357338859016074, 4.600132567145499) _gate_q_13;
  sx _gate_q_9;
  csx _gate_q_8, _gate_q_14;
  cu1_5105145072(4.217492978373005) _gate_q_6, _gate_q_17;
  cx _gate_q_5, _gate_q_12;
  p(2.4017487630608807) _gate_q_1;
  xx_minus_yy_5105141808(3.7622415546996675, 5.38817559094485) _gate_q_11, _gate_q_2;
  s _gate_q_15;
  U(4.726023865791566, 5.949792827832377, 4.831965751057378) _gate_q_7;
  cp(3.612711349545935) _gate_q_3, _gate_q_4;
  cz _gate_q_10, _gate_q_16;
  tdg _gate_q_1;
  ryy_5105154336(0.22598577999632777) _gate_q_5, _gate_q_14;
  t _gate_q_2;
  id _gate_q_17;
  cry(5.248898967384396) _gate_q_15, _gate_q_7;
  crx(0.7731013485234904) _gate_q_16, _gate_q_0;
  p(3.4021541481181323) _gate_q_12;
  tdg _gate_q_11;
  sdg _gate_q_8;
  cu3_5105150352(4.1897971352240475, 1.672113192180571, 3.815435013931535) _gate_q_10, _gate_q_4;
  cu(5.287189613889293, 1.8691111415449766, 5.249760734097882, 4.060344872378369) _gate_q_3, _gate_q_6;
  p(5.239265794460063) _gate_q_13;
  x _gate_q_9;
  x _gate_q_2;
  cu(3.3612716114182817, 5.553849320006551, 2.420446963709472, 3.979761512701372) _gate_q_13, _gate_q_10;
  swap _gate_q_9, _gate_q_15;
  sx _gate_q_4;
  swap _gate_q_0, _gate_q_17;
  cx _gate_q_5, _gate_q_12;
  sx _gate_q_6;
  r_5105155584(3.932299354980293, 0.8945988536055421) _gate_q_14;
  ry(3.9831427063008205) _gate_q_3;
  u1(1.3709641035925906) _gate_q_8;
  cu(2.656500877834358, 5.616832442124826, 5.775895689580909, 2.630555996531708) _gate_q_11, _gate_q_1;
  sdg _gate_q_7;
  x _gate_q_16;
  ch _gate_q_1, _gate_q_13;
  iswap _gate_q_15, _gate_q_6;
  rxx_5105645328(5.251367059555717) _gate_q_2, _gate_q_14;
  rzx_5105640672(1.8902995943307257) _gate_q_12, _gate_q_5;
  sx _gate_q_10;
  h _gate_q_11;
  sxdg _gate_q_7;
  cz _gate_q_3, _gate_q_4;
  crx(3.1611987488388484) _gate_q_8, _gate_q_17;
  rxx_5105641728(3.0156149582727774) _gate_q_0, _gate_q_16;
  u1(4.670973661734171) _gate_q_9;
  rxx_5105639376(4.2956218698226145) _gate_q_3, _gate_q_7;
  cp(4.301390142391123) _gate_q_8, _gate_q_12;
  cp(0.4495811549089717) _gate_q_6, _gate_q_2;
  ryy_5105632896(1.2066128468973403) _gate_q_4, _gate_q_0;
  ch _gate_q_17, _gate_q_9;
  sxdg _gate_q_16;
  csdg _gate_q_15, _gate_q_10;
  cu3_5105646576(2.895009956777298, 4.568099779633038, 1.8398296559594338) _gate_q_11, _gate_q_5;
  iswap _gate_q_14, _gate_q_1;
  p(3.2869894691310946) _gate_q_13;
  r_5105646288(1.850338936181931, 0.34922813680978304) _gate_q_3;
  u3(3.3923772381304906, 2.734202631241978, 5.023653814949905) _gate_q_5;
  u1(2.1411315267403115) _gate_q_12;
  tdg _gate_q_9;
  r_5105645040(1.1744961834685526, 2.3850926488033064) _gate_q_0;
  h _gate_q_2;
  xx_minus_yy_5105641920(5.097762826293877, 0.1114905854832057) _gate_q_17, _gate_q_16;
  ry(5.721502696675867) _gate_q_8;
  cu3_5105646000(4.152789642397661, 2.129260805830191, 5.071081547776873) _gate_q_6, _gate_q_4;
  rzx_5105631696(3.8210246615594463) _gate_q_1, _gate_q_7;
  x _gate_q_10;
  rzx_5105633808(0.33108209326460464) _gate_q_14, _gate_q_15;
  tdg _gate_q_11;
  id _gate_q_13;
  s _gate_q_3;
  rzx_5105642112(1.1359596535777507) _gate_q_12, _gate_q_5;
  ecr _gate_q_2, _gate_q_6;
  cx _gate_q_8, _gate_q_17;
  cry(4.7732101519100585) _gate_q_4, _gate_q_13;
  cx _gate_q_9, _gate_q_14;
  id _gate_q_11;
  cu(3.177702750674964, 2.46593979191737, 4.710871861115106, 0.14356181149279534) _gate_q_10, _gate_q_1;
  dcx _gate_q_0, _gate_q_7;
  crx(3.7847752585873704) _gate_q_16, _gate_q_15;
  rx(2.874693586692151) _gate_q_1;
  xx_minus_yy_5105635824(0.9871108591845618, 0.68161528273874) _gate_q_9, _gate_q_8;
  sxdg _gate_q_4;
  iswap _gate_q_15, _gate_q_11;
  y _gate_q_6;
  cx _gate_q_12, _gate_q_7;
  cu3_5105631984(4.548401265252278, 4.744643565682184, 1.3568476951325001) _gate_q_2, _gate_q_10;
  id _gate_q_16;
  id _gate_q_14;
  sxdg _gate_q_13;
  u1(6.241112524349964) _gate_q_0;
  cu3_5105637024(5.86184294114575, 5.42423314514761, 4.862620863118701) _gate_q_17, _gate_q_3;
  u1(5.391271459466073) _gate_q_5;
  crz(4.5283012316201505) _gate_q_13, _gate_q_6;
  x _gate_q_4;
  xx_plus_yy_5105642880(6.23367686362663, 2.272951735713966) _gate_q_0, _gate_q_8;
  y _gate_q_16;
  ch _gate_q_17, _gate_q_2;
  s _gate_q_7;
  cry(3.705265962952403) _gate_q_12, _gate_q_14;
  s _gate_q_11;
  x _gate_q_10;
  cy _gate_q_5, _gate_q_3;
  p(5.588260571887583) _gate_q_9;
  xx_plus_yy_5105640144(2.3776805285644724, 2.093787887914326) _gate_q_1, _gate_q_15;
}
gate xx_plus_yy_5105645760(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.7908391245389725) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7590741412485371) _gate_q_1;
  ry(-1.7590741412485371) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.7908391245389725) _gate_q_0;
}
gate ryy_5105635248(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5579888134345956) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5105635392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.841741247412685) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5105636256(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.815748270081543) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9310541380067567) _gate_q_0;
  ry(-2.9310541380067567) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.815748270081543) _gate_q_1;
}
gate ryy_5105643072(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.769767708302613) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5105637888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.088356006790179) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8085129811838363) _gate_q_1;
  ry(-1.8085129811838363) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.088356006790179) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzz_5105635632(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.459972386154587) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5105636688(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.0876543480519247, 4.671943357435392, -4.671943357435392) _gate_q_0;
}
gate rxx_5105631648(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.3594940633278325) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5105631360(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.6795120684945726, 0.46939884641607943, -0.46939884641607943) _gate_q_0;
}
gate cu3_5105636064(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.31386334216009) _gate_q_0;
  u1(-2.6978473854221425) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.1453788634926442, 0, -3.31386334216009) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.1453788634926442, 6.011710727582233, 0) _gate_q_1;
}
gate cu3_5105646432(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.8221736410884863) _gate_q_0;
  u1(-0.10345183696891741) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.087008836685625, 0, -0.8221736410884863) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.087008836685625, 0.9256254780574037, 0) _gate_q_1;
}
gate cu1_5105643120(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.3478285579730147) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.3478285579730147) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.3478285579730147) _gate_q_1;
}
gate r_5105645232(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.4447028413825045, -0.6340006118340105, 0.6340006118340105) _gate_q_0;
}
gate rzz_5105644752(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.644443893785601) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105631504(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.0332612832913144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5105642400(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.834431006170305) _gate_q_0;
  u1(0.08674474546644761) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.28716386733825, 0, -2.834431006170305) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.28716386733825, 2.7476862607038575, 0) _gate_q_1;
}
gate xx_minus_yy_5105633040(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.3963736940223716) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2411061425693364) _gate_q_0;
  ry(-1.2411061425693364) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.3963736940223716) _gate_q_1;
}
gate rzz_5105640624(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.149566197632058) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  h _gate_q_6;
  xx_plus_yy_5105645760(3.5181482824970742, 1.7908391245389725) _gate_q_9, _gate_q_15;
  ch _gate_q_2, _gate_q_11;
  cp(0.17199362044405989) _gate_q_4, _gate_q_5;
  u3(1.3271230738417992, 0.2481354527132291, 3.055374726054711) _gate_q_1;
  ryy_5105635248(3.5579888134345956) _gate_q_8, _gate_q_7;
  rxx_5105635392(5.841741247412685) _gate_q_14, _gate_q_13;
  x _gate_q_17;
  cx _gate_q_0, _gate_q_3;
  h _gate_q_16;
  x _gate_q_10;
  u2(4.816687667634399, 3.3414408756831473) _gate_q_12;
  xx_minus_yy_5105636256(5.8621082760135135, 2.815748270081543) _gate_q_4, _gate_q_1;
  cu(5.247926459142524, 1.7655153532192909, 2.3175609215452413, 4.936587314992858) _gate_q_17, _gate_q_7;
  iswap _gate_q_2, _gate_q_10;
  csdg _gate_q_9, _gate_q_13;
  cz _gate_q_8, _gate_q_6;
  U(4.37366435993495, 4.93747514576861, 3.2925171611921504) _gate_q_12;
  ryy_5105643072(5.769767708302613) _gate_q_11, _gate_q_14;
  u2(5.122864224833379, 2.277831372451345) _gate_q_0;
  cry(3.7042039960763296) _gate_q_3, _gate_q_15;
  cry(3.9820157559961875) _gate_q_16, _gate_q_5;
  u1(0.5272242553396672) _gate_q_12;
  sdg _gate_q_1;
  cp(1.9198944979281118) _gate_q_15, _gate_q_3;
  tdg _gate_q_16;
  xx_plus_yy_5105637888(3.6170259623676726, 4.088356006790179) _gate_q_5, _gate_q_10;
  cry(3.127614857417426) _gate_q_11, _gate_q_13;
  ecr _gate_q_14, _gate_q_9;
  crx(3.6554728205235323) _gate_q_4, _gate_q_7;
  y _gate_q_0;
  rz(4.516419071522201) _gate_q_2;
  z _gate_q_8;
  id _gate_q_6;
  u2(0.6198003157608271, 3.5676462032689096) _gate_q_17;
  ecr _gate_q_5, _gate_q_15;
  swap _gate_q_6, _gate_q_0;
  cs _gate_q_3, _gate_q_17;
  rzz_5105635632(2.459972386154587) _gate_q_16, _gate_q_11;
  rx(4.435591381756473) _gate_q_1;
  csx _gate_q_10, _gate_q_2;
  csdg _gate_q_9, _gate_q_13;
  s _gate_q_8;
  r_5105636688(3.0876543480519247, 6.242739684230289) _gate_q_12;
  dcx _gate_q_14, _gate_q_7;
  tdg _gate_q_4;
  rxx_5105631648(4.3594940633278325) _gate_q_9, _gate_q_4;
  sdg _gate_q_10;
  r_5105631360(3.6795120684945726, 2.040195173210976) _gate_q_3;
  t _gate_q_8;
  iswap _gate_q_16, _gate_q_11;
  sdg _gate_q_17;
  u1(2.239339117306658) _gate_q_15;
  U(4.241451871713337, 2.2140729278513094, 1.4878083734703031) _gate_q_0;
  swap _gate_q_1, _gate_q_2;
  u3(1.5292948965267892, 4.656081122058958, 4.607724298737891) _gate_q_5;
  rx(6.085581067970067) _gate_q_14;
  s _gate_q_6;
  cs _gate_q_7, _gate_q_13;
  sx _gate_q_12;
  cy _gate_q_2, _gate_q_4;
  sdg _gate_q_17;
  ry(4.7887731350366245) _gate_q_9;
  crx(4.400957891014429) _gate_q_1, _gate_q_0;
  ch _gate_q_8, _gate_q_7;
  s _gate_q_15;
  sxdg _gate_q_14;
  z _gate_q_13;
  csx _gate_q_5, _gate_q_12;
  u1(0.16339990228602774) _gate_q_10;
  U(0.9177754196753091, 2.567310840575584, 3.0014535514209064) _gate_q_11;
  cu3_5105636064(0.2907577269852884, 6.011710727582233, 0.616015956737948) _gate_q_16, _gate_q_6;
  u1(4.736457323077963) _gate_q_3;
  id _gate_q_10;
  crx(4.973391910379185) _gate_q_4, _gate_q_14;
  rz(3.830759607281923) _gate_q_15;
  cry(2.812209478261982) _gate_q_2, _gate_q_7;
  cz _gate_q_8, _gate_q_6;
  cz _gate_q_9, _gate_q_3;
  crx(2.650425860654765) _gate_q_17, _gate_q_12;
  cs _gate_q_13, _gate_q_11;
  cu3_5105646432(2.17401767337125, 0.9256254780574037, 0.7187218041195689) _gate_q_0, _gate_q_5;
  u3(1.9670013304983647, 1.311706640836175, 0.7064470536459438) _gate_q_16;
  U(0.4570245315858703, 1.9809571994882493, 4.1023163413316865) _gate_q_1;
  y _gate_q_11;
  h _gate_q_10;
  cy _gate_q_14, _gate_q_15;
  tdg _gate_q_4;
  sx _gate_q_3;
  csx _gate_q_17, _gate_q_0;
  cu1_5105643120(4.695657115946029) _gate_q_13, _gate_q_7;
  r_5105645232(4.4447028413825045, 0.9367957149608861) _gate_q_8;
  rzz_5105644752(4.644443893785601) _gate_q_5, _gate_q_1;
  dcx _gate_q_16, _gate_q_12;
  sx _gate_q_9;
  x _gate_q_6;
  U(1.8160982554590686, 4.774421847050031, 1.7771644787232894) _gate_q_2;
  ecr _gate_q_7, _gate_q_9;
  t _gate_q_6;
  sx _gate_q_5;
  cz _gate_q_2, _gate_q_1;
  id _gate_q_0;
  y _gate_q_14;
  rzz_5105631504(2.0332612832913144) _gate_q_17, _gate_q_11;
  csdg _gate_q_3, _gate_q_13;
  csdg _gate_q_15, _gate_q_8;
  cp(3.2624493555022887) _gate_q_16, _gate_q_4;
  y _gate_q_12;
  U(3.975151154531235, 3.1478935693014116, 1.9362144951701317) _gate_q_10;
  cu3_5105642400(4.5743277346765, 2.7476862607038575, 2.9211757516367527) _gate_q_4, _gate_q_2;
  x _gate_q_16;
  rx(3.162836469202623) _gate_q_12;
  swap _gate_q_0, _gate_q_10;
  xx_minus_yy_5105633040(2.4822122851386728, 0.3963736940223716) _gate_q_13, _gate_q_17;
  sdg _gate_q_1;
  iswap _gate_q_7, _gate_q_3;
  csx _gate_q_5, _gate_q_6;
  cp(0.6047987504047064) _gate_q_15, _gate_q_9;
  s _gate_q_14;
  rzz_5105640624(3.149566197632058) _gate_q_8, _gate_q_11;
}