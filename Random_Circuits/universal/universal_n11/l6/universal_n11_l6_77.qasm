OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[1];
t q[6];
cx q[7], q[5];
t q[7];
h q[2];
h q[1];
