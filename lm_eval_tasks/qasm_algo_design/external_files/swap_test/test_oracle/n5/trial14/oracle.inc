gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5070850048(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.2052398351089342) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.4573099076898543) _gate_q_1;
  ry(-0.4573099076898543) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.2052398351089342) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate xx_plus_yy_5070852976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.5015382099400223) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.486326394408656) _gate_q_1;
  ry(-1.486326394408656) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.5015382099400223) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  swap _gate_q_0, _gate_q_4;
  u2(3.0370782276880375, 5.893722658989105) _gate_q_3;
  crz(0.9491270353246702) _gate_q_1, _gate_q_2;
  xx_plus_yy_5070850048(0.9146198153797086, 1.2052398351089342) _gate_q_2, _gate_q_1;
  iswap _gate_q_3, _gate_q_0;
  rx(4.746485103254984) _gate_q_4;
  cp(2.333807671451064) _gate_q_3, _gate_q_0;
  rx(5.4359989761619) _gate_q_2;
  csx _gate_q_4, _gate_q_1;
  iswap _gate_q_1, _gate_q_2;
  t _gate_q_4;
  xx_plus_yy_5070852976(2.972652788817312, 2.5015382099400223) _gate_q_0, _gate_q_3;
  sdg _gate_q_3;
  ry(0.37574681503328167) _gate_q_2;
  h _gate_q_0;
  cu(3.2497743782090023, 3.8387248776280156, 3.9594462481801416, 5.498155674647138) _gate_q_4, _gate_q_1;
}
gate xx_minus_yy_5070863920(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.185651058121402) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.2180759315979497) _gate_q_0;
  ry(-2.2180759315979497) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.185651058121402) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5070863536(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.854350226797297) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.17423996933757985) _gate_q_1;
  ry(-0.17423996933757985) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.854350226797297) _gate_q_0;
}
gate rzx_5070853264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.184472756200629) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5070849472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.212078080440194) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1445813064944088) _gate_q_0;
  ry(-1.1445813064944088) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.212078080440194) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  h _gate_q_3;
  xx_minus_yy_5070863920(4.436151863195899, 6.185651058121402) _gate_q_2, _gate_q_0;
  csx _gate_q_4, _gate_q_1;
  id _gate_q_2;
  rz(4.443115399084314) _gate_q_0;
  dcx _gate_q_1, _gate_q_3;
  p(2.4295914053202448) _gate_q_4;
  xx_plus_yy_5070863536(0.3484799386751597, 5.854350226797297) _gate_q_0, _gate_q_4;
  rzx_5070853264(3.184472756200629) _gate_q_1, _gate_q_3;
  u1(5.660540508986002) _gate_q_2;
  xx_minus_yy_5070849472(2.2891626129888176, 2.212078080440194) _gate_q_1, _gate_q_0;
  h _gate_q_4;
  csdg _gate_q_3, _gate_q_2;
  csdg _gate_q_3, _gate_q_2;
  swap _gate_q_4, _gate_q_0;
  y _gate_q_1;
}