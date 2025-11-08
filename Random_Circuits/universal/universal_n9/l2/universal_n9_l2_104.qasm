OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[8];
cx q[2], q[8];
