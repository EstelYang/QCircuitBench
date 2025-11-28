gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzx_5043124656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5043124704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ecr _gate_q_0, _gate_q_1 {
  rzx_5043124656(pi/4) _gate_q_0, _gate_q_1;
  x _gate_q_0;
  rzx_5043124704(-pi/4) _gate_q_0, _gate_q_1;
}
gate ryy_5070803584(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.32703165572021) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  iswap _gate_q_3, _gate_q_2;
  swap _gate_q_4, _gate_q_0;
  s _gate_q_1;
  y _gate_q_1;
  swap _gate_q_2, _gate_q_4;
  rx(0.45900802005148494) _gate_q_3;
  p(0.23134941035532208) _gate_q_0;
  p(1.5296582035285284) _gate_q_3;
  s _gate_q_0;
  ry(1.270703978622472) _gate_q_2;
  x _gate_q_4;
  z _gate_q_1;
  t _gate_q_4;
  ecr _gate_q_2, _gate_q_3;
  ryy_5070803584(5.32703165572021) _gate_q_0, _gate_q_1;
  crx(2.9890348824881814) _gate_q_2, _gate_q_3;
  t _gate_q_0;
  cy _gate_q_1, _gate_q_4;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5070807568(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.7053787847567823) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0615788791796135) _gate_q_0;
  ry(-2.0615788791796135) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.7053787847567823) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  cu(5.280409821208773, 0.21885368886944953, 3.8703920220749386, 5.819197375147104) _gate_q_1, _gate_q_3;
  cu(4.7060914801234155, 0.5334609174787113, 0.23239246672768535, 3.219789824932134) _gate_q_0, _gate_q_4;
  rz(5.539543351245979) _gate_q_2;
  iswap _gate_q_2, _gate_q_1;
  crz(1.1717803037335572) _gate_q_3, _gate_q_0;
  z _gate_q_4;
  ecr _gate_q_0, _gate_q_1;
  csx _gate_q_4, _gate_q_2;
  ry(5.783263991519741) _gate_q_3;
  crz(2.781875515673342) _gate_q_1, _gate_q_0;
  z _gate_q_4;
  cz _gate_q_2, _gate_q_3;
  xx_minus_yy_5070807568(4.123157758359227, 2.7053787847567823) _gate_q_1, _gate_q_2;
  cz _gate_q_3, _gate_q_0;
  id _gate_q_4;
}