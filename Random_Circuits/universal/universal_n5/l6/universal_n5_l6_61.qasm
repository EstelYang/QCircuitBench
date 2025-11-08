OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[2], q[4];
h q[1];
t q[1];
t q[0];
h q[2];
cx q[2], q[4];
