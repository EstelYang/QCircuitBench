OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[0];
s q[3];
t q[1];
cx q[6], q[5];
