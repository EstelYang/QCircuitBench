gate cu1_5070132032(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5771230026193511) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5771230026193511) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5771230026193511) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1 {
  sx _gate_q_0;
  u2(5.810353747840848, 6.11178807415304) _gate_q_1;
  cu1_5070132032(1.1542460052387022) _gate_q_1, _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1 {
  cs _gate_q_0, _gate_q_1;
  s _gate_q_0;
  rz(5.67742729207543) _gate_q_1;
}