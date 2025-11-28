gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5074972320(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.204855104547795) _gate_q_0;
  u1(2.0162408076756813) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3001942740850398, 0, -2.204855104547795) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3001942740850398, 0.18861429687211365, 0) _gate_q_1;
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
gate r_5074965072(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.428522415483777, 1.809920690337273, -1.809920690337273) _gate_q_0;
}
gate ryy_5074970256(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.6522834013687735) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5074973232(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.4844460630987624) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3458331954285647) _gate_q_1;
  ry(-2.3458331954285647) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.4844460630987624) _gate_q_0;
}
gate rzz_5074960848(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.0089136165660877) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5074964928(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.174004269131672) _gate_q_0;
  u1(1.9459127973653367) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.1983650937884263, 0, -3.174004269131672) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.1983650937884263, 1.2280914717663352, 0) _gate_q_1;
}
gate rxx_5074965168(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.096352144740287) _gate_q_1;
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
gate xx_minus_yy_5074962912(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.17593674429995088) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.05185359926961277) _gate_q_0;
  ry(-0.05185359926961277) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.17593674429995088) _gate_q_1;
}
gate cu3_5074969584(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.345601468660099) _gate_q_0;
  u1(-1.9266908288711329) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7098376884154958, 0, -3.345601468660099) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7098376884154958, 5.272292297531232, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_minus_yy_5074972512(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.64940790196314) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.3462860533537695) _gate_q_0;
  ry(-2.3462860533537695) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.64940790196314) _gate_q_1;
}
gate r_5074961664(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.284720752861332, 3.5539231468560244, -3.5539231468560244) _gate_q_0;
}
gate rzz_5074961616(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.445421969056874) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5074965024(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6884305703144653) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074961328(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.5869174473445238, -1.3592084708252465, 1.3592084708252465) _gate_q_0;
}
gate r_5074965264(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.9849655277549805, -1.1861232348644193, 1.1861232348644193) _gate_q_0;
}
gate ryy_5074960992(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.865329524253015) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5074970832(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6928609693712593) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5074966704(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.116422575464174) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5074967088(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.726651210748792) _gate_q_1;
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
gate rzz_5074970736(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.8895776815267062) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074964688(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.518952281377137) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.3578884136369986) _gate_q_1;
  ry(-0.3578884136369986) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.518952281377137) _gate_q_0;
}
gate rxx_5074974192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.244056361291314) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074966128(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.499531261561302, 0.9630937094337617, -0.9630937094337617) _gate_q_0;
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
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  cs _gate_q_11, _gate_q_13;
  cp(1.4812600540118313) _gate_q_8, _gate_q_6;
  cry(0.8413251758641873) _gate_q_3, _gate_q_7;
  cu3_5074972320(2.6003885481700797, 0.18861429687211365, 4.221095912223476) _gate_q_1, _gate_q_15;
  csx _gate_q_10, _gate_q_14;
  p(2.8240281675885854) _gate_q_4;
  r_5074965072(4.428522415483777, 3.3807170171321697) _gate_q_16;
  ryy_5074970256(4.6522834013687735) _gate_q_9, _gate_q_12;
  crx(5.691928533876034) _gate_q_2, _gate_q_0;
  h _gate_q_5;
  s _gate_q_2;
  xx_plus_yy_5074973232(4.691666390857129, 3.4844460630987624) _gate_q_4, _gate_q_6;
  sx _gate_q_1;
  rzz_5074960848(3.0089136165660877) _gate_q_14, _gate_q_9;
  u3(0.5251848715246303, 5.360638261531524, 5.326519086532048) _gate_q_0;
  cp(5.498937449662305) _gate_q_13, _gate_q_11;
  sdg _gate_q_12;
  h _gate_q_3;
  cu3_5074964928(0.3967301875768526, 1.2280914717663352, 5.119917066497009) _gate_q_16, _gate_q_7;
  rxx_5074965168(6.096352144740287) _gate_q_10, _gate_q_15;
  crz(4.743693024333812) _gate_q_5, _gate_q_8;
  swap _gate_q_9, _gate_q_10;
  s _gate_q_1;
  s _gate_q_14;
  s _gate_q_15;
  iswap _gate_q_16, _gate_q_6;
  iswap _gate_q_11, _gate_q_7;
  sxdg _gate_q_13;
  xx_minus_yy_5074962912(0.10370719853922554, 0.17593674429995088) _gate_q_4, _gate_q_8;
  y _gate_q_2;
  cy _gate_q_0, _gate_q_5;
  cu3_5074969584(1.4196753768309915, 5.272292297531232, 1.418910639788966) _gate_q_12, _gate_q_3;
  cz _gate_q_15, _gate_q_7;
  dcx _gate_q_6, _gate_q_12;
  h _gate_q_14;
  xx_minus_yy_5074972512(4.692572106707539, 2.64940790196314) _gate_q_1, _gate_q_9;
  crz(6.1537188022103235) _gate_q_0, _gate_q_11;
  cp(2.4866746013287986) _gate_q_10, _gate_q_2;
  cz _gate_q_3, _gate_q_8;
  p(6.085777337814398) _gate_q_13;
  cy _gate_q_4, _gate_q_16;
  u2(1.094698033570545, 3.9476492397123013) _gate_q_5;
  sxdg _gate_q_4;
  cz _gate_q_9, _gate_q_6;
  rz(1.5866496971049202) _gate_q_12;
  r_5074961664(1.284720752861332, 5.124719473650921) _gate_q_7;
  sxdg _gate_q_2;
  t _gate_q_15;
  U(2.886491900876074, 5.373112509380519, 2.05420385590172) _gate_q_10;
  cry(1.6780504418351518) _gate_q_14, _gate_q_16;
  u1(1.1044983752934512) _gate_q_5;
  rzz_5074961616(4.445421969056874) _gate_q_8, _gate_q_11;
  cx _gate_q_0, _gate_q_3;
  iswap _gate_q_13, _gate_q_1;
  cs _gate_q_8, _gate_q_10;
  y _gate_q_3;
  iswap _gate_q_11, _gate_q_0;
  ryy_5074965024(3.6884305703144653) _gate_q_7, _gate_q_4;
  cry(3.7117432202848) _gate_q_5, _gate_q_15;
  x _gate_q_12;
  sx _gate_q_1;
  r_5074961328(1.5869174473445238, 0.21158785596965) _gate_q_16;
  t _gate_q_2;
  y _gate_q_13;
  iswap _gate_q_9, _gate_q_6;
  r_5074965264(2.9849655277549805, 0.3846730919304773) _gate_q_14;
  h _gate_q_16;
  cry(3.360275354092347) _gate_q_12, _gate_q_7;
  u3(4.102377375563893, 3.293585485667858, 5.540500509541535) _gate_q_10;
  z _gate_q_4;
  swap _gate_q_8, _gate_q_9;
  ryy_5074960992(4.865329524253015) _gate_q_5, _gate_q_0;
  iswap _gate_q_11, _gate_q_13;
  crx(4.724333129107648) _gate_q_6, _gate_q_3;
  rzz_5074970832(0.6928609693712593) _gate_q_15, _gate_q_2;
  t _gate_q_1;
  sx _gate_q_14;
  ch _gate_q_9, _gate_q_1;
  iswap _gate_q_15, _gate_q_4;
  ryy_5074966704(3.116422575464174) _gate_q_3, _gate_q_10;
  tdg _gate_q_0;
  rzx_5074967088(4.726651210748792) _gate_q_11, _gate_q_7;
  rz(0.4806136390879641) _gate_q_8;
  csdg _gate_q_5, _gate_q_14;
  cs _gate_q_12, _gate_q_6;
  cx _gate_q_13, _gate_q_16;
  s _gate_q_2;
  y _gate_q_11;
  cy _gate_q_6, _gate_q_12;
  sxdg _gate_q_9;
  csdg _gate_q_16, _gate_q_3;
  cry(5.154836571979899) _gate_q_14, _gate_q_2;
  cp(6.227156229186457) _gate_q_1, _gate_q_10;
  ch _gate_q_4, _gate_q_5;
  rzz_5074970736(1.8895776815267062) _gate_q_8, _gate_q_0;
  tdg _gate_q_13;
  cz _gate_q_15, _gate_q_7;
  cs _gate_q_3, _gate_q_4;
  xx_plus_yy_5074964688(0.7157768272739972, 1.518952281377137) _gate_q_8, _gate_q_7;
  t _gate_q_11;
  rxx_5074974192(6.244056361291314) _gate_q_6, _gate_q_13;
  r_5074966128(3.499531261561302, 2.5338900362286583) _gate_q_12;
  U(2.738544932655797, 0.8994467490395843, 1.3720050985190904) _gate_q_14;
  cry(4.251549905882783) _gate_q_16, _gate_q_5;
  ecr _gate_q_0, _gate_q_2;
  tdg _gate_q_1;
  tdg _gate_q_10;
  u1(4.410921671578947) _gate_q_9;
  u3(1.4788619305391624, 2.9851650924313367, 2.0632441221833933) _gate_q_15;
}
gate ryy_5074515392(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.399807919404969) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5074509536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7926453094629866) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5074508768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.714063350102597) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.07424603360270174) _gate_q_0;
  ry(-0.07424603360270174) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.714063350102597) _gate_q_1;
}
gate rxx_5074503440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.879786717262555) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5074515536(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.679915344529404) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5074516304(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7283380022714875) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5074503152(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3609524287442074) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5074510496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.915183055424423) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5074511264(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.5916505984949603) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9464640021154835) _gate_q_0;
  ry(-2.9464640021154835) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.5916505984949603) _gate_q_1;
}
gate cu1_5074503344(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.08531501215772407) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.08531501215772407) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.08531501215772407) _gate_q_1;
}
gate rxx_5074515584(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.707242206857665) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5074503056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.704245883501852) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4271075862895564) _gate_q_1;
  ry(-1.4271075862895564) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.704245883501852) _gate_q_0;
}
gate xx_plus_yy_5074512272(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.537372370210004) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8669824003062607) _gate_q_1;
  ry(-2.8669824003062607) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.537372370210004) _gate_q_0;
}
gate xx_plus_yy_5074508576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.35406918477794) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.090835817462231) _gate_q_1;
  ry(-2.090835817462231) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.35406918477794) _gate_q_0;
}
gate r_5074504496(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.4317363826646017, -0.3254980203520377, 0.3254980203520377) _gate_q_0;
}
gate ryy_5074506752(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9791544063458748) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5074514144(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.9055172760010451) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.654803221829248) _gate_q_0;
  ry(-2.654803221829248) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.9055172760010451) _gate_q_1;
}
gate cu1_5074505456(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.977891119417787) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.977891119417787) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.977891119417787) _gate_q_1;
}
gate ryy_5074502288(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.115336674692016) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5074508336(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.7393846596775346) _gate_q_0;
  u1(-0.8583040032551055) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5123116584562643, 0, -2.7393846596775346) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5123116584562643, 3.59768866293264, 0) _gate_q_1;
}
gate cu3_5074509344(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.697997679847467) _gate_q_0;
  u1(-0.13747972313342083) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2572680944083423, 0, -0.697997679847467) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2572680944083423, 0.8354774029808878, 0) _gate_q_1;
}
gate r_5074515152(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.5491431741321485, 3.679992106575641, -3.679992106575641) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  ry(4.63476510745894) _gate_q_3;
  cy _gate_q_10, _gate_q_4;
  sdg _gate_q_13;
  sdg _gate_q_7;
  tdg _gate_q_14;
  rx(3.0208913712227807) _gate_q_15;
  t _gate_q_9;
  cry(1.6991139668312034) _gate_q_11, _gate_q_1;
  U(3.1153564073083984, 4.8008449784238145, 3.9382333572702217) _gate_q_0;
  cs _gate_q_5, _gate_q_2;
  ch _gate_q_16, _gate_q_8;
  ryy_5074515392(5.399807919404969) _gate_q_12, _gate_q_6;
  rzx_5074509536(3.7926453094629866) _gate_q_4, _gate_q_16;
  xx_minus_yy_5074508768(0.14849206720540348, 3.714063350102597) _gate_q_8, _gate_q_13;
  csx _gate_q_1, _gate_q_2;
  s _gate_q_3;
  cs _gate_q_9, _gate_q_10;
  iswap _gate_q_0, _gate_q_6;
  rxx_5074503440(3.879786717262555) _gate_q_12, _gate_q_7;
  sxdg _gate_q_15;
  cz _gate_q_14, _gate_q_11;
  ry(5.286521202198853) _gate_q_5;
  rzz_5074515536(2.679915344529404) _gate_q_10, _gate_q_16;
  h _gate_q_4;
  iswap _gate_q_6, _gate_q_11;
  U(4.430056848698117, 2.736884981311588, 2.1675878954471064) _gate_q_8;
  u3(5.252311113945146, 3.541746140626964, 0.5313854218425086) _gate_q_0;
  sxdg _gate_q_1;
  cy _gate_q_14, _gate_q_7;
  x _gate_q_15;
  rzx_5074516304(0.7283380022714875) _gate_q_2, _gate_q_5;
  crx(1.1357427667416218) _gate_q_9, _gate_q_13;
  t _gate_q_3;
  ry(4.851676382156855) _gate_q_12;
  cp(1.2690028680440626) _gate_q_4, _gate_q_7;
  x _gate_q_14;
  ryy_5074503152(2.3609524287442074) _gate_q_8, _gate_q_13;
  p(0.24655781657864806) _gate_q_15;
  rzx_5074510496(3.915183055424423) _gate_q_1, _gate_q_3;
  swap _gate_q_6, _gate_q_16;
  h _gate_q_0;
  s _gate_q_10;
  sdg _gate_q_11;
  u1(3.2582459334078533) _gate_q_5;
  sdg _gate_q_12;
  cp(0.35657184573921513) _gate_q_9, _gate_q_2;
  cy _gate_q_2, _gate_q_13;
  xx_minus_yy_5074511264(5.892928004230967, 1.5916505984949603) _gate_q_14, _gate_q_3;
  sxdg _gate_q_4;
  cu1_5074503344(0.17063002431544813) _gate_q_10, _gate_q_11;
  ecr _gate_q_0, _gate_q_15;
  crz(5.525489259498299) _gate_q_5, _gate_q_1;
  cx _gate_q_6, _gate_q_8;
  cu(2.3577001321364, 6.264999448379617, 0.6179571647949292, 0.3599859756301519) _gate_q_7, _gate_q_16;
  rxx_5074515584(0.707242206857665) _gate_q_12, _gate_q_9;
  U(5.0971210758831, 4.622596769217617, 3.453785623266106) _gate_q_5;
  xx_plus_yy_5074503056(2.8542151725791127, 2.704245883501852) _gate_q_2, _gate_q_16;
  csx _gate_q_8, _gate_q_10;
  xx_plus_yy_5074512272(5.7339648006125215, 5.537372370210004) _gate_q_3, _gate_q_4;
  h _gate_q_12;
  xx_plus_yy_5074508576(4.181671634924462, 5.35406918477794) _gate_q_15, _gate_q_1;
  r_5074504496(3.4317363826646017, 1.2452983064428589) _gate_q_7;
  sx _gate_q_0;
  ecr _gate_q_6, _gate_q_14;
  cz _gate_q_9, _gate_q_13;
  s _gate_q_11;
  sx _gate_q_14;
  swap _gate_q_1, _gate_q_6;
  cp(5.283773321678596) _gate_q_5, _gate_q_4;
  cp(5.336979815687525) _gate_q_16, _gate_q_7;
  csx _gate_q_15, _gate_q_11;
  cry(0.8277061593457657) _gate_q_8, _gate_q_0;
  crz(3.7776555063162336) _gate_q_3, _gate_q_10;
  rz(2.7892101447012814) _gate_q_13;
  dcx _gate_q_12, _gate_q_9;
  id _gate_q_2;
  crz(4.203072240397631) _gate_q_1, _gate_q_16;
  ch _gate_q_6, _gate_q_8;
  ryy_5074506752(0.9791544063458748) _gate_q_5, _gate_q_7;
  cy _gate_q_11, _gate_q_10;
  cry(3.3609325013061953) _gate_q_3, _gate_q_0;
  s _gate_q_2;
  cry(3.8652956340433824) _gate_q_15, _gate_q_13;
  sx _gate_q_9;
  xx_minus_yy_5074514144(5.309606443658496, 0.9055172760010451) _gate_q_12, _gate_q_4;
  x _gate_q_14;
  rz(3.1724765269171122) _gate_q_9;
  id _gate_q_0;
  cry(5.977080293440617) _gate_q_16, _gate_q_7;
  x _gate_q_5;
  rz(3.177541485289411) _gate_q_8;
  cu1_5074505456(5.955782238835574) _gate_q_15, _gate_q_6;
  ryy_5074502288(4.115336674692016) _gate_q_3, _gate_q_10;
  y _gate_q_12;
  cu(0.5375185482637412, 0.9061796242356459, 5.146920893489428, 1.2516154982276024) _gate_q_1, _gate_q_13;
  cu3_5074508336(1.0246233169125285, 3.59768866293264, 1.8810806564224292) _gate_q_14, _gate_q_2;
  rx(2.22618970457799) _gate_q_4;
  u1(5.69024505053596) _gate_q_11;
  ecr _gate_q_2, _gate_q_16;
  cu3_5074509344(2.5145361888166846, 0.8354774029808878, 0.5605179567140461) _gate_q_14, _gate_q_0;
  sxdg _gate_q_9;
  cz _gate_q_7, _gate_q_10;
  u3(2.4377325252105972, 1.8366961955598882, 0.710561286773798) _gate_q_11;
  ecr _gate_q_15, _gate_q_12;
  r_5074515152(0.5491431741321485, 5.250788433370538) _gate_q_4;
  swap _gate_q_6, _gate_q_1;
  U(2.0349013566617065, 5.847826138693429, 0.6364605282912379) _gate_q_13;
  ecr _gate_q_5, _gate_q_3;
  U(2.2216463740223222, 1.339022986403511, 1.5722299462005511) _gate_q_8;
}