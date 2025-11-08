OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[3], q[8];
cx q[6], q[8];
h q[8];
t q[1];
h q[8];
