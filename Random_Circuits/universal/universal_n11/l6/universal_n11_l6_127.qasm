OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[1];
s q[4];
s q[2];
h q[9];
cx q[8], q[9];
t q[5];
