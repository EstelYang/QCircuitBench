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
gate r_5072026944(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.2044223250576955, 4.702981343664728, -4.702981343664728) _gate_q_0;
}
gate xx_minus_yy_5072016000(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.705842714309197) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7951317198456725) _gate_q_0;
  ry(-0.7951317198456725) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.705842714309197) _gate_q_1;
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
gate xx_minus_yy_5072016624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.4602269737549243) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.8851933175819773) _gate_q_0;
  ry(-2.8851933175819773) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.4602269737549243) _gate_q_1;
}
gate ryy_5072020416(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.959128871557671) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  csdg _gate_q_2, _gate_q_5;
  z _gate_q_0;
  u3(0.7176203581451162, 3.1142036261848287, 3.8337569018714714) _gate_q_3;
  sdg _gate_q_4;
  rx(1.81673044614254) _gate_q_1;
  rz(5.946935547604167) _gate_q_2;
  x _gate_q_1;
  h _gate_q_4;
  csdg _gate_q_5, _gate_q_3;
  sxdg _gate_q_0;
  u2(4.826349640540435, 2.0401470924162908) _gate_q_5;
  sxdg _gate_q_3;
  id _gate_q_2;
  cp(2.1160032943750835) _gate_q_4, _gate_q_1;
  id _gate_q_0;
  cy _gate_q_1, _gate_q_3;
  swap _gate_q_0, _gate_q_2;
  r_5072026944(4.2044223250576955, 6.273777670459625) _gate_q_4;
  U(2.468858058066841, 2.0745005657470093, 1.38165063172091) _gate_q_5;
  xx_minus_yy_5072016000(1.590263439691345, 4.705842714309197) _gate_q_4, _gate_q_3;
  csx _gate_q_0, _gate_q_5;
  xx_minus_yy_5072016624(5.770386635163955, 1.4602269737549243) _gate_q_2, _gate_q_1;
  u3(1.701026473182211, 2.49800093853623, 3.933327824633913) _gate_q_0;
  u2(0.7894693670983147, 0.30273592541623573) _gate_q_4;
  ryy_5072020416(1.959128871557671) _gate_q_5, _gate_q_3;
  cs _gate_q_1, _gate_q_2;
}
gate cu3_5072026272(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.9965213873897945) _gate_q_0;
  u1(-0.33700419137997484) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0594186076318604, 0, -4.9965213873897945) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0594186076318604, 5.333525578769769, 0) _gate_q_1;
}
gate xx_plus_yy_5069624944(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.9618367837153455) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.10242759317781208) _gate_q_1;
  ry(-0.10242759317781208) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.9618367837153455) _gate_q_0;
}
gate r_5070136544(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.8090037802968935, 4.023582034454808, -4.023582034454808) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  sx _gate_q_2;
  csx _gate_q_4, _gate_q_5;
  ry(0.08299232649389433) _gate_q_0;
  cu3_5072026272(6.118837215263721, 5.333525578769769, 4.659517196009819) _gate_q_1, _gate_q_3;
  ch _gate_q_3, _gate_q_0;
  csx _gate_q_1, _gate_q_2;
  xx_plus_yy_5069624944(0.20485518635562416, 0.9618367837153455) _gate_q_4, _gate_q_5;
  cu(2.929432994484638, 4.855064112659272, 5.5438810698099665, 6.146953142384956) _gate_q_0, _gate_q_5;
  id _gate_q_4;
  p(0.0623652466695303) _gate_q_1;
  sxdg _gate_q_2;
  r_5070136544(5.8090037802968935, 5.594378361249705) _gate_q_3;
  iswap _gate_q_2, _gate_q_0;
  ch _gate_q_1, _gate_q_3;
  swap _gate_q_5, _gate_q_4;
  ch _gate_q_2, _gate_q_4;
  z _gate_q_1;
  crx(5.89779946762959) _gate_q_0, _gate_q_3;
  u2(1.9160107674926494, 4.740423751797265) _gate_q_5;
  ch _gate_q_4, _gate_q_1;
  rx(2.2628730854316443) _gate_q_3;
  rx(0.3843588406484353) _gate_q_0;
  cy _gate_q_5, _gate_q_2;
}