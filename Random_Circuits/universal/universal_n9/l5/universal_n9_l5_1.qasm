OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[1];
s q[3];
cx q[1], q[0];
t q[6];
t q[7];
