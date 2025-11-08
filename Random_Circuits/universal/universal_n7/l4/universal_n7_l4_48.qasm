OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[3], q[4];
h q[2];
s q[4];
cx q[4], q[3];
