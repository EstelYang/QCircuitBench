gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  cz _gate_q_1, _gate_q_2;
  u3(6.11764346858314, 1.7412941280456544, 3.1772458664314054) _gate_q_0;
  z _gate_q_2;
  u2(0.8999185427848816, 1.6600339689906538) _gate_q_1;
  rx(4.760802305766494) _gate_q_0;
  rz(5.728271415043658) _gate_q_1;
  sx _gate_q_2;
  u1(5.740536807531213) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  cz _gate_q_1, _gate_q_2;
  sxdg _gate_q_0;
  swap _gate_q_2, _gate_q_0;
  sdg _gate_q_1;
  ry(6.0273822143795694) _gate_q_1;
  iswap _gate_q_0, _gate_q_2;
}