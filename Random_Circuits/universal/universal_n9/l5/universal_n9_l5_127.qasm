OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[5];
h q[0];
h q[5];
s q[0];
cx q[4], q[6];
