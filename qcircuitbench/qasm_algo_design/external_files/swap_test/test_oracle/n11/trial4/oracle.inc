gate rxx_5105592912(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2855681647243884) _gate_q_1;
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
gate r_5105582928(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.6102514051632468, 3.2129474298382634, -3.2129474298382634) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105594640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.7669223953243596) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.4159048002065857) _gate_q_0;
  ry(-0.4159048002065857) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.7669223953243596) _gate_q_1;
}
gate xx_plus_yy_5105594160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.105631992136843) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5893739945867666) _gate_q_1;
  ry(-1.5893739945867666) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.105631992136843) _gate_q_0;
}
gate ryy_5105590368(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.529557067181694) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105591040(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.918582773457447, -1.3683262784372698, 1.3683262784372698) _gate_q_0;
}
gate rzz_5105593584(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.986632589816874) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5105592336(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.85129828644024, 3.4029301643609786, -3.4029301643609786) _gate_q_0;
}
gate cu3_5105587200(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.9287639221698859) _gate_q_0;
  u1(-0.5387821308008375) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.391352038834973, 0, -0.9287639221698859) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.391352038834973, 1.4675460529707234, 0) _gate_q_1;
}
gate rzz_5105593920(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.555984446358924) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_plus_yy_5105586432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6574195006680142) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2495568684383398) _gate_q_1;
  ry(-1.2495568684383398) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6574195006680142) _gate_q_0;
}
gate xx_minus_yy_5105594448(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.927968425134672) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.2313949307728573) _gate_q_0;
  ry(-2.2313949307728573) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.927968425134672) _gate_q_1;
}
gate cu1_5105582880(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.48497885606359853) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.48497885606359853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.48497885606359853) _gate_q_1;
}
gate xx_plus_yy_5105586816(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.418034477283281) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.26282944174130346) _gate_q_1;
  ry(-0.26282944174130346) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.418034477283281) _gate_q_0;
}
gate cu3_5105589360(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.916208678665317) _gate_q_0;
  u1(-0.15216772369354903) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7290623937326761, 0, -5.916208678665317) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7290623937326761, 6.068376402358866, 0) _gate_q_1;
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
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  cy _gate_q_7, _gate_q_3;
  u1(2.021265640585523) _gate_q_9;
  rxx_5105592912(3.2855681647243884) _gate_q_1, _gate_q_5;
  s _gate_q_2;
  h _gate_q_10;
  csx _gate_q_0, _gate_q_6;
  r_5105582928(0.6102514051632468, 4.78374375663316) _gate_q_8;
  tdg _gate_q_4;
  dcx _gate_q_6, _gate_q_2;
  cu(2.5226990731402887, 3.8624217209671174, 0.8578088932178369, 4.207553109612322) _gate_q_8, _gate_q_7;
  crz(0.029838890547864688) _gate_q_10, _gate_q_5;
  ch _gate_q_4, _gate_q_3;
  cy _gate_q_9, _gate_q_1;
  p(3.073990583133064) _gate_q_0;
  cy _gate_q_7, _gate_q_0;
  cs _gate_q_4, _gate_q_3;
  swap _gate_q_6, _gate_q_8;
  cry(5.642573989445163) _gate_q_1, _gate_q_10;
  sdg _gate_q_2;
  xx_minus_yy_5105594640(0.8318096004131714, 0.7669223953243596) _gate_q_9, _gate_q_5;
  rz(4.87769368011407) _gate_q_0;
  id _gate_q_10;
  cx _gate_q_9, _gate_q_5;
  xx_plus_yy_5105594160(3.1787479891735333, 6.105631992136843) _gate_q_2, _gate_q_7;
  crx(3.7506608215319006) _gate_q_6, _gate_q_1;
  dcx _gate_q_3, _gate_q_8;
  sxdg _gate_q_4;
  x _gate_q_2;
  ryy_5105590368(1.529557067181694) _gate_q_8, _gate_q_9;
  tdg _gate_q_3;
  r_5105591040(4.918582773457447, 0.20247004835762678) _gate_q_4;
  rzz_5105593584(4.986632589816874) _gate_q_0, _gate_q_7;
  swap _gate_q_6, _gate_q_5;
  rx(3.8662673601579973) _gate_q_10;
  x _gate_q_1;
  r_5105592336(0.85129828644024, 4.973726491155875) _gate_q_2;
  cu3_5105587200(2.782704077669946, 1.4675460529707234, 0.3899817913690484) _gate_q_0, _gate_q_1;
  ch _gate_q_5, _gate_q_10;
  rzz_5105593920(5.555984446358924) _gate_q_7, _gate_q_3;
  crx(5.717292195714157) _gate_q_8, _gate_q_6;
  csdg _gate_q_9, _gate_q_4;
  swap _gate_q_7, _gate_q_0;
  xx_plus_yy_5105586432(2.4991137368766796, 0.6574195006680142) _gate_q_4, _gate_q_8;
  crz(5.449902764231493) _gate_q_1, _gate_q_10;
  rx(3.462893204236315) _gate_q_2;
  rx(3.156089945855427) _gate_q_6;
  xx_minus_yy_5105594448(4.462789861545715, 3.927968425134672) _gate_q_9, _gate_q_5;
  h _gate_q_3;
  cu1_5105582880(0.9699577121271971) _gate_q_8, _gate_q_1;
  xx_plus_yy_5105586816(0.5256588834826069, 4.418034477283281) _gate_q_6, _gate_q_2;
  ch _gate_q_10, _gate_q_4;
  ch _gate_q_9, _gate_q_3;
  t _gate_q_5;
  u3(2.158420258117396, 2.8651910111360097, 4.208155289244041) _gate_q_7;
  y _gate_q_0;
  u2(5.086613626632992, 2.7932173978387405) _gate_q_3;
  swap _gate_q_2, _gate_q_9;
  dcx _gate_q_1, _gate_q_4;
  swap _gate_q_0, _gate_q_10;
  crx(4.248148150244158) _gate_q_5, _gate_q_6;
  rz(6.024129177094253) _gate_q_7;
  sxdg _gate_q_8;
  csx _gate_q_3, _gate_q_7;
  cx _gate_q_4, _gate_q_1;
  y _gate_q_5;
  u3(5.735837515257979, 5.238156967816895, 3.2870833624531404) _gate_q_10;
  id _gate_q_8;
  cu3_5105589360(3.4581247874653522, 6.068376402358866, 5.764040954971768) _gate_q_0, _gate_q_2;
  ecr _gate_q_9, _gate_q_6;
}
gate rxx_5105596272(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0010547345816097) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5105593104(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7112333198595286) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5105592000(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.075972599973871) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5105582256(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.5253860485335045, 1.5727873034107325, -1.5727873034107325) _gate_q_0;
}
gate rzx_5105586000(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.082354914413914) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5105594976(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.453057474625902) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5105592816(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.878399998171961) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5105585328(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.517210536860528) _gate_q_0;
  u1(0.6867724606550447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.40103776661351503, 0, -4.517210536860528) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.40103776661351503, 3.830438076205483, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_minus_yy_5105593008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.821415913714982) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.023691065000154) _gate_q_0;
  ry(-1.023691065000154) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.821415913714982) _gate_q_1;
}
gate xx_plus_yy_5105591472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7300640153926258) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6883700076919771) _gate_q_1;
  ry(-0.6883700076919771) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7300640153926258) _gate_q_0;
}
gate rzz_5105591856(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.024805508241877) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5105588160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2489368276267965) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5105596128(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.5212598179506928) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5105588448(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.08000268963694511) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.08000268963694511) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.08000268963694511) _gate_q_1;
}
gate cu1_5107057008(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.005864524257875) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.005864524257875) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.005864524257875) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  rxx_5105596272(3.0010547345816097) _gate_q_9, _gate_q_2;
  rxx_5105593104(3.7112333198595286) _gate_q_3, _gate_q_1;
  y _gate_q_5;
  t _gate_q_8;
  rxx_5105592000(5.075972599973871) _gate_q_0, _gate_q_10;
  cp(1.9514896319599733) _gate_q_4, _gate_q_6;
  r_5105582256(2.5253860485335045, 3.143583630205629) _gate_q_7;
  U(0.056054063141479336, 5.218844033747632, 4.418502083925196) _gate_q_10;
  x _gate_q_8;
  swap _gate_q_7, _gate_q_2;
  t _gate_q_3;
  tdg _gate_q_5;
  cp(3.0947029192187863) _gate_q_4, _gate_q_9;
  crx(5.963741018760034) _gate_q_0, _gate_q_6;
  z _gate_q_1;
  p(0.4232403757956691) _gate_q_9;
  rzx_5105586000(4.082354914413914) _gate_q_6, _gate_q_8;
  t _gate_q_3;
  t _gate_q_10;
  swap _gate_q_5, _gate_q_7;
  s _gate_q_1;
  cp(4.0006883584391435) _gate_q_2, _gate_q_4;
  sx _gate_q_0;
  rzx_5105594976(2.453057474625902) _gate_q_5, _gate_q_9;
  rxx_5105592816(5.878399998171961) _gate_q_4, _gate_q_8;
  cx _gate_q_6, _gate_q_1;
  u1(3.4376556778825456) _gate_q_10;
  tdg _gate_q_0;
  U(1.6393339346976359, 4.483761345831902, 1.0355011933905724) _gate_q_2;
  cu3_5105585328(0.8020755332270301, 3.830438076205483, 5.203982997515572) _gate_q_3, _gate_q_7;
  cp(4.247381334604834) _gate_q_6, _gate_q_5;
  sdg _gate_q_8;
  u1(3.4386167277444843) _gate_q_4;
  dcx _gate_q_0, _gate_q_9;
  iswap _gate_q_10, _gate_q_1;
  z _gate_q_2;
  rz(1.7699631146397907) _gate_q_3;
  sx _gate_q_7;
  xx_minus_yy_5105593008(2.047382130000308, 2.821415913714982) _gate_q_5, _gate_q_4;
  ecr _gate_q_2, _gate_q_10;
  ecr _gate_q_9, _gate_q_8;
  xx_plus_yy_5105591472(1.3767400153839542, 0.7300640153926258) _gate_q_0, _gate_q_6;
  cy _gate_q_7, _gate_q_1;
  z _gate_q_3;
  rz(3.055371577554155) _gate_q_0;
  dcx _gate_q_1, _gate_q_10;
  h _gate_q_2;
  id _gate_q_4;
  dcx _gate_q_8, _gate_q_7;
  rx(4.474590194111692) _gate_q_5;
  y _gate_q_9;
  csx _gate_q_3, _gate_q_6;
  cp(2.4160141864428177) _gate_q_8, _gate_q_3;
  cx _gate_q_7, _gate_q_10;
  rzz_5105591856(6.024805508241877) _gate_q_4, _gate_q_1;
  rx(2.524299732821785) _gate_q_5;
  csx _gate_q_2, _gate_q_9;
  cu(0.015229909301841286, 4.379353836922598, 0.6308836404903138, 3.3059105886989335) _gate_q_6, _gate_q_0;
  p(3.3898733078052055) _gate_q_6;
  rxx_5105588160(2.2489368276267965) _gate_q_7, _gate_q_8;
  rzz_5105596128(0.5212598179506928) _gate_q_0, _gate_q_5;
  cz _gate_q_4, _gate_q_2;
  cu1_5105588448(0.16000537927389022) _gate_q_3, _gate_q_10;
  h _gate_q_9;
  U(0.8096625794925373, 5.374213753636867, 4.730204224337304) _gate_q_1;
  u1(4.782956735521412) _gate_q_3;
  cu(2.6233802949624643, 1.9801702875737057, 2.715194762832495, 5.813534626285704) _gate_q_9, _gate_q_6;
  id _gate_q_0;
  p(1.8138199595826245) _gate_q_4;
  u3(4.140223032114733, 4.330477460601559, 0.5854735036450581) _gate_q_8;
  swap _gate_q_5, _gate_q_1;
  sxdg _gate_q_10;
  cu1_5107057008(6.01172904851575) _gate_q_2, _gate_q_7;
}