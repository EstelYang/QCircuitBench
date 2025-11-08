OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[0], q[2];
cx q[5], q[4];
h q[5];
cx q[8], q[1];
cx q[7], q[1];
