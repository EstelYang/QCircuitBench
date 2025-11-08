OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
cx q[2], q[1];
h q[2];
s q[1];
h q[0];
t q[0];
