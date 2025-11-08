OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[2], q[3];
cx q[3], q[2];
s q[2];
s q[3];
h q[2];
t q[0];
