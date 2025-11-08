OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[5], q[3];
cx q[9], q[2];
t q[2];
