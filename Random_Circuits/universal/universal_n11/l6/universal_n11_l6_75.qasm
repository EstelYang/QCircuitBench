OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[8];
s q[0];
cx q[3], q[6];
cx q[1], q[3];
s q[3];
cx q[6], q[7];
