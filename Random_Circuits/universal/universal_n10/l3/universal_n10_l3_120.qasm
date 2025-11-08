OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
h q[5];
s q[3];
cx q[9], q[1];
