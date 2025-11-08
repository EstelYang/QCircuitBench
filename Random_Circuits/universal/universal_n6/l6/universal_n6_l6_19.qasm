OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
cx q[1], q[0];
cx q[2], q[3];
h q[4];
t q[2];
s q[3];
cx q[1], q[5];
