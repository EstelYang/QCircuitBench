OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[3], q[1];
h q[1];
cx q[3], q[4];
h q[2];
h q[0];
