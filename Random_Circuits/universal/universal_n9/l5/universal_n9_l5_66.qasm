OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[4];
cx q[0], q[7];
s q[1];
t q[6];
cx q[4], q[7];
