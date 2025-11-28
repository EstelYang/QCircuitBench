gate Psi _gate_q_0, _gate_q_1 {
  cp(4.06582954788015) _gate_q_1, _gate_q_0;
  ry(3.4644833598819753) _gate_q_0;
  rz(3.6174471546102525) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5104285072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.819459934066887) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2509803867692177) _gate_q_0;
  ry(-1.2509803867692177) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.819459934066887) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1 {
  csdg _gate_q_0, _gate_q_1;
  xx_minus_yy_5104285072(2.5019607735384355, 3.819459934066887) _gate_q_1, _gate_q_0;
}