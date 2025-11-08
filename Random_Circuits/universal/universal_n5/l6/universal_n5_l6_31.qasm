OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[1], q[0];
cx q[0], q[1];
s q[0];
h q[2];
t q[4];
h q[3];
