gate ryy_5070297696(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.004953911145408) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1 {
  sx _gate_q_0;
  ry(4.611420743069385) _gate_q_1;
  ryy_5070297696(4.004953911145408) _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1 {
  id _gate_q_1;
  rz(4.7625722237562265) _gate_q_0;
  ch _gate_q_1, _gate_q_0;
}