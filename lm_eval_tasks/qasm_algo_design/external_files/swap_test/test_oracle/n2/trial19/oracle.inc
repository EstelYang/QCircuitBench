gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1 {
  sxdg _gate_q_1;
  x _gate_q_0;
  dcx _gate_q_1, _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1 {
  sdg _gate_q_1;
  sx _gate_q_0;
  sxdg _gate_q_1;
  t _gate_q_0;
}