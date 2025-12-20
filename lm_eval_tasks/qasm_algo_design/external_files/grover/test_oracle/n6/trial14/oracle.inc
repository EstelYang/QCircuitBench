gate mcphase_5364089728(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  cp(pi/16) _gate_q_3, _gate_q_4;
  cx _gate_q_3, _gate_q_2;
  cp(-pi/16) _gate_q_2, _gate_q_4;
  cx _gate_q_3, _gate_q_2;
  cp(pi/16) _gate_q_2, _gate_q_4;
  cx _gate_q_2, _gate_q_1;
  cp(-pi/16) _gate_q_1, _gate_q_4;
  cx _gate_q_3, _gate_q_1;
  cp(pi/16) _gate_q_1, _gate_q_4;
  cx _gate_q_2, _gate_q_1;
  cp(-pi/16) _gate_q_1, _gate_q_4;
  cx _gate_q_3, _gate_q_1;
  cp(pi/16) _gate_q_1, _gate_q_4;
  cx _gate_q_1, _gate_q_0;
  cp(-pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_3, _gate_q_0;
  cp(pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_2, _gate_q_0;
  cp(-pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_3, _gate_q_0;
  cp(pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_1, _gate_q_0;
  cp(-pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_3, _gate_q_0;
  cp(pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_2, _gate_q_0;
  cp(-pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_3, _gate_q_0;
  cp(pi/16) _gate_q_0, _gate_q_4;
}
gate c5z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  U(pi/2, 0, pi) _gate_q_5;
  cx _gate_q_5, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_5, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  U(pi/2, pi/4, -3*pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, -pi/4, 3*pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_5, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_5, _gate_q_3;
  U(pi/2, pi/4, -pi) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, 0, 3*pi/4) _gate_q_3;
  U(pi/4, pi/2, -pi/2) _gate_q_5;
  cx _gate_q_4, _gate_q_5;
  p(-pi/4) _gate_q_5;
  cx _gate_q_3, _gate_q_5;
  p(pi/4) _gate_q_5;
  cx _gate_q_4, _gate_q_5;
  p(pi/4) _gate_q_4;
  p(-pi/4) _gate_q_5;
  cx _gate_q_3, _gate_q_5;
  cx _gate_q_3, _gate_q_4;
  p(pi/4) _gate_q_3;
  p(-pi/4) _gate_q_4;
  cx _gate_q_3, _gate_q_4;
  U(pi/4, -pi/2, 3*pi/4) _gate_q_5;
  cx _gate_q_5, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_5, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  U(pi/2, pi/4, -3*pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, -pi/4, 3*pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_5, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_5, _gate_q_3;
  U(pi/2, pi/4, -pi) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, 0, 3*pi/4) _gate_q_3;
  U(pi/4, pi/2, -pi/2) _gate_q_5;
  cx _gate_q_4, _gate_q_5;
  p(-pi/4) _gate_q_5;
  cx _gate_q_3, _gate_q_5;
  p(pi/4) _gate_q_5;
  cx _gate_q_4, _gate_q_5;
  p(pi/4) _gate_q_4;
  p(-pi/4) _gate_q_5;
  cx _gate_q_3, _gate_q_5;
  cx _gate_q_3, _gate_q_4;
  p(pi/4) _gate_q_3;
  p(-pi/4) _gate_q_4;
  cx _gate_q_3, _gate_q_4;
  U(pi/2, pi/4, -3*pi/4) _gate_q_5;
  mcphase_5364089728(pi/2) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_4;
  x _gate_q_5;
  c5z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5;
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_4;
  x _gate_q_5;
}
gate cu1_5364087072(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
}
gate cu1_5364075120(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364077136(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364075552(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364077088(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364079200(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364077856(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364081504(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364078000(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364073200(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364080880(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364083184(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364080640(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364077232(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364077904(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364086976(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate mcu1_5364080928(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  cu1_5364087072(pi/16) _gate_q_4, _gate_q_5;
  cx _gate_q_4, _gate_q_3;
  cu1_5364075120(-pi/16) _gate_q_3, _gate_q_5;
  cx _gate_q_4, _gate_q_3;
  cu1_5364087072(pi/16) _gate_q_3, _gate_q_5;
  cx _gate_q_3, _gate_q_2;
  cu1_5364077136(-pi/16) _gate_q_2, _gate_q_5;
  cx _gate_q_4, _gate_q_2;
  cu1_5364087072(pi/16) _gate_q_2, _gate_q_5;
  cx _gate_q_3, _gate_q_2;
  cu1_5364075552(-pi/16) _gate_q_2, _gate_q_5;
  cx _gate_q_4, _gate_q_2;
  cu1_5364087072(pi/16) _gate_q_2, _gate_q_5;
  cx _gate_q_2, _gate_q_1;
  cu1_5364077088(-pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cu1_5364087072(pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_3, _gate_q_1;
  cu1_5364079200(-pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cu1_5364087072(pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_2, _gate_q_1;
  cu1_5364077856(-pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cu1_5364087072(pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_3, _gate_q_1;
  cu1_5364081504(-pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cu1_5364087072(pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_1, _gate_q_0;
  cu1_5364078000(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364087072(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cu1_5364073200(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364087072(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_2, _gate_q_0;
  cu1_5364080880(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364087072(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cu1_5364083184(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364087072(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_1, _gate_q_0;
  cu1_5364080640(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364087072(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cu1_5364077232(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364087072(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_2, _gate_q_0;
  cu1_5364077904(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364087072(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cu1_5364086976(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364087072(pi/16) _gate_q_0, _gate_q_5;
}
gate mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  h _gate_q_5;
  mcu1_5364080928(pi) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5;
  h _gate_q_5;
}