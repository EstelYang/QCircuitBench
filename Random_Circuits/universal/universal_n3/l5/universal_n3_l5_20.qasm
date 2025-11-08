OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
cx q[0], q[1];
s q[1];
t q[0];
t q[2];
h q[0];
