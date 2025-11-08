OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[2];
t q[5];
s q[7];
s q[5];
cx q[7], q[0];
