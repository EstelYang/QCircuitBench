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
gate cu1_5106577632(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5221073542134115) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5221073542134115) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5221073542134115) _gate_q_1;
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
gate xx_plus_yy_5106575952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.1365873617328575) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8408951532017076) _gate_q_1;
  ry(-0.8408951532017076) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.1365873617328575) _gate_q_0;
}
gate cu3_5106573072(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.8505153001405907) _gate_q_0;
  u1(0.9743561092587889) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5011748170412746, 0, -1.8505153001405907) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5011748170412746, 0.8761591908818018, 0) _gate_q_1;
}
gate rzz_5106576528(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6201782330832109) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5106577872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.413397467963866) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.480920563890388) _gate_q_1;
  ry(-2.480920563890388) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.413397467963866) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5106578352(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.608353010529782) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5106576672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1512521644116662) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5106576960(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.8640551106121914, 3.113954372816795, -3.113954372816795) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_plus_yy_5106568416(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.9536414800065953) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.4635671207277715) _gate_q_1;
  ry(-0.4635671207277715) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.9536414800065953) _gate_q_0;
}
gate xx_minus_yy_5106575520(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.935868255322397) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.38091011498589) _gate_q_0;
  ry(-1.38091011498589) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.935868255322397) _gate_q_1;
}
gate r_5106569760(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.459589869422553, 3.8046308238672344, -3.8046308238672344) _gate_q_0;
}
gate r_5106566736(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.733517883697937, 1.307436831073728, -1.307436831073728) _gate_q_0;
}
gate xx_plus_yy_5106574128(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.7211042019107354) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.0137611829457733) _gate_q_1;
  ry(-1.0137611829457733) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.7211042019107354) _gate_q_0;
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
gate xx_minus_yy_5106575664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.8428968544327313) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3478015420321117) _gate_q_0;
  ry(-1.3478015420321117) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.8428968544327313) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzz_5106567696(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.419165661062005) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5106572496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.1120539204316255) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5106567744(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.19636531040464672, 0.44981076960218047, -0.44981076960218047) _gate_q_0;
}
gate rxx_5106570576(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.201370292084072) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5106578640(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.232204721062231) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  ecr _gate_q_14, _gate_q_10;
  s _gate_q_7;
  cu1_5106577632(1.044214708426823) _gate_q_2, _gate_q_3;
  ry(1.0877733619344165) _gate_q_11;
  x _gate_q_12;
  crx(5.345733929699046) _gate_q_5, _gate_q_4;
  iswap _gate_q_1, _gate_q_9;
  xx_plus_yy_5106575952(1.6817903064034152, 5.1365873617328575) _gate_q_6, _gate_q_8;
  y _gate_q_0;
  sxdg _gate_q_13;
  swap _gate_q_2, _gate_q_10;
  cu3_5106573072(3.0023496340825493, 0.8761591908818018, 2.8248714093993796) _gate_q_14, _gate_q_4;
  h _gate_q_6;
  rzz_5106576528(0.6201782330832109) _gate_q_9, _gate_q_7;
  crx(3.140819532609499) _gate_q_13, _gate_q_5;
  xx_plus_yy_5106577872(4.961841127780776, 4.413397467963866) _gate_q_12, _gate_q_0;
  h _gate_q_11;
  dcx _gate_q_3, _gate_q_8;
  s _gate_q_1;
  sx _gate_q_9;
  z _gate_q_7;
  tdg _gate_q_2;
  rzz_5106578352(1.608353010529782) _gate_q_12, _gate_q_5;
  crz(4.643319205319365) _gate_q_10, _gate_q_14;
  cry(1.299128783527322) _gate_q_8, _gate_q_11;
  dcx _gate_q_0, _gate_q_6;
  rxx_5106576672(1.1512521644116662) _gate_q_3, _gate_q_1;
  swap _gate_q_13, _gate_q_4;
  cy _gate_q_1, _gate_q_13;
  r_5106576960(3.8640551106121914, 4.684750699611691) _gate_q_4;
  t _gate_q_10;
  u2(3.865023208604807, 5.107368030251923) _gate_q_0;
  csdg _gate_q_8, _gate_q_2;
  xx_plus_yy_5106568416(0.927134241455543, 1.9536414800065953) _gate_q_6, _gate_q_7;
  crx(3.7529385410823193) _gate_q_3, _gate_q_12;
  xx_minus_yy_5106575520(2.76182022997178, 1.935868255322397) _gate_q_5, _gate_q_9;
  z _gate_q_14;
  id _gate_q_11;
  iswap _gate_q_14, _gate_q_7;
  h _gate_q_9;
  crx(4.705277546480834) _gate_q_1, _gate_q_10;
  u2(0.15259600783946003, 3.0169085672824667) _gate_q_6;
  cry(5.888370373749155) _gate_q_5, _gate_q_12;
  cz _gate_q_13, _gate_q_8;
  u1(3.19589828953751) _gate_q_4;
  u1(4.1498928232224515) _gate_q_0;
  z _gate_q_2;
  sxdg _gate_q_3;
  r_5106569760(2.459589869422553, 5.375427150662131) _gate_q_11;
  ch _gate_q_14, _gate_q_2;
  rx(3.548610066096917) _gate_q_6;
  rx(4.8671199890300345) _gate_q_9;
  u1(5.354541844293507) _gate_q_3;
  cx _gate_q_0, _gate_q_5;
  ry(4.518442574558727) _gate_q_12;
  r_5106566736(4.733517883697937, 2.8782331578686247) _gate_q_8;
  xx_plus_yy_5106574128(2.0275223658915467, 1.7211042019107354) _gate_q_7, _gate_q_4;
  sx _gate_q_13;
  id _gate_q_11;
  h _gate_q_1;
  rz(4.752650748367378) _gate_q_10;
  crx(0.6943885459411817) _gate_q_8, _gate_q_11;
  u1(5.2549026095635405) _gate_q_12;
  csdg _gate_q_5, _gate_q_0;
  swap _gate_q_10, _gate_q_7;
  crx(5.175546015816026) _gate_q_14, _gate_q_3;
  sdg _gate_q_2;
  cry(3.242152575709862) _gate_q_4, _gate_q_13;
  s _gate_q_9;
  u3(2.0326729262502345, 5.054075038640557, 4.833031416633938) _gate_q_6;
  rz(0.8063349650339113) _gate_q_1;
  ry(3.9658279665723706) _gate_q_5;
  csx _gate_q_8, _gate_q_3;
  swap _gate_q_10, _gate_q_1;
  cy _gate_q_2, _gate_q_7;
  csx _gate_q_9, _gate_q_6;
  xx_minus_yy_5106575664(2.6956030840642233, 3.8428968544327313) _gate_q_11, _gate_q_14;
  u3(4.207347972103298, 0.08273552774685186, 4.678710913139361) _gate_q_13;
  cs _gate_q_0, _gate_q_12;
  u3(5.549435292394471, 5.182580469714654, 5.544748259903898) _gate_q_4;
  t _gate_q_9;
  sx _gate_q_6;
  cz _gate_q_14, _gate_q_8;
  id _gate_q_3;
  rzz_5106567696(4.419165661062005) _gate_q_10, _gate_q_11;
  rzx_5106572496(4.1120539204316255) _gate_q_12, _gate_q_13;
  sx _gate_q_4;
  u2(4.858857588043777, 4.0708429644683815) _gate_q_2;
  swap _gate_q_0, _gate_q_7;
  s _gate_q_5;
  r_5106567744(0.19636531040464672, 2.020607096397077) _gate_q_1;
  rxx_5106570576(4.201370292084072) _gate_q_8, _gate_q_5;
  y _gate_q_6;
  ryy_5106578640(6.232204721062231) _gate_q_2, _gate_q_9;
  ch _gate_q_10, _gate_q_14;
  u1(6.071774643016619) _gate_q_1;
  cp(1.3640187489858955) _gate_q_3, _gate_q_12;
  cx _gate_q_13, _gate_q_7;
  cs _gate_q_4, _gate_q_11;
  h _gate_q_0;
}
gate cu1_5107713664(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.7823469067722069) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.7823469067722069) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.7823469067722069) _gate_q_1;
}
gate cu3_5107715968(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.49153339584013) _gate_q_0;
  u1(2.2773298153607975) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.6658176854754467, 0, -2.49153339584013) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.6658176854754467, 0.21420358047933288, 0) _gate_q_1;
}
gate r_5107722400(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.014889961047944, 1.7977277966129015, -1.7977277966129015) _gate_q_0;
}
gate r_5107725616(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.3615949201076352, 3.322649139830748, -3.322649139830748) _gate_q_0;
}
gate cu1_5107712944(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.36229066871299703) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.36229066871299703) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.36229066871299703) _gate_q_1;
}
gate ryy_5107719328(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.12005158819672533) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5107715440(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.462967667938242) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7688102546337092) _gate_q_1;
  ry(-1.7688102546337092) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.462967667938242) _gate_q_0;
}
gate cu3_5107724560(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.45916257519637) _gate_q_0;
  u1(0.29976784339941087) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9603735502639084, 0, -2.45916257519637) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9603735502639084, 2.1593947317969593, 0) _gate_q_1;
}
gate xx_plus_yy_5107719616(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.433974958741456) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9707089786018365) _gate_q_1;
  ry(-0.9707089786018365) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.433974958741456) _gate_q_0;
}
gate cu1_5107717600(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.975039276348883) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.975039276348883) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.975039276348883) _gate_q_1;
}
gate rzz_5107713568(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.2050360433942835) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5107714336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.0432681251711555) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5107716832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.949998153248905) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  z _gate_q_3;
  crz(5.853514607054338) _gate_q_6, _gate_q_7;
  ecr _gate_q_10, _gate_q_12;
  sdg _gate_q_13;
  rz(5.561780592073435) _gate_q_14;
  p(3.7779135351904065) _gate_q_2;
  cz _gate_q_9, _gate_q_4;
  crx(2.9359793005582007) _gate_q_1, _gate_q_0;
  sxdg _gate_q_11;
  id _gate_q_5;
  sx _gate_q_8;
  cx _gate_q_1, _gate_q_13;
  sdg _gate_q_6;
  ch _gate_q_3, _gate_q_0;
  sdg _gate_q_11;
  id _gate_q_4;
  U(3.220061288642537, 5.260249933520347, 0.8056870297827894) _gate_q_14;
  ry(6.096272064722331) _gate_q_12;
  ch _gate_q_10, _gate_q_5;
  ecr _gate_q_9, _gate_q_7;
  csx _gate_q_8, _gate_q_2;
  csx _gate_q_6, _gate_q_0;
  rx(5.692802954151907) _gate_q_9;
  ecr _gate_q_1, _gate_q_4;
  u1(1.815326825206417) _gate_q_7;
  p(2.221279318273687) _gate_q_13;
  cp(3.5120406620279963) _gate_q_3, _gate_q_10;
  crz(3.5240726577313395) _gate_q_2, _gate_q_11;
  csx _gate_q_12, _gate_q_5;
  ch _gate_q_14, _gate_q_8;
  x _gate_q_6;
  h _gate_q_8;
  cs _gate_q_9, _gate_q_4;
  crz(0.45680604783291984) _gate_q_3, _gate_q_12;
  cu1_5107713664(3.5646938135444137) _gate_q_10, _gate_q_5;
  cu3_5107715968(5.3316353709508935, 0.21420358047933288, 4.7688632112009275) _gate_q_2, _gate_q_14;
  csdg _gate_q_13, _gate_q_0;
  r_5107722400(5.014889961047944, 3.368524123407798) _gate_q_1;
  crz(5.08490871833949) _gate_q_11, _gate_q_7;
  r_5107725616(0.3615949201076352, 4.893445466625645) _gate_q_12;
  z _gate_q_8;
  iswap _gate_q_0, _gate_q_5;
  cu1_5107712944(0.7245813374259941) _gate_q_3, _gate_q_10;
  sdg _gate_q_14;
  rz(5.469765158290776) _gate_q_2;
  id _gate_q_4;
  cp(1.2269259797482865) _gate_q_1, _gate_q_9;
  cp(4.330477011769091) _gate_q_11, _gate_q_6;
  rz(5.539650529719051) _gate_q_13;
  sdg _gate_q_7;
  dcx _gate_q_12, _gate_q_11;
  s _gate_q_1;
  tdg _gate_q_4;
  cz _gate_q_10, _gate_q_0;
  ryy_5107719328(0.12005158819672533) _gate_q_2, _gate_q_8;
  csx _gate_q_9, _gate_q_5;
  u3(3.4902746165342835, 2.015423399897949, 1.7714074064041472) _gate_q_6;
  ch _gate_q_13, _gate_q_14;
  cy _gate_q_7, _gate_q_3;
  U(0.22075375647142084, 4.002122237776802, 6.116805406102291) _gate_q_14;
  cy _gate_q_2, _gate_q_1;
  cp(3.80386772524605) _gate_q_0, _gate_q_3;
  sdg _gate_q_7;
  crz(1.7123455719578435) _gate_q_13, _gate_q_4;
  dcx _gate_q_8, _gate_q_5;
  h _gate_q_9;
  crz(4.456532318967478) _gate_q_11, _gate_q_12;
  tdg _gate_q_6;
  rz(1.1733001048159255) _gate_q_10;
  crx(1.5879107182068923) _gate_q_3, _gate_q_14;
  xx_plus_yy_5107715440(3.5376205092674184, 4.462967667938242) _gate_q_13, _gate_q_0;
  u3(4.3494253146124695, 2.699329261497218, 3.2489963796362544) _gate_q_8;
  s _gate_q_2;
  cu3_5107724560(1.9207471005278167, 2.1593947317969593, 2.758930418595781) _gate_q_1, _gate_q_9;
  ry(1.0864200709053535) _gate_q_12;
  y _gate_q_10;
  xx_plus_yy_5107719616(1.941417957203673, 4.433974958741456) _gate_q_6, _gate_q_5;
  sx _gate_q_11;
  t _gate_q_7;
  tdg _gate_q_4;
  cu1_5107717600(5.950078552697766) _gate_q_9, _gate_q_10;
  ecr _gate_q_7, _gate_q_1;
  crz(2.7472401026787354) _gate_q_12, _gate_q_5;
  U(2.302439060865572, 0.622232468252727, 0.43656330956162887) _gate_q_13;
  rz(3.879592055087132) _gate_q_8;
  crx(5.234167830880397) _gate_q_0, _gate_q_3;
  sdg _gate_q_6;
  rzz_5107713568(4.2050360433942835) _gate_q_11, _gate_q_2;
  sx _gate_q_4;
  u2(0.24792308792287077, 3.903789149519141) _gate_q_14;
  ecr _gate_q_5, _gate_q_11;
  rxx_5107714336(6.0432681251711555) _gate_q_10, _gate_q_9;
  rxx_5107716832(3.949998153248905) _gate_q_6, _gate_q_8;
  rx(1.8020805990087414) _gate_q_7;
  ch _gate_q_13, _gate_q_12;
  sdg _gate_q_1;
  swap _gate_q_0, _gate_q_3;
  tdg _gate_q_2;
  crz(2.643092972292261) _gate_q_4, _gate_q_14;
}