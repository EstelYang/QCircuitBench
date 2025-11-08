OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[4];
cx q[0], q[3];
s q[2];
s q[3];
t q[3];
