OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
h q[3];
cx q[2], q[1];
h q[1];
cx q[1], q[3];
cx q[0], q[2];
