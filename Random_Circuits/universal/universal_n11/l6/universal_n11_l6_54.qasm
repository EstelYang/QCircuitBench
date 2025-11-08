OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[2], q[7];
t q[2];
s q[5];
cx q[2], q[6];
s q[9];
s q[0];
