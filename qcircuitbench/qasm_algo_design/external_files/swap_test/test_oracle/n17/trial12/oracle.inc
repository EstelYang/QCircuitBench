gate cu3_5084968672(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.941817578756892) _gate_q_0;
  u1(-0.5566047262459612) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4988121520553758, 0, -4.941817578756892) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4988121520553758, 5.498422305002853, 0) _gate_q_1;
}
gate rzx_5084968384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3367504601994833) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5084966560(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.545364788916418) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5869436675518699) _gate_q_1;
  ry(-0.5869436675518699) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.545364788916418) _gate_q_0;
}
gate rzx_5084970544(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.15613257734841687) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5084968240(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2982153078627388) _gate_q_0;
  u1(0.8914206060867057) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7620296077771422, 0, -1.2982153078627388) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7620296077771422, 0.40679470177603316, 0) _gate_q_1;
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
gate cu3_5084968192(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8510851944654148) _gate_q_0;
  u1(1.694196629355999) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8328589321949995, 0, -2.8510851944654148) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8328589321949995, 1.156888565109416, 0) _gate_q_1;
}
gate rzx_5084970208(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.7336817051961875) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5084958736(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.142605064812533) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5084970112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1325735209571968) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5084970352(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3060277042143786) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5084969776(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.407785870637222) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5084970400(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7019550326768886) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5084969344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8558262607670355) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5084969248(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.893772764239602) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5084970928(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.1935394052005552) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6453863961947974) _gate_q_0;
  ry(-0.6453863961947974) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.1935394052005552) _gate_q_1;
}
gate cu1_5084970880(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.20766519863086977) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.20766519863086977) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.20766519863086977) _gate_q_1;
}
gate rzz_5084969872(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.73443408399303) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5072125296(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6990123483016162, -1.0220184483909318, 1.0220184483909318) _gate_q_0;
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
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5072457888(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.428837262622095) _gate_q_0;
  u1(1.988396124762859) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.15876751079376025, 0, -3.428837262622095) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.15876751079376025, 1.440441137859236, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu1_5072463216(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.774899044760115) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.774899044760115) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.774899044760115) _gate_q_1;
}
gate xx_minus_yy_5072464560(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.1124936911623786) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.37858648785739474) _gate_q_0;
  ry(-0.37858648785739474) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.1124936911623786) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  rz(0.5367477836860274) _gate_q_11;
  cx _gate_q_7, _gate_q_4;
  cu3_5084968672(0.9976243041107516, 5.498422305002853, 4.38521285251093) _gate_q_10, _gate_q_3;
  rzx_5084968384(3.3367504601994833) _gate_q_5, _gate_q_0;
  x _gate_q_15;
  cs _gate_q_12, _gate_q_14;
  xx_plus_yy_5084966560(1.1738873351037398, 5.545364788916418) _gate_q_8, _gate_q_9;
  rzx_5084970544(0.15613257734841687) _gate_q_1, _gate_q_2;
  y _gate_q_6;
  z _gate_q_13;
  t _gate_q_16;
  z _gate_q_7;
  cu3_5084968240(1.5240592155542845, 0.40679470177603316, 2.1896359139494446) _gate_q_3, _gate_q_12;
  swap _gate_q_4, _gate_q_15;
  cu(4.720078663450475, 3.126680973292921, 6.174309651449614, 3.983926660852945) _gate_q_0, _gate_q_11;
  csx _gate_q_9, _gate_q_5;
  cp(2.4520360034887636) _gate_q_6, _gate_q_1;
  cu3_5084968192(3.665717864389999, 1.156888565109416, 4.545281823821414) _gate_q_8, _gate_q_2;
  rzx_5084970208(5.7336817051961875) _gate_q_13, _gate_q_16;
  swap _gate_q_10, _gate_q_14;
  sdg _gate_q_6;
  rzz_5084958736(5.142605064812533) _gate_q_11, _gate_q_10;
  id _gate_q_8;
  id _gate_q_15;
  id _gate_q_2;
  rx(2.9314696587507423) _gate_q_7;
  cs _gate_q_9, _gate_q_1;
  cs _gate_q_16, _gate_q_0;
  rxx_5084970112(3.1325735209571968) _gate_q_14, _gate_q_5;
  ryy_5084970352(3.3060277042143786) _gate_q_13, _gate_q_3;
  sxdg _gate_q_4;
  rx(0.5305058250020368) _gate_q_12;
  cy _gate_q_4, _gate_q_8;
  tdg _gate_q_12;
  rzz_5084969776(3.407785870637222) _gate_q_3, _gate_q_6;
  crz(0.8810840796889239) _gate_q_2, _gate_q_5;
  crz(0.7121162731607402) _gate_q_1, _gate_q_15;
  y _gate_q_13;
  x _gate_q_9;
  rz(5.651151402046228) _gate_q_0;
  cu(3.0121882491513747, 5.906310124347966, 5.661448855981868, 3.1210667652738042) _gate_q_7, _gate_q_16;
  sxdg _gate_q_11;
  crz(3.949916059277953) _gate_q_14, _gate_q_10;
  rzx_5084970400(3.7019550326768886) _gate_q_7, _gate_q_8;
  swap _gate_q_4, _gate_q_6;
  cu(5.7672289521109, 5.4524733203180205, 2.0249931314590017, 5.754291622803721) _gate_q_0, _gate_q_2;
  p(0.2817858401806343) _gate_q_16;
  sx _gate_q_3;
  cz _gate_q_1, _gate_q_14;
  sx _gate_q_15;
  sdg _gate_q_12;
  U(2.9297565706368323, 1.048907280594893, 4.061950224489533) _gate_q_10;
  csx _gate_q_5, _gate_q_13;
  rxx_5084969344(1.8558262607670355) _gate_q_11, _gate_q_9;
  x _gate_q_3;
  p(6.036166716694884) _gate_q_8;
  cy _gate_q_4, _gate_q_12;
  rzz_5084969248(4.893772764239602) _gate_q_13, _gate_q_9;
  cry(3.1128945317107615) _gate_q_11, _gate_q_7;
  xx_minus_yy_5084970928(1.2907727923895949, 3.1935394052005552) _gate_q_14, _gate_q_15;
  csx _gate_q_0, _gate_q_10;
  cs _gate_q_2, _gate_q_5;
  y _gate_q_1;
  z _gate_q_6;
  u2(3.0412972185036784, 2.687655792674855) _gate_q_16;
  tdg _gate_q_3;
  cz _gate_q_2, _gate_q_13;
  rz(4.100613693447052) _gate_q_8;
  id _gate_q_16;
  z _gate_q_5;
  crx(1.4515212686611396) _gate_q_15, _gate_q_4;
  s _gate_q_14;
  h _gate_q_6;
  sdg _gate_q_7;
  cu1_5084970880(0.41533039726173954) _gate_q_9, _gate_q_0;
  u2(2.885865862990678, 3.4398907131364993) _gate_q_11;
  sxdg _gate_q_12;
  s _gate_q_1;
  u1(0.3475064512819329) _gate_q_10;
  rzz_5084969872(5.73443408399303) _gate_q_2, _gate_q_12;
  crx(4.122187194977275) _gate_q_4, _gate_q_1;
  dcx _gate_q_6, _gate_q_11;
  crz(2.307717325198421) _gate_q_3, _gate_q_10;
  crx(2.0063450560424476) _gate_q_9, _gate_q_8;
  u1(0.4556517028083729) _gate_q_15;
  r_5072125296(1.6990123483016162, 0.5487778784039647) _gate_q_16;
  ecr _gate_q_13, _gate_q_5;
  ch _gate_q_7, _gate_q_14;
  rx(4.4050452473820965) _gate_q_0;
  cz _gate_q_11, _gate_q_9;
  sx _gate_q_1;
  swap _gate_q_0, _gate_q_10;
  U(0.4813440578839988, 4.131443099553613, 0.11534985359014696) _gate_q_8;
  tdg _gate_q_12;
  s _gate_q_16;
  rx(4.585236401900594) _gate_q_6;
  y _gate_q_5;
  iswap _gate_q_13, _gate_q_14;
  cu3_5072457888(0.3175350215875205, 1.440441137859236, 5.417233387384954) _gate_q_2, _gate_q_7;
  csdg _gate_q_3, _gate_q_15;
  rz(2.5770038233110713) _gate_q_4;
  iswap _gate_q_13, _gate_q_1;
  swap _gate_q_12, _gate_q_14;
  ry(1.8310998279408794) _gate_q_15;
  cu1_5072463216(3.54979808952023) _gate_q_5, _gate_q_8;
  iswap _gate_q_7, _gate_q_2;
  rz(2.7537883529797442) _gate_q_0;
  U(3.6750033684385848, 0.12614383829191392, 1.9980355158576062) _gate_q_3;
  u2(4.999115681008834, 0.5531519062577798) _gate_q_11;
  xx_minus_yy_5072464560(0.7571729757147895, 3.1124936911623786) _gate_q_10, _gate_q_16;
  u3(2.7761888041016376, 2.7226492976981724, 1.8530410355588196) _gate_q_6;
  rz(6.104189480814843) _gate_q_9;
  t _gate_q_4;
}
gate ryy_5069813904(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6874024224938495) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5069813856(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.855077007765806, 2.004712127241253, -2.004712127241253) _gate_q_0;
}
gate cu3_5069814864(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.525123759696314) _gate_q_0;
  u1(0.007579596771241093) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.588757495331739, 0, -5.525123759696314) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.588757495331739, 5.5175441629250725, 0) _gate_q_1;
}
gate r_5069814192(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.5765867224611962, 3.5643516042099845, -3.5643516042099845) _gate_q_0;
}
gate xx_minus_yy_5069814240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.449754576044484) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5607955365776995) _gate_q_0;
  ry(-0.5607955365776995) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.449754576044484) _gate_q_1;
}
gate cu1_5069811792(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.1559072551217664) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.1559072551217664) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.1559072551217664) _gate_q_1;
}
gate xx_minus_yy_5069815248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.7009007649091976) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9938019098373533) _gate_q_0;
  ry(-0.9938019098373533) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.7009007649091976) _gate_q_1;
}
gate rzz_5069813424(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.2441782589256363) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5069813280(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.908808183855729) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.38727775936055764) _gate_q_0;
  ry(-0.38727775936055764) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.908808183855729) _gate_q_1;
}
gate cu3_5069814144(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.1577703239017065) _gate_q_0;
  u1(-0.5500776709847854) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.678812424988199, 0, -5.1577703239017065) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.678812424988199, 5.707847994886492, 0) _gate_q_1;
}
gate rzx_5069814816(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.695125326446511) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5069814384(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.5838558107540603, 0.6909247639743143, -0.6909247639743143) _gate_q_0;
}
gate rzz_5069812080(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.048774609135253) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5069812800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.07013857289911068) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8787507565059567) _gate_q_0;
  ry(-0.8787507565059567) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.07013857289911068) _gate_q_1;
}
gate xx_plus_yy_5069814624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.22705611937009082) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.33339320957830776) _gate_q_1;
  ry(-0.33339320957830776) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.22705611937009082) _gate_q_0;
}
gate xx_minus_yy_5069813664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.121512770522991) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8543018105375724) _gate_q_0;
  ry(-0.8543018105375724) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.121512770522991) _gate_q_1;
}
gate rxx_5069814336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.10269999783891824) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5072200592(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.3615353217540975) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5072197424(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.9721732504379854) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4195919188058774) _gate_q_1;
  ry(-1.4195919188058774) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.9721732504379854) _gate_q_0;
}
gate rzz_5072196656(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.324006946886915) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5072203712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.870873508607945) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5072200304(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.8619229184899142) _gate_q_0;
  u1(0.9933907136315865) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9866666949902002, 0, -1.8619229184899142) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9866666949902002, 0.8685322048583277, 0) _gate_q_1;
}
gate rzx_5072200688(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.244507285191699) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072195792(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.601224097002951, 3.1334344824798164, -3.1334344824798164) _gate_q_0;
}
gate cu1_5072199200(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.510832310530695) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.510832310530695) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.510832310530695) _gate_q_1;
}
gate r_5072195888(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.463895534594757, -0.28907371496834866, 0.28907371496834866) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  swap _gate_q_15, _gate_q_6;
  ry(0.45371708562337) _gate_q_4;
  cs _gate_q_12, _gate_q_16;
  ry(5.303607398841977) _gate_q_10;
  sxdg _gate_q_1;
  crz(1.6597838610863793) _gate_q_14, _gate_q_2;
  csx _gate_q_0, _gate_q_8;
  rz(0.36917644984814013) _gate_q_3;
  u2(0.5868171921224797, 0.2675240635552871) _gate_q_5;
  z _gate_q_13;
  crx(2.853111124643244) _gate_q_11, _gate_q_9;
  h _gate_q_7;
  sx _gate_q_4;
  cu(3.2824803516474415, 0.18334493681614633, 4.166039754714722, 0.48976332369749925) _gate_q_5, _gate_q_6;
  t _gate_q_1;
  id _gate_q_11;
  t _gate_q_16;
  p(5.959033796078553) _gate_q_13;
  cs _gate_q_12, _gate_q_15;
  x _gate_q_0;
  u1(0.13694985936751347) _gate_q_7;
  p(5.264272029797716) _gate_q_14;
  ryy_5069813904(0.6874024224938495) _gate_q_8, _gate_q_9;
  sx _gate_q_2;
  ecr _gate_q_10, _gate_q_3;
  z _gate_q_0;
  sx _gate_q_14;
  cy _gate_q_7, _gate_q_1;
  crz(3.905221302330239) _gate_q_9, _gate_q_16;
  r_5069813856(0.855077007765806, 3.5755084540361497) _gate_q_13;
  cu(4.560208114836418, 1.863053846061099, 4.084499199531798, 4.200651162088236) _gate_q_8, _gate_q_15;
  cu3_5069814864(5.177514990663478, 5.5175441629250725, 5.532703356467555) _gate_q_10, _gate_q_5;
  r_5069814192(0.5765867224611962, 5.135147931004881) _gate_q_4;
  ecr _gate_q_11, _gate_q_12;
  sxdg _gate_q_2;
  xx_minus_yy_5069814240(1.121591073155399, 2.449754576044484) _gate_q_3, _gate_q_6;
  csdg _gate_q_14, _gate_q_2;
  ry(1.505709871244262) _gate_q_11;
  cu1_5069811792(4.311814510243533) _gate_q_4, _gate_q_3;
  cs _gate_q_0, _gate_q_9;
  xx_minus_yy_5069815248(1.9876038196747066, 1.7009007649091976) _gate_q_15, _gate_q_7;
  rzz_5069813424(0.2441782589256363) _gate_q_6, _gate_q_8;
  rx(4.22092938945851) _gate_q_5;
  U(5.8609351854476746, 4.729411903222935, 3.207564320403312) _gate_q_1;
  ch _gate_q_10, _gate_q_16;
  xx_minus_yy_5069813280(0.7745555187211153, 3.908808183855729) _gate_q_12, _gate_q_13;
  ry(3.7196034790047006) _gate_q_3;
  u2(0.5641988445396041, 2.940879669691249) _gate_q_16;
  cu3_5069814144(3.357624849976398, 5.707847994886492, 4.6076926529169215) _gate_q_11, _gate_q_4;
  cz _gate_q_5, _gate_q_8;
  csdg _gate_q_10, _gate_q_6;
  ecr _gate_q_2, _gate_q_9;
  tdg _gate_q_14;
  rzx_5069814816(5.695125326446511) _gate_q_1, _gate_q_15;
  r_5069814384(0.5838558107540603, 2.261721090769211) _gate_q_7;
  rzz_5069812080(6.048774609135253) _gate_q_12, _gate_q_0;
  t _gate_q_13;
  iswap _gate_q_11, _gate_q_4;
  rz(2.718644962608944) _gate_q_14;
  cz _gate_q_8, _gate_q_3;
  xx_minus_yy_5069812800(1.7575015130119134, 0.07013857289911068) _gate_q_16, _gate_q_0;
  cs _gate_q_6, _gate_q_15;
  z _gate_q_13;
  xx_plus_yy_5069814624(0.6667864191566155, 0.22705611937009082) _gate_q_9, _gate_q_10;
  cz _gate_q_2, _gate_q_5;
  ry(2.5307164247345506) _gate_q_1;
  y _gate_q_12;
  tdg _gate_q_7;
  ch _gate_q_9, _gate_q_12;
  xx_minus_yy_5069813664(1.7086036210751447, 4.121512770522991) _gate_q_8, _gate_q_14;
  dcx _gate_q_5, _gate_q_10;
  csdg _gate_q_11, _gate_q_1;
  rxx_5069814336(0.10269999783891824) _gate_q_4, _gate_q_3;
  ch _gate_q_6, _gate_q_13;
  cx _gate_q_2, _gate_q_0;
  crx(4.873829854987058) _gate_q_7, _gate_q_15;
  s _gate_q_16;
  crz(5.835909183764129) _gate_q_5, _gate_q_11;
  ry(4.459470693094652) _gate_q_1;
  ecr _gate_q_10, _gate_q_6;
  crz(1.9877813740230041) _gate_q_13, _gate_q_9;
  u2(1.3192480239541398, 1.3010784604743182) _gate_q_14;
  rzz_5072200592(2.3615353217540975) _gate_q_0, _gate_q_15;
  sxdg _gate_q_8;
  xx_plus_yy_5072197424(2.839183837611755, 1.9721732504379854) _gate_q_12, _gate_q_7;
  rzz_5072196656(5.324006946886915) _gate_q_2, _gate_q_16;
  h _gate_q_3;
  p(0.8149027107261303) _gate_q_4;
  ecr _gate_q_5, _gate_q_11;
  ch _gate_q_16, _gate_q_4;
  y _gate_q_0;
  crx(4.785689652977476) _gate_q_9, _gate_q_6;
  rxx_5072203712(3.870873508607945) _gate_q_12, _gate_q_13;
  sx _gate_q_3;
  cu3_5072200304(1.9733333899804004, 0.8685322048583277, 2.8553136321215007) _gate_q_15, _gate_q_2;
  cz _gate_q_8, _gate_q_14;
  cp(2.995315338175299) _gate_q_7, _gate_q_10;
  x _gate_q_1;
  s _gate_q_8;
  cz _gate_q_16, _gate_q_6;
  rzx_5072200688(2.244507285191699) _gate_q_5, _gate_q_12;
  r_5072195792(5.601224097002951, 4.704230809274713) _gate_q_11;
  cu1_5072199200(3.02166462106139) _gate_q_3, _gate_q_2;
  u3(1.208590874308658, 0.4263322819417031, 1.307957462219884) _gate_q_7;
  ecr _gate_q_13, _gate_q_10;
  sxdg _gate_q_9;
  U(0.6666044469219139, 2.7704183542532475, 4.496357914011648) _gate_q_14;
  u2(4.441973663500046, 1.2506313073225548) _gate_q_0;
  ry(5.620382981572518) _gate_q_15;
  U(2.6758784499183506, 5.170841753457771, 0.8839291237547912) _gate_q_4;
  r_5072195888(5.463895534594757, 1.281722611826548) _gate_q_1;
}