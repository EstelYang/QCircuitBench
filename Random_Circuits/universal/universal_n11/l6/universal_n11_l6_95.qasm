OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[5];
h q[1];
s q[8];
t q[0];
cx q[4], q[8];
t q[7];
