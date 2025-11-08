OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[0];
cx q[4], q[0];
cx q[4], q[6];
s q[6];
