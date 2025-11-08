OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[1];
cx q[2], q[1];
s q[3];
t q[3];
h q[3];
