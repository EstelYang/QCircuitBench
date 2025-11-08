OPENQASM 3.0;
include "stdgates.inc";
gate F _gate_q_0, _gate_q_1 {
  ry(-1.2645189576252271) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.2645189576252271) _gate_q_1;
}
gate F_4903374576 _gate_q_0, _gate_q_1 {
  ry(-1.2490457723982544) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.2490457723982544) _gate_q_1;
}
gate F_4904304368 _gate_q_0, _gate_q_1 {
  ry(-1.2309594173407747) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.2309594173407747) _gate_q_1;
}
gate F_4904405616 _gate_q_0, _gate_q_1 {
  ry(-1.2094292028881888) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.2094292028881888) _gate_q_1;
}
gate F_4904413200 _gate_q_0, _gate_q_1 {
  ry(-1.183199640139716) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.183199640139716) _gate_q_1;
}
gate F_4904414016 _gate_q_0, _gate_q_1 {
  ry(-1.1502619915109316) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.1502619915109316) _gate_q_1;
}
gate F_4904409024 _gate_q_0, _gate_q_1 {
  ry(-1.1071487177940904) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.1071487177940904) _gate_q_1;
}
gate F_4904294816 _gate_q_0, _gate_q_1 {
  ry(-pi/3) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(pi/3) _gate_q_1;
}
gate F_4904408496 _gate_q_0, _gate_q_1 {
  ry(-0.9553166181245093) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(0.9553166181245093) _gate_q_1;
}
gate F_4904408448 _gate_q_0, _gate_q_1 {
  ry(-pi/4) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(pi/4) _gate_q_1;
}
bit[11] c;
qubit[11] q;
x q[10];
F q[10], q[9];
F_4903374576 q[9], q[8];
F_4904304368 q[8], q[7];
F_4904405616 q[7], q[6];
F_4904413200 q[6], q[5];
F_4904414016 q[5], q[4];
F_4904409024 q[4], q[3];
F_4904294816 q[3], q[2];
F_4904408496 q[2], q[1];
F_4904408448 q[1], q[0];
cx q[9], q[10];
cx q[8], q[9];
cx q[7], q[8];
cx q[6], q[7];
cx q[5], q[6];
cx q[4], q[5];
cx q[3], q[4];
cx q[2], q[3];
cx q[1], q[2];
cx q[0], q[1];
