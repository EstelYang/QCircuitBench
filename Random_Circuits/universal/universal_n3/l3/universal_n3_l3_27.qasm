OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
h q[2];
cx q[0], q[1];
s q[0];
