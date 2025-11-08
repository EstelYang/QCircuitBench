OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
s q[2];
cx q[0], q[3];
h q[0];
h q[2];
s q[2];
cx q[0], q[3];
