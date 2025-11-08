OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[1], q[0];
s q[6];
h q[4];
s q[4];
