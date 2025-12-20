gate Psi _gate_q_0, _gate_q_1 {
  s _gate_q_1;
  x _gate_q_0;
  rz(0.5476672465498952) _gate_q_1;
  h _gate_q_0;
}
gate ryy_5104275328(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4015304116936216) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1 {
  ryy_5104275328(3.4015304116936216) _gate_q_1, _gate_q_0;
  rx(5.6737904602420155) _gate_q_1;
  sxdg _gate_q_0;
}