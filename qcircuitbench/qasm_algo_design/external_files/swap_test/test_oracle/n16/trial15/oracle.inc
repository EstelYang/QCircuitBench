gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rxx_5074288272(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.195176109099644) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5074278144(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.572162907632944, -0.10173663326829696, 0.10173663326829696) _gate_q_0;
}
gate rzx_5074274064(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.181886645200673) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5074284624(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.840961547428666) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5074287024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4170221216783223) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5074283520(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.7996961590108156) _gate_q_0;
  u1(-0.9028939473790683) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7058834669303702, 0, -1.7996961590108156) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7058834669303702, 2.702590106389884, 0) _gate_q_1;
}
gate rxx_5074279344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8138245692693116) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5074288128(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.470513422694037) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.717724196341177) _gate_q_0;
  ry(-2.717724196341177) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.470513422694037) _gate_q_1;
}
gate rzx_5074286736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.491684783572058) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5074285056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.835353208885385) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5710758578480488) _gate_q_0;
  ry(-1.5710758578480488) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.835353208885385) _gate_q_1;
}
gate cu3_5074286304(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.8917269016870986) _gate_q_0;
  u1(-1.3529344232802045) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.966630214696979, 0, -1.8917269016870986) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.966630214696979, 3.244661324967303, 0) _gate_q_1;
}
gate rzx_5074280736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2844610180853384) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5074273776(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.126498411016287) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5074283712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.27927031480814374) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5074287360(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0388539035152173) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate rxx_5074282656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.501027676732383) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5074288320(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6794160465675254) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5074286064(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3730868638367038) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5074282224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.565774866392685) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5074273488(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.265119214732827) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5074277952(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.976076975835226) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5074283328(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.3225833014598614) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8846350430371732) _gate_q_1;
  ry(-1.8846350430371732) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.3225833014598614) _gate_q_0;
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
gate rzx_5074286688(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0560462245352709) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5074287072(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6588160222542183) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074285680(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.7637673564074436, 2.1384156788254267, -2.1384156788254267) _gate_q_0;
}
gate r_5074288416(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.7287690703273295, 3.9530697411696494, -3.9530697411696494) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  p(0.4056466855181377) _gate_q_4;
  rx(0.49192487816774005) _gate_q_10;
  rz(5.371941691825106) _gate_q_6;
  crz(3.758603525677493) _gate_q_13, _gate_q_7;
  p(5.4510290855870975) _gate_q_9;
  csdg _gate_q_2, _gate_q_3;
  cs _gate_q_12, _gate_q_15;
  crx(5.600553630294775) _gate_q_14, _gate_q_5;
  rxx_5074288272(6.195176109099644) _gate_q_0, _gate_q_8;
  dcx _gate_q_1, _gate_q_11;
  r_5074278144(3.572162907632944, 1.4690596935265996) _gate_q_12;
  rzx_5074274064(6.181886645200673) _gate_q_6, _gate_q_11;
  rzx_5074284624(1.840961547428666) _gate_q_3, _gate_q_10;
  cs _gate_q_2, _gate_q_7;
  rzx_5074287024(3.4170221216783223) _gate_q_13, _gate_q_8;
  u1(3.0778990252764276) _gate_q_1;
  x _gate_q_0;
  cu3_5074283520(3.4117669338607404, 2.702590106389884, 0.8968022116317472) _gate_q_15, _gate_q_9;
  rxx_5074279344(1.8138245692693116) _gate_q_5, _gate_q_4;
  id _gate_q_14;
  xx_minus_yy_5074288128(5.435448392682354, 4.470513422694037) _gate_q_12, _gate_q_8;
  s _gate_q_6;
  rx(4.723484584281707) _gate_q_1;
  rzx_5074286736(5.491684783572058) _gate_q_10, _gate_q_13;
  u2(5.133785866794526, 4.152090365336659) _gate_q_15;
  crz(4.106007026770202) _gate_q_11, _gate_q_9;
  cry(4.693439189450884) _gate_q_0, _gate_q_3;
  xx_minus_yy_5074285056(3.1421517156960976, 2.835353208885385) _gate_q_14, _gate_q_5;
  z _gate_q_7;
  cz _gate_q_4, _gate_q_2;
  y _gate_q_9;
  u2(3.089565172708842, 5.856666911411077) _gate_q_0;
  cs _gate_q_13, _gate_q_14;
  cu3_5074286304(5.933260429393958, 3.244661324967303, 0.5387924784068941) _gate_q_15, _gate_q_8;
  rzx_5074280736(2.2844610180853384) _gate_q_3, _gate_q_10;
  rzx_5074273776(4.126498411016287) _gate_q_1, _gate_q_5;
  sdg _gate_q_4;
  rz(5.411191486951331) _gate_q_2;
  rzx_5074283712(0.27927031480814374) _gate_q_7, _gate_q_12;
  ch _gate_q_11, _gate_q_6;
  u3(1.6516285879984536, 5.532057878299712, 5.167703218101949) _gate_q_5;
  ryy_5074287360(2.0388539035152173) _gate_q_12, _gate_q_1;
  cz _gate_q_10, _gate_q_9;
  sxdg _gate_q_7;
  dcx _gate_q_11, _gate_q_14;
  crz(2.716032490004246) _gate_q_3, _gate_q_0;
  rx(3.57599857476297) _gate_q_13;
  csx _gate_q_6, _gate_q_15;
  id _gate_q_4;
  ry(0.3566295139103124) _gate_q_8;
  sdg _gate_q_2;
  U(0.7016910756897399, 2.368808499375803, 5.5522851133024025) _gate_q_4;
  swap _gate_q_5, _gate_q_15;
  rxx_5074282656(4.501027676732383) _gate_q_7, _gate_q_6;
  rzx_5074288320(1.6794160465675254) _gate_q_11, _gate_q_2;
  ryy_5074286064(2.3730868638367038) _gate_q_9, _gate_q_14;
  rxx_5074282224(2.565774866392685) _gate_q_10, _gate_q_13;
  ry(2.239821254453994) _gate_q_8;
  csdg _gate_q_1, _gate_q_12;
  cp(3.932680755833578) _gate_q_0, _gate_q_3;
  sxdg _gate_q_15;
  cp(2.7431131185987465) _gate_q_1, _gate_q_6;
  u3(4.694639920285662, 4.1820789603472175, 0.6067953605862285) _gate_q_4;
  sx _gate_q_8;
  crz(4.240649264903178) _gate_q_0, _gate_q_11;
  z _gate_q_7;
  rzx_5074273488(0.265119214732827) _gate_q_9, _gate_q_3;
  id _gate_q_14;
  U(2.1999994392044298, 3.2917384557266063, 1.879675157358655) _gate_q_2;
  ryy_5074277952(2.976076975835226) _gate_q_13, _gate_q_12;
  ch _gate_q_10, _gate_q_5;
  sxdg _gate_q_2;
  xx_plus_yy_5074283328(3.7692700860743464, 1.3225833014598614) _gate_q_1, _gate_q_4;
  ch _gate_q_9, _gate_q_13;
  csdg _gate_q_11, _gate_q_0;
  crx(2.239027725730459) _gate_q_10, _gate_q_7;
  u1(2.5076280767399965) _gate_q_8;
  x _gate_q_6;
  ecr _gate_q_3, _gate_q_15;
  ecr _gate_q_5, _gate_q_14;
  sdg _gate_q_12;
  rzx_5074286688(1.0560462245352709) _gate_q_4, _gate_q_2;
  rxx_5074287072(1.6588160222542183) _gate_q_1, _gate_q_12;
  u3(3.4095057651069007, 3.0226963254362835, 3.287132901556453) _gate_q_14;
  ch _gate_q_10, _gate_q_7;
  tdg _gate_q_6;
  h _gate_q_11;
  cp(0.8680393796135437) _gate_q_15, _gate_q_3;
  dcx _gate_q_9, _gate_q_13;
  cz _gate_q_0, _gate_q_5;
  y _gate_q_8;
  swap _gate_q_6, _gate_q_4;
  r_5074285680(1.7637673564074436, 3.7092120056203233) _gate_q_13;
  cy _gate_q_1, _gate_q_12;
  cx _gate_q_0, _gate_q_2;
  swap _gate_q_5, _gate_q_11;
  U(1.2187811029467812, 3.770809746480149, 5.929742954586537) _gate_q_15;
  cu(1.2853746599781481, 3.318396456449653, 1.2499429425510515, 1.0235856058505288) _gate_q_8, _gate_q_7;
  s _gate_q_14;
  r_5074288416(4.7287690703273295, 5.523866067964546) _gate_q_9;
  sx _gate_q_10;
  u1(4.183463028728118) _gate_q_3;
}
gate cu3_5074280448(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.9220428118178194) _gate_q_0;
  u1(0.09259049765673599) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.4032194803797786, 0, -3.9220428118178194) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.4032194803797786, 3.8294523141610832, 0) _gate_q_1;
}
gate xx_minus_yy_5074281888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.5236969133257636) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.059478733669327) _gate_q_0;
  ry(-3.059478733669327) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.5236969133257636) _gate_q_1;
}
gate ryy_5074279680(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.22363018242417737) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5074284096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.939187988723122) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8682894451620664) _gate_q_1;
  ry(-1.8682894451620664) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.939187988723122) _gate_q_0;
}
gate r_5074273296(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.047128441313347, -0.46079189430217093, 0.46079189430217093) _gate_q_0;
}
gate xx_minus_yy_5074284240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.128054009421315) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.2753312188569317) _gate_q_0;
  ry(-2.2753312188569317) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.128054009421315) _gate_q_1;
}
gate r_5074280064(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.904057337284987, -0.1405116966602027, 0.1405116966602027) _gate_q_0;
}
gate xx_minus_yy_5074287456(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.3762050397494019) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.1019828346142786) _gate_q_0;
  ry(-2.1019828346142786) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.3762050397494019) _gate_q_1;
}
gate xx_minus_yy_5074278912(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.115732399472822) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3249151804328) _gate_q_0;
  ry(-0.3249151804328) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.115732399472822) _gate_q_1;
}
gate ryy_5074280256(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5969942150795853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5074280784(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.3023190109600344) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5074276800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.7379148472312516) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6864748108513873) _gate_q_0;
  ry(-0.6864748108513873) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.7379148472312516) _gate_q_1;
}
gate ryy_5074278528(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.432913229783655) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5074277760(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.949848943180747) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5074283808(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.019970795846449497) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5074279488(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.3978522997729064) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.3978522997729064) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.3978522997729064) _gate_q_1;
}
gate rxx_5074275888(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.27621230677898) _gate_q_1;
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
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  csdg _gate_q_6, _gate_q_15;
  cu(4.716532014242806, 1.4831119294099335, 4.755828908397505, 0.013503303353014714) _gate_q_5, _gate_q_12;
  t _gate_q_2;
  rz(3.0157783011954553) _gate_q_11;
  cs _gate_q_8, _gate_q_14;
  crx(1.9235242239745287) _gate_q_1, _gate_q_9;
  cz _gate_q_13, _gate_q_4;
  cu3_5074280448(4.806438960759557, 3.8294523141610832, 4.014633309474555) _gate_q_7, _gate_q_3;
  y _gate_q_0;
  u3(1.4533067302716072, 0.488822610725046, 5.116819362282357) _gate_q_10;
  xx_minus_yy_5074281888(6.118957467338654, 3.5236969133257636) _gate_q_4, _gate_q_14;
  cry(3.309991084563343) _gate_q_7, _gate_q_0;
  ryy_5074279680(0.22363018242417737) _gate_q_12, _gate_q_8;
  h _gate_q_9;
  sxdg _gate_q_1;
  tdg _gate_q_6;
  ry(3.314551622955582) _gate_q_3;
  u2(6.2446631948773055, 5.560917151799389) _gate_q_13;
  cs _gate_q_5, _gate_q_15;
  cs _gate_q_2, _gate_q_11;
  z _gate_q_10;
  y _gate_q_2;
  csdg _gate_q_7, _gate_q_4;
  xx_plus_yy_5074284096(3.736578890324133, 2.939187988723122) _gate_q_9, _gate_q_10;
  z _gate_q_0;
  cy _gate_q_1, _gate_q_12;
  swap _gate_q_14, _gate_q_5;
  sx _gate_q_11;
  z _gate_q_15;
  csdg _gate_q_8, _gate_q_3;
  r_5074273296(6.047128441313347, 1.1100044324927256) _gate_q_6;
  u3(2.180425650320495, 2.9476582693830946, 2.994237769525901) _gate_q_13;
  cs _gate_q_13, _gate_q_1;
  swap _gate_q_14, _gate_q_11;
  cs _gate_q_10, _gate_q_7;
  dcx _gate_q_15, _gate_q_3;
  xx_minus_yy_5074284240(4.550662437713863, 6.128054009421315) _gate_q_0, _gate_q_9;
  tdg _gate_q_8;
  cz _gate_q_6, _gate_q_5;
  cy _gate_q_12, _gate_q_2;
  p(0.07739797509601842) _gate_q_4;
  s _gate_q_11;
  t _gate_q_1;
  r_5074280064(3.904057337284987, 1.4302846301346939) _gate_q_7;
  u2(2.2198409986033174, 1.0764220564978597) _gate_q_9;
  ry(1.7938317451441637) _gate_q_6;
  cp(5.986561654587985) _gate_q_15, _gate_q_12;
  xx_minus_yy_5074287456(4.203965669228557, 0.3762050397494019) _gate_q_2, _gate_q_10;
  xx_minus_yy_5074278912(0.6498303608656, 4.115732399472822) _gate_q_13, _gate_q_14;
  u1(3.7956453848799545) _gate_q_0;
  p(2.23379445794829) _gate_q_4;
  h _gate_q_3;
  u2(5.623441911991734, 1.2632749908879735) _gate_q_5;
  h _gate_q_8;
  ryy_5074280256(3.5969942150795853) _gate_q_0, _gate_q_8;
  crx(0.2921741058253949) _gate_q_2, _gate_q_14;
  rzz_5074280784(3.3023190109600344) _gate_q_5, _gate_q_10;
  ch _gate_q_3, _gate_q_12;
  xx_minus_yy_5074276800(1.3729496217027746, 0.7379148472312516) _gate_q_15, _gate_q_6;
  ryy_5074278528(5.432913229783655) _gate_q_4, _gate_q_13;
  tdg _gate_q_11;
  z _gate_q_1;
  rzz_5074277760(4.949848943180747) _gate_q_7, _gate_q_9;
  u1(4.689567553937817) _gate_q_2;
  rzz_5074283808(0.019970795846449497) _gate_q_0, _gate_q_6;
  cu1_5074279488(0.7957045995458129) _gate_q_14, _gate_q_10;
  swap _gate_q_3, _gate_q_1;
  cz _gate_q_15, _gate_q_9;
  cy _gate_q_11, _gate_q_5;
  rxx_5074275888(4.27621230677898) _gate_q_13, _gate_q_7;
  tdg _gate_q_12;
  p(3.0418740735442196) _gate_q_4;
  x _gate_q_8;
  h _gate_q_10;
  iswap _gate_q_4, _gate_q_8;
  dcx _gate_q_1, _gate_q_5;
  ecr _gate_q_14, _gate_q_3;
  cy _gate_q_7, _gate_q_12;
  cp(1.946298874770797) _gate_q_2, _gate_q_13;
  iswap _gate_q_11, _gate_q_15;
  csdg _gate_q_9, _gate_q_0;
  tdg _gate_q_6;
  ch _gate_q_10, _gate_q_5;
  cp(5.795534334092032) _gate_q_7, _gate_q_11;
  x _gate_q_3;
  dcx _gate_q_9, _gate_q_0;
  swap _gate_q_8, _gate_q_15;
  iswap _gate_q_2, _gate_q_14;
  id _gate_q_6;
  csx _gate_q_1, _gate_q_12;
  cp(4.010581424938006) _gate_q_4, _gate_q_13;
  u3(1.2644553620433816, 3.9314972440199987, 4.582319987933469) _gate_q_4;
  cx _gate_q_13, _gate_q_2;
  t _gate_q_14;
  sxdg _gate_q_10;
  ch _gate_q_11, _gate_q_6;
  csx _gate_q_5, _gate_q_9;
  crx(2.0530164862001303) _gate_q_3, _gate_q_8;
  z _gate_q_7;
  cry(3.1701752006224018) _gate_q_1, _gate_q_15;
  iswap _gate_q_12, _gate_q_0;
}