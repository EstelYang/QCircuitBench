OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
t q[1];
s q[1];
s q[1];
cx q[1], q[0];
