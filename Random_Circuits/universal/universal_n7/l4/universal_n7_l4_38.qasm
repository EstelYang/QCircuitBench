OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
t q[5];
s q[1];
cx q[0], q[4];
s q[0];
