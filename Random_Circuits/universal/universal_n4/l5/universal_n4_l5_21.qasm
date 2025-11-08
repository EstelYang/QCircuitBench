OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
s q[1];
t q[0];
s q[3];
h q[2];
cx q[2], q[0];
