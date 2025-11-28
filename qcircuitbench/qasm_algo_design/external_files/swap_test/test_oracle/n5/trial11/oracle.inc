gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5070811936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.13272776036297346) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6899609009438414) _gate_q_1;
  ry(-0.6899609009438414) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.13272776036297346) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  sx _gate_q_4;
  p(1.3187619932840422) _gate_q_0;
  xx_plus_yy_5070811936(1.3799218018876829, 0.13272776036297346) _gate_q_3, _gate_q_2;
  rx(0.09384919203175181) _gate_q_1;
  ch _gate_q_1, _gate_q_3;
  csdg _gate_q_2, _gate_q_4;
  t _gate_q_0;
  x _gate_q_1;
  id _gate_q_3;
  ch _gate_q_2, _gate_q_4;
  u2(0.8141464715941424, 1.2605476992116234) _gate_q_0;
  rx(5.708552995461996) _gate_q_1;
  iswap _gate_q_4, _gate_q_3;
  crz(4.110424708929939) _gate_q_0, _gate_q_2;
  dcx _gate_q_4, _gate_q_1;
  cx _gate_q_3, _gate_q_2;
  x _gate_q_0;
}
gate xx_minus_yy_5070799792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.5090581083344032) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.236802406263294) _gate_q_0;
  ry(-2.236802406263294) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.5090581083344032) _gate_q_1;
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
gate xx_minus_yy_5070800224(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.654659307988235) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5176638106683286) _gate_q_0;
  ry(-0.5176638106683286) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.654659307988235) _gate_q_1;
}
gate rzx_5070799312(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6266720687276397) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5070799024(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.9331112764544094) _gate_q_0;
  u1(1.8342234292729565) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.3384448325991772, 0, -1.9331112764544094) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.3384448325991772, 0.09888784718145287, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  cu(2.050732522629863, 3.655993260994394, 1.1156940453116633, 2.6908044926936636) _gate_q_2, _gate_q_3;
  xx_minus_yy_5070799792(4.473604812526588, 1.5090581083344032) _gate_q_0, _gate_q_1;
  sdg _gate_q_4;
  cx _gate_q_3, _gate_q_2;
  U(5.460236364522774, 4.695902695897659, 0.9752882645881472) _gate_q_4;
  iswap _gate_q_1, _gate_q_0;
  csx _gate_q_4, _gate_q_3;
  z _gate_q_1;
  csx _gate_q_2, _gate_q_0;
  t _gate_q_3;
  xx_minus_yy_5070800224(1.0353276213366571, 4.654659307988235) _gate_q_0, _gate_q_1;
  iswap _gate_q_2, _gate_q_4;
  u3(0.661878915299985, 5.929146735341255, 1.0911001110522884) _gate_q_1;
  rzx_5070799312(2.6266720687276397) _gate_q_2, _gate_q_3;
  cu3_5070799024(0.6768896651983544, 0.09888784718145287, 3.767334705727366) _gate_q_0, _gate_q_4;
}