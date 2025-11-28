gate rzz_5074514144(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.5901042566321658) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rxx_5074505264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.146006733971177) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate ryy_5074512320(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.2945252387399616) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074509200(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6167500016170055, -0.9171506358035071, 0.9171506358035071) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5074505072(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.723632251821) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074509920(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.258952791759724, -1.222608638238103, 1.222608638238103) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5074504688(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.547469223953326) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.21902305197900762) _gate_q_1;
  ry(-0.21902305197900762) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.547469223953326) _gate_q_0;
}
gate cu1_5074508672(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.1517363837533186) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.1517363837533186) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.1517363837533186) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rxx_5074502192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.344732202973559) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5074508576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.250824646749254) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8620193215148717) _gate_q_1;
  ry(-2.8620193215148717) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.250824646749254) _gate_q_0;
}
gate r_5074504304(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.013434858878032065, 2.275768423300518, -2.275768423300518) _gate_q_0;
}
gate rxx_5074505408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.3823525124528855) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate cu3_5074515104(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.084124152442625) _gate_q_0;
  u1(1.351670192638093) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7631636626532857, 0, -4.084124152442625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7631636626532857, 2.7324539598045314, 0) _gate_q_1;
}
gate rzz_5074503440(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.6875706731222322) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5074508048(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8878009206414108) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074505216(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.383369585452798, 3.7355541184154557, -3.7355541184154557) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  x _gate_q_12;
  rzz_5074514144(0.5901042566321658) _gate_q_13, _gate_q_11;
  sdg _gate_q_9;
  u3(3.8114642513694394, 1.3810226302425848, 2.4248039852384733) _gate_q_6;
  s _gate_q_1;
  csx _gate_q_7, _gate_q_5;
  csx _gate_q_10, _gate_q_2;
  U(3.806594197974777, 1.5092899342597117, 0.6036196681395603) _gate_q_0;
  tdg _gate_q_14;
  h _gate_q_4;
  rx(0.1455042345148212) _gate_q_8;
  iswap _gate_q_3, _gate_q_17;
  cx _gate_q_16, _gate_q_15;
  tdg _gate_q_7;
  U(4.486439209243873, 4.69806260676113, 1.488302534236537) _gate_q_6;
  z _gate_q_12;
  cry(0.9099005823492904) _gate_q_15, _gate_q_14;
  t _gate_q_3;
  z _gate_q_11;
  rxx_5074505264(6.146006733971177) _gate_q_5, _gate_q_16;
  sx _gate_q_9;
  s _gate_q_10;
  tdg _gate_q_1;
  y _gate_q_0;
  cs _gate_q_17, _gate_q_13;
  cp(3.2311346641021053) _gate_q_8, _gate_q_4;
  rz(2.9970274194500512) _gate_q_2;
  cy _gate_q_0, _gate_q_8;
  cu(3.453202895706195, 2.311873625441259, 6.279032742070767, 1.7887211660580502) _gate_q_1, _gate_q_17;
  u2(3.3273945788443937, 4.508513459865125) _gate_q_12;
  s _gate_q_2;
  ch _gate_q_7, _gate_q_16;
  s _gate_q_6;
  ch _gate_q_15, _gate_q_14;
  tdg _gate_q_10;
  x _gate_q_9;
  ryy_5074512320(0.2945252387399616) _gate_q_4, _gate_q_3;
  ch _gate_q_11, _gate_q_13;
  u3(4.0053799375374854, 2.3344502358183203, 5.357970485228314) _gate_q_5;
  r_5074509200(1.6167500016170055, 0.6536456909913895) _gate_q_4;
  ry(1.4656562582742156) _gate_q_15;
  cry(6.275126035180384) _gate_q_9, _gate_q_11;
  s _gate_q_13;
  csdg _gate_q_7, _gate_q_6;
  rzz_5074505072(4.723632251821) _gate_q_8, _gate_q_12;
  p(3.7296979892004507) _gate_q_16;
  id _gate_q_3;
  r_5074509920(6.258952791759724, 0.3481876885567936) _gate_q_1;
  csdg _gate_q_10, _gate_q_14;
  u3(2.3916316588553057, 1.7233373817021433, 2.3204243967066502) _gate_q_0;
  z _gate_q_5;
  u2(0.18185046582394646, 0.9441065366805246) _gate_q_2;
  z _gate_q_17;
  cz _gate_q_13, _gate_q_11;
  U(4.260478078900065, 1.6363892929177202, 2.63592389266067) _gate_q_3;
  h _gate_q_7;
  csx _gate_q_2, _gate_q_16;
  u3(3.5789164144261942, 6.246955769502274, 5.740942781931751) _gate_q_4;
  h _gate_q_9;
  sxdg _gate_q_12;
  U(4.8534619295272, 4.853783237882902, 3.3600481453920303) _gate_q_10;
  sxdg _gate_q_6;
  u3(1.2041912676455158, 4.3602115673678465, 5.355250952948785) _gate_q_15;
  u3(5.855934383257357, 2.3163768218085528, 0.4269457652948062) _gate_q_8;
  cry(5.896002128290102) _gate_q_5, _gate_q_17;
  crz(2.997514151915932) _gate_q_1, _gate_q_0;
  z _gate_q_14;
  xx_plus_yy_5074504688(0.43804610395801524, 1.547469223953326) _gate_q_16, _gate_q_11;
  cz _gate_q_0, _gate_q_6;
  cu1_5074508672(0.3034727675066372) _gate_q_2, _gate_q_5;
  z _gate_q_17;
  csx _gate_q_1, _gate_q_15;
  dcx _gate_q_4, _gate_q_7;
  rxx_5074502192(3.344732202973559) _gate_q_14, _gate_q_8;
  cx _gate_q_12, _gate_q_3;
  rz(5.185876634408035) _gate_q_10;
  rz(2.754504030402093) _gate_q_13;
  y _gate_q_9;
  xx_plus_yy_5074508576(5.724038643029743, 6.250824646749254) _gate_q_5, _gate_q_8;
  cp(5.006200820448018) _gate_q_11, _gate_q_14;
  sx _gate_q_6;
  u3(4.866454413175064, 1.4541403717558399, 1.7803619890382483) _gate_q_12;
  z _gate_q_0;
  r_5074504304(0.013434858878032065, 3.8465647500954145) _gate_q_17;
  swap _gate_q_2, _gate_q_9;
  p(2.799482656431587) _gate_q_10;
  p(1.6950648274569828) _gate_q_1;
  dcx _gate_q_7, _gate_q_4;
  cu(6.225829243603976, 4.374804352403647, 4.668901449417851, 2.37948445288429) _gate_q_16, _gate_q_13;
  rxx_5074505408(5.3823525124528855) _gate_q_15, _gate_q_3;
  t _gate_q_16;
  sdg _gate_q_2;
  ch _gate_q_15, _gate_q_13;
  ecr _gate_q_17, _gate_q_0;
  sxdg _gate_q_10;
  ecr _gate_q_4, _gate_q_1;
  cu3_5074515104(1.5263273253065714, 2.7324539598045314, 5.435794345080717) _gate_q_5, _gate_q_8;
  ch _gate_q_14, _gate_q_6;
  rzz_5074503440(1.6875706731222322) _gate_q_12, _gate_q_3;
  id _gate_q_9;
  U(3.8870342097854764, 3.810258427369182, 3.395058981740793) _gate_q_11;
  U(5.340231555385215, 3.684346837799321, 1.5195997715874388) _gate_q_7;
  x _gate_q_4;
  cp(4.963178423148814) _gate_q_5, _gate_q_16;
  rxx_5074508048(1.8878009206414108) _gate_q_17, _gate_q_7;
  p(0.4281347655697326) _gate_q_11;
  cy _gate_q_0, _gate_q_2;
  ecr _gate_q_10, _gate_q_12;
  y _gate_q_15;
  cu(2.191713887378328, 4.575651777617178, 6.007503415087292, 6.167846118802376) _gate_q_1, _gate_q_13;
  u2(3.585794972328371, 3.8788682766091322) _gate_q_3;
  sx _gate_q_6;
  U(4.3405696915007415, 1.101034382194127, 4.724917827924757) _gate_q_14;
  cry(5.772322227819886) _gate_q_9, _gate_q_8;
  crz(4.713403508051186) _gate_q_12, _gate_q_15;
  cy _gate_q_8, _gate_q_5;
  cu(5.256092747107954, 2.443843036948216, 2.4327107043857525, 2.5341012406195773) _gate_q_3, _gate_q_14;
  crz(1.6155791750196389) _gate_q_0, _gate_q_11;
  crx(1.0423810764066617) _gate_q_16, _gate_q_7;
  id _gate_q_6;
  cu(1.9078083643459844, 2.3933600427512816, 4.999524338419995, 1.651360659052177) _gate_q_2, _gate_q_13;
  csx _gate_q_10, _gate_q_17;
  sdg _gate_q_1;
  r_5074505216(4.383369585452798, 5.306350445210352) _gate_q_9;
  rz(4.346454056383539) _gate_q_4;
}
gate xx_plus_yy_5072711760(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.8561509263235498) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.76428743838951) _gate_q_1;
  ry(-2.76428743838951) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.8561509263235498) _gate_q_0;
}
gate rzx_5072712384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.481669452013976) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5072707920(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.4068990826321172) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1941715359889522) _gate_q_0;
  ry(-1.1941715359889522) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.4068990826321172) _gate_q_1;
}
gate rzx_5072709024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.0565350159725435) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072703120(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.1915574273232603) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5072708688(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7210914932102379) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7210914932102379) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7210914932102379) _gate_q_1;
}
gate xx_plus_yy_5072712240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.53837425529477) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.42767083337093353) _gate_q_1;
  ry(-0.42767083337093353) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.53837425529477) _gate_q_0;
}
gate rzx_5072708928(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.958830355855997) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072706144(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.185917508288053) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5072712336(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.5770092273603686) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.5770092273603686) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.5770092273603686) _gate_q_1;
}
gate xx_plus_yy_5072699856(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.955693689023224) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.025650481671174865) _gate_q_1;
  ry(-0.025650481671174865) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.955693689023224) _gate_q_0;
}
gate cu3_5072702352(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.175377369829011) _gate_q_0;
  u1(-1.2316504729865967) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6707179865553472, 0, -3.175377369829011) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6707179865553472, 4.407027842815608, 0) _gate_q_1;
}
gate cu1_5072705184(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.658431236876846) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.658431236876846) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.658431236876846) _gate_q_1;
}
gate cu1_5072712672(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6772752972578155) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6772752972578155) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6772752972578155) _gate_q_1;
}
gate rxx_5072714592(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4975760335778263) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5072705856(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3672311075264787) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5072712816(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.690252037781932, -1.1947926987140047, 1.1947926987140047) _gate_q_0;
}
gate xx_minus_yy_5072708016(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.539963670730846) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.08062773953260777) _gate_q_0;
  ry(-0.08062773953260777) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.539963670730846) _gate_q_1;
}
gate cu1_5072707680(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.0398200840013416) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.0398200840013416) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.0398200840013416) _gate_q_1;
}
gate ryy_5072709840(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.086711555415855) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5072701536(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.649105599086011) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.745910170179202) _gate_q_0;
  ry(-2.745910170179202) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.649105599086011) _gate_q_1;
}
gate rxx_5072712720(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.168193815415523) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072714544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.4382105172987725) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6034311030992222) _gate_q_1;
  ry(-0.6034311030992222) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.4382105172987725) _gate_q_0;
}
gate rzx_5072702304(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.906999819228736) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5072712576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.523271008915096) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.038510247557799) _gate_q_1;
  ry(-2.038510247557799) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.523271008915096) _gate_q_0;
}
gate cu1_5072704080(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.12533937419704244) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.12533937419704244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.12533937419704244) _gate_q_1;
}
gate rzz_5072704032(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.3781472097381668) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  xx_plus_yy_5072711760(5.52857487677902, 1.8561509263235498) _gate_q_15, _gate_q_5;
  rzx_5072712384(2.481669452013976) _gate_q_4, _gate_q_14;
  ry(6.250474412634377) _gate_q_10;
  u2(5.300972966077348, 3.27960374807769) _gate_q_2;
  ch _gate_q_11, _gate_q_12;
  p(2.0342185560697743) _gate_q_13;
  z _gate_q_9;
  xx_minus_yy_5072707920(2.3883430719779044, 0.4068990826321172) _gate_q_3, _gate_q_1;
  cs _gate_q_6, _gate_q_17;
  cry(1.4827680544121034) _gate_q_7, _gate_q_0;
  dcx _gate_q_8, _gate_q_16;
  x _gate_q_10;
  ch _gate_q_0, _gate_q_15;
  x _gate_q_9;
  cry(3.6396833752360065) _gate_q_2, _gate_q_3;
  crx(5.138513288321693) _gate_q_17, _gate_q_12;
  cry(3.1682321195017282) _gate_q_1, _gate_q_14;
  sx _gate_q_11;
  sxdg _gate_q_8;
  rz(0.6109574118722262) _gate_q_7;
  crz(0.07141138725730665) _gate_q_16, _gate_q_5;
  ry(2.579364653066111) _gate_q_4;
  u3(3.929448625785302, 1.4575652484430155, 5.931278284544741) _gate_q_6;
  u1(2.895851814497509) _gate_q_13;
  rzx_5072709024(5.0565350159725435) _gate_q_16, _gate_q_13;
  cy _gate_q_0, _gate_q_3;
  u2(0.09327931811331584, 2.657561199529104) _gate_q_1;
  crz(3.0479127367307455) _gate_q_10, _gate_q_9;
  rzz_5072703120(0.1915574273232603) _gate_q_14, _gate_q_7;
  h _gate_q_4;
  crx(0.14526003823801656) _gate_q_17, _gate_q_12;
  id _gate_q_5;
  tdg _gate_q_11;
  cx _gate_q_6, _gate_q_8;
  cu(3.301144543097498, 5.798184987706172, 3.5700395735738133, 3.8164085347964782) _gate_q_2, _gate_q_15;
  cu1_5072708688(1.4421829864204758) _gate_q_7, _gate_q_1;
  csx _gate_q_17, _gate_q_6;
  xx_plus_yy_5072712240(0.8553416667418671, 3.53837425529477) _gate_q_13, _gate_q_9;
  ecr _gate_q_8, _gate_q_4;
  rzx_5072708928(3.958830355855997) _gate_q_0, _gate_q_15;
  tdg _gate_q_12;
  rz(3.8746537752087526) _gate_q_14;
  z _gate_q_10;
  csdg _gate_q_5, _gate_q_3;
  ch _gate_q_2, _gate_q_16;
  u2(4.530778792237061, 1.3301114366172266) _gate_q_11;
  dcx _gate_q_1, _gate_q_11;
  rzz_5072706144(3.185917508288053) _gate_q_5, _gate_q_7;
  u2(4.856956430853697, 5.31277660543603) _gate_q_15;
  cu1_5072712336(5.154018454720737) _gate_q_13, _gate_q_12;
  u3(4.812557781866836, 3.0887505128374917, 4.385931668669413) _gate_q_16;
  id _gate_q_14;
  rz(2.426387381494821) _gate_q_2;
  crx(1.151985870408807) _gate_q_3, _gate_q_4;
  xx_plus_yy_5072699856(0.05130096334234973, 5.955693689023224) _gate_q_0, _gate_q_9;
  t _gate_q_10;
  cu3_5072702352(1.3414359731106944, 4.407027842815608, 1.9437268968424146) _gate_q_17, _gate_q_8;
  h _gate_q_6;
  csx _gate_q_10, _gate_q_3;
  swap _gate_q_0, _gate_q_13;
  iswap _gate_q_8, _gate_q_7;
  u1(0.2562866546883575) _gate_q_12;
  ry(5.656141699306562) _gate_q_14;
  ry(5.6059443599497465) _gate_q_4;
  cu1_5072705184(1.316862473753692) _gate_q_1, _gate_q_11;
  tdg _gate_q_16;
  iswap _gate_q_17, _gate_q_9;
  ecr _gate_q_5, _gate_q_15;
  cu1_5072712672(3.354550594515631) _gate_q_6, _gate_q_2;
  u2(1.9219274303170555, 4.655117819320477) _gate_q_14;
  crx(1.624874927293623) _gate_q_15, _gate_q_2;
  cy _gate_q_12, _gate_q_11;
  cx _gate_q_9, _gate_q_4;
  p(5.479440798611128) _gate_q_10;
  dcx _gate_q_3, _gate_q_1;
  id _gate_q_16;
  cz _gate_q_0, _gate_q_13;
  iswap _gate_q_6, _gate_q_8;
  rxx_5072714592(3.4975760335778263) _gate_q_7, _gate_q_5;
  x _gate_q_17;
  rx(4.758882657857199) _gate_q_9;
  ryy_5072705856(3.3672311075264787) _gate_q_17, _gate_q_6;
  r_5072712816(3.690252037781932, 0.3760036280808919) _gate_q_8;
  u2(0.5248832391196138, 5.171325752856293) _gate_q_14;
  dcx _gate_q_2, _gate_q_11;
  y _gate_q_13;
  xx_minus_yy_5072708016(0.16125547906521553, 4.539963670730846) _gate_q_15, _gate_q_5;
  csx _gate_q_12, _gate_q_16;
  ry(1.405056990652851) _gate_q_1;
  p(1.9001947286388914) _gate_q_0;
  ch _gate_q_10, _gate_q_3;
  cu1_5072707680(4.079640168002683) _gate_q_4, _gate_q_7;
  tdg _gate_q_17;
  U(1.230168679218387, 0.005779187026661828, 3.5035222852035823) _gate_q_13;
  crx(0.26881241595991195) _gate_q_0, _gate_q_3;
  cp(1.2900446523512057) _gate_q_2, _gate_q_5;
  ryy_5072709840(4.086711555415855) _gate_q_12, _gate_q_11;
  ch _gate_q_7, _gate_q_6;
  sdg _gate_q_1;
  xx_minus_yy_5072701536(5.491820340358404, 5.649105599086011) _gate_q_14, _gate_q_4;
  tdg _gate_q_16;
  rxx_5072712720(5.168193815415523) _gate_q_8, _gate_q_9;
  h _gate_q_15;
  u3(0.7932383580578366, 4.328376727704369, 3.4279331266361193) _gate_q_10;
  sdg _gate_q_5;
  cu(0.39570853113448995, 4.656775698096492, 5.406124840303979, 3.6268642345987985) _gate_q_0, _gate_q_15;
  ecr _gate_q_12, _gate_q_1;
  xx_plus_yy_5072714544(1.2068622061984444, 5.4382105172987725) _gate_q_14, _gate_q_9;
  rx(0.7122912105555899) _gate_q_16;
  rzx_5072702304(5.906999819228736) _gate_q_11, _gate_q_3;
  tdg _gate_q_17;
  xx_plus_yy_5072712576(4.077020495115598, 4.523271008915096) _gate_q_2, _gate_q_4;
  p(1.0909506373399727) _gate_q_8;
  cu1_5072704080(0.2506787483940849) _gate_q_13, _gate_q_6;
  rzz_5072704032(1.3781472097381668) _gate_q_10, _gate_q_7;
}