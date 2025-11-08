OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
h q[2];
t q[2];
s q[3];
s q[1];
cx q[0], q[2];
