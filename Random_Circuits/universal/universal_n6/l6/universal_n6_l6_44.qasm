OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
cx q[2], q[3];
h q[1];
cx q[4], q[5];
s q[0];
s q[1];
h q[3];
