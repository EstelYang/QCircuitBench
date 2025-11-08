OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
t q[9];
cx q[9], q[4];
s q[4];
