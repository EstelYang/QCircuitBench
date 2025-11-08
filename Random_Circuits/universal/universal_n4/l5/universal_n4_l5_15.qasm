OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
s q[1];
cx q[2], q[3];
h q[1];
cx q[3], q[0];
t q[0];
