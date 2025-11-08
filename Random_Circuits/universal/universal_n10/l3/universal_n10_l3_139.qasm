OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
t q[6];
cx q[1], q[3];
cx q[1], q[4];
