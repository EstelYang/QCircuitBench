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
gate ryy_5070861616(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8519022055874884) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate cu3_5070848608(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.3219716652726454) _gate_q_0;
  u1(0.2797101266001105) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0724614797227932, 0, -1.3219716652726454) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0724614797227932, 1.042261538672535, 0) _gate_q_1;
}
gate rzz_5070856000(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.287222842533237) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5070848320(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.231719452896443) _gate_q_0;
  u1(0.16900460394988315) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.1768497757056267, 0, -4.231719452896443) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.1768497757056267, 4.06271484894656, 0) _gate_q_1;
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
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  csx _gate_q_5, _gate_q_3;
  crz(3.3374279342607007) _gate_q_1, _gate_q_0;
  crz(1.1012133812904927) _gate_q_2, _gate_q_4;
  csx _gate_q_4, _gate_q_3;
  u1(4.242270919929307) _gate_q_0;
  ryy_5070861616(0.8519022055874884) _gate_q_1, _gate_q_2;
  sxdg _gate_q_5;
  cu3_5070848608(2.1449229594455863, 1.042261538672535, 1.601681791872756) _gate_q_1, _gate_q_2;
  ch _gate_q_4, _gate_q_3;
  rzz_5070856000(3.287222842533237) _gate_q_5, _gate_q_0;
  ry(0.5554366830592117) _gate_q_4;
  cs _gate_q_0, _gate_q_1;
  h _gate_q_2;
  iswap _gate_q_3, _gate_q_5;
  u2(5.632759345493394, 5.2351142298141) _gate_q_0;
  cu3_5070848320(4.353699551411253, 4.06271484894656, 4.400724056846326) _gate_q_2, _gate_q_5;
  cx _gate_q_3, _gate_q_1;
  sdg _gate_q_4;
  u1(5.20944464913721) _gate_q_2;
  crx(0.1665491352461151) _gate_q_5, _gate_q_1;
  ecr _gate_q_3, _gate_q_0;
  ry(0.9771580263354965) _gate_q_4;
}
gate cu3_5070598608(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6258293837901374) _gate_q_0;
  u1(0.8727173153755889) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8931127434172335, 0, -1.6258293837901374) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8931127434172335, 0.7531120684145485, 0) _gate_q_1;
}
gate rzz_5070595968(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.87804162409021) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5070593088(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.328780824048634) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2102727699359466) _gate_q_1;
  ry(-1.2102727699359466) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.328780824048634) _gate_q_0;
}
gate rzz_5070592224(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.8190337424415879) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  cu3_5070598608(5.786225486834467, 0.7531120684145485, 2.4985466991657264) _gate_q_4, _gate_q_5;
  ry(5.439716229186577) _gate_q_1;
  crz(1.5708297646058238) _gate_q_3, _gate_q_0;
  U(0.7241303669783519, 0.39781734511029243, 3.18789252504074) _gate_q_2;
  rx(2.619063356192909) _gate_q_0;
  y _gate_q_2;
  y _gate_q_3;
  rzz_5070595968(2.87804162409021) _gate_q_4, _gate_q_5;
  u3(3.3355118590746216, 3.690915593381207, 4.9411799619531545) _gate_q_1;
  ch _gate_q_0, _gate_q_4;
  t _gate_q_1;
  xx_plus_yy_5070593088(2.420545539871893, 2.328780824048634) _gate_q_2, _gate_q_5;
  h _gate_q_3;
  u3(5.508660241650344, 1.2928899252825652, 2.9106856110189794) _gate_q_5;
  crx(5.2448751231212905) _gate_q_4, _gate_q_3;
  cz _gate_q_2, _gate_q_0;
  y _gate_q_1;
  sxdg _gate_q_5;
  cp(0.7134136480521093) _gate_q_4, _gate_q_1;
  t _gate_q_0;
  cy _gate_q_2, _gate_q_3;
  U(3.4490682028084803, 2.546913543615665, 1.6446982131050247) _gate_q_2;
  swap _gate_q_4, _gate_q_3;
  p(3.401600078999904) _gate_q_0;
  rzz_5070592224(1.8190337424415879) _gate_q_5, _gate_q_1;
}