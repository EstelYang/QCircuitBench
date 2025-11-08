OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[0];
cx q[4], q[2];
