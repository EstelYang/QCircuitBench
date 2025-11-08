OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[1], q[6];
cx q[1], q[2];
s q[6];
