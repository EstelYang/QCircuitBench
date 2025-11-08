OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[4];
cx q[10], q[6];
t q[5];
cx q[2], q[1];
h q[5];
s q[0];
