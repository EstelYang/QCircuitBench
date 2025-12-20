gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
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
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  t _gate_q_3;
  sxdg _gate_q_0;
  h _gate_q_1;
  s _gate_q_2;
  sxdg _gate_q_1;
  id _gate_q_3;
  tdg _gate_q_0;
  u2(1.2477759514738715, 4.068508701957224) _gate_q_2;
  sx _gate_q_2;
  s _gate_q_0;
  t _gate_q_3;
  rz(2.070778208528163) _gate_q_1;
  u1(3.0858706859031644) _gate_q_2;
  ecr _gate_q_0, _gate_q_1;
  sdg _gate_q_3;
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
gate xx_plus_yy_5070730400(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.543688029877004) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.3660723490914887) _gate_q_1;
  ry(-0.3660723490914887) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.543688029877004) _gate_q_0;
}
gate rxx_5070730832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7090876311031384) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  csx _gate_q_0, _gate_q_2;
  t _gate_q_3;
  x _gate_q_1;
  xx_plus_yy_5070730400(0.7321446981829774, 5.543688029877004) _gate_q_1, _gate_q_3;
  U(0.11690481976327001, 2.350082760726515, 1.7127483158969734) _gate_q_2;
  y _gate_q_0;
  rxx_5070730832(1.7090876311031384) _gate_q_1, _gate_q_2;
  dcx _gate_q_0, _gate_q_3;
  rz(6.056527664226775) _gate_q_0;
  rz(5.290745685544134) _gate_q_2;
  sdg _gate_q_1;
  s _gate_q_3;
}