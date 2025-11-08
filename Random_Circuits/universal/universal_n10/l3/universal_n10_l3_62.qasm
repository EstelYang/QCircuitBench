OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
s q[4];
cx q[0], q[1];
h q[7];
