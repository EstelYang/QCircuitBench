OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
s q[0];
h q[9];
cx q[1], q[6];
