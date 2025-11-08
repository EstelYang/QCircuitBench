OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[4], q[6];
s q[4];
h q[8];
