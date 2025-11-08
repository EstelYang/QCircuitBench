OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[7];
h q[3];
h q[8];
h q[4];
h q[4];
cx q[10], q[0];
