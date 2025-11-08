OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[6];
t q[9];
cx q[4], q[9];
h q[10];
cx q[0], q[3];
cx q[8], q[0];
