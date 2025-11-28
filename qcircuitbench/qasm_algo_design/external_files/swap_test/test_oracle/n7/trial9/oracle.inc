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
gate r_5106266000(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.522712493624608, -0.180235898457215, 0.180235898457215) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5106266144(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.497107194696069) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8629318925493656) _gate_q_1;
  ry(-1.8629318925493656) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.497107194696069) _gate_q_0;
}
gate r_5106266048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.063995284785482, 1.0061125181337727, -1.0061125181337727) _gate_q_0;
}
gate xx_plus_yy_5106266336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.444620870581138) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.24652942772212946) _gate_q_1;
  ry(-0.24652942772212946) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.444620870581138) _gate_q_0;
}
gate xx_plus_yy_5106267584(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.8278833692886707) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8147715295772149) _gate_q_1;
  ry(-1.8147715295772149) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.8278833692886707) _gate_q_0;
}
gate xx_minus_yy_5106266624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.796742545553218) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.906198690206161) _gate_q_0;
  ry(-2.906198690206161) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.796742545553218) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
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
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  csx _gate_q_1, _gate_q_0;
  x _gate_q_2;
  sx _gate_q_3;
  x _gate_q_5;
  h _gate_q_4;
  r_5106266000(3.522712493624608, 1.3905604283376816) _gate_q_6;
  rz(4.744631675683564) _gate_q_6;
  id _gate_q_2;
  h _gate_q_4;
  U(2.5643749452946114, 5.904456134825547, 5.74554674429091) _gate_q_5;
  xx_plus_yy_5106266144(3.7258637850987313, 2.497107194696069) _gate_q_0, _gate_q_3;
  r_5106266048(6.063995284785482, 2.5769088449286692) _gate_q_1;
  xx_plus_yy_5106266336(0.4930588554442589, 3.444620870581138) _gate_q_3, _gate_q_2;
  p(1.5606751912932495) _gate_q_0;
  u3(5.734772464219058, 4.770455052273593, 2.131378912637968) _gate_q_6;
  xx_plus_yy_5106267584(3.6295430591544298, 2.8278833692886707) _gate_q_5, _gate_q_1;
  sx _gate_q_4;
  sxdg _gate_q_1;
  s _gate_q_2;
  id _gate_q_0;
  y _gate_q_4;
  ch _gate_q_6, _gate_q_3;
  z _gate_q_5;
  cy _gate_q_5, _gate_q_3;
  xx_minus_yy_5106266624(5.812397380412322, 3.796742545553218) _gate_q_0, _gate_q_1;
  cry(1.775596959892579) _gate_q_6, _gate_q_2;
  u1(0.9586607231515755) _gate_q_4;
  id _gate_q_4;
  rx(2.2604911992001955) _gate_q_1;
  iswap _gate_q_5, _gate_q_0;
  tdg _gate_q_6;
  rx(2.6562745476555625) _gate_q_3;
  sx _gate_q_2;
  cy _gate_q_2, _gate_q_3;
  ecr _gate_q_0, _gate_q_4;
  rx(3.7981967682856808) _gate_q_6;
  cz _gate_q_1, _gate_q_5;
}
gate rxx_5106263408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.299178687490426) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5106263072(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.112617332234376) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.112617332234376) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.112617332234376) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rxx_5106262736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2234872530056156) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5106262928(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.793035800332096) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.756001064409518) _gate_q_1;
  ry(-0.756001064409518) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.793035800332096) _gate_q_0;
}
gate xx_minus_yy_5106261872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.03353460116376008) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3221509654244383) _gate_q_0;
  ry(-1.3221509654244383) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.03353460116376008) _gate_q_1;
}
gate xx_plus_yy_5106261008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.730177589878173) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.009261443688486108) _gate_q_1;
  ry(-0.009261443688486108) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.730177589878173) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  cp(3.2630307178360844) _gate_q_6, _gate_q_1;
  rxx_5106263408(5.299178687490426) _gate_q_0, _gate_q_3;
  cu1_5106263072(6.225234664468752) _gate_q_2, _gate_q_5;
  sxdg _gate_q_4;
  iswap _gate_q_2, _gate_q_1;
  cry(2.1231962843974244) _gate_q_5, _gate_q_6;
  u2(2.766661932845048, 1.1927430136390524) _gate_q_0;
  cs _gate_q_3, _gate_q_4;
  dcx _gate_q_6, _gate_q_5;
  rz(5.131214548357484) _gate_q_2;
  t _gate_q_0;
  cy _gate_q_3, _gate_q_1;
  h _gate_q_4;
  x _gate_q_6;
  crx(2.74451046003992) _gate_q_2, _gate_q_1;
  rxx_5106262736(2.2234872530056156) _gate_q_5, _gate_q_3;
  cx _gate_q_4, _gate_q_0;
  xx_plus_yy_5106262928(1.512002128819036, 4.793035800332096) _gate_q_3, _gate_q_2;
  crz(3.6647726653442536) _gate_q_1, _gate_q_5;
  u2(0.713716383818554, 4.394789929325281) _gate_q_0;
  ch _gate_q_6, _gate_q_4;
  ry(4.53326338961329) _gate_q_3;
  xx_minus_yy_5106261872(2.6443019308488767, 0.03353460116376008) _gate_q_1, _gate_q_2;
  cz _gate_q_0, _gate_q_5;
  h _gate_q_6;
  t _gate_q_4;
  xx_plus_yy_5106261008(0.018522887376972216, 4.730177589878173) _gate_q_3, _gate_q_0;
  cz _gate_q_4, _gate_q_2;
  rz(0.4991835135489066) _gate_q_6;
  x _gate_q_5;
  sdg _gate_q_1;
}