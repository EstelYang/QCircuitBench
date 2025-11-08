OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[7], q[8];
cx q[4], q[8];
h q[7];
