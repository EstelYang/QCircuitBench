OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
t q[2];
cx q[4], q[2];
cx q[3], q[0];
h q[3];
h q[1];
