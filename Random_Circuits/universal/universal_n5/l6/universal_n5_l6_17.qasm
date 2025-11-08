OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[1];
t q[3];
cx q[4], q[0];
t q[2];
cx q[2], q[0];
t q[3];
