OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
t q[0];
s q[3];
h q[3];
h q[3];
cx q[2], q[0];
cx q[0], q[2];
