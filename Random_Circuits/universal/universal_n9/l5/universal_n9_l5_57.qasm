OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[7], q[6];
t q[7];
t q[6];
s q[0];
h q[3];
