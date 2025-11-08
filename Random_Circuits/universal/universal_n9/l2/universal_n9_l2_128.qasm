OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[3], q[0];
s q[0];
