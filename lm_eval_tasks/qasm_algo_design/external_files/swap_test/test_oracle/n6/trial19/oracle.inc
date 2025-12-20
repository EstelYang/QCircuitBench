gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5070302592(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.5165020274593042) _gate_q_0;
  u1(-0.6762978236226034) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.711647166234748, 0, -1.5165020274593042) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.711647166234748, 2.1927998510819076, 0) _gate_q_1;
}
gate cu3_5070292032(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3182409725559125) _gate_q_0;
  u1(-2.8909600930387294) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5576818231442164, 0, -3.3182409725559125) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5576818231442164, 6.209201065594642, 0) _gate_q_1;
}
gate r_5070302448(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.58509027006657, -0.5921299133993829, 0.5921299133993829) _gate_q_0;
}
gate r_5070294192(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.352698445874188, -0.02029024923921896, 0.02029024923921896) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  csdg _gate_q_1, _gate_q_5;
  y _gate_q_0;
  cu3_5070302592(5.423294332469496, 2.1927998510819076, 0.8402042038367009) _gate_q_2, _gate_q_3;
  u3(4.325757602400756, 2.9426393427830266, 4.24394228712209) _gate_q_4;
  cx _gate_q_5, _gate_q_2;
  cx _gate_q_1, _gate_q_0;
  cu3_5070292032(3.115363646288433, 6.209201065594642, 0.4272808795171834) _gate_q_4, _gate_q_3;
  crz(1.6560265547660213) _gate_q_4, _gate_q_0;
  rx(0.22563412489596807) _gate_q_1;
  r_5070302448(1.58509027006657, 0.9786664133955136) _gate_q_5;
  rz(1.9485990054755076) _gate_q_3;
  x _gate_q_2;
  cy _gate_q_0, _gate_q_3;
  r_5070294192(3.352698445874188, 1.5505060775556776) _gate_q_5;
  p(5.3072109500330775) _gate_q_4;
  U(1.6655268968299406, 6.0999172142666485, 5.538202059818197) _gate_q_2;
  h _gate_q_1;
  z _gate_q_0;
  rx(4.760709896782972) _gate_q_4;
  rz(4.302010544408387) _gate_q_3;
  y _gate_q_2;
  tdg _gate_q_1;
  id _gate_q_5;
  y _gate_q_1;
  id _gate_q_5;
  u2(4.965944372587835, 6.101212009730954) _gate_q_4;
  p(5.6228127299709945) _gate_q_3;
  u2(2.017476072652328, 1.375206906706917) _gate_q_2;
  U(4.425408706040325, 1.7943897072286163, 4.646072933663594) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5070799888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.514142486234619) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0372286363309962) _gate_q_0;
  ry(-1.0372286363309962) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.514142486234619) _gate_q_1;
}
gate cu3_5070813856(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.343933072065784) _gate_q_0;
  u1(-0.2940374862352537) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3209190788042982, 0, -4.343933072065784) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3209190788042982, 4.637970558301038, 0) _gate_q_1;
}
gate cu1_5070802336(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.4454030629662891) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.4454030629662891) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.4454030629662891) _gate_q_1;
}
gate rzx_5070799024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0463566145781207) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5070127376(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.853972556950408) _gate_q_0;
  u1(-0.037350020959554975) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2514389627350715, 0, -4.853972556950408) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2514389627350715, 4.891322577909963, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_minus_yy_5070137696(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.2806254299667748) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7618619254568755) _gate_q_0;
  ry(-1.7618619254568755) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.2806254299667748) _gate_q_1;
}
gate rxx_5070129344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1135345420670273) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  xx_minus_yy_5070799888(2.0744572726619923, 3.514142486234619) _gate_q_2, _gate_q_3;
  h _gate_q_5;
  sdg _gate_q_4;
  cu3_5070813856(2.6418381576085963, 4.637970558301038, 4.049895585830531) _gate_q_0, _gate_q_1;
  cry(0.8646319289655647) _gate_q_1, _gate_q_5;
  cu1_5070802336(0.8908061259325782) _gate_q_3, _gate_q_4;
  cy _gate_q_2, _gate_q_0;
  rzx_5070799024(3.0463566145781207) _gate_q_1, _gate_q_0;
  id _gate_q_5;
  h _gate_q_2;
  sdg _gate_q_3;
  p(5.400975489342431) _gate_q_4;
  cry(2.5702019821605098) _gate_q_4, _gate_q_2;
  U(4.743334084869047, 5.4579794583171894, 0.18215457550425873) _gate_q_5;
  cu3_5070127376(2.502877925470143, 4.891322577909963, 4.816622535990853) _gate_q_0, _gate_q_1;
  sdg _gate_q_3;
  dcx _gate_q_5, _gate_q_3;
  xx_minus_yy_5070137696(3.523723850913751, 2.2806254299667748) _gate_q_2, _gate_q_1;
  s _gate_q_0;
  x _gate_q_4;
  rxx_5070129344(3.1135345420670273) _gate_q_5, _gate_q_2;
  sx _gate_q_4;
  cx _gate_q_3, _gate_q_0;
  h _gate_q_1;
}