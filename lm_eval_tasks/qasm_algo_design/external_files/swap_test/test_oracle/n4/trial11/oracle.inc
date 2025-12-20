gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  h _gate_q_0;
  y _gate_q_1;
  dcx _gate_q_2, _gate_q_3;
  id _gate_q_1;
  u3(0.0693559063669908, 1.0604401307109252, 0.873805562082073) _gate_q_0;
  cp(3.7483232051972486) _gate_q_3, _gate_q_2;
  s _gate_q_2;
  cs _gate_q_3, _gate_q_0;
  x _gate_q_1;
  ry(0.8623909694451322) _gate_q_3;
  y _gate_q_0;
  cu(0.4912018439834482, 0.701506249846884, 0.8605768042720512, 5.852472335562146) _gate_q_1, _gate_q_2;
}
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
gate xx_plus_yy_5070721328(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.673881818723895) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.053904594457339625) _gate_q_1;
  ry(-0.053904594457339625) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.673881818723895) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  U(5.404100510004562, 5.683181462914502, 2.650568786214954) _gate_q_2;
  csdg _gate_q_3, _gate_q_0;
  tdg _gate_q_1;
  cp(4.33840047816569) _gate_q_3, _gate_q_0;
  ch _gate_q_1, _gate_q_2;
  ry(1.3955589637892571) _gate_q_2;
  xx_plus_yy_5070721328(0.10780918891467925, 3.673881818723895) _gate_q_0, _gate_q_1;
  p(5.28736568105207) _gate_q_3;
  cry(2.875956432628369) _gate_q_1, _gate_q_3;
  ch _gate_q_2, _gate_q_0;
}