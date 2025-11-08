OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[0], q[8];
h q[4];
h q[4];
t q[3];
t q[2];
