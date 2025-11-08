OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[8];
cx q[3], q[8];
cx q[3], q[2];
cx q[4], q[7];
s q[0];
