OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[8], q[5];
t q[6];
cx q[5], q[4];
h q[4];
t q[0];
