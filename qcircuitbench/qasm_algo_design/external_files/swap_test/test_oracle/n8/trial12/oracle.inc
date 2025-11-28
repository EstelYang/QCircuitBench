gate rxx_5072243888(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7985156050627475) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072250848(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.173318235456503) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072245376(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.148206283974398, 1.5944774213726216, -1.5944774213726216) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate cu1_5072245760(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.6110613865167172) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.6110613865167172) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.6110613865167172) _gate_q_1;
}
gate ryy_5072245328(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9402971717408348) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5072255456(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.049968972042251, 0.4803973210556962, -0.4803973210556962) _gate_q_0;
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
gate r_5072254352(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.453079303763273, -0.10365355420261002, 0.10365355420261002) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_plus_yy_5072244944(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.114363482266911) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6969254038507764) _gate_q_1;
  ry(-1.6969254038507764) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.114363482266911) _gate_q_0;
}
gate cu3_5072255936(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.390578741022518) _gate_q_0;
  u1(0.16169740734950766) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.652920231434988, 0, -4.390578741022518) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.652920231434988, 4.22888133367301, 0) _gate_q_1;
}
gate rzz_5072244992(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.800773442479472) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072256512(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.7383792604487853, 0.3401231497810715, -0.3401231497810715) _gate_q_0;
}
gate rzz_5072256368(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.5909736962093224) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  cu(1.013819830436821, 1.4016903660462545, 3.940675017330213, 0.5585792234279175) _gate_q_1, _gate_q_0;
  rxx_5072243888(3.7985156050627475) _gate_q_4, _gate_q_3;
  swap _gate_q_6, _gate_q_7;
  rzx_5072250848(2.173318235456503) _gate_q_5, _gate_q_2;
  cry(0.5092240077974887) _gate_q_0, _gate_q_1;
  r_5072245376(6.148206283974398, 3.165273748167518) _gate_q_7;
  ch _gate_q_6, _gate_q_2;
  dcx _gate_q_3, _gate_q_4;
  p(3.680212874662698) _gate_q_5;
  cy _gate_q_1, _gate_q_3;
  sxdg _gate_q_7;
  p(4.711476993142772) _gate_q_2;
  cu1_5072245760(1.2221227730334343) _gate_q_0, _gate_q_4;
  cry(5.136181166560398) _gate_q_5, _gate_q_6;
  u3(2.6646908676409367, 0.8025690920388048, 4.2976039519292595) _gate_q_7;
  rx(3.996009086344565) _gate_q_0;
  ry(6.251508261107593) _gate_q_3;
  ryy_5072245328(1.9402971717408348) _gate_q_1, _gate_q_2;
  dcx _gate_q_4, _gate_q_6;
  r_5072255456(4.049968972042251, 2.0511936478505928) _gate_q_5;
  csx _gate_q_2, _gate_q_0;
  u2(6.207566853226535, 3.0059339904297695) _gate_q_7;
  r_5072254352(2.453079303763273, 1.4671427725922865) _gate_q_3;
  y _gate_q_6;
  dcx _gate_q_1, _gate_q_4;
  U(2.121395970366212, 4.057600802375428, 5.151971684582368) _gate_q_5;
  iswap _gate_q_0, _gate_q_2;
  xx_plus_yy_5072244944(3.393850807701553, 3.114363482266911) _gate_q_6, _gate_q_5;
  u1(2.2584802211277726) _gate_q_4;
  cu3_5072255936(5.305840462869976, 4.22888133367301, 4.552276148372025) _gate_q_7, _gate_q_3;
  id _gate_q_1;
  cu(0.5892752235104303, 5.337980153640982, 1.2983034311894655, 4.901823780373225) _gate_q_7, _gate_q_3;
  cx _gate_q_1, _gate_q_4;
  rx(3.6795185220085953) _gate_q_6;
  u3(0.666911090645623, 1.8759324718976251, 0.2920497862858766) _gate_q_0;
  rzz_5072244992(5.800773442479472) _gate_q_2, _gate_q_5;
  y _gate_q_1;
  r_5072256512(3.7383792604487853, 1.910919476575968) _gate_q_0;
  rzz_5072256368(1.5909736962093224) _gate_q_7, _gate_q_2;
  cs _gate_q_5, _gate_q_3;
  p(5.862989210975201) _gate_q_4;
  h _gate_q_6;
}
gate r_5072247728(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.447076490260669, 1.0718374415105605, -1.0718374415105605) _gate_q_0;
}
gate rxx_5072256560(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.054418266131953) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5072242112(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.4605564838607974) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.572830864123393) _gate_q_0;
  ry(-2.572830864123393) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.4605564838607974) _gate_q_1;
}
gate cu1_5072254784(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.078097470168873) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.078097470168873) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.078097470168873) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5072256800(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.208385932102414) _gate_q_0;
  u1(-0.3418522126089212) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.37162351388567433, 0, -4.208385932102414) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.37162351388567433, 4.550238144711335, 0) _gate_q_1;
}
gate rzx_5072607840(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.710931991807264) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  rx(0.776184082059126) _gate_q_4;
  r_5072247728(4.447076490260669, 2.642633768305457) _gate_q_3;
  iswap _gate_q_1, _gate_q_5;
  swap _gate_q_6, _gate_q_0;
  h _gate_q_7;
  z _gate_q_2;
  U(0.3525937920203822, 2.31059436039446, 3.7347102477716527) _gate_q_5;
  crx(6.123346887678084) _gate_q_3, _gate_q_7;
  u1(0.7055300627725194) _gate_q_0;
  crz(0.8726910699029945) _gate_q_2, _gate_q_1;
  y _gate_q_4;
  z _gate_q_6;
  rxx_5072256560(4.054418266131953) _gate_q_3, _gate_q_7;
  x _gate_q_6;
  z _gate_q_0;
  xx_minus_yy_5072242112(5.145661728246786, 0.4605564838607974) _gate_q_1, _gate_q_5;
  crz(5.752375183633555) _gate_q_2, _gate_q_4;
  tdg _gate_q_7;
  iswap _gate_q_6, _gate_q_2;
  t _gate_q_5;
  crx(1.9378281356098364) _gate_q_3, _gate_q_1;
  cry(2.9059397854541307) _gate_q_0, _gate_q_4;
  x _gate_q_3;
  y _gate_q_7;
  crz(2.113233214043617) _gate_q_2, _gate_q_6;
  cy _gate_q_1, _gate_q_4;
  cu1_5072254784(2.156194940337746) _gate_q_0, _gate_q_5;
  csdg _gate_q_5, _gate_q_1;
  sx _gate_q_2;
  sdg _gate_q_3;
  sxdg _gate_q_7;
  cu3_5072256800(0.7432470277713487, 4.550238144711335, 3.8665337194934923) _gate_q_0, _gate_q_4;
  t _gate_q_6;
  cry(1.8242143073373709) _gate_q_1, _gate_q_3;
  ry(3.137646230345538) _gate_q_4;
  iswap _gate_q_6, _gate_q_7;
  rzx_5072607840(2.710931991807264) _gate_q_2, _gate_q_0;
  p(2.935991733781968) _gate_q_5;
  s _gate_q_0;
  z _gate_q_1;
  dcx _gate_q_6, _gate_q_5;
  cu(1.9178399573586145, 1.8489908590644037, 4.752226599966652, 4.740022005864465) _gate_q_4, _gate_q_2;
  u3(3.534847171316582, 2.9666336171264134, 2.0310076568176516) _gate_q_7;
  u3(3.4684728474697555, 5.999854263048084, 1.3117415726765305) _gate_q_3;
}