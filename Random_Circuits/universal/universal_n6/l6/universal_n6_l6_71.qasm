OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
t q[3];
h q[2];
cx q[2], q[1];
s q[1];
t q[1];
h q[3];
