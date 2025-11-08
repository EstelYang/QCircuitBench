OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
t q[0];
cx q[0], q[1];
s q[0];
s q[2];
t q[4];
t q[1];
