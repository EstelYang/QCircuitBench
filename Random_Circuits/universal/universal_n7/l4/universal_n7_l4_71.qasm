OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
s q[0];
cx q[0], q[1];
cx q[0], q[3];
t q[1];
