OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
t q[1];
cx q[6], q[2];
t q[2];
s q[2];
