OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[2], q[1];
h q[1];
h q[1];
