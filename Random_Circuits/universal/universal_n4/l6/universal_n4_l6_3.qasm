OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
h q[1];
s q[3];
s q[3];
t q[2];
h q[3];
cx q[1], q[3];
