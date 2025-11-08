OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[0];
cx q[9], q[6];
t q[2];
t q[1];
cx q[5], q[0];
s q[8];
