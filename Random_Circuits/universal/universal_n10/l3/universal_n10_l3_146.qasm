OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[3], q[2];
t q[8];
cx q[5], q[7];
