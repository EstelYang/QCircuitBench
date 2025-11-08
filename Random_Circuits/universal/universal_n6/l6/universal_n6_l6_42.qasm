OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
cx q[1], q[4];
h q[5];
cx q[1], q[5];
h q[4];
s q[3];
s q[5];
