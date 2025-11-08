OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[4];
t q[1];
h q[1];
t q[1];
s q[4];
cx q[2], q[0];
