OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
h q[2];
cx q[0], q[1];
h q[1];
cx q[0], q[3];
h q[1];
