gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5070729152(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.3557306139164238) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5000526443720155) _gate_q_0;
  ry(-2.5000526443720155) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.3557306139164238) _gate_q_1;
}
gate rzx_5070719744(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.196484607168144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5070721568(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.808428430854725) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2883502431569578) _gate_q_1;
  ry(-1.2883502431569578) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.808428430854725) _gate_q_0;
}
gate xx_plus_yy_5070718064(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.986200680411339) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.1039179266112003) _gate_q_1;
  ry(-2.1039179266112003) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.986200680411339) _gate_q_0;
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
gate cu3_5070731216(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.400153074681559) _gate_q_0;
  u1(-1.1338953284369548) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.13880039204259495, 0, -3.400153074681559) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.13880039204259495, 4.534048403118514, 0) _gate_q_1;
}
gate ryy_5070729056(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9432201279655885) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate rzx_5070718208(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.373336002165852) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5070731744(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.605064792624697) _gate_q_0;
  u1(-0.27910661830460926) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5433439435013282, 0, -1.605064792624697) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5433439435013282, 1.8841714109293064, 0) _gate_q_1;
}
gate rzx_5070726032(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.12708066187185682) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu1_5070722432(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8729146672151973) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8729146672151973) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8729146672151973) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5070718880(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.49312929441311265) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.49312929441311265) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.49312929441311265) _gate_q_1;
}
gate rzz_5070717440(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.375859266733975) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5070731936(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.080343288313153, 0.6623700985978807, -0.6623700985978807) _gate_q_0;
}
gate xx_minus_yy_5070717296(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.850788037988607) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0601035467193596) _gate_q_0;
  ry(-1.0601035467193596) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.850788037988607) _gate_q_1;
}
gate rzz_5070724448(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.2529339496586687) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5070730112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8094998023009166) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5070731504(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.04058985863922) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.04058985863922) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.04058985863922) _gate_q_1;
}
gate xx_minus_yy_5070723824(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.9765773916786138) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.7265305833123596) _gate_q_0;
  ry(-2.7265305833123596) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.9765773916786138) _gate_q_1;
}
gate xx_minus_yy_5070724208(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.026790174812614) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6988148645094242) _gate_q_0;
  ry(-0.6988148645094242) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.026790174812614) _gate_q_1;
}
gate rzz_5070723776(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.0631446543835406) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5070717536(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.7153208982590895, 1.6000397120803935, -1.6000397120803935) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  cy _gate_q_2, _gate_q_7;
  swap _gate_q_6, _gate_q_3;
  u2(4.364738102790363, 0.39068723023379515) _gate_q_1;
  dcx _gate_q_11, _gate_q_4;
  rz(0.14226049981353417) _gate_q_8;
  sxdg _gate_q_12;
  xx_minus_yy_5070729152(5.000105288744031, 1.3557306139164238) _gate_q_5, _gate_q_9;
  swap _gate_q_10, _gate_q_0;
  x _gate_q_2;
  cz _gate_q_3, _gate_q_11;
  rzx_5070719744(1.196484607168144) _gate_q_9, _gate_q_0;
  xx_plus_yy_5070721568(2.5767004863139156, 4.808428430854725) _gate_q_5, _gate_q_1;
  rz(1.8841541218174853) _gate_q_10;
  u3(3.2759814558190437, 4.516860982027124, 4.338646289736423) _gate_q_6;
  xx_plus_yy_5070718064(4.2078358532224005, 5.986200680411339) _gate_q_12, _gate_q_8;
  rz(4.386416750439996) _gate_q_4;
  z _gate_q_7;
  crx(3.795626117955044) _gate_q_8, _gate_q_12;
  u3(5.072176141549571, 0.8737575105834845, 1.6446450382525828) _gate_q_3;
  csx _gate_q_0, _gate_q_10;
  y _gate_q_4;
  cu3_5070731216(0.2776007840851899, 4.534048403118514, 2.2662577462446043) _gate_q_9, _gate_q_2;
  crz(4.633113509779454) _gate_q_7, _gate_q_5;
  ryy_5070729056(1.9432201279655885) _gate_q_6, _gate_q_11;
  x _gate_q_1;
  t _gate_q_1;
  rx(0.8708363254165831) _gate_q_9;
  cp(5.286808329642786) _gate_q_3, _gate_q_0;
  x _gate_q_5;
  cz _gate_q_10, _gate_q_6;
  csx _gate_q_2, _gate_q_7;
  ecr _gate_q_8, _gate_q_12;
  rzx_5070718208(2.373336002165852) _gate_q_4, _gate_q_11;
  s _gate_q_3;
  cu3_5070731744(1.0866878870026564, 1.8841714109293064, 1.325958174320088) _gate_q_8, _gate_q_0;
  z _gate_q_4;
  x _gate_q_10;
  swap _gate_q_2, _gate_q_1;
  rzx_5070726032(0.12708066187185682) _gate_q_7, _gate_q_11;
  p(0.47844568204731397) _gate_q_9;
  csdg _gate_q_6, _gate_q_12;
  sdg _gate_q_5;
  cp(0.25041205379573195) _gate_q_11, _gate_q_6;
  h _gate_q_3;
  cu1_5070722432(1.7458293344303946) _gate_q_5, _gate_q_1;
  ch _gate_q_12, _gate_q_7;
  rx(0.6754300107045446) _gate_q_4;
  iswap _gate_q_8, _gate_q_9;
  id _gate_q_2;
  cz _gate_q_10, _gate_q_0;
  cu1_5070718880(0.9862585888262253) _gate_q_0, _gate_q_12;
  u1(5.75573072172501) _gate_q_2;
  z _gate_q_7;
  rzz_5070717440(3.375859266733975) _gate_q_8, _gate_q_3;
  r_5070731936(5.080343288313153, 2.233166425392777) _gate_q_1;
  cu(4.6350930394169, 5.625519790020588, 3.7859166898025536, 2.315163477373968) _gate_q_9, _gate_q_4;
  xx_minus_yy_5070717296(2.120207093438719, 4.850788037988607) _gate_q_5, _gate_q_6;
  rzz_5070724448(2.2529339496586687) _gate_q_10, _gate_q_11;
  cry(3.1034647026999154) _gate_q_12, _gate_q_5;
  z _gate_q_4;
  x _gate_q_2;
  cy _gate_q_9, _gate_q_11;
  t _gate_q_3;
  sx _gate_q_8;
  rxx_5070730112(1.8094998023009166) _gate_q_7, _gate_q_1;
  cu1_5070731504(6.08117971727844) _gate_q_0, _gate_q_6;
  p(5.887317679353875) _gate_q_10;
  xx_minus_yy_5070723824(5.453061166624719, 1.9765773916786138) _gate_q_2, _gate_q_1;
  x _gate_q_11;
  dcx _gate_q_7, _gate_q_0;
  sdg _gate_q_4;
  csdg _gate_q_3, _gate_q_8;
  iswap _gate_q_6, _gate_q_9;
  rx(4.981525100026609) _gate_q_5;
  xx_minus_yy_5070724208(1.3976297290188484, 6.026790174812614) _gate_q_12, _gate_q_10;
  u2(2.4284622290786344, 5.3307284552613) _gate_q_6;
  iswap _gate_q_7, _gate_q_3;
  sdg _gate_q_1;
  cx _gate_q_2, _gate_q_11;
  dcx _gate_q_10, _gate_q_5;
  rzz_5070723776(3.0631446543835406) _gate_q_9, _gate_q_8;
  cy _gate_q_12, _gate_q_4;
  r_5070717536(3.7153208982590895, 3.17083603887529) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5070599472(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.6281179282373048, -1.103898757569224, 1.103898757569224) _gate_q_0;
}
gate cu3_5070586128(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2014042858737595) _gate_q_0;
  u1(0.3293199673968623) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.093826563999455, 0, -3.2014042858737595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.093826563999455, 2.872084318476897, 0) _gate_q_1;
}
gate rzz_5070592416(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.001290243077423) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5070587088(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.647371166587691) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5070594672(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3535154368886007) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5070599952(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.21057770603000298) _gate_q_0;
  u1(-0.13457982409849167) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7264897079669137, 0, -0.21057770603000298) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7264897079669137, 0.34515753012849465, 0) _gate_q_1;
}
gate rzx_5070600672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.42390568988898614) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5070600096(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3885875644293155) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5070587424(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.9861299971559268) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.9861299971559268) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.9861299971559268) _gate_q_1;
}
gate xx_plus_yy_5070589776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.726552373495366) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5781102881337825) _gate_q_1;
  ry(-0.5781102881337825) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.726552373495366) _gate_q_0;
}
gate xx_minus_yy_5070591744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.825954265382843) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5193240319895314) _gate_q_0;
  ry(-0.5193240319895314) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.825954265382843) _gate_q_1;
}
gate cu3_5070600240(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.482862914078159) _gate_q_0;
  u1(-1.645975268380453) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.499947325999045, 0, -3.482862914078159) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.499947325999045, 5.128838182458612, 0) _gate_q_1;
}
gate cu3_5070598704(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.288167978321174) _gate_q_0;
  u1(0.42361879945715963) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.0278231572294407, 0, -2.288167978321174) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.0278231572294407, 1.864549178864014, 0) _gate_q_1;
}
gate cu3_5070593136(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.54452298065053) _gate_q_0;
  u1(-0.4424181342294369) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7439535896230498, 0, -4.54452298065053) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7439535896230498, 4.986941114879968, 0) _gate_q_1;
}
gate ryy_5070586224(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.062846816017744) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5070599616(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.096257799667997) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.845964195277164) _gate_q_0;
  ry(-2.845964195277164) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.096257799667997) _gate_q_1;
}
gate xx_plus_yy_5070592800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.9596447769853653) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8057711992810734) _gate_q_1;
  ry(-2.8057711992810734) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.9596447769853653) _gate_q_0;
}
gate r_5070599760(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.733762323281613, 2.6335249530955824, -2.6335249530955824) _gate_q_0;
}
gate rzz_5070590112(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.8657817644485273) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  sx _gate_q_9;
  cs _gate_q_1, _gate_q_2;
  r_5070599472(0.6281179282373048, 0.46689756922567244) _gate_q_3;
  sdg _gate_q_7;
  cu3_5070586128(2.18765312799891, 2.872084318476897, 3.5307242532706216) _gate_q_12, _gate_q_0;
  ry(5.544921314781574) _gate_q_8;
  rzz_5070592416(4.001290243077423) _gate_q_5, _gate_q_6;
  csx _gate_q_4, _gate_q_10;
  sxdg _gate_q_11;
  csx _gate_q_0, _gate_q_1;
  y _gate_q_4;
  rxx_5070587088(5.647371166587691) _gate_q_7, _gate_q_12;
  y _gate_q_2;
  s _gate_q_10;
  ryy_5070594672(2.3535154368886007) _gate_q_8, _gate_q_9;
  u2(4.693409184862575, 2.124613736368423) _gate_q_11;
  x _gate_q_3;
  cu3_5070599952(3.4529794159338274, 0.34515753012849465, 0.0759978819315113) _gate_q_5, _gate_q_6;
  rzx_5070600672(0.42390568988898614) _gate_q_12, _gate_q_2;
  u2(3.8212513753108306, 6.070798277994577) _gate_q_7;
  cp(4.598551023252037) _gate_q_11, _gate_q_9;
  ecr _gate_q_0, _gate_q_6;
  rxx_5070600096(3.3885875644293155) _gate_q_1, _gate_q_10;
  cu1_5070587424(5.9722599943118535) _gate_q_3, _gate_q_5;
  cu(4.455339671442575, 5.30687165900754, 4.364312202447798, 2.552515589334901) _gate_q_4, _gate_q_8;
  rx(1.8350924675011615) _gate_q_7;
  x _gate_q_2;
  t _gate_q_4;
  tdg _gate_q_10;
  crz(5.8584602033618385) _gate_q_11, _gate_q_3;
  u2(0.39835395084119957, 4.840900906784004) _gate_q_6;
  ch _gate_q_9, _gate_q_8;
  cy _gate_q_1, _gate_q_12;
  xx_plus_yy_5070589776(1.156220576267565, 2.726552373495366) _gate_q_0, _gate_q_5;
  id _gate_q_1;
  u2(5.093395868234064, 1.6310104648143646) _gate_q_7;
  cz _gate_q_9, _gate_q_3;
  U(4.073895077706247, 4.981844311248962, 1.1368188620612667) _gate_q_0;
  rx(3.1643106362879423) _gate_q_8;
  p(1.0425464086283802) _gate_q_11;
  u3(1.2668351728410547, 6.212215661269788, 5.05671725087171) _gate_q_10;
  csx _gate_q_2, _gate_q_4;
  xx_minus_yy_5070591744(1.0386480639790627, 2.825954265382843) _gate_q_12, _gate_q_6;
  u2(5.094578011038894, 2.840051593337476) _gate_q_5;
  x _gate_q_10;
  swap _gate_q_3, _gate_q_6;
  crz(4.610947242157078) _gate_q_12, _gate_q_1;
  ecr _gate_q_11, _gate_q_2;
  ecr _gate_q_7, _gate_q_0;
  cz _gate_q_5, _gate_q_9;
  cu(4.142123128535492, 1.523063756065149, 4.481388679074391, 3.5277991819588785) _gate_q_4, _gate_q_8;
  sdg _gate_q_0;
  U(1.0067608040246774, 6.001113601030727, 1.412511560119584) _gate_q_2;
  cu3_5070600240(4.99989465199809, 5.128838182458612, 1.8368876456977057) _gate_q_5, _gate_q_3;
  id _gate_q_12;
  cy _gate_q_10, _gate_q_4;
  cu3_5070598704(4.0556463144588815, 1.864549178864014, 2.7117867777783333) _gate_q_6, _gate_q_11;
  cu3_5070593136(1.4879071792460996, 4.986941114879968, 4.102104846421094) _gate_q_9, _gate_q_7;
  csdg _gate_q_8, _gate_q_1;
  z _gate_q_11;
  u1(4.492881624417163) _gate_q_6;
  u1(3.5995894152005983) _gate_q_10;
  cz _gate_q_8, _gate_q_5;
  rx(0.9542813579931753) _gate_q_9;
  cp(1.3198595605783037) _gate_q_3, _gate_q_1;
  sx _gate_q_12;
  t _gate_q_2;
  crx(2.4323783978480966) _gate_q_0, _gate_q_7;
  ry(6.220225135033519) _gate_q_4;
  tdg _gate_q_7;
  cz _gate_q_11, _gate_q_1;
  cu(3.4324399735508795, 4.58037077610447, 5.484606320172866, 6.137949841513808) _gate_q_6, _gate_q_5;
  ryy_5070586224(5.062846816017744) _gate_q_12, _gate_q_2;
  sdg _gate_q_0;
  U(3.156571407933333, 3.5056699446921167, 0.9570321958924483) _gate_q_10;
  x _gate_q_3;
  cu(2.171635407314355, 0.09715013010542825, 1.3576836758747466, 3.235990097150458) _gate_q_9, _gate_q_4;
  u2(2.3351302977283854, 4.738796997952478) _gate_q_8;
  csdg _gate_q_12, _gate_q_6;
  cs _gate_q_2, _gate_q_9;
  xx_minus_yy_5070599616(5.691928390554328, 4.096257799667997) _gate_q_11, _gate_q_10;
  xx_plus_yy_5070592800(5.611542398562147, 1.9596447769853653) _gate_q_7, _gate_q_5;
  r_5070599760(2.733762323281613, 4.204321279890479) _gate_q_1;
  rzz_5070590112(2.8657817644485273) _gate_q_8, _gate_q_0;
  crz(2.0931104271292007) _gate_q_4, _gate_q_3;
}