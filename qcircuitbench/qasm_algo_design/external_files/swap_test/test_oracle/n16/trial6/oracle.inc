gate rzx_5105148240(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.302133539402509) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5105146752(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.8553181404785026) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.6298048360687316) _gate_q_1;
  ry(-2.6298048360687316) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.8553181404785026) _gate_q_0;
}
gate rzz_5105154864(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.7778507720221423) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_plus_yy_5105152656(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.430569758118643) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6491097349494368) _gate_q_1;
  ry(-1.6491097349494368) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.430569758118643) _gate_q_0;
}
gate cu3_5105141376(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.278743783320445) _gate_q_0;
  u1(0.9632487021250588) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.14420603034977, 0, -1.278743783320445) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.14420603034977, 0.31549508119538605, 0) _gate_q_1;
}
gate rzz_5105149584(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2112449939390106) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105142096(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2553214505663846) _gate_q_1;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5105645424(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3262668201722807) _gate_q_0;
  u1(-2.5226532155690977) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8387133263098282, 0, -3.3262668201722807) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8387133263098282, 5.848920035741378, 0) _gate_q_1;
}
gate cu3_5105638560(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.615927320195487) _gate_q_0;
  u1(0.18859122034093545) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.242989836026227, 0, -3.615927320195487) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.242989836026227, 3.4273360998545517, 0) _gate_q_1;
}
gate cu1_5105635392(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.3633697482960603) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.3633697482960603) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.3633697482960603) _gate_q_1;
}
gate cu3_5105631600(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.898759516437036) _gate_q_0;
  u1(-1.0606551845477479) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5625495808883004, 0, -3.898759516437036) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5625495808883004, 4.959414700984784, 0) _gate_q_1;
}
gate rzx_5105644896(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.242609353252549) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5105633328(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.203845257162081, 1.3651094058046245, -1.3651094058046245) _gate_q_0;
}
gate cu1_5105635536(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6824238232787945) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6824238232787945) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6824238232787945) _gate_q_1;
}
gate r_5105635872(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8881660665859028, -0.0002768488001567704, 0.0002768488001567704) _gate_q_0;
}
gate cu1_5105644608(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.137649620025168) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.137649620025168) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.137649620025168) _gate_q_1;
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
gate rzz_5105632896(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.5343452778435935) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5105639904(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9164690491898992) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9164690491898992) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9164690491898992) _gate_q_1;
}
gate r_5105635584(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.487143864984025, 3.698594309178283, -3.698594309178283) _gate_q_0;
}
gate xx_minus_yy_5105640384(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.901033785674586) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5828793768990252) _gate_q_0;
  ry(-0.5828793768990252) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.901033785674586) _gate_q_1;
}
gate cu3_5105645760(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.361677362435959) _gate_q_0;
  u1(1.0121494632731443) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.02529913032722796, 0, -4.361677362435959) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.02529913032722796, 3.3495278991628146, 0) _gate_q_1;
}
gate rzx_5105634336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9855327864124694) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105637264(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.081896688152585) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5105640960(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2341029115816977) _gate_q_0;
  u1(-0.8811599505516603) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3398579230721148, 0, -3.2341029115816977) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3398579230721148, 4.115262862133358, 0) _gate_q_1;
}
gate xx_plus_yy_5105645952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.8393027141323075) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9454835334560995) _gate_q_1;
  ry(-0.9454835334560995) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.8393027141323075) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rxx_5105642064(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.93199894750796) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  sdg _gate_q_11;
  rzx_5105148240(1.302133539402509) _gate_q_7, _gate_q_12;
  tdg _gate_q_3;
  xx_plus_yy_5105146752(5.259609672137463, 1.8553181404785026) _gate_q_1, _gate_q_5;
  tdg _gate_q_15;
  rzz_5105154864(0.7778507720221423) _gate_q_10, _gate_q_0;
  csdg _gate_q_13, _gate_q_4;
  sx _gate_q_2;
  xx_plus_yy_5105152656(3.2982194698988736, 5.430569758118643) _gate_q_8, _gate_q_6;
  cu3_5105141376(2.28841206069954, 0.31549508119538605, 2.2419924854455036) _gate_q_9, _gate_q_14;
  h _gate_q_1;
  cry(3.2020503015761417) _gate_q_12, _gate_q_13;
  h _gate_q_11;
  cu(0.7350313425005057, 5.757234791818058, 3.0365094052973207, 1.347534804377341) _gate_q_15, _gate_q_3;
  rzz_5105149584(1.2112449939390106) _gate_q_0, _gate_q_8;
  u2(3.6355742798803625, 1.232978559759408) _gate_q_6;
  rzz_5105142096(1.2553214505663846) _gate_q_9, _gate_q_10;
  csx _gate_q_4, _gate_q_14;
  cs _gate_q_7, _gate_q_5;
  u1(0.6720090495676263) _gate_q_2;
  cu3_5105645424(1.6774266526196564, 5.848920035741378, 0.8036136046031831) _gate_q_3, _gate_q_10;
  cu3_5105638560(4.485979672052454, 3.4273360998545517, 3.8045185405364226) _gate_q_6, _gate_q_8;
  ch _gate_q_15, _gate_q_14;
  u1(2.938553424364473) _gate_q_0;
  cu1_5105635392(4.726739496592121) _gate_q_4, _gate_q_7;
  y _gate_q_2;
  x _gate_q_9;
  t _gate_q_5;
  t _gate_q_11;
  cy _gate_q_12, _gate_q_1;
  h _gate_q_13;
  rz(4.59864919438742) _gate_q_7;
  y _gate_q_15;
  rx(1.2746644135464782) _gate_q_4;
  U(0.0794895863289762, 0.6754673277593627, 0.560342313333796) _gate_q_3;
  crx(2.0414459068617643) _gate_q_9, _gate_q_5;
  cu3_5105631600(1.1250991617766009, 4.959414700984784, 2.838104331889288) _gate_q_0, _gate_q_11;
  cx _gate_q_14, _gate_q_10;
  rzx_5105644896(5.242609353252549) _gate_q_2, _gate_q_13;
  u3(5.0869276709373406, 2.075373357736888, 2.9976984735431462) _gate_q_6;
  r_5105633328(2.203845257162081, 2.935905732599521) _gate_q_12;
  s _gate_q_1;
  h _gate_q_8;
  tdg _gate_q_7;
  cry(5.573607624308523) _gate_q_1, _gate_q_2;
  id _gate_q_0;
  csx _gate_q_12, _gate_q_6;
  cu1_5105635536(3.364847646557589) _gate_q_4, _gate_q_3;
  s _gate_q_11;
  s _gate_q_15;
  csx _gate_q_8, _gate_q_9;
  r_5105635872(0.8881660665859028, 1.5705194779947398) _gate_q_5;
  cu1_5105644608(6.275299240050336) _gate_q_13, _gate_q_14;
  sx _gate_q_10;
  cz _gate_q_9, _gate_q_15;
  cp(0.792524855776345) _gate_q_5, _gate_q_10;
  crx(4.648265936400749) _gate_q_14, _gate_q_6;
  ecr _gate_q_7, _gate_q_4;
  ry(3.0109566475671543) _gate_q_8;
  rzz_5105632896(5.5343452778435935) _gate_q_13, _gate_q_0;
  cy _gate_q_1, _gate_q_12;
  y _gate_q_2;
  cu1_5105639904(3.8329380983797985) _gate_q_11, _gate_q_3;
  rz(3.3174306756207077) _gate_q_8;
  ch _gate_q_7, _gate_q_14;
  tdg _gate_q_0;
  r_5105635584(2.487143864984025, 5.2693906359731795) _gate_q_13;
  xx_minus_yy_5105640384(1.1657587537980505, 3.901033785674586) _gate_q_4, _gate_q_2;
  cu3_5105645760(0.05059826065445592, 3.3495278991628146, 5.373826825709103) _gate_q_9, _gate_q_12;
  rzx_5105634336(2.9855327864124694) _gate_q_5, _gate_q_10;
  h _gate_q_6;
  tdg _gate_q_15;
  tdg _gate_q_11;
  ryy_5105637264(3.081896688152585) _gate_q_3, _gate_q_1;
  swap _gate_q_15, _gate_q_0;
  cu(2.643597363129964, 6.072135610832159, 2.9464768169126376, 2.7854107678011437) _gate_q_12, _gate_q_13;
  sxdg _gate_q_6;
  U(3.1634763071504093, 3.8619614968823694, 4.988664868264826) _gate_q_10;
  sx _gate_q_1;
  s _gate_q_3;
  cx _gate_q_4, _gate_q_5;
  id _gate_q_9;
  csx _gate_q_14, _gate_q_7;
  cu3_5105640960(2.6797158461442296, 4.115262862133358, 2.3529429610300374) _gate_q_11, _gate_q_2;
  h _gate_q_8;
  rx(1.5194291452221036) _gate_q_5;
  U(5.725786380134237, 3.7230177923635996, 1.2660995827035386) _gate_q_12;
  swap _gate_q_13, _gate_q_7;
  x _gate_q_9;
  crz(1.0038461569843367) _gate_q_14, _gate_q_0;
  swap _gate_q_3, _gate_q_4;
  z _gate_q_2;
  cp(0.24999572285821461) _gate_q_15, _gate_q_8;
  x _gate_q_6;
  tdg _gate_q_10;
  xx_plus_yy_5105645952(1.890967066912199, 2.8393027141323075) _gate_q_11, _gate_q_1;
  dcx _gate_q_13, _gate_q_7;
  u1(5.142533136317154) _gate_q_14;
  ecr _gate_q_15, _gate_q_4;
  csdg _gate_q_10, _gate_q_8;
  crz(1.3878810225339424) _gate_q_6, _gate_q_11;
  rxx_5105642064(3.93199894750796) _gate_q_3, _gate_q_5;
  cs _gate_q_2, _gate_q_1;
  ry(2.0959346788406683) _gate_q_0;
  y _gate_q_12;
  rx(5.287861281965916) _gate_q_9;
}
gate rxx_5106993440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.448695094369452) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_plus_yy_5106992336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.191097588911968) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.20068860626680565) _gate_q_1;
  ry(-0.20068860626680565) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.191097588911968) _gate_q_0;
}
gate ryy_5106993392(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2151771541247582) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5106996080(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.985906986350559) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5107003472(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6372563383187004) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5106992384(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3253917162773323) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5107006352(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8250042558746505) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5106999392(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.2157904032819836) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.0772469932064135) _gate_q_1;
  ry(-1.0772469932064135) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.2157904032819836) _gate_q_0;
}
gate ryy_5106999152(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.215368756161867) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5106998960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.132531919827768) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5107000784(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.463838567101835) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8438866551389734) _gate_q_1;
  ry(-1.8438866551389734) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.463838567101835) _gate_q_0;
}
gate cu3_5107005440(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.18300435053693) _gate_q_0;
  u1(-1.0088436277011454) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8022822620301227, 0, -5.18300435053693) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8022822620301227, 6.1918479782380755, 0) _gate_q_1;
}
gate cu1_5107003616(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.484523905889844) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.484523905889844) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.484523905889844) _gate_q_1;
}
gate rzz_5106995072(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.5267000651146316) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5106996416(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.651378627522532) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5107002176(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.389549774320745) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9823648297097557) _gate_q_1;
  ry(-0.9823648297097557) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.389549774320745) _gate_q_0;
}
gate rzx_5106995024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.183294165418302) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5107005536(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.765388994982577) _gate_q_0;
  u1(0.043769095188153306) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.9279359234661047, 0, -2.765388994982577) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.9279359234661047, 2.721619899794424, 0) _gate_q_1;
}
gate xx_plus_yy_5106998864(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.17825438940423297) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4629768059743729) _gate_q_1;
  ry(-1.4629768059743729) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.17825438940423297) _gate_q_0;
}
gate xx_plus_yy_5107005392(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.562839544270194) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.51468177090455) _gate_q_1;
  ry(-2.51468177090455) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.562839544270194) _gate_q_0;
}
gate rzz_5106999296(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.488907893752446) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5107002800(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.362660670801699, 0.42498385379284853, -0.42498385379284853) _gate_q_0;
}
gate ryy_5107006544(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.293045071101815) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5107003856(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.211246777350855) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5106996272(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.083943385429004) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5170699459814064) _gate_q_0;
  ry(-0.5170699459814064) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.083943385429004) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  csx _gate_q_15, _gate_q_9;
  rxx_5106993440(4.448695094369452) _gate_q_12, _gate_q_6;
  iswap _gate_q_7, _gate_q_14;
  xx_plus_yy_5106992336(0.4013772125336113, 3.191097588911968) _gate_q_10, _gate_q_0;
  ryy_5106993392(1.2151771541247582) _gate_q_11, _gate_q_3;
  id _gate_q_8;
  rxx_5106996080(5.985906986350559) _gate_q_5, _gate_q_2;
  cy _gate_q_13, _gate_q_1;
  sxdg _gate_q_4;
  U(3.9749039086477866, 4.651604860474185, 5.441986089688259) _gate_q_9;
  U(0.5788143680294496, 5.458924479944133, 3.321541156493097) _gate_q_3;
  rzx_5107003472(3.6372563383187004) _gate_q_8, _gate_q_14;
  u3(4.2649411372117605, 5.398649155122213, 6.230783783248021) _gate_q_0;
  p(3.7737247882702354) _gate_q_7;
  y _gate_q_12;
  ecr _gate_q_13, _gate_q_5;
  x _gate_q_4;
  cry(2.6564152604530817) _gate_q_1, _gate_q_2;
  sdg _gate_q_10;
  swap _gate_q_11, _gate_q_15;
  s _gate_q_6;
  crx(4.269770920700657) _gate_q_13, _gate_q_14;
  z _gate_q_8;
  ryy_5106992384(3.3253917162773323) _gate_q_12, _gate_q_10;
  ryy_5107006352(0.8250042558746505) _gate_q_6, _gate_q_5;
  ch _gate_q_9, _gate_q_11;
  cx _gate_q_1, _gate_q_2;
  u3(4.710629264913078, 5.92127970609184, 2.3034967122720444) _gate_q_7;
  h _gate_q_3;
  rx(5.846588951712761) _gate_q_0;
  t _gate_q_4;
  U(1.959406691639232, 1.5298360058628957, 2.090786441076905) _gate_q_15;
  sxdg _gate_q_4;
  u3(4.80240488863737, 3.7563825288377632, 2.3069056410721274) _gate_q_12;
  xx_plus_yy_5106999392(2.154493986412827, 0.2157904032819836) _gate_q_8, _gate_q_5;
  ryy_5106999152(5.215368756161867) _gate_q_13, _gate_q_15;
  u2(2.781998291927788, 3.06890204849252) _gate_q_0;
  z _gate_q_1;
  rxx_5106998960(5.132531919827768) _gate_q_9, _gate_q_10;
  xx_plus_yy_5107000784(3.687773310277947, 3.463838567101835) _gate_q_7, _gate_q_14;
  u2(5.458553023009746, 2.896405163478201) _gate_q_11;
  p(3.4401081245910077) _gate_q_6;
  crx(1.6659282419160921) _gate_q_3, _gate_q_2;
  sxdg _gate_q_6;
  u3(2.340967485726485, 2.6742394047475595, 4.109672467333498) _gate_q_5;
  csdg _gate_q_10, _gate_q_11;
  tdg _gate_q_15;
  rz(4.802694052781301) _gate_q_2;
  cu3_5107005440(1.6045645240602453, 6.1918479782380755, 4.174160722835785) _gate_q_13, _gate_q_4;
  cx _gate_q_14, _gate_q_0;
  cz _gate_q_1, _gate_q_9;
  cu1_5107003616(4.969047811779688) _gate_q_12, _gate_q_7;
  cu(2.7740181898673275, 5.355022056431482, 5.221223684718563, 5.832571354716385) _gate_q_8, _gate_q_3;
  rx(3.261557106003457) _gate_q_13;
  rzz_5106995072(1.5267000651146316) _gate_q_14, _gate_q_12;
  x _gate_q_15;
  ryy_5106996416(4.651378627522532) _gate_q_6, _gate_q_11;
  xx_plus_yy_5107002176(1.9647296594195114, 5.389549774320745) _gate_q_5, _gate_q_9;
  sx _gate_q_0;
  rzx_5106995024(4.183294165418302) _gate_q_1, _gate_q_3;
  u1(4.109633408162018) _gate_q_7;
  cz _gate_q_8, _gate_q_10;
  h _gate_q_2;
  ry(0.7830088974424121) _gate_q_4;
  cs _gate_q_9, _gate_q_15;
  cu3_5107005536(5.855871846932209, 2.721619899794424, 2.8091580901707305) _gate_q_3, _gate_q_4;
  cu(6.2299291900450955, 3.9975631107229104, 0.575429719841692, 4.346502162699703) _gate_q_10, _gate_q_7;
  swap _gate_q_6, _gate_q_2;
  rx(1.6384186402240106) _gate_q_0;
  xx_plus_yy_5106998864(2.9259536119487457, 0.17825438940423297) _gate_q_11, _gate_q_13;
  crz(0.6229357280992445) _gate_q_1, _gate_q_14;
  p(0.6944110463077391) _gate_q_5;
  xx_plus_yy_5107005392(5.0293635418091, 3.562839544270194) _gate_q_12, _gate_q_8;
  t _gate_q_12;
  csx _gate_q_3, _gate_q_11;
  crz(1.4102888428357994) _gate_q_8, _gate_q_1;
  cy _gate_q_15, _gate_q_10;
  z _gate_q_13;
  iswap _gate_q_4, _gate_q_6;
  z _gate_q_7;
  t _gate_q_14;
  h _gate_q_9;
  z _gate_q_2;
  cz _gate_q_0, _gate_q_5;
  u3(1.4042332988698145, 3.902310789610398, 6.025182552956638) _gate_q_15;
  rzz_5106999296(4.488907893752446) _gate_q_13, _gate_q_7;
  z _gate_q_10;
  csdg _gate_q_0, _gate_q_8;
  sdg _gate_q_9;
  r_5107002800(0.362660670801699, 1.995780180587745) _gate_q_12;
  ryy_5107006544(5.293045071101815) _gate_q_11, _gate_q_4;
  iswap _gate_q_3, _gate_q_1;
  s _gate_q_5;
  swap _gate_q_6, _gate_q_2;
  ry(3.9116838909088623) _gate_q_14;
  sdg _gate_q_7;
  iswap _gate_q_11, _gate_q_13;
  rx(3.9473460950803916) _gate_q_10;
  crz(4.814581288067799) _gate_q_15, _gate_q_8;
  rzz_5107003856(2.211246777350855) _gate_q_0, _gate_q_2;
  iswap _gate_q_1, _gate_q_3;
  xx_minus_yy_5106996272(1.0341398919628129, 6.083943385429004) _gate_q_4, _gate_q_6;
  sdg _gate_q_12;
  id _gate_q_9;
  cs _gate_q_14, _gate_q_5;
}