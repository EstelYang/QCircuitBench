OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
s q[6];
cx q[5], q[6];
h q[2];
s q[3];
