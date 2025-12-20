gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate r_5105755264(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.634505132455291, -0.2731166546114252, 0.2731166546114252) _gate_q_0;
}
gate rzz_5105755504(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.201110057218272) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5105755312(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.6801618186202645) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.6801618186202645) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.6801618186202645) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5105750320(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.3490972644361072, -0.5054865313719641, 0.5054865313719641) _gate_q_0;
}
gate cu1_5105747776(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.368592741014482) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.368592741014482) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.368592741014482) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  u2(5.36280082851579, 1.320402465250203) _gate_q_1;
  p(6.069764643564785) _gate_q_5;
  csdg _gate_q_3, _gate_q_2;
  sxdg _gate_q_4;
  r_5105755264(0.634505132455291, 1.2976796721834714) _gate_q_0;
  ch _gate_q_0, _gate_q_2;
  rzz_5105755504(5.201110057218272) _gate_q_4, _gate_q_3;
  ry(1.511062248853847) _gate_q_5;
  ry(4.132573552803106) _gate_q_1;
  y _gate_q_4;
  cx _gate_q_0, _gate_q_5;
  cu1_5105755312(5.360323637240529) _gate_q_3, _gate_q_2;
  sdg _gate_q_1;
  u2(3.6415280023214867, 5.609739635539653) _gate_q_4;
  rx(2.275896373455933) _gate_q_3;
  crx(1.3793126909634381) _gate_q_1, _gate_q_2;
  x _gate_q_0;
  x _gate_q_5;
  u1(4.839688164325652) _gate_q_1;
  dcx _gate_q_4, _gate_q_0;
  u1(1.367857133303778) _gate_q_3;
  sdg _gate_q_5;
  s _gate_q_2;
  r_5105750320(2.3490972644361072, 1.0653097954229325) _gate_q_3;
  crz(5.897065731986406) _gate_q_5, _gate_q_0;
  cu1_5105747776(4.737185482028964) _gate_q_1, _gate_q_4;
  U(4.441933923503063, 3.81790565509813, 1.6948811149392953) _gate_q_2;
}
gate cu1_5105752672(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.474898941452205) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.474898941452205) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.474898941452205) _gate_q_1;
}
gate rzx_5105752912(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.1951870547983608) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5105749072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.0536140132811065) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.505402163438068) _gate_q_1;
  ry(-2.505402163438068) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.0536140132811065) _gate_q_0;
}
gate rxx_5105751184(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8413487133085151) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
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
gate rzz_5105750560(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.835206475198783) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5105746000(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.082221699160449) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  cu1_5105752672(4.94979788290441) _gate_q_4, _gate_q_5;
  sxdg _gate_q_0;
  y _gate_q_2;
  cy _gate_q_3, _gate_q_1;
  rzx_5105752912(0.1951870547983608) _gate_q_3, _gate_q_5;
  xx_plus_yy_5105749072(5.010804326876136, 6.0536140132811065) _gate_q_4, _gate_q_2;
  csdg _gate_q_0, _gate_q_1;
  rxx_5105751184(1.8413487133085151) _gate_q_0, _gate_q_5;
  swap _gate_q_1, _gate_q_4;
  u3(3.4300142944034375, 1.6298719554298975, 1.2462177875728635) _gate_q_2;
  x _gate_q_3;
  t _gate_q_4;
  ecr _gate_q_5, _gate_q_3;
  rzz_5105750560(5.835206475198783) _gate_q_1, _gate_q_2;
  tdg _gate_q_0;
  z _gate_q_0;
  z _gate_q_4;
  cy _gate_q_1, _gate_q_5;
  rx(0.5981552629395104) _gate_q_3;
  sdg _gate_q_2;
  rzx_5105746000(4.082221699160449) _gate_q_4, _gate_q_1;
  cy _gate_q_3, _gate_q_0;
  dcx _gate_q_5, _gate_q_2;
}