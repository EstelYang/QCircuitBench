OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[0], q[1];
s q[4];
cx q[0], q[2];
t q[3];
h q[3];
