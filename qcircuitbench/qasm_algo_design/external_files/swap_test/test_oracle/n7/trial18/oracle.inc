gate ryy_5072254784(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1975454610667833) _gate_q_1;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5072256608(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.3111651840709038) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7154273807068249) _gate_q_0;
  ry(-0.7154273807068249) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.3111651840709038) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzz_5072246432(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.788530752777758) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  ryy_5072254784(3.1975454610667833) _gate_q_4, _gate_q_5;
  u3(0.13825930206727025, 0.28468986697531995, 4.6632578139584595) _gate_q_2;
  csdg _gate_q_3, _gate_q_1;
  csx _gate_q_0, _gate_q_6;
  xx_minus_yy_5072256608(1.4308547614136498, 2.3111651840709038) _gate_q_0, _gate_q_3;
  ch _gate_q_5, _gate_q_4;
  cy _gate_q_1, _gate_q_6;
  sx _gate_q_2;
  tdg _gate_q_3;
  crx(4.250347351202739) _gate_q_5, _gate_q_0;
  cp(4.697788076460732) _gate_q_6, _gate_q_4;
  dcx _gate_q_2, _gate_q_1;
  p(4.5097341028035425) _gate_q_0;
  id _gate_q_4;
  ry(5.74084226306216) _gate_q_5;
  ch _gate_q_6, _gate_q_2;
  x _gate_q_3;
  u3(0.0526255950223129, 1.0459601639494973, 2.348100519108769) _gate_q_1;
  iswap _gate_q_3, _gate_q_1;
  z _gate_q_2;
  rzz_5072246432(5.788530752777758) _gate_q_0, _gate_q_5;
  iswap _gate_q_6, _gate_q_4;
  cp(0.6259753910892627) _gate_q_6, _gate_q_2;
  rx(4.67115558048541) _gate_q_5;
  tdg _gate_q_1;
  id _gate_q_3;
  cz _gate_q_4, _gate_q_0;
  s _gate_q_6;
  cx _gate_q_3, _gate_q_1;
  crz(2.339401617607873) _gate_q_4, _gate_q_2;
  p(1.8002641405150752) _gate_q_5;
  x _gate_q_0;
}
gate rzx_5072253344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.292316464431407) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5072252864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.886830378110523) _gate_q_1;
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
gate rzz_5072255696(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.341756861786183) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5072251280(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.06368419473928637) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072249936(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.0995530568778005) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5072248832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8689246780315474) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072256896(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.785691590897729) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5072242112(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.080662752118033) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.891402052989122) _gate_q_1;
  ry(-2.891402052989122) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.080662752118033) _gate_q_0;
}
gate r_5072256080(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.528740629072622, -0.11459586058060944, 0.11459586058060944) _gate_q_0;
}
gate r_5072246912(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.306335379298845, 2.9272134648539865, -2.9272134648539865) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  rzx_5072253344(4.292316464431407) _gate_q_0, _gate_q_3;
  u3(2.229800814737372, 2.3972627640156303, 5.554761643851376) _gate_q_5;
  t _gate_q_2;
  ry(5.151330768992212) _gate_q_6;
  u1(0.43549675000410704) _gate_q_4;
  rx(4.920967895711925) _gate_q_1;
  rzx_5072252864(2.886830378110523) _gate_q_3, _gate_q_0;
  ecr _gate_q_1, _gate_q_2;
  h _gate_q_6;
  rzz_5072255696(3.341756861786183) _gate_q_5, _gate_q_4;
  id _gate_q_5;
  ch _gate_q_1, _gate_q_6;
  rxx_5072251280(0.06368419473928637) _gate_q_3, _gate_q_2;
  rzx_5072249936(6.0995530568778005) _gate_q_4, _gate_q_0;
  csdg _gate_q_4, _gate_q_6;
  crz(5.350889342436153) _gate_q_0, _gate_q_3;
  csx _gate_q_2, _gate_q_5;
  sx _gate_q_1;
  csx _gate_q_5, _gate_q_6;
  rzx_5072248832(0.8689246780315474) _gate_q_1, _gate_q_2;
  U(2.298283763690468, 3.474825500845196, 3.2615211889540383) _gate_q_4;
  swap _gate_q_0, _gate_q_3;
  rzz_5072256896(3.785691590897729) _gate_q_0, _gate_q_5;
  xx_plus_yy_5072242112(5.782804105978244, 2.080662752118033) _gate_q_1, _gate_q_3;
  u1(1.3427368886436688) _gate_q_4;
  s _gate_q_2;
  r_5072256080(4.528740629072622, 1.4562004662142871) _gate_q_6;
  crz(4.9093442358582) _gate_q_2, _gate_q_3;
  dcx _gate_q_4, _gate_q_6;
  r_5072246912(5.306335379298845, 4.498009791648883) _gate_q_1;
  cy _gate_q_0, _gate_q_5;
}