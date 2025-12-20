gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
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
gate r_5104280848(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.684609005480482, 1.20393907742092, -1.20393907742092) _gate_q_0;
}
gate r_5104287568(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.773609790877255, 3.89081613022909, -3.89081613022909) _gate_q_0;
}
gate ryy_5104287472(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3037268677422387) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  id _gate_q_3;
  sxdg _gate_q_1;
  csx _gate_q_0, _gate_q_2;
  r_5104280848(3.684609005480482, 2.7747354042158165) _gate_q_0;
  r_5104287568(5.773609790877255, 5.461612457023986) _gate_q_1;
  cu(4.036037700654283, 4.052842972000368, 4.172074110978364, 4.51309792843112) _gate_q_2, _gate_q_3;
  ryy_5104287472(1.3037268677422387) _gate_q_1, _gate_q_0;
  U(3.00838068611504, 5.493673493851968, 5.745542113817665) _gate_q_2;
  U(3.1189413006932334, 1.5243175532423379, 5.762510106977379) _gate_q_3;
  ry(4.827452589191129) _gate_q_2;
  cz _gate_q_0, _gate_q_1;
  u2(4.504319042860985, 4.455678209350399) _gate_q_3;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ry(1.725459656281902) _gate_q_0;
  tdg _gate_q_3;
  sxdg _gate_q_1;
  u2(2.3698706422574576, 2.5942546718212296) _gate_q_2;
  y _gate_q_2;
  t _gate_q_3;
  u1(0.36221419339823435) _gate_q_0;
  id _gate_q_1;
  iswap _gate_q_2, _gate_q_0;
  cp(0.6498751373248808) _gate_q_1, _gate_q_3;
  sx _gate_q_1;
  x _gate_q_2;
  sx _gate_q_0;
  rz(5.7616695608904065) _gate_q_3;
}