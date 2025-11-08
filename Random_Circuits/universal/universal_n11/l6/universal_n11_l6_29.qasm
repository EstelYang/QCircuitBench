OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[7];
t q[8];
cx q[9], q[1];
t q[6];
h q[8];
s q[0];
