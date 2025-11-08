OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[3], q[1];
cx q[3], q[1];
s q[8];
