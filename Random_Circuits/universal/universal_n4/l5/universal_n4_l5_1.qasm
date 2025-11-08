OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[1], q[3];
t q[1];
t q[0];
s q[0];
t q[1];
