OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
s q[7];
cx q[7], q[4];
t q[8];
