OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[6];
s q[6];
cx q[3], q[1];
t q[5];
cx q[0], q[5];
