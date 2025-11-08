OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[2];
cx q[10], q[3];
t q[5];
h q[2];
h q[8];
s q[2];
