OPENQASM 3.0;
include "stdgates.inc";
qubit[6] q;
h q[4];
cx q[1], q[2];
h q[5];
h q[0];
h q[3];
t q[5];
