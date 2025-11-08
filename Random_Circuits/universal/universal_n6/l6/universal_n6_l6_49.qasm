OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
cx q[2], q[3];
h q[1];
t q[3];
s q[1];
s q[1];
h q[5];
