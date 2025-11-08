OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[0], q[4];
cx q[3], q[0];
h q[1];
t q[0];
t q[4];
h q[2];
