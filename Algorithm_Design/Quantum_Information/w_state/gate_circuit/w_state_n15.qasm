OPENQASM 3.0;
include "stdgates.inc";
gate F _gate_q_0, _gate_q_1 {
  ry(-1.3096389158918722) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.3096389158918722) _gate_q_1;
}
gate F_4904076064 _gate_q_0, _gate_q_1 {
  ry(-1.3002465638163236) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.3002465638163236) _gate_q_1;
}
gate F_4904090848 _gate_q_0, _gate_q_1 {
  ry(-1.2897614252920828) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.2897614252920828) _gate_q_1;
}
gate F_4904086192 _gate_q_0, _gate_q_1 {
  ry(-1.277953555066321) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.277953555066321) _gate_q_1;
}
gate F_4904076784 _gate_q_0, _gate_q_1 {
  ry(-1.2645189576252271) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.2645189576252271) _gate_q_1;
}
gate F_4904081824 _gate_q_0, _gate_q_1 {
  ry(-1.2490457723982544) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.2490457723982544) _gate_q_1;
}
gate F_4904088880 _gate_q_0, _gate_q_1 {
  ry(-1.2309594173407747) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.2309594173407747) _gate_q_1;
}
gate F_4904078848 _gate_q_0, _gate_q_1 {
  ry(-1.2094292028881888) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.2094292028881888) _gate_q_1;
}
gate F_4904087872 _gate_q_0, _gate_q_1 {
  ry(-1.183199640139716) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.183199640139716) _gate_q_1;
}
gate F_4904083120 _gate_q_0, _gate_q_1 {
  ry(-1.1502619915109316) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.1502619915109316) _gate_q_1;
}
gate F_4904078272 _gate_q_0, _gate_q_1 {
  ry(-1.1071487177940904) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.1071487177940904) _gate_q_1;
}
gate F_4904568064 _gate_q_0, _gate_q_1 {
  ry(-pi/3) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(pi/3) _gate_q_1;
}
gate F_4904568976 _gate_q_0, _gate_q_1 {
  ry(-0.9553166181245093) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(0.9553166181245093) _gate_q_1;
}
gate F_4904569888 _gate_q_0, _gate_q_1 {
  ry(-pi/4) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(pi/4) _gate_q_1;
}
bit[15] c;
qubit[15] q;
x q[14];
F q[14], q[13];
F_4904076064 q[13], q[12];
F_4904090848 q[12], q[11];
F_4904086192 q[11], q[10];
F_4904076784 q[10], q[9];
F_4904081824 q[9], q[8];
F_4904088880 q[8], q[7];
F_4904078848 q[7], q[6];
F_4904087872 q[6], q[5];
F_4904083120 q[5], q[4];
F_4904078272 q[4], q[3];
F_4904568064 q[3], q[2];
F_4904568976 q[2], q[1];
F_4904569888 q[1], q[0];
cx q[13], q[14];
cx q[12], q[13];
cx q[11], q[12];
cx q[10], q[11];
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
