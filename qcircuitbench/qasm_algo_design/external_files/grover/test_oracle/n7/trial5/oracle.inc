gate mcphase_5367975760(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
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
  mcphase_5367975760(pi/2) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_1;
  x _gate_q_4;
  x _gate_q_6;
  c6z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_1;
  x _gate_q_4;
  x _gate_q_6;
}
gate cu1_5367982384(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
}
gate cu1_5367982480(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367986992(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367987088(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367987184(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367987280(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367987376(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367987472(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367987568(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367987664(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367987760(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367987856(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367987952(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367988048(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367988144(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367987040(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367677104(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367677200(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367677296(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367677392(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367677488(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364601712(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367977584(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367977536(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367972544(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367677008(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367677824(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367677920(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367678016(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367678112(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367678208(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5367678304(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate mcu1_5367981712(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  cu1_5367982384(pi/32) _gate_q_5, _gate_q_6;
  cx _gate_q_5, _gate_q_4;
  cu1_5367982480(-pi/32) _gate_q_4, _gate_q_6;
  cx _gate_q_5, _gate_q_4;
  cu1_5367982384(pi/32) _gate_q_4, _gate_q_6;
  cx _gate_q_4, _gate_q_3;
  cu1_5367986992(-pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_5, _gate_q_3;
  cu1_5367982384(pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_4, _gate_q_3;
  cu1_5367987088(-pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_5, _gate_q_3;
  cu1_5367982384(pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_3, _gate_q_2;
  cu1_5367987184(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5367982384(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_4, _gate_q_2;
  cu1_5367987280(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5367982384(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_3, _gate_q_2;
  cu1_5367987376(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5367982384(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_4, _gate_q_2;
  cu1_5367987472(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5367982384(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_2, _gate_q_1;
  cu1_5367987568(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5367982384(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5367987664(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5367982384(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_3, _gate_q_1;
  cu1_5367987760(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5367982384(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5367987856(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5367982384(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_2, _gate_q_1;
  cu1_5367987952(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5367982384(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5367988048(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5367982384(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_3, _gate_q_1;
  cu1_5367988144(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5367982384(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5367987040(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5367982384(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_1, _gate_q_0;
  cu1_5367677104(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5367982384(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5367677200(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5367982384(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5367677296(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5367982384(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5367677392(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5367982384(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_2, _gate_q_0;
  cu1_5367677488(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5367982384(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5364601712(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5367982384(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5367977584(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5367982384(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5367977536(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5367982384(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_1, _gate_q_0;
  cu1_5367972544(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5367982384(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5367677008(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5367982384(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5367677824(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5367982384(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5367677920(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5367982384(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_2, _gate_q_0;
  cu1_5367678016(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5367982384(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5367678112(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5367982384(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5367678208(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5367982384(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5367678304(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5367982384(pi/32) _gate_q_0, _gate_q_6;
}
gate mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  h _gate_q_6;
  mcu1_5367981712(pi) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  h _gate_q_6;
}