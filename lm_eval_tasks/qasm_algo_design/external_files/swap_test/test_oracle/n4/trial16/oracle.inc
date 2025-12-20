gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ry(2.8641248556083583) _gate_q_1;
  u1(2.3488480515549237) _gate_q_2;
  sx _gate_q_3;
  p(3.071657880394759) _gate_q_0;
  x _gate_q_1;
  h _gate_q_2;
  ry(2.2940935652805265) _gate_q_3;
  p(3.6097741106353616) _gate_q_0;
  z _gate_q_0;
  u1(0.4850077553048445) _gate_q_1;
  cx _gate_q_2, _gate_q_3;
  t _gate_q_2;
  cs _gate_q_1, _gate_q_3;
  x _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5070129776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.29409734395201) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1290219760765323) _gate_q_0;
  ry(-1.1290219760765323) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.29409734395201) _gate_q_1;
}
gate cu1_5070137168(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5766260061965987) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5766260061965987) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5766260061965987) _gate_q_1;
}
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
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  cs _gate_q_3, _gate_q_0;
  U(3.391708316610897, 5.786590114625333, 3.613663992274789) _gate_q_2;
  u3(0.5346912872073354, 5.313973622750441, 0.5304977409205494) _gate_q_1;
  xx_minus_yy_5070129776(2.2580439521530646, 3.29409734395201) _gate_q_0, _gate_q_2;
  u3(1.9018230889340513, 1.7147094804804697, 1.244834763323418) _gate_q_3;
  rx(1.0372663035942253) _gate_q_1;
  sdg _gate_q_0;
  cy _gate_q_2, _gate_q_1;
  U(4.122056511733232, 5.547261858277115, 3.5354363559647366) _gate_q_3;
  cu1_5070137168(1.1532520123931973) _gate_q_0, _gate_q_3;
  csx _gate_q_2, _gate_q_1;
}