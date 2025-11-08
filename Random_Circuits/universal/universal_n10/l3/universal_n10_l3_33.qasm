OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[8], q[3];
cx q[2], q[8];
h q[2];
