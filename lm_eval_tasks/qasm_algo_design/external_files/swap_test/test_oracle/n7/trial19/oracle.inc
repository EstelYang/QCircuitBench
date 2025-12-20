gate cu3_5072608080(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.4554252087142583) _gate_q_0;
  u1(-0.15976122745049182) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2601621323456167, 0, -2.4554252087142583) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2601621323456167, 2.61518643616475, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5072608128(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.401147924510053) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.401147924510053) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.401147924510053) _gate_q_1;
}
gate rxx_5072605344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9948836138570741) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  cu3_5072608080(2.5203242646912334, 2.61518643616475, 2.2956639812637665) _gate_q_2, _gate_q_1;
  t _gate_q_0;
  cry(1.507057355179541) _gate_q_5, _gate_q_6;
  rx(4.954294378927087) _gate_q_4;
  rz(0.8306937873143866) _gate_q_3;
  cry(2.1257483977761003) _gate_q_6, _gate_q_4;
  ch _gate_q_0, _gate_q_1;
  ry(2.8468796679257427) _gate_q_3;
  cy _gate_q_5, _gate_q_2;
  t _gate_q_6;
  iswap _gate_q_4, _gate_q_3;
  cx _gate_q_5, _gate_q_0;
  swap _gate_q_2, _gate_q_1;
  cy _gate_q_0, _gate_q_4;
  cu1_5072608128(2.802295849020106) _gate_q_5, _gate_q_2;
  cz _gate_q_6, _gate_q_3;
  tdg _gate_q_1;
  U(3.4255930395962597, 3.4554139329674505, 4.3284615840873215) _gate_q_0;
  rxx_5072605344(0.9948836138570741) _gate_q_6, _gate_q_1;
  x _gate_q_2;
  csdg _gate_q_4, _gate_q_3;
  z _gate_q_5;
  t _gate_q_0;
  rz(5.839417231895665) _gate_q_6;
  sx _gate_q_1;
  t _gate_q_2;
  csx _gate_q_4, _gate_q_5;
  id _gate_q_3;
  U(3.4105546752444647, 0.9780153995611919, 1.0529373314706658) _gate_q_2;
  csx _gate_q_0, _gate_q_4;
  cry(2.948866631852096) _gate_q_6, _gate_q_1;
  dcx _gate_q_5, _gate_q_3;
}
gate r_5072611776(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.664790770785143, 2.2111921821967067, -2.2111921821967067) _gate_q_0;
}
gate rzx_5072604960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.106903785063032) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5072611680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.7954831900589291) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3347793131560808) _gate_q_0;
  ry(-1.3347793131560808) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.7954831900589291) _gate_q_1;
}
gate ryy_5072606400(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.50138369216014) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5072612112(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.0147968585435128) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.0147968585435128) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.0147968585435128) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  csx _gate_q_3, _gate_q_2;
  cp(1.9315853920541188) _gate_q_5, _gate_q_6;
  iswap _gate_q_1, _gate_q_4;
  id _gate_q_0;
  cp(1.0400864099997464) _gate_q_0, _gate_q_5;
  U(1.2804799500292066, 3.3015007027008134, 2.6093759015976796) _gate_q_6;
  tdg _gate_q_4;
  csx _gate_q_1, _gate_q_3;
  rz(1.9270128991016346) _gate_q_2;
  iswap _gate_q_2, _gate_q_3;
  ch _gate_q_1, _gate_q_4;
  crz(5.31392764862669) _gate_q_5, _gate_q_6;
  r_5072611776(4.664790770785143, 3.781988508991603) _gate_q_0;
  cx _gate_q_4, _gate_q_5;
  u1(6.210295562428697) _gate_q_2;
  rzx_5072604960(5.106903785063032) _gate_q_0, _gate_q_1;
  ry(1.0963073672647108) _gate_q_6;
  tdg _gate_q_3;
  rx(0.3220121490972612) _gate_q_5;
  xx_minus_yy_5072611680(2.6695586263121616, 0.7954831900589291) _gate_q_0, _gate_q_2;
  u3(2.8025658203322696, 3.5378959195707087, 3.7973437833145547) _gate_q_3;
  ryy_5072606400(3.50138369216014) _gate_q_6, _gate_q_1;
  y _gate_q_4;
  rz(0.13117950724989833) _gate_q_5;
  dcx _gate_q_6, _gate_q_2;
  rz(1.9026797765247132) _gate_q_3;
  sx _gate_q_4;
  cu1_5072612112(6.0295937170870255) _gate_q_1, _gate_q_0;
  ry(0.45234367021195454) _gate_q_0;
  u3(2.137754225660733, 1.0885068122274193, 5.484384291057454) _gate_q_5;
  sxdg _gate_q_4;
  z _gate_q_3;
  cry(3.8268395117240672) _gate_q_6, _gate_q_2;
  tdg _gate_q_1;
}