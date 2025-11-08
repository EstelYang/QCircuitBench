OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[1], q[3];
t q[2];
h q[3];
t q[1];
h q[2];
s q[1];
