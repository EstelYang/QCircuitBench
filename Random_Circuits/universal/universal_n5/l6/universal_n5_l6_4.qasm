OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
s q[3];
cx q[0], q[4];
s q[4];
h q[1];
h q[3];
s q[0];
