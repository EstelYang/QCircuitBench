gate r_5070303072(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.0878829608173057, 0.6261365839067321, -0.6261365839067321) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1 {
  rz(3.421829979286701) _gate_q_1;
  u1(5.146989998568256) _gate_q_0;
  r_5070303072(2.0878829608173057, 2.1969329107016287) _gate_q_0;
  u3(0.5486923883782048, 3.4450356566424376, 4.656461942849036) _gate_q_1;
}
gate rzx_5070292416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.669393299112124) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5070298176(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.708748812545886) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8511747878134083) _gate_q_1;
  ry(-0.8511747878134083) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.708748812545886) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1 {
  rzx_5070292416(3.669393299112124) _gate_q_1, _gate_q_0;
  xx_plus_yy_5070298176(1.7023495756268165, 0.708748812545886) _gate_q_1, _gate_q_0;
}