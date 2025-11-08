OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
cx q[5], q[3];
s q[3];
s q[5];
h q[5];
cx q[3], q[5];
h q[2];
