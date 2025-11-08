OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
cx q[6], q[4];
h q[7];
s q[0];
cx q[8], q[5];
s q[1];
cx q[7], q[0];
