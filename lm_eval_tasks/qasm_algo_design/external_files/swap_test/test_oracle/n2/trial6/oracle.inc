gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1 {
  ry(4.180080361536278) _gate_q_0;
  sxdg _gate_q_1;
  s _gate_q_1;
  p(2.5500446952201266) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1 {
  u2(1.5094653855313416, 2.3277756002515284) _gate_q_0;
  id _gate_q_1;
  p(2.2882256158975016) _gate_q_1;
  u2(4.929508342057958, 3.9921842973749966) _gate_q_0;
}