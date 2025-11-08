OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[6];
cx q[2], q[5];
cx q[4], q[0];
s q[3];
