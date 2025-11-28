gate cu3_5104286800(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.670405849356506) _gate_q_0;
  u1(0.8194883894761098) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7133233285858973, 0, -2.670405849356506) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7133233285858973, 1.8509174598803964, 0) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5104279648(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.926534718532789) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0404092326634706) _gate_q_0;
  ry(-2.0404092326634706) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.926534718532789) _gate_q_1;
}
gate rzz_5104284928(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.427028600858546) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5104284832(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.4757278200485286) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu1_5104280464(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.169408975653079) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.169408975653079) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.169408975653079) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  u2(1.1278647001313526, 5.5483247515074074) _gate_q_3;
  ch _gate_q_0, _gate_q_4;
  cu3_5104286800(1.4266466571717946, 1.8509174598803964, 3.489894238832616) _gate_q_2, _gate_q_1;
  xx_minus_yy_5104279648(4.080818465326941, 5.926534718532789) _gate_q_3, _gate_q_0;
  rzz_5104284928(2.427028600858546) _gate_q_4, _gate_q_1;
  id _gate_q_2;
  h _gate_q_2;
  rzz_5104284832(3.4757278200485286) _gate_q_3, _gate_q_1;
  crx(1.1045564505872965) _gate_q_0, _gate_q_4;
  y _gate_q_1;
  rz(2.299081999496286) _gate_q_4;
  csdg _gate_q_3, _gate_q_2;
  tdg _gate_q_0;
  h _gate_q_2;
  cu1_5104280464(2.338817951306158) _gate_q_1, _gate_q_0;
  cy _gate_q_3, _gate_q_4;
}
gate cu1_4948306656(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/4) _gate_q_1;
}
gate csx _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cu1_4948306656(pi/2) _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5104273024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1054143748550331) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  crz(0.8300115275066348) _gate_q_1, _gate_q_4;
  csx _gate_q_2, _gate_q_0;
  s _gate_q_3;
  u1(1.6170756312266452) _gate_q_4;
  ch _gate_q_2, _gate_q_1;
  rxx_5104273024(1.1054143748550331) _gate_q_0, _gate_q_3;
  s _gate_q_4;
  sx _gate_q_1;
  ch _gate_q_3, _gate_q_2;
  x _gate_q_0;
  cs _gate_q_2, _gate_q_1;
  ch _gate_q_0, _gate_q_4;
  sdg _gate_q_3;
  u1(3.6744703207720635) _gate_q_2;
  y _gate_q_1;
  iswap _gate_q_0, _gate_q_4;
  sdg _gate_q_3;
}