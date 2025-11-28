gate rzx_4371195392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_4948473424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ecr _gate_q_0, _gate_q_1 {
  rzx_4371195392(pi/4) _gate_q_0, _gate_q_1;
  x _gate_q_0;
  rzx_4948473424(-pi/4) _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1 {
  ecr _gate_q_1, _gate_q_0;
  y _gate_q_1;
  u3(3.7660518084080397, 3.7533493253174175, 2.009575525938371) _gate_q_0;
}
gate cu3_5103924576(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.447988247521119) _gate_q_0;
  u1(-1.1529335576712736) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.2934064845320777, 0, -4.447988247521119) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.2934064845320777, 5.600921805192392, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1 {
  tdg _gate_q_1;
  u1(2.872936917141749) _gate_q_0;
  cu3_5103924576(0.5868129690641554, 5.600921805192392, 3.295054689849845) _gate_q_1, _gate_q_0;
}