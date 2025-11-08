OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[4];
cx q[1], q[3];
s q[9];
cx q[0], q[6];
cx q[8], q[4];
h q[5];
