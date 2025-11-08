OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[0], q[1];
t q[4];
cx q[8], q[0];
