gate rxx_5105271968(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8622654919821054) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5105284256(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6936268833673538) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.552058940053245) _gate_q_1;
  ry(-1.552058940053245) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6936268833673538) _gate_q_0;
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
gate rzx_5105272592(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.0808538845402635) _gate_q_1;
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
gate rzx_5105280608(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.44884582377395105) _gate_q_1;
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
gate rzz_5105285264(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.312213945319573) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5105285984(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.663340200532191) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5105285120(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.503197562951838) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.35960854847378015) _gate_q_1;
  ry(-0.35960854847378015) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.503197562951838) _gate_q_0;
}
gate r_5105271632(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.292349888987367, 2.049164536710557, -2.049164536710557) _gate_q_0;
}
gate rzx_5105275904(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7111899879380235) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5105280656(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.0947011352866203, 3.4065018873909523, -3.4065018873909523) _gate_q_0;
}
gate cu3_5105275952(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.65450855265797) _gate_q_0;
  u1(-0.42567659330466157) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.1174483604414256, 0, -3.65450855265797) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.1174483604414256, 4.0801851459626315, 0) _gate_q_1;
}
gate xx_plus_yy_5105282576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.464475035741904) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9946966918994656) _gate_q_1;
  ry(-0.9946966918994656) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.464475035741904) _gate_q_0;
}
gate cu1_5105272160(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.1618150373863005) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.1618150373863005) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.1618150373863005) _gate_q_1;
}
gate r_5105285408(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.5714200629274545, 0.5075611440980481, -0.5075611440980481) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5105279408(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.576878453390965, -0.31754151450295565, 0.31754151450295565) _gate_q_0;
}
gate rxx_5105284592(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4571141142197925) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5105280224(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.5656880903305836, 3.6527891177702525, -3.6527891177702525) _gate_q_0;
}
gate cu1_5105279360(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.892036125903864) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.892036125903864) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.892036125903864) _gate_q_1;
}
gate r_5105276480(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.555105081994226, -0.6911010491209644, 0.6911010491209644) _gate_q_0;
}
gate xx_minus_yy_5105274224(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.1431098453757444) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6075500207392971) _gate_q_0;
  ry(-0.6075500207392971) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.1431098453757444) _gate_q_1;
}
gate cu3_5105273552(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.059306220537843) _gate_q_0;
  u1(0.9897935380212268) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5378726423340664, 0, -5.059306220537843) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5378726423340664, 4.069512682516616, 0) _gate_q_1;
}
gate cu1_5105276576(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.7319540731094867) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.7319540731094867) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.7319540731094867) _gate_q_1;
}
gate rzx_5105278496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8681789079911524) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5105274656(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6574617302644424) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  sdg _gate_q_16;
  sdg _gate_q_4;
  crx(2.1891718395790525) _gate_q_15, _gate_q_8;
  rxx_5105271968(0.8622654919821054) _gate_q_9, _gate_q_14;
  sxdg _gate_q_5;
  xx_plus_yy_5105284256(3.10411788010649, 0.6936268833673538) _gate_q_7, _gate_q_11;
  tdg _gate_q_12;
  sx _gate_q_2;
  U(5.669909244465127, 5.466788055064734, 0.16455427016537572) _gate_q_19;
  csx _gate_q_1, _gate_q_3;
  cu(1.067747930666208, 5.483718190945916, 2.711651211253941, 4.397005362211035) _gate_q_0, _gate_q_6;
  id _gate_q_18;
  rzx_5105272592(4.0808538845402635) _gate_q_10, _gate_q_17;
  sdg _gate_q_13;
  crz(0.00972229181903694) _gate_q_0, _gate_q_14;
  h _gate_q_9;
  sdg _gate_q_10;
  ecr _gate_q_12, _gate_q_6;
  sdg _gate_q_16;
  u3(0.1805570365326961, 4.470851169255464, 1.9834404087051187) _gate_q_17;
  z _gate_q_8;
  cx _gate_q_13, _gate_q_18;
  rzx_5105280608(0.44884582377395105) _gate_q_5, _gate_q_2;
  u3(2.3829096950977533, 4.980600594705974, 5.425577170957058) _gate_q_7;
  crz(2.9625890704062) _gate_q_11, _gate_q_19;
  tdg _gate_q_15;
  cs _gate_q_3, _gate_q_1;
  u2(3.558202460220585, 3.0370846366658686) _gate_q_4;
  rzz_5105285264(3.312213945319573) _gate_q_18, _gate_q_9;
  ch _gate_q_6, _gate_q_5;
  ryy_5105285984(4.663340200532191) _gate_q_17, _gate_q_10;
  xx_plus_yy_5105285120(0.7192170969475603, 4.503197562951838) _gate_q_11, _gate_q_12;
  h _gate_q_7;
  z _gate_q_15;
  u2(1.2000106621048632, 6.139443182785174) _gate_q_14;
  ry(1.5438364211901556) _gate_q_19;
  cx _gate_q_4, _gate_q_13;
  r_5105271632(4.292349888987367, 3.6199608635054537) _gate_q_3;
  rzx_5105275904(1.7111899879380235) _gate_q_16, _gate_q_0;
  r_5105280656(2.0947011352866203, 4.977298214185849) _gate_q_8;
  t _gate_q_2;
  u3(2.1209653768690244, 4.6174852385773395, 4.939703827422662) _gate_q_1;
  cu3_5105275952(6.234896720882851, 4.0801851459626315, 3.2288319593533084) _gate_q_7, _gate_q_18;
  x _gate_q_6;
  sdg _gate_q_11;
  h _gate_q_13;
  cz _gate_q_10, _gate_q_0;
  sdg _gate_q_4;
  xx_plus_yy_5105282576(1.9893933837989313, 5.464475035741904) _gate_q_19, _gate_q_12;
  x _gate_q_8;
  u1(6.274697327432402) _gate_q_2;
  cu(1.0432783326474602, 1.2070453358398103, 5.27540806042068, 2.4680380854297512) _gate_q_14, _gate_q_3;
  u3(3.6416913184340225, 6.046777213528577, 3.9787019532263987) _gate_q_17;
  swap _gate_q_9, _gate_q_15;
  cu1_5105272160(4.323630074772601) _gate_q_1, _gate_q_5;
  r_5105285408(0.5714200629274545, 2.0783574708929446) _gate_q_16;
  ecr _gate_q_12, _gate_q_16;
  s _gate_q_18;
  csx _gate_q_17, _gate_q_19;
  cz _gate_q_11, _gate_q_2;
  crx(0.49818232598443396) _gate_q_14, _gate_q_0;
  cz _gate_q_8, _gate_q_7;
  dcx _gate_q_5, _gate_q_4;
  csdg _gate_q_13, _gate_q_15;
  rz(4.342583436365436) _gate_q_6;
  cry(2.8382804862731312) _gate_q_1, _gate_q_3;
  h _gate_q_9;
  t _gate_q_10;
  cp(5.42380789872195) _gate_q_7, _gate_q_5;
  crz(3.078024661928367) _gate_q_3, _gate_q_11;
  y _gate_q_13;
  z _gate_q_8;
  ch _gate_q_0, _gate_q_14;
  rz(1.1857166685424425) _gate_q_4;
  swap _gate_q_17, _gate_q_19;
  r_5105279408(5.576878453390965, 1.253254812291941) _gate_q_10;
  cz _gate_q_18, _gate_q_6;
  cy _gate_q_2, _gate_q_16;
  rxx_5105284592(2.4571141142197925) _gate_q_12, _gate_q_9;
  z _gate_q_15;
  r_5105280224(2.5656880903305836, 5.223585444565149) _gate_q_1;
  p(3.937133297270158) _gate_q_1;
  cu1_5105279360(5.784072251807728) _gate_q_7, _gate_q_4;
  r_5105276480(2.555105081994226, 0.8796952776739322) _gate_q_16;
  ry(4.519894024601748) _gate_q_5;
  crz(1.428148094457286) _gate_q_15, _gate_q_17;
  sxdg _gate_q_10;
  u2(5.600626737082398, 3.4738979180098637) _gate_q_11;
  sdg _gate_q_3;
  csdg _gate_q_13, _gate_q_2;
  sdg _gate_q_9;
  xx_minus_yy_5105274224(1.2151000414785942, 2.1431098453757444) _gate_q_12, _gate_q_14;
  cu3_5105273552(1.0757452846681328, 4.069512682516616, 6.04909975855907) _gate_q_19, _gate_q_0;
  u3(1.3404045971324083, 0.978535312516492, 6.002794198276355) _gate_q_18;
  id _gate_q_6;
  sxdg _gate_q_8;
  cu1_5105276576(3.4639081462189734) _gate_q_0, _gate_q_8;
  tdg _gate_q_6;
  x _gate_q_3;
  rz(4.435652503356971) _gate_q_4;
  rzx_5105278496(2.8681789079911524) _gate_q_12, _gate_q_18;
  rx(1.3726437039438226) _gate_q_7;
  U(1.6553134070804747, 4.2527117020527, 5.775353591905624) _gate_q_10;
  ecr _gate_q_11, _gate_q_16;
  u1(4.338526789456302) _gate_q_1;
  swap _gate_q_19, _gate_q_13;
  crx(4.600562646649257) _gate_q_2, _gate_q_5;
  rzz_5105274656(0.6574617302644424) _gate_q_17, _gate_q_14;
  h _gate_q_9;
  rz(4.8107191155572195) _gate_q_15;
  cry(2.8392176772638935) _gate_q_14, _gate_q_16;
  rz(5.552459300303367) _gate_q_1;
  csdg _gate_q_7, _gate_q_4;
  csx _gate_q_5, _gate_q_6;
  csx _gate_q_9, _gate_q_10;
  ry(3.5394677645109196) _gate_q_11;
  cp(5.6907988096052975) _gate_q_18, _gate_q_0;
  cz _gate_q_13, _gate_q_3;
  cy _gate_q_15, _gate_q_2;
  u3(4.9913326866835535, 0.009831984273027738, 5.690173787612933) _gate_q_12;
  u3(3.0306232109806284, 5.659405565644108, 1.4285917307901144) _gate_q_19;
  z _gate_q_8;
  x _gate_q_17;
  h _gate_q_14;
  s _gate_q_1;
  rx(5.7337121786743825) _gate_q_17;
  cz _gate_q_16, _gate_q_13;
  tdg _gate_q_9;
  sxdg _gate_q_8;
  ry(4.368686354527116) _gate_q_10;
  s _gate_q_0;
  sx _gate_q_2;
  s _gate_q_7;
  u2(5.625368569360439, 2.4251116156831727) _gate_q_18;
  sdg _gate_q_3;
  u1(3.239234509536377) _gate_q_11;
  t _gate_q_12;
  cx _gate_q_19, _gate_q_6;
  rz(2.0709402423846024) _gate_q_5;
  crx(0.7566367617280391) _gate_q_4, _gate_q_15;
}
gate rzx_5106111152(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9887453020073025) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5106115328(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.03250836959578) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.03250836959578) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.03250836959578) _gate_q_1;
}
gate rzx_5106109952(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.0475270734399755) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5106118544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.530246790992762) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.25449225173280243) _gate_q_1;
  ry(-0.25449225173280243) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.530246790992762) _gate_q_0;
}
gate xx_plus_yy_5106112880(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.384778291978429) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5550259532945256) _gate_q_1;
  ry(-2.5550259532945256) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.384778291978429) _gate_q_0;
}
gate cu1_5106118016(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9398665875224568) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9398665875224568) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9398665875224568) _gate_q_1;
}
gate xx_plus_yy_5106112832(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.8464605323979826) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.167008166579349) _gate_q_1;
  ry(-2.167008166579349) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.8464605323979826) _gate_q_0;
}
gate rzx_5106118160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.06733991507998) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate r_5106114560(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.561904103633362, 2.969057793178732, -2.969057793178732) _gate_q_0;
}
gate cu3_5106107312(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.26825147974902) _gate_q_0;
  u1(-0.2110361022953513) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.029609214325963, 0, -5.26825147974902) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.029609214325963, 5.479287582044372, 0) _gate_q_1;
}
gate rxx_5106106640(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6793475226605832) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5106115712(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3301200097102068) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3301200097102068) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3301200097102068) _gate_q_1;
}
gate r_5106108416(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.5163284659612657, 3.7572413777836777, -3.7572413777836777) _gate_q_0;
}
gate rzx_5106115136(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9516453245334677) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5106113840(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.6107941498893417) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5106107600(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.975657822928427, 0.07512914359356437, -0.07512914359356437) _gate_q_0;
}
gate xx_plus_yy_5106116912(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.435846368500563) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1867081622604079) _gate_q_1;
  ry(-1.1867081622604079) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.435846368500563) _gate_q_0;
}
gate rzz_5106122336(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.252360574232221) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5106117440(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.8342645111782736) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5712919083415595) _gate_q_1;
  ry(-1.5712919083415595) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.8342645111782736) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  cz _gate_q_2, _gate_q_19;
  y _gate_q_10;
  z _gate_q_4;
  rzx_5106111152(2.9887453020073025) _gate_q_1, _gate_q_11;
  ecr _gate_q_0, _gate_q_13;
  cu1_5106115328(6.06501673919156) _gate_q_9, _gate_q_15;
  ecr _gate_q_17, _gate_q_8;
  cp(2.888959586749557) _gate_q_6, _gate_q_5;
  x _gate_q_16;
  cs _gate_q_12, _gate_q_14;
  x _gate_q_7;
  id _gate_q_3;
  rz(0.26272547016149866) _gate_q_18;
  x _gate_q_7;
  s _gate_q_1;
  rz(5.484855065999152) _gate_q_10;
  cry(4.263853144283261) _gate_q_19, _gate_q_0;
  id _gate_q_17;
  csdg _gate_q_6, _gate_q_15;
  rx(1.4540585235731132) _gate_q_13;
  rzx_5106109952(4.0475270734399755) _gate_q_18, _gate_q_3;
  cry(5.842316944465861) _gate_q_9, _gate_q_8;
  cs _gate_q_4, _gate_q_12;
  xx_plus_yy_5106118544(0.5089845034656049, 3.530246790992762) _gate_q_11, _gate_q_14;
  s _gate_q_2;
  xx_plus_yy_5106112880(5.110051906589051, 5.384778291978429) _gate_q_5, _gate_q_16;
  crz(0.33938227078005967) _gate_q_11, _gate_q_3;
  dcx _gate_q_19, _gate_q_6;
  rz(0.25689981854098065) _gate_q_12;
  y _gate_q_16;
  u3(5.511761473632686, 1.6280688969706318, 2.896702790876155) _gate_q_1;
  u1(2.1543463895132033) _gate_q_8;
  cu1_5106118016(3.8797331750449136) _gate_q_2, _gate_q_4;
  s _gate_q_0;
  ch _gate_q_14, _gate_q_18;
  xx_plus_yy_5106112832(4.334016333158698, 3.8464605323979826) _gate_q_13, _gate_q_7;
  csdg _gate_q_17, _gate_q_10;
  cx _gate_q_5, _gate_q_15;
  sdg _gate_q_9;
  cu(6.174165786359809, 6.117040385174704, 4.717596103151939, 0.3899123128822527) _gate_q_10, _gate_q_2;
  u2(6.119716074794134, 1.3813570123065326) _gate_q_9;
  cry(2.0955363423575295) _gate_q_0, _gate_q_8;
  crx(0.3781669119387623) _gate_q_17, _gate_q_18;
  cz _gate_q_1, _gate_q_11;
  rzx_5106118160(4.06733991507998) _gate_q_3, _gate_q_16;
  swap _gate_q_7, _gate_q_14;
  rz(1.5736953912666873) _gate_q_13;
  z _gate_q_6;
  u3(6.280707684959136, 6.110586124618824, 5.9572064670785005) _gate_q_19;
  u3(4.037682877234696, 0.5033442699835321, 1.040414261819863) _gate_q_4;
  sx _gate_q_12;
  cs _gate_q_5, _gate_q_15;
  rz(2.190010192450846) _gate_q_0;
  y _gate_q_16;
  crz(0.48878410740169675) _gate_q_10, _gate_q_2;
  cry(0.12119560382313957) _gate_q_8, _gate_q_6;
  p(6.224636498324916) _gate_q_5;
  z _gate_q_12;
  U(1.2666397909252072, 3.8769879125323943, 1.6145828525818349) _gate_q_19;
  y _gate_q_3;
  dcx _gate_q_11, _gate_q_9;
  iswap _gate_q_7, _gate_q_13;
  u2(1.1687537214017045, 5.449862074588012) _gate_q_14;
  p(3.941075434730085) _gate_q_17;
  crx(4.299559672932736) _gate_q_4, _gate_q_18;
  s _gate_q_15;
  r_5106114560(2.561904103633362, 4.539854119973628) _gate_q_1;
  swap _gate_q_3, _gate_q_7;
  s _gate_q_17;
  iswap _gate_q_12, _gate_q_9;
  cu3_5106107312(4.059218428651926, 5.479287582044372, 5.0572153774536694) _gate_q_10, _gate_q_19;
  rxx_5106106640(1.6793475226605832) _gate_q_4, _gate_q_18;
  csx _gate_q_16, _gate_q_13;
  ecr _gate_q_11, _gate_q_8;
  csdg _gate_q_15, _gate_q_6;
  h _gate_q_14;
  u1(2.0031988528953995) _gate_q_2;
  y _gate_q_1;
  ecr _gate_q_0, _gate_q_5;
  h _gate_q_14;
  swap _gate_q_17, _gate_q_4;
  cx _gate_q_19, _gate_q_10;
  cy _gate_q_15, _gate_q_7;
  ry(4.477624897418883) _gate_q_12;
  cz _gate_q_13, _gate_q_3;
  cx _gate_q_1, _gate_q_16;
  sx _gate_q_9;
  cu1_5106115712(2.6602400194204137) _gate_q_18, _gate_q_8;
  rx(5.918282732745235) _gate_q_11;
  z _gate_q_0;
  iswap _gate_q_2, _gate_q_5;
  r_5106108416(3.5163284659612657, 5.328037704578574) _gate_q_6;
  cs _gate_q_5, _gate_q_7;
  cry(6.250971866842722) _gate_q_2, _gate_q_18;
  sxdg _gate_q_4;
  crx(5.6346560903128) _gate_q_13, _gate_q_12;
  cs _gate_q_10, _gate_q_9;
  rzx_5106115136(2.9516453245334677) _gate_q_6, _gate_q_19;
  ecr _gate_q_8, _gate_q_17;
  sxdg _gate_q_15;
  rzz_5106113840(3.6107941498893417) _gate_q_3, _gate_q_0;
  y _gate_q_14;
  crx(0.08651263288591604) _gate_q_16, _gate_q_1;
  r_5106107600(0.975657822928427, 1.645925470388461) _gate_q_11;
  rz(4.131733752953376) _gate_q_15;
  crx(0.7890278539099945) _gate_q_10, _gate_q_6;
  csdg _gate_q_12, _gate_q_9;
  xx_plus_yy_5106116912(2.3734163245208157, 5.435846368500563) _gate_q_19, _gate_q_13;
  cry(1.4602157823960604) _gate_q_5, _gate_q_14;
  sx _gate_q_7;
  cry(2.856685174120894) _gate_q_8, _gate_q_11;
  sdg _gate_q_1;
  rzz_5106122336(4.252360574232221) _gate_q_4, _gate_q_16;
  dcx _gate_q_3, _gate_q_0;
  xx_plus_yy_5106117440(3.142583816683119, 0.8342645111782736) _gate_q_17, _gate_q_2;
  z _gate_q_18;
  cry(5.1681281795555) _gate_q_18, _gate_q_4;
  ch _gate_q_8, _gate_q_13;
  ry(3.266568402098075) _gate_q_0;
  csx _gate_q_12, _gate_q_6;
  y _gate_q_14;
  ecr _gate_q_10, _gate_q_3;
  crx(0.9814880407692775) _gate_q_7, _gate_q_16;
  y _gate_q_9;
  ch _gate_q_19, _gate_q_17;
  u3(1.203743303449768, 2.197237911046785, 3.5671866240350694) _gate_q_15;
  tdg _gate_q_11;
  crz(2.1060373728727146) _gate_q_2, _gate_q_5;
  y _gate_q_1;
}