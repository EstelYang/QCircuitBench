OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[5];
cx q[3], q[4];
h q[5];
h q[0];
