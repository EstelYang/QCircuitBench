gate rzz_5104448432(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.679080595431787) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  crx(5.101734522348535) _gate_q_1, _gate_q_3;
  sx _gate_q_0;
  s _gate_q_2;
  rz(5.634238965690345) _gate_q_1;
  s _gate_q_0;
  ry(6.221651885501887) _gate_q_2;
  u1(6.196712554026734) _gate_q_3;
  ry(1.6476980067578308) _gate_q_1;
  rzz_5104448432(1.679080595431787) _gate_q_3, _gate_q_2;
  p(0.6573833032401749) _gate_q_0;
  u1(1.930666996189726) _gate_q_2;
  crz(5.823660221487658) _gate_q_1, _gate_q_3;
  u3(1.7024278004846594, 2.8933801249469253, 1.3491580365129243) _gate_q_0;
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
gate cu1_5103924528(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4265862973429715) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4265862973429715) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4265862973429715) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  csdg _gate_q_0, _gate_q_3;
  z _gate_q_1;
  U(5.949611568407158, 5.908965914421516, 1.0590602713419406) _gate_q_2;
  cry(4.734245571847381) _gate_q_3, _gate_q_2;
  u1(1.328196741949615) _gate_q_0;
  sxdg _gate_q_1;
  ecr _gate_q_2, _gate_q_3;
  id _gate_q_1;
  sdg _gate_q_0;
  cu1_5103924528(4.853172594685943) _gate_q_1, _gate_q_2;
  ry(4.82015268408139) _gate_q_0;
  id _gate_q_3;
}