OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[10], q[2];
s q[10];
h q[3];
cx q[9], q[0];
cx q[6], q[3];
cx q[7], q[1];
