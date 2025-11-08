OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
h q[2];
cx q[0], q[2];
