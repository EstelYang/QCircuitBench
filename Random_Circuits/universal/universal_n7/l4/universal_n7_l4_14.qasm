OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[2], q[1];
s q[0];
cx q[5], q[4];
t q[4];
