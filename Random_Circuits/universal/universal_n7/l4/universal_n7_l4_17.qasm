OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
s q[6];
t q[1];
h q[0];
cx q[0], q[4];
