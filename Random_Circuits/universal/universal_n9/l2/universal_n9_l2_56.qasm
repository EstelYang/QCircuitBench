OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[7];
cx q[8], q[7];
