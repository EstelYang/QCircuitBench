gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072963488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.747073718919996) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.0903523429512414) _gate_q_1;
  ry(-3.0903523429512414) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.747073718919996) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate cu1_5072967136(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3362973278396004) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3362973278396004) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3362973278396004) _gate_q_1;
}
gate cu1_5072967088(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2812029399324616) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2812029399324616) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2812029399324616) _gate_q_1;
}
gate xx_plus_yy_5072975104(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.8413367899614718) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4539383466443005) _gate_q_1;
  ry(-1.4539383466443005) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.8413367899614718) _gate_q_0;
}
gate r_5072963536(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.555611918050842, -1.3595960814352326, 1.3595960814352326) _gate_q_0;
}
gate xx_minus_yy_5072977216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.6293377643191873) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3109386443109452) _gate_q_0;
  ry(-1.3109386443109452) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.6293377643191873) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5072977312(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.52837914143234) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072972032(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.030039708071189) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072974960(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5300371602698043) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5072971648(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.7388550719330356) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.7388550719330356) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.7388550719330356) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate ryy_5072974240(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.1336272109762681) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5072967232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5461479840361276) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5072962912(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6961289800977806) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5072965120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.437923735862443) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5072962432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.073559668132408) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.036490020210049) _gate_q_0;
  ry(-3.036490020210049) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.073559668132408) _gate_q_1;
}
gate xx_minus_yy_5072972512(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.661305133849248) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3305166730647099) _gate_q_0;
  ry(-0.3305166730647099) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.661305133849248) _gate_q_1;
}
gate rzz_5072971072(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.7424656612472575) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5072973712(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.2253138554350284) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5072974672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.749198906534466) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5072966176(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.154667860468335) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5072976112(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.816287609528948) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4091956748113894) _gate_q_1;
  ry(-2.4091956748113894) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.816287609528948) _gate_q_0;
}
gate cu1_5072970352(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.0858985625834503) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.0858985625834503) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.0858985625834503) _gate_q_1;
}
gate xx_minus_yy_5072964400(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.8486401766196287) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3808122593560116) _gate_q_0;
  ry(-0.3808122593560116) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.8486401766196287) _gate_q_1;
}
gate xx_minus_yy_5072968528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.2579306609991766) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6385803082282582) _gate_q_0;
  ry(-1.6385803082282582) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.2579306609991766) _gate_q_1;
}
gate cu1_5072967568(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.055065276429852) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.055065276429852) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.055065276429852) _gate_q_1;
}
gate xx_plus_yy_5072962720(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.007332836847793) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.200711775389226) _gate_q_1;
  ry(-1.200711775389226) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.007332836847793) _gate_q_0;
}
gate r_5072968096(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.1213623219378985, 1.725118350238009, -1.725118350238009) _gate_q_0;
}
gate cu3_5072963728(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.6424465197029778) _gate_q_0;
  u1(-0.12839821732033524) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.29875755380461955, 0, -0.6424465197029778) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.29875755380461955, 0.7708447370233131, 0) _gate_q_1;
}
gate cu1_5072967808(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.693989486142261) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.693989486142261) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.693989486142261) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  cp(2.525161026458655) _gate_q_9, _gate_q_18;
  xx_plus_yy_5072963488(6.180704685902483, 3.747073718919996) _gate_q_6, _gate_q_0;
  tdg _gate_q_12;
  csdg _gate_q_2, _gate_q_7;
  ch _gate_q_15, _gate_q_11;
  ecr _gate_q_17, _gate_q_13;
  dcx _gate_q_3, _gate_q_4;
  csx _gate_q_8, _gate_q_1;
  cu1_5072967136(2.672594655679201) _gate_q_10, _gate_q_5;
  cu1_5072967088(2.562405879864923) _gate_q_14, _gate_q_16;
  u2(3.8450883165865104, 5.953357387488935) _gate_q_19;
  sx _gate_q_15;
  xx_plus_yy_5072975104(2.907876693288601, 0.8413367899614718) _gate_q_13, _gate_q_19;
  sxdg _gate_q_1;
  sxdg _gate_q_18;
  rz(0.6136842519317889) _gate_q_0;
  sx _gate_q_3;
  cu(2.142622062386647, 4.307114049487326, 4.819059557192461, 5.809918138501995) _gate_q_6, _gate_q_11;
  tdg _gate_q_2;
  x _gate_q_10;
  U(3.919926049237049, 5.8652995404983574, 2.7713347072934718) _gate_q_7;
  crz(3.7684749761310954) _gate_q_8, _gate_q_9;
  r_5072963536(2.555611918050842, 0.211200245359664) _gate_q_5;
  xx_minus_yy_5072977216(2.6218772886218904, 0.6293377643191873) _gate_q_14, _gate_q_12;
  iswap _gate_q_17, _gate_q_4;
  y _gate_q_16;
  p(4.295554617932531) _gate_q_2;
  cp(4.3356600802194105) _gate_q_7, _gate_q_10;
  cx _gate_q_6, _gate_q_8;
  sxdg _gate_q_3;
  cz _gate_q_1, _gate_q_9;
  ch _gate_q_15, _gate_q_0;
  iswap _gate_q_19, _gate_q_16;
  ryy_5072977312(1.52837914143234) _gate_q_13, _gate_q_12;
  crz(4.355885500647177) _gate_q_4, _gate_q_14;
  p(0.7252905567542426) _gate_q_5;
  csx _gate_q_18, _gate_q_11;
  h _gate_q_17;
  sdg _gate_q_16;
  y _gate_q_8;
  u1(4.452918150102101) _gate_q_7;
  p(2.7289433571223545) _gate_q_18;
  sxdg _gate_q_17;
  iswap _gate_q_1, _gate_q_15;
  x _gate_q_4;
  cu(2.5662546636265837, 4.957857103630962, 5.607093078700727, 1.023736591612261) _gate_q_12, _gate_q_5;
  cu(4.710484368888525, 0.698215433972282, 0.3273841630231252, 3.1649781021146826) _gate_q_3, _gate_q_0;
  cx _gate_q_6, _gate_q_2;
  sdg _gate_q_14;
  dcx _gate_q_9, _gate_q_11;
  ryy_5072972032(6.030039708071189) _gate_q_19, _gate_q_13;
  x _gate_q_10;
  ryy_5072974960(0.5300371602698043) _gate_q_8, _gate_q_15;
  cy _gate_q_16, _gate_q_5;
  cu1_5072971648(5.477710143866071) _gate_q_19, _gate_q_17;
  sx _gate_q_0;
  cs _gate_q_14, _gate_q_10;
  u2(1.3317686851414459, 3.1294828718770216) _gate_q_6;
  ryy_5072974240(0.1336272109762681) _gate_q_18, _gate_q_1;
  csx _gate_q_3, _gate_q_11;
  rxx_5072967232(3.5461479840361276) _gate_q_12, _gate_q_9;
  y _gate_q_13;
  ryy_5072962912(1.6961289800977806) _gate_q_4, _gate_q_2;
  rx(4.953516515124802) _gate_q_7;
  cp(3.7377825476892705) _gate_q_14, _gate_q_13;
  sdg _gate_q_19;
  t _gate_q_0;
  swap _gate_q_10, _gate_q_15;
  U(1.960992056581777, 5.5882185189394775, 5.979407537035887) _gate_q_6;
  iswap _gate_q_9, _gate_q_5;
  sx _gate_q_11;
  rxx_5072965120(5.437923735862443) _gate_q_2, _gate_q_3;
  u1(1.1195601770183814) _gate_q_1;
  ecr _gate_q_7, _gate_q_18;
  xx_minus_yy_5072962432(6.072980040420098, 5.073559668132408) _gate_q_12, _gate_q_16;
  xx_minus_yy_5072972512(0.6610333461294198, 5.661305133849248) _gate_q_4, _gate_q_8;
  u3(1.7518281206105855, 5.327860098171929, 5.327818402188808) _gate_q_17;
  cz _gate_q_5, _gate_q_16;
  csdg _gate_q_14, _gate_q_0;
  rzz_5072971072(2.7424656612472575) _gate_q_9, _gate_q_1;
  cz _gate_q_15, _gate_q_11;
  swap _gate_q_19, _gate_q_3;
  ryy_5072973712(0.2253138554350284) _gate_q_12, _gate_q_17;
  cx _gate_q_10, _gate_q_8;
  rzx_5072974672(0.749198906534466) _gate_q_4, _gate_q_7;
  cy _gate_q_6, _gate_q_13;
  u1(6.146143412743938) _gate_q_2;
  sdg _gate_q_18;
  rzx_5072966176(3.154667860468335) _gate_q_2, _gate_q_11;
  ecr _gate_q_19, _gate_q_18;
  cx _gate_q_6, _gate_q_16;
  y _gate_q_5;
  xx_plus_yy_5072976112(4.818391349622779, 2.816287609528948) _gate_q_4, _gate_q_1;
  sxdg _gate_q_13;
  tdg _gate_q_12;
  csx _gate_q_17, _gate_q_15;
  dcx _gate_q_14, _gate_q_8;
  cu1_5072970352(6.171797125166901) _gate_q_9, _gate_q_7;
  xx_minus_yy_5072964400(0.7616245187120232, 0.8486401766196287) _gate_q_3, _gate_q_0;
  t _gate_q_10;
  dcx _gate_q_5, _gate_q_10;
  cp(2.8877225381432643) _gate_q_13, _gate_q_0;
  ry(2.0851849017841206) _gate_q_3;
  cp(0.31490989924641016) _gate_q_19, _gate_q_6;
  crx(5.74261961735083) _gate_q_1, _gate_q_11;
  u3(4.652173727685748, 1.7774133967264012, 5.897189349710409) _gate_q_8;
  xx_minus_yy_5072968528(3.2771606164565164, 0.2579306609991766) _gate_q_16, _gate_q_17;
  cu1_5072967568(6.110130552859704) _gate_q_4, _gate_q_2;
  tdg _gate_q_9;
  ch _gate_q_18, _gate_q_15;
  x _gate_q_14;
  p(0.5372903340674576) _gate_q_7;
  s _gate_q_12;
  cry(4.207586067093572) _gate_q_7, _gate_q_8;
  U(3.0301890614448235, 3.954146666264492, 0.5258982515174665) _gate_q_1;
  csx _gate_q_4, _gate_q_11;
  sdg _gate_q_19;
  xx_plus_yy_5072962720(2.401423550778452, 6.007332836847793) _gate_q_10, _gate_q_5;
  cp(5.1091814074439075) _gate_q_14, _gate_q_6;
  r_5072968096(2.1213623219378985, 3.2959146770329055) _gate_q_17;
  cu3_5072963728(0.5975151076092391, 0.7708447370233131, 0.5140483023826427) _gate_q_0, _gate_q_12;
  crx(4.62429379480005) _gate_q_2, _gate_q_13;
  s _gate_q_18;
  ry(6.200762002427891) _gate_q_16;
  cu1_5072967808(5.387978972284522) _gate_q_9, _gate_q_3;
  ry(5.4847323278068965) _gate_q_15;
}
gate r_5072974816(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.5463987674933364, 1.1576669037902696, -1.1576669037902696) _gate_q_0;
}
gate cu1_5072969200(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.20843579301593568) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.20843579301593568) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.20843579301593568) _gate_q_1;
}
gate rzz_5072964976(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.9900970869445915) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5072975056(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.137627144700249) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5072968192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.044281059585419) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072973520(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.7172959828661165) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.705855041261216) _gate_q_1;
  ry(-2.705855041261216) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.7172959828661165) _gate_q_0;
}
gate cu1_5072961904(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.7359408674713452) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.7359408674713452) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.7359408674713452) _gate_q_1;
}
gate cu1_5072967040(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3409222661085904) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3409222661085904) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3409222661085904) _gate_q_1;
}
gate ryy_5072964352(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.704367567143636) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5072963296(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.688009166009465) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5072971264(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.821547874368939) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.41403757200171193) _gate_q_0;
  ry(-0.41403757200171193) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.821547874368939) _gate_q_1;
}
gate cu1_5072975008(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.028121005538974) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.028121005538974) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.028121005538974) _gate_q_1;
}
gate rzz_5072972752(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.5527152620719638) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5072971024(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.19327538762982) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9414028761169853) _gate_q_1;
  ry(-1.9414028761169853) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.19327538762982) _gate_q_0;
}
gate rzx_5072976016(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.745548336265055) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072964304(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.6128575693818092) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5073996736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8717056881672943) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5074000240(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.4620371495977045) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5073997456(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.641320697596235) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5892273718631023) _gate_q_1;
  ry(-0.5892273718631023) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.641320697596235) _gate_q_0;
}
gate cu1_5074001344(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4759063765975005) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4759063765975005) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4759063765975005) _gate_q_1;
}
gate cu3_5073995152(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.991548794198122) _gate_q_0;
  u1(-1.8631979179597908) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.140438509314477, 0, -2.991548794198122) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.140438509314477, 4.854746712157913, 0) _gate_q_1;
}
gate cu3_5074007296(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.421082681314012) _gate_q_0;
  u1(1.1375529032105436) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1953312160146594, 0, -4.421082681314012) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1953312160146594, 3.2835297781034685, 0) _gate_q_1;
}
gate xx_minus_yy_5073997168(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.313682755450447) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2728888752687182) _gate_q_0;
  ry(-1.2728888752687182) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.313682755450447) _gate_q_1;
}
gate cu3_5074009696(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.804890022180044) _gate_q_0;
  u1(-0.38275857928420365) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.10838315897029825, 0, -5.804890022180044) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.10838315897029825, 6.1876486014642476, 0) _gate_q_1;
}
gate ryy_5073995104(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.1812686943541255) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074005808(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6214856677468676, 3.497479313271989, -3.497479313271989) _gate_q_0;
}
gate r_5074000384(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.180571240821212, 1.7138785757010382, -1.7138785757010382) _gate_q_0;
}
gate xx_plus_yy_5074002448(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.340182127659379) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.075101752506716) _gate_q_1;
  ry(-2.075101752506716) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.340182127659379) _gate_q_0;
}
gate cu3_5073998608(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.1809023897886224) _gate_q_0;
  u1(-2.4330989158899152) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.253843636095798, 0, -3.1809023897886224) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.253843636095798, 5.614001305678538, 0) _gate_q_1;
}
gate rzx_5073998368(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.635135676412499) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5074001056(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.515676096843041) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5073994000(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.5020798012603858) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7838063672452527) _gate_q_1;
  ry(-0.7838063672452527) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.5020798012603858) _gate_q_0;
}
gate xx_minus_yy_5073995200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.126600248202843) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8965269519355592) _gate_q_0;
  ry(-0.8965269519355592) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.126600248202843) _gate_q_1;
}
gate rzx_5073996688(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.240591076778322) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5073995344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.016992573012081) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  r_5072974816(2.5463987674933364, 2.728463230585166) _gate_q_11;
  h _gate_q_3;
  cp(2.1556386180961526) _gate_q_17, _gate_q_13;
  id _gate_q_16;
  ecr _gate_q_15, _gate_q_14;
  s _gate_q_0;
  swap _gate_q_7, _gate_q_10;
  cy _gate_q_4, _gate_q_19;
  cu1_5072969200(0.41687158603187136) _gate_q_8, _gate_q_5;
  rzz_5072964976(3.9900970869445915) _gate_q_6, _gate_q_18;
  y _gate_q_1;
  rzz_5072975056(5.137627144700249) _gate_q_9, _gate_q_12;
  s _gate_q_2;
  t _gate_q_13;
  rxx_5072968192(6.044281059585419) _gate_q_9, _gate_q_2;
  xx_plus_yy_5072973520(5.411710082522432, 5.7172959828661165) _gate_q_17, _gate_q_7;
  ry(4.746187166496822) _gate_q_18;
  h _gate_q_14;
  csdg _gate_q_12, _gate_q_1;
  s _gate_q_8;
  u1(1.4601696359816623) _gate_q_3;
  sdg _gate_q_0;
  cu1_5072961904(5.4718817349426905) _gate_q_10, _gate_q_11;
  crx(2.911827054137091) _gate_q_5, _gate_q_16;
  cu1_5072967040(2.681844532217181) _gate_q_4, _gate_q_19;
  ryy_5072964352(4.704367567143636) _gate_q_6, _gate_q_15;
  rzz_5072963296(5.688009166009465) _gate_q_2, _gate_q_15;
  iswap _gate_q_14, _gate_q_3;
  swap _gate_q_19, _gate_q_16;
  cx _gate_q_4, _gate_q_13;
  U(1.3476444764847393, 5.630209205624891, 1.8024096194870183) _gate_q_17;
  u2(4.974038139694426, 0.14493103795899132) _gate_q_8;
  iswap _gate_q_0, _gate_q_1;
  ecr _gate_q_7, _gate_q_6;
  sdg _gate_q_12;
  sxdg _gate_q_18;
  swap _gate_q_10, _gate_q_5;
  s _gate_q_11;
  id _gate_q_9;
  cp(1.4543618658299329) _gate_q_0, _gate_q_3;
  id _gate_q_15;
  sxdg _gate_q_16;
  U(5.2147478151810125, 2.453771799592841, 0.8915251223980446) _gate_q_4;
  csx _gate_q_8, _gate_q_6;
  sdg _gate_q_10;
  id _gate_q_18;
  u3(5.298449860027633, 1.0608747160755398, 5.090238734087994) _gate_q_19;
  xx_minus_yy_5072971264(0.8280751440034239, 4.821547874368939) _gate_q_12, _gate_q_9;
  cu1_5072975008(4.056242011077948) _gate_q_5, _gate_q_2;
  z _gate_q_11;
  u3(5.759764897421424, 3.922727451543338, 3.4794639655912794) _gate_q_7;
  rzz_5072972752(2.5527152620719638) _gate_q_14, _gate_q_13;
  cu(6.196128379958353, 1.8867051245280997, 3.854651189925194, 4.977594246536122) _gate_q_1, _gate_q_17;
  xx_plus_yy_5072971024(3.8828057522339705, 3.19327538762982) _gate_q_10, _gate_q_6;
  cp(4.889533853067958) _gate_q_0, _gate_q_7;
  rzx_5072976016(3.745548336265055) _gate_q_3, _gate_q_12;
  cs _gate_q_2, _gate_q_4;
  p(4.1167458207946535) _gate_q_19;
  csdg _gate_q_17, _gate_q_11;
  u3(3.8999960007231356, 4.036636829528323, 3.3657593355536197) _gate_q_18;
  rzz_5072964304(1.6128575693818092) _gate_q_8, _gate_q_13;
  t _gate_q_5;
  rz(0.5349592650234517) _gate_q_9;
  p(4.6743081961599575) _gate_q_14;
  rxx_5073996736(0.8717056881672943) _gate_q_16, _gate_q_15;
  x _gate_q_1;
  rxx_5074000240(4.4620371495977045) _gate_q_16, _gate_q_6;
  cz _gate_q_19, _gate_q_17;
  ry(2.386763707378237) _gate_q_18;
  xx_plus_yy_5073997456(1.1784547437262045, 3.641320697596235) _gate_q_5, _gate_q_10;
  cu1_5074001344(4.951812753195001) _gate_q_4, _gate_q_14;
  rz(1.3864045760721537) _gate_q_13;
  U(0.8363247944947159, 1.4619564801186238, 2.3500892375886364) _gate_q_1;
  ch _gate_q_3, _gate_q_9;
  cu3_5073995152(4.280877018628954, 4.854746712157913, 1.1283508762383307) _gate_q_11, _gate_q_7;
  u1(5.342635157665625) _gate_q_15;
  cz _gate_q_0, _gate_q_2;
  cz _gate_q_8, _gate_q_12;
  x _gate_q_3;
  cu3_5074007296(2.390662432029319, 3.2835297781034685, 5.558635584524556) _gate_q_6, _gate_q_12;
  id _gate_q_19;
  iswap _gate_q_16, _gate_q_11;
  sxdg _gate_q_0;
  xx_minus_yy_5073997168(2.5457777505374364, 3.313682755450447) _gate_q_17, _gate_q_13;
  ry(2.4718913893894205) _gate_q_18;
  cs _gate_q_8, _gate_q_7;
  u2(2.9579665921969918, 0.5386068416737646) _gate_q_2;
  rx(4.601323594513187) _gate_q_4;
  rz(4.891893444517576) _gate_q_9;
  cx _gate_q_5, _gate_q_1;
  cu(2.7906347901875224, 1.8083089116383668, 1.6236246543370767, 1.195975117843857) _gate_q_14, _gate_q_10;
  z _gate_q_15;
  swap _gate_q_18, _gate_q_13;
  s _gate_q_10;
  cry(2.743299338617457) _gate_q_2, _gate_q_17;
  sxdg _gate_q_5;
  cy _gate_q_7, _gate_q_19;
  rx(3.116045901173649) _gate_q_15;
  U(0.10714846054229214, 6.132251048046054, 5.447909747668056) _gate_q_4;
  cu3_5074009696(0.2167663179405965, 6.1876486014642476, 5.42213144289584) _gate_q_1, _gate_q_14;
  ryy_5073995104(4.1812686943541255) _gate_q_12, _gate_q_9;
  r_5074005808(1.6214856677468676, 5.068275640066886) _gate_q_0;
  z _gate_q_3;
  swap _gate_q_16, _gate_q_8;
  u2(3.2574366393721395, 0.7733769820353967) _gate_q_6;
  x _gate_q_11;
  cz _gate_q_14, _gate_q_12;
  id _gate_q_9;
  cu(2.9103102778149244, 3.945227579308791, 6.2574365900918565, 0.32201331723151716) _gate_q_10, _gate_q_2;
  rx(0.36871438485618435) _gate_q_15;
  rx(0.1627734584320863) _gate_q_7;
  cu(2.6411874230205785, 3.0579363676484412, 4.5663856300656995, 5.9312219228361505) _gate_q_16, _gate_q_8;
  rx(5.53949498520122) _gate_q_5;
  r_5074000384(5.180571240821212, 3.2846749024959347) _gate_q_19;
  ecr _gate_q_6, _gate_q_1;
  xx_plus_yy_5074002448(4.150203505013432, 4.340182127659379) _gate_q_17, _gate_q_3;
  cu3_5073998608(4.507687272191596, 5.614001305678538, 0.747803473898707) _gate_q_13, _gate_q_11;
  sx _gate_q_4;
  rzx_5073998368(4.635135676412499) _gate_q_18, _gate_q_0;
  rxx_5074001056(5.515676096843041) _gate_q_18, _gate_q_5;
  ry(5.797244820939339) _gate_q_9;
  xx_plus_yy_5073994000(1.5676127344905053, 3.5020798012603858) _gate_q_13, _gate_q_16;
  xx_minus_yy_5073995200(1.7930539038711184, 6.126600248202843) _gate_q_19, _gate_q_2;
  rzx_5073996688(6.240591076778322) _gate_q_3, _gate_q_8;
  ry(1.5616659479527915) _gate_q_7;
  x _gate_q_4;
  sx _gate_q_15;
  cp(5.328514568642873) _gate_q_1, _gate_q_0;
  rz(3.159113288732394) _gate_q_10;
  crz(3.2369700332836033) _gate_q_6, _gate_q_14;
  rzx_5073995344(5.016992573012081) _gate_q_17, _gate_q_11;
  u1(4.020729402681681) _gate_q_12;
}