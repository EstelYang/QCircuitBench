OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
s q[2];
cx q[1], q[0];
cx q[0], q[1];
cx q[2], q[0];
t q[1];
h q[0];
