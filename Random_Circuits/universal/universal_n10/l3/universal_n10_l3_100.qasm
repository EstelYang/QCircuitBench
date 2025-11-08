OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
s q[6];
cx q[5], q[8];
t q[9];
