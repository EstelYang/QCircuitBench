OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[4], q[6];
h q[0];
cx q[1], q[3];
cx q[6], q[0];
