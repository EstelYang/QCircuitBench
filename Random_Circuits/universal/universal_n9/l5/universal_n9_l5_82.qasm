OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[2];
h q[5];
h q[5];
cx q[7], q[6];
cx q[6], q[2];
