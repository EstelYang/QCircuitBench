OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[1], q[0];
h q[3];
cx q[2], q[3];
t q[3];
s q[1];
