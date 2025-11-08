OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[5], q[4];
cx q[2], q[3];
t q[5];
s q[8];
h q[1];
t q[3];
