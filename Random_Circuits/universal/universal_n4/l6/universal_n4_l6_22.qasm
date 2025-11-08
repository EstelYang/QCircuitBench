OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[3], q[1];
cx q[0], q[2];
s q[2];
t q[3];
s q[0];
t q[3];
