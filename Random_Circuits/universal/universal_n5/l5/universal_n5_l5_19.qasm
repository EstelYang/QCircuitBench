OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
h q[1];
t q[4];
s q[4];
cx q[3], q[4];
s q[0];
