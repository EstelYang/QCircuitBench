OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[7], q[4];
h q[0];
t q[5];
t q[2];
h q[5];
