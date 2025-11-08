OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[9];
t q[4];
s q[8];
cx q[6], q[1];
h q[1];
cx q[4], q[1];
