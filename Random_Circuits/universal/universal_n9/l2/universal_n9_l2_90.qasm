OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[7], q[1];
h q[3];
