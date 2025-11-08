OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[2], q[1];
s q[0];
h q[1];
s q[3];
t q[3];
cx q[3], q[1];
