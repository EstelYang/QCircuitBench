OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[0], q[2];
s q[5];
s q[4];
s q[7];
cx q[5], q[6];
s q[3];
