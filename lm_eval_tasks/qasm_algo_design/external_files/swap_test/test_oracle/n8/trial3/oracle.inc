gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5106020480(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.569301760931245, -0.38506649664581283, 0.38506649664581283) _gate_q_0;
}
gate r_5106018848(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.0393388533264667, 1.2860092852386846, -1.2860092852386846) _gate_q_0;
}
gate rzx_5106008528(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.76695458148668) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5105864240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.337851784908348) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8571023367914443) _gate_q_1;
  ry(-2.8571023367914443) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.337851784908348) _gate_q_0;
}
gate rzx_5106118016(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.995963083879655) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5106015056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.6627890697114742) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.714084947368523) _gate_q_0;
  ry(-1.714084947368523) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.6627890697114742) _gate_q_1;
}
gate r_5106113648(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.868560013586519, -1.073042432128521, 1.073042432128521) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rxx_5106400288(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.558122663465862) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  csdg _gate_q_2, _gate_q_4;
  h _gate_q_6;
  id _gate_q_5;
  cp(0.3747009440945551) _gate_q_7, _gate_q_0;
  tdg _gate_q_1;
  r_5106020480(4.569301760931245, 1.1857298301490837) _gate_q_3;
  r_5106018848(1.0393388533264667, 2.856805612033581) _gate_q_2;
  t _gate_q_5;
  rzx_5106008528(5.76695458148668) _gate_q_1, _gate_q_7;
  xx_plus_yy_5105864240(5.714204673582889, 5.337851784908348) _gate_q_4, _gate_q_0;
  rzx_5106118016(4.995963083879655) _gate_q_3, _gate_q_6;
  cu(1.01878310140318, 0.10668788613792198, 3.400561970683682, 0.4304995132197881) _gate_q_2, _gate_q_7;
  y _gate_q_5;
  ch _gate_q_6, _gate_q_1;
  xx_minus_yy_5106015056(3.428169894737046, 1.6627890697114742) _gate_q_4, _gate_q_0;
  sdg _gate_q_3;
  cx _gate_q_0, _gate_q_1;
  u2(1.0244448381109323, 0.18860152420189846) _gate_q_5;
  p(3.1185587716072973) _gate_q_2;
  r_5106113648(5.868560013586519, 0.49775389466637565) _gate_q_6;
  dcx _gate_q_4, _gate_q_7;
  p(3.7376062757876727) _gate_q_3;
  sxdg _gate_q_7;
  rx(4.256597494332371) _gate_q_1;
  p(2.9620316821270323) _gate_q_5;
  sxdg _gate_q_2;
  u1(5.226172403070735) _gate_q_0;
  swap _gate_q_4, _gate_q_3;
  t _gate_q_6;
  ry(3.168191166876644) _gate_q_6;
  rxx_5106400288(0.558122663465862) _gate_q_4, _gate_q_2;
  csx _gate_q_0, _gate_q_5;
  cp(3.8156102342875253) _gate_q_1, _gate_q_7;
  u2(1.9706607535932705, 3.753842284218508) _gate_q_3;
  csx _gate_q_7, _gate_q_2;
  csdg _gate_q_6, _gate_q_4;
  u3(5.601634692731135, 4.898984393980224, 2.476416984314296) _gate_q_0;
  cx _gate_q_5, _gate_q_1;
  U(0.6680012008770156, 2.085734833336565, 1.8141334981216717) _gate_q_3;
  swap _gate_q_2, _gate_q_6;
  dcx _gate_q_5, _gate_q_1;
  rx(1.1518015161314241) _gate_q_4;
  crz(1.2917948918726956) _gate_q_7, _gate_q_0;
  u1(2.0661846658393648) _gate_q_3;
}
gate rxx_5106397168(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7909776587597996) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5106396832(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.8480376431300534, 0.35122439002084427, -0.35122439002084427) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate rzz_5106385264(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.3888442243941452) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  u1(0.781058386758502) _gate_q_4;
  h _gate_q_5;
  rxx_5106397168(0.7909776587597996) _gate_q_2, _gate_q_3;
  cry(1.7777909019366223) _gate_q_7, _gate_q_6;
  u2(5.776334095297098, 3.0522001780577113) _gate_q_0;
  id _gate_q_1;
  cy _gate_q_2, _gate_q_4;
  cy _gate_q_0, _gate_q_1;
  u1(1.0439943608689084) _gate_q_5;
  crx(3.3695063112754506) _gate_q_7, _gate_q_3;
  r_5106396832(1.8480376431300534, 1.9220207168157408) _gate_q_6;
  ch _gate_q_7, _gate_q_4;
  ch _gate_q_1, _gate_q_5;
  u2(2.1725507399642328, 0.5811147564269755) _gate_q_3;
  id _gate_q_2;
  z _gate_q_0;
  z _gate_q_6;
  csx _gate_q_6, _gate_q_7;
  csdg _gate_q_4, _gate_q_5;
  cz _gate_q_2, _gate_q_3;
  cx _gate_q_1, _gate_q_0;
  iswap _gate_q_3, _gate_q_6;
  cry(4.227543396562888) _gate_q_5, _gate_q_1;
  csx _gate_q_4, _gate_q_2;
  cx _gate_q_7, _gate_q_0;
  sx _gate_q_5;
  csx _gate_q_4, _gate_q_0;
  csdg _gate_q_6, _gate_q_1;
  cp(1.1403733171466401) _gate_q_3, _gate_q_7;
  z _gate_q_2;
  crx(3.495883951846829) _gate_q_2, _gate_q_0;
  iswap _gate_q_6, _gate_q_7;
  rx(5.294015041416866) _gate_q_3;
  ry(0.6878640294598392) _gate_q_1;
  iswap _gate_q_5, _gate_q_4;
  u1(0.9965435610798664) _gate_q_5;
  ecr _gate_q_6, _gate_q_4;
  crx(1.4071770093646598) _gate_q_3, _gate_q_2;
  rzz_5106385264(2.3888442243941452) _gate_q_0, _gate_q_1;
  sxdg _gate_q_7;
}