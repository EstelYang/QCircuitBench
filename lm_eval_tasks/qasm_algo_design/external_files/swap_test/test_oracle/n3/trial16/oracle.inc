gate cu1_5070429536(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4744511317083149) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4744511317083149) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4744511317083149) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  swap _gate_q_0, _gate_q_1;
  id _gate_q_2;
  sx _gate_q_1;
  cu1_5070429536(2.9489022634166298) _gate_q_2, _gate_q_0;
  csdg _gate_q_0, _gate_q_1;
  U(3.2817093497376337, 0.5507289114638938, 4.905569418389375) _gate_q_2;
}
gate rzx_5070434144(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6067412326969293) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5070428528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.5490406133386836) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.664816777542975) _gate_q_1;
  ry(-2.664816777542975) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.5490406133386836) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  rzx_5070434144(3.6067412326969293) _gate_q_1, _gate_q_0;
  rz(3.4700259811953) _gate_q_2;
  ry(2.0983262412266384) _gate_q_0;
  xx_plus_yy_5070428528(5.32963355508595, 2.5490406133386836) _gate_q_2, _gate_q_1;
  cz _gate_q_1, _gate_q_0;
  id _gate_q_2;
}