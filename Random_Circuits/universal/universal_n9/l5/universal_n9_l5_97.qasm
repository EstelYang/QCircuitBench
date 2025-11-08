OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[2];
s q[4];
cx q[8], q[4];
t q[0];
h q[3];
