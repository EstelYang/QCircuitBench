OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
s q[0];
s q[3];
cx q[2], q[3];
h q[3];
t q[0];
h q[3];
