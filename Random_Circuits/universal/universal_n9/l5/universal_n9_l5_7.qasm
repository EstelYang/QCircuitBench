OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[2];
t q[4];
cx q[0], q[5];
cx q[2], q[4];
s q[2];
