OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[1];
cx q[4], q[5];
s q[7];
t q[7];
cx q[0], q[7];
