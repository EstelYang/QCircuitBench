gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rxx_5070135344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.421145606772081) _gate_q_1;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5070141488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.075652371658108) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1811316841550794) _gate_q_0;
  ry(-1.1811316841550794) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.075652371658108) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rxx_5070140000(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.77698301063269) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5070133952(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.911562247109424) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5070138608(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.880225946764936) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5070135008(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3272045252523355) _gate_q_0;
  u1(-1.796760636076208) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8246466830577739, 0, -3.3272045252523355) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8246466830577739, 5.1239651613285435, 0) _gate_q_1;
}
gate cu1_5070134048(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.0163590473483874) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.0163590473483874) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.0163590473483874) _gate_q_1;
}
gate rzx_5070127904(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.39452879838116156) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5070127376(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.1097829304049929) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.784666838863074) _gate_q_0;
  ry(-1.784666838863074) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.1097829304049929) _gate_q_1;
}
gate rzx_5070136592(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.10132499000999055) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5070135488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.124071746566847) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8260009952649616) _gate_q_1;
  ry(-2.8260009952649616) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.124071746566847) _gate_q_0;
}
gate rzz_5070143456(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.864405149886339) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5070138464(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.452412377043903, 3.4433947372946214, -3.4433947372946214) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  cry(3.1788183634282356) _gate_q_8, _gate_q_9;
  cz _gate_q_4, _gate_q_1;
  sdg _gate_q_5;
  csdg _gate_q_3, _gate_q_0;
  rx(1.4754193848187294) _gate_q_7;
  rxx_5070135344(2.421145606772081) _gate_q_6, _gate_q_2;
  u1(2.745710875825093) _gate_q_6;
  u1(2.8735817707805125) _gate_q_7;
  iswap _gate_q_4, _gate_q_3;
  tdg _gate_q_9;
  U(5.551425601256024, 2.076880274865407, 0.05149456342345357) _gate_q_5;
  u1(5.146028846180316) _gate_q_0;
  ecr _gate_q_1, _gate_q_2;
  rx(3.02331713670764) _gate_q_8;
  xx_minus_yy_5070141488(2.362263368310159, 4.075652371658108) _gate_q_1, _gate_q_0;
  dcx _gate_q_6, _gate_q_2;
  p(3.3877444528771994) _gate_q_4;
  cz _gate_q_8, _gate_q_7;
  z _gate_q_5;
  U(1.3599726654975717, 3.1492739380779207, 3.709543749256267) _gate_q_3;
  h _gate_q_9;
  sxdg _gate_q_5;
  x _gate_q_3;
  cu(2.5082523723990695, 5.7106515722099, 3.1902418959161474, 4.933195487914437) _gate_q_0, _gate_q_1;
  u1(2.541449246634461) _gate_q_7;
  sx _gate_q_4;
  rxx_5070140000(5.77698301063269) _gate_q_9, _gate_q_2;
  rx(3.8452959764188237) _gate_q_8;
  h _gate_q_6;
  cp(6.228859776586937) _gate_q_7, _gate_q_6;
  rzz_5070133952(2.911562247109424) _gate_q_0, _gate_q_8;
  ch _gate_q_3, _gate_q_2;
  rzz_5070138608(1.880225946764936) _gate_q_1, _gate_q_9;
  ecr _gate_q_4, _gate_q_5;
  h _gate_q_8;
  U(0.01588482931008317, 4.476104137609913, 5.6301282093523755) _gate_q_6;
  cu3_5070135008(3.6492933661155478, 5.1239651613285435, 1.5304438891761276) _gate_q_3, _gate_q_2;
  sdg _gate_q_9;
  cp(3.4331080885528835) _gate_q_0, _gate_q_5;
  cu1_5070134048(6.032718094696775) _gate_q_4, _gate_q_7;
  u2(0.3313580133141543, 3.9403109666716722) _gate_q_1;
  cp(0.4069739906036379) _gate_q_8, _gate_q_3;
  cy _gate_q_0, _gate_q_9;
  s _gate_q_6;
  rzx_5070127904(0.39452879838116156) _gate_q_7, _gate_q_2;
  xx_minus_yy_5070127376(3.569333677726148, 0.1097829304049929) _gate_q_5, _gate_q_1;
  ry(4.152451106974021) _gate_q_4;
  s _gate_q_5;
  s _gate_q_8;
  cx _gate_q_1, _gate_q_7;
  cx _gate_q_2, _gate_q_0;
  cy _gate_q_6, _gate_q_4;
  ecr _gate_q_9, _gate_q_3;
  h _gate_q_8;
  cu(3.544095706902061, 4.134363597357991, 5.11483484467135, 1.7987312238056392) _gate_q_6, _gate_q_2;
  rzx_5070136592(0.10132499000999055) _gate_q_9, _gate_q_1;
  cu(2.0200372346497026, 3.931287103369102, 6.172983795134871, 2.9998489028858506) _gate_q_7, _gate_q_0;
  ch _gate_q_3, _gate_q_5;
  ry(2.507300596135381) _gate_q_4;
  xx_plus_yy_5070135488(5.652001990529923, 2.124071746566847) _gate_q_2, _gate_q_9;
  t _gate_q_5;
  rzz_5070143456(4.864405149886339) _gate_q_1, _gate_q_8;
  u1(0.16417603701365335) _gate_q_0;
  dcx _gate_q_3, _gate_q_6;
  r_5070138464(5.452412377043903, 5.014191064089518) _gate_q_4;
  p(1.6329376687760193) _gate_q_7;
}
gate cu3_5073831312(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.6889835630353036) _gate_q_0;
  u1(2.613849623980974) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8761075893915415, 0, -2.6889835630353036) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8761075893915415, 0.07513393905432952, 0) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5073831984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.757079669750894) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5073832032(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.503076890208622) _gate_q_0;
  u1(0.35024082708794557) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.066473762220117, 0, -5.503076890208622) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.066473762220117, 5.1528360631206755, 0) _gate_q_1;
}
gate rxx_5073832128(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4225406262997196) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5073832224(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.653687022021516) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5070139040(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.140073573788559) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5070132656(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.5344107028133975, 3.5398926931967853, -3.5398926931967853) _gate_q_0;
}
gate cu1_5070139184(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1420285237346706) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1420285237346706) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1420285237346706) _gate_q_1;
}
gate xx_plus_yy_5070131696(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.988148173047576) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.729630250355735) _gate_q_1;
  ry(-2.729630250355735) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.988148173047576) _gate_q_0;
}
gate cu3_5070130832(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.889563780795853) _gate_q_0;
  u1(-0.14470454814252132) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4198721471701547, 0, -0.889563780795853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4198721471701547, 1.0342683289383743, 0) _gate_q_1;
}
gate xx_plus_yy_5072317296(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.4432522791196485) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.376134517193691) _gate_q_1;
  ry(-0.376134517193691) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.4432522791196485) _gate_q_0;
}
gate xx_minus_yy_5072306976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.0525367554320075) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.25461443501655) _gate_q_0;
  ry(-2.25461443501655) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.0525367554320075) _gate_q_1;
}
gate rzx_5072316336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.680577622647117) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5072318304(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.796860446063255) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5070588624(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.26145744876114) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5070293664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.814367542970647) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.384773487100047) _gate_q_1;
  ry(-2.384773487100047) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.814367542970647) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  x _gate_q_2;
  id _gate_q_3;
  u2(3.0769046168641294, 2.4972272111980858) _gate_q_0;
  cu3_5073831312(3.752215178783083, 0.07513393905432952, 5.302833187016278) _gate_q_7, _gate_q_8;
  u3(4.004237342058481, 0.2408007245638626, 2.201618700841848) _gate_q_9;
  u3(0.35138293009530464, 4.3497945438498515, 2.865351993253459) _gate_q_1;
  ry(2.6575764513506006) _gate_q_5;
  t _gate_q_4;
  id _gate_q_6;
  ch _gate_q_9, _gate_q_4;
  cry(3.8180090712608687) _gate_q_2, _gate_q_1;
  cu(3.186072152709027, 1.3310169993495429, 5.575710675194403, 5.493689796747937) _gate_q_7, _gate_q_6;
  s _gate_q_3;
  cs _gate_q_8, _gate_q_0;
  x _gate_q_5;
  crx(4.083233797206825) _gate_q_3, _gate_q_0;
  u2(0.3492839194585, 1.1196196279266435) _gate_q_4;
  crx(3.5027664166287) _gate_q_1, _gate_q_9;
  rzx_5073831984(4.757079669750894) _gate_q_8, _gate_q_7;
  h _gate_q_2;
  cu3_5073832032(6.132947524440234, 5.1528360631206755, 5.853317717296567) _gate_q_6, _gate_q_5;
  x _gate_q_4;
  cy _gate_q_7, _gate_q_8;
  id _gate_q_9;
  sxdg _gate_q_1;
  rxx_5073832128(0.4225406262997196) _gate_q_3, _gate_q_6;
  U(4.46396564026909, 4.038579614881926, 6.049738686374639) _gate_q_5;
  ryy_5073832224(3.653687022021516) _gate_q_2, _gate_q_0;
  rz(6.207966637814025) _gate_q_2;
  u2(2.900801082037488, 0.06503318946255232) _gate_q_4;
  cu(4.112680271489685, 2.9150024416290057, 0.11588173006485682, 4.023494940504179) _gate_q_3, _gate_q_9;
  cz _gate_q_0, _gate_q_8;
  u1(2.243494336179517) _gate_q_5;
  crz(5.414384495451177) _gate_q_7, _gate_q_1;
  ry(4.5602302453328525) _gate_q_6;
  z _gate_q_5;
  u1(5.286299835234941) _gate_q_7;
  s _gate_q_1;
  rxx_5070139040(6.140073573788559) _gate_q_9, _gate_q_4;
  r_5070132656(1.5344107028133975, 5.110689019991682) _gate_q_2;
  cu1_5070139184(2.284057047469341) _gate_q_8, _gate_q_3;
  sxdg _gate_q_6;
  sxdg _gate_q_0;
  xx_plus_yy_5070131696(5.45926050071147, 2.988148173047576) _gate_q_5, _gate_q_6;
  cu3_5070130832(0.8397442943403094, 1.0342683289383743, 0.7448592326533316) _gate_q_9, _gate_q_1;
  cx _gate_q_2, _gate_q_3;
  xx_plus_yy_5072317296(0.752269034387382, 3.4432522791196485) _gate_q_8, _gate_q_4;
  xx_minus_yy_5072306976(4.5092288700331, 6.0525367554320075) _gate_q_0, _gate_q_7;
  y _gate_q_8;
  cp(3.7404294296603067) _gate_q_9, _gate_q_2;
  s _gate_q_1;
  rzx_5072316336(5.680577622647117) _gate_q_4, _gate_q_3;
  swap _gate_q_0, _gate_q_6;
  swap _gate_q_5, _gate_q_7;
  rxx_5072318304(5.796860446063255) _gate_q_1, _gate_q_6;
  cu(1.1392165152345188, 6.259657758700795, 1.142244367734974, 1.984439924603036) _gate_q_8, _gate_q_5;
  t _gate_q_7;
  cry(3.957004165699452) _gate_q_4, _gate_q_9;
  rxx_5070588624(5.26145744876114) _gate_q_2, _gate_q_0;
  u1(6.231835247408045) _gate_q_3;
  sx _gate_q_1;
  cz _gate_q_0, _gate_q_6;
  rx(5.3952854758535285) _gate_q_8;
  swap _gate_q_3, _gate_q_2;
  cs _gate_q_4, _gate_q_5;
  xx_plus_yy_5070293664(4.769546974200094, 2.814367542970647) _gate_q_9, _gate_q_7;
}