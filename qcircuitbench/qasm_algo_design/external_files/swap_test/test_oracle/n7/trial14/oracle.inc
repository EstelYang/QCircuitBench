gate r_5070300624(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.9091622154710213, 1.2251472656024838, -1.2251472656024838) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate r_5070296208(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.7368132315305176, 0.11594181116015068, -0.11594181116015068) _gate_q_0;
}
gate xx_minus_yy_5070299808(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.15220627184316207) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.1748531232567063) _gate_q_0;
  ry(-2.1748531232567063) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.15220627184316207) _gate_q_1;
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
gate xx_minus_yy_5070296688(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.115135211116245) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.373923529394968) _gate_q_0;
  ry(-1.373923529394968) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.115135211116245) _gate_q_1;
}
gate rzx_5070301104(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.237842433439012) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate rzz_5070304944(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.718464382757849) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5070303120(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.135464147860131) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzz_5070301776(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.722742974553467) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5070295824(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.898376320850251) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  r_5070300624(3.9091622154710213, 2.7959435923973803) _gate_q_4;
  sxdg _gate_q_3;
  cx _gate_q_0, _gate_q_6;
  r_5070296208(1.7368132315305176, 1.6867381379550472) _gate_q_5;
  ch _gate_q_1, _gate_q_2;
  ch _gate_q_0, _gate_q_2;
  xx_minus_yy_5070299808(4.349706246513413, 0.15220627184316207) _gate_q_3, _gate_q_4;
  swap _gate_q_5, _gate_q_6;
  h _gate_q_1;
  tdg _gate_q_2;
  iswap _gate_q_5, _gate_q_1;
  ecr _gate_q_0, _gate_q_3;
  z _gate_q_4;
  id _gate_q_6;
  xx_minus_yy_5070296688(2.747847058789936, 4.115135211116245) _gate_q_1, _gate_q_6;
  rzx_5070301104(6.237842433439012) _gate_q_0, _gate_q_5;
  csx _gate_q_2, _gate_q_3;
  tdg _gate_q_4;
  iswap _gate_q_1, _gate_q_6;
  h _gate_q_5;
  rzz_5070304944(4.718464382757849) _gate_q_2, _gate_q_0;
  ryy_5070303120(4.135464147860131) _gate_q_4, _gate_q_3;
  cs _gate_q_4, _gate_q_5;
  sx _gate_q_0;
  rzz_5070301776(5.722742974553467) _gate_q_1, _gate_q_3;
  rxx_5070295824(5.898376320850251) _gate_q_2, _gate_q_6;
  ch _gate_q_5, _gate_q_0;
  cry(3.8195615799890823) _gate_q_6, _gate_q_4;
  u3(3.6500784329989338, 1.990891482613886, 3.9726977335330917) _gate_q_2;
  sxdg _gate_q_1;
  U(2.7991093088205616, 2.1592166949351457, 5.5898042454654) _gate_q_3;
}
gate rxx_5072023584(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4116561989557452) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072019360(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.060763077412542, 1.822585386845501, -1.822585386845501) _gate_q_0;
}
gate xx_plus_yy_5072016384(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.8375330559572483) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.17925897768537968) _gate_q_1;
  ry(-0.17925897768537968) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.8375330559572483) _gate_q_0;
}
gate xx_plus_yy_5072024976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.3277401109597115) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3640160847182043) _gate_q_1;
  ry(-2.3640160847182043) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.3277401109597115) _gate_q_0;
}
gate r_5072025072(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.0386254244219226, 0.04767279424119941, -0.04767279424119941) _gate_q_0;
}
gate rxx_5072011632(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.59366833143664) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072026512(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.3384173288189416, -1.4977529432516032, 1.4977529432516032) _gate_q_0;
}
gate xx_minus_yy_5072015280(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.629323313946153) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1911345422079471) _gate_q_0;
  ry(-1.1911345422079471) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.629323313946153) _gate_q_1;
}
gate rzz_5072024112(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.329861720980342) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  rxx_5072023584(1.4116561989557452) _gate_q_2, _gate_q_5;
  r_5072019360(5.060763077412542, 3.3933817136403976) _gate_q_1;
  xx_plus_yy_5072016384(0.35851795537075937, 2.8375330559572483) _gate_q_3, _gate_q_0;
  U(5.320481424833304, 1.9147517987160123, 4.357205609142154) _gate_q_6;
  x _gate_q_4;
  rz(3.9490062569073148) _gate_q_0;
  cp(3.783022579812215) _gate_q_6, _gate_q_5;
  ch _gate_q_1, _gate_q_3;
  crx(4.262279037318694) _gate_q_2, _gate_q_4;
  xx_plus_yy_5072024976(4.728032169436409, 0.3277401109597115) _gate_q_1, _gate_q_5;
  u2(5.525521198939128, 3.7065627580256217) _gate_q_6;
  id _gate_q_2;
  cx _gate_q_3, _gate_q_4;
  x _gate_q_0;
  U(4.2176030086041605, 2.7280504280853317, 1.0026702878309919) _gate_q_2;
  h _gate_q_5;
  cu(4.442957165569107, 2.8579767619838377, 3.8599652214713656, 4.001014149141662) _gate_q_4, _gate_q_3;
  ry(1.4432001971748047) _gate_q_1;
  cz _gate_q_0, _gate_q_6;
  z _gate_q_1;
  t _gate_q_0;
  z _gate_q_2;
  cy _gate_q_4, _gate_q_6;
  u3(5.23246027353948, 4.341295012755745, 3.179059137956124) _gate_q_5;
  r_5072025072(2.0386254244219226, 1.618469121036096) _gate_q_3;
  p(2.591652182280801) _gate_q_2;
  rx(2.6008155585329193) _gate_q_0;
  rxx_5072011632(4.59366833143664) _gate_q_4, _gate_q_6;
  swap _gate_q_5, _gate_q_3;
  r_5072026512(2.3384173288189416, 0.07304338354329325) _gate_q_1;
  xx_minus_yy_5072015280(2.3822690844158942, 5.629323313946153) _gate_q_5, _gate_q_6;
  rzz_5072024112(4.329861720980342) _gate_q_3, _gate_q_4;
  csdg _gate_q_0, _gate_q_1;
  U(2.8623030943756267, 4.163618264707582, 2.5019112683906695) _gate_q_2;
}