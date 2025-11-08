OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
h q[8];
t q[8];
t q[4];
cx q[1], q[6];
h q[7];
t q[1];
