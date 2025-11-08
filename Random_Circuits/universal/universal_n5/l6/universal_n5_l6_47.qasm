OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[4], q[0];
cx q[3], q[2];
t q[1];
cx q[4], q[3];
h q[4];
cx q[2], q[0];
