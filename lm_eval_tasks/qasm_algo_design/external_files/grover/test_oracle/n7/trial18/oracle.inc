gate mcphase_5364176736(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  cp(pi/32) _gate_q_4, _gate_q_5;
  cx _gate_q_4, _gate_q_3;
  cp(-pi/32) _gate_q_3, _gate_q_5;
  cx _gate_q_4, _gate_q_3;
  cp(pi/32) _gate_q_3, _gate_q_5;
  cx _gate_q_3, _gate_q_2;
  cp(-pi/32) _gate_q_2, _gate_q_5;
  cx _gate_q_4, _gate_q_2;
  cp(pi/32) _gate_q_2, _gate_q_5;
  cx _gate_q_3, _gate_q_2;
  cp(-pi/32) _gate_q_2, _gate_q_5;
  cx _gate_q_4, _gate_q_2;
  cp(pi/32) _gate_q_2, _gate_q_5;
  cx _gate_q_2, _gate_q_1;
  cp(-pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cp(pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_3, _gate_q_1;
  cp(-pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cp(pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_2, _gate_q_1;
  cp(-pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cp(pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_3, _gate_q_1;
  cp(-pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cp(pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_1, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_2, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_1, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_2, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
}
gate c6z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  U(pi/2, 0, pi) _gate_q_6;
  cx _gate_q_6, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_6, _gate_q_3;
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
  cx _gate_q_6, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_6, _gate_q_3;
  U(pi/2, pi/4, -pi) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, 0, 3*pi/4) _gate_q_3;
  U(pi/4, pi/2, -pi/2) _gate_q_6;
  cx _gate_q_6, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_6, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  U(pi/2, pi/4, -3*pi/4) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_3, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  U(pi/2, -pi/4, 3*pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_6, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_6, _gate_q_2;
  U(pi/2, pi/4, -pi) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_3, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  U(pi/2, 0, 3*pi/4) _gate_q_2;
  U(pi/4, -pi/2, pi/2) _gate_q_6;
  cx _gate_q_6, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_6, _gate_q_3;
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
  cx _gate_q_6, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_6, _gate_q_3;
  U(pi/2, pi/4, -pi) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, 0, 3*pi/4) _gate_q_3;
  U(pi/4, pi/2, -pi/2) _gate_q_6;
  cx _gate_q_6, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_6, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  U(pi/2, pi/4, -3*pi/4) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_3, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  U(pi/2, -pi/4, 3*pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_6, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_6, _gate_q_2;
  U(pi/2, pi/4, -pi) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_3, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  U(pi/2, 0, 3*pi/4) _gate_q_2;
  U(pi/2, pi/4, -pi) _gate_q_6;
  mcphase_5364176736(pi/2) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_1;
  x _gate_q_3;
  x _gate_q_4;
  x _gate_q_5;
  c6z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_1;
  x _gate_q_3;
  x _gate_q_4;
  x _gate_q_5;
}
gate cu1_5364175200(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
}
gate cu1_5364183120(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363060272(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363063392(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363062672(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363057200(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363057296(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363064208(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363060560(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363062432(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363061664(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363058688(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363061616(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363066848(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363057536(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363056816(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363056912(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363059312(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363067856(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363066032(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363067952(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5362908000(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363393184(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363394240(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363392128(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363399760(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363394288(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363395824(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363384592(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364307760(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364309488(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364316304(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate mcu1_5364172848(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  cu1_5364175200(pi/32) _gate_q_5, _gate_q_6;
  cx _gate_q_5, _gate_q_4;
  cu1_5364183120(-pi/32) _gate_q_4, _gate_q_6;
  cx _gate_q_5, _gate_q_4;
  cu1_5364175200(pi/32) _gate_q_4, _gate_q_6;
  cx _gate_q_4, _gate_q_3;
  cu1_5363060272(-pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_5, _gate_q_3;
  cu1_5364175200(pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_4, _gate_q_3;
  cu1_5363063392(-pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_5, _gate_q_3;
  cu1_5364175200(pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_3, _gate_q_2;
  cu1_5363062672(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5364175200(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_4, _gate_q_2;
  cu1_5363057200(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5364175200(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_3, _gate_q_2;
  cu1_5363057296(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5364175200(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_4, _gate_q_2;
  cu1_5363064208(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5364175200(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_2, _gate_q_1;
  cu1_5363060560(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5364175200(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5363062432(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5364175200(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_3, _gate_q_1;
  cu1_5363061664(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5364175200(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5363058688(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5364175200(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_2, _gate_q_1;
  cu1_5363061616(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5364175200(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5363066848(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5364175200(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_3, _gate_q_1;
  cu1_5363057536(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5364175200(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5363056816(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5364175200(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_1, _gate_q_0;
  cu1_5363056912(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364175200(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5363059312(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364175200(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5363067856(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364175200(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5363066032(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364175200(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_2, _gate_q_0;
  cu1_5363067952(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364175200(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5362908000(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364175200(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5363393184(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364175200(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5363394240(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364175200(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_1, _gate_q_0;
  cu1_5363392128(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364175200(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5363399760(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364175200(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5363394288(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364175200(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5363395824(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364175200(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_2, _gate_q_0;
  cu1_5363384592(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364175200(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5364307760(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364175200(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5364309488(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364175200(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5364316304(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364175200(pi/32) _gate_q_0, _gate_q_6;
}
gate mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  h _gate_q_6;
  mcu1_5364172848(pi) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  h _gate_q_6;
}