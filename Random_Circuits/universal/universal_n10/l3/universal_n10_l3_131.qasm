OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[0], q[5];
h q[7];
s q[5];
