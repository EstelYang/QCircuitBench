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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5070432752(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.9157643254159753, 2.2996645086646916, -2.2996645086646916) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5070423920(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.851989386323429) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8948793838284357) _gate_q_1;
  ry(-2.8948793838284357) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.851989386323429) _gate_q_0;
}
gate rxx_5070437504(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.187893965022058) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5070853744(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6095071764284574, 4.266092891123114, -4.266092891123114) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  cz _gate_q_3, _gate_q_0;
  rz(3.54861291112937) _gate_q_2;
  p(0.504873064613231) _gate_q_1;
  sx _gate_q_4;
  csx _gate_q_4, _gate_q_0;
  u3(6.156721524721891, 4.435061801797312, 5.366781775189959) _gate_q_2;
  csdg _gate_q_3, _gate_q_1;
  cx _gate_q_3, _gate_q_4;
  s _gate_q_1;
  r_5070432752(3.9157643254159753, 3.870460835459588) _gate_q_0;
  y _gate_q_2;
  xx_plus_yy_5070423920(5.789758767656871, 3.851989386323429) _gate_q_4, _gate_q_2;
  ry(4.318076133970212) _gate_q_0;
  rxx_5070437504(4.187893965022058) _gate_q_3, _gate_q_1;
  s _gate_q_4;
  cp(1.4988762140151495) _gate_q_2, _gate_q_3;
  r_5070853744(1.6095071764284574, 5.836889217918011) _gate_q_1;
  rz(3.4282162348784047) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzz_5070858496(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.4826173929726107) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5070852784(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.330842065792093, -0.11396218104037015, 0.11396218104037015) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  iswap _gate_q_2, _gate_q_1;
  cz _gate_q_4, _gate_q_3;
  h _gate_q_0;
  id _gate_q_4;
  p(4.077405461145472) _gate_q_0;
  rzz_5070858496(2.4826173929726107) _gate_q_3, _gate_q_1;
  u1(5.658561496005555) _gate_q_2;
  ch _gate_q_3, _gate_q_1;
  id _gate_q_4;
  cp(5.0567918051088085) _gate_q_0, _gate_q_2;
  sxdg _gate_q_3;
  U(5.15587181841841, 5.555055677880089, 2.72968059123422) _gate_q_0;
  cy _gate_q_1, _gate_q_2;
  r_5070852784(3.330842065792093, 1.4568341457545264) _gate_q_4;
  tdg _gate_q_0;
  crz(4.149515414337086) _gate_q_4, _gate_q_1;
  crx(0.8362798389085945) _gate_q_3, _gate_q_2;
}