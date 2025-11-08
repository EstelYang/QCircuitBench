OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[9], q[5];
cx q[4], q[5];
cx q[4], q[8];
s q[1];
h q[3];
cx q[8], q[4];
