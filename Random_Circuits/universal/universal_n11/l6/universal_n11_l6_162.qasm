OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[10], q[1];
cx q[3], q[6];
s q[2];
cx q[1], q[0];
t q[2];
t q[1];
