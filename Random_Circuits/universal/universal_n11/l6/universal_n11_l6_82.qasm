OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[4];
t q[6];
cx q[4], q[1];
h q[4];
cx q[3], q[6];
s q[6];
