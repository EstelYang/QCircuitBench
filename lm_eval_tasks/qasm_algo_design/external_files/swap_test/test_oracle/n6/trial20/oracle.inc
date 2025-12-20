gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5070906448(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.6632531929993135) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9733574911835456) _gate_q_1;
  ry(-1.9733574911835456) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.6632531929993135) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5070909424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.12553418672986) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5070905584(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.151222543730557) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.151222543730557) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.151222543730557) _gate_q_1;
}
gate ryy_5070900544(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.274500664726155) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5070909664(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.06487168829985608) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  U(4.912052233414031, 4.383880990087982, 5.979621902681538) _gate_q_3;
  xx_plus_yy_5070906448(3.9467149823670913, 1.6632531929993135) _gate_q_2, _gate_q_4;
  cx _gate_q_5, _gate_q_0;
  ry(1.1529787675931915) _gate_q_1;
  cu(3.6043230085773623, 1.0623735965150967, 5.454561991765769, 3.8947692430825422) _gate_q_5, _gate_q_3;
  swap _gate_q_0, _gate_q_2;
  U(0.7690102796320836, 2.6225890359206807, 2.0285351286297844) _gate_q_1;
  rx(1.339351486872006) _gate_q_4;
  cp(6.02034071427334) _gate_q_5, _gate_q_0;
  dcx _gate_q_3, _gate_q_4;
  U(0.7141046072720717, 0.32630154395873634, 0.7390841606327897) _gate_q_2;
  x _gate_q_1;
  h _gate_q_3;
  rzx_5070909424(3.12553418672986) _gate_q_2, _gate_q_0;
  U(5.262115100850625, 2.38214887778183, 2.7308582008007636) _gate_q_4;
  y _gate_q_1;
  s _gate_q_5;
  sx _gate_q_1;
  cu1_5070905584(2.302445087461114) _gate_q_0, _gate_q_4;
  rz(1.3997089774794342) _gate_q_5;
  ryy_5070900544(6.274500664726155) _gate_q_2, _gate_q_3;
  rxx_5070909664(0.06487168829985608) _gate_q_3, _gate_q_4;
  tdg _gate_q_2;
  dcx _gate_q_1, _gate_q_5;
  sx _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5072021232(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.8537345754944448, -0.4537902278150241, 0.4537902278150241) _gate_q_0;
}
gate ryy_5072020608(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3056306342334087) _gate_q_1;
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
gate cu1_5072013024(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.7827661837292412) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.7827661837292412) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.7827661837292412) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  cp(0.28959709731153943) _gate_q_4, _gate_q_3;
  p(3.215529153174266) _gate_q_0;
  cs _gate_q_5, _gate_q_2;
  sx _gate_q_1;
  id _gate_q_5;
  cy _gate_q_3, _gate_q_1;
  crx(1.57145721762199) _gate_q_2, _gate_q_0;
  r_5072021232(3.8537345754944448, 1.1170060989798725) _gate_q_4;
  x _gate_q_1;
  x _gate_q_3;
  p(1.1744446235268442) _gate_q_5;
  ryy_5072020608(2.3056306342334087) _gate_q_4, _gate_q_0;
  tdg _gate_q_2;
  x _gate_q_3;
  ch _gate_q_0, _gate_q_5;
  csdg _gate_q_4, _gate_q_1;
  u2(6.271546071095531, 2.876900385273394) _gate_q_2;
  u3(2.525801492952497, 5.0484063104744035, 2.7759102592352) _gate_q_5;
  cx _gate_q_4, _gate_q_2;
  h _gate_q_3;
  cx _gate_q_1, _gate_q_0;
  cu1_5072013024(3.5655323674584825) _gate_q_3, _gate_q_1;
  u2(2.0698113471139896, 0.9475227667632675) _gate_q_0;
  cx _gate_q_4, _gate_q_2;
  p(3.3292422437478932) _gate_q_5;
}