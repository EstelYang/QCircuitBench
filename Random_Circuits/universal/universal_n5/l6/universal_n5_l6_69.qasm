OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[2], q[4];
s q[1];
cx q[1], q[2];
h q[3];
cx q[1], q[3];
t q[4];
