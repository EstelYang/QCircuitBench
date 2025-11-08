OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[3], q[0];
cx q[4], q[3];
t q[3];
t q[3];
s q[3];
