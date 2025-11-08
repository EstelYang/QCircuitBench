OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
t q[7];
s q[0];
h q[7];
cx q[0], q[3];
t q[9];
cx q[7], q[3];
