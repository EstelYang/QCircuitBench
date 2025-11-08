OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[3], q[1];
s q[2];
h q[1];
cx q[3], q[1];
s q[0];
h q[1];
