OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[0];
cx q[0], q[2];
s q[2];
h q[6];
