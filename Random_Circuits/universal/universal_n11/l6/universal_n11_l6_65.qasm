OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[0];
s q[6];
cx q[2], q[5];
cx q[5], q[9];
t q[10];
cx q[2], q[4];
