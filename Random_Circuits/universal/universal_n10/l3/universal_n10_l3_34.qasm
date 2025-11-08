OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
h q[7];
cx q[5], q[8];
cx q[1], q[3];
