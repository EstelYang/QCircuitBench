OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
s q[8];
cx q[6], q[3];
h q[4];
