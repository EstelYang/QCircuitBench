OPENQASM 3.0;
include "stdgates.inc";
qubit[2] q;
cx q[1], q[0];
s q[0];
t q[1];
