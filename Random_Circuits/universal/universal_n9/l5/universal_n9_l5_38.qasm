OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[6], q[4];
h q[0];
cx q[8], q[4];
cx q[6], q[1];
cx q[6], q[5];
