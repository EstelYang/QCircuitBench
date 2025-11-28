gate rxx_5070302496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8878054495022352) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate r_5070293184(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.89870115259803, 1.5629502715317223, -1.5629502715317223) _gate_q_0;
}
gate cu1_5070296448(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.018494580034068) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.018494580034068) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.018494580034068) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  cry(3.0395493497540835) _gate_q_1, _gate_q_0;
  rxx_5070302496(1.8878054495022352) _gate_q_3, _gate_q_2;
  sxdg _gate_q_0;
  cx _gate_q_3, _gate_q_2;
  r_5070293184(4.89870115259803, 3.133746598326619) _gate_q_1;
  s _gate_q_3;
  z _gate_q_0;
  u1(5.2344450950621395) _gate_q_1;
  s _gate_q_2;
  id _gate_q_0;
  rx(1.15520807400911) _gate_q_3;
  cu1_5070296448(4.036989160068136) _gate_q_1, _gate_q_2;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5070301104(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.8418704136614545, -0.6879150764995594, 0.6879150764995594) _gate_q_0;
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
gate rxx_5070307296(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.6439349201226605) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5070302928(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.1283740949650952) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ch _gate_q_1, _gate_q_0;
  rx(4.382721790131065) _gate_q_2;
  rx(1.6120192411890764) _gate_q_3;
  dcx _gate_q_2, _gate_q_1;
  cx _gate_q_0, _gate_q_3;
  r_5070301104(5.8418704136614545, 0.8828812502953371) _gate_q_3;
  csx _gate_q_0, _gate_q_1;
  p(0.4497324947416339) _gate_q_2;
  rxx_5070307296(4.6439349201226605) _gate_q_0, _gate_q_1;
  rxx_5070302928(0.1283740949650952) _gate_q_3, _gate_q_2;
}