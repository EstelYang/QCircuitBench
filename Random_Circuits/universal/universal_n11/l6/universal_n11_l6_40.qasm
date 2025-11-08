OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[2];
t q[0];
s q[6];
s q[4];
cx q[3], q[7];
t q[9];
