OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
h q[0];
cx q[7], q[8];
cx q[2], q[7];
cx q[2], q[8];
h q[5];
