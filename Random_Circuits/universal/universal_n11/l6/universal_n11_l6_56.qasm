OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[0];
h q[0];
cx q[4], q[3];
cx q[10], q[5];
h q[5];
cx q[9], q[8];
