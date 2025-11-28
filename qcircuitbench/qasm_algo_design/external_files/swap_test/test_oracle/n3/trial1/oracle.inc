gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5104436192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.8894582340911397) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.2890373165153473) _gate_q_1;
  ry(-2.2890373165153473) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.8894582340911397) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  u1(2.3983223213591294) _gate_q_2;
  crx(0.693092041498248) _gate_q_0, _gate_q_1;
  cu(1.9344478055626615, 0.0507677044868962, 0.6486351902514129, 4.61375942660649) _gate_q_0, _gate_q_1;
  h _gate_q_2;
  s _gate_q_0;
  xx_plus_yy_5104436192(4.5780746330306945, 0.8894582340911397) _gate_q_1, _gate_q_2;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5104435328(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.175976545012994, 2.7128196902257455, -2.7128196902257455) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  id _gate_q_1;
  iswap _gate_q_2, _gate_q_0;
  ch _gate_q_1, _gate_q_0;
  z _gate_q_2;
  r_5104435328(1.175976545012994, 4.283616017020642) _gate_q_0;
  csdg _gate_q_1, _gate_q_2;
}