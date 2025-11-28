gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5106106640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.2736155534722788) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8817906799387696) _gate_q_0;
  ry(-0.8817906799387696) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.2736155534722788) _gate_q_1;
}
gate xx_minus_yy_5106116096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.4735017760175477) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5897605765824923) _gate_q_0;
  ry(-0.5897605765824923) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.4735017760175477) _gate_q_1;
}
gate xx_plus_yy_5106118448(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.3420795262855427) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.004013239293602) _gate_q_1;
  ry(-3.004013239293602) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.3420795262855427) _gate_q_0;
}
gate xx_minus_yy_5106109520(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.05430419999180506) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8837525390744968) _gate_q_0;
  ry(-0.8837525390744968) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.05430419999180506) _gate_q_1;
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
gate xx_plus_yy_5106109808(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.994377118920427) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5824582888376573) _gate_q_1;
  ry(-2.5824582888376573) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.994377118920427) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_minus_yy_5106106592(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.8286350848860333) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7974419582644624) _gate_q_0;
  ry(-0.7974419582644624) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.8286350848860333) _gate_q_1;
}
gate r_5106117632(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.960708386524583, -0.09070927743040857, 0.09070927743040857) _gate_q_0;
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
gate rzx_5106112592(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4081869580520447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5106120896(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7813549761208456) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5106117776(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.615296215667349) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5106113024(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.220785340552776) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0251986759358944) _gate_q_0;
  ry(-1.0251986759358944) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.220785340552776) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5106115328(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.6230932617083016) _gate_q_0;
  u1(-2.0630034232079075) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3663731202163532, 0, -3.6230932617083016) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3663731202163532, 5.686096684916209, 0) _gate_q_1;
}
gate r_5106118736(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.072356211551229, 4.698695172106461, -4.698695172106461) _gate_q_0;
}
gate ryy_5106115232(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.445099775003854) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5106111248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.23976809296210772) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.3799137140659985) _gate_q_0;
  ry(-2.3799137140659985) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.23976809296210772) _gate_q_1;
}
gate cu3_5106119312(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.484685243124786) _gate_q_0;
  u1(0.8773656830234386) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.17196725846783636, 0, -3.484685243124786) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.17196725846783636, 2.6073195601013475, 0) _gate_q_1;
}
gate cu1_5106117824(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.581754533976814) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.581754533976814) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.581754533976814) _gate_q_1;
}
gate rzx_5106107024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.22090286013198) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5106116576(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.2250594399844834) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.2250594399844834) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.2250594399844834) _gate_q_1;
}
gate xx_minus_yy_5106118256(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.123449246850405) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.2133975807301824) _gate_q_0;
  ry(-0.2133975807301824) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.123449246850405) _gate_q_1;
}
gate xx_plus_yy_5106117968(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.931010534721604) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.0323574629360226) _gate_q_1;
  ry(-3.0323574629360226) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.931010534721604) _gate_q_0;
}
gate cu1_5106112640(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.297659147574791) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.297659147574791) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.297659147574791) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  xx_minus_yy_5106106640(1.7635813598775392, 1.2736155534722788) _gate_q_0, _gate_q_4;
  ry(3.952973271828134) _gate_q_8;
  cz _gate_q_6, _gate_q_11;
  cz _gate_q_14, _gate_q_2;
  u3(3.0730513661746883, 1.4004870668150229, 3.6434541422775264) _gate_q_12;
  xx_minus_yy_5106116096(1.1795211531649845, 2.4735017760175477) _gate_q_13, _gate_q_7;
  cy _gate_q_9, _gate_q_15;
  crx(0.23225260342047163) _gate_q_5, _gate_q_3;
  id _gate_q_16;
  xx_plus_yy_5106118448(6.008026478587204, 3.3420795262855427) _gate_q_10, _gate_q_1;
  xx_minus_yy_5106109520(1.7675050781489936, 0.05430419999180506) _gate_q_12, _gate_q_1;
  y _gate_q_9;
  csx _gate_q_10, _gate_q_7;
  sdg _gate_q_4;
  id _gate_q_5;
  z _gate_q_2;
  tdg _gate_q_16;
  cry(2.6653593307501757) _gate_q_14, _gate_q_3;
  p(1.541004945070216) _gate_q_8;
  z _gate_q_15;
  rx(4.884894135388233) _gate_q_11;
  p(0.47518515710592063) _gate_q_6;
  cry(0.1385611878749137) _gate_q_13, _gate_q_0;
  cs _gate_q_0, _gate_q_16;
  y _gate_q_8;
  z _gate_q_2;
  xx_plus_yy_5106109808(5.1649165776753145, 5.994377118920427) _gate_q_1, _gate_q_7;
  cy _gate_q_5, _gate_q_12;
  u2(5.81898292684478, 0.25134665442684057) _gate_q_10;
  cs _gate_q_15, _gate_q_6;
  crz(5.259198182325035) _gate_q_11, _gate_q_3;
  iswap _gate_q_14, _gate_q_4;
  tdg _gate_q_13;
  tdg _gate_q_9;
  x _gate_q_12;
  sxdg _gate_q_8;
  cp(0.757763324098978) _gate_q_9, _gate_q_5;
  cry(3.3731069471471127) _gate_q_16, _gate_q_10;
  h _gate_q_0;
  xx_minus_yy_5106106592(1.5948839165289248, 1.8286350848860333) _gate_q_3, _gate_q_1;
  r_5106117632(5.960708386524583, 1.480087049364488) _gate_q_11;
  cs _gate_q_15, _gate_q_13;
  crx(1.2655762481420836) _gate_q_6, _gate_q_2;
  cp(1.156104434706968) _gate_q_14, _gate_q_4;
  s _gate_q_7;
  id _gate_q_15;
  ecr _gate_q_2, _gate_q_9;
  rzx_5106112592(1.4081869580520447) _gate_q_14, _gate_q_0;
  csx _gate_q_6, _gate_q_8;
  u1(1.2298078205634682) _gate_q_10;
  u1(1.4249185744283448) _gate_q_3;
  p(4.4606370466941705) _gate_q_7;
  ryy_5106120896(1.7813549761208456) _gate_q_1, _gate_q_11;
  rx(1.6600552750907962) _gate_q_16;
  cs _gate_q_12, _gate_q_4;
  id _gate_q_5;
  sxdg _gate_q_13;
  s _gate_q_2;
  p(4.783341859753866) _gate_q_7;
  y _gate_q_3;
  rz(4.248852406269497) _gate_q_16;
  t _gate_q_9;
  cu(0.7861460761530806, 1.2569822681729665, 4.987581715720139, 2.5259194493330637) _gate_q_8, _gate_q_5;
  csx _gate_q_11, _gate_q_14;
  sxdg _gate_q_10;
  x _gate_q_6;
  rzz_5106117776(2.615296215667349) _gate_q_13, _gate_q_4;
  cs _gate_q_12, _gate_q_15;
  iswap _gate_q_1, _gate_q_0;
  x _gate_q_5;
  ry(0.22080691371116756) _gate_q_13;
  rx(3.0915600195305104) _gate_q_0;
  y _gate_q_1;
  h _gate_q_3;
  ch _gate_q_6, _gate_q_8;
  ecr _gate_q_11, _gate_q_2;
  xx_minus_yy_5106113024(2.050397351871789, 4.220785340552776) _gate_q_14, _gate_q_10;
  u1(3.373491285589665) _gate_q_4;
  dcx _gate_q_9, _gate_q_15;
  cz _gate_q_16, _gate_q_12;
  t _gate_q_7;
  ry(4.53805980345763) _gate_q_13;
  sxdg _gate_q_0;
  cu3_5106115328(2.7327462404327063, 5.686096684916209, 1.5600898385003938) _gate_q_16, _gate_q_10;
  t _gate_q_1;
  cu(2.869142057836751, 4.899811138813502, 4.878096246014958, 5.751777450819977) _gate_q_6, _gate_q_15;
  r_5106118736(5.072356211551229, 6.269491498901358) _gate_q_14;
  sx _gate_q_2;
  rz(6.132610317685295) _gate_q_5;
  ryy_5106115232(5.445099775003854) _gate_q_4, _gate_q_7;
  iswap _gate_q_9, _gate_q_8;
  h _gate_q_12;
  xx_minus_yy_5106111248(4.759827428131997, 0.23976809296210772) _gate_q_3, _gate_q_11;
  sdg _gate_q_7;
  cu3_5106119312(0.34393451693567273, 2.6073195601013475, 4.362050926148225) _gate_q_0, _gate_q_9;
  csx _gate_q_15, _gate_q_8;
  cs _gate_q_2, _gate_q_10;
  U(3.6438041329710598, 0.9016981188354604, 3.7327797766695845) _gate_q_3;
  z _gate_q_13;
  cs _gate_q_12, _gate_q_4;
  s _gate_q_11;
  cs _gate_q_1, _gate_q_14;
  u3(2.0474398352920593, 1.2366527057674617, 1.4375513214374154) _gate_q_5;
  ry(5.743821239466557) _gate_q_16;
  x _gate_q_6;
  csx _gate_q_0, _gate_q_3;
  cu1_5106117824(5.163509067953628) _gate_q_4, _gate_q_16;
  tdg _gate_q_8;
  rzx_5106107024(4.22090286013198) _gate_q_6, _gate_q_5;
  u3(6.015394063368087, 2.1550030026296323, 5.0348821661980505) _gate_q_9;
  cu1_5106116576(4.450118879968967) _gate_q_10, _gate_q_11;
  xx_minus_yy_5106118256(0.4267951614603648, 6.123449246850405) _gate_q_15, _gate_q_2;
  xx_plus_yy_5106117968(6.064714925872045, 1.931010534721604) _gate_q_7, _gate_q_14;
  cu1_5106112640(4.595318295149582) _gate_q_13, _gate_q_12;
  U(3.714399778341019, 4.191684774720194, 1.1599065222452773) _gate_q_1;
}
gate rzx_5106116192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0289905637754915) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5106110528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.884107291262467) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9899339122144262) _gate_q_0;
  ry(-1.9899339122144262) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.884107291262467) _gate_q_1;
}
gate r_5106116672(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.1568096048483825, 1.8032444344878198, -1.8032444344878198) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rxx_5106110672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.456713136489191) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5106112832(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.1841937652147627) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5106111968(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.8989432232800434) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.438740709491186) _gate_q_1;
  ry(-2.438740709491186) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.8989432232800434) _gate_q_0;
}
gate rzx_5106110384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.322171753775777) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5106118976(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.66690439153662) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5106109568(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.806618302363914) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5106115520(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.8946244403254333) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2495566263976436) _gate_q_1;
  ry(-1.2495566263976436) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.8946244403254333) _gate_q_0;
}
gate cu1_5106122432(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.2363757082547807) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.2363757082547807) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.2363757082547807) _gate_q_1;
}
gate rxx_5106121232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.917590045261673) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5106118688(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.6281503469294154) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.563969888519537) _gate_q_1;
  ry(-2.563969888519537) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.6281503469294154) _gate_q_0;
}
gate rzx_5106110096(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.835818849387046) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5106114992(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.9458453824175286) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5106119648(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.213292797125659) _gate_q_0;
  u1(-1.0669489689162757) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.1880694182834862, 0, -5.213292797125659) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.1880694182834862, 6.280241766041934, 0) _gate_q_1;
}
gate xx_plus_yy_5106110240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.633775063172479) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.14081207395960363) _gate_q_1;
  ry(-0.14081207395960363) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.633775063172479) _gate_q_0;
}
gate rzz_5106111104(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.7654686007434073) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  id _gate_q_15;
  U(1.732431263812018, 1.3170061059466094, 4.679354121881992) _gate_q_12;
  p(0.26614580514192215) _gate_q_8;
  cx _gate_q_6, _gate_q_1;
  rzx_5106116192(2.0289905637754915) _gate_q_14, _gate_q_3;
  id _gate_q_4;
  cs _gate_q_2, _gate_q_5;
  csx _gate_q_7, _gate_q_10;
  xx_minus_yy_5106110528(3.9798678244288523, 5.884107291262467) _gate_q_11, _gate_q_16;
  crz(5.208322238312277) _gate_q_13, _gate_q_0;
  r_5106116672(3.1568096048483825, 3.3740407612827163) _gate_q_9;
  dcx _gate_q_2, _gate_q_1;
  cry(5.248997573286039) _gate_q_10, _gate_q_4;
  crz(2.4366055246104663) _gate_q_6, _gate_q_15;
  x _gate_q_8;
  z _gate_q_16;
  cx _gate_q_7, _gate_q_3;
  p(6.050138768572769) _gate_q_11;
  rx(4.536831621813521) _gate_q_0;
  sx _gate_q_14;
  csdg _gate_q_5, _gate_q_13;
  rxx_5106110672(5.456713136489191) _gate_q_12, _gate_q_9;
  iswap _gate_q_14, _gate_q_15;
  cz _gate_q_12, _gate_q_8;
  rzz_5106112832(2.1841937652147627) _gate_q_3, _gate_q_4;
  xx_plus_yy_5106111968(4.877481418982372, 3.8989432232800434) _gate_q_1, _gate_q_6;
  rzx_5106110384(2.322171753775777) _gate_q_10, _gate_q_7;
  sxdg _gate_q_2;
  rxx_5106118976(4.66690439153662) _gate_q_9, _gate_q_5;
  rzz_5106109568(0.806618302363914) _gate_q_11, _gate_q_0;
  sxdg _gate_q_16;
  u3(1.1880905826483579, 6.090477676776536, 3.9976317744634984) _gate_q_13;
  xx_plus_yy_5106115520(2.4991132527952873, 0.8946244403254333) _gate_q_8, _gate_q_6;
  x _gate_q_10;
  cu(5.881472013173511, 5.047466939796047, 3.1637904771937135, 4.784164555436535) _gate_q_12, _gate_q_16;
  ecr _gate_q_11, _gate_q_1;
  cp(2.5011959403255646) _gate_q_4, _gate_q_2;
  swap _gate_q_13, _gate_q_0;
  rz(5.45201812100693) _gate_q_7;
  sdg _gate_q_5;
  dcx _gate_q_3, _gate_q_9;
  crx(4.3266873158290124) _gate_q_15, _gate_q_14;
  cu1_5106122432(0.4727514165095614) _gate_q_6, _gate_q_15;
  dcx _gate_q_16, _gate_q_13;
  u2(4.486354180088299, 2.0076537398641596) _gate_q_14;
  cy _gate_q_10, _gate_q_0;
  id _gate_q_2;
  s _gate_q_3;
  ry(2.828325865827834) _gate_q_7;
  h _gate_q_9;
  z _gate_q_4;
  u3(2.0067333183819636, 0.00946312178733367, 4.560605046769968) _gate_q_5;
  cu(4.604896632007249, 2.3614244295893876, 3.1937636495523214, 5.18470601204803) _gate_q_11, _gate_q_1;
  rxx_5106121232(5.917590045261673) _gate_q_12, _gate_q_8;
  u3(0.4358112165830788, 1.4749830142835172, 0.24572764340774111) _gate_q_5;
  u1(5.514777254676094) _gate_q_2;
  dcx _gate_q_8, _gate_q_4;
  xx_plus_yy_5106118688(5.127939777039074, 1.6281503469294154) _gate_q_7, _gate_q_10;
  rx(2.061940566550259) _gate_q_3;
  dcx _gate_q_13, _gate_q_15;
  p(3.6976815435011767) _gate_q_1;
  x _gate_q_12;
  cx _gate_q_14, _gate_q_6;
  rzx_5106110096(5.835818849387046) _gate_q_0, _gate_q_16;
  csdg _gate_q_9, _gate_q_11;
  z _gate_q_11;
  ecr _gate_q_2, _gate_q_10;
  cx _gate_q_1, _gate_q_5;
  cry(0.3553579678165435) _gate_q_6, _gate_q_13;
  cx _gate_q_4, _gate_q_16;
  u3(1.112583878641777, 1.5311121980165854, 5.925875566608976) _gate_q_15;
  swap _gate_q_0, _gate_q_3;
  cp(5.771276689105399) _gate_q_14, _gate_q_12;
  rzz_5106114992(3.9458453824175286) _gate_q_9, _gate_q_7;
  u2(3.017939604433876, 1.2904243954526746) _gate_q_8;
  crx(3.3527968281293794) _gate_q_6, _gate_q_2;
  iswap _gate_q_15, _gate_q_16;
  u1(2.9372054262922593) _gate_q_14;
  s _gate_q_10;
  x _gate_q_3;
  cu3_5106119648(0.3761388365669724, 6.280241766041934, 4.146343828209383) _gate_q_1, _gate_q_11;
  cry(0.32513561731825924) _gate_q_7, _gate_q_4;
  crz(3.9414314143754865) _gate_q_0, _gate_q_12;
  x _gate_q_9;
  s _gate_q_13;
  cs _gate_q_5, _gate_q_8;
  crz(6.204974633834121) _gate_q_3, _gate_q_5;
  xx_plus_yy_5106110240(0.28162414791920726, 4.633775063172479) _gate_q_12, _gate_q_4;
  sxdg _gate_q_8;
  cu(4.202163110476103, 6.112307196331445, 0.2687861081249521, 2.9420637441582924) _gate_q_6, _gate_q_9;
  id _gate_q_10;
  rzz_5106111104(2.7654686007434073) _gate_q_15, _gate_q_7;
  cy _gate_q_2, _gate_q_11;
  iswap _gate_q_0, _gate_q_13;
  cry(3.608928770030548) _gate_q_16, _gate_q_1;
  u3(3.423833466901443, 0.27493379468121004, 3.934045149686228) _gate_q_14;
  crx(1.2646511942537528) _gate_q_10, _gate_q_1;
  rz(1.317831796704805) _gate_q_8;
  crx(0.863210019940076) _gate_q_9, _gate_q_13;
  ch _gate_q_12, _gate_q_5;
  u1(0.4108311553419247) _gate_q_15;
  rz(4.946569259707918) _gate_q_2;
  s _gate_q_14;
  id _gate_q_0;
  u3(1.044156845340745, 3.1787191562946187, 4.502489199827461) _gate_q_16;
  crx(3.794567702792767) _gate_q_4, _gate_q_11;
  crz(5.546870384671062) _gate_q_3, _gate_q_7;
  z _gate_q_6;
}