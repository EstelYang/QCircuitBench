gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105155200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.040845592312206) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.499678321763927) _gate_q_0;
  ry(-1.499678321763927) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.040845592312206) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  cry(1.2211217539545336) _gate_q_2, _gate_q_1;
  h _gate_q_0;
  xx_minus_yy_5105155200(2.999356643527854, 4.040845592312206) _gate_q_1, _gate_q_2;
  x _gate_q_0;
  ch _gate_q_0, _gate_q_1;
  id _gate_q_2;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  cz _gate_q_1, _gate_q_2;
  rx(6.252398251477482) _gate_q_0;
  crx(5.130143296100468) _gate_q_0, _gate_q_1;
  sdg _gate_q_2;
  cy _gate_q_2, _gate_q_1;
  sx _gate_q_0;
}