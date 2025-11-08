OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[6], q[2];
s q[6];
cx q[6], q[8];
