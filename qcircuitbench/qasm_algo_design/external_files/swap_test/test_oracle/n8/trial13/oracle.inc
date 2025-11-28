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
gate cu3_5072834336(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.845812999545277) _gate_q_0;
  u1(-1.6498004995333955) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.022407196833547, 0, -3.845812999545277) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.022407196833547, 5.495613499078672, 0) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzz_5072835920(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.68316857003087) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5072835392(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.3791603418150995) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5622403914876886) _gate_q_0;
  ry(-2.5622403914876886) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.3791603418150995) _gate_q_1;
}
gate cu3_5072834432(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.7181909339827843) _gate_q_0;
  u1(-0.029188202380458605) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.507629459180854, 0, -0.7181909339827843) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.507629459180854, 0.7473791363632429, 0) _gate_q_1;
}
gate rzz_5072835872(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.1308585389156502) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5072836304(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4201578228508724) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4201578228508724) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4201578228508724) _gate_q_1;
}
gate ryy_5072835536(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.678457561502888) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_minus_yy_5072837264(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.891679341486816) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.01689477357307036) _gate_q_0;
  ry(-0.01689477357307036) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.891679341486816) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  csx _gate_q_3, _gate_q_2;
  cry(2.2790184810007816) _gate_q_0, _gate_q_6;
  u2(2.0033262346722283, 4.872862700164921) _gate_q_7;
  crz(3.2863878008003202) _gate_q_5, _gate_q_4;
  x _gate_q_1;
  sx _gate_q_3;
  sxdg _gate_q_1;
  cy _gate_q_0, _gate_q_4;
  ry(3.6960884607582125) _gate_q_2;
  cu3_5072834336(6.044814393667094, 5.495613499078672, 2.1960125000118813) _gate_q_6, _gate_q_5;
  y _gate_q_7;
  cs _gate_q_2, _gate_q_4;
  rzz_5072835920(0.68316857003087) _gate_q_7, _gate_q_6;
  tdg _gate_q_0;
  xx_minus_yy_5072835392(5.124480782975377, 4.3791603418150995) _gate_q_3, _gate_q_1;
  sdg _gate_q_5;
  cu3_5072834432(5.015258918361708, 0.7473791363632429, 0.6890027316023257) _gate_q_0, _gate_q_2;
  tdg _gate_q_7;
  cy _gate_q_5, _gate_q_6;
  rzz_5072835872(2.1308585389156502) _gate_q_1, _gate_q_4;
  y _gate_q_3;
  cu1_5072836304(2.840315645701745) _gate_q_3, _gate_q_2;
  t _gate_q_0;
  cs _gate_q_1, _gate_q_4;
  ryy_5072835536(0.678457561502888) _gate_q_7, _gate_q_6;
  p(3.0936464266672314) _gate_q_5;
  csx _gate_q_1, _gate_q_4;
  crz(3.9388353957390967) _gate_q_7, _gate_q_0;
  dcx _gate_q_5, _gate_q_2;
  swap _gate_q_3, _gate_q_6;
  s _gate_q_4;
  cp(0.3670539340063775) _gate_q_3, _gate_q_1;
  xx_minus_yy_5072837264(0.03378954714614072, 3.891679341486816) _gate_q_7, _gate_q_0;
  cx _gate_q_6, _gate_q_5;
  z _gate_q_2;
  tdg _gate_q_5;
  z _gate_q_1;
  cx _gate_q_0, _gate_q_2;
  U(0.288266950094837, 1.3340938292010514, 0.07925096070494751) _gate_q_7;
  u1(1.8468882023924262) _gate_q_6;
  cry(5.789925712609471) _gate_q_4, _gate_q_3;
}
gate xx_minus_yy_5072840480(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.0344060273845432) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.067069822611096) _gate_q_0;
  ry(-2.067069822611096) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.0344060273845432) _gate_q_1;
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
gate r_5072844416(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.807540561572486, 1.3014946165230432, -1.3014946165230432) _gate_q_0;
}
gate cu1_5072844368(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.2283048030845123) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.2283048030845123) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.2283048030845123) _gate_q_1;
}
gate cu1_5072841440(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5456681658626101) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5456681658626101) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5456681658626101) _gate_q_1;
}
gate rzz_5072843312(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.660771630431848) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5072844944(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.9372757958364097) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  rz(3.3410706428622423) _gate_q_4;
  sx _gate_q_7;
  sdg _gate_q_2;
  x _gate_q_0;
  u1(5.459912874904852) _gate_q_3;
  z _gate_q_6;
  xx_minus_yy_5072840480(4.134139645222192, 3.0344060273845432) _gate_q_1, _gate_q_5;
  sxdg _gate_q_0;
  u1(1.952927218561299) _gate_q_5;
  U(0.8871783759740083, 1.3017264630331677, 3.7057512087255855) _gate_q_4;
  u1(0.3839356185847301) _gate_q_7;
  u3(4.993687259949853, 3.6864819000695546, 4.2374001179599805) _gate_q_1;
  tdg _gate_q_6;
  u2(5.055677520606053, 4.02852932173118) _gate_q_3;
  rx(3.5197082245483666) _gate_q_2;
  s _gate_q_2;
  cz _gate_q_6, _gate_q_3;
  h _gate_q_5;
  ecr _gate_q_7, _gate_q_1;
  cu(5.707227052618408, 5.166121102700346, 2.282957972951472, 0.8757334469468027) _gate_q_4, _gate_q_0;
  r_5072844416(5.807540561572486, 2.8722909433179398) _gate_q_3;
  cs _gate_q_7, _gate_q_6;
  cu1_5072844368(4.456609606169025) _gate_q_5, _gate_q_4;
  cx _gate_q_2, _gate_q_0;
  x _gate_q_1;
  rz(5.186769723201746) _gate_q_7;
  z _gate_q_2;
  U(3.022280752681086, 6.270964794927988, 3.725193118101028) _gate_q_5;
  rx(6.028844168991679) _gate_q_4;
  csx _gate_q_0, _gate_q_1;
  y _gate_q_6;
  sdg _gate_q_3;
  rz(4.455801560311243) _gate_q_1;
  cry(4.001728979728268) _gate_q_7, _gate_q_6;
  s _gate_q_2;
  cu1_5072841440(3.0913363317252203) _gate_q_5, _gate_q_4;
  sdg _gate_q_0;
  u3(6.11907035664376, 2.94797112443486, 4.395755674826717) _gate_q_3;
  ecr _gate_q_7, _gate_q_6;
  u1(5.976581755506033) _gate_q_1;
  ry(4.878678442841512) _gate_q_0;
  cx _gate_q_4, _gate_q_3;
  rzz_5072843312(3.660771630431848) _gate_q_2, _gate_q_5;
  rz(1.6308908833940141) _gate_q_7;
  cz _gate_q_4, _gate_q_5;
  cy _gate_q_0, _gate_q_3;
  sx _gate_q_2;
  rzz_5072844944(2.9372757958364097) _gate_q_6, _gate_q_1;
}