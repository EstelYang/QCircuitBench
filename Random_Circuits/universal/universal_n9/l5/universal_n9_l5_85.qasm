OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[3];
t q[1];
cx q[3], q[2];
t q[7];
h q[1];
