OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
s q[0];
t q[3];
cx q[2], q[0];
h q[3];
s q[2];
