gate ccircuit_231 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  ccx _gate_q_0, _gate_q_1, _gate_q_4;
  ccx _gate_q_0, _gate_q_1, _gate_q_4;
  ccx _gate_q_0, _gate_q_2, _gate_q_5;
  ccx _gate_q_0, _gate_q_1, _gate_q_5;
  ccx _gate_q_0, _gate_q_3, _gate_q_6;
}
gate ccircuit_238 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  ccx _gate_q_0, _gate_q_1, _gate_q_4;
  ccx _gate_q_0, _gate_q_2, _gate_q_5;
  ccx _gate_q_0, _gate_q_2, _gate_q_5;
  ccx _gate_q_0, _gate_q_3, _gate_q_6;
  ccx _gate_q_0, _gate_q_2, _gate_q_6;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  ccircuit_231 _gate_q_6, _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5;
  x _gate_q_6;
  ccircuit_238 _gate_q_6, _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5;
  x _gate_q_4;
  x _gate_q_5;
}
