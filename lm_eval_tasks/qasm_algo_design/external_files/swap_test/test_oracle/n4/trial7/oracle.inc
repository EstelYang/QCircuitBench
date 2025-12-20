gate cu3_5104447568(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.298815805846372) _gate_q_0;
  u1(-1.4867569673201593) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.495576249260136, 0, -4.298815805846372) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.495576249260136, 5.785572773166531, 0) _gate_q_1;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5104449488(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.680454750186306, -0.553814670801761, 0.553814670801761) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  cu3_5104447568(4.991152498520272, 5.785572773166531, 2.8120588385262124) _gate_q_1, _gate_q_0;
  csx _gate_q_3, _gate_q_2;
  u3(2.236624508324794, 2.713305264033722, 2.1994505145796945) _gate_q_3;
  cs _gate_q_1, _gate_q_0;
  s _gate_q_2;
  cp(5.360545280543116) _gate_q_0, _gate_q_3;
  cp(5.819272770045828) _gate_q_2, _gate_q_1;
  r_5104449488(4.680454750186306, 1.0169816559931355) _gate_q_3;
  ch _gate_q_2, _gate_q_1;
  rz(4.786498180676566) _gate_q_0;
}
gate rxx_5104441424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4584519709931196) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5104446704(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.083313540081726) _gate_q_0;
  u1(0.9136057467398091) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.13074561346162097, 0, -5.083313540081726) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.13074561346162097, 4.169707793341917, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  sx _gate_q_2;
  t _gate_q_3;
  rxx_5104441424(0.4584519709931196) _gate_q_1, _gate_q_0;
  iswap _gate_q_2, _gate_q_3;
  crx(0.946302564437976) _gate_q_0, _gate_q_1;
  cu(4.713963902711536, 0.35029005269799285, 0.3141805917053084, 1.2131070304501324) _gate_q_1, _gate_q_2;
  crx(2.771830513924856) _gate_q_0, _gate_q_3;
  cu3_5104446704(0.26149122692324195, 4.169707793341917, 5.9969192868215355) _gate_q_2, _gate_q_3;
  u1(2.3448788852371822) _gate_q_0;
  z _gate_q_1;
}