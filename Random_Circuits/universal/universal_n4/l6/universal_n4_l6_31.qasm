OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
h q[3];
h q[3];
s q[1];
cx q[0], q[3];
s q[0];
cx q[3], q[0];
