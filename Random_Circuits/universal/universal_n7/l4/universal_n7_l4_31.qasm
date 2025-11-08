OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[4], q[6];
h q[4];
s q[4];
s q[4];
