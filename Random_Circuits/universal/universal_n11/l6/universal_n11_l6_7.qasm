OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[4];
t q[9];
cx q[3], q[6];
t q[6];
h q[1];
cx q[3], q[5];
