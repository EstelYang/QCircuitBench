OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[6], q[1];
cx q[1], q[2];
