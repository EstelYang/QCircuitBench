gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5072702784(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.1422110078765417) _gate_q_0;
  u1(0.2521594628579597) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.040764605435677, 0, -1.1422110078765417) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.040764605435677, 0.8900515450185821, 0) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate ryy_5072703360(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.787438565573747) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5072702976(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.4049552240085317, 1.2448732773043885, -1.2448732773043885) _gate_q_0;
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
gate cu3_5072704848(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2265158906405826) _gate_q_0;
  u1(-1.6875767374240447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7405254216095177, 0, -3.2265158906405826) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7405254216095177, 4.914092628064627, 0) _gate_q_1;
}
gate r_5072700048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.449672876498783, -0.023529813980243786, 0.023529813980243786) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
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
gate rzx_5072714688(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.528187769263129) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  cz _gate_q_2, _gate_q_6;
  csdg _gate_q_3, _gate_q_0;
  cu3_5072702784(6.081529210871354, 0.8900515450185821, 1.3943704707345015) _gate_q_4, _gate_q_1;
  cp(1.865722815559006) _gate_q_5, _gate_q_7;
  crz(2.5358469425614256) _gate_q_0, _gate_q_1;
  cs _gate_q_7, _gate_q_3;
  h _gate_q_6;
  ryy_5072703360(1.787438565573747) _gate_q_2, _gate_q_4;
  id _gate_q_5;
  r_5072702976(1.4049552240085317, 2.815669604099285) _gate_q_6;
  id _gate_q_4;
  csdg _gate_q_3, _gate_q_7;
  csx _gate_q_2, _gate_q_1;
  swap _gate_q_0, _gate_q_5;
  cu3_5072704848(1.4810508432190355, 4.914092628064627, 1.5389391532165377) _gate_q_0, _gate_q_5;
  rz(0.6395004882046733) _gate_q_7;
  rz(0.7541683576669047) _gate_q_6;
  csx _gate_q_2, _gate_q_1;
  r_5072700048(2.449672876498783, 1.5472665128146528) _gate_q_3;
  sxdg _gate_q_4;
  ecr _gate_q_5, _gate_q_1;
  x _gate_q_0;
  sx _gate_q_6;
  rzx_5072714688(5.528187769263129) _gate_q_7, _gate_q_2;
  u3(1.299643084904335, 1.2632894404110573, 5.735029708142667) _gate_q_3;
  U(2.52460944297324, 3.0024185044038347, 2.7618219229816883) _gate_q_4;
  rz(4.610025432351266) _gate_q_6;
  u2(0.7981796841317749, 4.326342054916881) _gate_q_5;
  sx _gate_q_4;
  ry(2.2490021207811997) _gate_q_2;
  rx(1.27610874048938) _gate_q_1;
  sx _gate_q_0;
  cz _gate_q_7, _gate_q_3;
  t _gate_q_5;
  crx(5.242728186329779) _gate_q_7, _gate_q_3;
  s _gate_q_6;
  h _gate_q_4;
  y _gate_q_2;
  csx _gate_q_0, _gate_q_1;
  iswap _gate_q_7, _gate_q_5;
  ecr _gate_q_3, _gate_q_1;
  t _gate_q_2;
  u2(4.403308802030729, 1.1687151173474568) _gate_q_4;
  U(4.7265141622667, 1.7504275863689884, 5.838407118553331) _gate_q_6;
  U(3.067279147250214, 1.158511476961371, 5.702068817745245) _gate_q_0;
}
gate rzx_5072455056(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.0741646452303915) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5072461728(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.326501191548715) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.064105581829053) _gate_q_0;
  ry(-3.064105581829053) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.326501191548715) _gate_q_1;
}
gate r_5072458896(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.9920432383805504, -1.1143369595725872, 1.1143369595725872) _gate_q_0;
}
gate rxx_5072458800(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.533179730612408) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072459088(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.311697167081374) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.354976082425563) _gate_q_1;
  ry(-2.354976082425563) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.311697167081374) _gate_q_0;
}
gate rzx_5072466528(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.654433921588815) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5072453808(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.9009927358401607) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.07801224027758699) _gate_q_1;
  ry(-0.07801224027758699) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.9009927358401607) _gate_q_0;
}
gate cu1_5072468784(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.8561339817202287) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.8561339817202287) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.8561339817202287) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  csx _gate_q_0, _gate_q_2;
  rz(5.3264104269746415) _gate_q_3;
  rzx_5072455056(5.0741646452303915) _gate_q_4, _gate_q_6;
  iswap _gate_q_7, _gate_q_1;
  h _gate_q_5;
  h _gate_q_1;
  xx_minus_yy_5072461728(6.128211163658106, 3.326501191548715) _gate_q_6, _gate_q_4;
  cu(0.15565476332870143, 4.062264136772021, 2.721084003379441, 4.271797322504489) _gate_q_2, _gate_q_5;
  rz(3.4820611025284243) _gate_q_0;
  x _gate_q_3;
  sdg _gate_q_7;
  cy _gate_q_7, _gate_q_5;
  r_5072458896(1.9920432383805504, 0.45645936722230945) _gate_q_0;
  rxx_5072458800(3.533179730612408) _gate_q_1, _gate_q_6;
  z _gate_q_4;
  y _gate_q_2;
  p(4.549966515961189) _gate_q_3;
  xx_plus_yy_5072459088(4.709952164851126, 5.311697167081374) _gate_q_4, _gate_q_0;
  rx(3.083332825673722) _gate_q_1;
  cp(3.4366128377013947) _gate_q_6, _gate_q_3;
  y _gate_q_7;
  swap _gate_q_2, _gate_q_5;
  ecr _gate_q_3, _gate_q_2;
  cu(3.922697016268357, 1.6935608287671717, 2.7944362148512565, 4.055502299590479) _gate_q_5, _gate_q_1;
  U(4.2483586623045175, 4.863400008690321, 2.408865818480176) _gate_q_0;
  rzx_5072466528(3.654433921588815) _gate_q_7, _gate_q_4;
  id _gate_q_6;
  csdg _gate_q_3, _gate_q_2;
  xx_plus_yy_5072453808(0.15602448055517398, 0.9009927358401607) _gate_q_7, _gate_q_1;
  sxdg _gate_q_4;
  cz _gate_q_0, _gate_q_6;
  t _gate_q_5;
  cu1_5072468784(3.7122679634404574) _gate_q_2, _gate_q_7;
  iswap _gate_q_4, _gate_q_0;
  s _gate_q_5;
  cy _gate_q_6, _gate_q_1;
  p(3.9029283041996834) _gate_q_3;
  h _gate_q_4;
  rz(2.8805294516147737) _gate_q_5;
  csdg _gate_q_2, _gate_q_6;
  y _gate_q_7;
  p(0.8557004055113748) _gate_q_1;
  crz(1.0060941634460225) _gate_q_0, _gate_q_3;
}