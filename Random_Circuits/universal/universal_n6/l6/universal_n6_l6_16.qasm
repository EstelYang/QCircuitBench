OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
t q[2];
h q[5];
cx q[1], q[5];
h q[1];
cx q[0], q[5];
cx q[4], q[3];
