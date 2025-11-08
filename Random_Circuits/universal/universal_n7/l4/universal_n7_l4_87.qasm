OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
s q[0];
h q[1];
t q[4];
cx q[5], q[2];
