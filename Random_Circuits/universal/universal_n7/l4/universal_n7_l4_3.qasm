OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[2];
cx q[4], q[1];
t q[0];
t q[5];
