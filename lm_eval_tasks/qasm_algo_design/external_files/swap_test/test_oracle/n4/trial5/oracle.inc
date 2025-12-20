gate rzx_4371195392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_4948473424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ecr _gate_q_0, _gate_q_1 {
  rzx_4371195392(pi/4) _gate_q_0, _gate_q_1;
  x _gate_q_0;
  rzx_4948473424(-pi/4) _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105140560(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.2467200626394668) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5582263803395885) _gate_q_0;
  ry(-0.5582263803395885) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.2467200626394668) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5105147760(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.7429210048642485, 2.374557788843072, -2.374557788843072) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  rz(0.3061750476367203) _gate_q_2;
  rx(4.497344439244651) _gate_q_0;
  ecr _gate_q_1, _gate_q_3;
  sdg _gate_q_1;
  u1(2.675125987059062) _gate_q_2;
  xx_minus_yy_5105140560(1.116452760679177, 3.2467200626394668) _gate_q_3, _gate_q_0;
  iswap _gate_q_0, _gate_q_2;
  crz(3.656432625788432) _gate_q_3, _gate_q_1;
  r_5105147760(5.7429210048642485, 3.9453541156379686) _gate_q_0;
  cs _gate_q_3, _gate_q_2;
  u2(0.5450303000455223, 1.3066194373660356) _gate_q_1;
}
gate ryy_5105155872(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.04480884114287) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105150160(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.101249159635259) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  sdg _gate_q_1;
  ryy_5105155872(5.04480884114287) _gate_q_0, _gate_q_3;
  u1(2.701961894120742) _gate_q_2;
  s _gate_q_3;
  z _gate_q_0;
  cy _gate_q_2, _gate_q_1;
  ecr _gate_q_3, _gate_q_1;
  rx(1.640026936010595) _gate_q_2;
  tdg _gate_q_0;
  ryy_5105150160(4.101249159635259) _gate_q_0, _gate_q_3;
  z _gate_q_1;
  z _gate_q_2;
}