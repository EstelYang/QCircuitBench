OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[1], q[5];
s q[4];
t q[2];
