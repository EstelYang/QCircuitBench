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
gate rzx_5105282768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3639461828710604) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5105278976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.6584504623470293) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.512991018911251) _gate_q_1;
  ry(-1.512991018911251) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.6584504623470293) _gate_q_0;
}
gate xx_plus_yy_5105281088(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.2637876342358902) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2361154583326692) _gate_q_1;
  ry(-1.2361154583326692) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.2637876342358902) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  csx _gate_q_2, _gate_q_3;
  cp(5.997258508154777) _gate_q_0, _gate_q_1;
  ecr _gate_q_1, _gate_q_0;
  sx _gate_q_3;
  u1(4.622641924325711) _gate_q_2;
  y _gate_q_1;
  rzx_5105282768(2.3639461828710604) _gate_q_2, _gate_q_0;
  rz(2.8154947812035864) _gate_q_3;
  xx_plus_yy_5105278976(3.025982037822502, 3.6584504623470293) _gate_q_3, _gate_q_2;
  xx_plus_yy_5105281088(2.4722309166653385, 3.2637876342358902) _gate_q_1, _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  cz _gate_q_0, _gate_q_1;
  t _gate_q_3;
  u1(3.2523937344042184) _gate_q_2;
  dcx _gate_q_3, _gate_q_1;
  cy _gate_q_0, _gate_q_2;
  cy _gate_q_2, _gate_q_3;
  crz(4.332872940901666) _gate_q_1, _gate_q_0;
  ch _gate_q_2, _gate_q_1;
  u2(2.297535266061075, 3.6682821443413838) _gate_q_3;
  ry(5.362660516131402) _gate_q_0;
}