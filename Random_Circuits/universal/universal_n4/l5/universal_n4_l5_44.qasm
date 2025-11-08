OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[0], q[1];
cx q[2], q[0];
t q[3];
h q[2];
s q[3];
