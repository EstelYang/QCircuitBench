gate Psi _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  swap _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1 {
  cs _gate_q_1, _gate_q_0;
  id _gate_q_1;
  z _gate_q_0;
}