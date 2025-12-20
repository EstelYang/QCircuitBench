gate rzz_5105514736(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.279975353435601) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5105500576(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.4654188134989035, -0.13542203277550602, 0.13542203277550602) _gate_q_0;
}
gate cu1_5103923040(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.33087056138378584) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.33087056138378584) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.33087056138378584) _gate_q_1;
}
gate rzx_5103925536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.486887584541577) _gate_q_1;
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
gate cu3_5103925344(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.3866525779888197) _gate_q_0;
  u1(0.561397267625916) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.649256129967323, 0, -2.3866525779888197) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.649256129967323, 1.8252553103629037, 0) _gate_q_1;
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
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  s _gate_q_2;
  rzz_5105514736(4.279975353435601) _gate_q_1, _gate_q_5;
  cp(3.7826836212192516) _gate_q_0, _gate_q_4;
  y _gate_q_3;
  r_5105500576(3.4654188134989035, 1.4353742940193905) _gate_q_1;
  h _gate_q_5;
  cy _gate_q_2, _gate_q_0;
  crz(3.148672096175028) _gate_q_3, _gate_q_4;
  rx(3.4009206895514783) _gate_q_3;
  cu1_5103923040(0.6617411227675717) _gate_q_1, _gate_q_5;
  rzx_5103925536(2.486887584541577) _gate_q_0, _gate_q_2;
  sx _gate_q_4;
  ecr _gate_q_0, _gate_q_3;
  ch _gate_q_1, _gate_q_4;
  rx(3.0672646081347708) _gate_q_2;
  ry(5.430591082824382) _gate_q_5;
  t _gate_q_2;
  rz(4.900863496558595) _gate_q_0;
  cu3_5103925344(5.298512259934646, 1.8252553103629037, 2.9480498456147357) _gate_q_1, _gate_q_3;
  csx _gate_q_4, _gate_q_5;
  csx _gate_q_1, _gate_q_0;
  swap _gate_q_3, _gate_q_5;
  h _gate_q_2;
  u1(0.08575455863797307) _gate_q_4;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate ryy_5105439024(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.658878364747119) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5105435184(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1728722915255516) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105593488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.306376716510654) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1173175915529443) _gate_q_0;
  ry(-1.1173175915529443) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.306376716510654) _gate_q_1;
}
gate cu3_5105582928(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.8987523832297266) _gate_q_0;
  u1(1.7039479064751313) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.6424651913955222, 0, -1.8987523832297266) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.6424651913955222, 0.19480447675459528, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  h _gate_q_0;
  cs _gate_q_3, _gate_q_1;
  cz _gate_q_2, _gate_q_5;
  p(4.587480530790179) _gate_q_4;
  ryy_5105439024(4.658878364747119) _gate_q_3, _gate_q_0;
  dcx _gate_q_5, _gate_q_4;
  sdg _gate_q_2;
  sx _gate_q_1;
  cz _gate_q_0, _gate_q_2;
  cx _gate_q_5, _gate_q_4;
  ryy_5105435184(3.1728722915255516) _gate_q_1, _gate_q_3;
  ecr _gate_q_2, _gate_q_1;
  crx(1.7162056708537585) _gate_q_3, _gate_q_5;
  t _gate_q_0;
  u3(3.9376548293124287, 1.2399401551697364, 3.1387998938076627) _gate_q_4;
  xx_minus_yy_5105593488(2.2346351831058886, 4.306376716510654) _gate_q_1, _gate_q_3;
  id _gate_q_0;
  h _gate_q_5;
  cx _gate_q_4, _gate_q_2;
  sx _gate_q_5;
  cu3_5105582928(3.2849303827910443, 0.19480447675459528, 3.602700289704858) _gate_q_0, _gate_q_4;
  ch _gate_q_1, _gate_q_2;
  id _gate_q_3;
}