OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
cx q[4], q[2];
h q[0];
cx q[0], q[3];
h q[3];
h q[0];
s q[2];
