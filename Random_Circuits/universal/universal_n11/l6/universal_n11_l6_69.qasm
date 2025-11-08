OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[7], q[6];
cx q[5], q[10];
s q[3];
s q[5];
s q[4];
cx q[8], q[0];
