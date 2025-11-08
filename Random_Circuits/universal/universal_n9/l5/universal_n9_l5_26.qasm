OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[8];
t q[8];
h q[4];
cx q[8], q[4];
cx q[0], q[1];
