OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[2], q[0];
h q[3];
s q[3];
t q[2];
s q[0];
cx q[4], q[2];
