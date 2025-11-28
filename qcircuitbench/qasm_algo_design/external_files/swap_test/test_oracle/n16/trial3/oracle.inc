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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105638464(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.314715433468659) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.509348034521736) _gate_q_0;
  ry(-2.509348034521736) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.314715433468659) _gate_q_1;
}
gate xx_minus_yy_5105644752(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.346088969845536) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6720420444915742) _gate_q_0;
  ry(-2.6720420444915742) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.346088969845536) _gate_q_1;
}
gate rzz_5105643120(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.3067899364392868) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5105646864(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3391807503256246) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3391807503256246) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3391807503256246) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate cu1_5105638752(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.3660851309309956) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.3660851309309956) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.3660851309309956) _gate_q_1;
}
gate ryy_5105644320(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.140897691124114) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105645904(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6724731471292447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5105634768(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.814091909486455) _gate_q_0;
  u1(0.8214590689690704) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.14798714742511482, 0, -2.814091909486455) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.14798714742511482, 1.9926328405173845, 0) _gate_q_1;
}
gate xx_plus_yy_5105643360(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.4002701195318044) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.1708488916521804) _gate_q_1;
  ry(-2.1708488916521804) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.4002701195318044) _gate_q_0;
}
gate r_5105646672(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.26254753258989316, 0.5038518417764632, -0.5038518417764632) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_minus_yy_5105640336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.765662181865107) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9844439427590911) _gate_q_0;
  ry(-0.9844439427590911) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.765662181865107) _gate_q_1;
}
gate r_5105643648(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.275502096364629, 0.06931958964564178, -0.06931958964564178) _gate_q_0;
}
gate r_5105647104(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.7153079380352163, 3.0804052593910516, -3.0804052593910516) _gate_q_0;
}
gate cu1_5105639760(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9043194608144195) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9043194608144195) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9043194608144195) _gate_q_1;
}
gate xx_plus_yy_5105644224(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.154447217983062) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.160019874582076) _gate_q_1;
  ry(-0.160019874582076) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.154447217983062) _gate_q_0;
}
gate rxx_5105641248(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.2315382387997085) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5105638608(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6600002691415072) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6600002691415072) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6600002691415072) _gate_q_1;
}
gate ryy_5105631936(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.40992152843880225) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  ecr _gate_q_4, _gate_q_12;
  sxdg _gate_q_15;
  xx_minus_yy_5105638464(5.018696069043472, 2.314715433468659) _gate_q_7, _gate_q_9;
  cx _gate_q_3, _gate_q_11;
  cp(0.7442108627653476) _gate_q_8, _gate_q_2;
  u1(2.7613952571732554) _gate_q_10;
  xx_minus_yy_5105644752(5.3440840889831485, 4.346088969845536) _gate_q_14, _gate_q_13;
  crz(5.353338780280309) _gate_q_5, _gate_q_6;
  sdg _gate_q_1;
  sxdg _gate_q_0;
  y _gate_q_14;
  rzz_5105643120(3.3067899364392868) _gate_q_6, _gate_q_2;
  cu1_5105646864(2.678361500651249) _gate_q_9, _gate_q_15;
  dcx _gate_q_13, _gate_q_3;
  sx _gate_q_8;
  u1(3.5866037100969197) _gate_q_11;
  cy _gate_q_12, _gate_q_10;
  t _gate_q_7;
  csx _gate_q_1, _gate_q_4;
  u2(4.358689456479676, 0.39430608492510805) _gate_q_5;
  s _gate_q_0;
  cz _gate_q_4, _gate_q_3;
  csx _gate_q_8, _gate_q_15;
  ecr _gate_q_0, _gate_q_7;
  crz(3.4691662846406115) _gate_q_2, _gate_q_14;
  h _gate_q_12;
  t _gate_q_10;
  s _gate_q_5;
  cu1_5105638752(0.7321702618619912) _gate_q_1, _gate_q_11;
  rx(1.903408820165673) _gate_q_13;
  ryy_5105644320(5.140897691124114) _gate_q_6, _gate_q_9;
  ecr _gate_q_3, _gate_q_9;
  crz(4.574721428695519) _gate_q_2, _gate_q_14;
  u2(6.078891088781627, 6.270033816596182) _gate_q_4;
  dcx _gate_q_5, _gate_q_15;
  swap _gate_q_10, _gate_q_1;
  ryy_5105645904(0.6724731471292447) _gate_q_11, _gate_q_0;
  y _gate_q_7;
  id _gate_q_12;
  cx _gate_q_8, _gate_q_6;
  u3(2.409261885417634, 1.2555493170475043, 3.9707077880127035) _gate_q_13;
  csdg _gate_q_9, _gate_q_11;
  rz(5.5487689170567585) _gate_q_4;
  id _gate_q_2;
  id _gate_q_3;
  id _gate_q_1;
  u2(5.283238189766459, 2.8971389872071227) _gate_q_15;
  cy _gate_q_5, _gate_q_0;
  rz(2.393695104077825) _gate_q_13;
  U(3.723190775874447, 0.4461507876972023, 4.5324181886900785) _gate_q_14;
  csx _gate_q_6, _gate_q_10;
  cry(5.659501003189583) _gate_q_12, _gate_q_7;
  U(0.8253854794614833, 3.6285489583684876, 3.991301879316277) _gate_q_8;
  s _gate_q_15;
  cu3_5105634768(0.29597429485022964, 1.9926328405173845, 3.6355509784555253) _gate_q_12, _gate_q_1;
  cry(1.4093271829877143) _gate_q_5, _gate_q_14;
  xx_plus_yy_5105643360(4.341697783304361, 1.4002701195318044) _gate_q_13, _gate_q_11;
  sx _gate_q_10;
  u2(5.0181186319924045, 6.0605101905311) _gate_q_0;
  tdg _gate_q_7;
  cy _gate_q_2, _gate_q_4;
  r_5105646672(0.26254753258989316, 2.07464816857136) _gate_q_6;
  p(4.47379281680668) _gate_q_9;
  cs _gate_q_8, _gate_q_3;
  s _gate_q_13;
  swap _gate_q_15, _gate_q_3;
  tdg _gate_q_14;
  xx_minus_yy_5105640336(1.9688878855181822, 5.765662181865107) _gate_q_4, _gate_q_2;
  cry(3.6277484680604526) _gate_q_0, _gate_q_1;
  id _gate_q_11;
  cz _gate_q_9, _gate_q_6;
  r_5105643648(4.275502096364629, 1.6401159164405383) _gate_q_10;
  crx(4.296177789858551) _gate_q_7, _gate_q_5;
  rx(1.8602161507780952) _gate_q_8;
  sx _gate_q_12;
  r_5105647104(3.7153079380352163, 4.651201586185948) _gate_q_5;
  sxdg _gate_q_0;
  u1(0.13668271060031165) _gate_q_8;
  u1(5.386734096201281) _gate_q_4;
  swap _gate_q_3, _gate_q_11;
  u1(6.060109252036249) _gate_q_10;
  t _gate_q_12;
  sdg _gate_q_14;
  x _gate_q_6;
  y _gate_q_9;
  ry(1.7038755245913122) _gate_q_13;
  cu(2.5314847608894566, 4.022539522198139, 0.49968198309218487, 0.5290447726991601) _gate_q_15, _gate_q_7;
  ch _gate_q_1, _gate_q_2;
  cp(1.8052972075384397) _gate_q_3, _gate_q_11;
  p(3.5754710065611626) _gate_q_2;
  cu1_5105639760(1.808638921628839) _gate_q_9, _gate_q_0;
  sx _gate_q_10;
  cx _gate_q_6, _gate_q_5;
  csx _gate_q_8, _gate_q_15;
  xx_plus_yy_5105644224(0.320039749164152, 2.154447217983062) _gate_q_12, _gate_q_14;
  dcx _gate_q_1, _gate_q_4;
  rxx_5105641248(6.2315382387997085) _gate_q_13, _gate_q_7;
  u2(1.1152737997355318, 0.03655137251910798) _gate_q_12;
  cu1_5105638608(3.3200005382830144) _gate_q_2, _gate_q_10;
  z _gate_q_7;
  crz(2.1796248778987692) _gate_q_9, _gate_q_6;
  tdg _gate_q_5;
  sx _gate_q_15;
  ryy_5105631936(0.40992152843880225) _gate_q_8, _gate_q_4;
  u2(1.0869923126550316, 5.722044678061816) _gate_q_13;
  t _gate_q_3;
  cp(5.818240179864077) _gate_q_0, _gate_q_1;
  cx _gate_q_14, _gate_q_11;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5106258752(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.1421531544755075) _gate_q_0;
  u1(0.489393251949533) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.24760892417725858, 0, -3.1421531544755075) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.24760892417725858, 2.6527599025259745, 0) _gate_q_1;
}
gate xx_minus_yy_5106259280(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.96836061963216) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7064573905039669) _gate_q_0;
  ry(-0.7064573905039669) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.96836061963216) _gate_q_1;
}
gate xx_plus_yy_5106260768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.5176615393880715) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9430255380317185) _gate_q_1;
  ry(-0.9430255380317185) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.5176615393880715) _gate_q_0;
}
gate ryy_5106269168(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.163273919536543) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5106261776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.460731324420668) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.0969191733916017) _gate_q_1;
  ry(-1.0969191733916017) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.460731324420668) _gate_q_0;
}
gate xx_plus_yy_5106255440(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.8331703424320644) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5957850814062404) _gate_q_1;
  ry(-0.5957850814062404) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.8331703424320644) _gate_q_0;
}
gate rxx_5106269504(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.513069028854754) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5106268976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.787592321868613) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.3054500561510785) _gate_q_0;
  ry(-2.3054500561510785) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.787592321868613) _gate_q_1;
}
gate xx_plus_yy_5106261152(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.10362734452287294) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.438423635382301) _gate_q_1;
  ry(-2.438423635382301) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.10362734452287294) _gate_q_0;
}
gate rzx_5106263072(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7747658834996713) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5106262640(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.494322378781802) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5106259184(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.912379261350662, 3.0680080221722763, -3.0680080221722763) _gate_q_0;
}
gate xx_minus_yy_5106264032(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.7733412842421638) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.819019634564303) _gate_q_0;
  ry(-1.819019634564303) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.7733412842421638) _gate_q_1;
}
gate rxx_5106268016(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.57244484452084) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5106263216(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3626471875610378) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5106255776(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.710188228523197) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5106257312(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.8308383679749642, 2.20454021975421, -2.20454021975421) _gate_q_0;
}
gate rzz_5106264272(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.8354131503976795) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5106263744(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.335034582856603) _gate_q_0;
  u1(-0.8281424394938162) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.29015886060068735, 0, -4.335034582856603) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.29015886060068735, 5.163177022350419, 0) _gate_q_1;
}
gate rzx_5106261728(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7862984085654747) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5106258608(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.06865144366753, -0.8163450346190199, 0.8163450346190199) _gate_q_0;
}
gate rzz_5106257648(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.3332470532458344) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5106259088(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.808014875609173) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.808014875609173) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.808014875609173) _gate_q_1;
}
gate ryy_5106260240(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.330874040708511) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5106260528(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.9749437378847157) _gate_q_0;
  u1(-0.2606428030786925) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0267681730636813, 0, -2.9749437378847157) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0267681730636813, 3.2355865409634084, 0) _gate_q_1;
}
gate cu3_5106257360(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3829364550010497) _gate_q_0;
  u1(-2.452275151237949) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7006314453540082, 0, -3.3829364550010497) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7006314453540082, 5.835211606238999, 0) _gate_q_1;
}
gate rxx_5106254672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0490534473785103) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  cy _gate_q_1, _gate_q_0;
  cp(0.8938058438242027) _gate_q_7, _gate_q_10;
  sx _gate_q_6;
  z _gate_q_13;
  crz(0.998701032501609) _gate_q_4, _gate_q_15;
  ch _gate_q_11, _gate_q_2;
  iswap _gate_q_12, _gate_q_3;
  cry(1.5345022874795164) _gate_q_5, _gate_q_9;
  t _gate_q_8;
  z _gate_q_14;
  swap _gate_q_0, _gate_q_5;
  U(2.073167104335825, 0.5087700181866567, 5.345953797297112) _gate_q_13;
  u2(0.6739848855697774, 1.9192418579823742) _gate_q_11;
  x _gate_q_2;
  cu3_5106258752(0.49521784835451715, 2.6527599025259745, 3.6315464064250405) _gate_q_6, _gate_q_12;
  x _gate_q_7;
  iswap _gate_q_10, _gate_q_9;
  s _gate_q_8;
  u3(5.771034210275125, 5.444107656458379, 1.4403275570178131) _gate_q_14;
  p(3.8538215073697324) _gate_q_3;
  p(5.502895492702238) _gate_q_15;
  xx_minus_yy_5106259280(1.4129147810079339, 4.96836061963216) _gate_q_4, _gate_q_1;
  crx(5.299418106559513) _gate_q_11, _gate_q_8;
  cs _gate_q_9, _gate_q_4;
  xx_plus_yy_5106260768(1.886051076063437, 5.5176615393880715) _gate_q_14, _gate_q_10;
  tdg _gate_q_13;
  ryy_5106269168(4.163273919536543) _gate_q_6, _gate_q_15;
  u1(4.867883828814097) _gate_q_0;
  csx _gate_q_5, _gate_q_12;
  cs _gate_q_3, _gate_q_1;
  iswap _gate_q_2, _gate_q_7;
  t _gate_q_12;
  xx_plus_yy_5106261776(2.1938383467832034, 4.460731324420668) _gate_q_1, _gate_q_8;
  swap _gate_q_6, _gate_q_14;
  rz(2.1119042442749234) _gate_q_0;
  y _gate_q_7;
  u3(4.86259552540374, 0.3533023280243646, 2.8254607304964288) _gate_q_5;
  sxdg _gate_q_4;
  crx(2.846552594649195) _gate_q_13, _gate_q_3;
  crz(5.585553403349507) _gate_q_10, _gate_q_2;
  xx_plus_yy_5106255440(1.1915701628124808, 3.8331703424320644) _gate_q_11, _gate_q_9;
  s _gate_q_15;
  rxx_5106269504(4.513069028854754) _gate_q_12, _gate_q_13;
  y _gate_q_14;
  crz(0.2994410821902092) _gate_q_0, _gate_q_2;
  xx_minus_yy_5106268976(4.610900112302157, 4.787592321868613) _gate_q_10, _gate_q_9;
  xx_plus_yy_5106261152(4.876847270764602, 0.10362734452287294) _gate_q_11, _gate_q_15;
  rzx_5106263072(1.7747658834996713) _gate_q_7, _gate_q_5;
  ryy_5106262640(4.494322378781802) _gate_q_8, _gate_q_4;
  z _gate_q_1;
  csdg _gate_q_6, _gate_q_3;
  sx _gate_q_4;
  r_5106259184(5.912379261350662, 4.638804348967173) _gate_q_15;
  ch _gate_q_14, _gate_q_10;
  crx(4.731090672154096) _gate_q_13, _gate_q_5;
  csdg _gate_q_3, _gate_q_8;
  crx(4.768618419425412) _gate_q_12, _gate_q_7;
  xx_minus_yy_5106264032(3.638039269128606, 0.7733412842421638) _gate_q_11, _gate_q_0;
  sx _gate_q_9;
  rz(6.159209878878677) _gate_q_2;
  U(2.5310354435378253, 5.680655105572143, 2.485911631908375) _gate_q_6;
  z _gate_q_1;
  id _gate_q_13;
  u3(5.987637950022929, 6.08169786848211, 5.3186535062281095) _gate_q_9;
  rxx_5106268016(5.57244484452084) _gate_q_5, _gate_q_11;
  ch _gate_q_0, _gate_q_15;
  ryy_5106263216(2.3626471875610378) _gate_q_3, _gate_q_12;
  sx _gate_q_2;
  ry(0.19771660948958147) _gate_q_14;
  y _gate_q_4;
  u1(4.766307368103766) _gate_q_8;
  rzz_5106255776(4.710188228523197) _gate_q_1, _gate_q_10;
  csx _gate_q_7, _gate_q_6;
  x _gate_q_9;
  r_5106257312(3.8308383679749642, 3.7753365465491067) _gate_q_10;
  rzz_5106264272(0.8354131503976795) _gate_q_3, _gate_q_6;
  cu3_5106263744(0.5803177212013747, 5.163177022350419, 3.506892143362787) _gate_q_15, _gate_q_5;
  rzx_5106261728(2.7862984085654747) _gate_q_7, _gate_q_4;
  crz(4.606545800535785) _gate_q_12, _gate_q_1;
  rx(5.263755852643431) _gate_q_8;
  cry(5.616769006733443) _gate_q_11, _gate_q_0;
  r_5106258608(5.06865144366753, 0.7544512921758767) _gate_q_2;
  rzz_5106257648(0.3332470532458344) _gate_q_13, _gate_q_14;
  cu1_5106259088(5.616029751218346) _gate_q_12, _gate_q_4;
  cry(3.726380509847812) _gate_q_5, _gate_q_6;
  z _gate_q_14;
  rx(1.7289414040643352) _gate_q_3;
  u2(3.4518485720192236, 2.8225837571739345) _gate_q_8;
  cry(3.128838105281495) _gate_q_10, _gate_q_7;
  U(2.098981934148077, 0.6574496578544374, 4.356809581022159) _gate_q_0;
  ch _gate_q_13, _gate_q_11;
  s _gate_q_15;
  swap _gate_q_2, _gate_q_9;
  p(2.373450928108214) _gate_q_1;
  u2(0.2915302465423088, 1.5050535653516448) _gate_q_7;
  z _gate_q_4;
  rz(5.585285679226637) _gate_q_3;
  u2(5.151546101229327, 0.3057490775431343) _gate_q_13;
  ryy_5106260240(0.330874040708511) _gate_q_15, _gate_q_10;
  t _gate_q_2;
  iswap _gate_q_0, _gate_q_5;
  u3(5.606728289969079, 1.8140596728804044, 3.9277879757707246) _gate_q_9;
  cu3_5106260528(6.053536346127363, 3.2355865409634084, 2.7143009348060234) _gate_q_11, _gate_q_14;
  cu3_5106257360(1.4012628907080165, 5.835211606238999, 0.930661303763101) _gate_q_1, _gate_q_12;
  rxx_5106254672(1.0490534473785103) _gate_q_8, _gate_q_6;
}