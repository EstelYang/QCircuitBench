OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
t q[2];
cx q[0], q[1];
h q[2];
cx q[0], q[2];
t q[1];
s q[3];
