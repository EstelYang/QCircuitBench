OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[0];
s q[7];
h q[1];
cx q[8], q[1];
cx q[1], q[6];
h q[9];
