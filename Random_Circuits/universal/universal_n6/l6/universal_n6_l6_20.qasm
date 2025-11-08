OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
cx q[4], q[0];
s q[2];
t q[2];
h q[1];
t q[3];
h q[4];
