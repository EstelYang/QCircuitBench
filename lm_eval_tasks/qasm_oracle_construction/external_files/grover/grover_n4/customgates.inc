gate mcphase_6064821008(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2 {
  cp(pi/4) _gate_q_1, _gate_q_2;
  cx _gate_q_1, _gate_q_0;
  cp(-pi/4) _gate_q_0, _gate_q_2;
  cx _gate_q_1, _gate_q_0;
  cp(pi/4) _gate_q_0, _gate_q_2;
}
gate c3z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  U(pi/2, 0, pi) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(pi/4) _gate_q_1;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_0;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  U(pi/2, -pi/4, -3*pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  U(pi/2, 0, -3*pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(pi/4) _gate_q_1;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_0;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  U(pi/2, -pi/4, -3*pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  U(0, -7*pi/8, -7*pi/8) _gate_q_3;
  mcphase_6064821008(pi/2) _gate_q_0, _gate_q_1, _gate_q_2;
}