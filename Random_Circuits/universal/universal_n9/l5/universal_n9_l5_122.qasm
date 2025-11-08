OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
t q[3];
cx q[6], q[3];
cx q[7], q[1];
t q[5];
cx q[3], q[6];
