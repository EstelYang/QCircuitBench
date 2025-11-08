OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[2], q[8];
cx q[6], q[1];
t q[6];
