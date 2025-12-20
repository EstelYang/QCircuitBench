gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rzz_5070811360(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.5202041309208187) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5070808048(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.1974258885465145) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5660310444523304) _gate_q_1;
  ry(-2.5660310444523304) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.1974258885465145) _gate_q_0;
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
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  swap _gate_q_3, _gate_q_0;
  cp(1.1787068835673078) _gate_q_4, _gate_q_2;
  z _gate_q_1;
  tdg _gate_q_0;
  sxdg _gate_q_3;
  rzz_5070811360(3.5202041309208187) _gate_q_1, _gate_q_4;
  y _gate_q_2;
  xx_plus_yy_5070808048(5.132062088904661, 6.1974258885465145) _gate_q_4, _gate_q_3;
  u3(4.169088339821267, 0.4972890942166385, 2.7383380663039083) _gate_q_2;
  h _gate_q_0;
  p(4.467879774166196) _gate_q_1;
  u1(5.663633303861702) _gate_q_4;
  y _gate_q_2;
  crx(2.546173882424426) _gate_q_1, _gate_q_3;
  u3(3.5706425085596947, 4.105365503320684, 2.6447258365210837) _gate_q_0;
  u3(5.852503413162767, 5.965291081229855, 4.38882349114294) _gate_q_1;
  rz(1.6264979722292436) _gate_q_2;
  ecr _gate_q_4, _gate_q_0;
  U(2.626737515986649, 3.002524884569908, 3.998568768902935) _gate_q_3;
}
gate rzz_5070811120(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.04528602872566) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5070811264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7765065447897461) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  p(0.5366598554508072) _gate_q_1;
  rz(3.4951443206210198) _gate_q_4;
  u2(2.323769704276745, 3.013020113622196) _gate_q_3;
  x _gate_q_0;
  u1(5.107486171250162) _gate_q_2;
  rzz_5070811120(6.04528602872566) _gate_q_2, _gate_q_3;
  iswap _gate_q_4, _gate_q_0;
  sx _gate_q_1;
  dcx _gate_q_0, _gate_q_2;
  u2(4.439181951619902, 4.965799322226913) _gate_q_3;
  dcx _gate_q_1, _gate_q_4;
  crz(2.2555310670482296) _gate_q_2, _gate_q_1;
  rzx_5070811264(1.7765065447897461) _gate_q_3, _gate_q_0;
  t _gate_q_4;
  sdg _gate_q_3;
  swap _gate_q_1, _gate_q_2;
  cu(3.7776446856508867, 0.5288357990131944, 1.494283161206641, 1.2211095845805537) _gate_q_4, _gate_q_0;
}