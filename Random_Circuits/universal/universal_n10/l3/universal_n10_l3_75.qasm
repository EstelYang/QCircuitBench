OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
t q[2];
t q[1];
cx q[1], q[9];
