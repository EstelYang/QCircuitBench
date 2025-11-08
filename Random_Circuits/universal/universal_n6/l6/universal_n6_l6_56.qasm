OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
cx q[1], q[4];
t q[3];
h q[5];
cx q[3], q[4];
t q[5];
h q[2];
