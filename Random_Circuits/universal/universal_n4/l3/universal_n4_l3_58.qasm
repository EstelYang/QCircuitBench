OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[0], q[1];
cx q[3], q[2];
t q[2];
