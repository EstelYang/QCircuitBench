OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[1];
s q[7];
cx q[1], q[4];
cx q[3], q[8];
cx q[3], q[4];
cx q[3], q[7];
