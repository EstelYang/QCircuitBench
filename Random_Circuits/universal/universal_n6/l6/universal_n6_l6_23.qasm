OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
t q[5];
s q[3];
s q[0];
cx q[3], q[5];
s q[5];
s q[3];
