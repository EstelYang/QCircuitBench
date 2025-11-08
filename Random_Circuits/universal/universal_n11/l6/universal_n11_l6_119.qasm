OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[6], q[5];
s q[4];
s q[7];
cx q[3], q[8];
s q[4];
h q[7];
