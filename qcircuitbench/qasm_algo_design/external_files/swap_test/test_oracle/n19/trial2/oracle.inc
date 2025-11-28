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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5107325008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.7936199769648495) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9023003503134673) _gate_q_0;
  ry(-0.9023003503134673) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.7936199769648495) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5107334752(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0713995129501095) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5107331296(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.8998069091114342) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5512279440598098) _gate_q_0;
  ry(-1.5512279440598098) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.8998069091114342) _gate_q_1;
}
gate rzz_5107322800(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.5234856037473175) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5107325392(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.229152866073412) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5107331104(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6241966762731641) _gate_q_1;
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
gate cu1_5107333408(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.0518390940817364) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.0518390940817364) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.0518390940817364) _gate_q_1;
}
gate rzx_5107321120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7716335114709209) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107334368(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.9968899891142216) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5107320400(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.323847071747417) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5107322848(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.9475728563211482) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5107331440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.724783689929491) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5107328464(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.8981254076395064) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7083982346998073) _gate_q_1;
  ry(-0.7083982346998073) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.8981254076395064) _gate_q_0;
}
gate xx_plus_yy_5107329760(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.224255937928072) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.451508489411359) _gate_q_1;
  ry(-2.451508489411359) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.224255937928072) _gate_q_0;
}
gate cu3_5107329664(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.92362027092686) _gate_q_0;
  u1(-1.4045421152958388) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8029685679190575, 0, -2.92362027092686) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8029685679190575, 4.328162386222699, 0) _gate_q_1;
}
gate xx_plus_yy_5107334944(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.4686263161417914) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.6831138456267816) _gate_q_1;
  ry(-2.6831138456267816) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.4686263161417914) _gate_q_0;
}
gate ryy_5107322656(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.34789695483926) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5107329520(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.1550677391249715) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.544256833702731) _gate_q_0;
  ry(-1.544256833702731) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.1550677391249715) _gate_q_1;
}
gate xx_plus_yy_5107325680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.13275819217058948) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.069190998421747) _gate_q_1;
  ry(-0.069190998421747) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.13275819217058948) _gate_q_0;
}
gate ryy_5107320496(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.060824688883314) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  cy _gate_q_9, _gate_q_4;
  u2(2.424974804020606, 3.747886128867773) _gate_q_18;
  ry(3.492689620262982) _gate_q_10;
  ecr _gate_q_6, _gate_q_11;
  cs _gate_q_7, _gate_q_1;
  u1(2.3471524669281334) _gate_q_0;
  x _gate_q_5;
  iswap _gate_q_15, _gate_q_12;
  cu(4.989384770546176, 2.4451135609058854, 0.9110511534193358, 0.5969023096833551) _gate_q_13, _gate_q_8;
  p(4.704397651590253) _gate_q_3;
  u1(2.239012039375185) _gate_q_2;
  xx_minus_yy_5107325008(1.8046007006269347, 2.7936199769648495) _gate_q_14, _gate_q_16;
  p(1.0025122175502577) _gate_q_17;
  dcx _gate_q_3, _gate_q_0;
  x _gate_q_15;
  ryy_5107334752(2.0713995129501095) _gate_q_1, _gate_q_2;
  cs _gate_q_17, _gate_q_10;
  sdg _gate_q_13;
  t _gate_q_16;
  cy _gate_q_7, _gate_q_4;
  x _gate_q_6;
  id _gate_q_14;
  x _gate_q_12;
  cz _gate_q_18, _gate_q_5;
  xx_minus_yy_5107331296(3.1024558881196196, 1.8998069091114342) _gate_q_9, _gate_q_8;
  rz(5.19188598457078) _gate_q_11;
  u1(2.8877194953878194) _gate_q_12;
  rzz_5107322800(2.5234856037473175) _gate_q_2, _gate_q_9;
  ch _gate_q_14, _gate_q_7;
  csdg _gate_q_17, _gate_q_3;
  sxdg _gate_q_15;
  cz _gate_q_13, _gate_q_16;
  u1(0.714471887088998) _gate_q_0;
  sx _gate_q_1;
  dcx _gate_q_6, _gate_q_11;
  t _gate_q_18;
  u1(0.3574246403158117) _gate_q_8;
  h _gate_q_10;
  z _gate_q_4;
  p(1.7894156088088118) _gate_q_5;
  rzz_5107325392(2.229152866073412) _gate_q_9, _gate_q_7;
  cu(1.015095941024129, 1.3577856924262919, 4.773849019441887, 1.9534068085783804) _gate_q_13, _gate_q_3;
  rzz_5107331104(0.6241966762731641) _gate_q_18, _gate_q_6;
  crz(4.512685909142496) _gate_q_2, _gate_q_11;
  h _gate_q_4;
  ecr _gate_q_8, _gate_q_14;
  cy _gate_q_16, _gate_q_0;
  csx _gate_q_12, _gate_q_17;
  cx _gate_q_15, _gate_q_10;
  ch _gate_q_1, _gate_q_5;
  ch _gate_q_7, _gate_q_5;
  cu1_5107333408(6.103678188163473) _gate_q_8, _gate_q_0;
  ch _gate_q_15, _gate_q_17;
  rzx_5107321120(0.7716335114709209) _gate_q_10, _gate_q_12;
  csdg _gate_q_2, _gate_q_6;
  id _gate_q_18;
  crz(1.0697379024360916) _gate_q_4, _gate_q_3;
  rzx_5107334368(3.9968899891142216) _gate_q_16, _gate_q_13;
  p(1.1302553586418345) _gate_q_1;
  cu(3.481021589322776, 0.13103306100037249, 2.5007883462710714, 3.086365887087184) _gate_q_9, _gate_q_11;
  sx _gate_q_14;
  sxdg _gate_q_4;
  s _gate_q_5;
  t _gate_q_3;
  t _gate_q_0;
  ryy_5107320400(4.323847071747417) _gate_q_2, _gate_q_14;
  rzz_5107322848(0.9475728563211482) _gate_q_8, _gate_q_12;
  u3(2.6726883694173504, 2.8417127344073627, 2.353720159536761) _gate_q_11;
  u2(2.5374648930706445, 3.4268939241836907) _gate_q_6;
  u1(0.7608130543967433) _gate_q_16;
  cx _gate_q_13, _gate_q_18;
  s _gate_q_9;
  cx _gate_q_7, _gate_q_10;
  x _gate_q_1;
  crx(4.409482250924834) _gate_q_17, _gate_q_15;
  cry(3.67371878790334) _gate_q_16, _gate_q_5;
  cp(5.39457710893937) _gate_q_9, _gate_q_0;
  rzx_5107331440(5.724783689929491) _gate_q_12, _gate_q_14;
  crx(5.431539715889182) _gate_q_11, _gate_q_3;
  rx(1.3488556018452327) _gate_q_10;
  cx _gate_q_4, _gate_q_1;
  s _gate_q_6;
  xx_plus_yy_5107328464(1.4167964693996147, 2.8981254076395064) _gate_q_7, _gate_q_17;
  cs _gate_q_2, _gate_q_18;
  x _gate_q_13;
  cu(0.6772404833628095, 5.756618973305639, 4.111124253871837, 2.0670597225474445) _gate_q_8, _gate_q_15;
  rz(1.5968971056522856) _gate_q_14;
  xx_plus_yy_5107329760(4.903016978822718, 3.224255937928072) _gate_q_6, _gate_q_3;
  ry(3.1800318918515718) _gate_q_8;
  tdg _gate_q_17;
  cu3_5107329664(3.605937135838115, 4.328162386222699, 1.519078155631021) _gate_q_7, _gate_q_12;
  t _gate_q_5;
  sxdg _gate_q_11;
  cx _gate_q_9, _gate_q_16;
  xx_plus_yy_5107334944(5.366227691253563, 3.4686263161417914) _gate_q_1, _gate_q_13;
  h _gate_q_15;
  ryy_5107322656(4.34789695483926) _gate_q_18, _gate_q_2;
  csdg _gate_q_0, _gate_q_4;
  rx(3.437035281047754) _gate_q_10;
  cy _gate_q_3, _gate_q_10;
  sx _gate_q_2;
  tdg _gate_q_6;
  swap _gate_q_0, _gate_q_16;
  sdg _gate_q_12;
  cy _gate_q_17, _gate_q_11;
  y _gate_q_1;
  t _gate_q_5;
  cp(1.1524281888963075) _gate_q_7, _gate_q_13;
  ecr _gate_q_9, _gate_q_15;
  sx _gate_q_8;
  t _gate_q_18;
  sxdg _gate_q_4;
  t _gate_q_14;
  id _gate_q_8;
  xx_minus_yy_5107329520(3.088513667405462, 1.1550677391249715) _gate_q_13, _gate_q_14;
  rx(4.936714687797417) _gate_q_6;
  rx(2.7503591649832937) _gate_q_15;
  sxdg _gate_q_18;
  cy _gate_q_3, _gate_q_5;
  xx_plus_yy_5107325680(0.138381996843494, 0.13275819217058948) _gate_q_12, _gate_q_9;
  id _gate_q_2;
  t _gate_q_16;
  crx(0.48150077587331186) _gate_q_7, _gate_q_17;
  ryy_5107320496(6.060824688883314) _gate_q_11, _gate_q_1;
  sdg _gate_q_0;
  tdg _gate_q_4;
  u1(2.4911255229112097) _gate_q_10;
}
gate xx_minus_yy_5107443680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.73277337543858) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6827527595736118) _gate_q_0;
  ry(-0.6827527595736118) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.73277337543858) _gate_q_1;
}
gate cu1_5107440176(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.4808167887895119) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.4808167887895119) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.4808167887895119) _gate_q_1;
}
gate rxx_5107440800(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.40485105162037344) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5107441856(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.2243618863713106) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.2243618863713106) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.2243618863713106) _gate_q_1;
}
gate xx_plus_yy_5107443056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.300422859839863) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7828566106030783) _gate_q_1;
  ry(-1.7828566106030783) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.300422859839863) _gate_q_0;
}
gate r_5107435328(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.8796606437623602, 3.945042687592659, -3.945042687592659) _gate_q_0;
}
gate rzx_5107445792(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.685585697236155) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5107436480(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.0277234590116633) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.0277234590116633) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.0277234590116633) _gate_q_1;
}
gate rzz_5107443920(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.97573644987899) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5107438064(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.890501344716716) _gate_q_0;
  u1(-1.0689321239627874) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.068287637820832, 0, -4.890501344716716) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.068287637820832, 5.959433468679504, 0) _gate_q_1;
}
gate r_5107440992(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.969537261138274, 4.626590782646122, -4.626590782646122) _gate_q_0;
}
gate rzz_5107442000(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.8614960553200317) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5107447712(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.23280206653388444) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5107437008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.2224986246697704) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.4467195128821499) _gate_q_1;
  ry(-0.4467195128821499) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.2224986246697704) _gate_q_0;
}
gate rzz_5107447040(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.210343550902641) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5107442096(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.0180559723892664, 3.753602190756146, -3.753602190756146) _gate_q_0;
}
gate cu1_5107434560(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5643347729208765) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5643347729208765) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5643347729208765) _gate_q_1;
}
gate cu1_5107437056(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.878828582863272) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.878828582863272) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.878828582863272) _gate_q_1;
}
gate rzx_5107440896(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.902587509044161) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5107448528(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.263668321611538, -0.2720584826001855, 0.2720584826001855) _gate_q_0;
}
gate cu3_5107447952(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.7684838281465642) _gate_q_0;
  u1(1.5453354778260022) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9098715312410508, 0, -1.7684838281465642) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9098715312410508, 0.2231483503205622, 0) _gate_q_1;
}
gate rxx_5107443104(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2866773428505742) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5107449776(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.265354218155777) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.265354218155777) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.265354218155777) _gate_q_1;
}
gate cu1_5107442960(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.291520709142133) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.291520709142133) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.291520709142133) _gate_q_1;
}
gate ryy_5107437632(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.081455977626284) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5107445360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.432036852970048) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5107449536(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.5445546209036933) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5107437728(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.913836691377304) _gate_q_0;
  u1(-0.37443139733293274) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.9949112754842564, 0, -4.913836691377304) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.9949112754842564, 5.288268088710237, 0) _gate_q_1;
}
gate xx_plus_yy_5107439792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.3957679811123445) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9784808180787374) _gate_q_1;
  ry(-0.9784808180787374) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.3957679811123445) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  xx_minus_yy_5107443680(1.3655055191472236, 5.73277337543858) _gate_q_15, _gate_q_5;
  dcx _gate_q_16, _gate_q_6;
  iswap _gate_q_2, _gate_q_18;
  cy _gate_q_17, _gate_q_11;
  p(1.722072839163912) _gate_q_8;
  u1(5.14413382311219) _gate_q_9;
  ecr _gate_q_7, _gate_q_14;
  sdg _gate_q_12;
  cx _gate_q_3, _gate_q_13;
  h _gate_q_4;
  sdg _gate_q_1;
  crx(4.14716435240397) _gate_q_10, _gate_q_0;
  cu1_5107440176(0.9616335775790238) _gate_q_0, _gate_q_7;
  rxx_5107440800(0.40485105162037344) _gate_q_3, _gate_q_17;
  u3(5.353307479916699, 1.9605788477799015, 1.4127910149820129) _gate_q_11;
  cp(3.464116162916451) _gate_q_18, _gate_q_12;
  sxdg _gate_q_1;
  cu1_5107441856(4.448723772742621) _gate_q_15, _gate_q_4;
  cx _gate_q_10, _gate_q_2;
  tdg _gate_q_13;
  ry(5.906550124396179) _gate_q_6;
  U(3.950607521211453, 0.4943842528261906, 0.29055976744619705) _gate_q_14;
  cx _gate_q_16, _gate_q_9;
  u1(3.980479724559081) _gate_q_8;
  h _gate_q_5;
  xx_plus_yy_5107443056(3.5657132212061566, 5.300422859839863) _gate_q_14, _gate_q_8;
  x _gate_q_12;
  tdg _gate_q_7;
  rz(2.379799510441206) _gate_q_4;
  U(5.621687746625497, 3.834964461179042, 2.292413956398776) _gate_q_10;
  id _gate_q_11;
  r_5107435328(1.8796606437623602, 5.515839014387556) _gate_q_2;
  rzx_5107445792(4.685585697236155) _gate_q_6, _gate_q_1;
  t _gate_q_16;
  s _gate_q_18;
  id _gate_q_13;
  z _gate_q_17;
  csx _gate_q_3, _gate_q_5;
  swap _gate_q_15, _gate_q_9;
  sxdg _gate_q_0;
  ry(3.8639723304598688) _gate_q_1;
  cu1_5107436480(4.055446918023327) _gate_q_4, _gate_q_0;
  s _gate_q_16;
  x _gate_q_11;
  cz _gate_q_13, _gate_q_8;
  rzz_5107443920(2.97573644987899) _gate_q_7, _gate_q_6;
  sx _gate_q_17;
  sx _gate_q_9;
  cs _gate_q_2, _gate_q_18;
  cu3_5107438064(4.136575275641664, 5.959433468679504, 3.821569220753929) _gate_q_15, _gate_q_12;
  rz(0.4174523096860802) _gate_q_3;
  x _gate_q_10;
  cry(3.3593400801093645) _gate_q_5, _gate_q_14;
  r_5107440992(2.969537261138274, 6.197387109441019) _gate_q_6;
  rzz_5107442000(0.8614960553200317) _gate_q_3, _gate_q_1;
  ryy_5107447712(0.23280206653388444) _gate_q_10, _gate_q_12;
  s _gate_q_7;
  tdg _gate_q_9;
  rz(4.140673324622101) _gate_q_0;
  sxdg _gate_q_13;
  csx _gate_q_18, _gate_q_4;
  U(2.0586411330432464, 0.5189852888166935, 4.981804703818618) _gate_q_2;
  ecr _gate_q_16, _gate_q_5;
  t _gate_q_15;
  csx _gate_q_14, _gate_q_8;
  sxdg _gate_q_17;
  h _gate_q_11;
  xx_plus_yy_5107437008(0.8934390257642998, 2.2224986246697704) _gate_q_6, _gate_q_9;
  p(5.276489959203593) _gate_q_15;
  rx(2.2776018746521194) _gate_q_13;
  ry(2.3436346901691567) _gate_q_5;
  cz _gate_q_17, _gate_q_16;
  rz(3.1291423612405143) _gate_q_0;
  y _gate_q_1;
  s _gate_q_3;
  ecr _gate_q_2, _gate_q_12;
  cy _gate_q_10, _gate_q_11;
  rzz_5107447040(4.210343550902641) _gate_q_18, _gate_q_14;
  cx _gate_q_7, _gate_q_8;
  r_5107442096(1.0180559723892664, 5.324398517551042) _gate_q_4;
  cz _gate_q_0, _gate_q_2;
  cu1_5107434560(1.128669545841753) _gate_q_5, _gate_q_15;
  cu1_5107437056(5.757657165726544) _gate_q_16, _gate_q_3;
  csdg _gate_q_6, _gate_q_11;
  z _gate_q_7;
  rzx_5107440896(4.902587509044161) _gate_q_13, _gate_q_9;
  r_5107448528(2.263668321611538, 1.298737844194711) _gate_q_10;
  cz _gate_q_12, _gate_q_1;
  U(4.9846371903893, 5.892608567246112, 3.4550087744112807) _gate_q_14;
  dcx _gate_q_17, _gate_q_18;
  id _gate_q_4;
  U(0.911311244656293, 4.354930054560827, 3.69871293958781) _gate_q_8;
  u3(0.1715687163217955, 0.0028417040577239467, 3.035122669336289) _gate_q_3;
  csx _gate_q_1, _gate_q_5;
  cu3_5107447952(3.8197430624821016, 0.2231483503205622, 3.3138193059725665) _gate_q_0, _gate_q_17;
  crz(5.518048275978475) _gate_q_15, _gate_q_2;
  x _gate_q_13;
  cry(1.0197376539901675) _gate_q_16, _gate_q_4;
  rxx_5107443104(2.2866773428505742) _gate_q_9, _gate_q_10;
  cu1_5107449776(2.530708436311554) _gate_q_7, _gate_q_14;
  ry(0.2747017287277373) _gate_q_6;
  y _gate_q_18;
  cu1_5107442960(2.583041418284266) _gate_q_8, _gate_q_11;
  u3(2.6622788795194525, 1.1316474996591994, 5.172330117801156) _gate_q_12;
  s _gate_q_8;
  tdg _gate_q_12;
  cry(4.910206762041497) _gate_q_5, _gate_q_15;
  h _gate_q_10;
  x _gate_q_6;
  z _gate_q_17;
  crz(5.779737982323905) _gate_q_7, _gate_q_1;
  ryy_5107437632(5.081455977626284) _gate_q_11, _gate_q_18;
  sxdg _gate_q_0;
  rx(2.8909885923658805) _gate_q_4;
  z _gate_q_2;
  crx(4.5636288177191195) _gate_q_16, _gate_q_13;
  u2(2.276290352075443, 5.356122435684893) _gate_q_14;
  rz(0.34442574839824547) _gate_q_9;
  t _gate_q_3;
  swap _gate_q_18, _gate_q_8;
  cs _gate_q_7, _gate_q_12;
  u1(4.98063875359341) _gate_q_13;
  rzx_5107445360(2.432036852970048) _gate_q_16, _gate_q_9;
  x _gate_q_11;
  rzz_5107449536(1.5445546209036933) _gate_q_3, _gate_q_14;
  ch _gate_q_4, _gate_q_2;
  t _gate_q_0;
  rz(2.7095089263379113) _gate_q_15;
  cu3_5107437728(5.989822550968513, 5.288268088710237, 4.539405294044371) _gate_q_5, _gate_q_6;
  xx_plus_yy_5107439792(1.9569616361574749, 4.3957679811123445) _gate_q_10, _gate_q_1;
  rx(3.942575017165798) _gate_q_17;
}