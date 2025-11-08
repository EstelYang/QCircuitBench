OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
h q[1];
cx q[9], q[8];
cx q[6], q[9];
