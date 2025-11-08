OPENQASM 3.0;
include "stdgates.inc";
gate F _gate_q_0, _gate_q_1 {
  ry(-1.1502619915109316) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.1502619915109316) _gate_q_1;
}
gate F_4904083264 _gate_q_0, _gate_q_1 {
  ry(-1.1071487177940904) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.1071487177940904) _gate_q_1;
}
gate F_4904082304 _gate_q_0, _gate_q_1 {
  ry(-pi/3) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(pi/3) _gate_q_1;
}
gate F_4904076352 _gate_q_0, _gate_q_1 {
  ry(-0.9553166181245093) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(0.9553166181245093) _gate_q_1;
}
gate F_4904078848 _gate_q_0, _gate_q_1 {
  ry(-pi/4) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(pi/4) _gate_q_1;
}
bit[6] c;
qubit[6] q;
x q[5];
F q[5], q[4];
F_4904083264 q[4], q[3];
F_4904082304 q[3], q[2];
F_4904076352 q[2], q[1];
F_4904078848 q[1], q[0];
cx q[4], q[5];
cx q[3], q[4];
cx q[2], q[3];
cx q[1], q[2];
cx q[0], q[1];
