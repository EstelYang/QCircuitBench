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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate r_5105761072(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.569646635922435, 1.9292688404438256, -1.9292688404438256) _gate_q_0;
}
gate r_5105746768(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.909717922830253, 2.630843779896596, -2.630843779896596) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5105759104(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.947191536247518, 1.128931611359084, -1.128931611359084) _gate_q_0;
}
gate cu3_5105791824(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.3834386138968116) _gate_q_0;
  u1(1.5915449893809883) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0325005266727607, 0, -2.3834386138968116) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0325005266727607, 0.791893624515823, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  sdg _gate_q_3;
  u2(2.370887640896084, 1.1817481379101902) _gate_q_1;
  id _gate_q_0;
  ecr _gate_q_5, _gate_q_4;
  ry(5.645145254928063) _gate_q_2;
  z _gate_q_4;
  swap _gate_q_2, _gate_q_5;
  U(2.851148013052334, 2.398183579742839, 4.283311024531044) _gate_q_0;
  sxdg _gate_q_1;
  h _gate_q_3;
  r_5105761072(3.569646635922435, 3.500065167238722) _gate_q_0;
  r_5105746768(5.909717922830253, 4.201640106691492) _gate_q_4;
  z _gate_q_2;
  u2(4.871125132053646, 0.1132163682536769) _gate_q_1;
  cs _gate_q_3, _gate_q_5;
  ch _gate_q_2, _gate_q_5;
  r_5105759104(3.947191536247518, 2.6997279381539805) _gate_q_3;
  U(5.796586188525736, 4.441318517790374, 3.1668185962947164) _gate_q_0;
  cu3_5105791824(6.065001053345521, 0.791893624515823, 3.9749836032777996) _gate_q_4, _gate_q_1;
  dcx _gate_q_5, _gate_q_0;
  crx(2.297340229695327) _gate_q_3, _gate_q_4;
  cu(6.007551099715872, 1.139263437202428, 1.3326910399342637, 1.8002460925850448) _gate_q_1, _gate_q_2;
  csdg _gate_q_5, _gate_q_3;
  crx(1.2953444694405551) _gate_q_2, _gate_q_1;
  tdg _gate_q_0;
  t _gate_q_4;
}
gate rxx_5105779248(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.285060723460561) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5105780448(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.30219528350557, 0.38374636645187366, -0.38374636645187366) _gate_q_0;
}
gate cu1_5105780688(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1902115261393345) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1902115261393345) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1902115261393345) _gate_q_1;
}
gate cu3_5105780976(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.7112208393405328) _gate_q_0;
  u1(0.48928724205924135) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.0975486937432892, 0, -1.7112208393405328) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.0975486937432892, 1.2219335972812915, 0) _gate_q_1;
}
gate r_5105780592(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8282485896303444, -0.04385902173115719, 0.04385902173115719) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  rxx_5105779248(5.285060723460561) _gate_q_5, _gate_q_3;
  z _gate_q_0;
  cry(1.3763211495455963) _gate_q_4, _gate_q_1;
  sxdg _gate_q_2;
  sxdg _gate_q_4;
  cry(5.078821107218893) _gate_q_2, _gate_q_0;
  csdg _gate_q_3, _gate_q_1;
  y _gate_q_5;
  x _gate_q_0;
  s _gate_q_2;
  z _gate_q_4;
  cry(2.3332752899062497) _gate_q_3, _gate_q_5;
  r_5105780448(2.30219528350557, 1.9545426932467702) _gate_q_1;
  ry(4.16963521037733) _gate_q_3;
  cu1_5105780688(2.380423052278669) _gate_q_4, _gate_q_0;
  tdg _gate_q_1;
  swap _gate_q_2, _gate_q_5;
  ch _gate_q_2, _gate_q_4;
  cu3_5105780976(4.1950973874865785, 1.2219335972812915, 2.200508081399774) _gate_q_5, _gate_q_1;
  ch _gate_q_3, _gate_q_0;
  id _gate_q_2;
  cx _gate_q_3, _gate_q_0;
  y _gate_q_5;
  r_5105780592(0.8282485896303444, 1.5269373050637394) _gate_q_1;
  t _gate_q_4;
}