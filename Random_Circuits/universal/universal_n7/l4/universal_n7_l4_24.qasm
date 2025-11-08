OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[6];
s q[4];
s q[6];
cx q[6], q[4];
