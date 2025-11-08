OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[9], q[8];
t q[1];
t q[8];
