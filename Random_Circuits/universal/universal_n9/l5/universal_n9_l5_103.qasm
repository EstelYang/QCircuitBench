OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[5];
cx q[1], q[0];
h q[6];
t q[7];
s q[2];
