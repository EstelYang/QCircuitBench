OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
h q[3];
cx q[1], q[3];
s q[0];
