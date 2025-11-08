OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[0], q[4];
s q[1];
h q[3];
