OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
t q[0];
t q[4];
t q[3];
cx q[2], q[1];
cx q[5], q[0];
h q[2];
