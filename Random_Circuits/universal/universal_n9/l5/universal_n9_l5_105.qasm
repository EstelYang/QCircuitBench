OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[7], q[4];
h q[5];
h q[8];
h q[4];
cx q[5], q[2];
