OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[0], q[1];
h q[0];
h q[4];
cx q[0], q[1];
h q[0];
