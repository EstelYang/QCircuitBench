OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[3];
t q[1];
cx q[1], q[4];
t q[1];
s q[4];
cx q[0], q[1];
