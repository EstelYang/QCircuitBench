gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5070903520(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.0063439373764522) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4295043931499272) _gate_q_0;
  ry(-1.4295043931499272) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.0063439373764522) _gate_q_1;
}
gate ryy_5070908656(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.949152692485017) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5070905728(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7062968699266797) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7062968699266797) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7062968699266797) _gate_q_1;
}
gate xx_minus_yy_5070907120(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.927366723756186) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3427742196664456) _gate_q_0;
  ry(-1.3427742196664456) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.927366723756186) _gate_q_1;
}
gate r_5070909424(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.952043807885681, -1.2006750275674825, 1.2006750275674825) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_minus_yy_5070898144(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.455099574822286) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6812393608114338) _gate_q_0;
  ry(-2.6812393608114338) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.455099574822286) _gate_q_1;
}
gate r_5070908560(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.499464709282528, -0.4323080571552831, 0.4323080571552831) _gate_q_0;
}
gate xx_plus_yy_5070906688(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.1962197333254696) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.999389766158801) _gate_q_1;
  ry(-1.999389766158801) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.1962197333254696) _gate_q_0;
}
gate r_5070904912(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.273289383192759, 3.293460669423002, -3.293460669423002) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_minus_yy_5070901264(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.236716037469691) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.922516645818239) _gate_q_0;
  ry(-1.922516645818239) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.236716037469691) _gate_q_1;
}
gate ryy_5070905536(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7394901024668156) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5070897952(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.22711848987875227, -1.0542444129755397, 1.0542444129755397) _gate_q_0;
}
gate xx_plus_yy_5070904336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.6741388157793113) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4165988289446805) _gate_q_1;
  ry(-1.4165988289446805) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.6741388157793113) _gate_q_0;
}
gate cu1_5070898576(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.3715522152945867) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.3715522152945867) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.3715522152945867) _gate_q_1;
}
gate r_5070897568(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.4759178994061062, 3.723262331832238, -3.723262331832238) _gate_q_0;
}
gate rxx_5070908752(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0330488335838566) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5070906304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.5894548197489455) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.003404868807195876) _gate_q_0;
  ry(-0.003404868807195876) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.5894548197489455) _gate_q_1;
}
gate cu3_5070901312(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.4178820577609543) _gate_q_0;
  u1(2.3641412969493563) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.4909242403868452, 0, -3.4178820577609543) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.4909242403868452, 1.053740760811598, 0) _gate_q_1;
}
gate xx_minus_yy_5070905152(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.225773537880709) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.531680721821866) _gate_q_0;
  ry(-1.531680721821866) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.225773537880709) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  h _gate_q_8;
  t _gate_q_5;
  p(4.679783116716099) _gate_q_12;
  xx_minus_yy_5070903520(2.8590087862998543, 2.0063439373764522) _gate_q_4, _gate_q_2;
  sdg _gate_q_3;
  t _gate_q_1;
  rx(2.7213680927940764) _gate_q_7;
  cry(1.9335129624724956) _gate_q_10, _gate_q_0;
  ch _gate_q_11, _gate_q_14;
  ryy_5070908656(3.949152692485017) _gate_q_9, _gate_q_6;
  tdg _gate_q_13;
  csx _gate_q_5, _gate_q_10;
  z _gate_q_14;
  y _gate_q_6;
  cry(0.7649660806632385) _gate_q_8, _gate_q_12;
  cz _gate_q_2, _gate_q_7;
  crx(2.456156131068493) _gate_q_11, _gate_q_0;
  u1(4.9518555322498194) _gate_q_3;
  csdg _gate_q_9, _gate_q_13;
  iswap _gate_q_1, _gate_q_4;
  ry(4.076845151669198) _gate_q_3;
  cu1_5070905728(1.4125937398533595) _gate_q_1, _gate_q_8;
  sx _gate_q_6;
  x _gate_q_9;
  crz(5.729841210551983) _gate_q_5, _gate_q_10;
  cy _gate_q_13, _gate_q_7;
  tdg _gate_q_2;
  h _gate_q_4;
  csx _gate_q_11, _gate_q_12;
  xx_minus_yy_5070907120(2.6855484393328912, 4.927366723756186) _gate_q_0, _gate_q_14;
  s _gate_q_8;
  r_5070909424(4.952043807885681, 0.3701212992274142) _gate_q_7;
  cu(0.4713915205045535, 6.056986304487954, 3.6405710789392, 4.010059048398118) _gate_q_0, _gate_q_13;
  cs _gate_q_2, _gate_q_12;
  id _gate_q_6;
  cry(5.452714534808464) _gate_q_11, _gate_q_3;
  xx_minus_yy_5070898144(5.3624787216228675, 5.455099574822286) _gate_q_1, _gate_q_14;
  iswap _gate_q_9, _gate_q_5;
  r_5070908560(5.499464709282528, 1.1384882696396135) _gate_q_4;
  u3(0.23101604096683587, 2.8779422474098326, 5.306890080532073) _gate_q_10;
  cx _gate_q_12, _gate_q_9;
  u2(5.909950626202971, 5.9748229108878315) _gate_q_8;
  cz _gate_q_4, _gate_q_13;
  xx_plus_yy_5070906688(3.998779532317602, 1.1962197333254696) _gate_q_11, _gate_q_0;
  ry(1.4704439083527117) _gate_q_2;
  r_5070904912(4.273289383192759, 4.8642569962178985) _gate_q_14;
  cy _gate_q_10, _gate_q_5;
  dcx _gate_q_1, _gate_q_6;
  iswap _gate_q_7, _gate_q_3;
  cz _gate_q_2, _gate_q_14;
  x _gate_q_13;
  tdg _gate_q_6;
  crz(1.9360063975961326) _gate_q_8, _gate_q_12;
  xx_minus_yy_5070901264(3.845033291636478, 3.236716037469691) _gate_q_10, _gate_q_5;
  u1(2.743153192405976) _gate_q_1;
  y _gate_q_4;
  ryy_5070905536(0.7394901024668156) _gate_q_11, _gate_q_7;
  ry(5.7174403936100955) _gate_q_0;
  sx _gate_q_9;
  z _gate_q_3;
  cu(4.334567304360359, 1.4601268151168874, 1.7556676197624919, 2.2483675423036997) _gate_q_0, _gate_q_10;
  sxdg _gate_q_11;
  crz(0.3576106926864133) _gate_q_6, _gate_q_7;
  sdg _gate_q_4;
  y _gate_q_3;
  p(4.161822356630938) _gate_q_14;
  U(2.668214957870218, 1.7110144031446821, 3.7126643708401907) _gate_q_8;
  ry(0.3415962302859499) _gate_q_13;
  x _gate_q_12;
  u1(4.464913373715799) _gate_q_1;
  iswap _gate_q_5, _gate_q_2;
  u2(2.8216131341092994, 1.1881149555445396) _gate_q_9;
  cs _gate_q_10, _gate_q_12;
  r_5070897952(0.22711848987875227, 0.5165519138193568) _gate_q_1;
  xx_plus_yy_5070904336(2.833197657889361, 2.6741388157793113) _gate_q_0, _gate_q_2;
  cu1_5070898576(0.7431044305891734) _gate_q_5, _gate_q_13;
  sx _gate_q_8;
  r_5070897568(1.4759178994061062, 5.294058658627135) _gate_q_11;
  cry(3.541763315798061) _gate_q_3, _gate_q_14;
  rx(1.351485905345046) _gate_q_4;
  rxx_5070908752(3.0330488335838566) _gate_q_6, _gate_q_7;
  sdg _gate_q_9;
  u1(4.052561130548586) _gate_q_0;
  tdg _gate_q_13;
  sxdg _gate_q_9;
  s _gate_q_7;
  sxdg _gate_q_4;
  iswap _gate_q_5, _gate_q_6;
  x _gate_q_2;
  id _gate_q_1;
  swap _gate_q_14, _gate_q_3;
  xx_minus_yy_5070906304(0.006809737614391752, 1.5894548197489455) _gate_q_12, _gate_q_10;
  crz(2.6941072184931847) _gate_q_8, _gate_q_11;
  crx(2.779123731917787) _gate_q_12, _gate_q_5;
  s _gate_q_4;
  cu3_5070901312(4.9818484807736905, 1.053740760811598, 5.782023354710311) _gate_q_8, _gate_q_14;
  ch _gate_q_10, _gate_q_3;
  csx _gate_q_0, _gate_q_11;
  U(2.67327570382007, 1.8923942199395283, 0.027510766277411808) _gate_q_1;
  xx_minus_yy_5070905152(3.063361443643732, 4.225773537880709) _gate_q_9, _gate_q_6;
  cx _gate_q_13, _gate_q_7;
  ry(2.1374902919736494) _gate_q_2;
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
gate r_5070902176(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.841314096440222, -1.3505094367704844, 1.3505094367704844) _gate_q_0;
}
gate cu3_5070911392(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.497138147520051) _gate_q_0;
  u1(1.0377535520554289) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.44022594761016254, 0, -4.497138147520051) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.44022594761016254, 3.4593845954646225, 0) _gate_q_1;
}
gate ryy_5070902752(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9100882150264822) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5070909280(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.514512055765467) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5070913312(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.7978512570722183, -0.8105874218574637, 0.8105874218574637) _gate_q_0;
}
gate r_5070903568(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.7878232681628157, -0.6427172365519561, 0.6427172365519561) _gate_q_0;
}
gate rzx_5070897808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9413035527415949) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5070904288(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.09216001239337997) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.09216001239337997) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.09216001239337997) _gate_q_1;
}
gate rzz_5070907264(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.119462578446908) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5070906400(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.7709496449746505) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5070910768(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.799507771772109) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5070908128(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.404010092924356) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5070911968(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.089412540409513) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.10019263620308722) _gate_q_1;
  ry(-0.10019263620308722) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.089412540409513) _gate_q_0;
}
gate cu3_5070910912(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.664721880867119) _gate_q_0;
  u1(1.2152184926097167) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9450702214482913, 0, -4.664721880867119) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9450702214482913, 3.449503388257402, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  sxdg _gate_q_10;
  u2(0.2520965527641975, 6.271795405831221) _gate_q_11;
  csdg _gate_q_14, _gate_q_8;
  ecr _gate_q_1, _gate_q_12;
  cy _gate_q_5, _gate_q_7;
  dcx _gate_q_0, _gate_q_3;
  ch _gate_q_6, _gate_q_2;
  ecr _gate_q_9, _gate_q_13;
  s _gate_q_4;
  ry(0.03236778234716592) _gate_q_14;
  rz(1.4368303612567566) _gate_q_6;
  r_5070902176(3.841314096440222, 0.2202868900244122) _gate_q_8;
  cu3_5070911392(0.8804518952203251, 3.4593845954646225, 5.53489169957548) _gate_q_7, _gate_q_4;
  swap _gate_q_0, _gate_q_10;
  cs _gate_q_9, _gate_q_13;
  cx _gate_q_3, _gate_q_5;
  ryy_5070902752(1.9100882150264822) _gate_q_11, _gate_q_12;
  dcx _gate_q_2, _gate_q_1;
  id _gate_q_4;
  y _gate_q_3;
  rxx_5070909280(4.514512055765467) _gate_q_8, _gate_q_12;
  cx _gate_q_2, _gate_q_13;
  sx _gate_q_5;
  iswap _gate_q_14, _gate_q_6;
  u1(1.065615094685606) _gate_q_0;
  cu(0.24094700232070249, 1.7916162381445815, 0.5172920980424364, 5.620192362181061) _gate_q_9, _gate_q_7;
  r_5070913312(2.7978512570722183, 0.7602089049374329) _gate_q_1;
  cz _gate_q_11, _gate_q_10;
  csx _gate_q_6, _gate_q_3;
  sx _gate_q_10;
  u1(1.2115858475289314) _gate_q_11;
  cry(2.9548073030058624) _gate_q_1, _gate_q_9;
  swap _gate_q_5, _gate_q_2;
  iswap _gate_q_7, _gate_q_4;
  csdg _gate_q_12, _gate_q_14;
  t _gate_q_0;
  z _gate_q_13;
  r_5070903568(1.7878232681628157, 0.9280790902429404) _gate_q_8;
  cs _gate_q_5, _gate_q_2;
  ecr _gate_q_14, _gate_q_3;
  s _gate_q_10;
  rzx_5070897808(0.9413035527415949) _gate_q_0, _gate_q_9;
  sxdg _gate_q_12;
  cu1_5070904288(0.18432002478675993) _gate_q_7, _gate_q_13;
  rzz_5070907264(5.119462578446908) _gate_q_6, _gate_q_4;
  swap _gate_q_8, _gate_q_1;
  s _gate_q_11;
  ry(2.596848974104613) _gate_q_4;
  crx(3.9395236488570258) _gate_q_7, _gate_q_14;
  cu(4.206191312966974, 3.526470552622557, 4.984290213599053, 0.004807588414922211) _gate_q_6, _gate_q_5;
  crx(0.6520730622157757) _gate_q_11, _gate_q_9;
  y _gate_q_3;
  y _gate_q_1;
  h _gate_q_0;
  tdg _gate_q_13;
  csdg _gate_q_12, _gate_q_10;
  ryy_5070906400(4.7709496449746505) _gate_q_8, _gate_q_2;
  p(3.138276481877331) _gate_q_1;
  u1(0.28725818343104353) _gate_q_12;
  ry(0.5223729153495058) _gate_q_9;
  U(0.34254962633500424, 3.7899604694061493, 5.360240501553018) _gate_q_4;
  cz _gate_q_5, _gate_q_3;
  cx _gate_q_8, _gate_q_13;
  sx _gate_q_11;
  y _gate_q_10;
  csdg _gate_q_0, _gate_q_6;
  U(4.102107898510089, 4.050264638875697, 1.126252860030308) _gate_q_14;
  cs _gate_q_7, _gate_q_2;
  rzz_5070910768(5.799507771772109) _gate_q_12, _gate_q_3;
  ry(3.632064813702171) _gate_q_7;
  rx(0.34373587819616525) _gate_q_9;
  rzx_5070908128(5.404010092924356) _gate_q_2, _gate_q_1;
  y _gate_q_6;
  cry(3.5028771304838577) _gate_q_10, _gate_q_13;
  xx_plus_yy_5070911968(0.20038527240617443, 4.089412540409513) _gate_q_0, _gate_q_11;
  sdg _gate_q_8;
  t _gate_q_4;
  cy _gate_q_5, _gate_q_14;
  swap _gate_q_9, _gate_q_14;
  ch _gate_q_5, _gate_q_7;
  p(0.014216096747098872) _gate_q_1;
  crz(3.97043817984526) _gate_q_3, _gate_q_0;
  cz _gate_q_2, _gate_q_11;
  t _gate_q_12;
  cu3_5070910912(3.8901404428965827, 3.449503388257402, 5.879940373476836) _gate_q_4, _gate_q_10;
  crz(0.006043221706325059) _gate_q_6, _gate_q_13;
  sxdg _gate_q_8;
  cp(4.489117284480173) _gate_q_4, _gate_q_5;
  swap _gate_q_0, _gate_q_13;
  ry(2.6252461136680325) _gate_q_6;
  x _gate_q_8;
  dcx _gate_q_7, _gate_q_2;
  ch _gate_q_11, _gate_q_10;
  ch _gate_q_3, _gate_q_12;
  cp(6.2323425813836435) _gate_q_9, _gate_q_1;
  z _gate_q_14;
}