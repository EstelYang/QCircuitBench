gate ryy_5107331008(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3949485004644782) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5107330960(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9048832088652714) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9048832088652714) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9048832088652714) _gate_q_1;
}
gate rzz_5107331200(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.339513959185407) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5107330240(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.967256525633944) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate ryy_5107331968(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.829467102687816) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate cu1_5107331584(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.7244835574799473) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.7244835574799473) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.7244835574799473) _gate_q_1;
}
gate xx_minus_yy_5107331680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.3712427250075299) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.731958816569443) _gate_q_0;
  ry(-0.731958816569443) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.3712427250075299) _gate_q_1;
}
gate xx_minus_yy_5107331440(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.700093647623843) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2763858040050948) _gate_q_0;
  ry(-1.2763858040050948) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.700093647623843) _gate_q_1;
}
gate cu3_5107331296(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.337019142181708) _gate_q_0;
  u1(-0.9737829851667446) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8324153571720778, 0, -4.337019142181708) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8324153571720778, 5.3108021273484525, 0) _gate_q_1;
}
gate xx_plus_yy_5107332544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.5952565739483506) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6006850719225559) _gate_q_1;
  ry(-0.6006850719225559) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.5952565739483506) _gate_q_0;
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
gate rxx_5107333360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4666950957608949) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  ryy_5107331008(1.3949485004644782) _gate_q_4, _gate_q_8;
  z _gate_q_7;
  s _gate_q_3;
  iswap _gate_q_1, _gate_q_0;
  y _gate_q_6;
  rx(0.5875485039291689) _gate_q_5;
  cu1_5107330960(1.8097664177305428) _gate_q_2, _gate_q_9;
  rzz_5107331200(5.339513959185407) _gate_q_5, _gate_q_1;
  u1(0.9851213367335971) _gate_q_0;
  rxx_5107330240(3.967256525633944) _gate_q_6, _gate_q_9;
  cp(1.0168466670462952) _gate_q_2, _gate_q_8;
  swap _gate_q_4, _gate_q_7;
  sxdg _gate_q_3;
  ryy_5107331968(3.829467102687816) _gate_q_9, _gate_q_1;
  csx _gate_q_8, _gate_q_7;
  cy _gate_q_0, _gate_q_3;
  rx(2.8100075864430267) _gate_q_6;
  cu1_5107331584(5.448967114959895) _gate_q_4, _gate_q_2;
  rx(6.146060552127997) _gate_q_5;
  cx _gate_q_0, _gate_q_3;
  u3(1.4667140775147811, 0.5480393190057351, 5.093922320371008) _gate_q_2;
  iswap _gate_q_9, _gate_q_5;
  sx _gate_q_8;
  u1(0.34270436682577327) _gate_q_6;
  u3(1.9462042368185601, 4.526097007992858, 1.4177843527819614) _gate_q_1;
  cz _gate_q_4, _gate_q_7;
  xx_minus_yy_5107331680(1.463917633138886, 1.3712427250075299) _gate_q_4, _gate_q_9;
  crz(0.565108703391844) _gate_q_7, _gate_q_3;
  ry(1.6099497052728664) _gate_q_1;
  u2(3.4041188438121996, 2.0250738243495965) _gate_q_6;
  xx_minus_yy_5107331440(2.5527716080101897, 5.700093647623843) _gate_q_0, _gate_q_2;
  id _gate_q_5;
  id _gate_q_8;
  U(3.01678004879429, 0.25671934009071157, 5.96349841516641) _gate_q_9;
  z _gate_q_0;
  cu3_5107331296(1.6648307143441556, 5.3108021273484525, 3.3632361570149634) _gate_q_7, _gate_q_1;
  z _gate_q_6;
  y _gate_q_2;
  rx(3.55849131279875) _gate_q_5;
  ry(3.746075529621575) _gate_q_3;
  s _gate_q_4;
  tdg _gate_q_8;
  csx _gate_q_5, _gate_q_1;
  cp(3.646334687517126) _gate_q_7, _gate_q_8;
  crz(4.430685193793246) _gate_q_4, _gate_q_0;
  swap _gate_q_3, _gate_q_2;
  csx _gate_q_6, _gate_q_9;
  ch _gate_q_1, _gate_q_5;
  sx _gate_q_6;
  sx _gate_q_3;
  cp(6.036874107929966) _gate_q_9, _gate_q_4;
  id _gate_q_2;
  t _gate_q_7;
  sdg _gate_q_8;
  y _gate_q_0;
  cu(3.2258903170420328, 3.259469914860858, 2.5007777066559385, 3.464043840928388) _gate_q_9, _gate_q_7;
  ry(2.2002542912319822) _gate_q_2;
  xx_plus_yy_5107332544(1.2013701438451119, 3.5952565739483506) _gate_q_6, _gate_q_8;
  swap _gate_q_4, _gate_q_5;
  crx(3.8480341921836985) _gate_q_0, _gate_q_1;
  ry(1.006091274640976) _gate_q_3;
  ecr _gate_q_9, _gate_q_0;
  cp(3.32860730044242) _gate_q_4, _gate_q_2;
  ry(1.4795017302380653) _gate_q_5;
  rxx_5107333360(1.4666950957608949) _gate_q_7, _gate_q_1;
  rx(0.9195376639578668) _gate_q_3;
  rx(5.7487952987580035) _gate_q_8;
  p(2.806057221876469) _gate_q_6;
}
gate rzx_5106996128(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.186426304915346) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5107449776(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.440508238226243) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5107433984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.760349519004781) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5107434032(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.170894492461347) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5107433936(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.322406012902107) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5107434128(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.880742093846567) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.880742093846567) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.880742093846567) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu1_5107434080(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.2517820141900882) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.2517820141900882) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.2517820141900882) _gate_q_1;
}
gate xx_plus_yy_5107434512(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.40536895102416703) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8243428234019914) _gate_q_1;
  ry(-0.8243428234019914) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.40536895102416703) _gate_q_0;
}
gate rzx_5107434752(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.783729337134193) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107434656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5685238094908334) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107434464(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.156719700579901) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5107330864(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.3476300999770827) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  rzx_5106996128(2.186426304915346) _gate_q_8, _gate_q_7;
  sx _gate_q_1;
  x _gate_q_2;
  rzz_5107449776(4.440508238226243) _gate_q_9, _gate_q_0;
  tdg _gate_q_4;
  sxdg _gate_q_6;
  h _gate_q_3;
  p(2.2801146338473024) _gate_q_5;
  sx _gate_q_2;
  t _gate_q_0;
  cz _gate_q_6, _gate_q_3;
  cry(5.532032299194208) _gate_q_1, _gate_q_4;
  sx _gate_q_7;
  x _gate_q_5;
  x _gate_q_8;
  U(1.4161410574696212, 1.1441682907862714, 2.174641659392662) _gate_q_9;
  iswap _gate_q_8, _gate_q_1;
  u1(5.373306913073962) _gate_q_7;
  cry(4.5297429767500885) _gate_q_0, _gate_q_3;
  swap _gate_q_6, _gate_q_5;
  swap _gate_q_4, _gate_q_2;
  z _gate_q_9;
  h _gate_q_5;
  id _gate_q_0;
  t _gate_q_4;
  ry(0.3309051138357877) _gate_q_2;
  ch _gate_q_1, _gate_q_3;
  rx(3.7192283158476167) _gate_q_6;
  rxx_5107433984(4.760349519004781) _gate_q_9, _gate_q_8;
  y _gate_q_7;
  t _gate_q_3;
  t _gate_q_9;
  csx _gate_q_6, _gate_q_0;
  sxdg _gate_q_1;
  y _gate_q_5;
  ryy_5107434032(3.170894492461347) _gate_q_4, _gate_q_7;
  rxx_5107433936(4.322406012902107) _gate_q_2, _gate_q_8;
  csx _gate_q_0, _gate_q_8;
  cu1_5107434128(5.761484187693134) _gate_q_7, _gate_q_3;
  s _gate_q_1;
  swap _gate_q_5, _gate_q_4;
  cz _gate_q_6, _gate_q_9;
  sdg _gate_q_2;
  z _gate_q_0;
  csdg _gate_q_8, _gate_q_4;
  u2(3.916138158092092, 4.750841385800044) _gate_q_7;
  csx _gate_q_6, _gate_q_5;
  p(0.5566399917922117) _gate_q_1;
  cu1_5107434080(0.5035640283801764) _gate_q_3, _gate_q_2;
  sx _gate_q_9;
  tdg _gate_q_5;
  u2(4.349614731213457, 2.6720196723561735) _gate_q_8;
  p(4.254243529148464) _gate_q_2;
  xx_plus_yy_5107434512(1.6486856468039828, 0.40536895102416703) _gate_q_4, _gate_q_9;
  sx _gate_q_6;
  y _gate_q_1;
  rzx_5107434752(3.783729337134193) _gate_q_7, _gate_q_0;
  u3(4.920624504679355, 4.432234544463357, 4.02365141486955) _gate_q_3;
  x _gate_q_6;
  rzx_5107434656(3.5685238094908334) _gate_q_4, _gate_q_2;
  rzx_5107434464(6.156719700579901) _gate_q_0, _gate_q_5;
  s _gate_q_3;
  cp(3.005084752995847) _gate_q_7, _gate_q_8;
  rx(1.8526523344098305) _gate_q_9;
  U(3.3155134195154994, 2.0211725406262846, 2.144608012619293) _gate_q_1;
  rz(5.9945753482066415) _gate_q_2;
  sxdg _gate_q_9;
  s _gate_q_1;
  sx _gate_q_7;
  crz(5.550172611820839) _gate_q_8, _gate_q_3;
  rzz_5107330864(2.3476300999770827) _gate_q_5, _gate_q_0;
  cy _gate_q_6, _gate_q_4;
}