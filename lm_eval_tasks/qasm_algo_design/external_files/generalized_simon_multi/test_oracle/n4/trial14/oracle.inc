gate ccircuit_285 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  ccx _gate_q_0, _gate_q_1, _gate_q_5;
  ccx _gate_q_0, _gate_q_2, _gate_q_6;
  ccx _gate_q_0, _gate_q_2, _gate_q_6;
  ccx _gate_q_0, _gate_q_3, _gate_q_7;
  ccx _gate_q_0, _gate_q_2, _gate_q_7;
  ccx _gate_q_0, _gate_q_4, _gate_q_8;
  ccx _gate_q_0, _gate_q_2, _gate_q_8;
}
gate ccircuit_292 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  ccx _gate_q_0, _gate_q_1, _gate_q_5;
  ccx _gate_q_0, _gate_q_2, _gate_q_6;
  ccx _gate_q_0, _gate_q_2, _gate_q_6;
  ccx _gate_q_0, _gate_q_3, _gate_q_7;
  ccx _gate_q_0, _gate_q_2, _gate_q_7;
  ccx _gate_q_0, _gate_q_4, _gate_q_8;
  ccx _gate_q_0, _gate_q_2, _gate_q_8;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  ccircuit_285 _gate_q_8, _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7;
  x _gate_q_8;
  ccircuit_292 _gate_q_8, _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7;
  x _gate_q_5;
  x _gate_q_6;
}
