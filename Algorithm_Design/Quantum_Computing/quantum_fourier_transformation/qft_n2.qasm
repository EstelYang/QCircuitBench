OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
qubit[2] q;
Psi q[0], q[1];
h q[1];
cp(pi/2) q[0], q[1];
h q[0];
swap q[0], q[1];
