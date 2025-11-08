OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
s q[4];
cx q[0], q[3];
s q[0];
s q[1];
h q[0];
h q[3];
