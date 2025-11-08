OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
s q[1];
cx q[1], q[3];
h q[2];
h q[4];
cx q[1], q[0];
h q[0];
