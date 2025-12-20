gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072603376(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.5327774059415327) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6622126168829598) _gate_q_1;
  ry(-1.6622126168829598) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.5327774059415327) _gate_q_0;
}
gate rxx_5072614128(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.192425327382008) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate rzx_5072616336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.39408146832917146) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5072608032(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5656572991430734) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5656572991430734) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5656572991430734) _gate_q_1;
}
gate rxx_5072612112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.189099613327445) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5072603232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.735272911842197) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate cu3_5072613264(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.8474731327991845) _gate_q_0;
  u1(-1.5212422345095296) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3361611475284312, 0, -3.8474731327991845) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3361611475284312, 5.368715367308714, 0) _gate_q_1;
}
gate r_5072607648(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.399363680506461, 3.3168381988920483, -3.3168381988920483) _gate_q_0;
}
gate rzz_5072615136(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.683119972590937) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072601504(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.2777235895033097, 2.754495498918315, -2.754495498918315) _gate_q_0;
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
gate xx_minus_yy_5072602800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.9088243341017055) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3641757677153462) _gate_q_0;
  ry(-0.3641757677153462) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.9088243341017055) _gate_q_1;
}
gate xx_minus_yy_5072609616(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.5355061477642735) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.0615075487841743) _gate_q_0;
  ry(-3.0615075487841743) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.5355061477642735) _gate_q_1;
}
gate r_5072615760(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.274419548454205, 2.6534413702717057, -2.6534413702717057) _gate_q_0;
}
gate ryy_5072603664(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7361462937764593) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072612016(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5373140216274224) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5072612256(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.07557551561925306) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0629463666339887) _gate_q_1;
  ry(-2.0629463666339887) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.07557551561925306) _gate_q_0;
}
gate rzz_5072613600(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.601064373896672) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5072614560(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.936958131492651) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5072605536(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.2787760007631275) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5072606208(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.251476169918193) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3809792405387527) _gate_q_0;
  ry(-1.3809792405387527) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.251476169918193) _gate_q_1;
}
gate cu3_5072606544(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.4951956369947084) _gate_q_0;
  u1(2.0278370371250265) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2628636711213708, 0, -2.4951956369947084) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2628636711213708, 0.46735859986968226, 0) _gate_q_1;
}
gate xx_plus_yy_5072614272(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.5444065025567102) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.47280825201992827) _gate_q_1;
  ry(-0.47280825201992827) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.5444065025567102) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  xx_plus_yy_5072603376(3.3244252337659197, 3.5327774059415327) _gate_q_13, _gate_q_8;
  rxx_5072614128(0.192425327382008) _gate_q_10, _gate_q_7;
  t _gate_q_0;
  ch _gate_q_5, _gate_q_4;
  csx _gate_q_3, _gate_q_2;
  cz _gate_q_9, _gate_q_1;
  rzx_5072616336(0.39408146832917146) _gate_q_14, _gate_q_6;
  y _gate_q_12;
  sxdg _gate_q_11;
  cy _gate_q_3, _gate_q_1;
  z _gate_q_5;
  ry(4.675174799443136) _gate_q_0;
  cy _gate_q_8, _gate_q_12;
  cu1_5072608032(1.1313145982861468) _gate_q_6, _gate_q_11;
  cry(0.27351405421203034) _gate_q_10, _gate_q_2;
  rxx_5072612112(5.189099613327445) _gate_q_4, _gate_q_9;
  h _gate_q_7;
  sxdg _gate_q_13;
  u2(0.30052929983428783, 4.216461155550929) _gate_q_14;
  u3(6.167278533156651, 5.970888620140358, 4.568788888470279) _gate_q_5;
  csdg _gate_q_9, _gate_q_1;
  tdg _gate_q_11;
  rzx_5072603232(2.735272911842197) _gate_q_14, _gate_q_7;
  y _gate_q_8;
  x _gate_q_12;
  ch _gate_q_10, _gate_q_4;
  sx _gate_q_2;
  z _gate_q_13;
  ecr _gate_q_6, _gate_q_3;
  u1(5.135110175084892) _gate_q_0;
  cu3_5072613264(2.6723222950568624, 5.368715367308714, 2.326230898289655) _gate_q_4, _gate_q_12;
  sx _gate_q_9;
  r_5072607648(2.399363680506461, 4.887634525686945) _gate_q_5;
  rzz_5072615136(3.683119972590937) _gate_q_14, _gate_q_11;
  r_5072601504(3.2777235895033097, 4.325291825713212) _gate_q_1;
  rx(1.2831265423893008) _gate_q_2;
  sdg _gate_q_13;
  cry(3.2227473277453598) _gate_q_3, _gate_q_8;
  ecr _gate_q_6, _gate_q_0;
  z _gate_q_7;
  sx _gate_q_10;
  cx _gate_q_1, _gate_q_11;
  iswap _gate_q_0, _gate_q_7;
  id _gate_q_3;
  dcx _gate_q_13, _gate_q_12;
  y _gate_q_4;
  xx_minus_yy_5072602800(0.7283515354306924, 4.9088243341017055) _gate_q_2, _gate_q_14;
  xx_minus_yy_5072609616(6.123015097568349, 0.5355061477642735) _gate_q_6, _gate_q_10;
  crx(5.227600894821072) _gate_q_9, _gate_q_8;
  z _gate_q_5;
  crz(6.02466060059852) _gate_q_14, _gate_q_3;
  rx(6.225968301146005) _gate_q_10;
  r_5072615760(4.274419548454205, 4.224237697066602) _gate_q_0;
  rx(5.416123199238387) _gate_q_4;
  h _gate_q_5;
  tdg _gate_q_12;
  cy _gate_q_8, _gate_q_2;
  rz(0.42974044582134274) _gate_q_7;
  rx(6.12875043451991) _gate_q_6;
  p(2.067077921161299) _gate_q_9;
  ryy_5072603664(3.7361462937764593) _gate_q_13, _gate_q_11;
  u3(5.583184226720557, 1.5317438332212792, 5.353275954075873) _gate_q_1;
  cry(4.236146107688201) _gate_q_8, _gate_q_5;
  cy _gate_q_1, _gate_q_4;
  cx _gate_q_0, _gate_q_2;
  ch _gate_q_12, _gate_q_11;
  ryy_5072612016(1.5373140216274224) _gate_q_10, _gate_q_7;
  cu(1.5399607417425125, 0.5823609247088074, 2.4361364608127176, 4.1969460405323) _gate_q_3, _gate_q_13;
  z _gate_q_14;
  u1(3.7475416085842594) _gate_q_9;
  u3(0.409829385814394, 1.1621318974556862, 2.7576035515295922) _gate_q_6;
  cry(4.49229739720639) _gate_q_0, _gate_q_6;
  h _gate_q_13;
  xx_plus_yy_5072612256(4.125892733267977, 0.07557551561925306) _gate_q_1, _gate_q_8;
  rzz_5072613600(4.601064373896672) _gate_q_7, _gate_q_12;
  rzx_5072614560(2.936958131492651) _gate_q_11, _gate_q_5;
  ryy_5072605536(0.2787760007631275) _gate_q_4, _gate_q_10;
  u1(5.647074776549774) _gate_q_2;
  h _gate_q_14;
  xx_minus_yy_5072606208(2.7619584810775053, 4.251476169918193) _gate_q_3, _gate_q_9;
  sxdg _gate_q_2;
  cu3_5072606544(4.5257273422427415, 0.46735859986968226, 4.523032674119735) _gate_q_9, _gate_q_0;
  y _gate_q_14;
  s _gate_q_12;
  swap _gate_q_4, _gate_q_3;
  ry(4.532864891434215) _gate_q_5;
  tdg _gate_q_10;
  s _gate_q_1;
  p(1.3673462815578759) _gate_q_7;
  cx _gate_q_11, _gate_q_8;
  cy _gate_q_6, _gate_q_13;
  ch _gate_q_4, _gate_q_6;
  t _gate_q_7;
  z _gate_q_8;
  sxdg _gate_q_14;
  t _gate_q_10;
  crx(1.9975859174257649) _gate_q_0, _gate_q_5;
  xx_plus_yy_5072614272(0.9456165040398565, 1.5444065025567102) _gate_q_11, _gate_q_12;
  cx _gate_q_1, _gate_q_9;
  U(5.122920097310952, 5.593283229269262, 1.8141391797575408) _gate_q_3;
  x _gate_q_13;
  u3(1.0366551744770114, 3.7687210000320532, 4.41727566834832) _gate_q_2;
}
gate cu3_5072606592(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.4236913510190294) _gate_q_0;
  u1(-0.5044516194284019) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8967989182192837, 0, -1.4236913510190294) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8967989182192837, 1.9281429704474313, 0) _gate_q_1;
}
gate cu3_5069815584(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6204428652739111) _gate_q_0;
  u1(-1.5889974282998793) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.510408833943856, 0, -1.6204428652739111) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.510408833943856, 3.2094402935737905, 0) _gate_q_1;
}
gate cu3_5069812800(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.8199175813701975) _gate_q_0;
  u1(0.9823295340787822) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.24152274392082598, 0, -1.8199175813701975) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.24152274392082598, 0.8375880472914152, 0) _gate_q_1;
}
gate rzz_5069813328(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.877489586654127) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5069813376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3455827903314757) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5069815680(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1471267405623076) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5069812704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6439326325577233) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5069814720(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.6584316773778327) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5069811744(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1210037204146994) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5069814048(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4441387157618695) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5069814912(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.973292087576889) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5069813904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.6687105961408943) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1008086917542315) _gate_q_1;
  ry(-1.1008086917542315) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.6687105961408943) _gate_q_0;
}
gate xx_plus_yy_5069815008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.0844928267764) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5150272775991462) _gate_q_1;
  ry(-1.5150272775991462) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.0844928267764) _gate_q_0;
}
gate rzz_5069814192(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.444650196726594) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5069814480(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.649865937847867) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5069815056(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.1507257694643561) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5069815632(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.741304162464714) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5069813232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.188232090615902) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5069813568(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.358843488849675) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3146783028876163) _gate_q_0;
  ry(-1.3146783028876163) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.358843488849675) _gate_q_1;
}
gate ryy_5069814576(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4244925996495548) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5069815248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.352640668939716) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8737132344916778) _gate_q_1;
  ry(-1.8737132344916778) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.352640668939716) _gate_q_0;
}
gate xx_plus_yy_5069813760(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.590582766707652) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.38787799186783223) _gate_q_1;
  ry(-0.38787799186783223) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.590582766707652) _gate_q_0;
}
gate xx_plus_yy_5069814384(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.3838254369005683) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.7213204876810435) _gate_q_1;
  ry(-2.7213204876810435) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.3838254369005683) _gate_q_0;
}
gate cu1_5069812944(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.32841102061076216) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.32841102061076216) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.32841102061076216) _gate_q_1;
}
gate cu1_5069810352(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.427513414945693) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.427513414945693) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.427513414945693) _gate_q_1;
}
gate rzz_5069813184(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.4762249101965885) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  cu3_5072606592(1.7935978364385674, 1.9281429704474313, 0.9192397315906276) _gate_q_3, _gate_q_9;
  swap _gate_q_10, _gate_q_5;
  cp(0.02227566885275355) _gate_q_2, _gate_q_0;
  y _gate_q_11;
  dcx _gate_q_6, _gate_q_4;
  u3(1.0406526738941142, 3.864773431678863, 2.1708036105142368) _gate_q_1;
  cu3_5069815584(5.020817667887712, 3.2094402935737905, 0.03144543697403171) _gate_q_12, _gate_q_7;
  cy _gate_q_13, _gate_q_8;
  h _gate_q_14;
  s _gate_q_5;
  csdg _gate_q_4, _gate_q_0;
  csx _gate_q_12, _gate_q_9;
  ch _gate_q_10, _gate_q_8;
  h _gate_q_2;
  cu3_5069812800(0.48304548784165197, 0.8375880472914152, 2.8022471154489796) _gate_q_11, _gate_q_6;
  rzz_5069813328(5.877489586654127) _gate_q_14, _gate_q_3;
  rxx_5069813376(3.3455827903314757) _gate_q_1, _gate_q_13;
  u3(0.8773247669987545, 5.05108024079261, 4.720529551187182) _gate_q_7;
  cs _gate_q_7, _gate_q_3;
  swap _gate_q_12, _gate_q_10;
  ry(4.983985003569087) _gate_q_8;
  ch _gate_q_1, _gate_q_0;
  rzx_5069815680(2.1471267405623076) _gate_q_2, _gate_q_14;
  csdg _gate_q_13, _gate_q_4;
  swap _gate_q_9, _gate_q_6;
  U(1.7343987029586572, 2.484197070786467, 5.142366942768909) _gate_q_11;
  t _gate_q_5;
  rx(2.520134870227793) _gate_q_10;
  t _gate_q_3;
  h _gate_q_5;
  h _gate_q_1;
  rzx_5069812704(0.6439326325577233) _gate_q_6, _gate_q_14;
  rzz_5069814720(2.6584316773778327) _gate_q_9, _gate_q_13;
  cz _gate_q_11, _gate_q_2;
  rx(0.8900918669370204) _gate_q_12;
  h _gate_q_7;
  u1(2.3584842246371873) _gate_q_8;
  u2(3.9402721616900664, 3.9106261550869834) _gate_q_4;
  sx _gate_q_0;
  csdg _gate_q_12, _gate_q_10;
  u2(1.951675248184799, 2.8085080553739625) _gate_q_5;
  p(6.126228978233201) _gate_q_0;
  csx _gate_q_7, _gate_q_4;
  sx _gate_q_11;
  dcx _gate_q_3, _gate_q_9;
  cx _gate_q_2, _gate_q_6;
  rzx_5069811744(1.1210037204146994) _gate_q_13, _gate_q_14;
  rzx_5069814048(3.4441387157618695) _gate_q_8, _gate_q_1;
  rxx_5069814912(2.973292087576889) _gate_q_13, _gate_q_12;
  crx(5.032962725653835) _gate_q_10, _gate_q_9;
  cry(2.66980850222658) _gate_q_11, _gate_q_7;
  xx_plus_yy_5069813904(2.201617383508463, 2.6687105961408943) _gate_q_14, _gate_q_4;
  z _gate_q_8;
  xx_plus_yy_5069815008(3.0300545551982925, 4.0844928267764) _gate_q_5, _gate_q_2;
  csdg _gate_q_0, _gate_q_6;
  ry(2.310532855467257) _gate_q_3;
  id _gate_q_1;
  crz(6.156694767468195) _gate_q_3, _gate_q_11;
  crx(4.4040338973561575) _gate_q_8, _gate_q_10;
  x _gate_q_2;
  rx(1.738339108025347) _gate_q_13;
  id _gate_q_0;
  sxdg _gate_q_7;
  u3(2.3988819798092527, 1.3553650712924872, 1.70341187397355) _gate_q_1;
  rzz_5069814192(4.444650196726594) _gate_q_5, _gate_q_9;
  cs _gate_q_12, _gate_q_4;
  rzz_5069814480(4.649865937847867) _gate_q_14, _gate_q_6;
  ryy_5069815056(0.1507257694643561) _gate_q_14, _gate_q_1;
  rxx_5069815632(4.741304162464714) _gate_q_6, _gate_q_8;
  rxx_5069813232(3.188232090615902) _gate_q_5, _gate_q_10;
  cp(3.416324467396965) _gate_q_4, _gate_q_0;
  sx _gate_q_9;
  s _gate_q_12;
  t _gate_q_13;
  xx_minus_yy_5069813568(2.6293566057752327, 5.358843488849675) _gate_q_2, _gate_q_7;
  ryy_5069814576(3.4244925996495548) _gate_q_11, _gate_q_3;
  xx_plus_yy_5069815248(3.7474264689833556, 4.352640668939716) _gate_q_3, _gate_q_6;
  z _gate_q_14;
  cx _gate_q_10, _gate_q_7;
  csdg _gate_q_0, _gate_q_11;
  xx_plus_yy_5069813760(0.7757559837356645, 5.590582766707652) _gate_q_1, _gate_q_9;
  x _gate_q_4;
  tdg _gate_q_5;
  xx_plus_yy_5069814384(5.442640975362087, 1.3838254369005683) _gate_q_2, _gate_q_13;
  cu1_5069812944(0.6568220412215243) _gate_q_12, _gate_q_8;
  U(4.808514753649224, 3.395415553929949, 0.43354994396936186) _gate_q_1;
  id _gate_q_11;
  h _gate_q_3;
  ch _gate_q_14, _gate_q_2;
  cz _gate_q_12, _gate_q_4;
  cu1_5069810352(4.855026829891386) _gate_q_0, _gate_q_10;
  swap _gate_q_9, _gate_q_13;
  rzz_5069813184(3.4762249101965885) _gate_q_7, _gate_q_6;
  dcx _gate_q_5, _gate_q_8;
}