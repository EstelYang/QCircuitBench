OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[6], q[1];
cx q[4], q[5];
t q[7];
