OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[4], q[6];
h q[6];
cx q[4], q[6];
t q[4];
