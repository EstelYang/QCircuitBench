gate rzx_5070293472(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.43110904181324) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5042941264(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/4) _gate_q_1;
}
gate csx _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cu1_5042941264(pi/2) _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  tdg _gate_q_1;
  rzx_5070293472(4.43110904181324) _gate_q_0, _gate_q_2;
  sx _gate_q_1;
  csx _gate_q_2, _gate_q_0;
  cp(4.1372064341188715) _gate_q_2, _gate_q_0;
  tdg _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  cy _gate_q_2, _gate_q_1;
  ry(0.0427510217999922) _gate_q_0;
  dcx _gate_q_0, _gate_q_2;
  sx _gate_q_1;
  cry(5.169479723458449) _gate_q_0, _gate_q_1;
  rx(4.337246255155211) _gate_q_2;
}