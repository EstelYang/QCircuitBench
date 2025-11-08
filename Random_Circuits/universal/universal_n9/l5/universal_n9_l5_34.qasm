OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[4], q[0];
cx q[4], q[1];
cx q[4], q[1];
t q[0];
t q[3];
