gate Psi _gate_q_0, _gate_q_1 {
  sdg _gate_q_1;
  sx _gate_q_0;
  id _gate_q_1;
  U(3.5419701908689745, 5.985485158149847, 3.1894730238347178) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1 {
  crx(4.414795947788802) _gate_q_1, _gate_q_0;
  crx(0.774465612915072) _gate_q_0, _gate_q_1;
}