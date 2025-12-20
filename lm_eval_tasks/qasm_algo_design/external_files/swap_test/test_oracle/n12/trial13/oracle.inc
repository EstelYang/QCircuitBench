gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5074428096(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.43617878335937305) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5074428288(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.5504041503316122) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3406207597575053) _gate_q_1;
  ry(-2.3406207597575053) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.5504041503316122) _gate_q_0;
}
gate xx_plus_yy_5074428144(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.0572096909380733) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5215487818704583) _gate_q_1;
  ry(-2.5215487818704583) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.0572096909380733) _gate_q_0;
}
gate cu1_5074428240(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.1631096043074023) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.1631096043074023) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.1631096043074023) _gate_q_1;
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
gate ryy_5074428336(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9681627824597547) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5074428576(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.032535479400772) _gate_q_0;
  u1(-0.867331032054477) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.53600133716703, 0, -1.032535479400772) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.53600133716703, 1.8998665114552489, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
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
gate r_5074428624(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.6703391990094665, 0.785276971846121, -0.785276971846121) _gate_q_0;
}
gate rxx_5074432080(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.941517506030788) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5074431984(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.9764823479337483) _gate_q_0;
  u1(0.057571486991439436) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8320427102908103, 0, -3.9764823479337483) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8320427102908103, 3.918910860942309, 0) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5074432512(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.278074036156992) _gate_q_0;
  u1(1.8600208130787224) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.6267034389468678, 0, -4.278074036156992) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.6267034389468678, 2.4180532230782696, 0) _gate_q_1;
}
gate rxx_5074432416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.305859016189215) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5074432368(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.181830736244618) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5074432272(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4924217126400174) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5074432464(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1486637083439841, 2.47618088358137, -2.47618088358137) _gate_q_0;
}
gate cu3_5074432800(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.6168462759750084) _gate_q_0;
  u1(-0.6198507651795144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.3111947106094055, 0, -3.6168462759750084) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.3111947106094055, 4.236697041154523, 0) _gate_q_1;
}
gate cu3_5074432752(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.076709926910101) _gate_q_0;
  u1(-0.43879371745847884) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.3491395294458022, 0, -5.076709926910101) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.3491395294458022, 5.51550364436858, 0) _gate_q_1;
}
gate xx_minus_yy_5074426944(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.38031932996843) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2396014200372316) _gate_q_0;
  ry(-1.2396014200372316) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.38031932996843) _gate_q_1;
}
gate cu1_5074433424(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.792242785685807) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.792242785685807) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.792242785685807) _gate_q_1;
}
gate xx_minus_yy_5074433712(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.2424492005851224) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6301054418450955) _gate_q_0;
  ry(-2.6301054418450955) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.2424492005851224) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  tdg _gate_q_9;
  y _gate_q_5;
  crz(4.789599977363196) _gate_q_6, _gate_q_11;
  csdg _gate_q_4, _gate_q_0;
  rzx_5074428096(0.43617878335937305) _gate_q_2, _gate_q_1;
  xx_plus_yy_5074428288(4.6812415195150106, 1.5504041503316122) _gate_q_3, _gate_q_10;
  z _gate_q_7;
  t _gate_q_8;
  xx_plus_yy_5074428144(5.0430975637409166, 2.0572096909380733) _gate_q_6, _gate_q_10;
  cz _gate_q_0, _gate_q_2;
  y _gate_q_9;
  swap _gate_q_1, _gate_q_8;
  csdg _gate_q_5, _gate_q_7;
  cu1_5074428240(4.326219208614805) _gate_q_4, _gate_q_3;
  u2(4.141121414362947, 5.346882682571345) _gate_q_11;
  csx _gate_q_3, _gate_q_1;
  s _gate_q_0;
  ryy_5074428336(2.9681627824597547) _gate_q_8, _gate_q_2;
  y _gate_q_9;
  cry(6.082923860376417) _gate_q_5, _gate_q_10;
  z _gate_q_7;
  cu3_5074428576(3.07200267433406, 1.8998665114552489, 0.16520444734629489) _gate_q_6, _gate_q_4;
  z _gate_q_11;
  sdg _gate_q_11;
  id _gate_q_2;
  crx(3.126294350199621) _gate_q_9, _gate_q_10;
  iswap _gate_q_1, _gate_q_6;
  h _gate_q_5;
  ecr _gate_q_8, _gate_q_7;
  u1(3.2869695113364665) _gate_q_4;
  r_5074428624(3.6703391990094665, 2.3560732986410176) _gate_q_3;
  p(2.5337324393205907) _gate_q_0;
  rxx_5074432080(4.941517506030788) _gate_q_8, _gate_q_0;
  cu3_5074431984(1.6640854205816207, 3.918910860942309, 4.034053834925188) _gate_q_7, _gate_q_2;
  cs _gate_q_3, _gate_q_6;
  y _gate_q_5;
  cry(0.83333699533638) _gate_q_9, _gate_q_4;
  cu3_5074432512(5.2534068778937355, 2.4180532230782696, 6.138094849235714) _gate_q_1, _gate_q_10;
  h _gate_q_11;
  rxx_5074432416(5.305859016189215) _gate_q_11, _gate_q_3;
  z _gate_q_2;
  s _gate_q_4;
  csx _gate_q_1, _gate_q_6;
  rzz_5074432368(5.181830736244618) _gate_q_9, _gate_q_10;
  rzx_5074432272(2.4924217126400174) _gate_q_8, _gate_q_0;
  csdg _gate_q_7, _gate_q_5;
  p(3.1055715976985083) _gate_q_1;
  ecr _gate_q_3, _gate_q_5;
  csx _gate_q_0, _gate_q_7;
  rx(4.6153978099107205) _gate_q_9;
  u2(1.5503139825134078, 0.2278065334473442) _gate_q_11;
  rz(1.543744420900397) _gate_q_8;
  r_5074432464(1.1486637083439841, 4.046977210376267) _gate_q_10;
  z _gate_q_4;
  csx _gate_q_6, _gate_q_2;
  cu3_5074432800(4.622389421218811, 4.236697041154523, 2.996995510795494) _gate_q_4, _gate_q_8;
  cu3_5074432752(0.6982790588916044, 5.51550364436858, 4.637916209451622) _gate_q_0, _gate_q_10;
  xx_minus_yy_5074426944(2.4792028400744632, 2.38031932996843) _gate_q_2, _gate_q_3;
  rz(4.681101879658888) _gate_q_1;
  u3(2.4255600659049237, 5.321220972668509, 4.0685013009870845) _gate_q_6;
  cu(2.9219956297483805, 2.640342410894037, 2.459135995095286, 0.9634826457595566) _gate_q_9, _gate_q_7;
  swap _gate_q_5, _gate_q_11;
  cu(2.8326532462158576, 2.5648241681250687, 5.271596731084451, 4.539062339388348) _gate_q_11, _gate_q_8;
  u1(1.1444263623941906) _gate_q_3;
  cu1_5074433424(5.584485571371614) _gate_q_10, _gate_q_2;
  t _gate_q_1;
  iswap _gate_q_7, _gate_q_0;
  crx(5.790913301069874) _gate_q_9, _gate_q_4;
  cry(6.269856681107282) _gate_q_6, _gate_q_5;
  U(2.9374454033927875, 6.253810553088567, 3.6821604250847195) _gate_q_1;
  ch _gate_q_9, _gate_q_4;
  rx(4.482002340493263) _gate_q_5;
  rz(3.7962330351946787) _gate_q_6;
  x _gate_q_0;
  xx_minus_yy_5074433712(5.260210883690191, 1.2424492005851224) _gate_q_2, _gate_q_10;
  cry(1.9618462304822575) _gate_q_11, _gate_q_7;
  s _gate_q_3;
  h _gate_q_8;
}
gate r_5070901024(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.2588017920616585, 3.733651736050283, -3.733651736050283) _gate_q_0;
}
gate rzz_5070909664(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.140708675816455) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5074427904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.907532275195627) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4102285872149458) _gate_q_0;
  ry(-1.4102285872149458) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.907532275195627) _gate_q_1;
}
gate rzz_5074125312(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.049416346465665) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074125360(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.2147817413556836, -1.244208073074839, 1.244208073074839) _gate_q_0;
}
gate rzx_5074125408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.421921566142649) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5074125504(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.8063687727344315) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074125696(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.21741209454147697, -1.3603675154366426, 1.3603675154366426) _gate_q_0;
}
gate xx_minus_yy_5074125744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.20784766283735) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.745371866859051) _gate_q_0;
  ry(-2.745371866859051) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.20784766283735) _gate_q_1;
}
gate xx_plus_yy_5074125792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.150352640640682) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9290452367306931) _gate_q_1;
  ry(-0.9290452367306931) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.150352640640682) _gate_q_0;
}
gate xx_minus_yy_5074125840(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.3094423397591397) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5044764018456909) _gate_q_0;
  ry(-1.5044764018456909) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.3094423397591397) _gate_q_1;
}
gate rzx_5074125936(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.209244022657852) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5074126032(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.14137320123096667) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.14137320123096667) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.14137320123096667) _gate_q_1;
}
gate r_5074126224(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8112826684068951, -0.45513291177613846, 0.45513291177613846) _gate_q_0;
}
gate xx_plus_yy_5074126272(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.498056298718994) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4332899457776496) _gate_q_1;
  ry(-1.4332899457776496) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.498056298718994) _gate_q_0;
}
gate xx_minus_yy_5074126368(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.20086194796412404) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4316496363622093) _gate_q_0;
  ry(-1.4316496363622093) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.20086194796412404) _gate_q_1;
}
gate rzz_5074126416(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.923399518435922) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074126560(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.678670252340286, 2.8531494784843456, -2.8531494784843456) _gate_q_0;
}
gate rxx_5074126608(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8358994201313268) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5074126656(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.97101499016251) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7562835441417737) _gate_q_1;
  ry(-1.7562835441417737) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.97101499016251) _gate_q_0;
}
gate rxx_5074126800(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.038402071742536) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  iswap _gate_q_0, _gate_q_8;
  y _gate_q_11;
  r_5070901024(2.2588017920616585, 5.30444806284518) _gate_q_3;
  rzz_5070909664(2.140708675816455) _gate_q_4, _gate_q_5;
  ry(0.7960356018146115) _gate_q_9;
  cry(0.44129441847501205) _gate_q_2, _gate_q_10;
  cu(4.549124605388065, 3.318644105359926, 4.904340556019817, 0.2557093816555726) _gate_q_1, _gate_q_6;
  U(3.9764192559130276, 0.9021591552677534, 2.746558607941011) _gate_q_7;
  csx _gate_q_0, _gate_q_6;
  cp(5.152249014540061) _gate_q_10, _gate_q_3;
  ch _gate_q_5, _gate_q_11;
  U(5.558399083223984, 4.180868713524981, 4.299070332713832) _gate_q_7;
  xx_minus_yy_5074427904(2.8204571744298916, 5.907532275195627) _gate_q_1, _gate_q_4;
  id _gate_q_9;
  rz(5.484621765138358) _gate_q_8;
  p(5.882824892943404) _gate_q_2;
  crz(0.5627433603225283) _gate_q_11, _gate_q_10;
  rzz_5074125312(4.049416346465665) _gate_q_8, _gate_q_4;
  r_5074125360(1.2147817413556836, 0.32658825372005756) _gate_q_2;
  t _gate_q_1;
  rzx_5074125408(4.421921566142649) _gate_q_6, _gate_q_9;
  swap _gate_q_3, _gate_q_0;
  s _gate_q_5;
  u3(5.766974910835364, 4.575830842499148, 1.7345558154624698) _gate_q_7;
  x _gate_q_1;
  sx _gate_q_5;
  sxdg _gate_q_9;
  sdg _gate_q_10;
  rzz_5074125504(2.8063687727344315) _gate_q_11, _gate_q_7;
  crx(2.944784187839547) _gate_q_2, _gate_q_4;
  u3(3.0622745213053815, 1.3486334923428567, 5.924854961525587) _gate_q_3;
  s _gate_q_8;
  y _gate_q_0;
  r_5074125696(0.21741209454147697, 0.21042881135825406) _gate_q_6;
  h _gate_q_2;
  sdg _gate_q_6;
  sx _gate_q_0;
  xx_minus_yy_5074125744(5.490743733718102, 6.20784766283735) _gate_q_1, _gate_q_7;
  y _gate_q_4;
  xx_plus_yy_5074125792(1.8580904734613861, 5.150352640640682) _gate_q_9, _gate_q_3;
  xx_minus_yy_5074125840(3.0089528036913817, 1.3094423397591397) _gate_q_8, _gate_q_11;
  swap _gate_q_10, _gate_q_5;
  rz(1.4898095281424677) _gate_q_4;
  cx _gate_q_2, _gate_q_10;
  rzx_5074125936(6.209244022657852) _gate_q_3, _gate_q_8;
  cy _gate_q_5, _gate_q_6;
  sxdg _gate_q_11;
  cz _gate_q_9, _gate_q_1;
  cy _gate_q_7, _gate_q_0;
  p(0.7867870014148577) _gate_q_1;
  cx _gate_q_4, _gate_q_7;
  cu1_5074126032(0.28274640246193333) _gate_q_6, _gate_q_10;
  cry(3.750944865011447) _gate_q_0, _gate_q_5;
  r_5074126224(0.8112826684068951, 1.115663415018758) _gate_q_3;
  cz _gate_q_8, _gate_q_2;
  csx _gate_q_9, _gate_q_11;
  xx_plus_yy_5074126272(2.866579891555299, 3.498056298718994) _gate_q_3, _gate_q_4;
  h _gate_q_5;
  u2(5.375521715110025, 3.725703922479141) _gate_q_0;
  ch _gate_q_11, _gate_q_2;
  xx_minus_yy_5074126368(2.8632992727244186, 0.20086194796412404) _gate_q_6, _gate_q_7;
  x _gate_q_9;
  rzz_5074126416(2.923399518435922) _gate_q_1, _gate_q_8;
  u1(1.4706231249580322) _gate_q_10;
  rx(1.0670651458281952) _gate_q_10;
  r_5074126560(3.678670252340286, 4.423945805279242) _gate_q_1;
  rxx_5074126608(1.8358994201313268) _gate_q_5, _gate_q_3;
  h _gate_q_11;
  xx_plus_yy_5074126656(3.5125670882835474, 4.97101499016251) _gate_q_4, _gate_q_2;
  t _gate_q_6;
  u3(3.400204085793108, 2.7272291337415395, 3.8867264887444213) _gate_q_7;
  swap _gate_q_8, _gate_q_9;
  id _gate_q_0;
  u2(2.6395458029862424, 1.3450269841557367) _gate_q_0;
  iswap _gate_q_6, _gate_q_4;
  rxx_5074126800(2.038402071742536) _gate_q_3, _gate_q_10;
  cp(1.110895997178355) _gate_q_8, _gate_q_5;
  s _gate_q_2;
  sx _gate_q_11;
  cy _gate_q_1, _gate_q_9;
  s _gate_q_7;
}