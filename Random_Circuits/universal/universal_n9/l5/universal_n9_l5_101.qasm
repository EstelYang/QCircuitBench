OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[2];
cx q[8], q[3];
cx q[1], q[6];
s q[7];
s q[7];
