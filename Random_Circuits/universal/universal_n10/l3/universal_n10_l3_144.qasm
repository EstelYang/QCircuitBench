OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[9], q[0];
cx q[1], q[3];
h q[2];
