gate rxx_5073915536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.70678879044582) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5073915776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.796260705842007) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.05124220837317) _gate_q_1;
  ry(-3.05124220837317) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.796260705842007) _gate_q_0;
}
gate cu1_5073915872(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.2826134560960627) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.2826134560960627) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.2826134560960627) _gate_q_1;
}
gate ryy_5073915968(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.759992065624772) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5073916112(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.7387567626926814) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.7387567626926814) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.7387567626926814) _gate_q_1;
}
gate ryy_5073915920(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.405258200566951) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5073916496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2302388354552092) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
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
gate xx_minus_yy_5073916832(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.3402667451538084) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.767237033287146) _gate_q_0;
  ry(-2.767237033287146) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.3402667451538084) _gate_q_1;
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
gate r_5073917072(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.542053586741075, 4.433240659173643, -4.433240659173643) _gate_q_0;
}
gate cu3_5073917312(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.419024689280381) _gate_q_0;
  u1(-1.202982387575232) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.451448123229657, 0, -1.419024689280381) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.451448123229657, 2.622007076855613, 0) _gate_q_1;
}
gate xx_minus_yy_5073917216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.7410200874787383) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3104785564601107) _gate_q_0;
  ry(-1.3104785564601107) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.7410200874787383) _gate_q_1;
}
gate rzx_5073917024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0547192879304843) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5073917360(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.508739033092071) _gate_q_0;
  u1(-1.6822539780041514) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0711904494417384, 0, -4.508739033092071) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0711904494417384, 6.190993011096222, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  u2(2.288840957473681, 4.797466254466203) _gate_q_1;
  u1(6.147823480875292) _gate_q_7;
  z _gate_q_3;
  rxx_5073915536(5.70678879044582) _gate_q_5, _gate_q_0;
  sdg _gate_q_8;
  p(3.879268399224981) _gate_q_6;
  rx(3.7699479845084123) _gate_q_9;
  cry(1.5579905853280192) _gate_q_4, _gate_q_2;
  xx_plus_yy_5073915776(6.10248441674634, 1.796260705842007) _gate_q_2, _gate_q_3;
  u3(2.372784040295737, 6.177888629677268, 5.5393591235841) _gate_q_8;
  sxdg _gate_q_5;
  cu1_5073915872(4.565226912192125) _gate_q_9, _gate_q_0;
  x _gate_q_6;
  rz(1.37563157086369) _gate_q_4;
  ryy_5073915968(4.759992065624772) _gate_q_1, _gate_q_7;
  swap _gate_q_3, _gate_q_7;
  cu1_5073916112(3.477513525385363) _gate_q_1, _gate_q_6;
  sdg _gate_q_8;
  ryy_5073915920(3.405258200566951) _gate_q_2, _gate_q_9;
  rz(5.96318623647666) _gate_q_5;
  ry(5.9739218346877685) _gate_q_4;
  u3(4.311535442489695, 4.569413108663187, 4.253348172062454) _gate_q_0;
  cry(4.813639636368138) _gate_q_4, _gate_q_6;
  U(4.253449009574115, 0.4911792534448772, 3.1194227876537064) _gate_q_1;
  rx(3.5731787488648905) _gate_q_8;
  ch _gate_q_9, _gate_q_3;
  crx(5.080312151716519) _gate_q_2, _gate_q_7;
  h _gate_q_0;
  rz(2.6437107085291163) _gate_q_5;
  cu(3.7827104420628648, 4.546338071954431, 2.974043819090398, 2.963166138942933) _gate_q_2, _gate_q_9;
  z _gate_q_7;
  rzx_5073916496(1.2302388354552092) _gate_q_5, _gate_q_6;
  iswap _gate_q_0, _gate_q_4;
  id _gate_q_1;
  cu(3.5354882023185503, 0.3438197667038986, 4.746120391673872, 1.075318915064466) _gate_q_3, _gate_q_8;
  cp(6.1341269812044805) _gate_q_2, _gate_q_6;
  crz(4.033195086451294) _gate_q_5, _gate_q_9;
  csx _gate_q_0, _gate_q_4;
  xx_minus_yy_5073916832(5.534474066574292, 0.3402667451538084) _gate_q_8, _gate_q_7;
  ecr _gate_q_3, _gate_q_1;
  cz _gate_q_1, _gate_q_7;
  r_5073917072(5.542053586741075, 6.00403698596854) _gate_q_4;
  id _gate_q_9;
  cu3_5073917312(2.902896246459314, 2.622007076855613, 0.21604230170514924) _gate_q_6, _gate_q_8;
  sx _gate_q_5;
  t _gate_q_0;
  y _gate_q_2;
  h _gate_q_3;
  csx _gate_q_3, _gate_q_0;
  s _gate_q_1;
  id _gate_q_6;
  xx_minus_yy_5073917216(2.6209571129202214, 0.7410200874787383) _gate_q_7, _gate_q_4;
  ch _gate_q_8, _gate_q_9;
  z _gate_q_5;
  x _gate_q_2;
  rzx_5073917024(3.0547192879304843) _gate_q_1, _gate_q_7;
  swap _gate_q_2, _gate_q_9;
  cu3_5073917360(2.1423808988834767, 6.190993011096222, 2.8264850550879195) _gate_q_4, _gate_q_8;
  cz _gate_q_6, _gate_q_5;
  ch _gate_q_0, _gate_q_3;
  sxdg _gate_q_2;
  U(3.5506666906578865, 1.9680004483612437, 2.530853979426835) _gate_q_6;
  cp(5.4785103989469395) _gate_q_9, _gate_q_7;
  csx _gate_q_8, _gate_q_1;
  s _gate_q_3;
  crx(1.3552932376891929) _gate_q_0, _gate_q_4;
  t _gate_q_5;
}
gate cu1_5073919856(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7699630928696416) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7699630928696416) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7699630928696416) _gate_q_1;
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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5073920240(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.715908110809007) _gate_q_0;
  u1(-0.3724006250040075) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.024150288947092792, 0, -3.715908110809007) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.024150288947092792, 4.088308735813015, 0) _gate_q_1;
}
gate rxx_5073919424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.1937639193354564) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5073919280(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.4309210432891653) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7600616817499896) _gate_q_1;
  ry(-0.7600616817499896) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.4309210432891653) _gate_q_0;
}
gate rzz_5073921680(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.184598371128095) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5073920960(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.8231286630143364) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.8231286630143364) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.8231286630143364) _gate_q_1;
}
gate xx_plus_yy_5073920864(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7121531223958617) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.1876244587585343) _gate_q_1;
  ry(-2.1876244587585343) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7121531223958617) _gate_q_0;
}
gate xx_plus_yy_5073921152(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.255317394358858) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9899570275452058) _gate_q_1;
  ry(-0.9899570275452058) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.255317394358858) _gate_q_0;
}
gate xx_minus_yy_5073921056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.4479597386056966) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.234287837113542) _gate_q_0;
  ry(-2.234287837113542) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.4479597386056966) _gate_q_1;
}
gate rzz_5073921248(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.072081885743947) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5073921392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.280394732601132) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5073921296(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.3067686402617005, -0.9832259385960002, 0.9832259385960002) _gate_q_0;
}
gate cu3_5073921632(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.366393178178896) _gate_q_0;
  u1(-0.39884086748773595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.14628256008895513, 0, -2.366393178178896) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.14628256008895513, 2.765234045666632, 0) _gate_q_1;
}
gate xx_plus_yy_5073920816(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.117308604532302) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.025990552118885) _gate_q_1;
  ry(-1.025990552118885) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.117308604532302) _gate_q_0;
}
gate cu3_5073920576(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.615889528174708) _gate_q_0;
  u1(-0.43665449177563564) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4938767315454523, 0, -3.615889528174708) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4938767315454523, 4.052544019950344, 0) _gate_q_1;
}
gate rzx_5073914672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.367517983524035) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  cu1_5073919856(1.5399261857392832) _gate_q_7, _gate_q_0;
  u2(4.426495877771946, 4.984465422428859) _gate_q_8;
  dcx _gate_q_4, _gate_q_5;
  crz(4.493671396206499) _gate_q_1, _gate_q_6;
  u3(5.709823190947684, 2.461765866731204, 1.9806205814837492) _gate_q_9;
  u1(0.047611596286288256) _gate_q_3;
  ry(2.9926625238522404) _gate_q_2;
  cs _gate_q_1, _gate_q_3;
  cy _gate_q_5, _gate_q_7;
  cs _gate_q_8, _gate_q_6;
  csdg _gate_q_4, _gate_q_9;
  cu3_5073920240(0.048300577894185584, 4.088308735813015, 3.3435074858049996) _gate_q_2, _gate_q_0;
  sxdg _gate_q_5;
  rxx_5073919424(0.1937639193354564) _gate_q_9, _gate_q_8;
  xx_plus_yy_5073919280(1.5201233634999791, 1.4309210432891653) _gate_q_4, _gate_q_2;
  ch _gate_q_0, _gate_q_3;
  y _gate_q_7;
  s _gate_q_6;
  tdg _gate_q_1;
  sdg _gate_q_7;
  rzz_5073921680(6.184598371128095) _gate_q_3, _gate_q_9;
  u1(5.912641456393573) _gate_q_1;
  csdg _gate_q_0, _gate_q_2;
  iswap _gate_q_6, _gate_q_5;
  cy _gate_q_8, _gate_q_4;
  cu1_5073920960(3.646257326028673) _gate_q_7, _gate_q_2;
  ry(0.20612677544492075) _gate_q_1;
  sdg _gate_q_8;
  id _gate_q_0;
  csdg _gate_q_4, _gate_q_6;
  xx_plus_yy_5073920864(4.375248917517069, 0.7121531223958617) _gate_q_5, _gate_q_9;
  h _gate_q_3;
  swap _gate_q_0, _gate_q_5;
  u3(2.0913321249886008, 6.1256401715064035, 1.3723082332299583) _gate_q_2;
  sx _gate_q_8;
  sdg _gate_q_3;
  xx_plus_yy_5073921152(1.9799140550904115, 5.255317394358858) _gate_q_1, _gate_q_7;
  dcx _gate_q_4, _gate_q_9;
  U(2.2899226314212955, 3.042872047078843, 4.529047531923936) _gate_q_6;
  cs _gate_q_7, _gate_q_3;
  xx_minus_yy_5073921056(4.468575674227084, 1.4479597386056966) _gate_q_6, _gate_q_5;
  ch _gate_q_8, _gate_q_2;
  dcx _gate_q_0, _gate_q_9;
  rzz_5073921248(5.072081885743947) _gate_q_4, _gate_q_1;
  cs _gate_q_4, _gate_q_3;
  x _gate_q_5;
  rxx_5073921392(0.280394732601132) _gate_q_1, _gate_q_9;
  x _gate_q_6;
  r_5073921296(4.3067686402617005, 0.5875703881988964) _gate_q_8;
  u1(0.042271563510129645) _gate_q_7;
  cu(0.07187278760543546, 0.8147032534673265, 3.627394529916877, 5.353621446135122) _gate_q_0, _gate_q_2;
  p(1.9607359432139406) _gate_q_2;
  tdg _gate_q_7;
  csx _gate_q_3, _gate_q_6;
  cu(5.941723146118704, 4.495906089140313, 1.0392521940301123, 3.040118394264231) _gate_q_8, _gate_q_5;
  h _gate_q_4;
  cu3_5073921632(0.29256512017791025, 2.765234045666632, 1.9675523106911599) _gate_q_1, _gate_q_9;
  rx(4.005117599765037) _gate_q_0;
  h _gate_q_3;
  ecr _gate_q_4, _gate_q_1;
  xx_plus_yy_5073920816(2.05198110423777, 2.117308604532302) _gate_q_5, _gate_q_2;
  rz(4.894063184686642) _gate_q_9;
  cu3_5073920576(0.9877534630909046, 4.052544019950344, 3.1792350363990725) _gate_q_8, _gate_q_7;
  rzx_5073914672(5.367517983524035) _gate_q_6, _gate_q_0;
}