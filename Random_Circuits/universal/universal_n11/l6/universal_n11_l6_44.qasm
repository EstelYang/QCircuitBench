OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[6];
t q[6];
cx q[0], q[6];
s q[5];
h q[4];
s q[5];
