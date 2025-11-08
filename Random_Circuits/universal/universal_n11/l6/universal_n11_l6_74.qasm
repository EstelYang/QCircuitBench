OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[8];
h q[5];
t q[5];
cx q[5], q[2];
h q[4];
s q[8];
