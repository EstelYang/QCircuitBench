OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[1];
cx q[6], q[2];
h q[3];
cx q[6], q[7];
h q[7];
s q[8];
