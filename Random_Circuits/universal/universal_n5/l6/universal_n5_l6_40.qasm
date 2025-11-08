OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[4];
s q[3];
h q[3];
h q[2];
cx q[0], q[4];
t q[2];
