OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[0];
cx q[1], q[0];
s q[0];
t q[0];
t q[8];
