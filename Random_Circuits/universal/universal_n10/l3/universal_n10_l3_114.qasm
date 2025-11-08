OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[7], q[4];
s q[6];
cx q[0], q[1];
