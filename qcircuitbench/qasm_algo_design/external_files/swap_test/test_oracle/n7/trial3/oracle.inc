gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5105508832(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.2390017296895595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate cu1_5105509648(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.510441774114856) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.510441774114856) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.510441774114856) _gate_q_1;
}
gate xx_minus_yy_5105511808(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.3854683870375748) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3404278655354456) _gate_q_0;
  ry(-1.3404278655354456) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.3854683870375748) _gate_q_1;
}
gate ryy_5105507152(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.572028890588863) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5105502688(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.02946232582301799) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.02946232582301799) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.02946232582301799) _gate_q_1;
}
gate rzz_5105507392(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.24293846972125482) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5105501200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3160209668927156) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5105511376(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.0080652513532096) _gate_q_0;
  u1(-1.5758607556359907) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.28390887455370745, 0, -3.0080652513532096) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.28390887455370745, 4.5839260069892, 0) _gate_q_1;
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
  dcx _gate_q_2, _gate_q_5;
  h _gate_q_6;
  ryy_5105508832(5.2390017296895595) _gate_q_4, _gate_q_1;
  csdg _gate_q_3, _gate_q_0;
  x _gate_q_0;
  sxdg _gate_q_1;
  u2(4.634312224705566, 1.9487389151265462) _gate_q_5;
  cx _gate_q_2, _gate_q_6;
  p(3.9814726505681794) _gate_q_4;
  sxdg _gate_q_3;
  s _gate_q_2;
  cu1_5105509648(1.020883548229712) _gate_q_6, _gate_q_3;
  h _gate_q_5;
  sxdg _gate_q_1;
  xx_minus_yy_5105511808(2.680855731070891, 1.3854683870375748) _gate_q_4, _gate_q_0;
  ryy_5105507152(4.572028890588863) _gate_q_1, _gate_q_4;
  id _gate_q_3;
  sxdg _gate_q_0;
  cu1_5105502688(0.05892465164603598) _gate_q_5, _gate_q_6;
  tdg _gate_q_2;
  sdg _gate_q_0;
  rzz_5105507392(0.24293846972125482) _gate_q_3, _gate_q_6;
  tdg _gate_q_2;
  dcx _gate_q_1, _gate_q_4;
  p(2.337335147087401) _gate_q_5;
  sxdg _gate_q_6;
  rzx_5105501200(0.3160209668927156) _gate_q_4, _gate_q_1;
  rz(3.4693222223741156) _gate_q_3;
  cu(4.487619286603746, 1.321370224517168, 1.1386017753158242, 4.353468528464584) _gate_q_5, _gate_q_0;
  z _gate_q_2;
  cu3_5105511376(0.5678177491074149, 4.5839260069892, 1.4322044957172186) _gate_q_4, _gate_q_0;
  tdg _gate_q_2;
  ecr _gate_q_3, _gate_q_6;
  cz _gate_q_5, _gate_q_1;
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
gate rzx_5105632560(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.451286318370613) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5105633136(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.104802487607149) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6222193777234513) _gate_q_1;
  ry(-1.6222193777234513) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.104802487607149) _gate_q_0;
}
gate rxx_5105632416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2100100543140813) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5105633232(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.650403227137432) _gate_q_0;
  u1(1.345287192284704) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8384430272316115, 0, -3.650403227137432) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8384430272316115, 2.3051160348527278, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  crz(4.604470828361858) _gate_q_0, _gate_q_2;
  cx _gate_q_3, _gate_q_4;
  iswap _gate_q_6, _gate_q_1;
  x _gate_q_5;
  u2(0.8510325959321692, 5.229253559311458) _gate_q_5;
  x _gate_q_3;
  ch _gate_q_4, _gate_q_0;
  ecr _gate_q_2, _gate_q_1;
  id _gate_q_6;
  t _gate_q_1;
  u1(4.86914529326462) _gate_q_2;
  ry(5.43367429188061) _gate_q_0;
  dcx _gate_q_3, _gate_q_5;
  ecr _gate_q_4, _gate_q_6;
  csx _gate_q_2, _gate_q_4;
  rzx_5105632560(4.451286318370613) _gate_q_1, _gate_q_0;
  cu(2.3554639742050387, 3.322375980616043, 0.03210327942613123, 4.297889941955679) _gate_q_5, _gate_q_3;
  id _gate_q_6;
  ecr _gate_q_2, _gate_q_5;
  u1(5.032631101255869) _gate_q_3;
  ry(5.714024658097259) _gate_q_0;
  h _gate_q_6;
  cx _gate_q_1, _gate_q_4;
  xx_plus_yy_5105633136(3.2444387554469025, 6.104802487607149) _gate_q_1, _gate_q_4;
  u2(5.703361757106019, 1.6792484175672993) _gate_q_2;
  swap _gate_q_0, _gate_q_6;
  swap _gate_q_3, _gate_q_5;
  rxx_5105632416(1.2100100543140813) _gate_q_6, _gate_q_2;
  cy _gate_q_3, _gate_q_4;
  cu3_5105633232(5.676886054463223, 2.3051160348527278, 4.995690419422136) _gate_q_0, _gate_q_5;
  sxdg _gate_q_1;
}