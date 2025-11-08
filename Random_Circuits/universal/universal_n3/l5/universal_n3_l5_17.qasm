OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
t q[0];
cx q[2], q[0];
h q[1];
s q[2];
cx q[0], q[2];
