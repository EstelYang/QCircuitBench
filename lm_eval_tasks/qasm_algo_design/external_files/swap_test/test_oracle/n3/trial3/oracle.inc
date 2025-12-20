gate cu1_5104444112(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7397810152744351) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7397810152744351) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7397810152744351) _gate_q_1;
}
gate cu3_5104444448(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.9182477274855216) _gate_q_0;
  u1(-0.31702236462746014) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8044527186680972, 0, -3.9182477274855216) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8044527186680972, 4.235270092112982, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  u2(1.3518930004698106, 3.681181248586961) _gate_q_1;
  cu1_5104444112(1.4795620305488701) _gate_q_0, _gate_q_2;
  cu3_5104444448(3.6089054373361944, 4.235270092112982, 3.6012253628580617) _gate_q_1, _gate_q_0;
  y _gate_q_2;
  tdg _gate_q_2;
  csdg _gate_q_1, _gate_q_0;
}
gate rzz_5104438256(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.324669323309314) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5104439024(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.023464423871839057) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.023464423871839057) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.023464423871839057) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  ch _gate_q_2, _gate_q_1;
  u3(4.319857123826939, 2.964208341195295, 1.2881641136812878) _gate_q_0;
  rzz_5104438256(5.324669323309314) _gate_q_2, _gate_q_1;
  u1(2.6803087816433924) _gate_q_0;
  ry(5.663897523660892) _gate_q_1;
  cu1_5104439024(0.046928847743678115) _gate_q_0, _gate_q_2;
}