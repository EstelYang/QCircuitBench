OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[7];
h q[1];
s q[3];
t q[5];
cx q[1], q[4];
