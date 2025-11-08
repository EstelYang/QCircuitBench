OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
t q[7];
cx q[0], q[2];
s q[3];
