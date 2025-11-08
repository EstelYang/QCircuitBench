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
gate Adder_4895350736 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4895351120 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4895351264 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4895351456 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4895351648 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4895351840 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4895304224 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4895351792 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4895349536 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4895349152 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4895342720 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4895345552 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4895352080 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4895351168 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4895352512 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4895352704 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4895352896 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Reverse_Adder _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4895353280 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4895353472 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4895353664 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4895353856 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4895354048 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4895354240 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4895354432 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4895354624 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4895354816 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4895355008 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4895355200 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4895355392 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4895355584 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4895355776 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4895355968 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4895356160 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4895356352 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  Adder _gate_q_0, _gate_q_2, _gate_q_9, _gate_q_10;
  Adder_4895350736 _gate_q_0, _gate_q_5, _gate_q_9, _gate_q_10;
  Adder_4895351120 _gate_q_0, _gate_q_6, _gate_q_9, _gate_q_10;
  Adder_4895351264 _gate_q_1, _gate_q_2, _gate_q_9, _gate_q_10;
  Adder_4895351456 _gate_q_1, _gate_q_4, _gate_q_9, _gate_q_10;
  Adder_4895351648 _gate_q_1, _gate_q_5, _gate_q_9, _gate_q_10;
  Adder_4895351840 _gate_q_1, _gate_q_7, _gate_q_9, _gate_q_10;
  Adder_4895304224 _gate_q_2, _gate_q_3, _gate_q_9, _gate_q_10;
  Adder_4895351792 _gate_q_2, _gate_q_4, _gate_q_9, _gate_q_10;
  Adder_4895349536 _gate_q_2, _gate_q_5, _gate_q_9, _gate_q_10;
  Adder_4895349152 _gate_q_2, _gate_q_6, _gate_q_9, _gate_q_10;
  Adder_4895342720 _gate_q_2, _gate_q_7, _gate_q_9, _gate_q_10;
  Adder_4895345552 _gate_q_3, _gate_q_4, _gate_q_9, _gate_q_10;
  Adder_4895352080 _gate_q_3, _gate_q_5, _gate_q_9, _gate_q_10;
  Adder_4895351168 _gate_q_3, _gate_q_7, _gate_q_9, _gate_q_10;
  Adder_4895352512 _gate_q_4, _gate_q_6, _gate_q_9, _gate_q_10;
  Adder_4895352704 _gate_q_5, _gate_q_6, _gate_q_9, _gate_q_10;
  Adder_4895352896 _gate_q_6, _gate_q_7, _gate_q_9, _gate_q_10;
  ccx _gate_q_9, _gate_q_10, _gate_q_8;
  Reverse_Adder _gate_q_6, _gate_q_7, _gate_q_9, _gate_q_10;
  Reverse_Adder_4895353280 _gate_q_5, _gate_q_6, _gate_q_9, _gate_q_10;
  Reverse_Adder_4895353472 _gate_q_4, _gate_q_6, _gate_q_9, _gate_q_10;
  Reverse_Adder_4895353664 _gate_q_3, _gate_q_7, _gate_q_9, _gate_q_10;
  Reverse_Adder_4895353856 _gate_q_3, _gate_q_5, _gate_q_9, _gate_q_10;
  Reverse_Adder_4895354048 _gate_q_3, _gate_q_4, _gate_q_9, _gate_q_10;
  Reverse_Adder_4895354240 _gate_q_2, _gate_q_7, _gate_q_9, _gate_q_10;
  Reverse_Adder_4895354432 _gate_q_2, _gate_q_6, _gate_q_9, _gate_q_10;
  Reverse_Adder_4895354624 _gate_q_2, _gate_q_5, _gate_q_9, _gate_q_10;
  Reverse_Adder_4895354816 _gate_q_2, _gate_q_4, _gate_q_9, _gate_q_10;
  Reverse_Adder_4895355008 _gate_q_2, _gate_q_3, _gate_q_9, _gate_q_10;
  Reverse_Adder_4895355200 _gate_q_1, _gate_q_7, _gate_q_9, _gate_q_10;
  Reverse_Adder_4895355392 _gate_q_1, _gate_q_5, _gate_q_9, _gate_q_10;
  Reverse_Adder_4895355584 _gate_q_1, _gate_q_4, _gate_q_9, _gate_q_10;
  Reverse_Adder_4895355776 _gate_q_1, _gate_q_2, _gate_q_9, _gate_q_10;
  Reverse_Adder_4895355968 _gate_q_0, _gate_q_6, _gate_q_9, _gate_q_10;
  Reverse_Adder_4895356160 _gate_q_0, _gate_q_5, _gate_q_9, _gate_q_10;
  Reverse_Adder_4895356352 _gate_q_0, _gate_q_2, _gate_q_9, _gate_q_10;
}
qubit[11] q;
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10];
