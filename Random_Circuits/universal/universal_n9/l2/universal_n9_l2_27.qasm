OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[4];
cx q[4], q[7];
