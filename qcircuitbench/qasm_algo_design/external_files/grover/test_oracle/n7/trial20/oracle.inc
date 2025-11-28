gate mcphase_5368051760(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
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
  mcphase_5368051760(pi/2) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_3;
  x _gate_q_4;
  c6z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_3;
  x _gate_q_4;
}
gate cu1_5368126864(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
}
gate cu1_5368120384(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895244304(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895244496(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895244400(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895244256(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895244832(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895244880(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895244976(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895245120(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895244928(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895242240(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895245072(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895245168(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895245024(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895245312(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895245216(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895245648(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895245840(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895245744(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895245600(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895246176(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895246224(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895246320(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895246464(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368131616(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5368121968(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895298544(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895296048(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895244208(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895246512(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5895246368(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate mcu1_5368122544(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  cu1_5368126864(pi/32) _gate_q_5, _gate_q_6;
  cx _gate_q_5, _gate_q_4;
  cu1_5368120384(-pi/32) _gate_q_4, _gate_q_6;
  cx _gate_q_5, _gate_q_4;
  cu1_5368126864(pi/32) _gate_q_4, _gate_q_6;
  cx _gate_q_4, _gate_q_3;
  cu1_5895244304(-pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_5, _gate_q_3;
  cu1_5368126864(pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_4, _gate_q_3;
  cu1_5895244496(-pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_5, _gate_q_3;
  cu1_5368126864(pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_3, _gate_q_2;
  cu1_5895244400(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5368126864(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_4, _gate_q_2;
  cu1_5895244256(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5368126864(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_3, _gate_q_2;
  cu1_5895244832(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5368126864(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_4, _gate_q_2;
  cu1_5895244880(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5368126864(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_2, _gate_q_1;
  cu1_5895244976(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5368126864(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5895245120(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5368126864(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_3, _gate_q_1;
  cu1_5895244928(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5368126864(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5895242240(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5368126864(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_2, _gate_q_1;
  cu1_5895245072(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5368126864(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5895245168(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5368126864(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_3, _gate_q_1;
  cu1_5895245024(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5368126864(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5895245312(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5368126864(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_1, _gate_q_0;
  cu1_5895245216(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368126864(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5895245648(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368126864(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5895245840(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368126864(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5895245744(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368126864(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_2, _gate_q_0;
  cu1_5895245600(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368126864(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5895246176(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368126864(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5895246224(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368126864(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5895246320(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368126864(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_1, _gate_q_0;
  cu1_5895246464(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368126864(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5368131616(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368126864(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5368121968(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368126864(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5895298544(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368126864(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_2, _gate_q_0;
  cu1_5895296048(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368126864(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5895244208(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368126864(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5895246512(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368126864(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5895246368(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5368126864(pi/32) _gate_q_0, _gate_q_6;
}
gate mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  h _gate_q_6;
  mcu1_5368122544(pi) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  h _gate_q_6;
}