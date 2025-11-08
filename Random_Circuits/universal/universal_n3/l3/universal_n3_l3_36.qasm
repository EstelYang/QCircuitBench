OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
s q[0];
h q[2];
cx q[0], q[1];
