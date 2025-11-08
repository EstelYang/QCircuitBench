OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[4];
h q[2];
cx q[4], q[0];
cx q[1], q[0];
t q[3];
