OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
cx q[5], q[1];
h q[5];
s q[4];
h q[4];
h q[3];
h q[4];
