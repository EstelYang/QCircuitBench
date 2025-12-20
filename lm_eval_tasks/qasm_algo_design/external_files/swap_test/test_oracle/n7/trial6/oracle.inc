gate cu1_5106024416(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.498103950880102) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.498103950880102) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.498103950880102) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzz_5106015776(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.707707096086834) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5106009776(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.229150286101096, 0.6535790297066031, -0.6535790297066031) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rxx_5106106496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.452677806401948) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rzz_5106106592(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.0862387153989195) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  cu1_5106024416(4.996207901760204) _gate_q_0, _gate_q_6;
  dcx _gate_q_2, _gate_q_3;
  ry(2.1035135251920445) _gate_q_1;
  u2(3.5759983455931073, 0.6405448177538551) _gate_q_4;
  h _gate_q_5;
  s _gate_q_3;
  rz(4.621539697548264) _gate_q_1;
  rz(1.9102791776992774) _gate_q_2;
  rz(1.2339035333888724) _gate_q_0;
  cs _gate_q_5, _gate_q_6;
  sx _gate_q_4;
  rz(1.6019675194905763) _gate_q_6;
  rz(4.245706357381521) _gate_q_5;
  sdg _gate_q_3;
  rzz_5106015776(3.707707096086834) _gate_q_0, _gate_q_2;
  cx _gate_q_1, _gate_q_4;
  s _gate_q_5;
  r_5106009776(6.229150286101096, 2.2243753565014996) _gate_q_3;
  x _gate_q_2;
  iswap _gate_q_4, _gate_q_6;
  dcx _gate_q_0, _gate_q_1;
  id _gate_q_5;
  u3(1.430820341129111, 1.1321786176151458, 2.2870500954056587) _gate_q_3;
  cx _gate_q_6, _gate_q_2;
  rz(2.2845871407986236) _gate_q_0;
  z _gate_q_1;
  rx(4.227490164582405) _gate_q_4;
  dcx _gate_q_6, _gate_q_3;
  t _gate_q_1;
  rxx_5106106496(1.452677806401948) _gate_q_5, _gate_q_2;
  cy _gate_q_4, _gate_q_0;
  sxdg _gate_q_1;
  u3(2.365545551883262, 4.0531846038377575, 2.1514309272711754) _gate_q_4;
  rzz_5106106592(2.0862387153989195) _gate_q_3, _gate_q_5;
  cp(3.926451036413377) _gate_q_0, _gate_q_2;
  p(1.8095638625963009) _gate_q_6;
}
gate cu1_5106108560(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.7968672059821693) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.7968672059821693) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.7968672059821693) _gate_q_1;
}
gate cu1_5106108656(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.5473485010018595) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.5473485010018595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.5473485010018595) _gate_q_1;
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
gate r_5106108752(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.2449051312430655, -0.8258050184995025, 0.8258050184995025) _gate_q_0;
}
gate rxx_5106108800(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.2879604241488005) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5106108848(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8922818247201567) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5106108896(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.6192176776238405, 2.608668367596942, -2.608668367596942) _gate_q_0;
}
gate r_5106108944(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.3143267705200135, 2.2440277527058123, -2.2440277527058123) _gate_q_0;
}
gate cu1_5106108992(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.0208960158029) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.0208960158029) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.0208960158029) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_minus_yy_5106109232(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.412457917313736) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5169053936329555) _gate_q_0;
  ry(-1.5169053936329555) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.412457917313736) _gate_q_1;
}
gate xx_plus_yy_5106109424(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.328881442974118) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2347682640502073) _gate_q_1;
  ry(-1.2347682640502073) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.328881442974118) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  u1(3.335545790608717) _gate_q_5;
  cu1_5106108560(5.593734411964339) _gate_q_4, _gate_q_3;
  cu1_5106108656(5.094697002003719) _gate_q_6, _gate_q_2;
  cs _gate_q_0, _gate_q_1;
  csx _gate_q_2, _gate_q_0;
  r_5106108752(3.2449051312430655, 0.7449913082953941) _gate_q_1;
  rxx_5106108800(5.2879604241488005) _gate_q_5, _gate_q_6;
  h _gate_q_4;
  y _gate_q_3;
  rxx_5106108848(2.8922818247201567) _gate_q_5, _gate_q_3;
  r_5106108896(3.6192176776238405, 4.1794646943918385) _gate_q_2;
  r_5106108944(3.3143267705200135, 3.814824079500709) _gate_q_0;
  cu1_5106108992(4.0417920316058) _gate_q_4, _gate_q_6;
  ry(4.097706364511562) _gate_q_1;
  z _gate_q_5;
  csdg _gate_q_3, _gate_q_0;
  u3(6.004692720623035, 5.237720119708345, 1.3772173345173093) _gate_q_2;
  s _gate_q_1;
  x _gate_q_4;
  u3(2.111235157201484, 1.5404241546636903, 2.641240049496556) _gate_q_6;
  s _gate_q_5;
  xx_minus_yy_5106109232(3.033810787265911, 2.412457917313736) _gate_q_6, _gate_q_1;
  rx(4.7950951245579265) _gate_q_4;
  cz _gate_q_3, _gate_q_0;
  y _gate_q_2;
  cy _gate_q_2, _gate_q_6;
  cs _gate_q_1, _gate_q_4;
  u3(0.896418968506269, 0.33205879341471783, 3.586906428376597) _gate_q_3;
  id _gate_q_5;
  sx _gate_q_0;
  ry(2.3337067554795956) _gate_q_4;
  cz _gate_q_2, _gate_q_1;
  csdg _gate_q_3, _gate_q_0;
  xx_plus_yy_5106109424(2.4695365281004147, 5.328881442974118) _gate_q_5, _gate_q_6;
}