OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
s q[2];
cx q[6], q[9];
t q[8];
