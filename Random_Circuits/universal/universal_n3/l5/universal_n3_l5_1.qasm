OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
cx q[2], q[1];
s q[2];
h q[2];
t q[2];
s q[0];
