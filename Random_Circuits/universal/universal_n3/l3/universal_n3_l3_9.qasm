OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
t q[1];
cx q[0], q[2];
t q[0];
