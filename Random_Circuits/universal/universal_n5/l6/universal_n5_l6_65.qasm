OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[0];
h q[3];
cx q[2], q[4];
h q[2];
s q[2];
t q[0];
