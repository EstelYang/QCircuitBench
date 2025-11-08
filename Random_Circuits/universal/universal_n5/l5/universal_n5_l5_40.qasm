OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[3];
h q[3];
t q[4];
t q[3];
cx q[2], q[1];
