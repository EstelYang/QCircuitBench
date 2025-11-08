OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[2], q[0];
h q[2];
t q[0];
s q[4];
cx q[4], q[1];
