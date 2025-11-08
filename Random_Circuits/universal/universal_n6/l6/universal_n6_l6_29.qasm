OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
s q[2];
h q[3];
s q[3];
h q[3];
h q[1];
cx q[5], q[3];
