OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[3];
cx q[10], q[9];
h q[9];
h q[8];
h q[4];
h q[9];
