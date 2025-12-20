gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rzx_5070422960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.06414477617625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  crz(4.726558568454419) _gate_q_0, _gate_q_2;
  sdg _gate_q_3;
  p(1.798605601179689) _gate_q_1;
  dcx _gate_q_0, _gate_q_3;
  U(2.5446957985984135, 1.4524556898164074, 2.761502063722901) _gate_q_2;
  sxdg _gate_q_1;
  rzx_5070422960(5.06414477617625) _gate_q_2, _gate_q_3;
  sxdg _gate_q_0;
  sxdg _gate_q_1;
  x _gate_q_0;
  ch _gate_q_3, _gate_q_2;
  t _gate_q_1;
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
gate ryy_5070427712(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.764934849370589) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5070436256(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.912619153710453, -0.8730724351563672, 0.8730724351563672) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  csx _gate_q_0, _gate_q_2;
  crz(6.279541883528311) _gate_q_1, _gate_q_3;
  h _gate_q_2;
  ryy_5070427712(1.764934849370589) _gate_q_3, _gate_q_1;
  U(0.507015949564445, 0.4739714308100099, 1.5014179231021816) _gate_q_0;
  t _gate_q_0;
  cy _gate_q_1, _gate_q_2;
  ry(2.9027722809784127) _gate_q_3;
  r_5070436256(2.912619153710453, 0.6977238916385293) _gate_q_0;
  cs _gate_q_3, _gate_q_1;
  u1(5.72358080353282) _gate_q_2;
}