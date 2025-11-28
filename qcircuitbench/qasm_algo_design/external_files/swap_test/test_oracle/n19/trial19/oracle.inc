gate cu3_5072700576(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3162761946448622) _gate_q_0;
  u1(0.9445760328860358) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8534681246504578, 0, -3.3162761946448622) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8534681246504578, 2.3717001617588265, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rxx_5072712096(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.2840411552627495) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072701920(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.011703422691602551, 1.0332624830811206, -1.0332624830811206) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rzz_5072715600(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.1342621458269564) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5072713920(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.908469388371712) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7971298381928471) _gate_q_1;
  ry(-0.7971298381928471) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.908469388371712) _gate_q_0;
}
gate xx_minus_yy_5072706048(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.4244640734799192) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5505472011132537) _gate_q_0;
  ry(-1.5505472011132537) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.4244640734799192) _gate_q_1;
}
gate cu1_5072711040(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.1161220743186626) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.1161220743186626) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.1161220743186626) _gate_q_1;
}
gate r_5072712960(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.5796314415475465, 3.6276240132340165, -3.6276240132340165) _gate_q_0;
}
gate rzz_5072709936(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.8982971463468059) _gate_q_1;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzz_5072707968(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.5864477586518246) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate ryy_5072704080(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.268896443667924) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5072706720(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7865690012860783) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5072711232(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2214373659915836) _gate_q_0;
  u1(1.2169076819728966) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.46599635273463835, 0, -3.2214373659915836) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.46599635273463835, 2.0045296840186873, 0) _gate_q_1;
}
gate rzz_5072705184(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2100445147500556) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5072710368(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0064516079698875) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5072704128(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.19527065576771843) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6910314944970697) _gate_q_1;
  ry(-1.6910314944970697) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.19527065576771843) _gate_q_0;
}
gate r_5072702880(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.12271187019886, 2.009086921200042, -2.009086921200042) _gate_q_0;
}
gate rzz_5072711328(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.302668953014251) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5072699808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7894934734650031) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5072713440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.183258498177427) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5072706960(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.9741086825067793) _gate_q_0;
  u1(-1.3202651292389425) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4353729315183912, 0, -3.9741086825067793) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4353729315183912, 5.2943738117457215, 0) _gate_q_1;
}
gate xx_minus_yy_5072700096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.280862780473305) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.018113460819265) _gate_q_0;
  ry(-2.018113460819265) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.280862780473305) _gate_q_1;
}
gate rzx_5072709456(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.485510851538886) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072708688(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.9297215670326455) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5072710320(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.4605980728660124) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5072713728(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.0470293437005376) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.0470293437005376) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.0470293437005376) _gate_q_1;
}
gate rxx_5072706144(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.40216161547898194) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072713776(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.8565064251862387, 0.762735363011501, -0.762735363011501) _gate_q_0;
}
gate rzx_5072712816(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4417206318455075) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072708880(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.811029075677613, 0.9878447321491075, -0.9878447321491075) _gate_q_0;
}
gate rzz_5072699520(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.8767081467615276) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072702736(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.260311131416335, 0.8191102060303113, -0.8191102060303113) _gate_q_0;
}
gate ryy_5072709216(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.090739865060701) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5072714640(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.43072139156313, -0.4443725162255028, 0.4443725162255028) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  id _gate_q_18;
  cu3_5072700576(3.7069362493009157, 2.3717001617588265, 4.260852227530898) _gate_q_7, _gate_q_8;
  iswap _gate_q_2, _gate_q_3;
  sx _gate_q_15;
  dcx _gate_q_13, _gate_q_1;
  s _gate_q_16;
  s _gate_q_14;
  tdg _gate_q_11;
  rxx_5072712096(4.2840411552627495) _gate_q_17, _gate_q_9;
  cx _gate_q_4, _gate_q_10;
  s _gate_q_0;
  u3(5.673205771113703, 1.6415140267849766, 4.0611330907698395) _gate_q_5;
  r_5072701920(0.011703422691602551, 2.604058809876017) _gate_q_6;
  ry(2.0295247299444803) _gate_q_12;
  rx(5.902341010755708) _gate_q_13;
  sxdg _gate_q_17;
  rzz_5072715600(2.1342621458269564) _gate_q_1, _gate_q_15;
  cp(2.640635433026353) _gate_q_18, _gate_q_12;
  tdg _gate_q_7;
  z _gate_q_9;
  crx(1.5233442387147693) _gate_q_16, _gate_q_14;
  cp(2.2621396055762726) _gate_q_8, _gate_q_6;
  xx_plus_yy_5072713920(1.5942596763856942, 1.908469388371712) _gate_q_2, _gate_q_10;
  xx_minus_yy_5072706048(3.1010944022265075, 0.4244640734799192) _gate_q_4, _gate_q_5;
  ry(5.234538268512531) _gate_q_3;
  cu1_5072711040(6.232244148637325) _gate_q_11, _gate_q_0;
  r_5072712960(2.5796314415475465, 5.198420340028913) _gate_q_8;
  p(3.635981914350228) _gate_q_3;
  ry(4.287557543704163) _gate_q_6;
  tdg _gate_q_4;
  cp(4.399863920802446) _gate_q_2, _gate_q_10;
  rzz_5072709936(0.8982971463468059) _gate_q_15, _gate_q_14;
  ecr _gate_q_13, _gate_q_17;
  cs _gate_q_9, _gate_q_18;
  crx(3.745951635070153) _gate_q_7, _gate_q_16;
  u3(0.46103528913020636, 1.2307287023512263, 0.6049728900919555) _gate_q_11;
  crz(5.865685620422257) _gate_q_1, _gate_q_0;
  rzz_5072707968(1.5864477586518246) _gate_q_12, _gate_q_5;
  csdg _gate_q_12, _gate_q_8;
  id _gate_q_6;
  sx _gate_q_0;
  ryy_5072704080(4.268896443667924) _gate_q_4, _gate_q_15;
  sx _gate_q_9;
  x _gate_q_13;
  cs _gate_q_11, _gate_q_7;
  h _gate_q_5;
  rz(4.19693101435932) _gate_q_17;
  rxx_5072706720(0.7865690012860783) _gate_q_3, _gate_q_14;
  p(1.354349512994115) _gate_q_18;
  cu(1.9892019015028106, 0.0907889825876135, 5.550738203923883, 4.0726763948588145) _gate_q_16, _gate_q_2;
  cu3_5072711232(0.9319927054692767, 2.0045296840186873, 4.43834504796448) _gate_q_10, _gate_q_1;
  iswap _gate_q_2, _gate_q_3;
  csdg _gate_q_4, _gate_q_5;
  ry(4.506295304358831) _gate_q_0;
  iswap _gate_q_15, _gate_q_16;
  cry(0.789718731465841) _gate_q_7, _gate_q_1;
  z _gate_q_14;
  iswap _gate_q_10, _gate_q_9;
  u1(3.7544471713864667) _gate_q_18;
  dcx _gate_q_11, _gate_q_17;
  tdg _gate_q_8;
  sxdg _gate_q_13;
  u3(5.4765798588521575, 1.4913735881753043, 2.1790945513360533) _gate_q_12;
  s _gate_q_6;
  sxdg _gate_q_13;
  s _gate_q_4;
  x _gate_q_6;
  rzz_5072705184(1.2100445147500556) _gate_q_5, _gate_q_3;
  u3(3.1299383073902485, 5.286606246184608, 2.2824404858181286) _gate_q_7;
  h _gate_q_15;
  rzx_5072710368(3.0064516079698875) _gate_q_9, _gate_q_14;
  xx_plus_yy_5072704128(3.3820629889941394, 0.19527065576771843) _gate_q_11, _gate_q_1;
  U(1.1095179692164379, 1.0564167301452405, 5.034050495525009) _gate_q_0;
  cp(0.3828260844636128) _gate_q_10, _gate_q_12;
  r_5072702880(5.12271187019886, 3.5798832479949385) _gate_q_8;
  z _gate_q_16;
  sxdg _gate_q_18;
  cu(3.9574893123680797, 0.7134879547122785, 0.2831045122992307, 3.5922819924459977) _gate_q_2, _gate_q_17;
  z _gate_q_7;
  rzz_5072711328(5.302668953014251) _gate_q_1, _gate_q_14;
  rzx_5072699808(0.7894934734650031) _gate_q_17, _gate_q_18;
  y _gate_q_3;
  cs _gate_q_4, _gate_q_15;
  crx(3.045961145652748) _gate_q_12, _gate_q_9;
  rzx_5072713440(5.183258498177427) _gate_q_2, _gate_q_5;
  ecr _gate_q_13, _gate_q_10;
  sx _gate_q_0;
  cs _gate_q_6, _gate_q_11;
  cu3_5072706960(2.8707458630367824, 5.2943738117457215, 2.6538435532678366) _gate_q_16, _gate_q_8;
  xx_minus_yy_5072700096(4.03622692163853, 2.280862780473305) _gate_q_3, _gate_q_9;
  cry(5.097564210236104) _gate_q_17, _gate_q_7;
  u3(6.137284477814109, 2.8333306872623987, 4.849290204703671) _gate_q_18;
  ry(5.93783344650979) _gate_q_5;
  csdg _gate_q_6, _gate_q_8;
  cz _gate_q_0, _gate_q_12;
  rz(1.5666274661856001) _gate_q_11;
  rzx_5072709456(2.485510851538886) _gate_q_1, _gate_q_14;
  cp(1.136419569568116) _gate_q_2, _gate_q_16;
  rzz_5072708688(4.9297215670326455) _gate_q_4, _gate_q_15;
  cy _gate_q_13, _gate_q_10;
  ecr _gate_q_2, _gate_q_3;
  rzz_5072710320(2.4605980728660124) _gate_q_11, _gate_q_14;
  cs _gate_q_12, _gate_q_15;
  csdg _gate_q_18, _gate_q_5;
  t _gate_q_0;
  cu1_5072713728(6.094058687401075) _gate_q_10, _gate_q_9;
  crx(5.3413465783937735) _gate_q_13, _gate_q_4;
  rxx_5072706144(0.40216161547898194) _gate_q_1, _gate_q_7;
  r_5072713776(2.8565064251862387, 2.3335316898063976) _gate_q_16;
  u2(0.18454690836426058, 0.1306549849295075) _gate_q_6;
  y _gate_q_17;
  ry(4.440795548498166) _gate_q_8;
  sdg _gate_q_9;
  rzx_5072712816(0.4417206318455075) _gate_q_2, _gate_q_3;
  r_5072708880(5.811029075677613, 2.558641058944004) _gate_q_0;
  U(0.4045949144450489, 5.365803371673084, 2.283416608544771) _gate_q_17;
  csdg _gate_q_14, _gate_q_4;
  rzz_5072699520(3.8767081467615276) _gate_q_7, _gate_q_16;
  r_5072702736(2.260311131416335, 2.389906532825208) _gate_q_5;
  ryy_5072709216(2.090739865060701) _gate_q_12, _gate_q_8;
  ry(3.262706688028109) _gate_q_10;
  swap _gate_q_18, _gate_q_6;
  sdg _gate_q_1;
  u2(2.3669399220113285, 4.028492021812184) _gate_q_15;
  r_5072714640(4.43072139156313, 1.1264238105693938) _gate_q_13;
  u2(0.5058636801016528, 1.472164565272945) _gate_q_11;
}
gate ryy_5072705136(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.35257999538179263) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5072704800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.762180144653178) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.622143515227765) _gate_q_0;
  ry(-2.622143515227765) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.762180144653178) _gate_q_1;
}
gate xx_minus_yy_5072707344(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.025161025267363) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5793199199979215) _gate_q_0;
  ry(-1.5793199199979215) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.025161025267363) _gate_q_1;
}
gate xx_plus_yy_5072706432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.06194738300681837) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.86110869768619) _gate_q_1;
  ry(-1.86110869768619) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.06194738300681837) _gate_q_0;
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
gate xx_minus_yy_5072714832(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.2992543337676015) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8791226894304568) _gate_q_0;
  ry(-0.8791226894304568) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.2992543337676015) _gate_q_1;
}
gate xx_minus_yy_5072711424(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.2055322073048362) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.040511628581437) _gate_q_0;
  ry(-2.040511628581437) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.2055322073048362) _gate_q_1;
}
gate rzx_5072703888(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.808306080718886) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072709168(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.6956164845912725, 1.263026244632384, -1.263026244632384) _gate_q_0;
}
gate rzx_5072702016(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.064338745892294) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072704656(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.694022445164896) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5072708352(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.9222522641789705) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5072715168(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.1407664190652027) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9143327574096203) _gate_q_0;
  ry(-1.9143327574096203) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.1407664190652027) _gate_q_1;
}
gate xx_minus_yy_5072714352(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.892390076904533) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5282409043368113) _gate_q_0;
  ry(-1.5282409043368113) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.892390076904533) _gate_q_1;
}
gate rxx_5072715696(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.037690122623895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5072707248(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2315950754316154) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5072714448(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.255001641980395) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072708304(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.200010959929696) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5072702784(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.746561190280223) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9344874701872601) _gate_q_1;
  ry(-0.9344874701872601) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.746561190280223) _gate_q_0;
}
gate rxx_5072710560(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.37907657115720605) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5072713056(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.034282469875978) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5072701680(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.179904745349387) _gate_q_0;
  u1(-2.1635814232609825) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.1942745234345753, 0, -2.179904745349387) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.1942745234345753, 4.34348616861037, 0) _gate_q_1;
}
gate r_5072700048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.0531996948447616, 3.885824089453906, -3.885824089453906) _gate_q_0;
}
gate cu3_5072714976(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.617553358288046) _gate_q_0;
  u1(0.02109151043037716) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.840594121324539, 0, -1.617553358288046) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.840594121324539, 1.5964618478576686, 0) _gate_q_1;
}
gate cu1_5072703984(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.990618901458191) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.990618901458191) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.990618901458191) _gate_q_1;
}
gate rzx_5072710992(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8421080638460444e-05) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5072705232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4969454803540971) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5072700240(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.801055746880359) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5072700624(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.8934399500892583, 0.1181319358200974, -0.1181319358200974) _gate_q_0;
}
gate rzz_5072711472(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.8723556032022726) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072710656(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.2582577099274412, -0.8732052724677142, 0.8732052724677142) _gate_q_0;
}
gate r_5072704752(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.069042107202632, 2.7803771318214627, -2.7803771318214627) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  cu(2.8946792044421605, 0.2074978730994038, 0.9526706628234451, 5.549258689683123) _gate_q_18, _gate_q_0;
  ry(4.16638741170274) _gate_q_15;
  ryy_5072705136(0.35257999538179263) _gate_q_16, _gate_q_6;
  xx_minus_yy_5072704800(5.24428703045553, 4.762180144653178) _gate_q_9, _gate_q_1;
  tdg _gate_q_3;
  xx_minus_yy_5072707344(3.158639839995843, 6.025161025267363) _gate_q_2, _gate_q_4;
  id _gate_q_10;
  xx_plus_yy_5072706432(3.72221739537238, 0.06194738300681837) _gate_q_14, _gate_q_12;
  swap _gate_q_17, _gate_q_7;
  p(6.052651753624452) _gate_q_11;
  csx _gate_q_5, _gate_q_13;
  id _gate_q_8;
  tdg _gate_q_18;
  t _gate_q_11;
  xx_minus_yy_5072714832(1.7582453788609136, 5.2992543337676015) _gate_q_15, _gate_q_0;
  xx_minus_yy_5072711424(4.081023257162874, 3.2055322073048362) _gate_q_1, _gate_q_2;
  x _gate_q_17;
  cy _gate_q_7, _gate_q_4;
  crx(3.361901339382739) _gate_q_13, _gate_q_5;
  y _gate_q_16;
  tdg _gate_q_6;
  sxdg _gate_q_14;
  cry(2.669486490751629) _gate_q_9, _gate_q_3;
  u2(0.3765214369090021, 3.4597054101798705) _gate_q_10;
  cz _gate_q_8, _gate_q_12;
  sxdg _gate_q_7;
  rzx_5072703888(4.808306080718886) _gate_q_11, _gate_q_10;
  t _gate_q_0;
  ch _gate_q_8, _gate_q_15;
  t _gate_q_14;
  u2(4.084992564293853, 1.279035364986497) _gate_q_9;
  rx(0.47776661372655105) _gate_q_1;
  r_5072709168(0.6956164845912725, 2.8338225714272807) _gate_q_13;
  z _gate_q_18;
  z _gate_q_17;
  rzx_5072702016(1.064338745892294) _gate_q_12, _gate_q_2;
  u2(1.3408258521349756, 3.6731383899396257) _gate_q_3;
  id _gate_q_5;
  cz _gate_q_6, _gate_q_16;
  s _gate_q_4;
  sx _gate_q_7;
  crz(2.4040429984365606) _gate_q_4, _gate_q_16;
  u2(4.938313102208987, 1.1797243699446494) _gate_q_13;
  dcx _gate_q_9, _gate_q_0;
  rzz_5072704656(4.694022445164896) _gate_q_2, _gate_q_14;
  U(3.4940892611208523, 1.0287163814795766, 3.826911319379367) _gate_q_11;
  cu(1.6987471464610235, 4.382624935717561, 4.80178699286416, 4.094897679538163) _gate_q_1, _gate_q_6;
  rxx_5072708352(4.9222522641789705) _gate_q_8, _gate_q_3;
  crz(3.915808147121343) _gate_q_17, _gate_q_12;
  id _gate_q_18;
  iswap _gate_q_5, _gate_q_10;
  id _gate_q_15;
  h _gate_q_4;
  xx_minus_yy_5072715168(3.8286655148192406, 1.1407664190652027) _gate_q_13, _gate_q_9;
  ch _gate_q_0, _gate_q_15;
  xx_minus_yy_5072714352(3.0564818086736225, 5.892390076904533) _gate_q_7, _gate_q_14;
  ry(2.025886160229383) _gate_q_2;
  rxx_5072715696(3.037690122623895) _gate_q_3, _gate_q_1;
  crz(3.8497461156878807) _gate_q_16, _gate_q_17;
  t _gate_q_6;
  crx(4.1035629588223275) _gate_q_12, _gate_q_10;
  sxdg _gate_q_11;
  cz _gate_q_5, _gate_q_8;
  u3(0.09168828981720055, 1.50677742897438, 5.973932835423166) _gate_q_18;
  rxx_5072707248(1.2315950754316154) _gate_q_11, _gate_q_0;
  ryy_5072714448(4.255001641980395) _gate_q_2, _gate_q_14;
  csdg _gate_q_3, _gate_q_7;
  ryy_5072708304(4.200010959929696) _gate_q_18, _gate_q_15;
  xx_plus_yy_5072702784(1.8689749403745202, 4.746561190280223) _gate_q_5, _gate_q_17;
  ry(6.26145419885678) _gate_q_9;
  t _gate_q_4;
  cu(5.463480788481087, 3.4277955368902133, 3.3334421835487076, 5.236481141782656) _gate_q_12, _gate_q_16;
  crz(1.881574484693731) _gate_q_6, _gate_q_8;
  z _gate_q_13;
  ry(3.8842149323792765) _gate_q_10;
  z _gate_q_1;
  rxx_5072710560(0.37907657115720605) _gate_q_0, _gate_q_5;
  ryy_5072713056(6.034282469875978) _gate_q_18, _gate_q_17;
  ry(2.832297062292218) _gate_q_2;
  u2(4.1096645539875825, 6.01115971101076) _gate_q_9;
  y _gate_q_15;
  t _gate_q_16;
  dcx _gate_q_7, _gate_q_6;
  cu3_5072701680(4.388549046869151, 4.34348616861037, 0.01632332208840451) _gate_q_13, _gate_q_4;
  z _gate_q_1;
  tdg _gate_q_11;
  r_5072700048(0.0531996948447616, 5.456620416248803) _gate_q_3;
  dcx _gate_q_12, _gate_q_8;
  sx _gate_q_14;
  rx(6.159886333114172) _gate_q_10;
  dcx _gate_q_7, _gate_q_10;
  cu3_5072714976(5.681188242649078, 1.5964618478576686, 1.638644868718423) _gate_q_0, _gate_q_15;
  csx _gate_q_8, _gate_q_6;
  cu(2.5853503476996273, 5.069878567640483, 2.4685181544427683, 5.854887215996898) _gate_q_4, _gate_q_11;
  cu1_5072703984(3.981237802916382) _gate_q_13, _gate_q_3;
  rzx_5072710992(3.8421080638460444e-05) _gate_q_18, _gate_q_17;
  iswap _gate_q_12, _gate_q_2;
  y _gate_q_16;
  sx _gate_q_9;
  crz(0.3029900975693032) _gate_q_5, _gate_q_14;
  tdg _gate_q_1;
  u1(4.917874627280219) _gate_q_14;
  ecr _gate_q_9, _gate_q_18;
  cx _gate_q_16, _gate_q_11;
  rzx_5072705232(1.4969454803540971) _gate_q_1, _gate_q_3;
  id _gate_q_17;
  ryy_5072700240(4.801055746880359) _gate_q_10, _gate_q_15;
  s _gate_q_8;
  sx _gate_q_12;
  t _gate_q_13;
  cx _gate_q_7, _gate_q_5;
  crz(3.0682402106123194) _gate_q_4, _gate_q_6;
  rx(5.984881568618309) _gate_q_2;
  r_5072700624(1.8934399500892583, 1.688928262614994) _gate_q_0;
  u2(4.74194966114994, 4.680735057949035) _gate_q_0;
  sx _gate_q_1;
  crx(1.2922049190627567) _gate_q_9, _gate_q_11;
  rzz_5072711472(1.8723556032022726) _gate_q_15, _gate_q_14;
  swap _gate_q_18, _gate_q_6;
  crz(2.3166973676741796) _gate_q_7, _gate_q_4;
  s _gate_q_8;
  crz(1.7437995993679005) _gate_q_5, _gate_q_3;
  u2(2.8475653360868596, 5.272875069811032) _gate_q_17;
  r_5072710656(3.2582577099274412, 0.6975910543271824) _gate_q_16;
  r_5072704752(1.069042107202632, 4.351173458616359) _gate_q_13;
  swap _gate_q_10, _gate_q_12;
  t _gate_q_2;
}