OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[3];
cx q[8], q[3];
h q[5];
h q[8];
cx q[5], q[3];
h q[2];
