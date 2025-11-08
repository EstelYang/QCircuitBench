OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[2], q[1];
cx q[3], q[2];
t q[0];
cx q[1], q[0];
h q[0];
s q[3];
