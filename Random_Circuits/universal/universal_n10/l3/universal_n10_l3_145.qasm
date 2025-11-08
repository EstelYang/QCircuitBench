OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[2], q[7];
s q[4];
cx q[7], q[4];
