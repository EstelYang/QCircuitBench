gate rzx_5104439072(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7774898889042334) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  rzx_5104439072(1.7774898889042334) _gate_q_2, _gate_q_1;
  h _gate_q_0;
  cu(6.267220378678506, 2.036585788084649, 4.171428621108837, 0.14481624153652642) _gate_q_2, _gate_q_0;
  y _gate_q_1;
  cp(3.0457699089048145) _gate_q_0, _gate_q_2;
  u3(2.3908034165798533, 3.0372371999895895, 1.5556188045723485) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5105273312(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.06837692820032194, 0.5287634407375368, -0.5287634407375368) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  swap _gate_q_0, _gate_q_2;
  sdg _gate_q_1;
  s _gate_q_0;
  dcx _gate_q_2, _gate_q_1;
  r_5105273312(0.06837692820032194, 2.0995597675324333) _gate_q_2;
  cz _gate_q_1, _gate_q_0;
}