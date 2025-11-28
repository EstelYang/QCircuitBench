gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  cp(4.650538206362675) _gate_q_2, _gate_q_0;
  h _gate_q_1;
  cy _gate_q_2, _gate_q_1;
  sdg _gate_q_0;
  sx _gate_q_0;
  ch _gate_q_2, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  s _gate_q_2;
  crx(5.266825845809816) _gate_q_1, _gate_q_0;
  crx(1.6516291085124055) _gate_q_2, _gate_q_1;
  u3(1.3846938463362037, 4.6492754355384465, 3.2296798420185002) _gate_q_0;
  sx _gate_q_2;
  t _gate_q_1;
  h _gate_q_0;
}