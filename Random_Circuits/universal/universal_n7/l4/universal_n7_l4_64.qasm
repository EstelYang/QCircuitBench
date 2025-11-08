OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[3], q[4];
cx q[5], q[0];
h q[6];
t q[3];
