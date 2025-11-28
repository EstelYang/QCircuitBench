gate Psi _gate_q_0 {
  x _gate_q_0;
}
gate CU_0 _gate_q_0, _gate_q_1 {
  p(0.26261595755313116) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-0.26261595755313116) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(0.26261595755313116) _gate_q_1;
}