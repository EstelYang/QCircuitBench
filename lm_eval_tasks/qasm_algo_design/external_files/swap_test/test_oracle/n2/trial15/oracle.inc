gate ryy_5070134480(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7873419386328873) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1 {
  ryy_5070134480(1.7873419386328873) _gate_q_0, _gate_q_1;
  ch _gate_q_1, _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1 {
  dcx _gate_q_0, _gate_q_1;
  tdg _gate_q_1;
  sdg _gate_q_0;
}