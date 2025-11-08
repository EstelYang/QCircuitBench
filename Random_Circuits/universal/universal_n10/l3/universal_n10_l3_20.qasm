OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
t q[8];
t q[9];
cx q[3], q[8];
