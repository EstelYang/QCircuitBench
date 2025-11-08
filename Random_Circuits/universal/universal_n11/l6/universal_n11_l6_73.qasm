OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[1];
cx q[0], q[2];
s q[6];
h q[9];
t q[0];
cx q[0], q[7];
