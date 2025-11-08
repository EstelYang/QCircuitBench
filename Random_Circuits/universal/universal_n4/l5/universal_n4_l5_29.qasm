OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[2], q[3];
t q[0];
t q[3];
s q[0];
cx q[2], q[1];
