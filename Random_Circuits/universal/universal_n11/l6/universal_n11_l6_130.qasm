OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[5];
s q[1];
h q[2];
s q[5];
cx q[2], q[8];
t q[8];
