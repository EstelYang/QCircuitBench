OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
s q[9];
h q[7];
cx q[0], q[5];
