OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[5];
cx q[3], q[2];
s q[1];
h q[6];
h q[7];
h q[5];
