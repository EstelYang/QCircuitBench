gate r_5070721424(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.06668817731584911, 1.2229262920666062, -1.2229262920666062) _gate_q_0;
}
gate rzx_5070717248(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.068843947788911) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate xx_minus_yy_5070731744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.0264803545303125) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.27241494781692854) _gate_q_0;
  ry(-0.27241494781692854) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.0264803545303125) _gate_q_1;
}
gate rzx_5072123568(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.421757571756119) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  x _gate_q_4;
  x _gate_q_3;
  cz _gate_q_5, _gate_q_2;
  t _gate_q_0;
  u2(0.8822454136091413, 4.6580171441886975) _gate_q_1;
  p(2.087115974516408) _gate_q_1;
  u1(3.1934109406088678) _gate_q_3;
  x _gate_q_0;
  r_5070721424(0.06668817731584911, 2.7937226188615027) _gate_q_4;
  cz _gate_q_5, _gate_q_2;
  s _gate_q_4;
  crx(1.2533189042836346) _gate_q_0, _gate_q_1;
  rzx_5070717248(3.068843947788911) _gate_q_2, _gate_q_3;
  sx _gate_q_5;
  csdg _gate_q_5, _gate_q_0;
  xx_minus_yy_5070731744(0.5448298956338571, 1.0264803545303125) _gate_q_2, _gate_q_1;
  cu(6.1651967667035, 1.1577569909854044, 0.66473540574156, 0.17810531524240222) _gate_q_3, _gate_q_4;
  U(1.1967266255896034, 5.455488120439339, 4.617157537580476) _gate_q_2;
  u1(5.448067185089777) _gate_q_0;
  u3(3.7546907585041707, 3.2701915681989906, 2.1648527760823764) _gate_q_4;
  swap _gate_q_5, _gate_q_3;
  u2(5.155533237755505, 4.357053637854017) _gate_q_1;
  csdg _gate_q_1, _gate_q_2;
  ch _gate_q_3, _gate_q_5;
  rzx_5072123568(4.421757571756119) _gate_q_0, _gate_q_4;
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
gate rzx_5072124624(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.348120579032925) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5072112336(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.684566838959814) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5072121504(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.676359875028931, 1.4759153351361447, -1.4759153351361447) _gate_q_0;
}
gate rzx_5072121312(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9293706126354374) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5072112192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.764421025887902) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzx_5043124656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5043124704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ecr _gate_q_0, _gate_q_1 {
  rzx_5043124656(pi/4) _gate_q_0, _gate_q_1;
  x _gate_q_0;
  rzx_5043124704(-pi/4) _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu1_5072121984(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.3906103701536524) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.3906103701536524) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.3906103701536524) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  csx _gate_q_2, _gate_q_4;
  csx _gate_q_5, _gate_q_1;
  rzx_5072124624(4.348120579032925) _gate_q_3, _gate_q_0;
  ryy_5072112336(4.684566838959814) _gate_q_2, _gate_q_0;
  r_5072121504(2.676359875028931, 3.0467116619310413) _gate_q_1;
  x _gate_q_4;
  cu(5.64998017593695, 0.28611224976374117, 4.05603537359253, 0.864403615613931) _gate_q_5, _gate_q_3;
  rzx_5072121312(0.9293706126354374) _gate_q_1, _gate_q_2;
  u2(0.7357434227584709, 4.047513466205227) _gate_q_4;
  U(0.3779351516618922, 0.8571301777281687, 0.5558791295858323) _gate_q_5;
  rxx_5072112192(4.764421025887902) _gate_q_0, _gate_q_3;
  u3(2.786590440603371, 2.967610869094849, 3.1427617961727377) _gate_q_0;
  iswap _gate_q_2, _gate_q_4;
  z _gate_q_3;
  ecr _gate_q_1, _gate_q_5;
  dcx _gate_q_2, _gate_q_0;
  ecr _gate_q_1, _gate_q_4;
  cz _gate_q_5, _gate_q_3;
  cu1_5072121984(0.7812207403073048) _gate_q_3, _gate_q_1;
  csdg _gate_q_0, _gate_q_4;
  U(1.8897135677569918, 4.631402355924123, 4.926622962795783) _gate_q_5;
  U(2.250280566347194, 2.94518599496262, 0.8435241005150215) _gate_q_2;
}