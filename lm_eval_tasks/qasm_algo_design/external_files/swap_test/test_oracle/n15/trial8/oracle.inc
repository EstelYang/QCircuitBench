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
gate xx_minus_yy_5116678064(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.6571005465473743) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.501990526915668) _gate_q_0;
  ry(-1.501990526915668) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.6571005465473743) _gate_q_1;
}
gate cu1_5116682624(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.1202494891363037) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.1202494891363037) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.1202494891363037) _gate_q_1;
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
gate rxx_5116683488(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.732233450167737) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5116683008(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.2170466373536986, 3.4906930126768403, -3.4906930126768403) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate ryy_5116683728(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.404481168360917) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate ryy_5116683104(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.613483718886018) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5116683536(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.7314134981331897) _gate_q_0;
  u1(1.153504902751559) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4524682303445934, 0, -3.7314134981331897) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4524682303445934, 2.5779085953816305, 0) _gate_q_1;
}
gate cu1_5116682480(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.34576919776707055) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.34576919776707055) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.34576919776707055) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_4669147952(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.894993261512203) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5101317840(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.153923498633451) _gate_q_0;
  u1(-1.9397200127196523) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5898177244377871, 0, -2.153923498633451) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5898177244377871, 4.093643511353103, 0) _gate_q_1;
}
gate r_4965240272(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.1220659404330675, 0.6421711666005412, -0.6421711666005412) _gate_q_0;
}
gate cu3_4965099968(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.7929734286122763) _gate_q_0;
  u1(0.01730425474197106) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6276949748502891, 0, -2.7929734286122763) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6276949748502891, 2.775669173870305, 0) _gate_q_1;
}
gate rzx_5116464256(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.051421457982158) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5116464928(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.472161629554728) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.06900545659220605) _gate_q_1;
  ry(-0.06900545659220605) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.472161629554728) _gate_q_0;
}
gate cu3_5116462672(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.4988870637854594) _gate_q_0;
  u1(-1.142662759742703) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.1406049942572714, 0, -2.4988870637854594) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.1406049942572714, 3.6415498235281625, 0) _gate_q_1;
}
gate ryy_5116462192(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4829077830262976) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5116462576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.1125257106586393) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9411685476046314) _gate_q_1;
  ry(-1.9411685476046314) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.1125257106586393) _gate_q_0;
}
gate rxx_5116470496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.828456132487416) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  cy _gate_q_6, _gate_q_7;
  iswap _gate_q_0, _gate_q_13;
  xx_minus_yy_5116678064(3.003981053831336, 3.6571005465473743) _gate_q_1, _gate_q_9;
  iswap _gate_q_14, _gate_q_4;
  cu1_5116682624(6.2404989782726075) _gate_q_11, _gate_q_10;
  cy _gate_q_8, _gate_q_3;
  U(4.145117449666546, 1.644176373719539, 2.437888627671244) _gate_q_12;
  crz(1.7112240228750608) _gate_q_2, _gate_q_5;
  cy _gate_q_12, _gate_q_8;
  tdg _gate_q_3;
  sx _gate_q_2;
  csx _gate_q_4, _gate_q_13;
  sdg _gate_q_1;
  sx _gate_q_10;
  id _gate_q_9;
  sdg _gate_q_5;
  s _gate_q_6;
  rxx_5116683488(5.732233450167737) _gate_q_11, _gate_q_0;
  sx _gate_q_14;
  u2(1.8242549336590357, 1.008567345695596) _gate_q_7;
  u3(3.480067184156433, 2.141601343887996, 5.6295642119912275) _gate_q_2;
  z _gate_q_11;
  s _gate_q_14;
  sx _gate_q_6;
  crz(5.575208218171458) _gate_q_4, _gate_q_12;
  r_5116683008(3.2170466373536986, 5.061489339471737) _gate_q_1;
  cp(4.779643719628108) _gate_q_5, _gate_q_13;
  cx _gate_q_9, _gate_q_8;
  iswap _gate_q_3, _gate_q_10;
  u1(5.301180744348617) _gate_q_0;
  x _gate_q_7;
  cs _gate_q_8, _gate_q_2;
  t _gate_q_6;
  cz _gate_q_10, _gate_q_3;
  ryy_5116683728(3.404481168360917) _gate_q_9, _gate_q_1;
  ecr _gate_q_14, _gate_q_5;
  s _gate_q_7;
  ch _gate_q_12, _gate_q_13;
  ryy_5116683104(5.613483718886018) _gate_q_0, _gate_q_11;
  sdg _gate_q_4;
  cu3_5116683536(0.9049364606891868, 2.5779085953816305, 4.884918400884748) _gate_q_10, _gate_q_7;
  crz(3.487034744441318) _gate_q_4, _gate_q_3;
  ry(2.170277605290911) _gate_q_0;
  cu1_5116682480(0.6915383955341411) _gate_q_6, _gate_q_13;
  cz _gate_q_12, _gate_q_1;
  h _gate_q_2;
  h _gate_q_5;
  csdg _gate_q_11, _gate_q_9;
  cs _gate_q_8, _gate_q_14;
  h _gate_q_12;
  cs _gate_q_11, _gate_q_0;
  cx _gate_q_3, _gate_q_5;
  tdg _gate_q_10;
  rzx_4669147952(4.894993261512203) _gate_q_8, _gate_q_7;
  z _gate_q_2;
  sxdg _gate_q_9;
  U(4.949842532667985, 0.14549977881917683, 4.93790579769421) _gate_q_1;
  p(2.1587778671603495) _gate_q_14;
  t _gate_q_6;
  U(1.6631016818495856, 4.507436350894311, 5.6231611811068) _gate_q_13;
  y _gate_q_4;
  cu3_5101317840(1.1796354488755743, 4.093643511353103, 0.21420348591379856) _gate_q_0, _gate_q_10;
  tdg _gate_q_6;
  sx _gate_q_4;
  sxdg _gate_q_8;
  cp(5.491399070835512) _gate_q_9, _gate_q_12;
  ecr _gate_q_13, _gate_q_3;
  swap _gate_q_7, _gate_q_1;
  cx _gate_q_11, _gate_q_14;
  u3(4.673544570785119, 6.124568328559813, 0.09360348419573188) _gate_q_2;
  r_4965240272(5.1220659404330675, 2.2129674933954377) _gate_q_5;
  cu3_4965099968(1.2553899497005783, 2.775669173870305, 2.810277683354247) _gate_q_1, _gate_q_9;
  u3(6.212450244587207, 2.913915692135723, 1.6177885660558533) _gate_q_10;
  crz(5.236382308196006) _gate_q_2, _gate_q_4;
  u2(4.5640569549632195, 0.07142833225249966) _gate_q_3;
  swap _gate_q_8, _gate_q_0;
  tdg _gate_q_13;
  rzx_5116464256(6.051421457982158) _gate_q_14, _gate_q_7;
  sxdg _gate_q_6;
  cy _gate_q_12, _gate_q_5;
  t _gate_q_11;
  ch _gate_q_0, _gate_q_6;
  dcx _gate_q_9, _gate_q_2;
  xx_plus_yy_5116464928(0.1380109131844121, 3.472161629554728) _gate_q_5, _gate_q_4;
  sxdg _gate_q_12;
  sx _gate_q_14;
  sxdg _gate_q_3;
  cu3_5116462672(6.281209988514543, 3.6415498235281625, 1.3562243040427562) _gate_q_1, _gate_q_11;
  u3(0.383155823327956, 0.05664775755832607, 0.8651007774344971) _gate_q_13;
  ryy_5116462192(2.4829077830262976) _gate_q_7, _gate_q_8;
  tdg _gate_q_10;
  rx(3.2126599811249874) _gate_q_10;
  tdg _gate_q_6;
  xx_plus_yy_5116462576(3.882337095209263, 2.1125257106586393) _gate_q_1, _gate_q_0;
  id _gate_q_3;
  u3(3.6372240067193555, 5.629273876872017, 3.7816787778942973) _gate_q_12;
  rxx_5116470496(4.828456132487416) _gate_q_14, _gate_q_11;
  rx(1.174279246057983) _gate_q_4;
  y _gate_q_7;
  z _gate_q_5;
  sdg _gate_q_9;
  u1(3.7915774649801506) _gate_q_8;
  swap _gate_q_13, _gate_q_2;
}
gate cu3_5116477168(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.337397267581293) _gate_q_0;
  u1(1.158524597838579) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.4981387732083298, 0, -3.337397267581293) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.4981387732083298, 2.178872669742714, 0) _gate_q_1;
}
gate rxx_5116477408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.745480928416945) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5116476448(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.815512724102879) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5116476736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.08932122349695967) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.172544212188207) _gate_q_0;
  ry(-1.172544212188207) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.08932122349695967) _gate_q_1;
}
gate rzx_5116476880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8627225296069128) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5116462624(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.9123736697209) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5116464160(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.208262519716296) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5116471840(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.195310564510758, 0.018781680171323423, -0.018781680171323423) _gate_q_0;
}
gate ryy_5116473232(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2804329471618046) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5116473280(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.7517641767862566) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.09650896638050224) _gate_q_1;
  ry(-0.09650896638050224) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.7517641767862566) _gate_q_0;
}
gate cu3_5116473088(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.0752356954640145) _gate_q_0;
  u1(-2.3559005695678295) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.49998843514986424, 0, -3.0752356954640145) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.49998843514986424, 5.431136265031844, 0) _gate_q_1;
}
gate rzx_5116463296(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.685403153570191) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5116463200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.231616709206208) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.383626254561819) _gate_q_0;
  ry(-2.383626254561819) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.231616709206208) _gate_q_1;
}
gate rxx_5116461184(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8135447306655965) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5116462960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4294839035386905) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5116463440(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.07906946395513677) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.93561002553024) _gate_q_1;
  ry(-2.93561002553024) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.07906946395513677) _gate_q_0;
}
gate xx_minus_yy_5116464016(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.391841173592891) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.054199063835063) _gate_q_0;
  ry(-2.054199063835063) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.391841173592891) _gate_q_1;
}
gate ryy_5116463680(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8631751319822587) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5116463248(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.3996253837846296, -0.778919803182197, 0.778919803182197) _gate_q_0;
}
gate ryy_5116463152(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.988538141887981) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5116464352(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.3268335420780475, 4.285895933503573, -4.285895933503573) _gate_q_0;
}
gate cu3_5107931984(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.146706795048786) _gate_q_0;
  u1(1.5063589466980882) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.658824940036505, 0, -2.146706795048786) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.658824940036505, 0.6403478483506978, 0) _gate_q_1;
}
gate ryy_5107936160(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.52653156834727) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5107933376(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.890417053867412) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0403050201206048) _gate_q_0;
  ry(-2.0403050201206048) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.890417053867412) _gate_q_1;
}
gate ryy_5107927040(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1663415427913257) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5107931600(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.31730343291496566, 0.6940167421149757, -0.6940167421149757) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  ch _gate_q_14, _gate_q_12;
  cu(0.22895506068075724, 2.577785573055318, 1.7239067643385981, 4.325256205386895) _gate_q_10, _gate_q_11;
  h _gate_q_1;
  cu3_5116477168(4.9962775464166596, 2.178872669742714, 4.495921865419872) _gate_q_9, _gate_q_4;
  t _gate_q_6;
  swap _gate_q_5, _gate_q_2;
  rxx_5116477408(4.745480928416945) _gate_q_0, _gate_q_7;
  cs _gate_q_13, _gate_q_8;
  tdg _gate_q_3;
  crx(4.888840843314519) _gate_q_10, _gate_q_5;
  u1(2.27418159013845) _gate_q_2;
  U(6.036624425794874, 3.952762028365699, 1.6879556915138876) _gate_q_13;
  ecr _gate_q_9, _gate_q_4;
  p(1.5239114896996206) _gate_q_6;
  ryy_5116476448(2.815512724102879) _gate_q_7, _gate_q_1;
  s _gate_q_0;
  ecr _gate_q_3, _gate_q_8;
  xx_minus_yy_5116476736(2.345088424376414, 0.08932122349695967) _gate_q_12, _gate_q_11;
  rx(0.5134455457487562) _gate_q_14;
  cu(4.700370677564342, 4.593139539913231, 2.5272534457444085, 2.6829519180951915) _gate_q_14, _gate_q_6;
  id _gate_q_11;
  z _gate_q_2;
  cz _gate_q_7, _gate_q_5;
  u1(3.9504447450921782) _gate_q_12;
  rzx_5116476880(1.8627225296069128) _gate_q_9, _gate_q_10;
  x _gate_q_0;
  id _gate_q_1;
  h _gate_q_3;
  rzz_5116462624(5.9123736697209) _gate_q_13, _gate_q_4;
  u2(1.4010724979629001, 2.1652085875851563) _gate_q_8;
  rzz_5116464160(5.208262519716296) _gate_q_6, _gate_q_1;
  tdg _gate_q_14;
  u2(2.914266153954105, 0.5367421503179863) _gate_q_10;
  r_5116471840(1.195310564510758, 1.58957800696622) _gate_q_8;
  csdg _gate_q_13, _gate_q_3;
  rz(1.3838590430917144) _gate_q_9;
  ryy_5116473232(1.2804329471618046) _gate_q_11, _gate_q_2;
  csdg _gate_q_12, _gate_q_5;
  xx_plus_yy_5116473280(0.19301793276100448, 1.7517641767862566) _gate_q_7, _gate_q_0;
  rx(4.606300420226305) _gate_q_4;
  cu3_5116473088(0.9999768702997285, 5.431136265031844, 0.7193351258961852) _gate_q_1, _gate_q_2;
  rzx_5116463296(4.685403153570191) _gate_q_9, _gate_q_11;
  xx_minus_yy_5116463200(4.767252509123638, 3.231616709206208) _gate_q_0, _gate_q_7;
  rxx_5116461184(0.8135447306655965) _gate_q_12, _gate_q_6;
  t _gate_q_13;
  rxx_5116462960(0.4294839035386905) _gate_q_8, _gate_q_5;
  dcx _gate_q_4, _gate_q_3;
  cu(3.7605372355170417, 5.809867049371729, 3.9719311031700433, 1.828778451908404) _gate_q_14, _gate_q_10;
  id _gate_q_2;
  cy _gate_q_6, _gate_q_0;
  tdg _gate_q_7;
  sxdg _gate_q_5;
  h _gate_q_10;
  xx_plus_yy_5116463440(5.87122005106048, 0.07906946395513677) _gate_q_11, _gate_q_9;
  xx_minus_yy_5116464016(4.108398127670126, 5.391841173592891) _gate_q_14, _gate_q_1;
  crx(2.7822392202754758) _gate_q_4, _gate_q_8;
  iswap _gate_q_3, _gate_q_13;
  u1(5.080634192256769) _gate_q_12;
  ryy_5116463680(1.8631751319822587) _gate_q_6, _gate_q_12;
  U(1.6091866238594061, 0.36033201843741575, 1.0800205458797316) _gate_q_5;
  cp(2.267529100995339) _gate_q_8, _gate_q_2;
  r_5116463248(0.3996253837846296, 0.7918765236126996) _gate_q_0;
  ryy_5116463152(5.988538141887981) _gate_q_13, _gate_q_10;
  ch _gate_q_7, _gate_q_9;
  ecr _gate_q_14, _gate_q_11;
  sxdg _gate_q_1;
  r_5116464352(1.3268335420780475, 5.85669226029847) _gate_q_4;
  u1(2.3470686665685174) _gate_q_3;
  cry(4.916211973637195) _gate_q_11, _gate_q_0;
  ry(2.6426020091406497) _gate_q_4;
  U(2.898843872829789, 0.893862247867718, 6.068106455233143) _gate_q_10;
  U(2.222521010034591, 2.0282573107790522, 3.084061725453087) _gate_q_8;
  cy _gate_q_7, _gate_q_6;
  rz(1.4476581648169071) _gate_q_9;
  U(4.818536291145329, 2.3376821494897873, 0.09270067154757218) _gate_q_3;
  cu3_5107931984(5.31764988007301, 0.6403478483506978, 3.6530657417468744) _gate_q_12, _gate_q_13;
  crx(5.7363286571931305) _gate_q_2, _gate_q_5;
  sdg _gate_q_1;
  u1(2.200397712406915) _gate_q_14;
  ryy_5107936160(4.52653156834727) _gate_q_8, _gate_q_2;
  csx _gate_q_0, _gate_q_7;
  crx(3.5818187604178284) _gate_q_9, _gate_q_5;
  xx_minus_yy_5107933376(4.0806100402412095, 5.890417053867412) _gate_q_13, _gate_q_1;
  ryy_5107927040(3.1663415427913257) _gate_q_10, _gate_q_14;
  cu(3.117584352511021, 3.6919540789069027, 2.738164081447277, 2.8970451549384517) _gate_q_4, _gate_q_11;
  cy _gate_q_6, _gate_q_3;
  sdg _gate_q_12;
  u3(5.771916371090021, 0.576770780282342, 4.071513760190568) _gate_q_3;
  ecr _gate_q_6, _gate_q_12;
  h _gate_q_13;
  t _gate_q_9;
  t _gate_q_5;
  t _gate_q_2;
  U(4.720260720422232, 6.256147415592766, 2.4525764961872683) _gate_q_10;
  r_5107931600(0.31730343291496566, 2.264813068909872) _gate_q_4;
  rz(4.077284856355946) _gate_q_8;
  cz _gate_q_1, _gate_q_0;
  u2(2.870201685609815, 2.0170984714732643) _gate_q_7;
  crz(5.167563544366572) _gate_q_14, _gate_q_11;
}