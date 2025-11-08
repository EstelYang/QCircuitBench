OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
t q[3];
cx q[0], q[2];
s q[0];
