OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
cx q[2], q[1];
cx q[2], q[0];
t q[2];
