OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
h q[4];
s q[1];
h q[2];
cx q[5], q[1];
t q[1];
h q[1];
