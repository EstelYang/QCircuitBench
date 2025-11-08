OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[0];
h q[5];
cx q[2], q[8];
h q[0];
t q[3];
s q[6];
