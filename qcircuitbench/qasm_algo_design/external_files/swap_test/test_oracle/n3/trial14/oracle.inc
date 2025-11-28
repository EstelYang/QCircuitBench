gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  u2(1.5358726608866875, 0.5451716949357891) _gate_q_0;
  cp(4.583052839308654) _gate_q_1, _gate_q_2;
  cry(1.7114216766341621) _gate_q_1, _gate_q_0;
  t _gate_q_2;
  ch _gate_q_0, _gate_q_2;
  sxdg _gate_q_1;
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
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  tdg _gate_q_0;
  csx _gate_q_1, _gate_q_2;
  sxdg _gate_q_0;
  iswap _gate_q_1, _gate_q_2;
  sx _gate_q_1;
  swap _gate_q_0, _gate_q_2;
}