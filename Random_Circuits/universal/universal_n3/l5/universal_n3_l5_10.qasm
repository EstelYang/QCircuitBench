OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
s q[1];
s q[0];
cx q[0], q[2];
h q[1];
t q[0];
