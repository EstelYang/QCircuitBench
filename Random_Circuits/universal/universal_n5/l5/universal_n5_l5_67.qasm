OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[3], q[4];
s q[1];
t q[3];
s q[0];
cx q[0], q[1];
