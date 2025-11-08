OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
s q[0];
cx q[6], q[4];
t q[8];
