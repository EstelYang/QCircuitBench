OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[7];
t q[4];
t q[6];
h q[6];
s q[0];
cx q[6], q[3];
