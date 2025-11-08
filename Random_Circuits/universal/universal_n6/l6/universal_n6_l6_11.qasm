OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
h q[5];
cx q[1], q[2];
s q[5];
cx q[4], q[1];
cx q[5], q[0];
s q[1];
