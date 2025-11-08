OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
s q[4];
t q[5];
cx q[5], q[1];
cx q[4], q[3];
