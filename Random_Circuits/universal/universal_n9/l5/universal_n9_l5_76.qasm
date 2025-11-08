OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[6];
cx q[5], q[0];
s q[4];
cx q[2], q[3];
s q[4];
