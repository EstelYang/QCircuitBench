OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[7], q[1];
t q[9];
t q[2];
