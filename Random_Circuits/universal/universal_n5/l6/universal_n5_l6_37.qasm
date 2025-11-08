OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[3], q[4];
cx q[3], q[0];
s q[0];
t q[1];
h q[3];
t q[3];
