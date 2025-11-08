OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[2];
s q[1];
cx q[1], q[3];
t q[3];
h q[4];
