OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
h q[0];
cx q[0], q[2];
h q[0];
