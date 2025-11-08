OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[4];
s q[8];
h q[9];
cx q[0], q[8];
h q[6];
t q[10];
