OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[5], q[1];
cx q[9], q[3];
cx q[1], q[10];
h q[3];
cx q[4], q[0];
s q[4];
