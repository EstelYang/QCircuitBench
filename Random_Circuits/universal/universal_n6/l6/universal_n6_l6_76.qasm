OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
s q[3];
s q[4];
h q[1];
s q[5];
h q[3];
cx q[1], q[0];
