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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_minus_yy_5072613744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.052310495358002) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.539258016129256) _gate_q_0;
  ry(-1.539258016129256) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.052310495358002) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_minus_yy_5072602272(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.285868341834745) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.1343134550746597) _gate_q_0;
  ry(-0.1343134550746597) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.285868341834745) _gate_q_1;
}
gate ryy_5072608320(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6713660429964583) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5072605776(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.4933508285554722, 2.805677679734311, -2.805677679734311) _gate_q_0;
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
gate ryy_5072601408(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.189428216382537) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5072616672(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.739551659191444) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3014208173339648) _gate_q_1;
  ry(-2.3014208173339648) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.739551659191444) _gate_q_0;
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
gate cu1_5072606688(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.9862802678458764) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.9862802678458764) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.9862802678458764) _gate_q_1;
}
gate rxx_5072602224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.619662419515495) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5072611824(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.47946103060076) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3770322921911358) _gate_q_0;
  ry(-1.3770322921911358) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.47946103060076) _gate_q_1;
}
gate xx_minus_yy_5072608800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.2762691533674346) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3475486237063394) _gate_q_0;
  ry(-1.3475486237063394) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.2762691533674346) _gate_q_1;
}
gate r_5072612496(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.627794494265656, 2.8298278223106488, -2.8298278223106488) _gate_q_0;
}
gate xx_minus_yy_5073999328(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.522281356743986) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6060273589688332) _gate_q_0;
  ry(-0.6060273589688332) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.522281356743986) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  crx(1.627010182628404) _gate_q_10, _gate_q_13;
  ry(4.592540424170933) _gate_q_15;
  tdg _gate_q_6;
  cz _gate_q_3, _gate_q_1;
  crz(4.2796416234368335) _gate_q_0, _gate_q_16;
  iswap _gate_q_2, _gate_q_12;
  z _gate_q_9;
  cy _gate_q_8, _gate_q_14;
  cp(4.3153942930828935) _gate_q_7, _gate_q_4;
  t _gate_q_5;
  t _gate_q_11;
  u2(3.280113273537519, 2.197837223479456) _gate_q_6;
  sxdg _gate_q_14;
  p(4.719810677478691) _gate_q_8;
  dcx _gate_q_12, _gate_q_7;
  cs _gate_q_11, _gate_q_10;
  crx(5.397051113500681) _gate_q_5, _gate_q_15;
  t _gate_q_4;
  x _gate_q_2;
  ry(3.041987184976461) _gate_q_1;
  xx_minus_yy_5072613744(3.078516032258512, 2.052310495358002) _gate_q_3, _gate_q_0;
  csdg _gate_q_16, _gate_q_9;
  x _gate_q_13;
  crz(6.0957224442298275) _gate_q_14, _gate_q_10;
  rz(3.0354029473895627) _gate_q_2;
  xx_minus_yy_5072602272(0.2686269101493194, 1.285868341834745) _gate_q_12, _gate_q_11;
  swap _gate_q_9, _gate_q_7;
  cz _gate_q_8, _gate_q_5;
  h _gate_q_16;
  cy _gate_q_1, _gate_q_4;
  ryy_5072608320(3.6713660429964583) _gate_q_6, _gate_q_0;
  u3(0.5655380480971144, 1.7443903103437268, 1.0215165624927351) _gate_q_15;
  h _gate_q_13;
  s _gate_q_3;
  cu(2.407010417974589, 3.0332167586413283, 2.869351688626608, 0.41205078650197197) _gate_q_15, _gate_q_5;
  sx _gate_q_14;
  tdg _gate_q_12;
  s _gate_q_13;
  sxdg _gate_q_10;
  r_5072605776(1.4933508285554722, 4.376474006529207) _gate_q_11;
  csdg _gate_q_8, _gate_q_6;
  h _gate_q_0;
  rz(1.150213997327197) _gate_q_1;
  z _gate_q_3;
  u1(2.402055076900502) _gate_q_4;
  dcx _gate_q_16, _gate_q_2;
  swap _gate_q_7, _gate_q_9;
  sx _gate_q_1;
  csx _gate_q_6, _gate_q_8;
  csx _gate_q_2, _gate_q_4;
  rz(2.395199297447947) _gate_q_9;
  y _gate_q_3;
  h _gate_q_11;
  ryy_5072601408(6.189428216382537) _gate_q_7, _gate_q_0;
  u1(2.31472804788996) _gate_q_16;
  ch _gate_q_10, _gate_q_15;
  u1(3.93997667297816) _gate_q_14;
  cy _gate_q_13, _gate_q_12;
  sxdg _gate_q_5;
  s _gate_q_5;
  ch _gate_q_16, _gate_q_6;
  z _gate_q_14;
  rx(0.3804597695140871) _gate_q_3;
  u3(0.8007348563230708, 3.6219790727815337, 4.688098629616578) _gate_q_15;
  rz(2.823748882961264) _gate_q_11;
  rz(0.7490548671156652) _gate_q_2;
  sx _gate_q_8;
  xx_plus_yy_5072616672(4.6028416346679295, 3.739551659191444) _gate_q_4, _gate_q_10;
  cy _gate_q_12, _gate_q_0;
  cry(2.9678809775497825) _gate_q_13, _gate_q_7;
  cz _gate_q_9, _gate_q_1;
  x _gate_q_7;
  u1(0.9176054767506029) _gate_q_10;
  ecr _gate_q_1, _gate_q_15;
  cu(5.347992651501378, 4.891826027118345, 2.064102217190168, 6.229618033295319) _gate_q_13, _gate_q_5;
  x _gate_q_8;
  sx _gate_q_2;
  cp(1.5999761665120495) _gate_q_3, _gate_q_12;
  rz(0.41269314893529124) _gate_q_16;
  cu(2.6519375776269825, 2.2410534870199452, 3.5497435991639685, 4.024371967435546) _gate_q_9, _gate_q_14;
  t _gate_q_0;
  csx _gate_q_6, _gate_q_11;
  y _gate_q_4;
  cu1_5072606688(5.972560535691753) _gate_q_11, _gate_q_9;
  U(4.249576963175785, 1.2319564522446793, 4.040242818528659) _gate_q_1;
  s _gate_q_5;
  U(1.4525629613902538, 5.0122806332442424, 1.2111845717029053) _gate_q_6;
  rxx_5072602224(5.619662419515495) _gate_q_8, _gate_q_0;
  ry(2.9374122882681792) _gate_q_2;
  z _gate_q_15;
  swap _gate_q_3, _gate_q_7;
  u2(6.276206111633804, 0.7271812517004697) _gate_q_13;
  ecr _gate_q_16, _gate_q_10;
  csx _gate_q_12, _gate_q_4;
  h _gate_q_14;
  ch _gate_q_1, _gate_q_7;
  xx_minus_yy_5072611824(2.7540645843822715, 4.47946103060076) _gate_q_2, _gate_q_14;
  crz(0.6467822337669461) _gate_q_8, _gate_q_0;
  sx _gate_q_16;
  xx_minus_yy_5072608800(2.695097247412679, 0.2762691533674346) _gate_q_5, _gate_q_10;
  csx _gate_q_3, _gate_q_4;
  tdg _gate_q_12;
  cs _gate_q_11, _gate_q_6;
  cu(4.867101573441264, 4.666196138909405, 5.629414235833624, 3.030208795218259) _gate_q_9, _gate_q_13;
  r_5072612496(5.627794494265656, 4.400624149105545) _gate_q_15;
  x _gate_q_12;
  U(6.121349263496755, 3.1781427229608044, 5.071163093410895) _gate_q_16;
  cp(3.2186674425891217) _gate_q_1, _gate_q_0;
  t _gate_q_5;
  cry(3.095966544834021) _gate_q_11, _gate_q_4;
  cu(3.0155406818713475, 2.5323618239211996, 3.6951840456711564, 0.24969158075067968) _gate_q_13, _gate_q_3;
  sx _gate_q_8;
  U(2.9099409571906847, 2.5151922234719546, 0.2752214026552224) _gate_q_10;
  xx_minus_yy_5073999328(1.2120547179376664, 4.522281356743986) _gate_q_7, _gate_q_6;
  cry(5.612142599223751) _gate_q_14, _gate_q_2;
  sdg _gate_q_15;
  u3(0.41695414172280404, 1.8417794404412364, 5.423304007569672) _gate_q_9;
}
gate xx_minus_yy_5073994528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.878395559205451) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3210765286131614) _gate_q_0;
  ry(-0.3210765286131614) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.878395559205451) _gate_q_1;
}
gate ryy_5073999232(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3624969336795494) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5074005184(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3688214544721595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5073994960(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.2950651093400668) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074001056(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.748161276866548, 0.7206393898438019, -0.7206393898438019) _gate_q_0;
}
gate cu1_5073998032(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.7354825111543093) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.7354825111543093) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.7354825111543093) _gate_q_1;
}
gate rxx_5073999856(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9246388378807241) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5073994192(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.803610127042276) _gate_q_0;
  u1(1.753824477400494) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.3349758614564314, 0, -3.803610127042276) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.3349758614564314, 2.049785649641782, 0) _gate_q_1;
}
gate rzx_5073998560(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6242600116238948) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5073996304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.9356636666806124) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2155353009763872) _gate_q_1;
  ry(-1.2155353009763872) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.9356636666806124) _gate_q_0;
}
gate xx_plus_yy_5073998128(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.571184272919632) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.6181821366918774) _gate_q_1;
  ry(-2.6181821366918774) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.571184272919632) _gate_q_0;
}
gate cu1_5074006384(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8990088151037462) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8990088151037462) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8990088151037462) _gate_q_1;
}
gate rzz_5073998080(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.23676007005552) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5073994480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.509247985539569) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5074008928(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.133008501873483) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5074009024(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.153827508829353) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5073998176(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.2810663799428035) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7045205306807888) _gate_q_0;
  ry(-0.7045205306807888) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.2810663799428035) _gate_q_1;
}
gate ryy_5074009888(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7498018474414163) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5074008352(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.042710856561853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5074008736(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8529988842153404) _gate_q_0;
  u1(-2.592189742443768) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7812675071202657, 0, -2.8529988842153404) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7812675071202657, 5.4451886266591085, 0) _gate_q_1;
}
gate cu1_5074003168(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4108074919099278) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4108074919099278) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4108074919099278) _gate_q_1;
}
gate ryy_5073995008(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9672069077375784) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5073999136(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8107236314772295) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5074007536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.238231735953419) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5074000480(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1679844771721282, 2.982143819439152, -2.982143819439152) _gate_q_0;
}
gate xx_plus_yy_5074000624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.68006116877659) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.266934209035636) _gate_q_1;
  ry(-0.266934209035636) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.68006116877659) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  xx_minus_yy_5073994528(0.6421530572263228, 4.878395559205451) _gate_q_8, _gate_q_10;
  sxdg _gate_q_16;
  sxdg _gate_q_14;
  cx _gate_q_11, _gate_q_12;
  csdg _gate_q_0, _gate_q_13;
  crz(2.4762607869500117) _gate_q_15, _gate_q_1;
  rz(3.037782787950512) _gate_q_4;
  cs _gate_q_5, _gate_q_2;
  cy _gate_q_7, _gate_q_9;
  sxdg _gate_q_3;
  h _gate_q_6;
  p(3.478809164055222) _gate_q_9;
  h _gate_q_14;
  ryy_5073999232(2.3624969336795494) _gate_q_15, _gate_q_12;
  ryy_5074005184(3.3688214544721595) _gate_q_10, _gate_q_1;
  u3(6.107436613800626, 2.067810542825048, 2.0556773868685165) _gate_q_4;
  p(4.893040649126977) _gate_q_13;
  cp(1.6483248521156004) _gate_q_6, _gate_q_5;
  iswap _gate_q_7, _gate_q_0;
  rzz_5073994960(0.2950651093400668) _gate_q_11, _gate_q_3;
  U(2.7921452278363272, 0.022174206559720244, 4.493997791729531) _gate_q_16;
  sx _gate_q_8;
  r_5074001056(3.748161276866548, 2.2914357166386985) _gate_q_2;
  u3(0.3880973081067422, 2.2490816548125285, 5.38115380683692) _gate_q_11;
  cs _gate_q_4, _gate_q_8;
  h _gate_q_10;
  cz _gate_q_12, _gate_q_3;
  U(1.2255701168184288, 0.7895343974374145, 2.5016055382885263) _gate_q_14;
  tdg _gate_q_6;
  cy _gate_q_16, _gate_q_9;
  h _gate_q_1;
  ecr _gate_q_0, _gate_q_15;
  crx(2.399908648889024) _gate_q_13, _gate_q_7;
  ecr _gate_q_2, _gate_q_5;
  ecr _gate_q_16, _gate_q_5;
  s _gate_q_6;
  y _gate_q_12;
  y _gate_q_3;
  u1(3.907749675791055) _gate_q_1;
  cu1_5073998032(5.470965022308619) _gate_q_7, _gate_q_13;
  rxx_5073999856(0.9246388378807241) _gate_q_0, _gate_q_15;
  y _gate_q_8;
  crx(5.191230700244783) _gate_q_11, _gate_q_4;
  h _gate_q_10;
  rz(1.2222060844921925) _gate_q_2;
  rx(3.303737985774135) _gate_q_9;
  tdg _gate_q_14;
  csdg _gate_q_4, _gate_q_11;
  cy _gate_q_8, _gate_q_16;
  x _gate_q_5;
  cu3_5073994192(0.6699517229128628, 2.049785649641782, 5.55743460444277) _gate_q_10, _gate_q_7;
  cp(0.8070192467949189) _gate_q_1, _gate_q_15;
  sx _gate_q_9;
  rzx_5073998560(2.6242600116238948) _gate_q_2, _gate_q_14;
  xx_plus_yy_5073996304(2.4310706019527744, 3.9356636666806124) _gate_q_6, _gate_q_13;
  cp(3.5820490284698177) _gate_q_12, _gate_q_0;
  u3(0.5377116829568241, 0.646383958812391, 1.3119885168322671) _gate_q_3;
  sdg _gate_q_0;
  sdg _gate_q_4;
  xx_plus_yy_5073998128(5.236364273383755, 5.571184272919632) _gate_q_12, _gate_q_14;
  cu1_5074006384(1.7980176302074924) _gate_q_9, _gate_q_10;
  rzz_5073998080(5.23676007005552) _gate_q_7, _gate_q_16;
  crz(5.156088564415525) _gate_q_13, _gate_q_2;
  rz(2.499971628664968) _gate_q_8;
  cry(2.9275674077179614) _gate_q_5, _gate_q_15;
  cry(3.1994445606268616) _gate_q_3, _gate_q_11;
  u2(4.017946896713883, 1.2623045395598989) _gate_q_6;
  u3(3.6533713603692775, 3.433461285545924, 4.021536642957969) _gate_q_1;
  cry(4.829913709360636) _gate_q_2, _gate_q_12;
  ry(1.9776020386881494) _gate_q_16;
  rzx_5073994480(4.509247985539569) _gate_q_11, _gate_q_0;
  rzx_5074008928(5.133008501873483) _gate_q_10, _gate_q_15;
  crx(2.7263945138591557) _gate_q_1, _gate_q_3;
  ryy_5074009024(4.153827508829353) _gate_q_7, _gate_q_5;
  xx_minus_yy_5073998176(1.4090410613615776, 6.2810663799428035) _gate_q_8, _gate_q_9;
  ryy_5074009888(2.7498018474414163) _gate_q_6, _gate_q_13;
  ry(1.9370539559545075) _gate_q_4;
  u2(0.5862487483709555, 5.353317595259629) _gate_q_14;
  rzx_5074008352(2.042710856561853) _gate_q_10, _gate_q_16;
  cu(1.941281736954047, 0.5679753467554912, 1.3328054543221861, 5.903508639727847) _gate_q_5, _gate_q_8;
  cu3_5074008736(3.5625350142405314, 5.4451886266591085, 0.2608091417715725) _gate_q_9, _gate_q_13;
  s _gate_q_11;
  h _gate_q_0;
  U(6.20266174171446, 3.7546012286350714, 4.85238831816742) _gate_q_7;
  cp(1.0773651113710885) _gate_q_15, _gate_q_2;
  cu1_5074003168(2.8216149838198556) _gate_q_1, _gate_q_4;
  ryy_5073995008(2.9672069077375784) _gate_q_12, _gate_q_14;
  iswap _gate_q_3, _gate_q_6;
  rzx_5073999136(2.8107236314772295) _gate_q_6, _gate_q_11;
  t _gate_q_12;
  cu(2.0023781734993027, 0.41301582205338827, 5.432542718967215, 4.237306038490552) _gate_q_13, _gate_q_3;
  sx _gate_q_5;
  cz _gate_q_15, _gate_q_9;
  cry(6.1838628777347555) _gate_q_7, _gate_q_0;
  u1(2.3256021767259485) _gate_q_2;
  tdg _gate_q_14;
  rzx_5074007536(3.238231735953419) _gate_q_10, _gate_q_16;
  u1(3.4871384085796646) _gate_q_1;
  id _gate_q_8;
  r_5074000480(1.1679844771721282, 4.552940146234048) _gate_q_4;
  iswap _gate_q_9, _gate_q_2;
  cry(2.48345967495126) _gate_q_10, _gate_q_13;
  ecr _gate_q_14, _gate_q_3;
  csx _gate_q_1, _gate_q_4;
  cry(3.0712094977952367) _gate_q_16, _gate_q_7;
  x _gate_q_12;
  rx(4.073274847123249) _gate_q_5;
  cx _gate_q_15, _gate_q_11;
  xx_plus_yy_5074000624(0.533868418071272, 0.68006116877659) _gate_q_6, _gate_q_8;
  x _gate_q_0;
}