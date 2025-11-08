OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
t q[0];
h q[3];
t q[5];
cx q[5], q[6];
