gate rzx_5072843840(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4909299665223066) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5072840912(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.371772829912854) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0660089463010074) _gate_q_0;
  ry(-2.0660089463010074) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.371772829912854) _gate_q_1;
}
gate rxx_5072838752(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.38943295175002396) _gate_q_1;
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
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rxx_5072846336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.433708534804088) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072845808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.177501718572611) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072845712(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.568716222744238) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  s _gate_q_4;
  rzx_5072843840(3.4909299665223066) _gate_q_5, _gate_q_2;
  t _gate_q_3;
  rx(4.952110437804167) _gate_q_0;
  cx _gate_q_6, _gate_q_1;
  s _gate_q_7;
  xx_minus_yy_5072840912(4.132017892602015, 5.371772829912854) _gate_q_7, _gate_q_0;
  ch _gate_q_5, _gate_q_6;
  rx(4.311827029240519) _gate_q_3;
  rxx_5072838752(0.38943295175002396) _gate_q_1, _gate_q_2;
  z _gate_q_4;
  swap _gate_q_7, _gate_q_0;
  csdg _gate_q_1, _gate_q_3;
  iswap _gate_q_4, _gate_q_6;
  ch _gate_q_2, _gate_q_5;
  ry(2.645429050694228) _gate_q_3;
  rz(2.9880992460789995) _gate_q_5;
  sxdg _gate_q_1;
  cry(3.8531018467924825) _gate_q_7, _gate_q_6;
  z _gate_q_2;
  tdg _gate_q_0;
  sdg _gate_q_4;
  id _gate_q_6;
  sdg _gate_q_5;
  y _gate_q_3;
  rxx_5072846336(3.433708534804088) _gate_q_1, _gate_q_0;
  sdg _gate_q_2;
  csdg _gate_q_4, _gate_q_7;
  p(5.739130191827914) _gate_q_0;
  rx(4.540307913646436) _gate_q_4;
  rzx_5072845808(4.177501718572611) _gate_q_2, _gate_q_5;
  rzz_5072845712(2.568716222744238) _gate_q_1, _gate_q_6;
  cy _gate_q_7, _gate_q_3;
  sxdg _gate_q_4;
  ecr _gate_q_5, _gate_q_3;
  rx(5.39686475473589) _gate_q_7;
  t _gate_q_6;
  cz _gate_q_1, _gate_q_0;
  y _gate_q_2;
  cy _gate_q_1, _gate_q_5;
  cry(2.0025185762831144) _gate_q_3, _gate_q_2;
  u3(3.983709902746102, 3.0215747847904884, 2.4603277375706876) _gate_q_7;
  dcx _gate_q_4, _gate_q_6;
  rz(1.420646024969026) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu1_5072256560(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3767470443214664) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3767470443214664) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3767470443214664) _gate_q_1;
}
gate cu1_5072256800(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.101664271502995) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.101664271502995) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.101664271502995) _gate_q_1;
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
gate xx_minus_yy_5072250080(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.48361796028102066) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4960523902617853) _gate_q_0;
  ry(-2.4960523902617853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.48361796028102066) _gate_q_1;
}
gate r_5072247728(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.7063352322595363, 0.4747631778243484, -0.4747631778243484) _gate_q_0;
}
gate cu3_5072250704(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.24698758664398637) _gate_q_0;
  u1(0.23677710536451937) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.748248426225017, 0, -0.24698758664398637) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.748248426225017, 0.010210481279466978, 0) _gate_q_1;
}
gate rxx_5072244944(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.9223284564783025) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5072254352(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7860571935011396) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  cs _gate_q_2, _gate_q_5;
  csdg _gate_q_4, _gate_q_1;
  cu1_5072256560(2.753494088642933) _gate_q_3, _gate_q_0;
  cz _gate_q_7, _gate_q_6;
  ecr _gate_q_0, _gate_q_7;
  cy _gate_q_3, _gate_q_5;
  crz(2.3252249239259544) _gate_q_6, _gate_q_2;
  t _gate_q_1;
  t _gate_q_4;
  cz _gate_q_0, _gate_q_4;
  cu1_5072256800(6.20332854300599) _gate_q_6, _gate_q_1;
  s _gate_q_2;
  cry(3.4185956867982874) _gate_q_7, _gate_q_5;
  u2(3.6786198809933435, 0.5061372954349284) _gate_q_3;
  x _gate_q_1;
  dcx _gate_q_6, _gate_q_7;
  s _gate_q_4;
  crz(2.9034680403819646) _gate_q_2, _gate_q_3;
  U(4.48574040231176, 5.177435350917297, 5.841897621338001) _gate_q_5;
  rz(4.922437403126576) _gate_q_0;
  crz(5.027801884474815) _gate_q_1, _gate_q_4;
  csx _gate_q_7, _gate_q_5;
  xx_minus_yy_5072250080(4.9921047805235705, 0.48361796028102066) _gate_q_3, _gate_q_0;
  r_5072247728(0.7063352322595363, 2.045559504619245) _gate_q_6;
  sdg _gate_q_2;
  cry(1.67698966233836) _gate_q_0, _gate_q_4;
  cp(2.272066930765587) _gate_q_3, _gate_q_2;
  sx _gate_q_6;
  cu3_5072250704(5.496496852450034, 0.010210481279466978, 0.48376469200850575) _gate_q_5, _gate_q_7;
  p(6.162475690863654) _gate_q_1;
  dcx _gate_q_3, _gate_q_4;
  rxx_5072244944(3.9223284564783025) _gate_q_6, _gate_q_7;
  rxx_5072254352(3.7860571935011396) _gate_q_2, _gate_q_0;
  rz(2.7955600326600853) _gate_q_5;
  id _gate_q_1;
  U(5.575362396003738, 2.2387759393926268, 5.867451544645115) _gate_q_2;
  cz _gate_q_5, _gate_q_4;
  id _gate_q_0;
  rx(1.2779047497441838) _gate_q_1;
  dcx _gate_q_3, _gate_q_7;
  s _gate_q_6;
}