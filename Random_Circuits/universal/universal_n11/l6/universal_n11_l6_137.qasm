OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[9];
t q[4];
cx q[7], q[4];
cx q[10], q[4];
s q[9];
cx q[2], q[7];
