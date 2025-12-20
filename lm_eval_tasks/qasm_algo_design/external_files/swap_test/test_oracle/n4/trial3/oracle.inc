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
gate rxx_5105150400(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.7405170042900515) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  u3(2.2997698561578876, 3.930970284677779, 3.1490368662147117) _gate_q_3;
  csx _gate_q_2, _gate_q_1;
  rz(3.030297422251683) _gate_q_0;
  rxx_5105150400(4.7405170042900515) _gate_q_3, _gate_q_1;
  u2(1.6020620181666574, 3.5379714819173356) _gate_q_0;
  ry(1.7549531966435359) _gate_q_2;
  cu(5.441830991237653, 1.7495706737180716, 4.712995470419592, 5.9360816247846975) _gate_q_3, _gate_q_2;
  ecr _gate_q_0, _gate_q_1;
  cry(5.522918057695569) _gate_q_0, _gate_q_1;
  ch _gate_q_2, _gate_q_3;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rzz_5105142720(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.3197231407858165) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5105152704(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.0799786488069385) _gate_q_0;
  u1(-0.8007284598569513) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5843196433702575, 0, -4.0799786488069385) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5843196433702575, 4.88070710866389, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  sxdg _gate_q_0;
  cx _gate_q_1, _gate_q_2;
  rx(0.25979739591688616) _gate_q_3;
  p(3.664863402894468) _gate_q_0;
  rzz_5105142720(0.3197231407858165) _gate_q_3, _gate_q_2;
  p(1.6636961853560626) _gate_q_1;
  dcx _gate_q_1, _gate_q_0;
  dcx _gate_q_3, _gate_q_2;
  cu3_5105152704(1.168639286740515, 4.88070710866389, 3.279250188949987) _gate_q_2, _gate_q_1;
  sx _gate_q_0;
  s _gate_q_3;
}