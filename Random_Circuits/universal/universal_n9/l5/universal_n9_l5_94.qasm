OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[7], q[5];
cx q[7], q[4];
cx q[2], q[5];
cx q[7], q[5];
s q[8];
