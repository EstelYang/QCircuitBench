OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[4];
s q[4];
cx q[4], q[1];
s q[2];
s q[3];
cx q[4], q[0];
