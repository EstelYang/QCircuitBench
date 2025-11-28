gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rxx_5107325248(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.767717088829718) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5107328464(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.921923927760914) _gate_q_1;
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
gate xx_minus_yy_5107332304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.059193056280368) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6739015509015199) _gate_q_0;
  ry(-0.6739015509015199) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.059193056280368) _gate_q_1;
}
gate xx_minus_yy_5107335136(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.22929260490693) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5051641474869624) _gate_q_0;
  ry(-2.5051641474869624) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.22929260490693) _gate_q_1;
}
gate r_5107323664(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.735619703717498, 0.9603425631732474, -0.9603425631732474) _gate_q_0;
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
gate xx_plus_yy_5107325104(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6957333661202765) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.14217470782875807) _gate_q_1;
  ry(-0.14217470782875807) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6957333661202765) _gate_q_0;
}
gate cu3_5107334848(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.155424017596595) _gate_q_0;
  u1(-0.2726276652107713) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4956578938543792, 0, -2.155424017596595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4956578938543792, 2.428051682807366, 0) _gate_q_1;
}
gate ryy_5107328512(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.49775574448256993) _gate_q_1;
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
gate xx_minus_yy_5107326256(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.7955940124099763) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0263888727039534) _gate_q_0;
  ry(-2.0263888727039534) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.7955940124099763) _gate_q_1;
}
gate xx_minus_yy_5107334704(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.6442588557872364) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8235041780775403) _gate_q_0;
  ry(-1.8235041780775403) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.6442588557872364) _gate_q_1;
}
gate ryy_5107319776(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.550525439833299) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5107320544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.3941089349484836) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5173772252781963) _gate_q_0;
  ry(-2.5173772252781963) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.3941089349484836) _gate_q_1;
}
gate rzx_5107320640(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.726285778909164) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5107320208(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4876588427193234) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4876588427193234) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4876588427193234) _gate_q_1;
}
gate cu1_5107320304(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.6164021194420832) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.6164021194420832) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.6164021194420832) _gate_q_1;
}
gate cu3_5107321456(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.2312339750556855) _gate_q_0;
  u1(-0.3685954644987248) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5383868563765215, 0, -4.2312339750556855) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5383868563765215, 4.59982943955441, 0) _gate_q_1;
}
gate rxx_5107321168(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.330776833397704) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5107321072(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.5476976384928642, 2.341054309992986, -2.341054309992986) _gate_q_0;
}
gate rzx_5107322656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0065818184070823) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107320064(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.719863229987519) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107320832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8524409104332895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5107322464(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4316574236422133) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4316574236422133) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4316574236422133) _gate_q_1;
}
gate rzz_5107321120(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.9417086918111726) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  t _gate_q_8;
  rx(5.800241586022447) _gate_q_6;
  u1(3.067916562704662) _gate_q_5;
  iswap _gate_q_0, _gate_q_7;
  iswap _gate_q_9, _gate_q_3;
  y _gate_q_1;
  rxx_5107325248(5.767717088829718) _gate_q_4, _gate_q_2;
  id _gate_q_8;
  rzx_5107328464(5.921923927760914) _gate_q_6, _gate_q_7;
  y _gate_q_4;
  z _gate_q_1;
  sdg _gate_q_0;
  sdg _gate_q_3;
  cs _gate_q_9, _gate_q_2;
  u2(1.6661191770441894, 2.7583602772582143) _gate_q_5;
  xx_minus_yy_5107332304(1.3478031018030399, 6.059193056280368) _gate_q_9, _gate_q_8;
  tdg _gate_q_4;
  xx_minus_yy_5107335136(5.010328294973925, 5.22929260490693) _gate_q_6, _gate_q_0;
  cy _gate_q_2, _gate_q_1;
  swap _gate_q_5, _gate_q_3;
  r_5107323664(4.735619703717498, 2.531138889968144) _gate_q_7;
  ecr _gate_q_1, _gate_q_3;
  u3(6.160903822587467, 2.3275885445341418, 1.232832065864721) _gate_q_9;
  ecr _gate_q_7, _gate_q_5;
  xx_plus_yy_5107325104(0.28434941565751615, 0.6957333661202765) _gate_q_0, _gate_q_2;
  cu3_5107334848(2.9913157877087584, 2.428051682807366, 1.8827963523858235) _gate_q_6, _gate_q_8;
  s _gate_q_4;
  rx(2.158933533949417) _gate_q_3;
  ryy_5107328512(0.49775574448256993) _gate_q_2, _gate_q_1;
  p(2.290021775215109) _gate_q_8;
  csx _gate_q_9, _gate_q_0;
  t _gate_q_4;
  xx_minus_yy_5107326256(4.052777745407907, 0.7955940124099763) _gate_q_7, _gate_q_5;
  u2(3.6727321975330978, 0.8336363072295676) _gate_q_6;
  csx _gate_q_5, _gate_q_9;
  xx_minus_yy_5107334704(3.6470083561550806, 2.6442588557872364) _gate_q_8, _gate_q_0;
  ryy_5107319776(4.550525439833299) _gate_q_4, _gate_q_1;
  xx_minus_yy_5107320544(5.034754450556393, 1.3941089349484836) _gate_q_3, _gate_q_7;
  rzx_5107320640(4.726285778909164) _gate_q_6, _gate_q_2;
  cu1_5107320208(4.975317685438647) _gate_q_1, _gate_q_7;
  s _gate_q_8;
  crz(5.185418132156159) _gate_q_0, _gate_q_2;
  z _gate_q_3;
  z _gate_q_9;
  cu1_5107320304(5.2328042388841665) _gate_q_5, _gate_q_4;
  sdg _gate_q_6;
  cry(1.3591319738583743) _gate_q_5, _gate_q_4;
  ch _gate_q_0, _gate_q_8;
  cu3_5107321456(3.076773712753043, 4.59982943955441, 3.8626385105569607) _gate_q_1, _gate_q_9;
  rxx_5107321168(1.330776833397704) _gate_q_2, _gate_q_6;
  ch _gate_q_3, _gate_q_7;
  r_5107321072(2.5476976384928642, 3.9118506367878827) _gate_q_4;
  x _gate_q_9;
  rzx_5107322656(3.0065818184070823) _gate_q_7, _gate_q_6;
  sxdg _gate_q_2;
  cy _gate_q_0, _gate_q_1;
  rzx_5107320064(4.719863229987519) _gate_q_3, _gate_q_5;
  p(2.615084996010547) _gate_q_8;
  csx _gate_q_7, _gate_q_3;
  rzx_5107320832(0.8524409104332895) _gate_q_9, _gate_q_4;
  cu1_5107322464(4.8633148472844265) _gate_q_5, _gate_q_8;
  rzz_5107321120(2.9417086918111726) _gate_q_0, _gate_q_2;
  dcx _gate_q_1, _gate_q_6;
}
gate r_5107325632(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.0308517752633666, 3.541958362933369, -3.541958362933369) _gate_q_0;
}
gate r_5107326208(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.45659164424940657, 0.7507037025681047, -0.7507037025681047) _gate_q_0;
}
gate rxx_5107326592(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.896319228555384) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5107324960(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.252836422592515) _gate_q_0;
  u1(2.6505859164449044) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.23435903428713356, 0, -3.252836422592515) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.23435903428713356, 0.602250506147611, 0) _gate_q_1;
}
gate xx_plus_yy_5107329952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.8116851501898776) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8854001571937735) _gate_q_1;
  ry(-1.8854001571937735) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.8116851501898776) _gate_q_0;
}
gate cu1_5107327696(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0036196829386648) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0036196829386648) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0036196829386648) _gate_q_1;
}
gate cu1_5107330528(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.45955486707827) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.45955486707827) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.45955486707827) _gate_q_1;
}
gate rzz_5107324672(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.301320626657714) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5107329040(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8160588505896665) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8160588505896665) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8160588505896665) _gate_q_1;
}
gate ryy_5107328896(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.945686179096492) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5107329280(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.0077714905519826) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5107329760(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.7302775918519453) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.7302775918519453) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.7302775918519453) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  crz(2.8469968538278163) _gate_q_2, _gate_q_0;
  cu(5.5035574382678485, 2.190172370050552, 0.5153262687914174, 3.1419216309369014) _gate_q_1, _gate_q_8;
  r_5107325632(2.0308517752633666, 5.112754689728265) _gate_q_6;
  dcx _gate_q_4, _gate_q_3;
  r_5107326208(0.45659164424940657, 2.3215000293630013) _gate_q_7;
  dcx _gate_q_5, _gate_q_9;
  u2(3.136128648725778, 4.873336652002044) _gate_q_3;
  sx _gate_q_8;
  z _gate_q_2;
  cz _gate_q_0, _gate_q_9;
  tdg _gate_q_7;
  rx(0.22402504426928327) _gate_q_5;
  y _gate_q_1;
  ch _gate_q_6, _gate_q_4;
  crx(1.508668733045467) _gate_q_3, _gate_q_6;
  sdg _gate_q_5;
  rxx_5107326592(0.896319228555384) _gate_q_9, _gate_q_4;
  cu3_5107324960(0.4687180685742671, 0.602250506147611, 5.903422339037419) _gate_q_7, _gate_q_0;
  cu(4.18298925137868, 3.0674736715560997, 1.8346578446866832, 0.6479547302893134) _gate_q_1, _gate_q_8;
  u2(1.761808094745951, 5.166515663325119) _gate_q_2;
  ch _gate_q_6, _gate_q_0;
  rx(6.203885369333596) _gate_q_7;
  p(2.703643413814015) _gate_q_8;
  crx(2.956314561521655) _gate_q_9, _gate_q_2;
  xx_plus_yy_5107329952(3.770800314387547, 3.8116851501898776) _gate_q_1, _gate_q_5;
  ecr _gate_q_4, _gate_q_3;
  iswap _gate_q_5, _gate_q_3;
  iswap _gate_q_9, _gate_q_8;
  cu1_5107327696(2.0072393658773295) _gate_q_4, _gate_q_7;
  z _gate_q_2;
  h _gate_q_1;
  rz(0.39485442960658) _gate_q_6;
  u3(5.938582688204324, 4.226723653889371, 0.8058004469040871) _gate_q_0;
  cx _gate_q_4, _gate_q_9;
  rx(2.8265365469802677) _gate_q_3;
  u2(5.526807251896106, 1.1834231054757907) _gate_q_5;
  cx _gate_q_8, _gate_q_6;
  u3(3.984976604330569, 5.996930353306286, 3.3389053849182573) _gate_q_0;
  cu1_5107330528(0.91910973415654) _gate_q_7, _gate_q_2;
  u2(2.8509728200511693, 2.477998296735653) _gate_q_1;
  sdg _gate_q_1;
  csx _gate_q_9, _gate_q_5;
  dcx _gate_q_4, _gate_q_7;
  rzz_5107324672(4.301320626657714) _gate_q_6, _gate_q_8;
  rz(2.140616552564371) _gate_q_3;
  rx(2.0063662991780506) _gate_q_2;
  U(1.2405871897142735, 4.736275043968259, 0.23627291939511919) _gate_q_0;
  csx _gate_q_5, _gate_q_9;
  cry(1.3318726663693778) _gate_q_0, _gate_q_1;
  ch _gate_q_8, _gate_q_3;
  cu1_5107329040(1.632117701179333) _gate_q_2, _gate_q_7;
  t _gate_q_6;
  rz(3.1110150133758885) _gate_q_4;
  crx(0.36043216653163446) _gate_q_3, _gate_q_7;
  ryy_5107328896(4.945686179096492) _gate_q_0, _gate_q_2;
  u3(3.6694767959321988, 4.3748610142145266, 2.4646713186269675) _gate_q_8;
  id _gate_q_6;
  p(5.267706663951993) _gate_q_4;
  rz(5.113668479276735) _gate_q_5;
  s _gate_q_9;
  id _gate_q_1;
  rzz_5107329280(2.0077714905519826) _gate_q_6, _gate_q_3;
  iswap _gate_q_1, _gate_q_8;
  cu1_5107329760(5.460555183703891) _gate_q_7, _gate_q_2;
  cp(4.784851297368042) _gate_q_9, _gate_q_0;
  ch _gate_q_4, _gate_q_5;
}