OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[2], q[1];
h q[3];
h q[0];
h q[2];
cx q[1], q[3];
h q[1];
