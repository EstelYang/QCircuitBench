OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[4], q[1];
h q[1];
cx q[1], q[0];
cx q[1], q[2];
h q[0];
