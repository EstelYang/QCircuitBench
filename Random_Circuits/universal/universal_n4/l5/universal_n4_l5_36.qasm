OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[3], q[2];
s q[2];
h q[3];
t q[1];
cx q[0], q[1];
