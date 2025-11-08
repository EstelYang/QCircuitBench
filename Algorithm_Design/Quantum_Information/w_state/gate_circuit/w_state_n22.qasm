OPENQASM 3.0;
include "stdgates.inc";
gate F _gate_q_0, _gate_q_1 {
  ry(-1.3559464937191843) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.3559464937191843) _gate_q_1;
}
gate F_4904816272 _gate_q_0, _gate_q_1 {
  ry(-1.3508083493994372) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.3508083493994372) _gate_q_1;
}
gate F_4904813056 _gate_q_0, _gate_q_1 {
  ry(-1.3452829208967654) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.3452829208967654) _gate_q_1;
}
gate F_4904818576 _gate_q_0, _gate_q_1 {
  ry(-1.3393189628247182) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.3393189628247182) _gate_q_1;
}
gate F_4904823568 _gate_q_0, _gate_q_1 {
  ry(-1.3328552019646882) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.3328552019646882) _gate_q_1;
}
gate F_4904824336 _gate_q_0, _gate_q_1 {
  ry(-1.3258176636680323) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.3258176636680323) _gate_q_1;
}
gate F_4904824672 _gate_q_0, _gate_q_1 {
  ry(-1.318116071652818) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.318116071652818) _gate_q_1;
}
gate F_4904825920 _gate_q_0, _gate_q_1 {
  ry(-1.3096389158918722) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.3096389158918722) _gate_q_1;
}
gate F_4904818384 _gate_q_0, _gate_q_1 {
  ry(-1.3002465638163236) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.3002465638163236) _gate_q_1;
}
gate F_4904817040 _gate_q_0, _gate_q_1 {
  ry(-1.2897614252920828) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.2897614252920828) _gate_q_1;
}
gate F_4904827024 _gate_q_0, _gate_q_1 {
  ry(-1.277953555066321) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.277953555066321) _gate_q_1;
}
gate F_4904827792 _gate_q_0, _gate_q_1 {
  ry(-1.2645189576252271) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.2645189576252271) _gate_q_1;
}
gate F_4904828128 _gate_q_0, _gate_q_1 {
  ry(-1.2490457723982544) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.2490457723982544) _gate_q_1;
}
gate F_4904845680 _gate_q_0, _gate_q_1 {
  ry(-1.2309594173407747) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.2309594173407747) _gate_q_1;
}
gate F_4904846592 _gate_q_0, _gate_q_1 {
  ry(-1.2094292028881888) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.2094292028881888) _gate_q_1;
}
gate F_4904847504 _gate_q_0, _gate_q_1 {
  ry(-1.183199640139716) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.183199640139716) _gate_q_1;
}
gate F_4904848416 _gate_q_0, _gate_q_1 {
  ry(-1.1502619915109316) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.1502619915109316) _gate_q_1;
}
gate F_4904828320 _gate_q_0, _gate_q_1 {
  ry(-1.1071487177940904) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(1.1071487177940904) _gate_q_1;
}
gate F_4904823472 _gate_q_0, _gate_q_1 {
  ry(-pi/3) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(pi/3) _gate_q_1;
}
gate F_4904847696 _gate_q_0, _gate_q_1 {
  ry(-0.9553166181245093) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(0.9553166181245093) _gate_q_1;
}
gate F_4904849472 _gate_q_0, _gate_q_1 {
  ry(-pi/4) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  ry(pi/4) _gate_q_1;
}
bit[22] c;
qubit[22] q;
x q[21];
F q[21], q[20];
F_4904816272 q[20], q[19];
F_4904813056 q[19], q[18];
F_4904818576 q[18], q[17];
F_4904823568 q[17], q[16];
F_4904824336 q[16], q[15];
F_4904824672 q[15], q[14];
F_4904825920 q[14], q[13];
F_4904818384 q[13], q[12];
F_4904817040 q[12], q[11];
F_4904827024 q[11], q[10];
F_4904827792 q[10], q[9];
F_4904828128 q[9], q[8];
F_4904845680 q[8], q[7];
F_4904846592 q[7], q[6];
F_4904847504 q[6], q[5];
F_4904848416 q[5], q[4];
F_4904828320 q[4], q[3];
F_4904823472 q[3], q[2];
F_4904847696 q[2], q[1];
F_4904849472 q[1], q[0];
cx q[20], q[21];
cx q[19], q[20];
cx q[18], q[19];
cx q[17], q[18];
cx q[16], q[17];
cx q[15], q[16];
cx q[14], q[15];
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
