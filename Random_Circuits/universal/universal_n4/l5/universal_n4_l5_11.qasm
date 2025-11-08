OPENQASM 3.0;
include "stdgates.inc";
qubit[4] q;
cx q[0], q[1];
cx q[1], q[2];
h q[1];
s q[0];
cx q[1], q[0];
