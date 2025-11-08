OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[0];
h q[4];
s q[3];
h q[3];
cx q[0], q[3];
