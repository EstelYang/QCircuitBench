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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  csx _gate_q_1, _gate_q_0;
  ry(4.957854796076833) _gate_q_2;
  crx(5.795384537918211) _gate_q_2, _gate_q_1;
  rx(0.43530489883239387) _gate_q_0;
  csdg _gate_q_0, _gate_q_2;
  tdg _gate_q_1;
}
gate rzx_5070590544(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7071670209624914) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5070590784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.237342652147809) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  ry(4.485927734346281) _gate_q_0;
  u3(2.3537673496591753, 0.10948589980143249, 2.8488536780085694) _gate_q_2;
  u2(1.6053858093568316, 1.2939796670834722) _gate_q_1;
  rzx_5070590544(1.7071670209624914) _gate_q_1, _gate_q_2;
  x _gate_q_0;
  rzx_5070590784(4.237342652147809) _gate_q_2, _gate_q_1;
  y _gate_q_0;
}