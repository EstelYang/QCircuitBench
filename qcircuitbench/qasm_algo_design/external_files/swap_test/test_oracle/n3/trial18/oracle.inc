gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  rz(0.02907285866917223) _gate_q_1;
  cry(5.6061608143151584) _gate_q_2, _gate_q_0;
  x _gate_q_2;
  u3(0.8369693763876469, 2.7369387984137417, 1.7988907351520833) _gate_q_0;
  u2(3.673030042561532, 2.6921820957918365) _gate_q_1;
  rz(1.2479370371709786) _gate_q_1;
  rz(3.9890245810427025) _gate_q_2;
  y _gate_q_0;
}
gate cu3_5070590160(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.4968146617178313) _gate_q_0;
  u1(-0.9664817270556336) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6899369102657046, 0, -3.4968146617178313) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6899369102657046, 4.463296388773465, 0) _gate_q_1;
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
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  cu3_5070590160(1.3798738205314092, 4.463296388773465, 2.5303329346621974) _gate_q_0, _gate_q_1;
  s _gate_q_2;
  csx _gate_q_1, _gate_q_2;
  id _gate_q_0;
  rz(2.5617656144951617) _gate_q_0;
  s _gate_q_1;
  t _gate_q_2;
}