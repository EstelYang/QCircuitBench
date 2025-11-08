OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[2];
cx q[2], q[5];
t q[2];
cx q[0], q[5];
cx q[8], q[5];
