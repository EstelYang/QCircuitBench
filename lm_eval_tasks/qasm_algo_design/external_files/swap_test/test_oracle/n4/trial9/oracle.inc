gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105448960(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.218264852871999) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1609655628224356) _gate_q_0;
  ry(-1.1609655628224356) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.218264852871999) _gate_q_1;
}
gate rzz_5105448576(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6422399923584937) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5105448672(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.868018721208388, 1.5084143843110702, -1.5084143843110702) _gate_q_0;
}
gate cu3_5105448432(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2591769941657005) _gate_q_0;
  u1(-2.407405090873016) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.0043680557264087, 0, -3.2591769941657005) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.0043680557264087, 5.6665820850387165, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  iswap _gate_q_3, _gate_q_1;
  xx_minus_yy_5105448960(2.321931125644871, 3.218264852871999) _gate_q_2, _gate_q_0;
  cu(2.4422533960765147, 0.821835741424762, 4.081439531209785, 6.04221246217539) _gate_q_3, _gate_q_1;
  swap _gate_q_0, _gate_q_2;
  rzz_5105448576(0.6422399923584937) _gate_q_3, _gate_q_1;
  z _gate_q_0;
  t _gate_q_2;
  r_5105448672(5.868018721208388, 3.079210711105967) _gate_q_0;
  U(1.313481579713048, 0.5000126277904503, 0.20494413880527876) _gate_q_1;
  cu3_5105448432(4.0087361114528175, 5.6665820850387165, 0.8517719032926845) _gate_q_2, _gate_q_3;
}
gate cu3_5105441520(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.0577874889968024) _gate_q_0;
  u1(1.556009380007651) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8716194941440332, 0, -2.0577874889968024) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8716194941440332, 0.5017781089891514, 0) _gate_q_1;
}
gate r_5105434896(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.1162237583448777, -0.39540189639179935, 0.39540189639179935) _gate_q_0;
}
gate xx_minus_yy_5105437056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.9565071342399667) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9784543704476336) _gate_q_0;
  ry(-2.9784543704476336) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.9565071342399667) _gate_q_1;
}
gate cu3_5105438688(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.200747167344291) _gate_q_0;
  u1(-0.2957714638986686) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0959001919271694, 0, -5.200747167344291) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0959001919271694, 5.49651863124296, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  cu3_5105441520(3.7432389882880663, 0.5017781089891514, 3.6137968690044535) _gate_q_1, _gate_q_2;
  sx _gate_q_0;
  rx(0.497638027240365) _gate_q_3;
  sx _gate_q_2;
  ch _gate_q_0, _gate_q_1;
  r_5105434896(3.1162237583448777, 1.1753944304030972) _gate_q_3;
  u1(5.118903209285871) _gate_q_0;
  tdg _gate_q_2;
  u1(2.9831811635333887) _gate_q_3;
  tdg _gate_q_1;
  xx_minus_yy_5105437056(5.956908740895267, 0.9565071342399667) _gate_q_3, _gate_q_0;
  cu3_5105438688(2.1918003838543387, 5.49651863124296, 4.904975703445623) _gate_q_2, _gate_q_1;
}