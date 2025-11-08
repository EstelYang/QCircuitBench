OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[3];
cx q[6], q[5];
t q[6];
cx q[3], q[6];
