gate Psi _gate_q_0, _gate_q_1 {
  z _gate_q_1;
  u1(1.816901861806471) _gate_q_0;
  ry(3.1604168228863228) _gate_q_1;
  u1(4.922547012073608) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1 {
  ch _gate_q_1, _gate_q_0;
  ry(6.028634720130333) _gate_q_0;
  id _gate_q_1;
}