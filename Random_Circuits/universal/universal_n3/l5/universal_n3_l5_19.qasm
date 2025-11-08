OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
t q[1];
t q[2];
cx q[1], q[2];
s q[1];
t q[0];
