gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5105270912(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.432139877528907) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9621781111289269) _gate_q_1;
  ry(-0.9621781111289269) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.432139877528907) _gate_q_0;
}
gate rzz_5105275472(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.6837929381908339) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_minus_yy_5105285024(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.693490457939382) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8643686727813477) _gate_q_0;
  ry(-0.8643686727813477) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.693490457939382) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  dcx _gate_q_3, _gate_q_0;
  csx _gate_q_4, _gate_q_5;
  U(5.867686273279829, 4.268976363866043, 2.4029273653949392) _gate_q_1;
  ry(0.25759674012228206) _gate_q_2;
  crz(5.226754057709055) _gate_q_1, _gate_q_0;
  xx_plus_yy_5105270912(1.9243562222578539, 4.432139877528907) _gate_q_2, _gate_q_5;
  h _gate_q_3;
  u2(2.8789526958163334, 5.035990409563724) _gate_q_4;
  rzz_5105275472(1.6837929381908339) _gate_q_2, _gate_q_5;
  cu(3.6131572770682205, 4.242277609911617, 2.087886171360119, 0.3215768640065387) _gate_q_0, _gate_q_4;
  iswap _gate_q_3, _gate_q_1;
  csdg _gate_q_1, _gate_q_5;
  xx_minus_yy_5105285024(1.7287373455626953, 5.693490457939382) _gate_q_4, _gate_q_0;
  cp(0.47373899868385294) _gate_q_2, _gate_q_3;
  ch _gate_q_3, _gate_q_4;
  u3(1.3435369510737396, 2.1330863341838633, 1.2316722025151936) _gate_q_5;
  sdg _gate_q_0;
  ry(2.174471558776556) _gate_q_1;
  sdg _gate_q_2;
  p(3.7808699174790656) _gate_q_1;
  crx(5.324560712516247) _gate_q_5, _gate_q_0;
  u2(4.595810964319441, 5.483013594192644) _gate_q_4;
  dcx _gate_q_3, _gate_q_2;
}
gate r_5104448960(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.17308354329616013, 0.22471917992937596, -0.22471917992937596) _gate_q_0;
}
gate xx_plus_yy_5104439696(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.5146170520877035) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.09258099493499951) _gate_q_1;
  ry(-0.09258099493499951) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.5146170520877035) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  tdg _gate_q_5;
  csx _gate_q_1, _gate_q_3;
  cy _gate_q_0, _gate_q_2;
  r_5104448960(0.17308354329616013, 1.7955155067242725) _gate_q_4;
  xx_plus_yy_5104439696(0.18516198986999902, 0.5146170520877035) _gate_q_3, _gate_q_2;
  sdg _gate_q_4;
  z _gate_q_1;
  u2(3.833269781376164, 4.786820484658641) _gate_q_0;
  sx _gate_q_5;
  cu(2.089851599615436, 5.020525404415486, 3.9366739818451575, 1.928710246738087) _gate_q_4, _gate_q_3;
  u3(3.289413734076488, 1.304718410329732, 6.131373310060248) _gate_q_5;
  iswap _gate_q_0, _gate_q_2;
  sxdg _gate_q_1;
  crx(5.281856008703767) _gate_q_0, _gate_q_2;
  cz _gate_q_1, _gate_q_4;
  rz(5.471649375475312) _gate_q_3;
  rz(6.2800859523526045) _gate_q_5;
  cx _gate_q_4, _gate_q_5;
  crx(5.9652840209581) _gate_q_0, _gate_q_2;
  cs _gate_q_1, _gate_q_3;
  ch _gate_q_4, _gate_q_0;
  U(3.592184348145786, 4.634732254556259, 1.6768840504428488) _gate_q_1;
  ch _gate_q_3, _gate_q_5;
  rz(1.456943471162285) _gate_q_2;
}