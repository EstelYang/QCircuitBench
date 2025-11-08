OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
s q[2];
t q[0];
t q[5];
t q[0];
cx q[1], q[0];
t q[5];
