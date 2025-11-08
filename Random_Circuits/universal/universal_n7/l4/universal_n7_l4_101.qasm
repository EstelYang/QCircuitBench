OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[2], q[1];
t q[3];
s q[0];
h q[1];
