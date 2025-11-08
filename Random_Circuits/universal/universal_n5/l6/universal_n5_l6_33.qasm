OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
t q[4];
h q[1];
s q[1];
cx q[1], q[2];
h q[3];
t q[0];
