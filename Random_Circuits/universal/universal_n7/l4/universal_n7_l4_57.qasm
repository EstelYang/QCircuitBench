OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[6];
cx q[2], q[0];
h q[6];
cx q[5], q[2];
