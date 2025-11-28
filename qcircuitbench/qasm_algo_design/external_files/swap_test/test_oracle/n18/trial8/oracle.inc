gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
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
gate rzz_5106396928(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.4671288109899576) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5106392992(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.0944404487981418) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5106386176(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.1608375510250326) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.1422260393388926) _gate_q_1;
  ry(-2.1422260393388926) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.1608375510250326) _gate_q_0;
}
gate ryy_5105510752(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.266874213441145) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate cu1_5106393808(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5848397360810463) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5848397360810463) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5848397360810463) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5106397648(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.7049537318702885) _gate_q_0;
  u1(-2.082853661582723) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.26008589968762325, 0, -2.7049537318702885) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.26008589968762325, 4.787807393453011, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5106391792(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3254154795606534) _gate_q_0;
  u1(-1.2260512193636477) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1104833918060069, 0, -3.3254154795606534) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1104833918060069, 4.551466698924301, 0) _gate_q_1;
}
gate cu3_5106400384(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.374426822384407) _gate_q_0;
  u1(0.7924371863330184) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.243599252868732, 0, -5.374426822384407) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.243599252868732, 4.5819896360513885, 0) _gate_q_1;
}
gate cu1_5106398368(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0115092962956134) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0115092962956134) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0115092962956134) _gate_q_1;
}
gate cu3_5106394912(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.9260961524259734) _gate_q_0;
  u1(-1.007293178233974) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1053385853777595, 0, -2.9260961524259734) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1053385853777595, 3.9333893306599474, 0) _gate_q_1;
}
gate xx_plus_yy_5106397552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.296746964938015) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5779007423137044) _gate_q_1;
  ry(-2.5779007423137044) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.296746964938015) _gate_q_0;
}
gate ryy_5106393952(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8615125881326144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5106386608(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.4458857667258513, 2.592209145383964, -2.592209145383964) _gate_q_0;
}
gate xx_plus_yy_5106385888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.802799610240825) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8518256667721382) _gate_q_1;
  ry(-1.8518256667721382) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.802799610240825) _gate_q_0;
}
gate ryy_5106400048(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.276009335662957) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5106387088(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.2674208969336584) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5106400528(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.351375321837629) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5106391168(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.216092798829976) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5106388288(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8980186542592863, 3.499135505398556, -3.499135505398556) _gate_q_0;
}
gate rzx_5106400768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2945400381717964) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5106385408(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5607027265745463) _gate_q_0;
  u1(-1.804262282682079) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2555151781451723, 0, -2.5607027265745463) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2555151781451723, 4.3649650092566255, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  x _gate_q_4;
  cs _gate_q_2, _gate_q_5;
  cry(4.417919861637105) _gate_q_9, _gate_q_10;
  cz _gate_q_13, _gate_q_14;
  csdg _gate_q_15, _gate_q_3;
  s _gate_q_7;
  tdg _gate_q_8;
  sdg _gate_q_6;
  cry(3.633397255685589) _gate_q_12, _gate_q_0;
  ecr _gate_q_16, _gate_q_1;
  ch _gate_q_11, _gate_q_17;
  cu(5.228866449402333, 5.575922271044371, 3.5604544260366984, 2.741472142492988) _gate_q_13, _gate_q_2;
  id _gate_q_0;
  u2(3.111476857460109, 0.4121813369595863) _gate_q_8;
  cry(5.14590913460521) _gate_q_12, _gate_q_6;
  tdg _gate_q_3;
  cx _gate_q_14, _gate_q_5;
  u1(2.7051829923817143) _gate_q_15;
  cy _gate_q_17, _gate_q_16;
  sx _gate_q_11;
  rz(1.115900846243765) _gate_q_1;
  ry(4.9113162993502835) _gate_q_9;
  y _gate_q_4;
  U(1.856973099670208, 4.971064106001861, 4.079215181106298) _gate_q_10;
  h _gate_q_7;
  rzz_5106396928(1.4671288109899576) _gate_q_6, _gate_q_4;
  cp(5.155612733535294) _gate_q_10, _gate_q_3;
  swap _gate_q_0, _gate_q_17;
  rxx_5106392992(0.0944404487981418) _gate_q_2, _gate_q_7;
  U(5.2372954430628775, 3.9838345522205048, 1.0781514788354272) _gate_q_8;
  xx_plus_yy_5106386176(4.284452078677785, 2.1608375510250326) _gate_q_16, _gate_q_13;
  ry(0.8063724503612771) _gate_q_15;
  cry(3.2233211794083507) _gate_q_5, _gate_q_12;
  rx(2.3806832024020412) _gate_q_9;
  id _gate_q_14;
  cs _gate_q_1, _gate_q_11;
  u2(5.673653798337024, 4.589562859647963) _gate_q_10;
  cx _gate_q_8, _gate_q_13;
  ecr _gate_q_12, _gate_q_14;
  ryy_5105510752(4.266874213441145) _gate_q_5, _gate_q_1;
  rx(4.6672393730801405) _gate_q_16;
  cu(1.9451424348272164, 5.481209837610461, 5.02473837516603, 0.8472590230963124) _gate_q_3, _gate_q_4;
  t _gate_q_6;
  csx _gate_q_7, _gate_q_0;
  crx(3.978595381316684) _gate_q_11, _gate_q_17;
  ecr _gate_q_2, _gate_q_15;
  u3(3.5819451183795454, 0.8834723924405165, 3.2204173674011063) _gate_q_9;
  p(4.601666597941662) _gate_q_8;
  cry(0.5193134157684804) _gate_q_17, _gate_q_15;
  csdg _gate_q_14, _gate_q_10;
  crx(4.280971860037566) _gate_q_2, _gate_q_0;
  ecr _gate_q_13, _gate_q_16;
  U(5.472173273234565, 4.243314481742541, 3.703816811973693) _gate_q_12;
  cx _gate_q_1, _gate_q_6;
  ch _gate_q_11, _gate_q_4;
  ch _gate_q_7, _gate_q_9;
  cu1_5106393808(1.1696794721620927) _gate_q_5, _gate_q_3;
  cz _gate_q_3, _gate_q_10;
  iswap _gate_q_6, _gate_q_13;
  x _gate_q_1;
  sx _gate_q_17;
  cu3_5106397648(0.5201717993752465, 4.787807393453011, 0.6221000702875658) _gate_q_4, _gate_q_0;
  dcx _gate_q_14, _gate_q_5;
  cu3_5106391792(2.2209667836120137, 4.551466698924301, 2.0993642601970057) _gate_q_8, _gate_q_11;
  csx _gate_q_16, _gate_q_7;
  cu3_5106400384(2.487198505737464, 4.5819896360513885, 6.166864008717425) _gate_q_15, _gate_q_9;
  cp(0.28350424743584784) _gate_q_12, _gate_q_2;
  cu1_5106398368(2.0230185925912267) _gate_q_11, _gate_q_17;
  cu3_5106394912(2.210677170755519, 3.9333893306599474, 1.9188029741919992) _gate_q_5, _gate_q_13;
  rx(0.6302145924118727) _gate_q_12;
  xx_plus_yy_5106397552(5.155801484627409, 3.296746964938015) _gate_q_1, _gate_q_7;
  cs _gate_q_3, _gate_q_16;
  rz(2.385180741633184) _gate_q_0;
  y _gate_q_4;
  crx(0.6384877158494152) _gate_q_2, _gate_q_14;
  u2(4.0374901886128525, 0.5666334052182537) _gate_q_9;
  u3(2.875902335051141, 0.25392162004548685, 4.904604135607103) _gate_q_10;
  rx(5.889467028048715) _gate_q_6;
  ryy_5106393952(2.8615125881326144) _gate_q_8, _gate_q_15;
  r_5106386608(3.4458857667258513, 4.1630054721788605) _gate_q_14;
  ecr _gate_q_10, _gate_q_6;
  cu(4.104514715293057, 2.6702592128183777, 5.782900256789052, 4.064831034905421) _gate_q_15, _gate_q_17;
  cp(3.229864191521532) _gate_q_7, _gate_q_1;
  h _gate_q_2;
  sx _gate_q_16;
  cp(5.221117193994723) _gate_q_13, _gate_q_11;
  xx_plus_yy_5106385888(3.7036513335442764, 3.802799610240825) _gate_q_8, _gate_q_0;
  ryy_5106400048(3.276009335662957) _gate_q_4, _gate_q_9;
  p(5.514878260423761) _gate_q_12;
  u3(3.866161537449918, 0.14095587827714776, 5.825001011673207) _gate_q_3;
  sdg _gate_q_5;
  u2(2.6832487807407053, 6.17766949103865) _gate_q_6;
  U(1.1253192371756378, 1.6975302830112535, 3.7476020011186524) _gate_q_11;
  ecr _gate_q_15, _gate_q_17;
  cs _gate_q_4, _gate_q_14;
  sdg _gate_q_16;
  cp(4.424663369005264) _gate_q_1, _gate_q_10;
  cz _gate_q_7, _gate_q_8;
  h _gate_q_3;
  rxx_5106387088(0.2674208969336584) _gate_q_0, _gate_q_2;
  sx _gate_q_9;
  rzz_5106400528(4.351375321837629) _gate_q_12, _gate_q_5;
  tdg _gate_q_13;
  ecr _gate_q_1, _gate_q_2;
  u3(5.222364463930133, 3.019153065300215, 2.413430335412764) _gate_q_9;
  cx _gate_q_16, _gate_q_8;
  rzx_5106391168(6.216092798829976) _gate_q_5, _gate_q_6;
  t _gate_q_11;
  cy _gate_q_0, _gate_q_10;
  r_5106388288(0.8980186542592863, 5.069931832193452) _gate_q_4;
  u2(5.8204293059359395, 0.6775406413617711) _gate_q_3;
  ecr _gate_q_17, _gate_q_7;
  rzx_5106400768(1.2945400381717964) _gate_q_14, _gate_q_12;
  cu3_5106385408(4.511030356290345, 4.3649650092566255, 0.7564404438924673) _gate_q_13, _gate_q_15;
}
gate xx_plus_yy_5106388576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.559139349723678) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9027572075225626) _gate_q_1;
  ry(-0.9027572075225626) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.559139349723678) _gate_q_0;
}
gate ryy_5106393568(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9066475399250888) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5106395824(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.554106472371664) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5106385504(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.383036307083889) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5106399952(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.955441644004343) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5106391648(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3837390210707414) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5106391408(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.5901582609926952) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5979156982468257) _gate_q_0;
  ry(-2.5979156982468257) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.5901582609926952) _gate_q_1;
}
gate r_5106399040(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.42153484702765, 0.16665702992531406, -0.16665702992531406) _gate_q_0;
}
gate xx_minus_yy_5106385264(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.695945467868511) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4721917144280765) _gate_q_0;
  ry(-1.4721917144280765) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.695945467868511) _gate_q_1;
}
gate r_5106385024(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.797179843129138, 3.2342227597248314, -3.2342227597248314) _gate_q_0;
}
gate ryy_5106394432(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7618036653161089) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5106395056(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.982535007202197) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.982535007202197) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.982535007202197) _gate_q_1;
}
gate r_5106401152(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.26781944445649586, 0.053881690083970035, -0.053881690083970035) _gate_q_0;
}
gate cu3_5106387616(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.7150559339167195) _gate_q_0;
  u1(-0.4929615490126089) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7102908135488268, 0, -4.7150559339167195) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7102908135488268, 5.208017482929328, 0) _gate_q_1;
}
gate r_5106401104(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.11319875204691, -0.0803566276494232, 0.0803566276494232) _gate_q_0;
}
gate rzx_5106395680(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6423084234367002) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5106400288(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.570329549105501) _gate_q_0;
  u1(0.34054660862669195) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.39287488762071443, 0, -2.570329549105501) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.39287488762071443, 2.229782940478809, 0) _gate_q_1;
}
gate rxx_5106390880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.09230870132623) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5106395392(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.733695145125725) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.548677699429314) _gate_q_0;
  ry(-1.548677699429314) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.733695145125725) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  sxdg _gate_q_9;
  cz _gate_q_5, _gate_q_11;
  cry(3.155086959997564) _gate_q_13, _gate_q_3;
  cs _gate_q_15, _gate_q_12;
  cu(5.739700930858827, 6.185062256414833, 3.2695935552157627, 0.6812938223713765) _gate_q_8, _gate_q_6;
  p(5.491086026661204) _gate_q_17;
  rx(6.270041541012823) _gate_q_16;
  t _gate_q_10;
  xx_plus_yy_5106388576(1.8055144150451252, 5.559139349723678) _gate_q_1, _gate_q_14;
  ryy_5106393568(1.9066475399250888) _gate_q_2, _gate_q_0;
  ecr _gate_q_7, _gate_q_4;
  swap _gate_q_14, _gate_q_1;
  rzx_5106395824(5.554106472371664) _gate_q_5, _gate_q_17;
  rzx_5106385504(5.383036307083889) _gate_q_13, _gate_q_7;
  cp(3.668670285390798) _gate_q_15, _gate_q_16;
  cs _gate_q_4, _gate_q_3;
  u2(0.9015440173965232, 3.906367600812356) _gate_q_6;
  ryy_5106399952(1.955441644004343) _gate_q_9, _gate_q_0;
  s _gate_q_11;
  cz _gate_q_2, _gate_q_12;
  swap _gate_q_8, _gate_q_10;
  ecr _gate_q_15, _gate_q_5;
  cp(3.6109910570056774) _gate_q_14, _gate_q_0;
  cry(1.8019675030536229) _gate_q_16, _gate_q_11;
  swap _gate_q_12, _gate_q_2;
  z _gate_q_8;
  u3(0.5083769601158746, 4.411595584206984, 2.010669654915639) _gate_q_9;
  u2(1.14735948534764, 3.155558010461055) _gate_q_3;
  cy _gate_q_7, _gate_q_13;
  swap _gate_q_1, _gate_q_17;
  dcx _gate_q_4, _gate_q_10;
  z _gate_q_6;
  ry(1.8704906465826452) _gate_q_12;
  cx _gate_q_3, _gate_q_7;
  csdg _gate_q_15, _gate_q_6;
  rxx_5106391648(3.3837390210707414) _gate_q_2, _gate_q_8;
  cy _gate_q_9, _gate_q_4;
  rx(4.32138013952989) _gate_q_5;
  sxdg _gate_q_10;
  xx_minus_yy_5106391408(5.195831396493651, 0.5901582609926952) _gate_q_16, _gate_q_13;
  sx _gate_q_0;
  swap _gate_q_1, _gate_q_17;
  s _gate_q_14;
  r_5106399040(5.42153484702765, 1.7374533567202106) _gate_q_11;
  cs _gate_q_16, _gate_q_5;
  cs _gate_q_10, _gate_q_2;
  crx(5.473933553376807) _gate_q_17, _gate_q_6;
  s _gate_q_8;
  csdg _gate_q_7, _gate_q_13;
  p(1.3330739107659715) _gate_q_14;
  sdg _gate_q_3;
  y _gate_q_9;
  xx_minus_yy_5106385264(2.944383428856153, 5.695945467868511) _gate_q_1, _gate_q_11;
  u1(4.192809355059992) _gate_q_12;
  dcx _gate_q_15, _gate_q_4;
  s _gate_q_0;
  cy _gate_q_13, _gate_q_6;
  crz(3.693662064357099) _gate_q_2, _gate_q_16;
  s _gate_q_11;
  y _gate_q_10;
  r_5106385024(4.797179843129138, 4.805019086519728) _gate_q_9;
  swap _gate_q_4, _gate_q_3;
  id _gate_q_14;
  ryy_5106394432(0.7618036653161089) _gate_q_12, _gate_q_0;
  crx(1.7509698335673094) _gate_q_7, _gate_q_1;
  cu1_5106395056(5.965070014404394) _gate_q_15, _gate_q_17;
  x _gate_q_5;
  tdg _gate_q_8;
  p(5.323844877411344) _gate_q_15;
  u2(0.30117912602490116, 3.7669250240940793) _gate_q_8;
  r_5106401152(0.26781944445649586, 1.6246780168788666) _gate_q_9;
  csdg _gate_q_6, _gate_q_14;
  csx _gate_q_3, _gate_q_2;
  x _gate_q_17;
  y _gate_q_1;
  csx _gate_q_10, _gate_q_16;
  cu3_5106387616(1.4205816270976537, 5.208017482929328, 4.222094384904111) _gate_q_11, _gate_q_7;
  csdg _gate_q_5, _gate_q_12;
  cs _gate_q_0, _gate_q_4;
  id _gate_q_13;
  r_5106401104(4.11319875204691, 1.4904396991454734) _gate_q_10;
  y _gate_q_7;
  id _gate_q_15;
  ch _gate_q_9, _gate_q_6;
  rx(2.768591608814337) _gate_q_0;
  cy _gate_q_16, _gate_q_5;
  U(2.451276329711359, 2.7135823245113198, 2.411534644223409) _gate_q_1;
  swap _gate_q_8, _gate_q_11;
  U(5.972139443627931, 3.936356260605766, 4.90201697058582) _gate_q_3;
  cz _gate_q_14, _gate_q_4;
  ry(3.301540211459309) _gate_q_17;
  csx _gate_q_2, _gate_q_13;
  y _gate_q_12;
  csdg _gate_q_6, _gate_q_4;
  u2(0.9218935977449175, 1.9484583423796118) _gate_q_2;
  rz(4.3079335150133575) _gate_q_3;
  p(2.52830610823328) _gate_q_10;
  csx _gate_q_16, _gate_q_8;
  rz(5.384417095455518) _gate_q_0;
  rzx_5106395680(2.6423084234367002) _gate_q_7, _gate_q_1;
  cp(4.324866726236287) _gate_q_12, _gate_q_13;
  ch _gate_q_5, _gate_q_14;
  rz(0.19732713458624893) _gate_q_9;
  cu3_5106400288(0.7857497752414289, 2.229782940478809, 2.910876157732193) _gate_q_11, _gate_q_17;
  u3(3.5763884061784985, 5.053302438377558, 2.4560816150952767) _gate_q_15;
  rxx_5106390880(6.09230870132623) _gate_q_13, _gate_q_12;
  crx(3.5909008513196765) _gate_q_6, _gate_q_17;
  p(4.231205357456203) _gate_q_11;
  sx _gate_q_1;
  U(3.930309385099009, 0.12021931454897122, 0.024336457964479478) _gate_q_16;
  crz(1.8334726588568988) _gate_q_9, _gate_q_8;
  cy _gate_q_7, _gate_q_2;
  xx_minus_yy_5106395392(3.097355398858628, 1.733695145125725) _gate_q_10, _gate_q_0;
  csx _gate_q_3, _gate_q_5;
  crz(1.2326368742791654) _gate_q_14, _gate_q_15;
  x _gate_q_4;
}