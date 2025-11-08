OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[4], q[1];
h q[1];
cx q[0], q[4];
