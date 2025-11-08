OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[2];
s q[0];
cx q[3], q[8];
s q[9];
h q[0];
t q[2];
