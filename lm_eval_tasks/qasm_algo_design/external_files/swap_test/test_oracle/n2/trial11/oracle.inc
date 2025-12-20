gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5070132752(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.8553552784276268) _gate_q_0;
  u1(-1.642110438381532) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.38063626293262387, 0, -1.8553552784276268) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.38063626293262387, 3.4974657168091587, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1 {
  dcx _gate_q_0, _gate_q_1;
  cu3_5070132752(0.7612725258652477, 3.4974657168091587, 0.2132448400460947) _gate_q_1, _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1 {
  iswap _gate_q_1, _gate_q_0;
  ch _gate_q_0, _gate_q_1;
}