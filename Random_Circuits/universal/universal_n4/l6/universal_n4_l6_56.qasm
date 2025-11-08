OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[2], q[0];
s q[2];
t q[0];
h q[1];
s q[2];
h q[1];
