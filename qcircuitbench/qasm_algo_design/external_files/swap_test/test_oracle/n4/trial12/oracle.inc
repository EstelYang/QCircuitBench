gate ryy_5070718736(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.22028075090541) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5070720560(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.301192956799291) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  z _gate_q_2;
  ryy_5070718736(6.22028075090541) _gate_q_1, _gate_q_3;
  t _gate_q_0;
  ryy_5070720560(4.301192956799291) _gate_q_2, _gate_q_3;
  rz(6.211285308125246) _gate_q_0;
  tdg _gate_q_1;
  sx _gate_q_1;
  p(3.4005206779061736) _gate_q_2;
  z _gate_q_3;
  u2(0.2056179240713719, 3.9359365180456485) _gate_q_0;
  crz(3.392175589401825) _gate_q_3, _gate_q_2;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
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
gate xx_minus_yy_5070722096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.09374622367158952) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.4266734511198586) _gate_q_0;
  ry(-0.4266734511198586) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.09374622367158952) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  rz(2.837609855563267) _gate_q_3;
  sxdg _gate_q_0;
  cy _gate_q_2, _gate_q_1;
  csx _gate_q_2, _gate_q_3;
  crz(4.262504017757729) _gate_q_0, _gate_q_1;
  cu(5.071299313124044, 1.1157261437083925, 0.995079107442548, 3.1195139803504444) _gate_q_0, _gate_q_1;
  cz _gate_q_3, _gate_q_2;
  xx_minus_yy_5070722096(0.8533469022397172, 0.09374622367158952) _gate_q_3, _gate_q_1;
  cy _gate_q_0, _gate_q_2;
}