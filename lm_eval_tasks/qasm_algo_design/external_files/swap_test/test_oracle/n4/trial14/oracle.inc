gate r_5070588960(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.756133060851859, 2.8535293350245734, -2.8535293350245734) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5070602160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.099832420839649) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7921359434151463) _gate_q_0;
  ry(-1.7921359434151463) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.099832420839649) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  rz(2.494967559466132) _gate_q_0;
  crx(0.9996424298315815) _gate_q_1, _gate_q_2;
  r_5070588960(4.756133060851859, 4.42432566181947) _gate_q_3;
  cs _gate_q_1, _gate_q_3;
  csx _gate_q_0, _gate_q_2;
  U(6.2446757291009405, 2.3421400022594114, 0.28613832347281454) _gate_q_0;
  u2(1.474081932322894, 4.987149350459516) _gate_q_2;
  xx_minus_yy_5070602160(3.5842718868302925, 4.099832420839649) _gate_q_1, _gate_q_3;
  cz _gate_q_1, _gate_q_0;
  sxdg _gate_q_3;
  tdg _gate_q_2;
}
gate xx_minus_yy_5070600864(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.459011403362519) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3299026313771827) _gate_q_0;
  ry(-1.3299026313771827) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.459011403362519) _gate_q_1;
}
gate ryy_5070587616(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1932086636700807) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  xx_minus_yy_5070600864(2.6598052627543654, 5.459011403362519) _gate_q_2, _gate_q_3;
  crx(4.3895124754885115) _gate_q_1, _gate_q_0;
  cx _gate_q_0, _gate_q_2;
  sxdg _gate_q_3;
  sx _gate_q_1;
  tdg _gate_q_2;
  ryy_5070587616(1.1932086636700807) _gate_q_0, _gate_q_1;
  u3(3.4886627616892736, 4.871949127818549, 3.0451136364036873) _gate_q_3;
  rx(1.6540778600487203) _gate_q_1;
  p(6.2396587526018505) _gate_q_2;
  cy _gate_q_0, _gate_q_3;
}