OPENQASM 3.0;
include "stdgates.inc";
qubit[2] q;
t q[0];
cx q[0], q[1];
s q[0];
