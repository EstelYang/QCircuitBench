OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[0], q[1];
cx q[1], q[6];
s q[6];
h q[0];
