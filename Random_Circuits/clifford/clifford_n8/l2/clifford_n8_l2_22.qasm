OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
cx q[4], q[7];
h q[7];
