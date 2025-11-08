OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[1];
cx q[2], q[1];
h q[2];
cx q[3], q[2];
cx q[2], q[0];
