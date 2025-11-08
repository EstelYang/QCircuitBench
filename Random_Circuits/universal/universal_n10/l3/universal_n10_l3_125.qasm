OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
h q[9];
cx q[5], q[8];
h q[4];
