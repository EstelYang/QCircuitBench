OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[9];
cx q[4], q[9];
cx q[9], q[6];
t q[3];
s q[8];
cx q[0], q[7];
