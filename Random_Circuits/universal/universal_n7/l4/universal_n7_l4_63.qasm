OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[0], q[4];
t q[5];
t q[0];
s q[1];
