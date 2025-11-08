OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[3];
cx q[0], q[4];
cx q[3], q[4];
s q[1];
h q[0];
