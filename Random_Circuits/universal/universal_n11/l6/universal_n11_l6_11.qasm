OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[2], q[9];
h q[1];
s q[8];
h q[3];
s q[1];
t q[0];
