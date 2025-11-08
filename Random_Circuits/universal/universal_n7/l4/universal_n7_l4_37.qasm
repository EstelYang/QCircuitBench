OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[3];
t q[5];
cx q[4], q[6];
h q[2];
