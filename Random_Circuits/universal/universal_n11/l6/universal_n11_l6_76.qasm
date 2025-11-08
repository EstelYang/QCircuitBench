OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[3], q[0];
cx q[3], q[6];
cx q[9], q[0];
t q[3];
h q[10];
h q[0];
