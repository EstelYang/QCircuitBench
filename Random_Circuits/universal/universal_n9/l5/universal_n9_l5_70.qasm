OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[8], q[7];
h q[8];
cx q[3], q[5];
h q[1];
h q[7];
