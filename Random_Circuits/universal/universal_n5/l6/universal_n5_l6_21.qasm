OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[3];
cx q[3], q[1];
h q[2];
t q[4];
s q[4];
cx q[3], q[2];
