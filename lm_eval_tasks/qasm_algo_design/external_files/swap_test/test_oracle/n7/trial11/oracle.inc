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
gate cu1_5072025072(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.10457618053104) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.10457618053104) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.10457618053104) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5072017920(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.3547255639523916) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9029585231676733) _gate_q_0;
  ry(-1.9029585231676733) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.3547255639523916) _gate_q_1;
}
gate xx_minus_yy_5072021472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.098956159292118) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.0314682826863373) _gate_q_0;
  ry(-3.0314682826863373) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.098956159292118) _gate_q_1;
}
gate xx_minus_yy_5072014944(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.573304418436307) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.783583107139027) _gate_q_0;
  ry(-0.783583107139027) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.573304418436307) _gate_q_1;
}
gate xx_minus_yy_5072011728(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.01794095099088238) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5305668142325666) _gate_q_0;
  ry(-2.5305668142325666) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.01794095099088238) _gate_q_1;
}
gate ryy_5072016384(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.097901391770742) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5072027376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.657017839492323) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5072014416(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.746995600720738) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.080730892113374) _gate_q_0;
  ry(-3.080730892113374) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.746995600720738) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  ecr _gate_q_6, _gate_q_5;
  cu1_5072025072(4.20915236106208) _gate_q_3, _gate_q_4;
  xx_minus_yy_5072017920(3.8059170463353467, 3.3547255639523916) _gate_q_1, _gate_q_2;
  sdg _gate_q_0;
  ecr _gate_q_4, _gate_q_0;
  u3(3.827835110476865, 3.485682562367556, 2.2983791512859573) _gate_q_3;
  x _gate_q_2;
  sx _gate_q_5;
  y _gate_q_6;
  tdg _gate_q_1;
  xx_minus_yy_5072021472(6.062936565372675, 4.098956159292118) _gate_q_4, _gate_q_3;
  U(5.934212002155913, 4.752229090516541, 5.209259620813746) _gate_q_5;
  u3(4.653438564526172, 3.960668869811794, 0.10697195067884292) _gate_q_2;
  crz(4.714284023057538) _gate_q_1, _gate_q_0;
  sx _gate_q_6;
  xx_minus_yy_5072014944(1.567166214278054, 5.573304418436307) _gate_q_4, _gate_q_6;
  xx_minus_yy_5072011728(5.061133628465133, 0.01794095099088238) _gate_q_0, _gate_q_2;
  rx(3.5326857352470302) _gate_q_3;
  swap _gate_q_1, _gate_q_5;
  p(0.49195793817180367) _gate_q_0;
  x _gate_q_3;
  rx(2.8380470260854427) _gate_q_5;
  ryy_5072016384(5.097901391770742) _gate_q_4, _gate_q_6;
  cx _gate_q_1, _gate_q_2;
  rxx_5072027376(5.657017839492323) _gate_q_0, _gate_q_4;
  h _gate_q_2;
  u2(1.5926230993482564, 5.67938504166336) _gate_q_1;
  sxdg _gate_q_3;
  swap _gate_q_6, _gate_q_5;
  rx(3.0960916586318765) _gate_q_1;
  t _gate_q_3;
  ry(0.11933490498338105) _gate_q_5;
  ry(3.8219444151732795) _gate_q_6;
  xx_minus_yy_5072014416(6.161461784226748, 5.746995600720738) _gate_q_4, _gate_q_0;
  tdg _gate_q_2;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5070861712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.682379567912465) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5070859840(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.8759576996086764) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5070860368(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.272316032427518) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.901974684036165) _gate_q_0;
  ry(-2.901974684036165) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.272316032427518) _gate_q_1;
}
gate xx_plus_yy_5070850672(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.731909239878542) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.873464179153389) _gate_q_1;
  ry(-2.873464179153389) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.731909239878542) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5070860464(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.357071650838142) _gate_q_0;
  u1(1.2830954070486664) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.4540788544889054, 0, -4.357071650838142) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.4540788544889054, 3.0739762437894753, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  dcx _gate_q_0, _gate_q_1;
  rzx_5070861712(5.682379567912465) _gate_q_2, _gate_q_4;
  sxdg _gate_q_6;
  crx(4.069335900611904) _gate_q_3, _gate_q_5;
  cs _gate_q_1, _gate_q_6;
  cy _gate_q_3, _gate_q_4;
  cx _gate_q_2, _gate_q_5;
  sdg _gate_q_0;
  sxdg _gate_q_0;
  cry(2.7699332892629847) _gate_q_5, _gate_q_3;
  z _gate_q_4;
  id _gate_q_1;
  ry(1.7611792511244966) _gate_q_6;
  s _gate_q_2;
  cy _gate_q_2, _gate_q_0;
  cz _gate_q_4, _gate_q_3;
  csdg _gate_q_5, _gate_q_6;
  t _gate_q_1;
  rzz_5070859840(3.8759576996086764) _gate_q_6, _gate_q_5;
  xx_minus_yy_5070860368(5.80394936807233, 6.272316032427518) _gate_q_3, _gate_q_0;
  ecr _gate_q_4, _gate_q_1;
  tdg _gate_q_2;
  xx_plus_yy_5070850672(5.746928358306778, 5.731909239878542) _gate_q_2, _gate_q_5;
  iswap _gate_q_0, _gate_q_4;
  sx _gate_q_1;
  iswap _gate_q_6, _gate_q_3;
  cry(2.588085383158444) _gate_q_5, _gate_q_1;
  iswap _gate_q_6, _gate_q_3;
  cu3_5070860464(4.908157708977811, 3.0739762437894753, 5.640167057886808) _gate_q_2, _gate_q_4;
  s _gate_q_0;
}