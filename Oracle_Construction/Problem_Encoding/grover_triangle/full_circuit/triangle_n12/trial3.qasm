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
gate Adder_4894827024 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894821600 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894825728 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894823184 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894830912 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894831776 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894827264 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894833552 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894831104 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894818576 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894833168 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894831920 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894831200 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894829568 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894827456 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894826448 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894825872 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894821216 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894822368 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894407232 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894405744 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894393696 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894405456 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894395424 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894393360 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894397680 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894398544 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894398832 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894399312 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894406800 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894402864 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894404736 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894393552 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894395952 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894397728 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4894395568 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Reverse_Adder _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894400416 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894402192 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894402048 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894404448 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894408576 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894401328 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894395856 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894396576 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894408096 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894402576 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894401712 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894400320 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894825248 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894819776 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894828320 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4892687536 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4892682784 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4892684800 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4892686048 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4890949632 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893230720 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893230672 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893239216 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893235184 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893229712 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893238448 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893230432 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893236240 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893231392 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893240608 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893242576 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893243104 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894508960 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894519808 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894515536 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894521296 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  Adder _gate_q_0, _gate_q_2, _gate_q_13, _gate_q_14;
  Adder_4894827024 _gate_q_0, _gate_q_4, _gate_q_13, _gate_q_14;
  Adder_4894821600 _gate_q_0, _gate_q_6, _gate_q_13, _gate_q_14;
  Adder_4894825728 _gate_q_0, _gate_q_9, _gate_q_13, _gate_q_14;
  Adder_4894823184 _gate_q_0, _gate_q_10, _gate_q_13, _gate_q_14;
  Adder_4894830912 _gate_q_1, _gate_q_2, _gate_q_13, _gate_q_14;
  Adder_4894831776 _gate_q_1, _gate_q_4, _gate_q_13, _gate_q_14;
  Adder_4894827264 _gate_q_1, _gate_q_9, _gate_q_13, _gate_q_14;
  Adder_4894833552 _gate_q_2, _gate_q_3, _gate_q_13, _gate_q_14;
  Adder_4894831104 _gate_q_2, _gate_q_4, _gate_q_13, _gate_q_14;
  Adder_4894818576 _gate_q_2, _gate_q_5, _gate_q_13, _gate_q_14;
  Adder_4894833168 _gate_q_2, _gate_q_6, _gate_q_13, _gate_q_14;
  Adder_4894831920 _gate_q_2, _gate_q_8, _gate_q_13, _gate_q_14;
  Adder_4894831200 _gate_q_2, _gate_q_10, _gate_q_13, _gate_q_14;
  Adder_4894829568 _gate_q_2, _gate_q_11, _gate_q_13, _gate_q_14;
  Adder_4894827456 _gate_q_3, _gate_q_4, _gate_q_13, _gate_q_14;
  Adder_4894826448 _gate_q_3, _gate_q_6, _gate_q_13, _gate_q_14;
  Adder_4894825872 _gate_q_3, _gate_q_7, _gate_q_13, _gate_q_14;
  Adder_4894821216 _gate_q_3, _gate_q_8, _gate_q_13, _gate_q_14;
  Adder_4894822368 _gate_q_3, _gate_q_9, _gate_q_13, _gate_q_14;
  Adder_4894407232 _gate_q_3, _gate_q_11, _gate_q_13, _gate_q_14;
  Adder_4894405744 _gate_q_4, _gate_q_5, _gate_q_13, _gate_q_14;
  Adder_4894393696 _gate_q_4, _gate_q_8, _gate_q_13, _gate_q_14;
  Adder_4894405456 _gate_q_4, _gate_q_9, _gate_q_13, _gate_q_14;
  Adder_4894395424 _gate_q_4, _gate_q_10, _gate_q_13, _gate_q_14;
  Adder_4894393360 _gate_q_5, _gate_q_6, _gate_q_13, _gate_q_14;
  Adder_4894397680 _gate_q_5, _gate_q_7, _gate_q_13, _gate_q_14;
  Adder_4894398544 _gate_q_5, _gate_q_10, _gate_q_13, _gate_q_14;
  Adder_4894398832 _gate_q_5, _gate_q_11, _gate_q_13, _gate_q_14;
  Adder_4894399312 _gate_q_6, _gate_q_7, _gate_q_13, _gate_q_14;
  Adder_4894406800 _gate_q_6, _gate_q_9, _gate_q_13, _gate_q_14;
  Adder_4894402864 _gate_q_6, _gate_q_10, _gate_q_13, _gate_q_14;
  Adder_4894404736 _gate_q_7, _gate_q_8, _gate_q_13, _gate_q_14;
  Adder_4894393552 _gate_q_7, _gate_q_9, _gate_q_13, _gate_q_14;
  Adder_4894395952 _gate_q_7, _gate_q_10, _gate_q_13, _gate_q_14;
  Adder_4894397728 _gate_q_8, _gate_q_10, _gate_q_13, _gate_q_14;
  Adder_4894395568 _gate_q_9, _gate_q_11, _gate_q_13, _gate_q_14;
  ccx _gate_q_13, _gate_q_14, _gate_q_12;
  Reverse_Adder _gate_q_9, _gate_q_11, _gate_q_13, _gate_q_14;
  Reverse_Adder_4894400416 _gate_q_8, _gate_q_10, _gate_q_13, _gate_q_14;
  Reverse_Adder_4894402192 _gate_q_7, _gate_q_10, _gate_q_13, _gate_q_14;
  Reverse_Adder_4894402048 _gate_q_7, _gate_q_9, _gate_q_13, _gate_q_14;
  Reverse_Adder_4894404448 _gate_q_7, _gate_q_8, _gate_q_13, _gate_q_14;
  Reverse_Adder_4894408576 _gate_q_6, _gate_q_10, _gate_q_13, _gate_q_14;
  Reverse_Adder_4894401328 _gate_q_6, _gate_q_9, _gate_q_13, _gate_q_14;
  Reverse_Adder_4894395856 _gate_q_6, _gate_q_7, _gate_q_13, _gate_q_14;
  Reverse_Adder_4894396576 _gate_q_5, _gate_q_11, _gate_q_13, _gate_q_14;
  Reverse_Adder_4894408096 _gate_q_5, _gate_q_10, _gate_q_13, _gate_q_14;
  Reverse_Adder_4894402576 _gate_q_5, _gate_q_7, _gate_q_13, _gate_q_14;
  Reverse_Adder_4894401712 _gate_q_5, _gate_q_6, _gate_q_13, _gate_q_14;
  Reverse_Adder_4894400320 _gate_q_4, _gate_q_10, _gate_q_13, _gate_q_14;
  Reverse_Adder_4894825248 _gate_q_4, _gate_q_9, _gate_q_13, _gate_q_14;
  Reverse_Adder_4894819776 _gate_q_4, _gate_q_8, _gate_q_13, _gate_q_14;
  Reverse_Adder_4894828320 _gate_q_4, _gate_q_5, _gate_q_13, _gate_q_14;
  Reverse_Adder_4892687536 _gate_q_3, _gate_q_11, _gate_q_13, _gate_q_14;
  Reverse_Adder_4892682784 _gate_q_3, _gate_q_9, _gate_q_13, _gate_q_14;
  Reverse_Adder_4892684800 _gate_q_3, _gate_q_8, _gate_q_13, _gate_q_14;
  Reverse_Adder_4892686048 _gate_q_3, _gate_q_7, _gate_q_13, _gate_q_14;
  Reverse_Adder_4890949632 _gate_q_3, _gate_q_6, _gate_q_13, _gate_q_14;
  Reverse_Adder_4893230720 _gate_q_3, _gate_q_4, _gate_q_13, _gate_q_14;
  Reverse_Adder_4893230672 _gate_q_2, _gate_q_11, _gate_q_13, _gate_q_14;
  Reverse_Adder_4893239216 _gate_q_2, _gate_q_10, _gate_q_13, _gate_q_14;
  Reverse_Adder_4893235184 _gate_q_2, _gate_q_8, _gate_q_13, _gate_q_14;
  Reverse_Adder_4893229712 _gate_q_2, _gate_q_6, _gate_q_13, _gate_q_14;
  Reverse_Adder_4893238448 _gate_q_2, _gate_q_5, _gate_q_13, _gate_q_14;
  Reverse_Adder_4893230432 _gate_q_2, _gate_q_4, _gate_q_13, _gate_q_14;
  Reverse_Adder_4893236240 _gate_q_2, _gate_q_3, _gate_q_13, _gate_q_14;
  Reverse_Adder_4893231392 _gate_q_1, _gate_q_9, _gate_q_13, _gate_q_14;
  Reverse_Adder_4893240608 _gate_q_1, _gate_q_4, _gate_q_13, _gate_q_14;
  Reverse_Adder_4893242576 _gate_q_1, _gate_q_2, _gate_q_13, _gate_q_14;
  Reverse_Adder_4893243104 _gate_q_0, _gate_q_10, _gate_q_13, _gate_q_14;
  Reverse_Adder_4894508960 _gate_q_0, _gate_q_9, _gate_q_13, _gate_q_14;
  Reverse_Adder_4894519808 _gate_q_0, _gate_q_6, _gate_q_13, _gate_q_14;
  Reverse_Adder_4894515536 _gate_q_0, _gate_q_4, _gate_q_13, _gate_q_14;
  Reverse_Adder_4894521296 _gate_q_0, _gate_q_2, _gate_q_13, _gate_q_14;
}
qubit[15] q;
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10], q[11], q[12], q[13], q[14];
