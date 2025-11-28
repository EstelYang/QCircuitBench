gate cu3_5106009824(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8082903280395812) _gate_q_0;
  u1(-2.2875735133288386) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.218103088734146, 0, -2.8082903280395812) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.218103088734146, 5.09586384136842, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate r_5106010688(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.040544670918038, 1.9745871821090044, -1.9745871821090044) _gate_q_0;
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
gate rxx_5106011120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.7720547378305564) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5106010832(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.038226840002619) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5106010976(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.72491656635982) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5106011072(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.13301577575072868) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  cu3_5106009824(4.436206177468292, 5.09586384136842, 0.5207168147107429) _gate_q_5, _gate_q_6;
  cz _gate_q_1, _gate_q_0;
  u1(0.6495630625067268) _gate_q_4;
  t _gate_q_3;
  ry(0.66575829352101) _gate_q_2;
  csdg _gate_q_6, _gate_q_0;
  cz _gate_q_2, _gate_q_4;
  sxdg _gate_q_1;
  sdg _gate_q_3;
  h _gate_q_5;
  swap _gate_q_1, _gate_q_2;
  r_5106010688(5.040544670918038, 3.545383508903901) _gate_q_4;
  iswap _gate_q_3, _gate_q_5;
  tdg _gate_q_6;
  ry(0.23900707324882015) _gate_q_0;
  U(3.7680116642353063, 2.2375982119982267, 1.7394321900342626) _gate_q_5;
  cx _gate_q_6, _gate_q_1;
  y _gate_q_4;
  rx(5.421493170062479) _gate_q_3;
  tdg _gate_q_0;
  U(1.2828324705098264, 2.3545363961635877, 5.544680837762848) _gate_q_2;
  dcx _gate_q_6, _gate_q_2;
  y _gate_q_4;
  rxx_5106011120(5.7720547378305564) _gate_q_1, _gate_q_0;
  z _gate_q_5;
  t _gate_q_3;
  s _gate_q_3;
  sx _gate_q_2;
  z _gate_q_6;
  cz _gate_q_1, _gate_q_5;
  rzz_5106010832(6.038226840002619) _gate_q_4, _gate_q_0;
  ryy_5106010976(4.72491656635982) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_6;
  ryy_5106011072(0.13301577575072868) _gate_q_0, _gate_q_2;
  h _gate_q_3;
}
gate xx_minus_yy_5106012752(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.2590577222105421) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9046580843755025) _gate_q_0;
  ry(-0.9046580843755025) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.2590577222105421) _gate_q_1;
}
gate ryy_5106012704(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.538028962503245) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5106012608(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.812344083610817) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5106012848(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4221014756657295) _gate_q_1;
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
gate r_5106012992(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.15212522123977584, 4.687073804964781, -4.687073804964781) _gate_q_0;
}
gate r_5106013040(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.593418155526469, 1.6175993945719145, -1.6175993945719145) _gate_q_0;
}
gate ryy_5106012944(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9791674045877258) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5106013136(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.279719641971719) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6983095734766065) _gate_q_1;
  ry(-1.6983095734766065) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.279719641971719) _gate_q_0;
}
gate r_5106013184(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.8332657834853143, 4.014889749279232, -4.014889749279232) _gate_q_0;
}
gate r_5106013088(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.433022587294797, -0.13666661257601498, 0.13666661257601498) _gate_q_0;
}
gate xx_minus_yy_5106013232(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.036969393388642) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.2742920336157715) _gate_q_0;
  ry(-0.2742920336157715) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.036969393388642) _gate_q_1;
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
gate cu1_5106013472(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.8396693471480647) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.8396693471480647) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.8396693471480647) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  xx_minus_yy_5106012752(1.809316168751005, 1.2590577222105421) _gate_q_0, _gate_q_3;
  ryy_5106012704(1.538028962503245) _gate_q_5, _gate_q_2;
  rzz_5106012608(3.812344083610817) _gate_q_6, _gate_q_1;
  tdg _gate_q_4;
  rxx_5106012848(2.4221014756657295) _gate_q_5, _gate_q_0;
  crz(0.5836241215755962) _gate_q_6, _gate_q_3;
  cs _gate_q_1, _gate_q_4;
  r_5106012992(0.15212522123977584, 6.257870131759677) _gate_q_2;
  r_5106013040(5.593418155526469, 3.188395721366811) _gate_q_6;
  h _gate_q_0;
  ryy_5106012944(0.9791674045877258) _gate_q_5, _gate_q_4;
  sx _gate_q_2;
  cz _gate_q_1, _gate_q_3;
  s _gate_q_4;
  xx_plus_yy_5106013136(3.396619146953213, 4.279719641971719) _gate_q_2, _gate_q_1;
  r_5106013184(2.8332657834853143, 5.585686076074128) _gate_q_3;
  cy _gate_q_0, _gate_q_5;
  r_5106013088(4.433022587294797, 1.4341297142188816) _gate_q_6;
  crz(4.300367925378622) _gate_q_2, _gate_q_4;
  cs _gate_q_3, _gate_q_1;
  xx_minus_yy_5106013232(0.548584067231543, 2.036969393388642) _gate_q_0, _gate_q_5;
  s _gate_q_6;
  u3(3.589613083463069, 2.4150960975151454, 1.5528853801845133) _gate_q_6;
  u1(3.139930229999057) _gate_q_5;
  dcx _gate_q_2, _gate_q_3;
  csx _gate_q_1, _gate_q_0;
  h _gate_q_4;
  cu1_5106013472(5.6793386942961295) _gate_q_0, _gate_q_1;
  cy _gate_q_5, _gate_q_3;
  csdg _gate_q_6, _gate_q_4;
  h _gate_q_2;
}