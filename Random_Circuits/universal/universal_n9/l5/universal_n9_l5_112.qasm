OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[3];
s q[0];
h q[0];
cx q[8], q[2];
t q[4];
