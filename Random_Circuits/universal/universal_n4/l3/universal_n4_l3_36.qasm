OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[3], q[1];
h q[2];
h q[3];
