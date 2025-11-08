OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[3], q[0];
h q[0];
cx q[2], q[0];
t q[3];
t q[2];
s q[3];
