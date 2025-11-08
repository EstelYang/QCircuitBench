OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
cx q[2], q[0];
s q[6];
