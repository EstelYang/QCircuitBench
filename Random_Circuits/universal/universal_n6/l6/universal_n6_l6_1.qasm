OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
h q[2];
t q[0];
h q[4];
t q[0];
t q[3];
cx q[1], q[5];
