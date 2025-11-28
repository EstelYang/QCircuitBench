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
gate rxx_5072706000(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.85678632875283) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5072706096(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.2009985690253466) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5072713632(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.9482419995485997) _gate_q_0;
  u1(-0.3070354589836367) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7738779280417095, 0, -0.9482419995485997) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7738779280417095, 1.2552774585322364, 0) _gate_q_1;
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
gate r_5072706048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.5595111726616864, 2.477632278103129, -2.477632278103129) _gate_q_0;
}
gate rzz_5072713296(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.8253548749568385) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate xx_minus_yy_5072705568(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.509800185701868) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6904655857124276) _gate_q_0;
  ry(-2.6904655857124276) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.509800185701868) _gate_q_1;
}
gate ryy_5072702352(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7451295027669986) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5072702496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5365284659418577) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5072713824(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5066289108133146) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072714064(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.7960550030667406, 1.5985271038990763, -1.5985271038990763) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  id _gate_q_6;
  u1(0.9914108264943465) _gate_q_5;
  csx _gate_q_3, _gate_q_4;
  s _gate_q_1;
  rxx_5072706000(4.85678632875283) _gate_q_0, _gate_q_2;
  z _gate_q_7;
  swap _gate_q_3, _gate_q_0;
  rzz_5072706096(2.2009985690253466) _gate_q_5, _gate_q_6;
  h _gate_q_7;
  h _gate_q_2;
  h _gate_q_1;
  y _gate_q_4;
  t _gate_q_6;
  cu3_5072713632(1.547755856083419, 1.2552774585322364, 0.641206540564963) _gate_q_0, _gate_q_2;
  u1(2.917805289327716) _gate_q_3;
  u2(2.6251864852531908, 1.2076044263443264) _gate_q_1;
  ecr _gate_q_7, _gate_q_4;
  r_5072706048(2.5595111726616864, 4.048428604898025) _gate_q_5;
  u1(2.5142652436925337) _gate_q_1;
  rzz_5072713296(3.8253548749568385) _gate_q_5, _gate_q_0;
  tdg _gate_q_3;
  id _gate_q_4;
  cry(6.262484863536338) _gate_q_6, _gate_q_2;
  x _gate_q_7;
  U(1.4929378931697141, 3.6720410037459086, 6.263370408077896) _gate_q_7;
  csdg _gate_q_5, _gate_q_3;
  crx(3.8010005149797856) _gate_q_1, _gate_q_4;
  crx(2.9292368617826363) _gate_q_6, _gate_q_2;
  z _gate_q_0;
  xx_minus_yy_5072705568(5.380931171424855, 2.509800185701868) _gate_q_1, _gate_q_7;
  rz(1.2047466720241173) _gate_q_2;
  ryy_5072702352(3.7451295027669986) _gate_q_4, _gate_q_6;
  csdg _gate_q_5, _gate_q_0;
  sxdg _gate_q_3;
  u1(2.974413993254902) _gate_q_4;
  ry(3.386897064610985) _gate_q_0;
  ch _gate_q_2, _gate_q_1;
  rzx_5072702496(0.5365284659418577) _gate_q_6, _gate_q_5;
  swap _gate_q_3, _gate_q_7;
  u2(1.917721403201089, 4.287698464484581) _gate_q_0;
  rzx_5072713824(3.5066289108133146) _gate_q_3, _gate_q_5;
  u3(5.953784936625491, 4.568782292979403, 0.1528507850514053) _gate_q_2;
  z _gate_q_1;
  u2(1.5429009436418497, 1.5309699207744947) _gate_q_4;
  U(4.146099741726249, 1.5897307271096082, 2.124981210457514) _gate_q_7;
  r_5072714064(3.7960550030667406, 3.169323430693973) _gate_q_6;
}
gate rzz_5072617296(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.6303237692646837) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_plus_yy_5072609472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.46594977189373193) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5245308578156503) _gate_q_1;
  ry(-0.5245308578156503) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.46594977189373193) _gate_q_0;
}
gate ryy_5072603808(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.9559488207385254) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072614704(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7063109693406613) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5072614800(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.981215603920995) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5072614752(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.482959973851724) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072614464(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1346942834392346, 3.5508408781919876, -3.5508408781919876) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5072602224(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.315903244340693) _gate_q_0;
  u1(0.2535980814946568) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1807029375215083, 0, -2.315903244340693) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1807029375215083, 2.062305162846036, 0) _gate_q_1;
}
gate xx_plus_yy_5072606304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.5012182334298085) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.219631692694072) _gate_q_1;
  ry(-2.219631692694072) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.5012182334298085) _gate_q_0;
}
gate r_5072614032(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.9750864078985284, -1.083048116601315, 1.083048116601315) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  u3(3.2070246117355565, 3.7507136769171256, 4.338708261605434) _gate_q_2;
  rzz_5072617296(3.6303237692646837) _gate_q_3, _gate_q_4;
  cs _gate_q_5, _gate_q_1;
  cz _gate_q_6, _gate_q_0;
  u1(3.253290557045766) _gate_q_7;
  y _gate_q_6;
  u3(5.865578794230873, 3.8401063144854106, 5.795129322907324) _gate_q_3;
  xx_plus_yy_5072609472(1.0490617156313007, 0.46594977189373193) _gate_q_2, _gate_q_4;
  crz(0.12006942724622052) _gate_q_1, _gate_q_0;
  ryy_5072603808(3.9559488207385254) _gate_q_5, _gate_q_7;
  x _gate_q_7;
  crz(4.729533265137654) _gate_q_0, _gate_q_2;
  cu(1.7291738042703895, 3.9158350958567802, 5.898999822992899, 0.24788962093545192) _gate_q_5, _gate_q_6;
  sdg _gate_q_3;
  u3(0.5439520990338392, 0.769120124887682, 5.203290998916347) _gate_q_4;
  z _gate_q_1;
  cy _gate_q_5, _gate_q_1;
  ryy_5072614704(2.7063109693406613) _gate_q_4, _gate_q_0;
  tdg _gate_q_7;
  rzz_5072614800(3.981215603920995) _gate_q_2, _gate_q_6;
  u3(5.6261329285813915, 2.5341384061081564, 4.578271874228586) _gate_q_3;
  U(1.682795980984011, 4.503608504503946, 1.8652223058274309) _gate_q_1;
  dcx _gate_q_5, _gate_q_6;
  rzz_5072614752(5.482959973851724) _gate_q_2, _gate_q_0;
  sx _gate_q_3;
  sx _gate_q_4;
  r_5072614464(1.1346942834392346, 5.121637204986884) _gate_q_7;
  iswap _gate_q_1, _gate_q_2;
  cx _gate_q_4, _gate_q_5;
  cp(1.2114383815259047) _gate_q_6, _gate_q_7;
  h _gate_q_0;
  u2(1.273369504693013, 3.39604104340773) _gate_q_3;
  csdg _gate_q_3, _gate_q_6;
  crz(4.086897955797686) _gate_q_5, _gate_q_2;
  cu3_5072602224(2.3614058750430167, 2.062305162846036, 2.5695013258353496) _gate_q_7, _gate_q_4;
  crz(4.6337008730579266) _gate_q_0, _gate_q_1;
  xx_plus_yy_5072606304(4.439263385388144, 3.5012182334298085) _gate_q_2, _gate_q_7;
  tdg _gate_q_5;
  sdg _gate_q_0;
  r_5072614032(3.9750864078985284, 0.48774821019358144) _gate_q_6;
  cry(4.050269079724942) _gate_q_4, _gate_q_3;
  rx(2.95457800935733) _gate_q_1;
}