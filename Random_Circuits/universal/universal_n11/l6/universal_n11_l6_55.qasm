OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[0];
s q[0];
t q[3];
cx q[10], q[0];
t q[6];
t q[4];
