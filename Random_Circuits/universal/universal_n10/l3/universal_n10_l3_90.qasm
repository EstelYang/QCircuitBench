OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[6], q[0];
cx q[5], q[2];
cx q[9], q[0];
