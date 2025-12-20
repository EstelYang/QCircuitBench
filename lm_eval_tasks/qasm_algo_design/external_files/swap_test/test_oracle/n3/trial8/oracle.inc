gate r_5105150400(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.7245094405286818, 4.101965508071216, -4.101965508071216) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  cp(6.187110390823629) _gate_q_1, _gate_q_0;
  x _gate_q_2;
  rx(0.03573805188249883) _gate_q_0;
  r_5105150400(1.7245094405286818, 5.672761834866113) _gate_q_2;
  x _gate_q_1;
  cy _gate_q_2, _gate_q_1;
  sxdg _gate_q_0;
}
gate r_5105142144(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.3139681578028763, 4.520373125611028, -4.520373125611028) _gate_q_0;
}
gate rzz_5105144016(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.8032966157188475) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  z _gate_q_2;
  cz _gate_q_0, _gate_q_1;
  z _gate_q_2;
  r_5105142144(1.3139681578028763, 6.091169452405925) _gate_q_0;
  z _gate_q_1;
  rzz_5105144016(1.8032966157188475) _gate_q_2, _gate_q_0;
  sxdg _gate_q_1;
}