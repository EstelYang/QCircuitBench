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
gate Adder_4893706096 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4893704656 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896874736 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896872480 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896867344 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896882656 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896871088 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896880976 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896878432 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896882176 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4893719008 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4893712672 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4893714544 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4897625520 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4897626384 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4893234704 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4893398592 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4893408192 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4893404592 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4893403248 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896872960 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896882464 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896869120 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896878672 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896870416 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896868640 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896867728 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896875120 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896879680 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896869312 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896869888 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896871856 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896870896 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896872864 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896869504 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896878144 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896879536 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896881648 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896868544 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896871328 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896871040 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Adder_4896874112 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Reverse_Adder _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897378944 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897387680 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897388640 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897384128 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897381920 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897388976 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897389360 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897387296 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897384368 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897378032 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897386432 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897379904 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897376688 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897387248 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897384800 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897383168 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897382880 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897384320 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897374864 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897383408 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4897380096 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894025504 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894030976 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894029728 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894016192 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894024112 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894027136 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894021280 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894019456 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894019552 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894030496 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894020416 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894018880 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894028000 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894018640 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894031072 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894023824 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894025120 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894017152 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4894020896 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4895636368 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Reverse_Adder_4895631568 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  Adder _gate_q_0, _gate_q_2, _gate_q_15, _gate_q_16;
  Adder_4893706096 _gate_q_0, _gate_q_3, _gate_q_15, _gate_q_16;
  Adder_4893704656 _gate_q_0, _gate_q_4, _gate_q_15, _gate_q_16;
  Adder_4896874736 _gate_q_0, _gate_q_5, _gate_q_15, _gate_q_16;
  Adder_4896872480 _gate_q_0, _gate_q_6, _gate_q_15, _gate_q_16;
  Adder_4896867344 _gate_q_0, _gate_q_7, _gate_q_15, _gate_q_16;
  Adder_4896882656 _gate_q_0, _gate_q_8, _gate_q_15, _gate_q_16;
  Adder_4896871088 _gate_q_0, _gate_q_11, _gate_q_15, _gate_q_16;
  Adder_4896880976 _gate_q_0, _gate_q_13, _gate_q_15, _gate_q_16;
  Adder_4896878432 _gate_q_1, _gate_q_4, _gate_q_15, _gate_q_16;
  Adder_4896882176 _gate_q_1, _gate_q_6, _gate_q_15, _gate_q_16;
  Adder_4893719008 _gate_q_1, _gate_q_8, _gate_q_15, _gate_q_16;
  Adder_4893712672 _gate_q_1, _gate_q_10, _gate_q_15, _gate_q_16;
  Adder_4893714544 _gate_q_1, _gate_q_11, _gate_q_15, _gate_q_16;
  Adder_4897625520 _gate_q_1, _gate_q_12, _gate_q_15, _gate_q_16;
  Adder_4897626384 _gate_q_1, _gate_q_13, _gate_q_15, _gate_q_16;
  Adder_4893234704 _gate_q_2, _gate_q_6, _gate_q_15, _gate_q_16;
  Adder_4893398592 _gate_q_2, _gate_q_7, _gate_q_15, _gate_q_16;
  Adder_4893408192 _gate_q_2, _gate_q_10, _gate_q_15, _gate_q_16;
  Adder_4893404592 _gate_q_2, _gate_q_11, _gate_q_15, _gate_q_16;
  Adder_4893403248 _gate_q_2, _gate_q_13, _gate_q_15, _gate_q_16;
  Adder_4896872960 _gate_q_3, _gate_q_4, _gate_q_15, _gate_q_16;
  Adder_4896882464 _gate_q_3, _gate_q_8, _gate_q_15, _gate_q_16;
  Adder_4896869120 _gate_q_3, _gate_q_11, _gate_q_15, _gate_q_16;
  Adder_4896878672 _gate_q_3, _gate_q_13, _gate_q_15, _gate_q_16;
  Adder_4896870416 _gate_q_4, _gate_q_5, _gate_q_15, _gate_q_16;
  Adder_4896868640 _gate_q_4, _gate_q_6, _gate_q_15, _gate_q_16;
  Adder_4896867728 _gate_q_4, _gate_q_7, _gate_q_15, _gate_q_16;
  Adder_4896875120 _gate_q_4, _gate_q_10, _gate_q_15, _gate_q_16;
  Adder_4896879680 _gate_q_4, _gate_q_11, _gate_q_15, _gate_q_16;
  Adder_4896869312 _gate_q_4, _gate_q_12, _gate_q_15, _gate_q_16;
  Adder_4896869888 _gate_q_5, _gate_q_6, _gate_q_15, _gate_q_16;
  Adder_4896871856 _gate_q_5, _gate_q_7, _gate_q_15, _gate_q_16;
  Adder_4896870896 _gate_q_5, _gate_q_11, _gate_q_15, _gate_q_16;
  Adder_4896872864 _gate_q_6, _gate_q_11, _gate_q_15, _gate_q_16;
  Adder_4896869504 _gate_q_7, _gate_q_8, _gate_q_15, _gate_q_16;
  Adder_4896878144 _gate_q_7, _gate_q_9, _gate_q_15, _gate_q_16;
  Adder_4896879536 _gate_q_7, _gate_q_11, _gate_q_15, _gate_q_16;
  Adder_4896881648 _gate_q_8, _gate_q_9, _gate_q_15, _gate_q_16;
  Adder_4896868544 _gate_q_8, _gate_q_10, _gate_q_15, _gate_q_16;
  Adder_4896871328 _gate_q_8, _gate_q_12, _gate_q_15, _gate_q_16;
  Adder_4896871040 _gate_q_10, _gate_q_11, _gate_q_15, _gate_q_16;
  Adder_4896874112 _gate_q_11, _gate_q_13, _gate_q_15, _gate_q_16;
  ccx _gate_q_15, _gate_q_16, _gate_q_14;
  Reverse_Adder _gate_q_11, _gate_q_13, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897378944 _gate_q_10, _gate_q_11, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897387680 _gate_q_8, _gate_q_12, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897388640 _gate_q_8, _gate_q_10, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897384128 _gate_q_8, _gate_q_9, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897381920 _gate_q_7, _gate_q_11, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897388976 _gate_q_7, _gate_q_9, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897389360 _gate_q_7, _gate_q_8, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897387296 _gate_q_6, _gate_q_11, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897384368 _gate_q_5, _gate_q_11, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897378032 _gate_q_5, _gate_q_7, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897386432 _gate_q_5, _gate_q_6, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897379904 _gate_q_4, _gate_q_12, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897376688 _gate_q_4, _gate_q_11, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897387248 _gate_q_4, _gate_q_10, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897384800 _gate_q_4, _gate_q_7, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897383168 _gate_q_4, _gate_q_6, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897382880 _gate_q_4, _gate_q_5, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897384320 _gate_q_3, _gate_q_13, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897374864 _gate_q_3, _gate_q_11, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897383408 _gate_q_3, _gate_q_8, _gate_q_15, _gate_q_16;
  Reverse_Adder_4897380096 _gate_q_3, _gate_q_4, _gate_q_15, _gate_q_16;
  Reverse_Adder_4894025504 _gate_q_2, _gate_q_13, _gate_q_15, _gate_q_16;
  Reverse_Adder_4894030976 _gate_q_2, _gate_q_11, _gate_q_15, _gate_q_16;
  Reverse_Adder_4894029728 _gate_q_2, _gate_q_10, _gate_q_15, _gate_q_16;
  Reverse_Adder_4894016192 _gate_q_2, _gate_q_7, _gate_q_15, _gate_q_16;
  Reverse_Adder_4894024112 _gate_q_2, _gate_q_6, _gate_q_15, _gate_q_16;
  Reverse_Adder_4894027136 _gate_q_1, _gate_q_13, _gate_q_15, _gate_q_16;
  Reverse_Adder_4894021280 _gate_q_1, _gate_q_12, _gate_q_15, _gate_q_16;
  Reverse_Adder_4894019456 _gate_q_1, _gate_q_11, _gate_q_15, _gate_q_16;
  Reverse_Adder_4894019552 _gate_q_1, _gate_q_10, _gate_q_15, _gate_q_16;
  Reverse_Adder_4894030496 _gate_q_1, _gate_q_8, _gate_q_15, _gate_q_16;
  Reverse_Adder_4894020416 _gate_q_1, _gate_q_6, _gate_q_15, _gate_q_16;
  Reverse_Adder_4894018880 _gate_q_1, _gate_q_4, _gate_q_15, _gate_q_16;
  Reverse_Adder_4894028000 _gate_q_0, _gate_q_13, _gate_q_15, _gate_q_16;
  Reverse_Adder_4894018640 _gate_q_0, _gate_q_11, _gate_q_15, _gate_q_16;
  Reverse_Adder_4894031072 _gate_q_0, _gate_q_8, _gate_q_15, _gate_q_16;
  Reverse_Adder_4894023824 _gate_q_0, _gate_q_7, _gate_q_15, _gate_q_16;
  Reverse_Adder_4894025120 _gate_q_0, _gate_q_6, _gate_q_15, _gate_q_16;
  Reverse_Adder_4894017152 _gate_q_0, _gate_q_5, _gate_q_15, _gate_q_16;
  Reverse_Adder_4894020896 _gate_q_0, _gate_q_4, _gate_q_15, _gate_q_16;
  Reverse_Adder_4895636368 _gate_q_0, _gate_q_3, _gate_q_15, _gate_q_16;
  Reverse_Adder_4895631568 _gate_q_0, _gate_q_2, _gate_q_15, _gate_q_16;
}
qubit[17] q;
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10], q[11], q[12], q[13], q[14], q[15], q[16];
