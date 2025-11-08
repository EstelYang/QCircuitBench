OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[7];
t q[5];
cx q[2], q[8];
t q[0];
h q[6];
t q[7];
