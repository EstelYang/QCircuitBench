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
gate cu3_5105155632(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.230857867493219) _gate_q_0;
  u1(0.6847975683988923) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.2558734237300131, 0, -2.230857867493219) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.2558734237300131, 1.5460602990943264, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5105142576(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.831850666534965) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105148576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.430289622923388) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4143567720786117) _gate_q_0;
  ry(-1.4143567720786117) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.430289622923388) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5105145840(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3450148555491417) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate xx_plus_yy_5105143680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.11241170736106) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5804262839459798) _gate_q_1;
  ry(-0.5804262839459798) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.11241170736106) _gate_q_0;
}
gate ryy_5105145936(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7670657247787123) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5105145600(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.901432234423097) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5105155872(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.894653197229086) _gate_q_0;
  u1(0.252174975489051) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9342615251778927, 0, -3.894653197229086) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9342615251778927, 3.642478221740035, 0) _gate_q_1;
}
gate cu1_5105140656(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3403092491650204) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3403092491650204) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3403092491650204) _gate_q_1;
}
gate ryy_5105146176(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4004569022822833) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  csx _gate_q_7, _gate_q_5;
  h _gate_q_0;
  p(5.541805335743672) _gate_q_2;
  U(4.406097671342311, 6.149905199201532, 4.489505267004188) _gate_q_1;
  s _gate_q_8;
  ch _gate_q_6, _gate_q_4;
  h _gate_q_3;
  cu3_5105155632(0.5117468474600262, 1.5460602990943264, 2.915655435892111) _gate_q_7, _gate_q_8;
  id _gate_q_5;
  cry(2.115176566437385) _gate_q_4, _gate_q_3;
  cy _gate_q_1, _gate_q_0;
  cry(4.251344083493489) _gate_q_2, _gate_q_6;
  dcx _gate_q_6, _gate_q_2;
  crz(3.020875539535225) _gate_q_3, _gate_q_5;
  y _gate_q_0;
  ryy_5105142576(5.831850666534965) _gate_q_8, _gate_q_4;
  U(4.688470133755722, 5.536612901859779, 1.564399623503661) _gate_q_1;
  sdg _gate_q_7;
  rx(3.87774608995656) _gate_q_0;
  p(4.259109829043811) _gate_q_3;
  xx_minus_yy_5105148576(2.8287135441572233, 3.430289622923388) _gate_q_7, _gate_q_8;
  tdg _gate_q_4;
  cs _gate_q_2, _gate_q_1;
  cx _gate_q_6, _gate_q_5;
  ry(2.408992660750297) _gate_q_8;
  rzx_5105145840(3.3450148555491417) _gate_q_2, _gate_q_6;
  ecr _gate_q_5, _gate_q_7;
  U(3.7650813938859997, 0.20864390024641746, 3.3747149716926477) _gate_q_1;
  cu(4.725031229174508, 5.8316742031382205, 4.149711147881464, 3.4550196806918323) _gate_q_4, _gate_q_3;
  y _gate_q_0;
  xx_plus_yy_5105143680(1.1608525678919597, 5.11241170736106) _gate_q_0, _gate_q_3;
  cry(2.482930140509212) _gate_q_1, _gate_q_2;
  ryy_5105145936(3.7670657247787123) _gate_q_8, _gate_q_4;
  rzz_5105145600(5.901432234423097) _gate_q_7, _gate_q_5;
  u3(5.716155601930853, 3.3681665762327673, 3.6346795935907803) _gate_q_6;
  t _gate_q_1;
  cu3_5105155872(1.8685230503557855, 3.642478221740035, 4.146828172718137) _gate_q_8, _gate_q_4;
  cu1_5105140656(2.6806184983300407) _gate_q_0, _gate_q_6;
  ryy_5105146176(2.4004569022822833) _gate_q_7, _gate_q_2;
  z _gate_q_3;
  y _gate_q_5;
  cu(3.4060887078217577, 2.953912144174981, 5.700722758532588, 4.425858249000653) _gate_q_7, _gate_q_3;
  cu(1.7583037692372228, 2.429430840556984, 4.253906568086692, 1.9188337822139125) _gate_q_5, _gate_q_0;
  crx(4.26850519158354) _gate_q_4, _gate_q_2;
  cz _gate_q_1, _gate_q_6;
  u3(3.8607131486516035, 2.3838921079143787, 0.09560975834980971) _gate_q_8;
  t _gate_q_7;
  sdg _gate_q_3;
  cu(4.153329965661091, 2.607814768487788, 6.105044184843028, 1.5021187398278721) _gate_q_6, _gate_q_1;
  cs _gate_q_4, _gate_q_8;
  h _gate_q_5;
  iswap _gate_q_2, _gate_q_0;
}
gate rzz_5105146080(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.284645055367124) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5105144448(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.8693921845015302) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.8693921845015302) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.8693921845015302) _gate_q_1;
}
gate rzz_5105144832(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.7354992556543494) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105143104(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.950991815131143) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5105141040(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3384122877414615) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105142528(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.2974964759242835) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105147136(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.045484247359785) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5105151600(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3400840959226887) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3400840959226887) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3400840959226887) _gate_q_1;
}
gate rzx_5105151264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.064330284752736) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5105154576(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.1781765100045147) _gate_q_0;
  u1(1.6367076228376154) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2294251838914647, 0, -2.1781765100045147) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2294251838914647, 0.5414688871668992, 0) _gate_q_1;
}
gate rxx_5105155392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.229994267649581) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  ecr _gate_q_3, _gate_q_5;
  swap _gate_q_0, _gate_q_4;
  cz _gate_q_6, _gate_q_8;
  rzz_5105146080(4.284645055367124) _gate_q_2, _gate_q_1;
  ry(2.3369505118080576) _gate_q_7;
  cu(4.166526945179098, 5.999469036612129, 4.631913378566502, 2.4115172292190192) _gate_q_2, _gate_q_8;
  U(1.5135703772898221, 3.823493115362839, 4.569745939762188) _gate_q_4;
  x _gate_q_0;
  rz(3.3337852627831572) _gate_q_7;
  cu1_5105144448(3.7387843690030604) _gate_q_5, _gate_q_1;
  cu(4.8933913570282215, 5.094457082747769, 3.9630508020771376, 0.16890805404462336) _gate_q_3, _gate_q_6;
  cu(2.0898807984515906, 4.246437368585312, 2.9149303232916033, 4.962102964075624) _gate_q_4, _gate_q_8;
  rzz_5105144832(1.7354992556543494) _gate_q_0, _gate_q_7;
  x _gate_q_5;
  rzz_5105143104(5.950991815131143) _gate_q_2, _gate_q_6;
  ryy_5105141040(1.3384122877414615) _gate_q_1, _gate_q_3;
  rz(5.220555110701739) _gate_q_3;
  u1(0.7058540904043916) _gate_q_8;
  ryy_5105142528(0.2974964759242835) _gate_q_7, _gate_q_0;
  ch _gate_q_2, _gate_q_4;
  iswap _gate_q_6, _gate_q_5;
  tdg _gate_q_1;
  ecr _gate_q_5, _gate_q_3;
  ryy_5105147136(3.045484247359785) _gate_q_7, _gate_q_6;
  cu1_5105151600(2.6801681918453775) _gate_q_0, _gate_q_4;
  cz _gate_q_2, _gate_q_8;
  id _gate_q_1;
  t _gate_q_8;
  cz _gate_q_3, _gate_q_4;
  rzx_5105151264(3.064330284752736) _gate_q_5, _gate_q_1;
  h _gate_q_2;
  iswap _gate_q_0, _gate_q_6;
  id _gate_q_7;
  cu3_5105154576(4.458850367782929, 0.5414688871668992, 3.81488413284213) _gate_q_8, _gate_q_3;
  rxx_5105155392(5.229994267649581) _gate_q_7, _gate_q_5;
  sdg _gate_q_1;
  t _gate_q_2;
  t _gate_q_6;
  cp(4.4286956231458205) _gate_q_0, _gate_q_4;
  tdg _gate_q_0;
  s _gate_q_2;
  u2(6.075710720926384, 4.391691657172148) _gate_q_6;
  cu(2.9485138810320852, 0.024624700514562413, 6.245534062826025, 4.035800632595127) _gate_q_3, _gate_q_5;
  ry(5.873847165002235) _gate_q_8;
  u3(5.5399654498247, 4.828718010050372, 0.30964989635658124) _gate_q_4;
  cry(0.4381608974307779) _gate_q_7, _gate_q_1;
  tdg _gate_q_7;
  id _gate_q_3;
  u2(2.0405690865664683, 5.994930587468949) _gate_q_6;
  sxdg _gate_q_0;
  U(4.636216687782702, 2.2452488066495384, 3.1195427878093924) _gate_q_5;
  sx _gate_q_8;
  dcx _gate_q_4, _gate_q_2;
  y _gate_q_1;
}