OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[2], q[6];
h q[3];
cx q[9], q[5];
