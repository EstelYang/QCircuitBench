OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
h q[0];
cx q[1], q[2];
s q[0];
t q[2];
s q[0];
cx q[3], q[1];
