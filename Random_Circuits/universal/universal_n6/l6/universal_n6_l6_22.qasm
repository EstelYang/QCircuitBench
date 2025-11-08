OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
t q[1];
t q[5];
t q[2];
cx q[2], q[4];
s q[1];
h q[5];
