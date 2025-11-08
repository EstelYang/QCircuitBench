OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[8];
t q[8];
cx q[5], q[3];
s q[5];
cx q[0], q[1];
