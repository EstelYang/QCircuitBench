OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[3], q[5];
cx q[1], q[6];
h q[7];
s q[5];
h q[9];
t q[7];
