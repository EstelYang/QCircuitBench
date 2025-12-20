gate r_5107781312(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.079176648807825, -1.4774498861754188, 1.4774498861754188) _gate_q_0;
}
gate cu1_5107779728(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.6462116526748787) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.6462116526748787) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.6462116526748787) _gate_q_1;
}
gate cu3_5107780064(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.7877726678377601) _gate_q_0;
  u1(-0.7351247033668633) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.749435351546879, 0, -0.7877726678377601) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.749435351546879, 1.5228973712046234, 0) _gate_q_1;
}
gate cu1_5107779392(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.3394271978677774) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.3394271978677774) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.3394271978677774) _gate_q_1;
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
gate r_5107781936(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.407902012307532, -1.5024376896875504, 1.5024376896875504) _gate_q_0;
}
gate r_5107785968(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.6052935001997475, 3.6629944073317757, -3.6629944073317757) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5107787072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.252861699796833) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6945798027254036) _gate_q_1;
  ry(-0.6945798027254036) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.252861699796833) _gate_q_0;
}
gate r_5107788032(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.410644599816886, 1.3710272414240467, -1.3710272414240467) _gate_q_0;
}
gate rzz_5107784192(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.9415739241914745) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rxx_5107788080(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.8867748297111175) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5107781792(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.0422011787615935) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5107783856(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.644697136964024) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5107780640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.8449092973528384) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5041826318921203) _gate_q_0;
  ry(-1.5041826318921203) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.8449092973528384) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rxx_5107781120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3509819843199296) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5107780256(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.736412054641291) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5107780400(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.0961956547100415) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_minus_yy_5107780496(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.416390765547226) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8422411194603248) _gate_q_0;
  ry(-1.8422411194603248) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.416390765547226) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  r_5107781312(6.079176648807825, 0.09334644061947761) _gate_q_10;
  u2(2.7776241368034085, 0.935374476310051) _gate_q_2;
  sx _gate_q_8;
  s _gate_q_4;
  cu1_5107779728(5.292423305349757) _gate_q_5, _gate_q_9;
  rz(0.8671296377740566) _gate_q_7;
  p(6.031565536373193) _gate_q_6;
  u1(3.9516223632503302) _gate_q_3;
  t _gate_q_11;
  cu3_5107780064(3.498870703093758, 1.5228973712046234, 0.05264796447089686) _gate_q_1, _gate_q_0;
  sx _gate_q_10;
  sdg _gate_q_5;
  ry(5.587181625905295) _gate_q_7;
  cu1_5107779392(4.678854395735555) _gate_q_6, _gate_q_8;
  cu(5.076825660669979, 5.447814457482492, 4.13176737242935, 1.4808208781027103) _gate_q_9, _gate_q_0;
  cx _gate_q_3, _gate_q_4;
  csx _gate_q_2, _gate_q_11;
  id _gate_q_1;
  cry(3.674547170636895) _gate_q_11, _gate_q_10;
  U(1.759745019985641, 4.233531460998321, 3.5743147507473574) _gate_q_7;
  tdg _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  csx _gate_q_2, _gate_q_4;
  ecr _gate_q_0, _gate_q_9;
  r_5107781936(1.407902012307532, 0.06835863710734609) _gate_q_8;
  ry(5.567048934399774) _gate_q_3;
  r_5107785968(2.6052935001997475, 5.233790734126672) _gate_q_0;
  xx_plus_yy_5107787072(1.3891596054508073, 1.252861699796833) _gate_q_11, _gate_q_9;
  s _gate_q_7;
  ecr _gate_q_4, _gate_q_10;
  s _gate_q_2;
  cu(4.549392225232138, 0.8845096206471982, 0.8243421134926506, 1.4077196529883014) _gate_q_3, _gate_q_5;
  cp(1.0762181567706786) _gate_q_1, _gate_q_8;
  ry(0.5881469942063189) _gate_q_6;
  r_5107788032(0.410644599816886, 2.9418235682189433) _gate_q_5;
  crx(3.5360914892770707) _gate_q_2, _gate_q_8;
  sdg _gate_q_6;
  rzz_5107784192(4.9415739241914745) _gate_q_1, _gate_q_3;
  x _gate_q_10;
  x _gate_q_4;
  x _gate_q_11;
  u1(2.316072768650511) _gate_q_9;
  iswap _gate_q_0, _gate_q_7;
  h _gate_q_2;
  rxx_5107788080(5.8867748297111175) _gate_q_7, _gate_q_1;
  iswap _gate_q_9, _gate_q_10;
  U(3.5072506108139616, 4.7017780613874915, 2.8490919184906933) _gate_q_6;
  cry(5.7308502433152935) _gate_q_4, _gate_q_0;
  ry(5.180955413252106) _gate_q_5;
  ryy_5107781792(6.0422011787615935) _gate_q_8, _gate_q_11;
  z _gate_q_3;
  rx(5.877478769865668) _gate_q_2;
  h _gate_q_0;
  rz(0.43061590528207017) _gate_q_8;
  ryy_5107783856(4.644697136964024) _gate_q_10, _gate_q_4;
  rz(1.1009646717693666) _gate_q_1;
  z _gate_q_9;
  cry(3.780245890684147) _gate_q_5, _gate_q_11;
  ry(5.689373698526849) _gate_q_6;
  sdg _gate_q_3;
  u3(4.529893811821614, 4.834684487649196, 1.2116998556208012) _gate_q_7;
  sx _gate_q_11;
  xx_minus_yy_5107780640(3.0083652637842406, 0.8449092973528384) _gate_q_4, _gate_q_5;
  cs _gate_q_6, _gate_q_8;
  rxx_5107781120(3.3509819843199296) _gate_q_1, _gate_q_9;
  dcx _gate_q_10, _gate_q_2;
  cry(2.9134599594365853) _gate_q_7, _gate_q_0;
  ry(3.307096316208954) _gate_q_3;
  csx _gate_q_10, _gate_q_0;
  t _gate_q_4;
  rzz_5107780256(5.736412054641291) _gate_q_9, _gate_q_8;
  u1(3.372276828476744) _gate_q_6;
  cs _gate_q_5, _gate_q_7;
  s _gate_q_11;
  rzx_5107780400(4.0961956547100415) _gate_q_1, _gate_q_3;
  z _gate_q_2;
  crz(3.3273468978707297) _gate_q_5, _gate_q_2;
  cx _gate_q_6, _gate_q_1;
  csdg _gate_q_0, _gate_q_11;
  xx_minus_yy_5107780496(3.6844822389206495, 4.416390765547226) _gate_q_7, _gate_q_10;
  cry(1.1582722114402688) _gate_q_4, _gate_q_3;
  crz(5.321883443087411) _gate_q_8, _gate_q_9;
}
gate r_5107788272(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.2982399144944896, 1.3317077230187477, -1.3317077230187477) _gate_q_0;
}
gate r_5107793360(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.947825393291413, 3.8870294513117996, -3.8870294513117996) _gate_q_0;
}
gate cu1_5107790096(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.382108407489241) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.382108407489241) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.382108407489241) _gate_q_1;
}
gate cu3_5107790528(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.6188945277972824) _gate_q_0;
  u1(0.035916885974425494) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9996411096482767, 0, -0.6188945277972824) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9996411096482767, 0.5829776418228568, 0) _gate_q_1;
}
gate cu3_5107791056(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.243813099515988) _gate_q_0;
  u1(-0.47938155299175467) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.7556739187484873, 0, -2.243813099515988) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.7556739187484873, 2.723194652507743, 0) _gate_q_1;
}
gate rzz_5107778336(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6244667634478727) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5107792736(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.14201617538199163) _gate_q_0;
  u1(0.04916655765777193) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5703717283662826, 0, -0.14201617538199163) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5703717283662826, 0.0928496177242197, 0) _gate_q_1;
}
gate ryy_5107777808(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.164444851957958) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5107783280(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.360330363256069) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.770010462931494) _gate_q_1;
  ry(-2.770010462931494) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.360330363256069) _gate_q_0;
}
gate cu3_5107789904(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.156190104224668) _gate_q_0;
  u1(-0.35735255735294125) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5522471495038199, 0, -4.156190104224668) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5522471495038199, 4.513542661577609, 0) _gate_q_1;
}
gate rzx_5107789424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2675120830389943) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107783328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1012214794042348) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5107782752(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.9199604297413202) _gate_q_0;
  u1(0.5979760184909308) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4884558726549428, 0, -1.9199604297413202) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4884558726549428, 1.3219844112503893, 0) _gate_q_1;
}
gate cu3_5107778432(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.9814316249260773) _gate_q_0;
  u1(-0.030997221905969763) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8370365829876757, 0, -3.9814316249260773) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8370365829876757, 4.012428846832047, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  r_5107788272(2.2982399144944896, 2.9025040498136443) _gate_q_7;
  cs _gate_q_6, _gate_q_11;
  sx _gate_q_1;
  U(3.1716754483437892, 4.966370216872225, 4.904342903688535) _gate_q_2;
  cry(3.404233965273907) _gate_q_5, _gate_q_4;
  rx(0.8570928232063241) _gate_q_3;
  ecr _gate_q_0, _gate_q_10;
  ry(3.2624239480372093) _gate_q_9;
  r_5107793360(5.947825393291413, 5.457825778106696) _gate_q_8;
  ch _gate_q_1, _gate_q_0;
  crz(1.859757523806805) _gate_q_4, _gate_q_7;
  sxdg _gate_q_9;
  swap _gate_q_3, _gate_q_11;
  ecr _gate_q_2, _gate_q_10;
  csdg _gate_q_8, _gate_q_6;
  h _gate_q_5;
  sx _gate_q_4;
  tdg _gate_q_6;
  rz(0.5613888291839951) _gate_q_7;
  sx _gate_q_8;
  cu(5.567743003970757, 0.7683325887395338, 4.807479360039742, 3.168059464161996) _gate_q_9, _gate_q_0;
  cu1_5107790096(2.764216814978482) _gate_q_5, _gate_q_1;
  csdg _gate_q_10, _gate_q_3;
  tdg _gate_q_2;
  s _gate_q_11;
  cx _gate_q_0, _gate_q_6;
  p(5.227780770911633) _gate_q_11;
  u3(2.8105862034862064, 5.4891661988937015, 5.738616912833507) _gate_q_4;
  t _gate_q_1;
  t _gate_q_10;
  rx(2.4243445385945583) _gate_q_5;
  cu3_5107790528(3.9992822192965534, 0.5829776418228568, 0.6548114137717078) _gate_q_3, _gate_q_9;
  cry(0.4140111115562225) _gate_q_2, _gate_q_7;
  id _gate_q_8;
  cy _gate_q_10, _gate_q_4;
  u3(1.3468404521394357, 6.057172336740306, 3.4327714113615864) _gate_q_0;
  ch _gate_q_2, _gate_q_1;
  iswap _gate_q_3, _gate_q_8;
  u2(4.322446817740504, 4.84382089269744) _gate_q_9;
  csdg _gate_q_5, _gate_q_11;
  rx(2.201930397261043) _gate_q_7;
  y _gate_q_6;
  h _gate_q_8;
  sxdg _gate_q_5;
  cu3_5107791056(5.511347837496975, 2.723194652507743, 1.7644315465242335) _gate_q_0, _gate_q_9;
  rzz_5107778336(0.6244667634478727) _gate_q_6, _gate_q_7;
  u1(1.9735612596430427) _gate_q_2;
  cu3_5107792736(5.140743456732565, 0.0928496177242197, 0.19118273303976355) _gate_q_1, _gate_q_4;
  ryy_5107777808(6.164444851957958) _gate_q_11, _gate_q_3;
  t _gate_q_10;
  xx_plus_yy_5107783280(5.540020925862988, 2.360330363256069) _gate_q_3, _gate_q_9;
  iswap _gate_q_2, _gate_q_0;
  cp(5.1377734287920385) _gate_q_1, _gate_q_10;
  iswap _gate_q_11, _gate_q_6;
  cu3_5107789904(1.1044942990076398, 4.513542661577609, 3.7988375468717264) _gate_q_4, _gate_q_8;
  ch _gate_q_7, _gate_q_5;
  t _gate_q_4;
  p(1.258024672310645) _gate_q_0;
  U(3.2500622303552724, 0.11031906552743154, 5.329317461976956) _gate_q_1;
  swap _gate_q_11, _gate_q_3;
  dcx _gate_q_5, _gate_q_6;
  s _gate_q_9;
  cs _gate_q_8, _gate_q_2;
  csdg _gate_q_10, _gate_q_7;
  crx(1.111030611433908) _gate_q_8, _gate_q_11;
  rzx_5107789424(3.2675120830389943) _gate_q_7, _gate_q_10;
  sdg _gate_q_1;
  p(0.14083280237783746) _gate_q_3;
  ch _gate_q_9, _gate_q_0;
  U(4.604775312985466, 4.714141304867841, 4.580197825586484) _gate_q_2;
  U(1.2835360537859026, 2.080615847309155, 1.6071194576690966) _gate_q_6;
  rx(3.992774412820215) _gate_q_5;
  h _gate_q_4;
  t _gate_q_11;
  rzx_5107783328(1.1012214794042348) _gate_q_8, _gate_q_2;
  cu3_5107782752(2.9769117453098857, 1.3219844112503893, 2.517936448232251) _gate_q_5, _gate_q_7;
  id _gate_q_3;
  cu3_5107778432(1.6740731659753514, 4.012428846832047, 3.9504344030201075) _gate_q_4, _gate_q_0;
  swap _gate_q_6, _gate_q_9;
  cry(3.651807481937901) _gate_q_10, _gate_q_1;
}