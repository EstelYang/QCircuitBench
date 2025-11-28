gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5070307296(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.3126053498355286, 3.366545916095035, -3.366545916095035) _gate_q_0;
}
gate cu3_5070292032(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.079895815491617) _gate_q_0;
  u1(1.317678219398636) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.11606939833227524, 0, -3.079895815491617) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.11606939833227524, 1.7622175960929811, 0) _gate_q_1;
}
gate ryy_5070292512(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5792271585299316) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5070303696(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.610548544841324, 1.6160985177720288, -1.6160985177720288) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  csdg _gate_q_2, _gate_q_3;
  h _gate_q_1;
  u1(4.704358703124917) _gate_q_4;
  r_5070307296(3.3126053498355286, 4.937342242889931) _gate_q_0;
  crz(3.282472824004205) _gate_q_2, _gate_q_0;
  s _gate_q_4;
  z _gate_q_1;
  p(1.5466100993381906) _gate_q_3;
  cy _gate_q_1, _gate_q_0;
  sx _gate_q_3;
  cy _gate_q_4, _gate_q_2;
  u3(4.608924514032702, 4.300813095019781, 3.39823418854696) _gate_q_2;
  cz _gate_q_0, _gate_q_4;
  cu3_5070292032(0.23213879666455048, 1.7622175960929811, 4.397574034890253) _gate_q_1, _gate_q_3;
  ryy_5070292512(0.5792271585299316) _gate_q_1, _gate_q_3;
  u2(2.609275482645012, 0.4131942757071478) _gate_q_4;
  r_5070303696(4.610548544841324, 3.1868948445669254) _gate_q_2;
  h _gate_q_0;
}
gate rxx_5070307008(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.26169132995848376) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu1_5070303840(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5083118917965989) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5083118917965989) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5083118917965989) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5070292416(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.0669670054091007) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5694518015230932) _gate_q_1;
  ry(-1.5694518015230932) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.0669670054091007) _gate_q_0;
}
gate rxx_5070292896(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7296548387031305) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  rxx_5070307008(0.26169132995848376) _gate_q_4, _gate_q_3;
  cs _gate_q_2, _gate_q_0;
  h _gate_q_1;
  cu1_5070303840(1.0166237835931977) _gate_q_2, _gate_q_1;
  s _gate_q_0;
  cz _gate_q_3, _gate_q_4;
  ch _gate_q_0, _gate_q_1;
  cx _gate_q_2, _gate_q_3;
  h _gate_q_4;
  xx_plus_yy_5070292416(3.1389036030461863, 3.0669670054091007) _gate_q_4, _gate_q_0;
  id _gate_q_3;
  t _gate_q_1;
  tdg _gate_q_2;
  rxx_5070292896(3.7296548387031305) _gate_q_1, _gate_q_3;
  ch _gate_q_0, _gate_q_4;
  h _gate_q_2;
}