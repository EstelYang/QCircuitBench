gate rzx_5105582640(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.658626677495013) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105592288(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.2891293682572942) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.7922885041297536) _gate_q_0;
  ry(-2.7922885041297536) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.2891293682572942) _gate_q_1;
}
gate r_5105594304(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.8709763785806568, 3.5697678828461186, -3.5697678828461186) _gate_q_0;
}
gate rzx_5105595984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.446112500794088) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5105594112(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.4420691605617026) _gate_q_0;
  u1(-0.7185459976023166) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.038036982026357, 0, -2.4420691605617026) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.038036982026357, 3.160615158164019, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  rzx_5105582640(4.658626677495013) _gate_q_4, _gate_q_0;
  cu(1.9609957318923867, 1.552806631490458, 0.48972491661689566, 5.7730980695595635) _gate_q_3, _gate_q_2;
  id _gate_q_1;
  cry(6.0261727770788776) _gate_q_1, _gate_q_0;
  cx _gate_q_2, _gate_q_4;
  U(4.555002820299736, 1.9898193093503962, 1.8221132951482393) _gate_q_3;
  swap _gate_q_4, _gate_q_3;
  xx_minus_yy_5105592288(5.584577008259507, 1.2891293682572942) _gate_q_2, _gate_q_1;
  y _gate_q_0;
  ry(1.6836358680524293) _gate_q_2;
  r_5105594304(1.8709763785806568, 5.140564209641015) _gate_q_1;
  cu(2.404052733200395, 2.2456029821049808, 4.363373372680616, 4.549094829696504) _gate_q_4, _gate_q_3;
  id _gate_q_0;
  z _gate_q_4;
  rzx_5105595984(4.446112500794088) _gate_q_2, _gate_q_3;
  cu3_5105594112(6.076073964052714, 3.160615158164019, 1.723523162959386) _gate_q_1, _gate_q_0;
}
gate xx_minus_yy_5105595312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.2901933163804156) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9039989267159112) _gate_q_0;
  ry(-0.9039989267159112) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.2901933163804156) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzz_5105596368(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.653583615012065) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5105632128(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.9805416632179493) _gate_q_0;
  u1(-1.2137118208222855) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5726014963171115, 0, -1.9805416632179493) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5726014963171115, 3.194253484040235, 0) _gate_q_1;
}
gate xx_minus_yy_5105633712(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.6795325830071146) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8030085100411192) _gate_q_0;
  ry(-0.8030085100411192) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.6795325830071146) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  sxdg _gate_q_3;
  z _gate_q_0;
  xx_minus_yy_5105595312(1.8079978534318224, 1.2901933163804156) _gate_q_2, _gate_q_4;
  y _gate_q_1;
  cs _gate_q_2, _gate_q_0;
  ry(3.6671537649816197) _gate_q_1;
  rzz_5105596368(4.653583615012065) _gate_q_3, _gate_q_4;
  rz(1.786372474952057) _gate_q_3;
  cp(5.931598056814078) _gate_q_4, _gate_q_2;
  sxdg _gate_q_0;
  rx(3.559755262315348) _gate_q_1;
  cu3_5105632128(3.145202992634223, 3.194253484040235, 0.7668298423956639) _gate_q_0, _gate_q_3;
  xx_minus_yy_5105633712(1.6060170200822383, 0.6795325830071146) _gate_q_1, _gate_q_4;
  h _gate_q_2;
  crz(5.822191065208107) _gate_q_2, _gate_q_3;
  t _gate_q_1;
  csdg _gate_q_0, _gate_q_4;
}