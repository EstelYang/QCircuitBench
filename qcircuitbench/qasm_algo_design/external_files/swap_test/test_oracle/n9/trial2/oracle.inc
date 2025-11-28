gate rzx_5105513392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3972717390334526) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5105515600(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.936047462868) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.936047462868) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.936047462868) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
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
gate rzz_5105513104(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.260746619451971) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5105514928(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1133375123340428) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5105513632(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.927902391850875) _gate_q_1;
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
gate rxx_5105515360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.981756644237618) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5105505040(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.032905089644862, 4.1878965356246285, -4.1878965356246285) _gate_q_0;
}
gate r_5105515264(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.2534419212691269, -1.0994592244042767, 1.0994592244042767) _gate_q_0;
}
gate r_5105501296(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.612632262467949, 1.7624964839784454, -1.7624964839784454) _gate_q_0;
}
gate rxx_5105506288(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.141239773298968) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5105501872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.0901914505496981) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.08440536977686988) _gate_q_1;
  ry(-0.08440536977686988) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.0901914505496981) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  rzx_5105513392(1.3972717390334526) _gate_q_5, _gate_q_8;
  y _gate_q_4;
  rx(3.896065759490221) _gate_q_2;
  cu1_5105515600(5.872094925736) _gate_q_7, _gate_q_0;
  sx _gate_q_1;
  rx(6.176851517620917) _gate_q_6;
  p(1.854280764843966) _gate_q_3;
  cz _gate_q_7, _gate_q_6;
  dcx _gate_q_8, _gate_q_2;
  iswap _gate_q_5, _gate_q_3;
  sxdg _gate_q_4;
  csx _gate_q_0, _gate_q_1;
  rzz_5105513104(6.260746619451971) _gate_q_1, _gate_q_3;
  rzx_5105514928(1.1133375123340428) _gate_q_2, _gate_q_7;
  sx _gate_q_6;
  cy _gate_q_5, _gate_q_8;
  rxx_5105513632(5.927902391850875) _gate_q_4, _gate_q_0;
  csdg _gate_q_0, _gate_q_8;
  rx(5.443707374343746) _gate_q_4;
  t _gate_q_7;
  cu(1.1968383434633787, 5.614509196755913, 4.548985038623471, 4.931168352009004) _gate_q_5, _gate_q_2;
  csx _gate_q_1, _gate_q_6;
  id _gate_q_3;
  ch _gate_q_5, _gate_q_0;
  u2(3.882062796825048, 0.6035710438255721) _gate_q_8;
  s _gate_q_1;
  rxx_5105515360(2.981756644237618) _gate_q_2, _gate_q_7;
  cu(1.6115203256365407, 3.8795082819285795, 1.1471081021946186, 3.63037928052637) _gate_q_3, _gate_q_4;
  z _gate_q_6;
  iswap _gate_q_7, _gate_q_4;
  ecr _gate_q_2, _gate_q_1;
  cp(1.8138305413762894) _gate_q_5, _gate_q_3;
  cu(4.766463885430765, 5.1000408004892765, 2.2218633719858913, 2.8433176268036324) _gate_q_6, _gate_q_0;
  p(1.9502540066292404) _gate_q_8;
  p(4.911371162477551) _gate_q_2;
  cs _gate_q_7, _gate_q_8;
  r_5105505040(5.032905089644862, 5.758692862419525) _gate_q_0;
  z _gate_q_4;
  ecr _gate_q_3, _gate_q_1;
  p(4.92524700303082) _gate_q_6;
  r_5105515264(0.2534419212691269, 0.4713371023906199) _gate_q_5;
  ch _gate_q_0, _gate_q_7;
  cu(4.347156940173495, 5.572137846685237, 0.977880752172873, 3.2475849652822735) _gate_q_8, _gate_q_2;
  cu(0.206422155725418, 5.179577958521196, 0.800078055467882, 5.0121035782759575) _gate_q_6, _gate_q_4;
  swap _gate_q_5, _gate_q_3;
  r_5105501296(4.612632262467949, 3.333292810773342) _gate_q_1;
  rxx_5105506288(5.141239773298968) _gate_q_7, _gate_q_5;
  ch _gate_q_2, _gate_q_4;
  id _gate_q_8;
  cu(4.20807667190471, 3.1417359893577976, 5.602216623053767, 5.903288881673363) _gate_q_3, _gate_q_1;
  xx_plus_yy_5105501872(0.16881073955373976, 1.0901914505496981) _gate_q_0, _gate_q_6;
}
gate rzx_5105504752(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7681984565766404) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5105502544(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.418908908774831) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5105509696(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.846613454183875, 1.3839573259374771, -1.3839573259374771) _gate_q_0;
}
gate r_5105504848(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.36901553074587556, 0.8432970038427836, -0.8432970038427836) _gate_q_0;
}
gate ryy_5105507104(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0101919002954007) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5105511424(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.1779479104753285) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5105507200(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3824612940809204) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3824612940809204) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3824612940809204) _gate_q_1;
}
gate xx_plus_yy_5105511856(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.40445277743542) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.396417030461689) _gate_q_1;
  ry(-2.396417030461689) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.40445277743542) _gate_q_0;
}
gate rxx_5105507776(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.21407103759262) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5105500768(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.238013076159067, 3.231471174277706, -3.231471174277706) _gate_q_0;
}
gate cu1_5105512000(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.563310027975113) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.563310027975113) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.563310027975113) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  tdg _gate_q_1;
  y _gate_q_3;
  rzx_5105504752(1.7681984565766404) _gate_q_5, _gate_q_0;
  dcx _gate_q_2, _gate_q_8;
  rzz_5105502544(5.418908908774831) _gate_q_7, _gate_q_6;
  y _gate_q_4;
  cs _gate_q_7, _gate_q_1;
  ch _gate_q_3, _gate_q_2;
  rz(1.280167762672112) _gate_q_4;
  cx _gate_q_8, _gate_q_0;
  id _gate_q_5;
  r_5105509696(4.846613454183875, 2.9547536527323737) _gate_q_6;
  cz _gate_q_6, _gate_q_1;
  y _gate_q_0;
  csx _gate_q_2, _gate_q_8;
  h _gate_q_7;
  r_5105504848(0.36901553074587556, 2.41409333063768) _gate_q_4;
  dcx _gate_q_3, _gate_q_5;
  sxdg _gate_q_6;
  rx(3.358721725629657) _gate_q_3;
  ryy_5105507104(2.0101919002954007) _gate_q_8, _gate_q_5;
  sxdg _gate_q_4;
  csx _gate_q_0, _gate_q_7;
  tdg _gate_q_1;
  rx(1.8811716265739606) _gate_q_2;
  cz _gate_q_2, _gate_q_1;
  iswap _gate_q_3, _gate_q_5;
  rzz_5105511424(1.1779479104753285) _gate_q_7, _gate_q_0;
  rx(0.23324934975956924) _gate_q_6;
  cu1_5105507200(2.764922588161841) _gate_q_8, _gate_q_4;
  sdg _gate_q_6;
  cu(0.5947410212581673, 6.111842937577203, 0.29956684980897724, 0.9819712553122291) _gate_q_0, _gate_q_8;
  u3(4.116731355122183, 0.1386804888105014, 5.576717196145926) _gate_q_2;
  crz(4.386252927455604) _gate_q_7, _gate_q_3;
  cy _gate_q_1, _gate_q_5;
  id _gate_q_4;
  h _gate_q_2;
  xx_plus_yy_5105511856(4.792834060923378, 5.40445277743542) _gate_q_6, _gate_q_0;
  rxx_5105507776(5.21407103759262) _gate_q_7, _gate_q_8;
  csdg _gate_q_3, _gate_q_5;
  ecr _gate_q_4, _gate_q_1;
  csx _gate_q_8, _gate_q_3;
  p(0.7061635482841352) _gate_q_2;
  cx _gate_q_5, _gate_q_4;
  h _gate_q_6;
  u1(3.7316456660396367) _gate_q_1;
  cz _gate_q_7, _gate_q_0;
  cs _gate_q_8, _gate_q_0;
  x _gate_q_6;
  r_5105500768(5.238013076159067, 4.802267501072603) _gate_q_5;
  cu1_5105512000(5.126620055950226) _gate_q_7, _gate_q_4;
  cs _gate_q_1, _gate_q_3;
  h _gate_q_2;
}