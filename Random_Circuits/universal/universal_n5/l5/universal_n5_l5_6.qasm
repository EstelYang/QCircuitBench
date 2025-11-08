OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[2];
cx q[2], q[3];
t q[0];
cx q[3], q[4];
cx q[2], q[4];
