gate rxx_5104437968(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5284086257889542) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  U(2.158563823317954, 4.187356561376607, 1.1154680483927961) _gate_q_0;
  rxx_5104437968(1.5284086257889542) _gate_q_2, _gate_q_1;
  cu(3.60989060060964, 6.191129430596589, 5.53360247684491, 2.1432508948099698) _gate_q_1, _gate_q_2;
  u3(4.922385476323086, 1.3328471810599631, 3.436809803021336) _gate_q_0;
  s _gate_q_1;
  y _gate_q_0;
  y _gate_q_2;
}
gate rzz_5104445504(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.1009687617620285) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5104446032(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.03629222907136499, 4.1602237257010986, -4.1602237257010986) _gate_q_0;
}
gate r_5104445888(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.924725495779911, 4.627243612408785, -4.627243612408785) _gate_q_0;
}
gate r_5104445984(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.5923358783154498, 3.3791535859950104, -3.3791535859950104) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5104446848(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.982477041481645) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6130595480447882) _gate_q_0;
  ry(-1.6130595480447882) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.982477041481645) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  rzz_5104445504(4.1009687617620285) _gate_q_2, _gate_q_1;
  r_5104446032(0.03629222907136499, 5.731020052495995) _gate_q_0;
  tdg _gate_q_0;
  ry(0.24268315589699727) _gate_q_1;
  r_5104445888(3.924725495779911, 6.198039939203682) _gate_q_2;
  r_5104445984(1.5923358783154498, 4.949949912789907) _gate_q_0;
  xx_minus_yy_5104446848(3.2261190960895765, 4.982477041481645) _gate_q_2, _gate_q_1;
}