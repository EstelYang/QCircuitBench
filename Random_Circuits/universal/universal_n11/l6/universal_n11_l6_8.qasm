OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[2], q[6];
s q[7];
h q[9];
h q[0];
s q[4];
cx q[3], q[0];
