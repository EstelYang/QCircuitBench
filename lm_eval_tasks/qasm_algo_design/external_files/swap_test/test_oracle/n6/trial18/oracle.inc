gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072112960(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.7626776726951694) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.34796147747130957) _gate_q_1;
  ry(-0.34796147747130957) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.7626776726951694) _gate_q_0;
}
gate r_5072118528(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8275776874061984, 3.2803825913418416, -3.2803825913418416) _gate_q_0;
}
gate xx_plus_yy_5072111328(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.839243452173025) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7258655898560491) _gate_q_1;
  ry(-0.7258655898560491) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.839243452173025) _gate_q_0;
}
gate ryy_5072110944(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.032547873732215) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5072111280(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.791083419664609) _gate_q_0;
  u1(-1.4705375977741366) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8337062105369791, 0, -3.791083419664609) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8337062105369791, 5.261621017438745, 0) _gate_q_1;
}
gate rzx_5072115264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.525027894466256) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5072112528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.0864594274404067) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.509268434228875) _gate_q_0;
  ry(-1.509268434228875) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.0864594274404067) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  u2(3.582819930008114, 2.1307544573197164) _gate_q_2;
  y _gate_q_4;
  crz(4.106255509408537) _gate_q_0, _gate_q_5;
  tdg _gate_q_3;
  id _gate_q_1;
  xx_plus_yy_5072112960(0.6959229549426191, 3.7626776726951694) _gate_q_2, _gate_q_5;
  cz _gate_q_0, _gate_q_4;
  r_5072118528(0.8275776874061984, 4.851178918136738) _gate_q_3;
  z _gate_q_1;
  xx_plus_yy_5072111328(1.4517311797120982, 4.839243452173025) _gate_q_1, _gate_q_0;
  cu(5.951083136453576, 3.6150363718148744, 3.764743032013476, 5.708290051238368) _gate_q_2, _gate_q_4;
  ryy_5072110944(5.032547873732215) _gate_q_3, _gate_q_5;
  cu3_5072111280(1.6674124210739583, 5.261621017438745, 2.320545821890472) _gate_q_0, _gate_q_1;
  cu(1.6365184976754925, 6.037478224844243, 3.6616423670332683, 3.696450938443734) _gate_q_5, _gate_q_3;
  x _gate_q_4;
  s _gate_q_2;
  cz _gate_q_4, _gate_q_2;
  z _gate_q_1;
  ry(4.5483196391937595) _gate_q_3;
  rzx_5072115264(1.525027894466256) _gate_q_5, _gate_q_0;
  xx_minus_yy_5072112528(3.01853686845775, 1.0864594274404067) _gate_q_3, _gate_q_2;
  u2(5.7602391335957455, 6.204939311350064) _gate_q_5;
  csdg _gate_q_4, _gate_q_1;
  U(6.2005130729786595, 1.3863389219175821, 5.026070157267883) _gate_q_0;
}
gate r_5072116080(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.48585050360165144, 4.237436175899466, -4.237436175899466) _gate_q_0;
}
gate xx_minus_yy_5072116944(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.490465232860671) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.178177855265097) _gate_q_0;
  ry(-2.178177855265097) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.490465232860671) _gate_q_1;
}
gate cu1_5072117184(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.0330191657205785) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.0330191657205785) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.0330191657205785) _gate_q_1;
}
gate rzz_5072117472(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.427100074205234) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5072117520(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.6420839903694724) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.07382486599511835) _gate_q_0;
  ry(-0.07382486599511835) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.6420839903694724) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  u2(5.605030537590765, 0.6284941754762375) _gate_q_4;
  ch _gate_q_0, _gate_q_2;
  ch _gate_q_1, _gate_q_3;
  r_5072116080(0.48585050360165144, 5.808232502694363) _gate_q_5;
  xx_minus_yy_5072116944(4.356355710530194, 3.490465232860671) _gate_q_4, _gate_q_3;
  sdg _gate_q_1;
  swap _gate_q_2, _gate_q_0;
  rx(3.356990968793096) _gate_q_5;
  cu1_5072117184(6.066038331441157) _gate_q_4, _gate_q_2;
  sdg _gate_q_0;
  cry(4.036884847700481) _gate_q_5, _gate_q_3;
  u2(3.598747540661559, 1.7021038432304885) _gate_q_1;
  cp(5.785105991463078) _gate_q_0, _gate_q_5;
  ry(5.114718673954906) _gate_q_3;
  rzz_5072117472(5.427100074205234) _gate_q_1, _gate_q_4;
  u2(2.410831649689421, 4.267525847231094) _gate_q_2;
  xx_minus_yy_5072117520(0.1476497319902367, 1.6420839903694724) _gate_q_3, _gate_q_1;
  u2(0.7506114051560185, 0.13163253641952088) _gate_q_2;
  tdg _gate_q_5;
  sdg _gate_q_4;
  rz(0.9436700578658858) _gate_q_0;
  cu(6.075309263525486, 1.8234771582806757, 5.925252254533826, 6.164209740637839) _gate_q_2, _gate_q_3;
  u3(0.7495205049463073, 5.3072193478290695, 3.9282025914285876) _gate_q_1;
  p(2.798223058568358) _gate_q_5;
  z _gate_q_4;
  sx _gate_q_0;
}