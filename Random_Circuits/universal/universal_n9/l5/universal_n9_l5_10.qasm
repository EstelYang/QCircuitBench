OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[7], q[6];
h q[8];
h q[6];
s q[6];
cx q[6], q[0];
