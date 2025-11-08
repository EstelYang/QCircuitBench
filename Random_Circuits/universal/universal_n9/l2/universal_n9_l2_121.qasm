OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[8], q[4];
h q[3];
