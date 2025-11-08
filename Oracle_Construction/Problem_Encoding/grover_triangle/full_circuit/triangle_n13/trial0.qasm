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
gate Adder_4916403264 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4916397216 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4916397744 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4916403408 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4893122416 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4916872352 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892925424 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892917888 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892927584 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892919184 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892932768 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892923984 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892928928 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892920720 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892926768 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892917840 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892931472 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892925856 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892929792 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892927296 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892926528 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892927440 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892928688 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892919088 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892931184 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892920048 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892922064 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892920144 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892933200 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892920288 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892929024 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4892925040 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4916408304 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4916404608 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4916408832 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4916397120 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4916405424 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4916409216 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4916871344 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4916874272 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4916887088 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4916871296 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Reverse_Adder _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893118288 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893130432 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893117088 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893116992 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893122128 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893127264 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893129376 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893124720 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893125584 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893127072 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893116224 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893130384 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893119488 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893128080 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893121984 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893127360 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893403344 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893407520 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893407904 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893403008 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893394704 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893402528 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893404880 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893395712 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893408192 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893396000 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893393696 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893394848 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893399456 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893401760 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893394224 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893399600 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893395952 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893394272 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893394992 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893401376 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893498480 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893493632 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893492576 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893498384 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893507312 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4893497376 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  Adder _gate_q_0, _gate_q_1, _gate_q_14, _gate_q_15;
  Adder_4916403264 _gate_q_0, _gate_q_4, _gate_q_14, _gate_q_15;
  Adder_4916397216 _gate_q_0, _gate_q_8, _gate_q_14, _gate_q_15;
  Adder_4916397744 _gate_q_0, _gate_q_10, _gate_q_14, _gate_q_15;
  Adder_4916403408 _gate_q_0, _gate_q_11, _gate_q_14, _gate_q_15;
  Adder_4893122416 _gate_q_0, _gate_q_12, _gate_q_14, _gate_q_15;
  Adder_4916872352 _gate_q_1, _gate_q_2, _gate_q_14, _gate_q_15;
  Adder_4892925424 _gate_q_1, _gate_q_3, _gate_q_14, _gate_q_15;
  Adder_4892917888 _gate_q_1, _gate_q_5, _gate_q_14, _gate_q_15;
  Adder_4892927584 _gate_q_1, _gate_q_6, _gate_q_14, _gate_q_15;
  Adder_4892919184 _gate_q_1, _gate_q_9, _gate_q_14, _gate_q_15;
  Adder_4892932768 _gate_q_1, _gate_q_10, _gate_q_14, _gate_q_15;
  Adder_4892923984 _gate_q_2, _gate_q_5, _gate_q_14, _gate_q_15;
  Adder_4892928928 _gate_q_2, _gate_q_7, _gate_q_14, _gate_q_15;
  Adder_4892920720 _gate_q_2, _gate_q_8, _gate_q_14, _gate_q_15;
  Adder_4892926768 _gate_q_2, _gate_q_9, _gate_q_14, _gate_q_15;
  Adder_4892917840 _gate_q_2, _gate_q_12, _gate_q_14, _gate_q_15;
  Adder_4892931472 _gate_q_3, _gate_q_8, _gate_q_14, _gate_q_15;
  Adder_4892925856 _gate_q_3, _gate_q_10, _gate_q_14, _gate_q_15;
  Adder_4892929792 _gate_q_3, _gate_q_11, _gate_q_14, _gate_q_15;
  Adder_4892927296 _gate_q_3, _gate_q_12, _gate_q_14, _gate_q_15;
  Adder_4892926528 _gate_q_4, _gate_q_5, _gate_q_14, _gate_q_15;
  Adder_4892927440 _gate_q_4, _gate_q_6, _gate_q_14, _gate_q_15;
  Adder_4892928688 _gate_q_4, _gate_q_7, _gate_q_14, _gate_q_15;
  Adder_4892919088 _gate_q_4, _gate_q_8, _gate_q_14, _gate_q_15;
  Adder_4892931184 _gate_q_4, _gate_q_9, _gate_q_14, _gate_q_15;
  Adder_4892920048 _gate_q_4, _gate_q_10, _gate_q_14, _gate_q_15;
  Adder_4892922064 _gate_q_4, _gate_q_12, _gate_q_14, _gate_q_15;
  Adder_4892920144 _gate_q_5, _gate_q_6, _gate_q_14, _gate_q_15;
  Adder_4892933200 _gate_q_5, _gate_q_8, _gate_q_14, _gate_q_15;
  Adder_4892920288 _gate_q_5, _gate_q_12, _gate_q_14, _gate_q_15;
  Adder_4892929024 _gate_q_6, _gate_q_7, _gate_q_14, _gate_q_15;
  Adder_4892925040 _gate_q_6, _gate_q_8, _gate_q_14, _gate_q_15;
  Adder_4916408304 _gate_q_6, _gate_q_9, _gate_q_14, _gate_q_15;
  Adder_4916404608 _gate_q_6, _gate_q_10, _gate_q_14, _gate_q_15;
  Adder_4916408832 _gate_q_6, _gate_q_12, _gate_q_14, _gate_q_15;
  Adder_4916397120 _gate_q_7, _gate_q_10, _gate_q_14, _gate_q_15;
  Adder_4916405424 _gate_q_8, _gate_q_10, _gate_q_14, _gate_q_15;
  Adder_4916409216 _gate_q_8, _gate_q_11, _gate_q_14, _gate_q_15;
  Adder_4916871344 _gate_q_8, _gate_q_12, _gate_q_14, _gate_q_15;
  Adder_4916874272 _gate_q_9, _gate_q_11, _gate_q_14, _gate_q_15;
  Adder_4916887088 _gate_q_9, _gate_q_12, _gate_q_14, _gate_q_15;
  Adder_4916871296 _gate_q_11, _gate_q_12, _gate_q_14, _gate_q_15;
  ccx _gate_q_14, _gate_q_15, _gate_q_13;
  Reverse_Adder _gate_q_11, _gate_q_12, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893118288 _gate_q_9, _gate_q_12, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893130432 _gate_q_9, _gate_q_11, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893117088 _gate_q_8, _gate_q_12, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893116992 _gate_q_8, _gate_q_11, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893122128 _gate_q_8, _gate_q_10, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893127264 _gate_q_7, _gate_q_10, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893129376 _gate_q_6, _gate_q_12, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893124720 _gate_q_6, _gate_q_10, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893125584 _gate_q_6, _gate_q_9, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893127072 _gate_q_6, _gate_q_8, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893116224 _gate_q_6, _gate_q_7, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893130384 _gate_q_5, _gate_q_12, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893119488 _gate_q_5, _gate_q_8, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893128080 _gate_q_5, _gate_q_6, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893121984 _gate_q_4, _gate_q_12, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893127360 _gate_q_4, _gate_q_10, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893403344 _gate_q_4, _gate_q_9, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893407520 _gate_q_4, _gate_q_8, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893407904 _gate_q_4, _gate_q_7, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893403008 _gate_q_4, _gate_q_6, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893394704 _gate_q_4, _gate_q_5, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893402528 _gate_q_3, _gate_q_12, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893404880 _gate_q_3, _gate_q_11, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893395712 _gate_q_3, _gate_q_10, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893408192 _gate_q_3, _gate_q_8, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893396000 _gate_q_2, _gate_q_12, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893393696 _gate_q_2, _gate_q_9, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893394848 _gate_q_2, _gate_q_8, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893399456 _gate_q_2, _gate_q_7, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893401760 _gate_q_2, _gate_q_5, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893394224 _gate_q_1, _gate_q_10, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893399600 _gate_q_1, _gate_q_9, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893395952 _gate_q_1, _gate_q_6, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893394272 _gate_q_1, _gate_q_5, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893394992 _gate_q_1, _gate_q_3, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893401376 _gate_q_1, _gate_q_2, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893498480 _gate_q_0, _gate_q_12, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893493632 _gate_q_0, _gate_q_11, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893492576 _gate_q_0, _gate_q_10, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893498384 _gate_q_0, _gate_q_8, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893507312 _gate_q_0, _gate_q_4, _gate_q_14, _gate_q_15;
  Reverse_Adder_4893497376 _gate_q_0, _gate_q_1, _gate_q_14, _gate_q_15;
}
qubit[16] q;
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10], q[11], q[12], q[13], q[14], q[15];
