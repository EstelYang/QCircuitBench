gate ccircuit_159 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  ccx _gate_q_0, _gate_q_1, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_3;
  ccx _gate_q_0, _gate_q_2, _gate_q_4;
}
gate ccircuit_166 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  ccx _gate_q_0, _gate_q_1, _gate_q_3;
  ccx _gate_q_0, _gate_q_2, _gate_q_4;
  ccx _gate_q_0, _gate_q_2, _gate_q_4;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  ccircuit_159 _gate_q_4, _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  x _gate_q_4;
  ccircuit_166 _gate_q_4, _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  x _gate_q_2;
  x _gate_q_3;
}
