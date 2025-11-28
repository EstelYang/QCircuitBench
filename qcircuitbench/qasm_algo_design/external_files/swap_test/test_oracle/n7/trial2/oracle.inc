gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5105865968(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.8336410933693412) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0189860990592075) _gate_q_1;
  ry(-2.0189860990592075) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.8336410933693412) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_4948306656(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/4) _gate_q_1;
}
gate csx _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cu1_4948306656(pi/2) _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5105865488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.898480006972106) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.167650721878658) _gate_q_1;
  ry(-1.167650721878658) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.898480006972106) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
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
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  xx_plus_yy_5105865968(4.037972198118415, 1.8336410933693412) _gate_q_6, _gate_q_2;
  t _gate_q_5;
  iswap _gate_q_0, _gate_q_4;
  cy _gate_q_3, _gate_q_1;
  csx _gate_q_4, _gate_q_5;
  csx _gate_q_6, _gate_q_1;
  tdg _gate_q_0;
  sdg _gate_q_2;
  s _gate_q_3;
  cry(0.9027693484984002) _gate_q_3, _gate_q_6;
  cz _gate_q_4, _gate_q_1;
  ry(5.495977709513167) _gate_q_5;
  t _gate_q_2;
  ry(1.8503872400736032) _gate_q_0;
  cz _gate_q_0, _gate_q_4;
  xx_plus_yy_5105865488(2.335301443757316, 2.898480006972106) _gate_q_5, _gate_q_3;
  csdg _gate_q_6, _gate_q_1;
  sx _gate_q_2;
  cy _gate_q_0, _gate_q_2;
  cu(5.66799353213892, 4.332988961965057, 5.541458371447332, 3.152152503420453) _gate_q_5, _gate_q_4;
  s _gate_q_1;
  y _gate_q_3;
  u3(3.910985502340869, 4.204203208797394, 5.559201691371357) _gate_q_6;
  t _gate_q_5;
  cz _gate_q_3, _gate_q_2;
  cy _gate_q_0, _gate_q_6;
  z _gate_q_1;
  ry(1.6236224712764693) _gate_q_4;
  crz(6.179784180820007) _gate_q_1, _gate_q_0;
  ecr _gate_q_3, _gate_q_4;
  rz(5.794325717666881) _gate_q_2;
  ecr _gate_q_6, _gate_q_5;
}
gate rzz_5105860784(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.75289716675675) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5105870624(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.02937841967989847) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_4;
  tdg _gate_q_6;
  crx(1.0710077737516874) _gate_q_3, _gate_q_2;
  rz(3.8597375796203517) _gate_q_1;
  ry(3.2813866664222346) _gate_q_0;
  sdg _gate_q_5;
  rzz_5105860784(1.75289716675675) _gate_q_2, _gate_q_1;
  t _gate_q_5;
  ry(0.24241679419944806) _gate_q_3;
  cry(4.237913969690638) _gate_q_0, _gate_q_6;
  rz(6.254914633959056) _gate_q_4;
  crz(6.225301518696042) _gate_q_4, _gate_q_3;
  sxdg _gate_q_1;
  id _gate_q_5;
  swap _gate_q_0, _gate_q_6;
  tdg _gate_q_2;
  cy _gate_q_3, _gate_q_1;
  csx _gate_q_5, _gate_q_4;
  z _gate_q_0;
  x _gate_q_6;
  s _gate_q_2;
  z _gate_q_6;
  cx _gate_q_0, _gate_q_5;
  rz(3.5224153169516104) _gate_q_1;
  p(4.261038946216381) _gate_q_4;
  ch _gate_q_3, _gate_q_2;
  ch _gate_q_6, _gate_q_0;
  sxdg _gate_q_5;
  ry(1.8693949933514638) _gate_q_2;
  rxx_5105870624(0.02937841967989847) _gate_q_4, _gate_q_3;
  t _gate_q_1;
  crx(6.1101063616955305) _gate_q_2, _gate_q_1;
  cs _gate_q_4, _gate_q_0;
  u1(0.5501400812749553) _gate_q_6;
  dcx _gate_q_5, _gate_q_3;
}