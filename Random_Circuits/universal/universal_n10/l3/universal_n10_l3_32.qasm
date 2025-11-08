OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
h q[2];
cx q[8], q[7];
h q[1];
