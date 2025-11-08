OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
s q[1];
cx q[4], q[2];
s q[2];
t q[4];
t q[4];
h q[1];
