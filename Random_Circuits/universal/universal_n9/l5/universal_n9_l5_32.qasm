OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[8];
t q[4];
cx q[0], q[6];
s q[6];
cx q[8], q[0];
