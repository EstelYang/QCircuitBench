OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
cx q[0], q[1];
t q[2];
s q[2];
