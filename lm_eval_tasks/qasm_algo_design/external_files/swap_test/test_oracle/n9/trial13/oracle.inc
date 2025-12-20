gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072207552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.0610623071987573) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9769753783549451) _gate_q_1;
  ry(-0.9769753783549451) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.0610623071987573) _gate_q_0;
}
gate r_5072205536(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.7192645851582413, 0.40989601398882636, -0.40989601398882636) _gate_q_0;
}
gate ryy_5072194352(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2102205067240277) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5072198912(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2087242788628725) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2087242788628725) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2087242788628725) _gate_q_1;
}
gate cu3_5072202320(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.203210852341372) _gate_q_0;
  u1(1.8403501033009855) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9777679772872996, 0, -4.203210852341372) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9777679772872996, 2.3628607490403866, 0) _gate_q_1;
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
gate ryy_5072201216(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.3146227165348074) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5072203568(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.32625981485695) _gate_q_0;
  u1(0.8310344355883548) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.0424068443598205, 0, -3.32625981485695) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.0424068443598205, 2.4952253792685952, 0) _gate_q_1;
}
gate xx_minus_yy_5072198192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.009887304674305) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9040036655315804) _gate_q_0;
  ry(-1.9040036655315804) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.009887304674305) _gate_q_1;
}
gate cu3_5072196320(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.715015552556962) _gate_q_0;
  u1(0.3961401992388407) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.2585537610146604, 0, -2.715015552556962) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.2585537610146604, 2.3188753533181212, 0) _gate_q_1;
}
gate rzz_5072207120(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.9262762889055844) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5072193728(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.114513418220563) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.114513418220563) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.114513418220563) _gate_q_1;
}
gate cu1_5072194496(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2470630439789991) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2470630439789991) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2470630439789991) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu1_5072205632(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.88143968206662) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.88143968206662) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.88143968206662) _gate_q_1;
}
gate ryy_5072202128(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.717156118002963) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  xx_plus_yy_5072207552(1.9539507567098902, 2.0610623071987573) _gate_q_1, _gate_q_4;
  y _gate_q_6;
  r_5072205536(3.7192645851582413, 1.980692340783723) _gate_q_8;
  ryy_5072194352(2.2102205067240277) _gate_q_3, _gate_q_0;
  cu1_5072198912(2.417448557725745) _gate_q_2, _gate_q_7;
  u2(4.221903204511496, 0.9915744648686381) _gate_q_5;
  cu3_5072202320(3.955535954574599, 2.3628607490403866, 6.0435609556423575) _gate_q_3, _gate_q_8;
  u2(5.464328249658142, 5.355335498356924) _gate_q_4;
  ecr _gate_q_5, _gate_q_7;
  u3(0.8947712533110178, 5.888340346230602, 0.6276917428699862) _gate_q_0;
  ryy_5072201216(5.3146227165348074) _gate_q_6, _gate_q_2;
  sx _gate_q_1;
  t _gate_q_1;
  dcx _gate_q_0, _gate_q_8;
  sdg _gate_q_6;
  cu3_5072203568(4.084813688719641, 2.4952253792685952, 4.157294250445305) _gate_q_2, _gate_q_3;
  xx_minus_yy_5072198192(3.808007331063161, 6.009887304674305) _gate_q_7, _gate_q_4;
  tdg _gate_q_5;
  x _gate_q_3;
  cu3_5072196320(0.5171075220293208, 2.3188753533181212, 3.1111557517958026) _gate_q_6, _gate_q_2;
  t _gate_q_8;
  rzz_5072207120(2.9262762889055844) _gate_q_5, _gate_q_4;
  crz(4.116185299398967) _gate_q_7, _gate_q_1;
  rz(1.6679172546719327) _gate_q_0;
  ecr _gate_q_2, _gate_q_8;
  dcx _gate_q_6, _gate_q_1;
  cu1_5072193728(4.229026836441126) _gate_q_7, _gate_q_4;
  cu1_5072194496(2.4941260879579983) _gate_q_5, _gate_q_3;
  h _gate_q_0;
  y _gate_q_3;
  cz _gate_q_6, _gate_q_0;
  ecr _gate_q_8, _gate_q_1;
  csdg _gate_q_5, _gate_q_2;
  cu1_5072205632(1.76287936413324) _gate_q_4, _gate_q_7;
  tdg _gate_q_4;
  p(1.5888137506869433) _gate_q_5;
  cry(2.7654636348606703) _gate_q_8, _gate_q_0;
  u1(1.1492243669760323) _gate_q_6;
  u2(5.670405882235942, 4.729955486580377) _gate_q_3;
  x _gate_q_1;
  y _gate_q_7;
  sxdg _gate_q_2;
  dcx _gate_q_1, _gate_q_5;
  dcx _gate_q_0, _gate_q_6;
  U(3.488034999461119, 3.5521794969167697, 5.073681215460888) _gate_q_7;
  U(1.643569337058229, 1.3192301312053865, 5.516317678779508) _gate_q_4;
  ryy_5072202128(4.717156118002963) _gate_q_3, _gate_q_2;
  tdg _gate_q_8;
  cz _gate_q_3, _gate_q_6;
  u1(5.219658895108971) _gate_q_8;
  rz(4.121987247937178) _gate_q_4;
  cz _gate_q_1, _gate_q_7;
  U(4.873009569361271, 3.9356334418492183, 5.4508979714948484) _gate_q_0;
  u1(3.103746660197985) _gate_q_5;
  rx(5.210377764620754) _gate_q_2;
}
gate xx_plus_yy_5072203472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.038625152710485) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.197756474914262) _gate_q_1;
  ry(-2.197756474914262) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.038625152710485) _gate_q_0;
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
gate xx_plus_yy_5072207744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.027514763310379) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5088413607249629) _gate_q_1;
  ry(-1.5088413607249629) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.027514763310379) _gate_q_0;
}
gate cu3_5072194736(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.6176368487192576) _gate_q_0;
  u1(-1.1711469154436844) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.871849932577141, 0, -3.6176368487192576) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.871849932577141, 4.788783764162942, 0) _gate_q_1;
}
gate rzz_5072204768(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.4404486129441838) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072200592(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.398526430248261, 2.4759859003363447, -2.4759859003363447) _gate_q_0;
}
gate rxx_5072195888(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.090475626196291) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5072204384(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.1598372365532157) _gate_q_0;
  u1(1.5371643355576057) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.01432998524529244, 0, -2.1598372365532157) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.01432998524529244, 0.6226729009956098, 0) _gate_q_1;
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
gate rzx_5072194208(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4961557886484101) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  rz(1.5215505863665213) _gate_q_3;
  rz(3.7866895785511003) _gate_q_4;
  cx _gate_q_0, _gate_q_6;
  xx_plus_yy_5072203472(4.395512949828524, 6.038625152710485) _gate_q_7, _gate_q_5;
  x _gate_q_1;
  cs _gate_q_2, _gate_q_8;
  s _gate_q_3;
  ecr _gate_q_8, _gate_q_7;
  ch _gate_q_2, _gate_q_1;
  rx(2.2543916523071403) _gate_q_0;
  ch _gate_q_5, _gate_q_4;
  u1(1.1503663840891285) _gate_q_6;
  p(3.2621253767128797) _gate_q_8;
  iswap _gate_q_1, _gate_q_2;
  xx_plus_yy_5072207744(3.0176827214499258, 4.027514763310379) _gate_q_5, _gate_q_4;
  sx _gate_q_3;
  ecr _gate_q_0, _gate_q_7;
  U(2.5002421733620115, 5.145084350244519, 1.0790160701267288) _gate_q_6;
  cx _gate_q_1, _gate_q_7;
  cp(0.5210341661461417) _gate_q_0, _gate_q_3;
  t _gate_q_5;
  swap _gate_q_2, _gate_q_6;
  U(2.4077379953698244, 1.9997416964805272, 3.874256281093481) _gate_q_8;
  x _gate_q_4;
  ch _gate_q_6, _gate_q_5;
  sxdg _gate_q_7;
  cs _gate_q_8, _gate_q_4;
  cp(1.6140469091399159) _gate_q_1, _gate_q_0;
  s _gate_q_2;
  rz(0.3264621576058807) _gate_q_3;
  crz(1.9084325623434033) _gate_q_1, _gate_q_7;
  cu3_5072194736(3.743699865154282, 4.788783764162942, 2.4464899332755734) _gate_q_8, _gate_q_3;
  rz(1.1968873146494263) _gate_q_2;
  cy _gate_q_0, _gate_q_5;
  rzz_5072204768(1.4404486129441838) _gate_q_4, _gate_q_6;
  r_5072200592(4.398526430248261, 4.046782227131241) _gate_q_8;
  U(1.3569802213721236, 1.6783133292847927, 2.9140312335139122) _gate_q_6;
  rz(2.4687903882133457) _gate_q_0;
  rxx_5072195888(5.090475626196291) _gate_q_7, _gate_q_1;
  cu3_5072204384(0.02865997049058488, 0.6226729009956098, 3.697001572110821) _gate_q_2, _gate_q_5;
  rx(1.6846517090424398) _gate_q_3;
  id _gate_q_4;
  cu(5.244012158814066, 6.032028472847906, 1.7274503244671624, 5.612090339003348) _gate_q_0, _gate_q_7;
  z _gate_q_1;
  rx(2.9427851706464545) _gate_q_2;
  csdg _gate_q_6, _gate_q_8;
  x _gate_q_3;
  csx _gate_q_5, _gate_q_4;
  rx(1.2077047771672247) _gate_q_3;
  sx _gate_q_2;
  rzx_5072194208(0.4961557886484101) _gate_q_8, _gate_q_4;
  cz _gate_q_7, _gate_q_6;
  sx _gate_q_0;
  crz(4.881266884764306) _gate_q_5, _gate_q_1;
}