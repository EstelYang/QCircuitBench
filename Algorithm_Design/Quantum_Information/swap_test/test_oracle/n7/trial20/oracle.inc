gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072700768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.5286807052503) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.2587941598142574) _gate_q_1;
  ry(-2.2587941598142574) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.5286807052503) _gate_q_0;
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
gate rzx_5072700576(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.07994757526227) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5072700480(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3326496884273515) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  U(2.4795752442149745, 4.791776612241041, 0.9684188454827302) _gate_q_3;
  cy _gate_q_1, _gate_q_6;
  ch _gate_q_2, _gate_q_5;
  sx _gate_q_4;
  tdg _gate_q_0;
  rz(0.5709666064479625) _gate_q_6;
  cs _gate_q_0, _gate_q_2;
  sxdg _gate_q_1;
  crz(0.5779680013526237) _gate_q_3, _gate_q_5;
  U(5.903302698491178, 2.6383936784978497, 1.2302881550138003) _gate_q_4;
  u3(2.32609059715541, 3.7988004558832054, 1.7123256198813104) _gate_q_0;
  rz(3.2813727286253247) _gate_q_2;
  rx(3.2677365487885597) _gate_q_5;
  u1(1.0110145008424056) _gate_q_3;
  xx_plus_yy_5072700768(4.517588319628515, 3.5286807052503) _gate_q_1, _gate_q_4;
  id _gate_q_6;
  ch _gate_q_0, _gate_q_2;
  u1(0.23873131560012206) _gate_q_5;
  crx(0.8609844174851429) _gate_q_4, _gate_q_3;
  rx(2.380647627823911) _gate_q_6;
  sxdg _gate_q_1;
  iswap _gate_q_4, _gate_q_1;
  dcx _gate_q_3, _gate_q_6;
  sx _gate_q_5;
  U(2.306199526279559, 6.146052623626429, 0.007392631331539908) _gate_q_0;
  s _gate_q_2;
  iswap _gate_q_6, _gate_q_3;
  dcx _gate_q_5, _gate_q_2;
  cz _gate_q_0, _gate_q_4;
  U(3.534571099860942, 3.3032806734554887, 0.7366944388200438) _gate_q_1;
  rzx_5072700576(5.07994757526227) _gate_q_5, _gate_q_2;
  z _gate_q_1;
  ryy_5072700480(1.3326496884273515) _gate_q_3, _gate_q_0;
  cu(4.073619647095444, 4.259130835207416, 3.164073231091245, 5.5897685212352695) _gate_q_6, _gate_q_4;
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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5072702544(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.442614014395688) _gate_q_0;
  u1(1.326857864038673) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7750570438478783, 0, -4.442614014395688) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7750570438478783, 3.115756150357015, 0) _gate_q_1;
}
gate rxx_5072702784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.2898210865207478) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072702736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.32669840637537856) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7291431818579819) _gate_q_1;
  ry(-0.7291431818579819) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.32669840637537856) _gate_q_0;
}
gate r_5072702640(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.016515286494133, 3.1634788754325243, -3.1634788754325243) _gate_q_0;
}
gate r_5072702928(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.096673124035104, 2.4724384431319253, -2.4724384431319253) _gate_q_0;
}
gate rxx_5072703024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7238518772756456) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  u1(0.9408146271240891) _gate_q_1;
  tdg _gate_q_4;
  ecr _gate_q_2, _gate_q_3;
  p(0.5261570525482204) _gate_q_6;
  csdg _gate_q_0, _gate_q_5;
  dcx _gate_q_5, _gate_q_6;
  tdg _gate_q_0;
  ch _gate_q_1, _gate_q_3;
  cs _gate_q_4, _gate_q_2;
  cu3_5072702544(1.5501140876957566, 3.115756150357015, 5.769471878434361) _gate_q_6, _gate_q_5;
  rxx_5072702784(0.2898210865207478) _gate_q_2, _gate_q_0;
  dcx _gate_q_4, _gate_q_3;
  id _gate_q_1;
  sxdg _gate_q_1;
  xx_plus_yy_5072702736(1.4582863637159638, 0.32669840637537856) _gate_q_3, _gate_q_6;
  r_5072702640(6.016515286494133, 4.734275202227421) _gate_q_2;
  u2(2.471138423717691, 1.0329158393620805) _gate_q_5;
  r_5072702928(2.096673124035104, 4.043234769926822) _gate_q_4;
  z _gate_q_0;
  sx _gate_q_2;
  rx(0.46219377715083154) _gate_q_4;
  swap _gate_q_1, _gate_q_5;
  swap _gate_q_6, _gate_q_3;
  z _gate_q_0;
  cs _gate_q_0, _gate_q_1;
  h _gate_q_6;
  rxx_5072703024(0.7238518772756456) _gate_q_2, _gate_q_4;
  ch _gate_q_5, _gate_q_3;
  sdg _gate_q_0;
  cz _gate_q_3, _gate_q_1;
  rx(1.4415891676047454) _gate_q_2;
  p(5.493463900511407) _gate_q_4;
  t _gate_q_6;
  U(2.3273486598972117, 3.21368460281744, 2.708466073238209) _gate_q_5;
}