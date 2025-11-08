OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[1];
cx q[0], q[4];
s q[0];
s q[0];
h q[4];
