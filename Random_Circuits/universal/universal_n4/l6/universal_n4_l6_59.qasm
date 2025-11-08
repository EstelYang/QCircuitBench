OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
t q[0];
s q[3];
s q[2];
h q[1];
t q[3];
cx q[2], q[3];
