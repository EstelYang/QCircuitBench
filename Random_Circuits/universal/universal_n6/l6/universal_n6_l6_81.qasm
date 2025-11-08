OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
h q[3];
h q[1];
s q[4];
cx q[3], q[4];
cx q[0], q[1];
s q[3];
