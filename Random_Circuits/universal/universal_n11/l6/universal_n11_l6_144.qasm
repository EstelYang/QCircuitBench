OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[2];
s q[6];
cx q[5], q[8];
cx q[2], q[6];
t q[9];
h q[5];
