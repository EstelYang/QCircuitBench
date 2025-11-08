OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[3];
cx q[3], q[5];
