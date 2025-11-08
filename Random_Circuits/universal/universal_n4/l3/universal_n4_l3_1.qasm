OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[1], q[2];
t q[3];
s q[3];
