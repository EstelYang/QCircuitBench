OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[8], q[7];
cx q[2], q[0];
h q[2];
