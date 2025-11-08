OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[4], q[0];
s q[2];
