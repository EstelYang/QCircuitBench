gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  swap _gate_q_0, _gate_q_2;
  t _gate_q_1;
  cu(1.1944712084206548, 2.9032530540309676, 0.45071844211319145, 0.8792941220108411) _gate_q_0, _gate_q_1;
  h _gate_q_2;
  ch _gate_q_1, _gate_q_0;
  sxdg _gate_q_2;
}
gate ryy_5070435920(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.027885514183857) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5070435824(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.57115950287468, 2.5894905030911284, -2.5894905030911284) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  ryy_5070435920(3.027885514183857) _gate_q_1, _gate_q_0;
  s _gate_q_2;
  cs _gate_q_0, _gate_q_2;
  sxdg _gate_q_1;
  rz(0.5721469579413252) _gate_q_0;
  r_5070435824(2.57115950287468, 4.160286829886025) _gate_q_2;
  U(5.029924330887238, 4.182840312416464, 0.9269520449241442) _gate_q_1;
}