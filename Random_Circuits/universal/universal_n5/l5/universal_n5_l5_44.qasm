OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
t q[3];
s q[1];
h q[0];
h q[0];
cx q[0], q[4];
