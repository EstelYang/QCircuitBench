OPENQASM 3.0;
include "stdgates.inc";
gate mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  h _gate_q_3;
  p(pi/8) _gate_q_0;
  p(pi/8) _gate_q_1;
  p(pi/8) _gate_q_2;
  p(pi/8) _gate_q_3;
  cx _gate_q_0, _gate_q_1;
  p(-pi/8) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_2;
  p(-pi/8) _gate_q_2;
  cx _gate_q_0, _gate_q_2;
  p(pi/8) _gate_q_2;
  cx _gate_q_1, _gate_q_2;
  p(-pi/8) _gate_q_2;
  cx _gate_q_0, _gate_q_2;
  cx _gate_q_2, _gate_q_3;
  p(-pi/8) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(pi/8) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(-pi/8) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/8) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(-pi/8) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(pi/8) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(-pi/8) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  h _gate_q_3;
}
gate Adder _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4895625760 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4897273760 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894508240 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894509872 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894515584 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894510448 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894522160 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894510256 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894509248 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894518368 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894517408 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894521584 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894521440 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894520624 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894510640 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894511312 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894508384 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894507760 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Reverse_Adder _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894521536 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894520240 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894516928 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894518320 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894514048 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894511648 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894510304 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894517552 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894393840 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894394848 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894397248 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894401088 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894401424 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894408672 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894404064 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894405744 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894406464 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894407232 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  Adder _gate_q_0, _gate_q_3, _gate_q_10, _gate_q_11;
  Adder_4895625760 _gate_q_0, _gate_q_4, _gate_q_10, _gate_q_11;
  Adder_4897273760 _gate_q_0, _gate_q_6, _gate_q_10, _gate_q_11;
  Adder_4894508240 _gate_q_0, _gate_q_8, _gate_q_10, _gate_q_11;
  Adder_4894509872 _gate_q_1, _gate_q_2, _gate_q_10, _gate_q_11;
  Adder_4894515584 _gate_q_2, _gate_q_3, _gate_q_10, _gate_q_11;
  Adder_4894510448 _gate_q_2, _gate_q_4, _gate_q_10, _gate_q_11;
  Adder_4894522160 _gate_q_2, _gate_q_5, _gate_q_10, _gate_q_11;
  Adder_4894510256 _gate_q_2, _gate_q_6, _gate_q_10, _gate_q_11;
  Adder_4894509248 _gate_q_2, _gate_q_7, _gate_q_10, _gate_q_11;
  Adder_4894518368 _gate_q_2, _gate_q_8, _gate_q_10, _gate_q_11;
  Adder_4894517408 _gate_q_3, _gate_q_4, _gate_q_10, _gate_q_11;
  Adder_4894521584 _gate_q_3, _gate_q_5, _gate_q_10, _gate_q_11;
  Adder_4894521440 _gate_q_3, _gate_q_6, _gate_q_10, _gate_q_11;
  Adder_4894520624 _gate_q_3, _gate_q_8, _gate_q_10, _gate_q_11;
  Adder_4894510640 _gate_q_4, _gate_q_5, _gate_q_10, _gate_q_11;
  Adder_4894511312 _gate_q_5, _gate_q_6, _gate_q_10, _gate_q_11;
  Adder_4894508384 _gate_q_5, _gate_q_7, _gate_q_10, _gate_q_11;
  Adder_4894507760 _gate_q_6, _gate_q_8, _gate_q_10, _gate_q_11;
  ccx _gate_q_10, _gate_q_11, _gate_q_9;
  Reverse_Adder _gate_q_6, _gate_q_8, _gate_q_10, _gate_q_11;
  Reverse_Adder_4894521536 _gate_q_5, _gate_q_7, _gate_q_10, _gate_q_11;
  Reverse_Adder_4894520240 _gate_q_5, _gate_q_6, _gate_q_10, _gate_q_11;
  Reverse_Adder_4894516928 _gate_q_4, _gate_q_5, _gate_q_10, _gate_q_11;
  Reverse_Adder_4894518320 _gate_q_3, _gate_q_8, _gate_q_10, _gate_q_11;
  Reverse_Adder_4894514048 _gate_q_3, _gate_q_6, _gate_q_10, _gate_q_11;
  Reverse_Adder_4894511648 _gate_q_3, _gate_q_5, _gate_q_10, _gate_q_11;
  Reverse_Adder_4894510304 _gate_q_3, _gate_q_4, _gate_q_10, _gate_q_11;
  Reverse_Adder_4894517552 _gate_q_2, _gate_q_8, _gate_q_10, _gate_q_11;
  Reverse_Adder_4894393840 _gate_q_2, _gate_q_7, _gate_q_10, _gate_q_11;
  Reverse_Adder_4894394848 _gate_q_2, _gate_q_6, _gate_q_10, _gate_q_11;
  Reverse_Adder_4894397248 _gate_q_2, _gate_q_5, _gate_q_10, _gate_q_11;
  Reverse_Adder_4894401088 _gate_q_2, _gate_q_4, _gate_q_10, _gate_q_11;
  Reverse_Adder_4894401424 _gate_q_2, _gate_q_3, _gate_q_10, _gate_q_11;
  Reverse_Adder_4894408672 _gate_q_1, _gate_q_2, _gate_q_10, _gate_q_11;
  Reverse_Adder_4894404064 _gate_q_0, _gate_q_8, _gate_q_10, _gate_q_11;
  Reverse_Adder_4894405744 _gate_q_0, _gate_q_6, _gate_q_10, _gate_q_11;
  Reverse_Adder_4894406464 _gate_q_0, _gate_q_4, _gate_q_10, _gate_q_11;
  Reverse_Adder_4894407232 _gate_q_0, _gate_q_3, _gate_q_10, _gate_q_11;
}
qubit[12] q;
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10], q[11];
